
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function TrackBar_Create(AOwner: TComponent): TTrackBar; extdecl;
begin
  Result :=  TTrackBar.Create(AOwner);
end;

procedure TrackBar_Free(AObj: TTrackBar); extdecl;
begin
  AObj.Free;
end;

procedure TrackBar_SetTick(AObj: TTrackBar; Value: Integer); extdecl;
begin
  AObj.SetTick(Value);
end;

function TrackBar_CanFocus(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure TrackBar_FlipChildren(AObj: TTrackBar; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function TrackBar_Focused(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function TrackBar_HandleAllocated(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure TrackBar_Invalidate(AObj: TTrackBar); extdecl;
begin
  AObj.Invalidate;
end;

procedure TrackBar_Realign(AObj: TTrackBar); extdecl;
begin
  AObj.Realign;
end;

procedure TrackBar_Repaint(AObj: TTrackBar); extdecl;
begin
  AObj.Repaint;
end;

procedure TrackBar_ScaleBy(AObj: TTrackBar; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure TrackBar_SetBounds(AObj: TTrackBar; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure TrackBar_SetFocus(AObj: TTrackBar); extdecl;
begin
  AObj.SetFocus;
end;

procedure TrackBar_Update(AObj: TTrackBar); extdecl;
begin
  AObj.Update;
end;

procedure TrackBar_BringToFront(AObj: TTrackBar); extdecl;
begin
  AObj.BringToFront;
end;

procedure TrackBar_ClientToScreen(AObj: TTrackBar; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure TrackBar_ClientToParent(AObj: TTrackBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function TrackBar_Dragging(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function TrackBar_HasParent(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure TrackBar_Hide(AObj: TTrackBar); extdecl;
begin
  AObj.Hide;
end;

function TrackBar_Perform(AObj: TTrackBar; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure TrackBar_Refresh(AObj: TTrackBar); extdecl;
begin
  AObj.Refresh;
end;

procedure TrackBar_ScreenToClient(AObj: TTrackBar; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure TrackBar_ParentToClient(AObj: TTrackBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure TrackBar_SendToBack(AObj: TTrackBar); extdecl;
begin
  AObj.SendToBack;
end;

procedure TrackBar_Show(AObj: TTrackBar); extdecl;
begin
  AObj.Show;
end;

function TrackBar_GetTextBuf(AObj: TTrackBar; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function TrackBar_GetTextLen(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

function TrackBar_FindComponent(AObj: TTrackBar; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function TrackBar_GetNamePath(AObj: TTrackBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure TrackBar_Assign(AObj: TTrackBar; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function TrackBar_ClassType(AObj: TTrackBar): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function TrackBar_ClassName(AObj: TTrackBar): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function TrackBar_InstanceSize(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function TrackBar_InheritsFrom(AObj: TTrackBar; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function TrackBar_Equals(AObj: TTrackBar; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function TrackBar_GetHashCode(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function TrackBar_ToString(AObj: TTrackBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function TrackBar_GetAlign(AObj: TTrackBar): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure TrackBar_SetAlign(AObj: TTrackBar; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function TrackBar_GetAnchors(AObj: TTrackBar): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure TrackBar_SetAnchors(AObj: TTrackBar; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function TrackBar_GetBorderWidth(AObj: TTrackBar): TBorderWidth; extdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure TrackBar_SetBorderWidth(AObj: TTrackBar; AValue: TBorderWidth); extdecl;
begin
  AObj.BorderWidth := AValue;
end;

function TrackBar_GetDoubleBuffered(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure TrackBar_SetDoubleBuffered(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function TrackBar_GetDragCursor(AObj: TTrackBar): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure TrackBar_SetDragCursor(AObj: TTrackBar; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function TrackBar_GetDragMode(AObj: TTrackBar): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure TrackBar_SetDragMode(AObj: TTrackBar; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function TrackBar_GetEnabled(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure TrackBar_SetEnabled(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function TrackBar_GetLineSize(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.LineSize;
end;

procedure TrackBar_SetLineSize(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.LineSize := AValue;
end;

function TrackBar_GetMax(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.Max;
end;

procedure TrackBar_SetMax(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.Max := AValue;
end;

function TrackBar_GetMin(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.Min;
end;

procedure TrackBar_SetMin(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.Min := AValue;
end;

function TrackBar_GetOrientation(AObj: TTrackBar): TTrackBarOrientation; extdecl;
begin
  Result :=  AObj.Orientation;
end;

procedure TrackBar_SetOrientation(AObj: TTrackBar; AValue: TTrackBarOrientation); extdecl;
begin
  AObj.Orientation := AValue;
end;

function TrackBar_GetParentShowHint(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure TrackBar_SetParentShowHint(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function TrackBar_GetPageSize(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.PageSize;
end;

procedure TrackBar_SetPageSize(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.PageSize := AValue;
end;

function TrackBar_GetPopupMenu(AObj: TTrackBar): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure TrackBar_SetPopupMenu(AObj: TTrackBar; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function TrackBar_GetFrequency(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.Frequency;
end;

procedure TrackBar_SetFrequency(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.Frequency := AValue;
end;

function TrackBar_GetPosition(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.Position;
end;

procedure TrackBar_SetPosition(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.Position := AValue;
end;

function TrackBar_GetSelEnd(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.SelEnd;
end;

procedure TrackBar_SetSelEnd(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.SelEnd := AValue;
end;

function TrackBar_GetSelStart(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.SelStart;
end;

procedure TrackBar_SetSelStart(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.SelStart := AValue;
end;

function TrackBar_GetShowHint(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure TrackBar_SetShowHint(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function TrackBar_GetShowSelRange(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.ShowSelRange;
end;

procedure TrackBar_SetShowSelRange(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  AObj.ShowSelRange := AValue;
end;

function TrackBar_GetTabOrder(AObj: TTrackBar): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure TrackBar_SetTabOrder(AObj: TTrackBar; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function TrackBar_GetTabStop(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure TrackBar_SetTabStop(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function TrackBar_GetTickMarks(AObj: TTrackBar): TTickMark; extdecl;
begin
  Result :=  AObj.TickMarks;
end;

procedure TrackBar_SetTickMarks(AObj: TTrackBar; AValue: TTickMark); extdecl;
begin
  AObj.TickMarks := AValue;
end;

function TrackBar_GetTickStyle(AObj: TTrackBar): TTickStyle; extdecl;
begin
  Result :=  AObj.TickStyle;
end;

procedure TrackBar_SetTickStyle(AObj: TTrackBar; AValue: TTickStyle); extdecl;
begin
  AObj.TickStyle := AValue;
end;

function TrackBar_GetVisible(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure TrackBar_SetVisible(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure TrackBar_SetOnContextPopup(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnContextPopup := nil;
    EventClass.Remove(AObj, geContextPopup);
    Exit;
  end;
  AObj.OnContextPopup := @EventClass.OnContextPopup;
  EventClass.Add(AObj, geContextPopup, AEventId);
end;

procedure TrackBar_SetOnChange(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnChange := nil;
    EventClass.Remove(AObj, geChange);
    Exit;
  end;
  AObj.OnChange := @EventClass.OnChange;
  EventClass.Add(AObj, geChange, AEventId);
end;

procedure TrackBar_SetOnDragDrop(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
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

procedure TrackBar_SetOnDragOver(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
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

procedure TrackBar_SetOnEndDrag(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
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

procedure TrackBar_SetOnEnter(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnEnter := nil;
    EventClass.Remove(AObj, geEnter);
    Exit;
  end;
  AObj.OnEnter := @EventClass.OnEnter;
  EventClass.Add(AObj, geEnter, AEventId);
end;

procedure TrackBar_SetOnExit(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnExit := nil;
    EventClass.Remove(AObj, geExit);
    Exit;
  end;
  AObj.OnExit := @EventClass.OnExit;
  EventClass.Add(AObj, geExit, AEventId);
end;

procedure TrackBar_SetOnKeyDown(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyDown := nil;
    EventClass.Remove(AObj, geKeyDown);
    Exit;
  end;
  AObj.OnKeyDown := @EventClass.OnKeyDown;
  EventClass.Add(AObj, geKeyDown, AEventId);
end;

procedure TrackBar_SetOnKeyPress(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyPress := nil;
    EventClass.Remove(AObj, geKeyPress);
    Exit;
  end;
  AObj.OnKeyPress := @EventClass.OnKeyPress;
  EventClass.Add(AObj, geKeyPress, AEventId);
end;

procedure TrackBar_SetOnKeyUp(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyUp := nil;
    EventClass.Remove(AObj, geKeyUp);
    Exit;
  end;
  AObj.OnKeyUp := @EventClass.OnKeyUp;
  EventClass.Add(AObj, geKeyUp, AEventId);
end;

function TrackBar_GetDockSite(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure TrackBar_SetDockSite(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function TrackBar_GetBrush(AObj: TTrackBar): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function TrackBar_GetControlCount(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function TrackBar_GetHandle(AObj: TTrackBar): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function TrackBar_GetParentWindow(AObj: TTrackBar): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure TrackBar_SetParentWindow(AObj: TTrackBar; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function TrackBar_GetUseDockManager(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure TrackBar_SetUseDockManager(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function TrackBar_GetAction(AObj: TTrackBar): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure TrackBar_SetAction(AObj: TTrackBar; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

function TrackBar_GetBiDiMode(AObj: TTrackBar): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure TrackBar_SetBiDiMode(AObj: TTrackBar; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure TrackBar_GetBoundsRect(AObj: TTrackBar; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure TrackBar_SetBoundsRect(AObj: TTrackBar; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function TrackBar_GetClientHeight(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure TrackBar_SetClientHeight(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure TrackBar_GetClientRect(AObj: TTrackBar; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function TrackBar_GetClientWidth(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure TrackBar_SetClientWidth(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function TrackBar_GetFloating(AObj: TTrackBar): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function TrackBar_GetParent(AObj: TTrackBar): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure TrackBar_SetParent(AObj: TTrackBar; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function TrackBar_GetLeft(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure TrackBar_SetLeft(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function TrackBar_GetTop(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure TrackBar_SetTop(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function TrackBar_GetWidth(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure TrackBar_SetWidth(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function TrackBar_GetHeight(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure TrackBar_SetHeight(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function TrackBar_GetCursor(AObj: TTrackBar): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure TrackBar_SetCursor(AObj: TTrackBar; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function TrackBar_GetHint(AObj: TTrackBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure TrackBar_SetHint(AObj: TTrackBar; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function TrackBar_GetComponentCount(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function TrackBar_GetComponentIndex(AObj: TTrackBar): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure TrackBar_SetComponentIndex(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function TrackBar_GetOwner(AObj: TTrackBar): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function TrackBar_GetName(AObj: TTrackBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure TrackBar_SetName(AObj: TTrackBar; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function TrackBar_GetTag(AObj: TTrackBar): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure TrackBar_SetTag(AObj: TTrackBar; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function TrackBar_GetControls(AObj: TTrackBar; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function TrackBar_GetComponents(AObj: TTrackBar; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function TrackBar_StaticClassType: TClass; extdecl;
begin
  Result := TTrackBar;
end;

exports
  TrackBar_Create,
  TrackBar_Free,
  TrackBar_SetTick,
  TrackBar_CanFocus,
  TrackBar_FlipChildren,
  TrackBar_Focused,
  TrackBar_HandleAllocated,
  TrackBar_Invalidate,
  TrackBar_Realign,
  TrackBar_Repaint,
  TrackBar_ScaleBy,
  TrackBar_SetBounds,
  TrackBar_SetFocus,
  TrackBar_Update,
  TrackBar_BringToFront,
  TrackBar_ClientToScreen,
  TrackBar_ClientToParent,
  TrackBar_Dragging,
  TrackBar_HasParent,
  TrackBar_Hide,
  TrackBar_Perform,
  TrackBar_Refresh,
  TrackBar_ScreenToClient,
  TrackBar_ParentToClient,
  TrackBar_SendToBack,
  TrackBar_Show,
  TrackBar_GetTextBuf,
  TrackBar_GetTextLen,
  TrackBar_FindComponent,
  TrackBar_GetNamePath,
  TrackBar_Assign,
  TrackBar_ClassType,
  TrackBar_ClassName,
  TrackBar_InstanceSize,
  TrackBar_InheritsFrom,
  TrackBar_Equals,
  TrackBar_GetHashCode,
  TrackBar_ToString,
  TrackBar_GetAlign,
  TrackBar_SetAlign,
  TrackBar_GetAnchors,
  TrackBar_SetAnchors,
  TrackBar_GetBorderWidth,
  TrackBar_SetBorderWidth,
  TrackBar_GetDoubleBuffered,
  TrackBar_SetDoubleBuffered,
  TrackBar_GetDragCursor,
  TrackBar_SetDragCursor,
  TrackBar_GetDragMode,
  TrackBar_SetDragMode,
  TrackBar_GetEnabled,
  TrackBar_SetEnabled,
  TrackBar_GetLineSize,
  TrackBar_SetLineSize,
  TrackBar_GetMax,
  TrackBar_SetMax,
  TrackBar_GetMin,
  TrackBar_SetMin,
  TrackBar_GetOrientation,
  TrackBar_SetOrientation,
  TrackBar_GetParentShowHint,
  TrackBar_SetParentShowHint,
  TrackBar_GetPageSize,
  TrackBar_SetPageSize,
  TrackBar_GetPopupMenu,
  TrackBar_SetPopupMenu,
  TrackBar_GetFrequency,
  TrackBar_SetFrequency,
  TrackBar_GetPosition,
  TrackBar_SetPosition,
  TrackBar_GetSelEnd,
  TrackBar_SetSelEnd,
  TrackBar_GetSelStart,
  TrackBar_SetSelStart,
  TrackBar_GetShowHint,
  TrackBar_SetShowHint,
  TrackBar_GetShowSelRange,
  TrackBar_SetShowSelRange,
  TrackBar_GetTabOrder,
  TrackBar_SetTabOrder,
  TrackBar_GetTabStop,
  TrackBar_SetTabStop,
  TrackBar_GetTickMarks,
  TrackBar_SetTickMarks,
  TrackBar_GetTickStyle,
  TrackBar_SetTickStyle,
  TrackBar_GetVisible,
  TrackBar_SetVisible,
  TrackBar_SetOnContextPopup,
  TrackBar_SetOnChange,
  TrackBar_SetOnDragDrop,
  TrackBar_SetOnDragOver,
  TrackBar_SetOnEndDrag,
  TrackBar_SetOnEnter,
  TrackBar_SetOnExit,
  TrackBar_SetOnKeyDown,
  TrackBar_SetOnKeyPress,
  TrackBar_SetOnKeyUp,
  TrackBar_GetDockSite,
  TrackBar_SetDockSite,
  TrackBar_GetBrush,
  TrackBar_GetControlCount,
  TrackBar_GetHandle,
  TrackBar_GetParentWindow,
  TrackBar_SetParentWindow,
  TrackBar_GetUseDockManager,
  TrackBar_SetUseDockManager,
  TrackBar_GetAction,
  TrackBar_SetAction,
  TrackBar_GetBiDiMode,
  TrackBar_SetBiDiMode,
  TrackBar_GetBoundsRect,
  TrackBar_SetBoundsRect,
  TrackBar_GetClientHeight,
  TrackBar_SetClientHeight,
  TrackBar_GetClientRect,
  TrackBar_GetClientWidth,
  TrackBar_SetClientWidth,
  TrackBar_GetFloating,
  TrackBar_GetParent,
  TrackBar_SetParent,
  TrackBar_GetLeft,
  TrackBar_SetLeft,
  TrackBar_GetTop,
  TrackBar_SetTop,
  TrackBar_GetWidth,
  TrackBar_SetWidth,
  TrackBar_GetHeight,
  TrackBar_SetHeight,
  TrackBar_GetCursor,
  TrackBar_SetCursor,
  TrackBar_GetHint,
  TrackBar_SetHint,
  TrackBar_GetComponentCount,
  TrackBar_GetComponentIndex,
  TrackBar_SetComponentIndex,
  TrackBar_GetOwner,
  TrackBar_GetName,
  TrackBar_SetName,
  TrackBar_GetTag,
  TrackBar_SetTag,
  TrackBar_GetControls,
  TrackBar_GetComponents,
  TrackBar_StaticClassType;

