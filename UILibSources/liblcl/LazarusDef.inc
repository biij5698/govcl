// 不使用自动生成的
// 这里主要是对自动生成做兼容和补充相关

function ToUnixTime(ADateTime: TDateTime): TUnixDateTime; inline;
begin
  Result := DateTimeToUnix(ADateTime);
end;

function UnixToTime(ADateTime: TUnixDateTime): TDateTime; inline;
begin
  Result := UnixToDateTime(ADateTime);
end;

function ToPChar(AStr: string): PChar; inline;
begin
  Result := PChar(AStr);
end;

// 一些初始
procedure InitLazarusDef;
begin
  // 注册与VCL中类名一致的TPngImage
  TPicture.RegisterFileFormat(TPngImage.GetFileExtensions, rsPortableNetworkGraphic, TPngImage);
end;

// TApplication
function Application_Instance: TApplication; extdecl;
begin
  Result := Application;
end;



{$IFDEF WINDOWS}
// 当IsLibrary = True时，是不会调用WidgetSet.CreateAppHandle方法
// 这时就需要手动去伪造一个 WidgetSet.AppHandle := CreateWindowsAppHandle;
// 这里的代码来自win32object.inc单元中 CreateAppHandle方法。
function CreateWindowsAppHandle: HWND;
var
  SysMenu: HMENU;
begin
  Result := CreateWindowW(@ClsNameW,
    PWideChar(UTF8ToUTF16(Application.Title)),
    WS_POPUP or WS_CLIPSIBLINGS or WS_SYSMENU or WS_MINIMIZEBOX, 0,
    0, 0, 0, 0, 0, HInstance, nil);
  if Result = 0 then
    Exit(0);
  AllocWindowInfo(Result);
  // remove useless menuitems from sysmenu
  SysMenu := Windows.GetSystemMenu(Result, False);
  Windows.DeleteMenu(SysMenu, SC_MAXIMIZE, MF_BYCOMMAND);
  Windows.DeleteMenu(SysMenu, SC_SIZE, MF_BYCOMMAND);
  Windows.DeleteMenu(SysMenu, SC_MOVE, MF_BYCOMMAND);
end;
{$ENDIF}

// 移动来自 MyLCL_Application.inc
procedure Application_Initialize(AObj: TApplication); extdecl;
begin
  AObj.Initialize;
{$IFDEF WINDOWS}
  WidgetSet.AppHandle := CreateWindowsAppHandle;
{$ENDIF}
end;

function Application_CreateForm(App: TApplication; AInitScale: LongBool): TForm; extdecl;
begin
  App.CreateForm(TGoForm, Result);
end;

procedure RemoveAllForms;
var
  C: TComponent;
  I: Integer;
begin
  for I := Application.ComponentCount - 1 downto 0 do
  begin
    C := Application.Components[I];
    if C is TCustomForm then
      C.Free;
  end;
end;

procedure Application_Run(AObj: TApplication); extdecl;
begin
  AObj.Run;
  // 在Run结束后手动释放Application中的Form，主要是考虑在非Delphi运行环境中造成的一些资源清理问题
  RemoveAllForms;
end;

//procedure Application_SetMainFormOnTaskBar(AObj: TApplication; Value: LongBool); extdecl;
//begin
//  AObj.MainFormOnTaskBar := Value;
//end;
//
//
//function Application_GetMainFormOnTaskBar(AObj: TApplication): LongBool; extdecl;
//begin
//  Result := AObj.MainFormOnTaskBar;
//end;

function Application_GetHandle(AObj: TApplication): THandle; extdecl;
begin
{$IFDEF WINDOWS}
   Result := WidgetSet.AppHandle;
{$ELSE}
  Result := 0;
{$ENDIF}
end;

procedure Application_SetHandle(AObj: TApplication; AValue: THandle); extdecl;
begin
  // 不允许设置
end;

// TForm

procedure Form_EnabledMaximize(AObj: TGoForm; AValue: Boolean); extdecl;
begin
  if AValue then
  begin
    if not(biMaximize in AObj.BorderIcons) then
      AObj.BorderIcons := AObj.BorderIcons + [biMaximize]
  end else
  begin
    if biMaximize in AObj.BorderIcons then
      AObj.BorderIcons := AObj.BorderIcons - [biMaximize]
  end;
end;

procedure Form_EnabledMinimize(AObj: TGoForm; AValue: Boolean); extdecl;
begin
  if AValue then
  begin
    if not(biMinimize in AObj.BorderIcons) then
      AObj.BorderIcons := AObj.BorderIcons + [biMinimize]
  end else
  begin
    if biMinimize in AObj.BorderIcons then
      AObj.BorderIcons := AObj.BorderIcons - [biMinimize]
  end;
end;

procedure Form_EnabledSystemMenu(AObj: TGoForm; AValue: Boolean); extdecl;
begin
  if AValue then
  begin
    if not(biSystemMenu in AObj.BorderIcons) then
      AObj.BorderIcons := AObj.BorderIcons + [biSystemMenu]
  end else
  begin
    if biSystemMenu in AObj.BorderIcons then
      AObj.BorderIcons := AObj.BorderIcons - [biSystemMenu]
  end;
end;

procedure Form_SetAllowDropFiles(AObj: TGoForm; AValue: LongBool); extdecl;
begin
  AObj.AllowDropFiles := AValue;
end;

function Form_GetAllowDropFiles(AObj: TGoForm): LongBool; extdecl;
begin
  Result := AObj.AllowDropFiles;
end;

procedure Form_SetOnDropFiles(AObj: TGoForm; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDropFiles := nil;
    EventClass.Remove(AObj, geDropFiles);
    Exit;
  end;
  AObj.OnDropFiles := @EventClass.FormOnDropFiles;
  EventClass.Add(AObj, geDropFiles, AEventId);
end;

procedure Form_SetOnDestroy(AObj: TGoForm; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDestroy := nil;
    EventClass.Remove(AObj, geDestroy);
    Exit;
  end;
  AObj.OnDestroy := @EventClass.OnDestroy;
  EventClass.Add(AObj, geDestroy, AEventId);
end;

procedure Form_SetOnConstrainedResize(AObj: TGoForm; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnConstrainedResize := nil;
    EventClass.Remove(AObj, geConstrainedResize);
    Exit;
  end;
  AObj.OnConstrainedResize := @EventClass.OnConstrainedResize;
  EventClass.Add(AObj, geConstrainedResize, AEventId);
end;

procedure Form_SetOnDeactivate(AObj: TGoForm; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDeactivate := nil;
    EventClass.Remove(AObj, geDeactivate);
    Exit;
  end;
  AObj.OnDeactivate := @EventClass.OnDeactivate;
  EventClass.Add(AObj, geDeactivate, AEventId);
end;

procedure Form_SetOnActivate(AObj: TGoForm; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnActivate := nil;
    EventClass.Remove(AObj, geActivate);
    Exit;
  end;
  AObj.OnActivate := @EventClass.OnActivate;
  EventClass.Add(AObj, geActivate, AEventId);
end;

// TEdit
//procedure Edit_SetTextHint(AObj: TEdit; AValue: PChar); extdecl;
//begin
//  AObj.TextHint := AValue;
//end;
//
//function Edit_GetTextHint(AObj: TEdit): PChar; extdecl;
//begin
//  Result := PChar(AObj.TextHint);
//end;
//
// mouse
function Mouse_Instance: TMouse; extdecl;
begin
  Result := Mouse;
end;

// screen
function Screen_Instance: TScreen; extdecl;
begin
  Result := Screen;
end;

function DTextToShortCut(AText: PChar): TShortCut; extdecl;
begin
  Result := TextToShortCut(AText);
end;

function DShortCutToText(AVal: TShortCut): PChar; extdecl;
begin
  Result := PChar(ShortCutToText(AVal));
end;

// TClipboard
function Clipboard_Instance: TClipboard; extdecl;
begin
  Result := Clipboard;
end;

function Clipboard_SetClipboard(NewClipboard: TClipboard): TClipboard; extdecl;
begin
  Result := SetClipboard(NewClipboard);
end;

// TMemoryStream
// function Write(const Buffer; Count: Longint): Longint;
function MemoryStream_Write(AObj: TMemoryStream; Buffer: Pointer; Count: Longint): Longint; extdecl;
begin
  Result := AObj.Write(Buffer^, Count);
end;

// function Read(var Buffer; Count: Longint): Longint;
function MemoryStream_Read(AObj: TMemoryStream; Buffer: Pointer; Count: Longint): Longint; extdecl;
begin
  Result := AObj.Read(Buffer^, Count);
end;

// TCanvas
// Canvas_BrushCopy
// Canvas_CopyRect
// Canvas_Draw1
// Canvas_Draw2
// Canvas_DrawFocusRect
// Canvas_FillRect
// Canvas_FrameRect
// Canvas_StretchDraw
// Canvas_TextRect1
// Canvas_TextRect2

procedure Canvas_BrushCopy(AObj: TCanvas; var Dest: TRect; Bitmap: TBitmap;
      var Source: TRect; Color: TColor); extdecl;
begin
  AObj.BrushCopy(Dest, Bitmap, Source, Color);
end;

procedure Canvas_CopyRect(AObj: TCanvas; var Dest: TRect; Canvas: TCanvas;
  var Source: TRect); extdecl;
begin
  AObj.CopyRect(Dest, Canvas, Source);
end;

procedure Canvas_Draw1(AObj: TCanvas; X, Y: Integer; Graphic: TGraphic); extdecl;
begin
  AObj.Draw(X, Y, Graphic);
end;

procedure Canvas_Draw2(AObj: TCanvas; X, Y: Integer; Graphic: TGraphic; Opacity: Byte); extdecl;
begin
  AObj.Draw(X, Y, Graphic);
end;

procedure Canvas_DrawFocusRect(AObj: TCanvas; var ARect: TRect); extdecl;
begin
  AObj.DrawFocusRect(ARect);
end;

procedure Canvas_FillRect(AObj: TCanvas; var Rect: TRect); extdecl;
begin
  AObj.FillRect(Rect);
end;

procedure Canvas_FrameRect(AObj: TCanvas; var Rect: TRect); extdecl;
begin
  AObj.FrameRect(Rect);
end;

procedure Canvas_StretchDraw(AObj: TCanvas; var Rect: TRect; Graphic: TGraphic); extdecl;
begin
  AObj.StretchDraw(Rect, Graphic);
end;

procedure Canvas_TextRect1(AObj: TCanvas; var Rect: TRect; X, Y: Integer; const Text: PChar); extdecl;
begin
  AObj.TextRect(Rect, X, Y, Text);
end;


// TPageSetupDialog

function PageSetupDialog_GetMarginLeft(AObj: TPageSetupDialog): Integer; extdecl;
begin
  Result := AObj.Margins.Left;
end;

procedure PageSetupDialog_SetMarginLeft(AObj: TPageSetupDialog; AValue: Integer); extdecl;
var
  LR: TRect;
begin
  LR := AObj.Margins;
  LR.Left := AValue;
  AObj.Margins := LR;
end;

function PageSetupDialog_GetMarginTop(AObj: TPageSetupDialog): Integer; extdecl;
begin
  Result :=  AObj.Margins.Top;
end;

procedure PageSetupDialog_SetMarginTop(AObj: TPageSetupDialog; AValue: Integer); extdecl;
var
  LR: TRect;
begin
  LR := AObj.Margins;
  LR.Top := AValue;
  AObj.Margins := LR;
end;

function PageSetupDialog_GetMarginRight(AObj: TPageSetupDialog): Integer; extdecl;
begin
  Result :=  AObj.Margins.Right;
end;

procedure PageSetupDialog_SetMarginRight(AObj: TPageSetupDialog; AValue: Integer); extdecl;
var
  LR: TRect;
begin
  LR := AObj.Margins;
  LR.Right := AValue;
  AObj.Margins := LR;
end;

function PageSetupDialog_GetMarginBottom(AObj: TPageSetupDialog): Integer; extdecl;
begin
  Result :=  AObj.Margins.Bottom;
end;

procedure PageSetupDialog_SetMarginBottom(AObj: TPageSetupDialog; AValue: Integer); extdecl;
var
  LR: TRect;
begin
  LR := AObj.Margins;
  LR.Bottom := AValue;
  AObj.Margins := LR;
end;


function DragObject_GetDragTarget(AObj: TDragObject): TControl; extdecl;
begin
  Result :=  AObj.DragTarget;
end;

procedure DragObject_SetDragTarget(AObj: TDragObject; AValue: TControl); extdecl;
begin
  AObj.DragTarget := AValue;
end;


type
// Note: tfComposited only supported by ThemeServices.DrawText
  TTextFormats = (tfBottom, tfCalcRect, tfCenter, tfEditControl, tfEndEllipsis,
    tfPathEllipsis, tfExpandTabs, tfExternalLeading, tfLeft, tfModifyString,
    tfNoClip, tfNoPrefix, tfRight, tfRtlReading, tfSingleLine, tfTop,
    tfVerticalCenter, tfWordBreak, tfHidePrefix, tfNoFullWidthCharBreak,
    tfPrefixOnly, tfTabStop, tfWordEllipsis, tfComposited);
  TTextFormat = set of TTextFormats;

(*

  TTextLayout = (tlTop, tlCenter, tlBottom);
  TTextStyle = packed record
    Alignment : TAlignment;  // TextRect Only: horizontal alignment
    Layout    : TTextLayout; // TextRect Only: vertical alignment
    SingleLine: boolean;     // If WordBreak is false then process #13, #10 as
    Clipping  : boolean;     // TextRect Only: Clip Text to passed Rectangle
    ExpandTabs: boolean;     // Replace #9 by apropriate amount of spaces (default is usually 8)
    ShowPrefix: boolean;     // TextRect Only: Process first single '&' per
    Wordbreak : boolean;     // TextRect Only: If line of text is too long
    Opaque    : boolean;     // TextRect: Fills background with current Brush
    SystemFont: Boolean;     // Use the system font instead of Canvas Font
    RightToLeft: Boolean;    //For RightToLeft text reading (Text Direction)
    EndEllipsis: Boolean;    // TextRect Only: If line of text is too long
  end;

  TAlignment = (taLeftJustify, taRightJustify, taCenter);

  TLeftRight = taLeftJustify..taRightJustify;

*)

function Canvas_TextRect2(AObj: TCanvas; var Rect: TRect; Text: PChar; var AOutStr: PChar; TextFormat: TTextFormat): Integer; extdecl;
var
  LStyle: TTextStyle;
begin
  Result := 0;
  if TTextFormats.tfSingleLine in TextFormat then
    LStyle.SingleLine := True;
  if TTextFormats.tfTop in TextFormat then
    LStyle.Layout := TTextLayout.tlTop
  else if TTextFormats.tfVerticalCenter in TextFormat then
    LStyle.Layout := TTextLayout.tlCenter
  else if TTextFormats.tfBottom in TextFormat then
    LStyle.Layout := TTextLayout.tlBottom;
  if TTextFormats.tfNoClip in TextFormat then
    LStyle.Clipping := True;
  if TTextFormats.tfExpandTabs in TextFormat then
    LStyle.ExpandTabs:= True;
  if not(tfHidePrefix in TextFormat) and not(tfNoPrefix in TextFormat) then
    LStyle.ShowPrefix := True;
  if TTextFormats.tfWordBreak in TextFormat then
    LStyle.Wordbreak:= True;
  if tfEndEllipsis in TextFormat then
    LStyle.EndEllipsis:= True;
  if TTextFormats.tfLeft in TextFormat then
    LStyle.Alignment:= taLeftJustify
  else if TTextFormats.tfCenter in TextFormat then
    LStyle.Alignment:=taCenter
  else if TTextFormats.tfRight in TextFormat then
    LStyle.Alignment:= taRightJustify;
  AObj.TextRect(Rect, Rect.Left, Rect.Top, Text, LStyle);
end;

// TImageList
// ImageList_Draw1
// ImageList_Draw2
// ImageList_DrawOverlay1
// ImageList_DrawOverlay2
// ImageList_GetIcon1
// ImageList_GetIcon2

procedure ImageList_Draw1(AObj: TImageList; Canvas: TCanvas; X, Y, Index: Integer; Enabled: LongBool); extdecl;
begin
  AObj.Draw(Canvas, X, Y, Index, Enabled);
end;

//procedure ImageList_Draw2(AObj: TImageList; Canvas: TCanvas; X, Y, Index: Integer;
//  ADrawingStyle: TDrawingStyle; AImageType: TImageType;
//  Enabled: LongBool); extdecl;
//begin
//  AObj.Draw(Canvas, X, Y, Index, ADrawingStyle, AImageType, Enabled);
//end;
  
procedure ImageList_DrawOverlay1(AObj: TImageList; Canvas: TCanvas; X, Y: Integer;
  ImageIndex: Integer; Overlay: TOverlay; Enabled: LongBool); extdecl;
begin
  AObj.DrawOverlay(Canvas, X, Y, ImageIndex, Overlay, Enabled);
end;
  
//procedure ImageList_DrawOverlay2(AObj: TImageList; Canvas: TCanvas; X, Y: Integer;
//  ImageIndex: Integer; Overlay: TOverlay; ADrawingStyle: TDrawingStyle;
//  AImageType: TImageType; Enabled: LongBool); extdecl;
//begin
//  AObj.DrawOverlay(Canvas, X, Y, ImageIndex, Overlay, ADrawingStyle, AImageType, Enabled);
//end;
  
procedure ImageList_GetIcon1(AObj: TImageList; Index: Integer; Image: TIcon); extdecl;
begin
  AObj.GetIcon(Index, Image);
end;

//procedure ImageList_GetIcon2(AObj: TImageList; Index: Integer; Image: TIcon; ADrawingStyle: TDrawingStyle; AImageType: TImageType); extdecl;
//begin
// // AObj.GetIcon(Index, Image, ADrawingStyle, AImageType);
//end;

//  TMonthCalendar
function MonthCalendar_GetDate(AObj: TMonthCalendar): TUnixDateTime; extdecl;
begin
  Result :=  ToUnixTime(AObj.DateTime);
end;

procedure MonthCalendar_SetDate(AObj: TMonthCalendar; AValue: TUnixDateTime); extdecl;
begin
  AObj.DateTime := UnixToTime(AValue);
end;


// TListView
function ListView_GetScrollBars(AObj: TListView): TScrollStyle; extdecl;
begin
  Result :=  AObj.ScrollBars;
end;

procedure ListView_SetScrollBars(AObj: TListView; AValue: TScrollStyle); extdecl;
begin
  AObj.ScrollBars := AValue;
end;

// 兼容版
procedure ListView_CustomSort(AObj: TListView; SortProc: Pointer; lParam: NativeInt); extdecl;
//var
  //LVSortProc: TLVCompareEvent;
begin
  //if Assigned(SortProc) then
    //Exit;
  //LVSortProc := AObj.OnCompare;
  AObj.SortType := stText;
  AObj.SortColumn := lParam;
  //AObj.OnCompare := LVSortProc;
  //AObj.AlphaSort;
end;

// TListView
procedure ListView_DeleteSelected(AObj: TListView); extdecl;
var
  I: Integer;
begin
  I := AObj.ItemIndex;
  if I <> -1 then
     AObj.Items.Delete(I);
end;


// TTreeView
function TreeView_GetScrollBars(AObj: TTreeView): TScrollStyle; extdecl;
begin
  Result :=  AObj.ScrollBars;
end;

procedure TreeView_SetScrollBars(AObj: TTreeView; AValue: TScrollStyle); extdecl;
begin
  AObj.ScrollBars := AValue;
end;

function TreeView_AlphaSort(AObj: TTreeView; ARecurse: LongBool): LongBool; extdecl;
begin
  Result := AObj.AlphaSort;
end;

procedure TreeView_DeleteSelected(AObj: TTreeView); extdecl;
var
  LNode: TTreeNode;
begin
  LNode := AObj.Selected;
  if LNode <> nil then
     LNode.Delete;
end;

 
// Other

procedure SetEventCallback(APtr: Pointer); extdecl;
begin
  GCallbackPtr := TCallbackPtr(APtr);
end;

procedure DGetParam(Index: NativeInt; AArr: Pointer; out P: TGoParam); extdecl;
begin
  P := PGoParam(PByte(AArr) + Index * SizeOf(TGoParam))^;
end;

// 从string数组中获取成员
function DGetStringArrOf(P: Pointer; AIndex: NativeInt): PChar; extdecl;
begin
  Result := PChar(PString(PByte(P) + AIndex * SizeOf(string))^);
end;

function DStrLen(p: PChar): NativeInt; extdecl;
begin
  Result := Length(p);
end;

procedure DMove(Src, Dest: Pointer; Len: NativeInt); extdecl;
begin
  Move(Src^, Dest^, Len);
end;

function DGetClassName(Obj: TObject): PChar; extdecl;
begin
  Result := PChar(string(Obj.ClassName));
end;

procedure DShowMessage(AMsg: PChar); extdecl;
begin
  ShowMessage(AMsg);
end;

function DGetMainInstance: HINST; extdecl;
begin
{$IFDEF WINDOWS}
  Result := GetModuleHandle(nil);
{$ELSE}
  Result := 0;
{$ENDIF}
end;

function DMessageDlg(const Msg: PChar; DlgType: TMsgDlgType;
  Buttons: TMsgDlgButtons; HelpCtx: Longint): Integer; extdecl;
begin
  Result := MessageDlg(Msg, DlgType, Buttons, HelpCtx);
end;

// 在主线程中运行
procedure DSynchronize(AId: NativeUInt); extdecl;
begin
  EventClass.ThreadEvtId := AId;
  TThread.Synchronize(nil, @EventClass.ThreadProc);
  EventClass.ThreadEvtId := 0;
  //TThread.Synchronize(
  //  procedure
  //  begin
  //    GCallbackPtr(AId, nil, 0);
  //  end of object);
end;

procedure DSysOpen(FileName: PChar); extdecl;
begin
 {$IFDEF WINDOWS}
   ShellExecute(0, nil, FileName, nil, nil, SW_SHOW);
 {$ELSE}
   OpenURL(FileName);
 {$ENDIF}
end;

// 不想导入包，所以干脆用delphi的得了
function DExtractFilePath(AFileName: PChar): PChar; extdecl;
begin
  Result := PChar(ExtractFilePath(AFileName));
end;

function DFileExists(AFileName: PChar): LongBool; extdecl;
begin
  Result := FileExists(AFileName);
end;

function DSelectDirectory1(var Directory: PChar;
  Options: TSelectDirOpts; HelpCtx: Longint): LongBool; extdecl;
var
  LDir: string;
begin
  Result := SelectDirectory(LDir, Options, HelpCtx);
  if Result then
    Directory := PChar(LDir);
end;

function DSelectDirectory2(Caption, Root: PChar;
  var Directory: PChar; Options: Cardinal{无效参数}; Parent: TWinControl{无效参数}): LongBool;  extdecl;
var
  LDir: string;
begin
  Result := SelectDirectory(Caption, Root, LDir, False, 0);
  if Result then
    Directory := PChar(LDir);
end;



function DInputBox(ACaption, APrompt, ADefault: PChar): PChar; extdecl;
begin
  Result := PChar(InputBox(ACaption, APrompt, ADefault));
end;

function DInputQuery(ACaption, APrompt: PChar; Value: PChar; out AOut: PChar): LongBool; extdecl;
var
  S: string;
begin
  S := Value;
  Result := InputQuery(string(ACaption), string(APrompt), S);
  if Result then
    AOut := PChar(S);
end;


procedure SetGlobalFormScaled(AVal: LongBool); extdecl;
begin
  Application.Scaled := AVal;
end;

// dylib
type
  TSyscall0  = function: UInt64; extdecl;
  TSyscall1  = function(A1: Pointer): UInt64; extdecl;
  TSyscall2  = function(A1, A2: Pointer): UInt64; extdecl;
  TSyscall3  = function(A1, A2, A3: Pointer): UInt64; extdecl;
  TSyscall4  = function(A1, A2, A3, A4: Pointer): UInt64; extdecl;
  TSyscall5  = function(A1, A2, A3, A4, A5: Pointer): UInt64; extdecl;
  TSyscall6  = function(A1, A2, A3, A4, A5, A6: Pointer): UInt64; extdecl;
  TSyscall7  = function(A1, A2, A3, A4, A5, A6, A7: Pointer): UInt64; extdecl;
  TSyscall8  = function(A1, A2, A3, A4, A5, A6, A7, A8: Pointer): UInt64; extdecl;
  TSyscall9  = function(A1, A2, A3, A4, A5, A6, A7, A8, A9: Pointer): UInt64; extdecl;
  TSyscall10 = function(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10: Pointer): UInt64; extdecl;
  TSyscall11 = function(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11: Pointer): UInt64; extdecl;
  TSyscall12 = function(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12: Pointer): UInt64; extdecl;

function MySyscall(AProc:Pointer; ALen: NativeInt; A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12: Pointer): UInt64; extdecl;
begin
  Result := 0;
  if AProc = nil then Exit;
  try
    case ALen of
      0 : Result := TSyscall0(AProc)();
      1 : Result := TSyscall1(AProc) (A1);
      2 : Result := TSyscall2(AProc) (A1, A2);
      3 : Result := TSyscall3(AProc) (A1, A2, A3);
      4 : Result := TSyscall4(AProc) (A1, A2, A3, A4);
      5 : Result := TSyscall5(AProc) (A1, A2, A3, A4, A5);
      6 : Result := TSyscall6(AProc) (A1, A2, A3, A4, A5, A6);
      7 : Result := TSyscall7(AProc) (A1, A2, A3, A4, A5, A6, A7);
      8 : Result := TSyscall8(AProc) (A1, A2, A3, A4, A5, A6, A7, A8);
      9 : Result := TSyscall9(AProc) (A1, A2, A3, A4, A5, A6, A7, A8, A9);
      10: Result := TSyscall10(AProc)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10);
      11: Result := TSyscall11(AProc)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11);
      12: Result := TSyscall12(AProc)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12);
    else
      Exit;
    end;
  except
    on E: Exception do
    begin
      if Assigned(Application) then
      begin
        if Assigned(Application.OnException) then
          Application.OnException(Application, E)
        else
          MessageDlg(E.Message,  mtError, [mbOK], 0);
      end else
        DebugLn('Syscall' + ALen.ToString + ' Error: ' + E.Message);
    end;
  end;
end;



exports
  // 导出动态调用的
  MySyscall,

  // TApplication
  Application_Instance,
  Application_CreateForm,
  Application_Run,
  SetGlobalFormScaled,
  //Application_SetMainFormOnTaskBar,
  //Application_GetMainFormOnTaskBar,
  Application_Initialize,
  Application_GetHandle,
  Application_SetHandle,

  // TForm
  Form_EnabledMaximize,
  Form_EnabledMinimize,
  Form_EnabledSystemMenu,
  Form_SetAllowDropFiles,
  Form_GetAllowDropFiles,
  Form_SetOnDropFiles,
  Form_SetOnDestroy,
  Form_SetOnConstrainedResize,
  Form_SetOnDeactivate,
  Form_SetOnActivate,

  // TEdit
  //Edit_SetTextHint,
  //Edit_GetTextHint,

  // TMouse
  Mouse_Instance,
  Screen_Instance,

  // Other
  SetEventCallback,
  DGetParam,
  DGetStringArrOf,
  DStrLen,
  DMove,
  DGetClassName,
  DShowMessage,
  DGetMainInstance,
  DSynchronize,
  DSysOpen,
  DTextToShortCut,
  DShortCutToText,
  DMessageDlg,
  DExtractFilePath,
  DFileExists,

  DSelectDirectory1,
  DSelectDirectory2,
  DInputBox,
  DInputQuery,

  // TMemoryStream
  MemoryStream_Write,
  MemoryStream_Read,

  // TClipboard
  Clipboard_Instance,
  Clipboard_SetClipboard,

  // TCanavs
  Canvas_BrushCopy,
  Canvas_CopyRect,
  Canvas_Draw1,
  Canvas_Draw2,
  Canvas_DrawFocusRect,
  Canvas_FillRect,
  Canvas_FrameRect,
  Canvas_StretchDraw,
  Canvas_TextRect1,
  Canvas_TextRect2,

  // TImageList
  ImageList_Draw1,
  //ImageList_Draw2,
  ImageList_DrawOverlay1,
  //ImageList_DrawOverlay2,
  ImageList_GetIcon1,
  //ImageList_GetIcon2,

  // TMonthCalendar
  MonthCalendar_GetDate,
  MonthCalendar_SetDate,

  // TListView
  ListView_GetScrollBars,
  ListView_SetScrollBars,
  ListView_CustomSort,
  ListView_DeleteSelected,

  // TTreeView
  TreeView_GetScrollBars,
  TreeView_SetScrollBars,
  TreeView_AlphaSort,
  TreeView_DeleteSelected,

  // TPageSetupDialog
  PageSetupDialog_GetMarginLeft,
  PageSetupDialog_SetMarginLeft,
  PageSetupDialog_GetMarginTop,
  PageSetupDialog_SetMarginTop,
  PageSetupDialog_GetMarginRight,
  PageSetupDialog_SetMarginRight,
  PageSetupDialog_GetMarginBottom,
  PageSetupDialog_SetMarginBottom,

  // TDragObject
  DragObject_GetDragTarget,
  DragObject_SetDragTarget,

  // Form uFormDesignerFile.pas
  ResFormLoadFromStream,
  ResFormLoadFromFile,
  ResFormLoadFromResourceName
;
