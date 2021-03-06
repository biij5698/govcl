
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function FlowPanel_Create(AOwner: TComponent): TFlowPanel; extdecl;
begin
  Result :=  TFlowPanel.Create(AOwner);
end;

procedure FlowPanel_Free(AObj: TFlowPanel); extdecl;
begin
  AObj.Free;
end;

function FlowPanel_GetControlIndex(AObj: TFlowPanel; AControl: TControl): Integer; extdecl;
begin
  Result :=  AObj.GetControlIndex(AControl);
end;

procedure FlowPanel_SetControlIndex(AObj: TFlowPanel; AControl: TControl; Index: Integer); extdecl;
begin
  AObj.SetControlIndex(AControl, Index);
end;

function FlowPanel_CanFocus(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure FlowPanel_FlipChildren(AObj: TFlowPanel; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function FlowPanel_Focused(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function FlowPanel_HandleAllocated(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure FlowPanel_Invalidate(AObj: TFlowPanel); extdecl;
begin
  AObj.Invalidate;
end;

procedure FlowPanel_Realign(AObj: TFlowPanel); extdecl;
begin
  AObj.Realign;
end;

procedure FlowPanel_Repaint(AObj: TFlowPanel); extdecl;
begin
  AObj.Repaint;
end;

procedure FlowPanel_ScaleBy(AObj: TFlowPanel; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure FlowPanel_SetBounds(AObj: TFlowPanel; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure FlowPanel_SetFocus(AObj: TFlowPanel); extdecl;
begin
  AObj.SetFocus;
end;

procedure FlowPanel_Update(AObj: TFlowPanel); extdecl;
begin
  AObj.Update;
end;

procedure FlowPanel_BringToFront(AObj: TFlowPanel); extdecl;
begin
  AObj.BringToFront;
end;

procedure FlowPanel_ClientToScreen(AObj: TFlowPanel; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure FlowPanel_ClientToParent(AObj: TFlowPanel; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function FlowPanel_Dragging(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function FlowPanel_HasParent(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure FlowPanel_Hide(AObj: TFlowPanel); extdecl;
begin
  AObj.Hide;
end;

function FlowPanel_Perform(AObj: TFlowPanel; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure FlowPanel_Refresh(AObj: TFlowPanel); extdecl;
begin
  AObj.Refresh;
end;

procedure FlowPanel_ScreenToClient(AObj: TFlowPanel; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure FlowPanel_ParentToClient(AObj: TFlowPanel; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure FlowPanel_SendToBack(AObj: TFlowPanel); extdecl;
begin
  AObj.SendToBack;
end;

procedure FlowPanel_Show(AObj: TFlowPanel); extdecl;
begin
  AObj.Show;
end;

function FlowPanel_GetTextBuf(AObj: TFlowPanel; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function FlowPanel_GetTextLen(AObj: TFlowPanel): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

function FlowPanel_FindComponent(AObj: TFlowPanel; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function FlowPanel_GetNamePath(AObj: TFlowPanel): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure FlowPanel_Assign(AObj: TFlowPanel; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function FlowPanel_ClassType(AObj: TFlowPanel): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function FlowPanel_ClassName(AObj: TFlowPanel): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function FlowPanel_InstanceSize(AObj: TFlowPanel): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function FlowPanel_InheritsFrom(AObj: TFlowPanel; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function FlowPanel_Equals(AObj: TFlowPanel; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function FlowPanel_GetHashCode(AObj: TFlowPanel): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function FlowPanel_ToString(AObj: TFlowPanel): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function FlowPanel_GetAlign(AObj: TFlowPanel): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure FlowPanel_SetAlign(AObj: TFlowPanel; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function FlowPanel_GetAlignment(AObj: TFlowPanel): TAlignment; extdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure FlowPanel_SetAlignment(AObj: TFlowPanel; AValue: TAlignment); extdecl;
begin
  AObj.Alignment := AValue;
end;

function FlowPanel_GetAnchors(AObj: TFlowPanel): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure FlowPanel_SetAnchors(AObj: TFlowPanel; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function FlowPanel_GetAutoSize(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure FlowPanel_SetAutoSize(AObj: TFlowPanel; AValue: LongBool); extdecl;
begin
  AObj.AutoSize := AValue;
end;

function FlowPanel_GetAutoWrap(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.AutoWrap;
end;

procedure FlowPanel_SetAutoWrap(AObj: TFlowPanel; AValue: LongBool); extdecl;
begin
  AObj.AutoWrap := AValue;
end;

function FlowPanel_GetBiDiMode(AObj: TFlowPanel): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure FlowPanel_SetBiDiMode(AObj: TFlowPanel; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function FlowPanel_GetBorderWidth(AObj: TFlowPanel): TBorderWidth; extdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure FlowPanel_SetBorderWidth(AObj: TFlowPanel; AValue: TBorderWidth); extdecl;
begin
  AObj.BorderWidth := AValue;
end;

function FlowPanel_GetBorderStyle(AObj: TFlowPanel): TBorderStyle; extdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure FlowPanel_SetBorderStyle(AObj: TFlowPanel; AValue: TBorderStyle); extdecl;
begin
  AObj.BorderStyle := AValue;
end;

function FlowPanel_GetCaption(AObj: TFlowPanel): PChar; extdecl;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure FlowPanel_SetCaption(AObj: TFlowPanel; AValue: PChar); extdecl;
begin
  AObj.Caption := AValue;
end;

function FlowPanel_GetColor(AObj: TFlowPanel): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure FlowPanel_SetColor(AObj: TFlowPanel; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function FlowPanel_GetUseDockManager(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure FlowPanel_SetUseDockManager(AObj: TFlowPanel; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function FlowPanel_GetDockSite(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure FlowPanel_SetDockSite(AObj: TFlowPanel; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function FlowPanel_GetDoubleBuffered(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure FlowPanel_SetDoubleBuffered(AObj: TFlowPanel; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function FlowPanel_GetDragCursor(AObj: TFlowPanel): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure FlowPanel_SetDragCursor(AObj: TFlowPanel; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function FlowPanel_GetDragKind(AObj: TFlowPanel): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure FlowPanel_SetDragKind(AObj: TFlowPanel; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function FlowPanel_GetDragMode(AObj: TFlowPanel): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure FlowPanel_SetDragMode(AObj: TFlowPanel; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function FlowPanel_GetEnabled(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure FlowPanel_SetEnabled(AObj: TFlowPanel; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function FlowPanel_GetFlowStyle(AObj: TFlowPanel): TFlowStyle; extdecl;
begin
  Result :=  AObj.FlowStyle;
end;

procedure FlowPanel_SetFlowStyle(AObj: TFlowPanel; AValue: TFlowStyle); extdecl;
begin
  AObj.FlowStyle := AValue;
end;

function FlowPanel_GetFullRepaint(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.FullRepaint;
end;

procedure FlowPanel_SetFullRepaint(AObj: TFlowPanel; AValue: LongBool); extdecl;
begin
  AObj.FullRepaint := AValue;
end;

function FlowPanel_GetFont(AObj: TFlowPanel): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure FlowPanel_SetFont(AObj: TFlowPanel; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function FlowPanel_GetParentColor(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure FlowPanel_SetParentColor(AObj: TFlowPanel; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function FlowPanel_GetParentFont(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure FlowPanel_SetParentFont(AObj: TFlowPanel; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function FlowPanel_GetParentShowHint(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure FlowPanel_SetParentShowHint(AObj: TFlowPanel; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function FlowPanel_GetPopupMenu(AObj: TFlowPanel): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure FlowPanel_SetPopupMenu(AObj: TFlowPanel; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function FlowPanel_GetShowHint(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure FlowPanel_SetShowHint(AObj: TFlowPanel; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function FlowPanel_GetTabOrder(AObj: TFlowPanel): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure FlowPanel_SetTabOrder(AObj: TFlowPanel; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function FlowPanel_GetTabStop(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure FlowPanel_SetTabStop(AObj: TFlowPanel; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function FlowPanel_GetVisible(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure FlowPanel_SetVisible(AObj: TFlowPanel; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure FlowPanel_SetOnClick(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
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

procedure FlowPanel_SetOnContextPopup(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
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

procedure FlowPanel_SetOnDockDrop(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDockDrop := nil;
    EventClass.Remove(AObj, geDockDrop);
    Exit;
  end;
  AObj.OnDockDrop := @EventClass.OnDockDrop;
  EventClass.Add(AObj, geDockDrop, AEventId);
end;

procedure FlowPanel_SetOnDblClick(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
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

procedure FlowPanel_SetOnDragDrop(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
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

procedure FlowPanel_SetOnDragOver(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
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

procedure FlowPanel_SetOnEndDock(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDock := nil;
    EventClass.Remove(AObj, geEndDock);
    Exit;
  end;
  AObj.OnEndDock := @EventClass.OnEndDock;
  EventClass.Add(AObj, geEndDock, AEventId);
end;

procedure FlowPanel_SetOnEndDrag(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
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

procedure FlowPanel_SetOnEnter(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
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

procedure FlowPanel_SetOnExit(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
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

procedure FlowPanel_SetOnGetSiteInfo(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnGetSiteInfo := nil;
    EventClass.Remove(AObj, geGetSiteInfo);
    Exit;
  end;
  AObj.OnGetSiteInfo := @EventClass.OnGetSiteInfo;
  EventClass.Add(AObj, geGetSiteInfo, AEventId);
end;

procedure FlowPanel_SetOnMouseDown(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
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

procedure FlowPanel_SetOnMouseEnter(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseEnter := nil;
    EventClass.Remove(AObj, geMouseEnter);
    Exit;
  end;
  AObj.OnMouseEnter := @EventClass.OnMouseEnter;
  EventClass.Add(AObj, geMouseEnter, AEventId);
end;

procedure FlowPanel_SetOnMouseLeave(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseLeave := nil;
    EventClass.Remove(AObj, geMouseLeave);
    Exit;
  end;
  AObj.OnMouseLeave := @EventClass.OnMouseLeave;
  EventClass.Add(AObj, geMouseLeave, AEventId);
end;

procedure FlowPanel_SetOnMouseMove(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
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

procedure FlowPanel_SetOnMouseUp(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
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

procedure FlowPanel_SetOnResize(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnResize := nil;
    EventClass.Remove(AObj, geResize);
    Exit;
  end;
  AObj.OnResize := @EventClass.OnResize;
  EventClass.Add(AObj, geResize, AEventId);
end;

procedure FlowPanel_SetOnStartDock(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnStartDock := nil;
    EventClass.Remove(AObj, geStartDock);
    Exit;
  end;
  AObj.OnStartDock := @EventClass.OnStartDock;
  EventClass.Add(AObj, geStartDock, AEventId);
end;

procedure FlowPanel_SetOnUnDock(AObj: TFlowPanel; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnUnDock := nil;
    EventClass.Remove(AObj, geUnDock);
    Exit;
  end;
  AObj.OnUnDock := @EventClass.OnUnDock;
  EventClass.Add(AObj, geUnDock, AEventId);
end;

function FlowPanel_GetBrush(AObj: TFlowPanel): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function FlowPanel_GetControlCount(AObj: TFlowPanel): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function FlowPanel_GetHandle(AObj: TFlowPanel): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function FlowPanel_GetParentWindow(AObj: TFlowPanel): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure FlowPanel_SetParentWindow(AObj: TFlowPanel; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function FlowPanel_GetAction(AObj: TFlowPanel): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure FlowPanel_SetAction(AObj: TFlowPanel; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

procedure FlowPanel_GetBoundsRect(AObj: TFlowPanel; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure FlowPanel_SetBoundsRect(AObj: TFlowPanel; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function FlowPanel_GetClientHeight(AObj: TFlowPanel): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure FlowPanel_SetClientHeight(AObj: TFlowPanel; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure FlowPanel_GetClientRect(AObj: TFlowPanel; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function FlowPanel_GetClientWidth(AObj: TFlowPanel): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure FlowPanel_SetClientWidth(AObj: TFlowPanel; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function FlowPanel_GetFloating(AObj: TFlowPanel): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function FlowPanel_GetParent(AObj: TFlowPanel): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure FlowPanel_SetParent(AObj: TFlowPanel; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function FlowPanel_GetLeft(AObj: TFlowPanel): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure FlowPanel_SetLeft(AObj: TFlowPanel; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function FlowPanel_GetTop(AObj: TFlowPanel): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure FlowPanel_SetTop(AObj: TFlowPanel; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function FlowPanel_GetWidth(AObj: TFlowPanel): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure FlowPanel_SetWidth(AObj: TFlowPanel; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function FlowPanel_GetHeight(AObj: TFlowPanel): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure FlowPanel_SetHeight(AObj: TFlowPanel; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function FlowPanel_GetCursor(AObj: TFlowPanel): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure FlowPanel_SetCursor(AObj: TFlowPanel; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function FlowPanel_GetHint(AObj: TFlowPanel): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure FlowPanel_SetHint(AObj: TFlowPanel; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function FlowPanel_GetComponentCount(AObj: TFlowPanel): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function FlowPanel_GetComponentIndex(AObj: TFlowPanel): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure FlowPanel_SetComponentIndex(AObj: TFlowPanel; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function FlowPanel_GetOwner(AObj: TFlowPanel): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function FlowPanel_GetName(AObj: TFlowPanel): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure FlowPanel_SetName(AObj: TFlowPanel; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function FlowPanel_GetTag(AObj: TFlowPanel): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure FlowPanel_SetTag(AObj: TFlowPanel; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function FlowPanel_GetControls(AObj: TFlowPanel; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function FlowPanel_GetComponents(AObj: TFlowPanel; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function FlowPanel_StaticClassType: TClass; extdecl;
begin
  Result := TFlowPanel;
end;

exports
  FlowPanel_Create,
  FlowPanel_Free,
  FlowPanel_GetControlIndex,
  FlowPanel_SetControlIndex,
  FlowPanel_CanFocus,
  FlowPanel_FlipChildren,
  FlowPanel_Focused,
  FlowPanel_HandleAllocated,
  FlowPanel_Invalidate,
  FlowPanel_Realign,
  FlowPanel_Repaint,
  FlowPanel_ScaleBy,
  FlowPanel_SetBounds,
  FlowPanel_SetFocus,
  FlowPanel_Update,
  FlowPanel_BringToFront,
  FlowPanel_ClientToScreen,
  FlowPanel_ClientToParent,
  FlowPanel_Dragging,
  FlowPanel_HasParent,
  FlowPanel_Hide,
  FlowPanel_Perform,
  FlowPanel_Refresh,
  FlowPanel_ScreenToClient,
  FlowPanel_ParentToClient,
  FlowPanel_SendToBack,
  FlowPanel_Show,
  FlowPanel_GetTextBuf,
  FlowPanel_GetTextLen,
  FlowPanel_FindComponent,
  FlowPanel_GetNamePath,
  FlowPanel_Assign,
  FlowPanel_ClassType,
  FlowPanel_ClassName,
  FlowPanel_InstanceSize,
  FlowPanel_InheritsFrom,
  FlowPanel_Equals,
  FlowPanel_GetHashCode,
  FlowPanel_ToString,
  FlowPanel_GetAlign,
  FlowPanel_SetAlign,
  FlowPanel_GetAlignment,
  FlowPanel_SetAlignment,
  FlowPanel_GetAnchors,
  FlowPanel_SetAnchors,
  FlowPanel_GetAutoSize,
  FlowPanel_SetAutoSize,
  FlowPanel_GetAutoWrap,
  FlowPanel_SetAutoWrap,
  FlowPanel_GetBiDiMode,
  FlowPanel_SetBiDiMode,
  FlowPanel_GetBorderWidth,
  FlowPanel_SetBorderWidth,
  FlowPanel_GetBorderStyle,
  FlowPanel_SetBorderStyle,
  FlowPanel_GetCaption,
  FlowPanel_SetCaption,
  FlowPanel_GetColor,
  FlowPanel_SetColor,
  FlowPanel_GetUseDockManager,
  FlowPanel_SetUseDockManager,
  FlowPanel_GetDockSite,
  FlowPanel_SetDockSite,
  FlowPanel_GetDoubleBuffered,
  FlowPanel_SetDoubleBuffered,
  FlowPanel_GetDragCursor,
  FlowPanel_SetDragCursor,
  FlowPanel_GetDragKind,
  FlowPanel_SetDragKind,
  FlowPanel_GetDragMode,
  FlowPanel_SetDragMode,
  FlowPanel_GetEnabled,
  FlowPanel_SetEnabled,
  FlowPanel_GetFlowStyle,
  FlowPanel_SetFlowStyle,
  FlowPanel_GetFullRepaint,
  FlowPanel_SetFullRepaint,
  FlowPanel_GetFont,
  FlowPanel_SetFont,
  FlowPanel_GetParentColor,
  FlowPanel_SetParentColor,
  FlowPanel_GetParentFont,
  FlowPanel_SetParentFont,
  FlowPanel_GetParentShowHint,
  FlowPanel_SetParentShowHint,
  FlowPanel_GetPopupMenu,
  FlowPanel_SetPopupMenu,
  FlowPanel_GetShowHint,
  FlowPanel_SetShowHint,
  FlowPanel_GetTabOrder,
  FlowPanel_SetTabOrder,
  FlowPanel_GetTabStop,
  FlowPanel_SetTabStop,
  FlowPanel_GetVisible,
  FlowPanel_SetVisible,
  FlowPanel_SetOnClick,
  FlowPanel_SetOnContextPopup,
  FlowPanel_SetOnDockDrop,
  FlowPanel_SetOnDblClick,
  FlowPanel_SetOnDragDrop,
  FlowPanel_SetOnDragOver,
  FlowPanel_SetOnEndDock,
  FlowPanel_SetOnEndDrag,
  FlowPanel_SetOnEnter,
  FlowPanel_SetOnExit,
  FlowPanel_SetOnGetSiteInfo,
  FlowPanel_SetOnMouseDown,
  FlowPanel_SetOnMouseEnter,
  FlowPanel_SetOnMouseLeave,
  FlowPanel_SetOnMouseMove,
  FlowPanel_SetOnMouseUp,
  FlowPanel_SetOnResize,
  FlowPanel_SetOnStartDock,
  FlowPanel_SetOnUnDock,
  FlowPanel_GetBrush,
  FlowPanel_GetControlCount,
  FlowPanel_GetHandle,
  FlowPanel_GetParentWindow,
  FlowPanel_SetParentWindow,
  FlowPanel_GetAction,
  FlowPanel_SetAction,
  FlowPanel_GetBoundsRect,
  FlowPanel_SetBoundsRect,
  FlowPanel_GetClientHeight,
  FlowPanel_SetClientHeight,
  FlowPanel_GetClientRect,
  FlowPanel_GetClientWidth,
  FlowPanel_SetClientWidth,
  FlowPanel_GetFloating,
  FlowPanel_GetParent,
  FlowPanel_SetParent,
  FlowPanel_GetLeft,
  FlowPanel_SetLeft,
  FlowPanel_GetTop,
  FlowPanel_SetTop,
  FlowPanel_GetWidth,
  FlowPanel_SetWidth,
  FlowPanel_GetHeight,
  FlowPanel_SetHeight,
  FlowPanel_GetCursor,
  FlowPanel_SetCursor,
  FlowPanel_GetHint,
  FlowPanel_SetHint,
  FlowPanel_GetComponentCount,
  FlowPanel_GetComponentIndex,
  FlowPanel_SetComponentIndex,
  FlowPanel_GetOwner,
  FlowPanel_GetName,
  FlowPanel_SetName,
  FlowPanel_GetTag,
  FlowPanel_SetTag,
  FlowPanel_GetControls,
  FlowPanel_GetComponents,
  FlowPanel_StaticClassType;

