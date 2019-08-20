#include "LuaBinding_ImGui.h"

#include "imgui.h"


void register_ImGui_free_functions(sol::state& state)
{
	state.set_function("GetIO", &ImGui::GetIO);
	state.set_function("GetStyle", &ImGui::GetStyle);
	state.set_function("NewFrame", &ImGui::NewFrame);
	state.set_function("EndFrame", &ImGui::EndFrame);
	state.set_function("Render", &ImGui::Render);
	state.set_function("GetDrawData", &ImGui::GetDrawData);
	state.set_function("ShowDemoWindow", &ImGui::ShowDemoWindow);
	state.set_function("ShowAboutWindow", &ImGui::ShowAboutWindow);
	state.set_function("ShowMetricsWindow", &ImGui::ShowMetricsWindow);
	state.set_function("ShowStyleEditor", &ImGui::ShowStyleEditor);
	state.set_function("ShowStyleSelector", &ImGui::ShowStyleSelector);
	state.set_function("ShowFontSelector", &ImGui::ShowFontSelector);
	state.set_function("ShowUserGuide", &ImGui::ShowUserGuide);
	state.set_function("GetVersion", &ImGui::GetVersion);
	state.set_function("StyleColorsDark", &ImGui::StyleColorsDark);
	state.set_function("StyleColorsClassic", &ImGui::StyleColorsClassic);
	state.set_function("StyleColorsLight", &ImGui::StyleColorsLight);
	state.set_function("Begin", &ImGui::Begin);
	state.set_function("End", &ImGui::End);
	state.set_function("BeginChild", sol::overload(
		sol::resolve<bool(const char *, const ImVec2 &, bool, ImGuiWindowFlags)>(&ImGui::BeginChild),
		sol::resolve<bool(ImGuiID, const ImVec2 &, bool, ImGuiWindowFlags)>(&ImGui::BeginChild)
	));
	state.set_function("EndChild", &ImGui::EndChild);
	state.set_function("IsWindowAppearing", &ImGui::IsWindowAppearing);
	state.set_function("IsWindowCollapsed", &ImGui::IsWindowCollapsed);
	state.set_function("IsWindowFocused", &ImGui::IsWindowFocused);
	state.set_function("IsWindowHovered", &ImGui::IsWindowHovered);
	state.set_function("GetWindowDrawList", &ImGui::GetWindowDrawList);
	state.set_function("GetWindowPos", &ImGui::GetWindowPos);
	state.set_function("GetWindowSize", &ImGui::GetWindowSize);
	state.set_function("GetWindowWidth", &ImGui::GetWindowWidth);
	state.set_function("GetWindowHeight", &ImGui::GetWindowHeight);
	state.set_function("SetNextWindowPos", &ImGui::SetNextWindowPos);
	state.set_function("SetNextWindowSize", &ImGui::SetNextWindowSize);
	state.set_function("SetNextWindowSizeConstraints", &ImGui::SetNextWindowSizeConstraints);
	state.set_function("SetNextWindowContentSize", &ImGui::SetNextWindowContentSize);
	state.set_function("SetNextWindowCollapsed", &ImGui::SetNextWindowCollapsed);
	state.set_function("SetNextWindowFocus", &ImGui::SetNextWindowFocus);
	state.set_function("SetNextWindowBgAlpha", &ImGui::SetNextWindowBgAlpha);
	state.set_function("SetWindowPos", sol::overload(
		sol::resolve<void(const ImVec2 &, ImGuiCond)>(&ImGui::SetWindowPos),
		sol::resolve<void(const char *, const ImVec2 &, ImGuiCond)>(&ImGui::SetWindowPos)
	));
	state.set_function("SetWindowSize", sol::overload(
		sol::resolve<void(const ImVec2 &, ImGuiCond)>(&ImGui::SetWindowSize),
		sol::resolve<void(const char *, const ImVec2 &, ImGuiCond)>(&ImGui::SetWindowSize)
	));
	state.set_function("SetWindowCollapsed", sol::overload(
		sol::resolve<void(bool, ImGuiCond)>(&ImGui::SetWindowCollapsed),
		sol::resolve<void(const char *, bool, ImGuiCond)>(&ImGui::SetWindowCollapsed)
	));
	state.set_function("SetWindowFocus", sol::overload(
		sol::resolve<void()>(&ImGui::SetWindowFocus),
		sol::resolve<void(const char *)>(&ImGui::SetWindowFocus)
	));
	state.set_function("SetWindowFontScale", &ImGui::SetWindowFontScale);
	state.set_function("GetContentRegionMax", &ImGui::GetContentRegionMax);
	state.set_function("GetContentRegionAvail", &ImGui::GetContentRegionAvail);
	state.set_function("GetWindowContentRegionMin", &ImGui::GetWindowContentRegionMin);
	state.set_function("GetWindowContentRegionMax", &ImGui::GetWindowContentRegionMax);
	state.set_function("GetWindowContentRegionWidth", &ImGui::GetWindowContentRegionWidth);
	state.set_function("GetScrollX", &ImGui::GetScrollX);
	state.set_function("GetScrollY", &ImGui::GetScrollY);
	state.set_function("GetScrollMaxX", &ImGui::GetScrollMaxX);
	state.set_function("GetScrollMaxY", &ImGui::GetScrollMaxY);
	state.set_function("SetScrollX", &ImGui::SetScrollX);
	state.set_function("SetScrollY", &ImGui::SetScrollY);
	state.set_function("SetScrollHereX", &ImGui::SetScrollHereX);
	state.set_function("SetScrollHereY", &ImGui::SetScrollHereY);
	state.set_function("SetScrollFromPosX", &ImGui::SetScrollFromPosX);
	state.set_function("SetScrollFromPosY", &ImGui::SetScrollFromPosY);
	state.set_function("PushFont", &ImGui::PushFont);
	state.set_function("PopFont", &ImGui::PopFont);
	state.set_function("PushStyleColor", sol::overload(
		sol::resolve<void(ImGuiCol, ImU32)>(&ImGui::PushStyleColor),
		sol::resolve<void(ImGuiCol, const ImVec4 &)>(&ImGui::PushStyleColor)
	));
	state.set_function("PopStyleColor", &ImGui::PopStyleColor);
	state.set_function("PushStyleVar", sol::overload(
		sol::resolve<void(ImGuiStyleVar, float)>(&ImGui::PushStyleVar),
		sol::resolve<void(ImGuiStyleVar, const ImVec2 &)>(&ImGui::PushStyleVar)
	));
	state.set_function("PopStyleVar", &ImGui::PopStyleVar);
	state.set_function("GetStyleColorVec4", &ImGui::GetStyleColorVec4);
	state.set_function("GetFont", &ImGui::GetFont);
	state.set_function("GetFontSize", &ImGui::GetFontSize);
	state.set_function("GetFontTexUvWhitePixel", &ImGui::GetFontTexUvWhitePixel);
	state.set_function("GetColorU32", sol::overload(
		sol::resolve<ImU32(ImGuiCol, float)>(&ImGui::GetColorU32),
		sol::resolve<ImU32(const ImVec4 &)>(&ImGui::GetColorU32),
		sol::resolve<ImU32(ImU32)>(&ImGui::GetColorU32)
	));
	state.set_function("PushItemWidth", &ImGui::PushItemWidth);
	state.set_function("PopItemWidth", &ImGui::PopItemWidth);
	state.set_function("SetNextItemWidth", &ImGui::SetNextItemWidth);
	state.set_function("CalcItemWidth", &ImGui::CalcItemWidth);
	state.set_function("PushTextWrapPos", &ImGui::PushTextWrapPos);
	state.set_function("PopTextWrapPos", &ImGui::PopTextWrapPos);
	state.set_function("PushAllowKeyboardFocus", &ImGui::PushAllowKeyboardFocus);
	state.set_function("PopAllowKeyboardFocus", &ImGui::PopAllowKeyboardFocus);
	state.set_function("PushButtonRepeat", &ImGui::PushButtonRepeat);
	state.set_function("PopButtonRepeat", &ImGui::PopButtonRepeat);
	state.set_function("Separator", &ImGui::Separator);
	state.set_function("SameLine", &ImGui::SameLine);
	state.set_function("NewLine", &ImGui::NewLine);
	state.set_function("Spacing", &ImGui::Spacing);
	state.set_function("Dummy", &ImGui::Dummy);
	state.set_function("Indent", &ImGui::Indent);
	state.set_function("Unindent", &ImGui::Unindent);
	state.set_function("BeginGroup", &ImGui::BeginGroup);
	state.set_function("EndGroup", &ImGui::EndGroup);
	state.set_function("GetCursorPos", &ImGui::GetCursorPos);
	state.set_function("GetCursorPosX", &ImGui::GetCursorPosX);
	state.set_function("GetCursorPosY", &ImGui::GetCursorPosY);
	state.set_function("SetCursorPos", &ImGui::SetCursorPos);
	state.set_function("SetCursorPosX", &ImGui::SetCursorPosX);
	state.set_function("SetCursorPosY", &ImGui::SetCursorPosY);
	state.set_function("GetCursorStartPos", &ImGui::GetCursorStartPos);
	state.set_function("GetCursorScreenPos", &ImGui::GetCursorScreenPos);
	state.set_function("SetCursorScreenPos", &ImGui::SetCursorScreenPos);
	state.set_function("AlignTextToFramePadding", &ImGui::AlignTextToFramePadding);
	state.set_function("GetTextLineHeight", &ImGui::GetTextLineHeight);
	state.set_function("GetTextLineHeightWithSpacing", &ImGui::GetTextLineHeightWithSpacing);
	state.set_function("GetFrameHeight", &ImGui::GetFrameHeight);
	state.set_function("GetFrameHeightWithSpacing", &ImGui::GetFrameHeightWithSpacing);
	state.set_function("PushID", sol::overload(
		sol::resolve<void(const char *)>(&ImGui::PushID),
		sol::resolve<void(const char *, const char *)>(&ImGui::PushID),
		sol::resolve<void(const void *)>(&ImGui::PushID),
		sol::resolve<void(int)>(&ImGui::PushID)
	));
	state.set_function("PopID", &ImGui::PopID);
	state.set_function("GetID", sol::overload(
		sol::resolve<ImGuiID(const char *)>(&ImGui::GetID),
		sol::resolve<ImGuiID(const char *, const char *)>(&ImGui::GetID),
		sol::resolve<ImGuiID(const void *)>(&ImGui::GetID)
	));
	state.set_function("TextUnformatted", &ImGui::TextUnformatted);
	state.set_function("Text", &ImGui::Text);
	state.set_function("TextV", &ImGui::TextV);
	state.set_function("TextColored", &ImGui::TextColored);
	state.set_function("TextColoredV", &ImGui::TextColoredV);
	state.set_function("TextDisabled", &ImGui::TextDisabled);
	state.set_function("TextDisabledV", &ImGui::TextDisabledV);
	state.set_function("TextWrapped", &ImGui::TextWrapped);
	state.set_function("TextWrappedV", &ImGui::TextWrappedV);
	state.set_function("LabelText", &ImGui::LabelText);
	state.set_function("LabelTextV", &ImGui::LabelTextV);
	state.set_function("BulletText", &ImGui::BulletText);
	state.set_function("BulletTextV", &ImGui::BulletTextV);
	state.set_function("Button", &ImGui::Button);
	state.set_function("SmallButton", &ImGui::SmallButton);
	state.set_function("InvisibleButton", &ImGui::InvisibleButton);
	state.set_function("ArrowButton", &ImGui::ArrowButton);
	state.set_function("Image", &ImGui::Image);
	state.set_function("ImageButton", &ImGui::ImageButton);
	state.set_function("Checkbox", &ImGui::Checkbox);
	state.set_function("CheckboxFlags", &ImGui::CheckboxFlags);
	state.set_function("RadioButton", sol::overload(
		sol::resolve<bool(const char *, bool)>(&ImGui::RadioButton),
		sol::resolve<bool(const char *, int *, int)>(&ImGui::RadioButton)
	));
	state.set_function("ProgressBar", &ImGui::ProgressBar);
	state.set_function("Bullet", &ImGui::Bullet);
	state.set_function("BeginCombo", &ImGui::BeginCombo);
	state.set_function("EndCombo", &ImGui::EndCombo);
	state.set_function("Combo", sol::overload(
		sol::resolve<bool(const char *, int *, const char *const *, int, int)>(&ImGui::Combo),
		sol::resolve<bool(const char *, int *, const char *, int)>(&ImGui::Combo),
		sol::resolve<bool(const char *, int *, bool(*)(void *, int, const char **), void *, int, int)>(&ImGui::Combo)
	));
	state.set_function("DragFloat", &ImGui::DragFloat);
	state.set_function("DragFloat2", &ImGui::DragFloat2);
	state.set_function("DragFloat3", &ImGui::DragFloat3);
	state.set_function("DragFloat4", &ImGui::DragFloat4);
	state.set_function("DragFloatRange2", &ImGui::DragFloatRange2);
	state.set_function("DragInt", &ImGui::DragInt);
	state.set_function("DragInt2", &ImGui::DragInt2);
	state.set_function("DragInt3", &ImGui::DragInt3);
	state.set_function("DragInt4", &ImGui::DragInt4);
	state.set_function("DragIntRange2", &ImGui::DragIntRange2);
	state.set_function("DragScalar", &ImGui::DragScalar);
	state.set_function("DragScalarN", &ImGui::DragScalarN);
	state.set_function("SliderFloat", &ImGui::SliderFloat);
	state.set_function("SliderFloat2", &ImGui::SliderFloat2);
	state.set_function("SliderFloat3", &ImGui::SliderFloat3);
	state.set_function("SliderFloat4", &ImGui::SliderFloat4);
	state.set_function("SliderAngle", &ImGui::SliderAngle);
	state.set_function("SliderInt", &ImGui::SliderInt);
	state.set_function("SliderInt2", &ImGui::SliderInt2);
	state.set_function("SliderInt3", &ImGui::SliderInt3);
	state.set_function("SliderInt4", &ImGui::SliderInt4);
	state.set_function("SliderScalar", &ImGui::SliderScalar);
	state.set_function("SliderScalarN", &ImGui::SliderScalarN);
	state.set_function("VSliderFloat", &ImGui::VSliderFloat);
	state.set_function("VSliderInt", &ImGui::VSliderInt);
	state.set_function("VSliderScalar", &ImGui::VSliderScalar);
	state.set_function("InputText", &ImGui::InputText);
	state.set_function("InputTextMultiline", &ImGui::InputTextMultiline);
	state.set_function("InputTextWithHint", &ImGui::InputTextWithHint);
	state.set_function("InputFloat", &ImGui::InputFloat);
	state.set_function("InputFloat2", &ImGui::InputFloat2);
	state.set_function("InputFloat3", &ImGui::InputFloat3);
	state.set_function("InputFloat4", &ImGui::InputFloat4);
	state.set_function("InputInt", &ImGui::InputInt);
	state.set_function("InputInt2", &ImGui::InputInt2);
	state.set_function("InputInt3", &ImGui::InputInt3);
	state.set_function("InputInt4", &ImGui::InputInt4);
	state.set_function("InputDouble", &ImGui::InputDouble);
	state.set_function("InputScalar", &ImGui::InputScalar);
	state.set_function("InputScalarN", &ImGui::InputScalarN);
	state.set_function("ColorEdit3", &ImGui::ColorEdit3);
	state.set_function("ColorEdit4", &ImGui::ColorEdit4);
	state.set_function("ColorPicker3", &ImGui::ColorPicker3);
	state.set_function("ColorPicker4", &ImGui::ColorPicker4);
	state.set_function("ColorButton", &ImGui::ColorButton);
	state.set_function("SetColorEditOptions", &ImGui::SetColorEditOptions);
	state.set_function("TreeNode", sol::overload(
		sol::resolve<bool(const char *)>(&ImGui::TreeNode),
		sol::resolve<bool(const char *, const char *, ...)>(&ImGui::TreeNode),
		sol::resolve<bool(const void *, const char *, ...)>(&ImGui::TreeNode)
	));
	state.set_function("TreeNodeV", sol::overload(
		sol::resolve<bool(const char *, const char *, va_list)>(&ImGui::TreeNodeV),
		sol::resolve<bool(const void *, const char *, va_list)>(&ImGui::TreeNodeV)
	));
	state.set_function("TreeNodeEx", sol::overload(
		sol::resolve<bool(const char *, ImGuiTreeNodeFlags)>(&ImGui::TreeNodeEx),
		sol::resolve<bool(const char *, ImGuiTreeNodeFlags, const char *, ...)>(&ImGui::TreeNodeEx),
		sol::resolve<bool(const void *, ImGuiTreeNodeFlags, const char *, ...)>(&ImGui::TreeNodeEx)
	));
	state.set_function("TreeNodeExV", sol::overload(
		sol::resolve<bool(const char *, ImGuiTreeNodeFlags, const char *, va_list)>(&ImGui::TreeNodeExV),
		sol::resolve<bool(const void *, ImGuiTreeNodeFlags, const char *, va_list)>(&ImGui::TreeNodeExV)
	));
	state.set_function("TreePush", sol::overload(
		sol::resolve<void(const char *)>(&ImGui::TreePush),
		sol::resolve<void(const void *)>(&ImGui::TreePush)
	));
	state.set_function("TreePop", &ImGui::TreePop);
	state.set_function("GetTreeNodeToLabelSpacing", &ImGui::GetTreeNodeToLabelSpacing);
	state.set_function("CollapsingHeader", sol::overload(
		sol::resolve<bool(const char *, ImGuiTreeNodeFlags)>(&ImGui::CollapsingHeader),
		sol::resolve<bool(const char *, bool *, ImGuiTreeNodeFlags)>(&ImGui::CollapsingHeader)
	));
	state.set_function("SetNextItemOpen", &ImGui::SetNextItemOpen);
	state.set_function("Selectable", sol::overload(
		sol::resolve<bool(const char *, bool, ImGuiSelectableFlags, const ImVec2 &)>(&ImGui::Selectable),
		sol::resolve<bool(const char *, bool *, ImGuiSelectableFlags, const ImVec2 &)>(&ImGui::Selectable)
	));
	state.set_function("ListBox", sol::overload(
		sol::resolve<bool(const char *, int *, const char *const *, int, int)>(&ImGui::ListBox),
		sol::resolve<bool(const char *, int *, bool(*)(void *, int, const char **), void *, int, int)>(&ImGui::ListBox)
	));
	state.set_function("ListBoxHeader", sol::overload(
		sol::resolve<bool(const char *, const ImVec2 &)>(&ImGui::ListBoxHeader),
		sol::resolve<bool(const char *, int, int)>(&ImGui::ListBoxHeader)
	));
	state.set_function("ListBoxFooter", &ImGui::ListBoxFooter);
	state.set_function("PlotLines", sol::overload(
		sol::resolve<void(const char *, const float *, int, int, const char *, float, float, ImVec2, int)>(&ImGui::PlotLines),
		sol::resolve<void(const char *, float(*)(void *, int), void *, int, int, const char *, float, float, ImVec2)>(&ImGui::PlotLines)
	));
	state.set_function("PlotHistogram", sol::overload(
		sol::resolve<void(const char *, const float *, int, int, const char *, float, float, ImVec2, int)>(&ImGui::PlotHistogram),
		sol::resolve<void(const char *, float(*)(void *, int), void *, int, int, const char *, float, float, ImVec2)>(&ImGui::PlotHistogram)
	));
	state.set_function("Value", sol::overload(
		sol::resolve<void(const char *, bool)>(&ImGui::Value),
		sol::resolve<void(const char *, int)>(&ImGui::Value),
		sol::resolve<void(const char *, unsigned int)>(&ImGui::Value),
		sol::resolve<void(const char *, float, const char *)>(&ImGui::Value)
	));
	state.set_function("BeginMainMenuBar", &ImGui::BeginMainMenuBar);
	state.set_function("EndMainMenuBar", &ImGui::EndMainMenuBar);
	state.set_function("BeginMenuBar", &ImGui::BeginMenuBar);
	state.set_function("EndMenuBar", &ImGui::EndMenuBar);
	state.set_function("BeginMenu", &ImGui::BeginMenu);
	state.set_function("EndMenu", &ImGui::EndMenu);
	state.set_function("MenuItem", sol::overload(
		sol::resolve<bool(const char *, const char *, bool, bool)>(&ImGui::MenuItem),
		sol::resolve<bool(const char *, const char *, bool *, bool)>(&ImGui::MenuItem)
	));
	state.set_function("BeginTooltip", &ImGui::BeginTooltip);
	state.set_function("EndTooltip", &ImGui::EndTooltip);
	state.set_function("SetTooltip", &ImGui::SetTooltip);
	state.set_function("SetTooltipV", &ImGui::SetTooltipV);
	state.set_function("OpenPopup", &ImGui::OpenPopup);
	state.set_function("BeginPopup", &ImGui::BeginPopup);
	state.set_function("BeginPopupContextItem", &ImGui::BeginPopupContextItem);
	state.set_function("BeginPopupContextWindow", &ImGui::BeginPopupContextWindow);
	state.set_function("BeginPopupContextVoid", &ImGui::BeginPopupContextVoid);
	state.set_function("BeginPopupModal", &ImGui::BeginPopupModal);
	state.set_function("EndPopup", &ImGui::EndPopup);
	state.set_function("OpenPopupOnItemClick", &ImGui::OpenPopupOnItemClick);
	state.set_function("IsPopupOpen", &ImGui::IsPopupOpen);
	state.set_function("CloseCurrentPopup", &ImGui::CloseCurrentPopup);
	state.set_function("Columns", &ImGui::Columns);
	state.set_function("NextColumn", &ImGui::NextColumn);
	state.set_function("GetColumnIndex", &ImGui::GetColumnIndex);
	state.set_function("GetColumnWidth", &ImGui::GetColumnWidth);
	state.set_function("SetColumnWidth", &ImGui::SetColumnWidth);
	state.set_function("GetColumnOffset", &ImGui::GetColumnOffset);
	state.set_function("SetColumnOffset", &ImGui::SetColumnOffset);
	state.set_function("GetColumnsCount", &ImGui::GetColumnsCount);
	state.set_function("BeginTabBar", &ImGui::BeginTabBar);
	state.set_function("EndTabBar", &ImGui::EndTabBar);
	state.set_function("BeginTabItem", &ImGui::BeginTabItem);
	state.set_function("EndTabItem", &ImGui::EndTabItem);
	state.set_function("SetTabItemClosed", &ImGui::SetTabItemClosed);
	state.set_function("LogToTTY", &ImGui::LogToTTY);
	state.set_function("LogToFile", &ImGui::LogToFile);
	state.set_function("LogToClipboard", &ImGui::LogToClipboard);
	state.set_function("LogFinish", &ImGui::LogFinish);
	state.set_function("LogButtons", &ImGui::LogButtons);
	state.set_function("LogText", &ImGui::LogText);
	state.set_function("BeginDragDropSource", &ImGui::BeginDragDropSource);
	state.set_function("SetDragDropPayload", &ImGui::SetDragDropPayload);
	state.set_function("EndDragDropSource", &ImGui::EndDragDropSource);
	state.set_function("BeginDragDropTarget", &ImGui::BeginDragDropTarget);
	state.set_function("AcceptDragDropPayload", &ImGui::AcceptDragDropPayload);
	state.set_function("EndDragDropTarget", &ImGui::EndDragDropTarget);
	state.set_function("GetDragDropPayload", &ImGui::GetDragDropPayload);
	state.set_function("PushClipRect", &ImGui::PushClipRect);
	state.set_function("PopClipRect", &ImGui::PopClipRect);
	state.set_function("SetItemDefaultFocus", &ImGui::SetItemDefaultFocus);
	state.set_function("SetKeyboardFocusHere", &ImGui::SetKeyboardFocusHere);
	state.set_function("IsItemHovered", &ImGui::IsItemHovered);
	state.set_function("IsItemActive", &ImGui::IsItemActive);
	state.set_function("IsItemFocused", &ImGui::IsItemFocused);
	state.set_function("IsItemClicked", &ImGui::IsItemClicked);
	state.set_function("IsItemVisible", &ImGui::IsItemVisible);
	state.set_function("IsItemEdited", &ImGui::IsItemEdited);
	state.set_function("IsItemActivated", &ImGui::IsItemActivated);
	state.set_function("IsItemDeactivated", &ImGui::IsItemDeactivated);
	state.set_function("IsItemDeactivatedAfterEdit", &ImGui::IsItemDeactivatedAfterEdit);
	state.set_function("IsAnyItemHovered", &ImGui::IsAnyItemHovered);
	state.set_function("IsAnyItemActive", &ImGui::IsAnyItemActive);
	state.set_function("IsAnyItemFocused", &ImGui::IsAnyItemFocused);
	state.set_function("GetItemRectMin", &ImGui::GetItemRectMin);
	state.set_function("GetItemRectMax", &ImGui::GetItemRectMax);
	state.set_function("GetItemRectSize", &ImGui::GetItemRectSize);
	state.set_function("SetItemAllowOverlap", &ImGui::SetItemAllowOverlap);
	state.set_function("IsRectVisible", sol::overload(
		sol::resolve<bool(const ImVec2 &)>(&ImGui::IsRectVisible),
		sol::resolve<bool(const ImVec2 &, const ImVec2 &)>(&ImGui::IsRectVisible)
	));
	state.set_function("GetTime", &ImGui::GetTime);
	state.set_function("GetFrameCount", &ImGui::GetFrameCount);
	state.set_function("GetBackgroundDrawList", &ImGui::GetBackgroundDrawList);
	state.set_function("GetForegroundDrawList", &ImGui::GetForegroundDrawList);
	state.set_function("GetStyleColorName", &ImGui::GetStyleColorName);
	state.set_function("SetStateStorage", &ImGui::SetStateStorage);
	state.set_function("GetStateStorage", &ImGui::GetStateStorage);
	state.set_function("CalcTextSize", &ImGui::CalcTextSize);
	state.set_function("CalcListClipping", &ImGui::CalcListClipping);
	state.set_function("BeginChildFrame", &ImGui::BeginChildFrame);
	state.set_function("EndChildFrame", &ImGui::EndChildFrame);
	state.set_function("ColorConvertU32ToFloat4", &ImGui::ColorConvertU32ToFloat4);
	state.set_function("ColorConvertFloat4ToU32", &ImGui::ColorConvertFloat4ToU32);
	state.set_function("GetKeyIndex", &ImGui::GetKeyIndex);
	state.set_function("IsKeyDown", &ImGui::IsKeyDown);
	state.set_function("IsKeyPressed", &ImGui::IsKeyPressed);
	state.set_function("IsKeyReleased", &ImGui::IsKeyReleased);
	state.set_function("GetKeyPressedAmount", &ImGui::GetKeyPressedAmount);
	state.set_function("IsMouseDown", &ImGui::IsMouseDown);
	state.set_function("IsAnyMouseDown", &ImGui::IsAnyMouseDown);
	state.set_function("IsMouseClicked", &ImGui::IsMouseClicked);
	state.set_function("IsMouseDoubleClicked", &ImGui::IsMouseDoubleClicked);
	state.set_function("IsMouseReleased", &ImGui::IsMouseReleased);
	state.set_function("IsMouseDragging", &ImGui::IsMouseDragging);
	state.set_function("IsMouseHoveringRect", &ImGui::IsMouseHoveringRect);
	state.set_function("IsMousePosValid", &ImGui::IsMousePosValid);
	state.set_function("GetMousePos", &ImGui::GetMousePos);
	state.set_function("GetMousePosOnOpeningCurrentPopup", &ImGui::GetMousePosOnOpeningCurrentPopup);
	state.set_function("GetMouseDragDelta", &ImGui::GetMouseDragDelta);
	state.set_function("ResetMouseDragDelta", &ImGui::ResetMouseDragDelta);
	state.set_function("GetMouseCursor", &ImGui::GetMouseCursor);
	state.set_function("SetMouseCursor", &ImGui::SetMouseCursor);
	state.set_function("CaptureKeyboardFromApp", &ImGui::CaptureKeyboardFromApp);
	state.set_function("CaptureMouseFromApp", &ImGui::CaptureMouseFromApp);
	state.set_function("GetClipboardText", &ImGui::GetClipboardText);
	state.set_function("SetClipboardText", &ImGui::SetClipboardText);
	state.set_function("LoadIniSettingsFromDisk", &ImGui::LoadIniSettingsFromDisk);
	state.set_function("LoadIniSettingsFromMemory", &ImGui::LoadIniSettingsFromMemory);
	state.set_function("SaveIniSettingsToDisk", &ImGui::SaveIniSettingsToDisk);
	state.set_function("SaveIniSettingsToMemory", &ImGui::SaveIniSettingsToMemory);
	state.set_function("SetAllocatorFunctions", &ImGui::SetAllocatorFunctions);
	state.set_function("MemAlloc", &ImGui::MemAlloc);
	state.set_function("MemFree", &ImGui::MemFree);
}

void register_library_ImGui(sol::state& state)
{
	register_type_ImVec2(state);
	register_type_ImVec4(state);
	register_enum_ImGuiWindowFlags_(state);
	register_enum_ImGuiInputTextFlags_(state);
	register_enum_ImGuiTreeNodeFlags_(state);
	register_enum_ImGuiSelectableFlags_(state);
	register_enum_ImGuiComboFlags_(state);
	register_enum_ImGuiTabBarFlags_(state);
	register_enum_ImGuiTabItemFlags_(state);
	register_enum_ImGuiFocusedFlags_(state);
	register_enum_ImGuiHoveredFlags_(state);
	register_enum_ImGuiDragDropFlags_(state);
	register_enum_ImGuiDataType_(state);
	register_enum_ImGuiDir_(state);
	register_enum_ImGuiKey_(state);
	register_enum_ImGuiNavInput_(state);
	register_enum_ImGuiConfigFlags_(state);
	register_enum_ImGuiBackendFlags_(state);
	register_enum_ImGuiCol_(state);
	register_enum_ImGuiStyleVar_(state);
	register_enum_ImGuiColorEditFlags_(state);
	register_enum_ImGuiMouseCursor_(state);
	register_enum_ImGuiCond_(state);
	register_type_ImNewDummy(state);
	register_type_ImGuiStyle(state);
	register_type_ImGuiIO(state);
	register_type_ImGuiInputTextCallbackData(state);
	register_type_ImGuiSizeCallbackData(state);
	register_type_ImGuiPayload(state);
	register_type_ImGuiOnceUponAFrame(state);
	register_type_ImGuiTextFilter(state);
	register_type_ImGuiTextBuffer(state);
	register_type_ImGuiStorage(state);
	register_type_ImGuiListClipper(state);
	register_type_ImColor(state);
	register_type_ImDrawCmd(state);
	register_type_ImDrawVert(state);
	register_type_ImDrawChannel(state);
	register_type_ImDrawListSplitter(state);
	register_enum_ImDrawCornerFlags_(state);
	register_enum_ImDrawListFlags_(state);
	register_type_ImDrawList(state);
	register_type_ImDrawData(state);
	register_type_ImFontConfig(state);
	register_type_ImFontGlyph(state);
	register_type_ImFontGlyphRangesBuilder(state);
	register_type_ImFontAtlasCustomRect(state);
	register_enum_ImFontAtlasFlags_(state);
	register_type_ImFontAtlas(state);
	register_type_ImFont(state);

	register_ImGui_free_functions(state);
}
