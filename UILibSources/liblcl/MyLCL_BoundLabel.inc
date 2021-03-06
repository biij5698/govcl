
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function BoundLabel_Create(AOwner: TComponent): TBoundLabel; extdecl;
begin
  Result :=  TBoundLabel.Create(AOwner);
end;

procedure BoundLabel_Free(AObj: TBoundLabel); extdecl;
begin
  AObj.Free;
end;

procedure BoundLabel_BringToFront(AObj: TBoundLabel); extdecl;
begin
  AObj.BringToFront;
end;

procedure BoundLabel_ClientToScreen(AObj: TBoundLabel; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure BoundLabel_ClientToParent(AObj: TBoundLabel; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function BoundLabel_Dragging(AObj: TBoundLabel): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function BoundLabel_HasParent(AObj: TBoundLabel): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure BoundLabel_Hide(AObj: TBoundLabel); extdecl;
begin
  AObj.Hide;
end;

procedure BoundLabel_Invalidate(AObj: TBoundLabel); extdecl;
begin
  AObj.Invalidate;
end;

function BoundLabel_Perform(AObj: TBoundLabel; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure BoundLabel_Refresh(AObj: TBoundLabel); extdecl;
begin
  AObj.Refresh;
end;

procedure BoundLabel_Repaint(AObj: TBoundLabel); extdecl;
begin
  AObj.Repaint;
end;

procedure BoundLabel_ScreenToClient(AObj: TBoundLabel; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure BoundLabel_ParentToClient(AObj: TBoundLabel; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure BoundLabel_SendToBack(AObj: TBoundLabel); extdecl;
begin
  AObj.SendToBack;
end;

procedure BoundLabel_SetBounds(AObj: TBoundLabel; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure BoundLabel_Show(AObj: TBoundLabel); extdecl;
begin
  AObj.Show;
end;

procedure BoundLabel_Update(AObj: TBoundLabel); extdecl;
begin
  AObj.Update;
end;

function BoundLabel_GetTextBuf(AObj: TBoundLabel; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function BoundLabel_GetTextLen(AObj: TBoundLabel): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

function BoundLabel_FindComponent(AObj: TBoundLabel; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function BoundLabel_GetNamePath(AObj: TBoundLabel): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure BoundLabel_Assign(AObj: TBoundLabel; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function BoundLabel_ClassType(AObj: TBoundLabel): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function BoundLabel_ClassName(AObj: TBoundLabel): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function BoundLabel_InstanceSize(AObj: TBoundLabel): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function BoundLabel_InheritsFrom(AObj: TBoundLabel; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function BoundLabel_Equals(AObj: TBoundLabel; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function BoundLabel_GetHashCode(AObj: TBoundLabel): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function BoundLabel_ToString(AObj: TBoundLabel): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function BoundLabel_GetBiDiMode(AObj: TBoundLabel): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure BoundLabel_SetBiDiMode(AObj: TBoundLabel; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function BoundLabel_GetCaption(AObj: TBoundLabel): PChar; extdecl;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure BoundLabel_SetCaption(AObj: TBoundLabel; AValue: PChar); extdecl;
begin
  AObj.Caption := AValue;
end;

function BoundLabel_GetColor(AObj: TBoundLabel): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure BoundLabel_SetColor(AObj: TBoundLabel; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function BoundLabel_GetDragCursor(AObj: TBoundLabel): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure BoundLabel_SetDragCursor(AObj: TBoundLabel; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function BoundLabel_GetDragMode(AObj: TBoundLabel): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure BoundLabel_SetDragMode(AObj: TBoundLabel; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function BoundLabel_GetFont(AObj: TBoundLabel): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure BoundLabel_SetFont(AObj: TBoundLabel; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function BoundLabel_GetHeight(AObj: TBoundLabel): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure BoundLabel_SetHeight(AObj: TBoundLabel; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function BoundLabel_GetLeft(AObj: TBoundLabel): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

function BoundLabel_GetParentColor(AObj: TBoundLabel): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure BoundLabel_SetParentColor(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function BoundLabel_GetParentFont(AObj: TBoundLabel): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure BoundLabel_SetParentFont(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function BoundLabel_GetParentShowHint(AObj: TBoundLabel): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure BoundLabel_SetParentShowHint(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function BoundLabel_GetPopupMenu(AObj: TBoundLabel): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure BoundLabel_SetPopupMenu(AObj: TBoundLabel; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function BoundLabel_GetShowAccelChar(AObj: TBoundLabel): LongBool; extdecl;
begin
  Result :=  AObj.ShowAccelChar;
end;

procedure BoundLabel_SetShowAccelChar(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  AObj.ShowAccelChar := AValue;
end;

function BoundLabel_GetShowHint(AObj: TBoundLabel): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure BoundLabel_SetShowHint(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function BoundLabel_GetTop(AObj: TBoundLabel): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

function BoundLabel_GetLayout(AObj: TBoundLabel): TTextLayout; extdecl;
begin
  Result :=  AObj.Layout;
end;

procedure BoundLabel_SetLayout(AObj: TBoundLabel; AValue: TTextLayout); extdecl;
begin
  AObj.Layout := AValue;
end;

function BoundLabel_GetWordWrap(AObj: TBoundLabel): LongBool; extdecl;
begin
  Result :=  AObj.WordWrap;
end;

procedure BoundLabel_SetWordWrap(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  AObj.WordWrap := AValue;
end;

function BoundLabel_GetWidth(AObj: TBoundLabel): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure BoundLabel_SetWidth(AObj: TBoundLabel; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

procedure BoundLabel_SetOnClick(AObj: TBoundLabel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnClick := nil;
    EventClass.Remove(AObj, geClick);
    Exit;
  end;
  AObj.OnClick := @EventClass.OnClick;
  EventClass.Add(AObj, geClick, AEventId);
end;

procedure BoundLabel_SetOnDblClick(AObj: TBoundLabel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDblClick := nil;
    EventClass.Remove(AObj, geDblClick);
    Exit;
  end;
  AObj.OnDblClick := @EventClass.OnDblClick;
  EventClass.Add(AObj, geDblClick, AEventId);
end;

procedure BoundLabel_SetOnDragDrop(AObj: TBoundLabel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragDrop := nil;
    EventClass.Remove(AObj, geDragDrop);
    Exit;
  end;
  AObj.OnDragDrop := @EventClass.OnDragDrop;
  EventClass.Add(AObj, geDragDrop, AEventId);
end;

procedure BoundLabel_SetOnDragOver(AObj: TBoundLabel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragOver := nil;
    EventClass.Remove(AObj, geDragOver);
    Exit;
  end;
  AObj.OnDragOver := @EventClass.OnDragOver;
  EventClass.Add(AObj, geDragOver, AEventId);
end;

procedure BoundLabel_SetOnEndDrag(AObj: TBoundLabel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDrag := nil;
    EventClass.Remove(AObj, geEndDrag);
    Exit;
  end;
  AObj.OnEndDrag := @EventClass.OnEndDrag;
  EventClass.Add(AObj, geEndDrag, AEventId);
end;

procedure BoundLabel_SetOnMouseDown(AObj: TBoundLabel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseDown := nil;
    EventClass.Remove(AObj, geMouseDown);
    Exit;
  end;
  AObj.OnMouseDown := @EventClass.OnMouseDown;
  EventClass.Add(AObj, geMouseDown, AEventId);
end;

procedure BoundLabel_SetOnMouseMove(AObj: TBoundLabel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseMove := nil;
    EventClass.Remove(AObj, geMouseMove);
    Exit;
  end;
  AObj.OnMouseMove := @EventClass.OnMouseMove;
  EventClass.Add(AObj, geMouseMove, AEventId);
end;

procedure BoundLabel_SetOnMouseUp(AObj: TBoundLabel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseUp := nil;
    EventClass.Remove(AObj, geMouseUp);
    Exit;
  end;
  AObj.OnMouseUp := @EventClass.OnMouseUp;
  EventClass.Add(AObj, geMouseUp, AEventId);
end;

function BoundLabel_GetCanvas(AObj: TBoundLabel): TCanvas; extdecl;
begin
  Result :=  AObj.Canvas;
end;

function BoundLabel_GetEnabled(AObj: TBoundLabel): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure BoundLabel_SetEnabled(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function BoundLabel_GetAction(AObj: TBoundLabel): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure BoundLabel_SetAction(AObj: TBoundLabel; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

function BoundLabel_GetAlign(AObj: TBoundLabel): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure BoundLabel_SetAlign(AObj: TBoundLabel; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function BoundLabel_GetAnchors(AObj: TBoundLabel): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure BoundLabel_SetAnchors(AObj: TBoundLabel; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

procedure BoundLabel_GetBoundsRect(AObj: TBoundLabel; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure BoundLabel_SetBoundsRect(AObj: TBoundLabel; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function BoundLabel_GetClientHeight(AObj: TBoundLabel): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure BoundLabel_SetClientHeight(AObj: TBoundLabel; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure BoundLabel_GetClientRect(AObj: TBoundLabel; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function BoundLabel_GetClientWidth(AObj: TBoundLabel): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure BoundLabel_SetClientWidth(AObj: TBoundLabel; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function BoundLabel_GetFloating(AObj: TBoundLabel): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function BoundLabel_GetVisible(AObj: TBoundLabel): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure BoundLabel_SetVisible(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

function BoundLabel_GetParent(AObj: TBoundLabel): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure BoundLabel_SetParent(AObj: TBoundLabel; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function BoundLabel_GetCursor(AObj: TBoundLabel): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure BoundLabel_SetCursor(AObj: TBoundLabel; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function BoundLabel_GetHint(AObj: TBoundLabel): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure BoundLabel_SetHint(AObj: TBoundLabel; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function BoundLabel_GetComponentCount(AObj: TBoundLabel): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function BoundLabel_GetComponentIndex(AObj: TBoundLabel): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure BoundLabel_SetComponentIndex(AObj: TBoundLabel; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function BoundLabel_GetOwner(AObj: TBoundLabel): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function BoundLabel_GetName(AObj: TBoundLabel): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure BoundLabel_SetName(AObj: TBoundLabel; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function BoundLabel_GetTag(AObj: TBoundLabel): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure BoundLabel_SetTag(AObj: TBoundLabel; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function BoundLabel_GetComponents(AObj: TBoundLabel; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function BoundLabel_StaticClassType: TClass; extdecl;
begin
  Result := TBoundLabel;
end;

exports
  BoundLabel_Create,
  BoundLabel_Free,
  BoundLabel_BringToFront,
  BoundLabel_ClientToScreen,
  BoundLabel_ClientToParent,
  BoundLabel_Dragging,
  BoundLabel_HasParent,
  BoundLabel_Hide,
  BoundLabel_Invalidate,
  BoundLabel_Perform,
  BoundLabel_Refresh,
  BoundLabel_Repaint,
  BoundLabel_ScreenToClient,
  BoundLabel_ParentToClient,
  BoundLabel_SendToBack,
  BoundLabel_SetBounds,
  BoundLabel_Show,
  BoundLabel_Update,
  BoundLabel_GetTextBuf,
  BoundLabel_GetTextLen,
  BoundLabel_FindComponent,
  BoundLabel_GetNamePath,
  BoundLabel_Assign,
  BoundLabel_ClassType,
  BoundLabel_ClassName,
  BoundLabel_InstanceSize,
  BoundLabel_InheritsFrom,
  BoundLabel_Equals,
  BoundLabel_GetHashCode,
  BoundLabel_ToString,
  BoundLabel_GetBiDiMode,
  BoundLabel_SetBiDiMode,
  BoundLabel_GetCaption,
  BoundLabel_SetCaption,
  BoundLabel_GetColor,
  BoundLabel_SetColor,
  BoundLabel_GetDragCursor,
  BoundLabel_SetDragCursor,
  BoundLabel_GetDragMode,
  BoundLabel_SetDragMode,
  BoundLabel_GetFont,
  BoundLabel_SetFont,
  BoundLabel_GetHeight,
  BoundLabel_SetHeight,
  BoundLabel_GetLeft,
  BoundLabel_GetParentColor,
  BoundLabel_SetParentColor,
  BoundLabel_GetParentFont,
  BoundLabel_SetParentFont,
  BoundLabel_GetParentShowHint,
  BoundLabel_SetParentShowHint,
  BoundLabel_GetPopupMenu,
  BoundLabel_SetPopupMenu,
  BoundLabel_GetShowAccelChar,
  BoundLabel_SetShowAccelChar,
  BoundLabel_GetShowHint,
  BoundLabel_SetShowHint,
  BoundLabel_GetTop,
  BoundLabel_GetLayout,
  BoundLabel_SetLayout,
  BoundLabel_GetWordWrap,
  BoundLabel_SetWordWrap,
  BoundLabel_GetWidth,
  BoundLabel_SetWidth,
  BoundLabel_SetOnClick,
  BoundLabel_SetOnDblClick,
  BoundLabel_SetOnDragDrop,
  BoundLabel_SetOnDragOver,
  BoundLabel_SetOnEndDrag,
  BoundLabel_SetOnMouseDown,
  BoundLabel_SetOnMouseMove,
  BoundLabel_SetOnMouseUp,
  BoundLabel_GetCanvas,
  BoundLabel_GetEnabled,
  BoundLabel_SetEnabled,
  BoundLabel_GetAction,
  BoundLabel_SetAction,
  BoundLabel_GetAlign,
  BoundLabel_SetAlign,
  BoundLabel_GetAnchors,
  BoundLabel_SetAnchors,
  BoundLabel_GetBoundsRect,
  BoundLabel_SetBoundsRect,
  BoundLabel_GetClientHeight,
  BoundLabel_SetClientHeight,
  BoundLabel_GetClientRect,
  BoundLabel_GetClientWidth,
  BoundLabel_SetClientWidth,
  BoundLabel_GetFloating,
  BoundLabel_GetVisible,
  BoundLabel_SetVisible,
  BoundLabel_GetParent,
  BoundLabel_SetParent,
  BoundLabel_GetCursor,
  BoundLabel_SetCursor,
  BoundLabel_GetHint,
  BoundLabel_SetHint,
  BoundLabel_GetComponentCount,
  BoundLabel_GetComponentIndex,
  BoundLabel_SetComponentIndex,
  BoundLabel_GetOwner,
  BoundLabel_GetName,
  BoundLabel_SetName,
  BoundLabel_GetTag,
  BoundLabel_SetTag,
  BoundLabel_GetComponents,
  BoundLabel_StaticClassType;

