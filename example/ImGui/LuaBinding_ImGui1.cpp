#include "LuaBinding_ImGui.h"

#include "imgui.h"


void register_type_ImVec2(sol::state& state)
{
	state.new_usertype<ImVec2>("ImVec2"
		// fields
		, "x", &ImVec2::x
		, "y", &ImVec2::y
		// methods
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImVec2()
		,
		ImVec2(float, float)
		>()
		);
}

void register_type_ImVec4(sol::state& state)
{
	state.new_usertype<ImVec4>("ImVec4"
		// fields
		, "x", &ImVec4::x
		, "y", &ImVec4::y
		, "z", &ImVec4::z
		, "w", &ImVec4::w
		// methods
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImVec4()
		,
		ImVec4(float, float, float, float)
		>()
		);
}

void register_enum_ImGuiWindowFlags_(sol::state& state)
{
	state.new_enum("ImGuiWindowFlags_"
		, "ImGuiWindowFlags_None", ImGuiWindowFlags_::ImGuiWindowFlags_None
		, "ImGuiWindowFlags_NoTitleBar", ImGuiWindowFlags_::ImGuiWindowFlags_NoTitleBar
		, "ImGuiWindowFlags_NoResize", ImGuiWindowFlags_::ImGuiWindowFlags_NoResize
		, "ImGuiWindowFlags_NoMove", ImGuiWindowFlags_::ImGuiWindowFlags_NoMove
		, "ImGuiWindowFlags_NoScrollbar", ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar
		, "ImGuiWindowFlags_NoScrollWithMouse", ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse
		, "ImGuiWindowFlags_NoCollapse", ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse
		, "ImGuiWindowFlags_AlwaysAutoResize", ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysAutoResize
		, "ImGuiWindowFlags_NoBackground", ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground
		, "ImGuiWindowFlags_NoSavedSettings", ImGuiWindowFlags_::ImGuiWindowFlags_NoSavedSettings
		, "ImGuiWindowFlags_NoMouseInputs", ImGuiWindowFlags_::ImGuiWindowFlags_NoMouseInputs
		, "ImGuiWindowFlags_MenuBar", ImGuiWindowFlags_::ImGuiWindowFlags_MenuBar
		, "ImGuiWindowFlags_HorizontalScrollbar", ImGuiWindowFlags_::ImGuiWindowFlags_HorizontalScrollbar
		, "ImGuiWindowFlags_NoFocusOnAppearing", ImGuiWindowFlags_::ImGuiWindowFlags_NoFocusOnAppearing
		, "ImGuiWindowFlags_NoBringToFrontOnFocus", ImGuiWindowFlags_::ImGuiWindowFlags_NoBringToFrontOnFocus
		, "ImGuiWindowFlags_AlwaysVerticalScrollbar", ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysVerticalScrollbar
		, "ImGuiWindowFlags_AlwaysHorizontalScrollbar", ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysHorizontalScrollbar
		, "ImGuiWindowFlags_AlwaysUseWindowPadding", ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysUseWindowPadding
		, "ImGuiWindowFlags_NoNavInputs", ImGuiWindowFlags_::ImGuiWindowFlags_NoNavInputs
		, "ImGuiWindowFlags_NoNavFocus", ImGuiWindowFlags_::ImGuiWindowFlags_NoNavFocus
		, "ImGuiWindowFlags_UnsavedDocument", ImGuiWindowFlags_::ImGuiWindowFlags_UnsavedDocument
		, "ImGuiWindowFlags_NoNav", ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
		, "ImGuiWindowFlags_NoDecoration", ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration
		, "ImGuiWindowFlags_NoInputs", ImGuiWindowFlags_::ImGuiWindowFlags_NoInputs
		, "ImGuiWindowFlags_NavFlattened", ImGuiWindowFlags_::ImGuiWindowFlags_NavFlattened
		, "ImGuiWindowFlags_ChildWindow", ImGuiWindowFlags_::ImGuiWindowFlags_ChildWindow
		, "ImGuiWindowFlags_Tooltip", ImGuiWindowFlags_::ImGuiWindowFlags_Tooltip
		, "ImGuiWindowFlags_Popup", ImGuiWindowFlags_::ImGuiWindowFlags_Popup
		, "ImGuiWindowFlags_Modal", ImGuiWindowFlags_::ImGuiWindowFlags_Modal
		, "ImGuiWindowFlags_ChildMenu", ImGuiWindowFlags_::ImGuiWindowFlags_ChildMenu
	);
}

void register_enum_ImGuiInputTextFlags_(sol::state& state)
{
	state.new_enum("ImGuiInputTextFlags_"
		, "ImGuiInputTextFlags_None", ImGuiInputTextFlags_::ImGuiInputTextFlags_None
		, "ImGuiInputTextFlags_CharsDecimal", ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsDecimal
		, "ImGuiInputTextFlags_CharsHexadecimal", ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsHexadecimal
		, "ImGuiInputTextFlags_CharsUppercase", ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsUppercase
		, "ImGuiInputTextFlags_CharsNoBlank", ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsNoBlank
		, "ImGuiInputTextFlags_AutoSelectAll", ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll
		, "ImGuiInputTextFlags_EnterReturnsTrue", ImGuiInputTextFlags_::ImGuiInputTextFlags_EnterReturnsTrue
		, "ImGuiInputTextFlags_CallbackCompletion", ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCompletion
		, "ImGuiInputTextFlags_CallbackHistory", ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackHistory
		, "ImGuiInputTextFlags_CallbackAlways", ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackAlways
		, "ImGuiInputTextFlags_CallbackCharFilter", ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCharFilter
		, "ImGuiInputTextFlags_AllowTabInput", ImGuiInputTextFlags_::ImGuiInputTextFlags_AllowTabInput
		, "ImGuiInputTextFlags_CtrlEnterForNewLine", ImGuiInputTextFlags_::ImGuiInputTextFlags_CtrlEnterForNewLine
		, "ImGuiInputTextFlags_NoHorizontalScroll", ImGuiInputTextFlags_::ImGuiInputTextFlags_NoHorizontalScroll
		, "ImGuiInputTextFlags_AlwaysInsertMode", ImGuiInputTextFlags_::ImGuiInputTextFlags_AlwaysInsertMode
		, "ImGuiInputTextFlags_ReadOnly", ImGuiInputTextFlags_::ImGuiInputTextFlags_ReadOnly
		, "ImGuiInputTextFlags_Password", ImGuiInputTextFlags_::ImGuiInputTextFlags_Password
		, "ImGuiInputTextFlags_NoUndoRedo", ImGuiInputTextFlags_::ImGuiInputTextFlags_NoUndoRedo
		, "ImGuiInputTextFlags_CharsScientific", ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsScientific
		, "ImGuiInputTextFlags_CallbackResize", ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackResize
		, "ImGuiInputTextFlags_Multiline", ImGuiInputTextFlags_::ImGuiInputTextFlags_Multiline
		, "ImGuiInputTextFlags_NoMarkEdited", ImGuiInputTextFlags_::ImGuiInputTextFlags_NoMarkEdited
	);
}

void register_enum_ImGuiTreeNodeFlags_(sol::state& state)
{
	state.new_enum("ImGuiTreeNodeFlags_"
		, "ImGuiTreeNodeFlags_None", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_None
		, "ImGuiTreeNodeFlags_Selected", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_Selected
		, "ImGuiTreeNodeFlags_Framed", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_Framed
		, "ImGuiTreeNodeFlags_AllowItemOverlap", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_AllowItemOverlap
		, "ImGuiTreeNodeFlags_NoTreePushOnOpen", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_NoTreePushOnOpen
		, "ImGuiTreeNodeFlags_NoAutoOpenOnLog", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_NoAutoOpenOnLog
		, "ImGuiTreeNodeFlags_DefaultOpen", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_DefaultOpen
		, "ImGuiTreeNodeFlags_OpenOnDoubleClick", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_OpenOnDoubleClick
		, "ImGuiTreeNodeFlags_OpenOnArrow", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_OpenOnArrow
		, "ImGuiTreeNodeFlags_Leaf", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_Leaf
		, "ImGuiTreeNodeFlags_Bullet", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_Bullet
		, "ImGuiTreeNodeFlags_FramePadding", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_FramePadding
		, "ImGuiTreeNodeFlags_NavLeftJumpsBackHere", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_NavLeftJumpsBackHere
		, "ImGuiTreeNodeFlags_CollapsingHeader", ImGuiTreeNodeFlags_::ImGuiTreeNodeFlags_CollapsingHeader
	);
}

void register_enum_ImGuiSelectableFlags_(sol::state& state)
{
	state.new_enum("ImGuiSelectableFlags_"
		, "ImGuiSelectableFlags_None", ImGuiSelectableFlags_::ImGuiSelectableFlags_None
		, "ImGuiSelectableFlags_DontClosePopups", ImGuiSelectableFlags_::ImGuiSelectableFlags_DontClosePopups
		, "ImGuiSelectableFlags_SpanAllColumns", ImGuiSelectableFlags_::ImGuiSelectableFlags_SpanAllColumns
		, "ImGuiSelectableFlags_AllowDoubleClick", ImGuiSelectableFlags_::ImGuiSelectableFlags_AllowDoubleClick
		, "ImGuiSelectableFlags_Disabled", ImGuiSelectableFlags_::ImGuiSelectableFlags_Disabled
	);
}

void register_enum_ImGuiComboFlags_(sol::state& state)
{
	state.new_enum("ImGuiComboFlags_"
		, "ImGuiComboFlags_None", ImGuiComboFlags_::ImGuiComboFlags_None
		, "ImGuiComboFlags_PopupAlignLeft", ImGuiComboFlags_::ImGuiComboFlags_PopupAlignLeft
		, "ImGuiComboFlags_HeightSmall", ImGuiComboFlags_::ImGuiComboFlags_HeightSmall
		, "ImGuiComboFlags_HeightRegular", ImGuiComboFlags_::ImGuiComboFlags_HeightRegular
		, "ImGuiComboFlags_HeightLarge", ImGuiComboFlags_::ImGuiComboFlags_HeightLarge
		, "ImGuiComboFlags_HeightLargest", ImGuiComboFlags_::ImGuiComboFlags_HeightLargest
		, "ImGuiComboFlags_NoArrowButton", ImGuiComboFlags_::ImGuiComboFlags_NoArrowButton
		, "ImGuiComboFlags_NoPreview", ImGuiComboFlags_::ImGuiComboFlags_NoPreview
		, "ImGuiComboFlags_HeightMask_", ImGuiComboFlags_::ImGuiComboFlags_HeightMask_
	);
}

void register_enum_ImGuiTabBarFlags_(sol::state& state)
{
	state.new_enum("ImGuiTabBarFlags_"
		, "ImGuiTabBarFlags_None", ImGuiTabBarFlags_::ImGuiTabBarFlags_None
		, "ImGuiTabBarFlags_Reorderable", ImGuiTabBarFlags_::ImGuiTabBarFlags_Reorderable
		, "ImGuiTabBarFlags_AutoSelectNewTabs", ImGuiTabBarFlags_::ImGuiTabBarFlags_AutoSelectNewTabs
		, "ImGuiTabBarFlags_TabListPopupButton", ImGuiTabBarFlags_::ImGuiTabBarFlags_TabListPopupButton
		, "ImGuiTabBarFlags_NoCloseWithMiddleMouseButton", ImGuiTabBarFlags_::ImGuiTabBarFlags_NoCloseWithMiddleMouseButton
		, "ImGuiTabBarFlags_NoTabListScrollingButtons", ImGuiTabBarFlags_::ImGuiTabBarFlags_NoTabListScrollingButtons
		, "ImGuiTabBarFlags_NoTooltip", ImGuiTabBarFlags_::ImGuiTabBarFlags_NoTooltip
		, "ImGuiTabBarFlags_FittingPolicyResizeDown", ImGuiTabBarFlags_::ImGuiTabBarFlags_FittingPolicyResizeDown
		, "ImGuiTabBarFlags_FittingPolicyScroll", ImGuiTabBarFlags_::ImGuiTabBarFlags_FittingPolicyScroll
		, "ImGuiTabBarFlags_FittingPolicyMask_", ImGuiTabBarFlags_::ImGuiTabBarFlags_FittingPolicyMask_
		, "ImGuiTabBarFlags_FittingPolicyDefault_", ImGuiTabBarFlags_::ImGuiTabBarFlags_FittingPolicyDefault_
	);
}

void register_enum_ImGuiTabItemFlags_(sol::state& state)
{
	state.new_enum("ImGuiTabItemFlags_"
		, "ImGuiTabItemFlags_None", ImGuiTabItemFlags_::ImGuiTabItemFlags_None
		, "ImGuiTabItemFlags_UnsavedDocument", ImGuiTabItemFlags_::ImGuiTabItemFlags_UnsavedDocument
		, "ImGuiTabItemFlags_SetSelected", ImGuiTabItemFlags_::ImGuiTabItemFlags_SetSelected
		, "ImGuiTabItemFlags_NoCloseWithMiddleMouseButton", ImGuiTabItemFlags_::ImGuiTabItemFlags_NoCloseWithMiddleMouseButton
		, "ImGuiTabItemFlags_NoPushId", ImGuiTabItemFlags_::ImGuiTabItemFlags_NoPushId
	);
}

void register_enum_ImGuiFocusedFlags_(sol::state& state)
{
	state.new_enum("ImGuiFocusedFlags_"
		, "ImGuiFocusedFlags_None", ImGuiFocusedFlags_::ImGuiFocusedFlags_None
		, "ImGuiFocusedFlags_ChildWindows", ImGuiFocusedFlags_::ImGuiFocusedFlags_ChildWindows
		, "ImGuiFocusedFlags_RootWindow", ImGuiFocusedFlags_::ImGuiFocusedFlags_RootWindow
		, "ImGuiFocusedFlags_AnyWindow", ImGuiFocusedFlags_::ImGuiFocusedFlags_AnyWindow
		, "ImGuiFocusedFlags_RootAndChildWindows", ImGuiFocusedFlags_::ImGuiFocusedFlags_RootAndChildWindows
	);
}

void register_enum_ImGuiHoveredFlags_(sol::state& state)
{
	state.new_enum("ImGuiHoveredFlags_"
		, "ImGuiHoveredFlags_None", ImGuiHoveredFlags_::ImGuiHoveredFlags_None
		, "ImGuiHoveredFlags_ChildWindows", ImGuiHoveredFlags_::ImGuiHoveredFlags_ChildWindows
		, "ImGuiHoveredFlags_RootWindow", ImGuiHoveredFlags_::ImGuiHoveredFlags_RootWindow
		, "ImGuiHoveredFlags_AnyWindow", ImGuiHoveredFlags_::ImGuiHoveredFlags_AnyWindow
		, "ImGuiHoveredFlags_AllowWhenBlockedByPopup", ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup
		, "ImGuiHoveredFlags_AllowWhenBlockedByActiveItem", ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByActiveItem
		, "ImGuiHoveredFlags_AllowWhenOverlapped", ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenOverlapped
		, "ImGuiHoveredFlags_AllowWhenDisabled", ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenDisabled
		, "ImGuiHoveredFlags_RectOnly", ImGuiHoveredFlags_::ImGuiHoveredFlags_RectOnly
		, "ImGuiHoveredFlags_RootAndChildWindows", ImGuiHoveredFlags_::ImGuiHoveredFlags_RootAndChildWindows
	);
}

void register_enum_ImGuiDragDropFlags_(sol::state& state)
{
	state.new_enum("ImGuiDragDropFlags_"
		, "ImGuiDragDropFlags_None", ImGuiDragDropFlags_::ImGuiDragDropFlags_None
		, "ImGuiDragDropFlags_SourceNoPreviewTooltip", ImGuiDragDropFlags_::ImGuiDragDropFlags_SourceNoPreviewTooltip
		, "ImGuiDragDropFlags_SourceNoDisableHover", ImGuiDragDropFlags_::ImGuiDragDropFlags_SourceNoDisableHover
		, "ImGuiDragDropFlags_SourceNoHoldToOpenOthers", ImGuiDragDropFlags_::ImGuiDragDropFlags_SourceNoHoldToOpenOthers
		, "ImGuiDragDropFlags_SourceAllowNullID", ImGuiDragDropFlags_::ImGuiDragDropFlags_SourceAllowNullID
		, "ImGuiDragDropFlags_SourceExtern", ImGuiDragDropFlags_::ImGuiDragDropFlags_SourceExtern
		, "ImGuiDragDropFlags_SourceAutoExpirePayload", ImGuiDragDropFlags_::ImGuiDragDropFlags_SourceAutoExpirePayload
		, "ImGuiDragDropFlags_AcceptBeforeDelivery", ImGuiDragDropFlags_::ImGuiDragDropFlags_AcceptBeforeDelivery
		, "ImGuiDragDropFlags_AcceptNoDrawDefaultRect", ImGuiDragDropFlags_::ImGuiDragDropFlags_AcceptNoDrawDefaultRect
		, "ImGuiDragDropFlags_AcceptNoPreviewTooltip", ImGuiDragDropFlags_::ImGuiDragDropFlags_AcceptNoPreviewTooltip
		, "ImGuiDragDropFlags_AcceptPeekOnly", ImGuiDragDropFlags_::ImGuiDragDropFlags_AcceptPeekOnly
	);
}

void register_enum_ImGuiDataType_(sol::state& state)
{
	state.new_enum("ImGuiDataType_"
		, "ImGuiDataType_S8", ImGuiDataType_::ImGuiDataType_S8
		, "ImGuiDataType_U8", ImGuiDataType_::ImGuiDataType_U8
		, "ImGuiDataType_S16", ImGuiDataType_::ImGuiDataType_S16
		, "ImGuiDataType_U16", ImGuiDataType_::ImGuiDataType_U16
		, "ImGuiDataType_S32", ImGuiDataType_::ImGuiDataType_S32
		, "ImGuiDataType_U32", ImGuiDataType_::ImGuiDataType_U32
		, "ImGuiDataType_S64", ImGuiDataType_::ImGuiDataType_S64
		, "ImGuiDataType_U64", ImGuiDataType_::ImGuiDataType_U64
		, "ImGuiDataType_Float", ImGuiDataType_::ImGuiDataType_Float
		, "ImGuiDataType_Double", ImGuiDataType_::ImGuiDataType_Double
		, "ImGuiDataType_COUNT", ImGuiDataType_::ImGuiDataType_COUNT
	);
}

void register_enum_ImGuiDir_(sol::state& state)
{
	state.new_enum("ImGuiDir_"
		, "ImGuiDir_None", ImGuiDir_::ImGuiDir_None
		, "ImGuiDir_Left", ImGuiDir_::ImGuiDir_Left
		, "ImGuiDir_Right", ImGuiDir_::ImGuiDir_Right
		, "ImGuiDir_Up", ImGuiDir_::ImGuiDir_Up
		, "ImGuiDir_Down", ImGuiDir_::ImGuiDir_Down
		, "ImGuiDir_COUNT", ImGuiDir_::ImGuiDir_COUNT
	);
}

void register_enum_ImGuiKey_(sol::state& state)
{
	state.new_enum("ImGuiKey_"
		, "ImGuiKey_Tab", ImGuiKey_::ImGuiKey_Tab
		, "ImGuiKey_LeftArrow", ImGuiKey_::ImGuiKey_LeftArrow
		, "ImGuiKey_RightArrow", ImGuiKey_::ImGuiKey_RightArrow
		, "ImGuiKey_UpArrow", ImGuiKey_::ImGuiKey_UpArrow
		, "ImGuiKey_DownArrow", ImGuiKey_::ImGuiKey_DownArrow
		, "ImGuiKey_PageUp", ImGuiKey_::ImGuiKey_PageUp
		, "ImGuiKey_PageDown", ImGuiKey_::ImGuiKey_PageDown
		, "ImGuiKey_Home", ImGuiKey_::ImGuiKey_Home
		, "ImGuiKey_End", ImGuiKey_::ImGuiKey_End
		, "ImGuiKey_Insert", ImGuiKey_::ImGuiKey_Insert
		, "ImGuiKey_Delete", ImGuiKey_::ImGuiKey_Delete
		, "ImGuiKey_Backspace", ImGuiKey_::ImGuiKey_Backspace
		, "ImGuiKey_Space", ImGuiKey_::ImGuiKey_Space
		, "ImGuiKey_Enter", ImGuiKey_::ImGuiKey_Enter
		, "ImGuiKey_Escape", ImGuiKey_::ImGuiKey_Escape
		, "ImGuiKey_KeyPadEnter", ImGuiKey_::ImGuiKey_KeyPadEnter
		, "ImGuiKey_A", ImGuiKey_::ImGuiKey_A
		, "ImGuiKey_C", ImGuiKey_::ImGuiKey_C
		, "ImGuiKey_V", ImGuiKey_::ImGuiKey_V
		, "ImGuiKey_X", ImGuiKey_::ImGuiKey_X
		, "ImGuiKey_Y", ImGuiKey_::ImGuiKey_Y
		, "ImGuiKey_Z", ImGuiKey_::ImGuiKey_Z
		, "ImGuiKey_COUNT", ImGuiKey_::ImGuiKey_COUNT
	);
}

void register_enum_ImGuiNavInput_(sol::state& state)
{
	state.new_enum("ImGuiNavInput_"
		, "ImGuiNavInput_Activate", ImGuiNavInput_::ImGuiNavInput_Activate
		, "ImGuiNavInput_Cancel", ImGuiNavInput_::ImGuiNavInput_Cancel
		, "ImGuiNavInput_Input", ImGuiNavInput_::ImGuiNavInput_Input
		, "ImGuiNavInput_Menu", ImGuiNavInput_::ImGuiNavInput_Menu
		, "ImGuiNavInput_DpadLeft", ImGuiNavInput_::ImGuiNavInput_DpadLeft
		, "ImGuiNavInput_DpadRight", ImGuiNavInput_::ImGuiNavInput_DpadRight
		, "ImGuiNavInput_DpadUp", ImGuiNavInput_::ImGuiNavInput_DpadUp
		, "ImGuiNavInput_DpadDown", ImGuiNavInput_::ImGuiNavInput_DpadDown
		, "ImGuiNavInput_LStickLeft", ImGuiNavInput_::ImGuiNavInput_LStickLeft
		, "ImGuiNavInput_LStickRight", ImGuiNavInput_::ImGuiNavInput_LStickRight
		, "ImGuiNavInput_LStickUp", ImGuiNavInput_::ImGuiNavInput_LStickUp
		, "ImGuiNavInput_LStickDown", ImGuiNavInput_::ImGuiNavInput_LStickDown
		, "ImGuiNavInput_FocusPrev", ImGuiNavInput_::ImGuiNavInput_FocusPrev
		, "ImGuiNavInput_FocusNext", ImGuiNavInput_::ImGuiNavInput_FocusNext
		, "ImGuiNavInput_TweakSlow", ImGuiNavInput_::ImGuiNavInput_TweakSlow
		, "ImGuiNavInput_TweakFast", ImGuiNavInput_::ImGuiNavInput_TweakFast
		, "ImGuiNavInput_KeyMenu_", ImGuiNavInput_::ImGuiNavInput_KeyMenu_
		, "ImGuiNavInput_KeyTab_", ImGuiNavInput_::ImGuiNavInput_KeyTab_
		, "ImGuiNavInput_KeyLeft_", ImGuiNavInput_::ImGuiNavInput_KeyLeft_
		, "ImGuiNavInput_KeyRight_", ImGuiNavInput_::ImGuiNavInput_KeyRight_
		, "ImGuiNavInput_KeyUp_", ImGuiNavInput_::ImGuiNavInput_KeyUp_
		, "ImGuiNavInput_KeyDown_", ImGuiNavInput_::ImGuiNavInput_KeyDown_
		, "ImGuiNavInput_COUNT", ImGuiNavInput_::ImGuiNavInput_COUNT
		, "ImGuiNavInput_InternalStart_", ImGuiNavInput_::ImGuiNavInput_InternalStart_
	);
}

void register_enum_ImGuiConfigFlags_(sol::state& state)
{
	state.new_enum("ImGuiConfigFlags_"
		, "ImGuiConfigFlags_None", ImGuiConfigFlags_::ImGuiConfigFlags_None
		, "ImGuiConfigFlags_NavEnableKeyboard", ImGuiConfigFlags_::ImGuiConfigFlags_NavEnableKeyboard
		, "ImGuiConfigFlags_NavEnableGamepad", ImGuiConfigFlags_::ImGuiConfigFlags_NavEnableGamepad
		, "ImGuiConfigFlags_NavEnableSetMousePos", ImGuiConfigFlags_::ImGuiConfigFlags_NavEnableSetMousePos
		, "ImGuiConfigFlags_NavNoCaptureKeyboard", ImGuiConfigFlags_::ImGuiConfigFlags_NavNoCaptureKeyboard
		, "ImGuiConfigFlags_NoMouse", ImGuiConfigFlags_::ImGuiConfigFlags_NoMouse
		, "ImGuiConfigFlags_NoMouseCursorChange", ImGuiConfigFlags_::ImGuiConfigFlags_NoMouseCursorChange
		, "ImGuiConfigFlags_IsSRGB", ImGuiConfigFlags_::ImGuiConfigFlags_IsSRGB
		, "ImGuiConfigFlags_IsTouchScreen", ImGuiConfigFlags_::ImGuiConfigFlags_IsTouchScreen
	);
}

void register_enum_ImGuiBackendFlags_(sol::state& state)
{
	state.new_enum("ImGuiBackendFlags_"
		, "ImGuiBackendFlags_None", ImGuiBackendFlags_::ImGuiBackendFlags_None
		, "ImGuiBackendFlags_HasGamepad", ImGuiBackendFlags_::ImGuiBackendFlags_HasGamepad
		, "ImGuiBackendFlags_HasMouseCursors", ImGuiBackendFlags_::ImGuiBackendFlags_HasMouseCursors
		, "ImGuiBackendFlags_HasSetMousePos", ImGuiBackendFlags_::ImGuiBackendFlags_HasSetMousePos
		, "ImGuiBackendFlags_RendererHasVtxOffset", ImGuiBackendFlags_::ImGuiBackendFlags_RendererHasVtxOffset
	);
}

void register_enum_ImGuiCol_(sol::state& state)
{
	state.new_enum("ImGuiCol_"
		, "ImGuiCol_Text", ImGuiCol_::ImGuiCol_Text
		, "ImGuiCol_TextDisabled", ImGuiCol_::ImGuiCol_TextDisabled
		, "ImGuiCol_WindowBg", ImGuiCol_::ImGuiCol_WindowBg
		, "ImGuiCol_ChildBg", ImGuiCol_::ImGuiCol_ChildBg
		, "ImGuiCol_PopupBg", ImGuiCol_::ImGuiCol_PopupBg
		, "ImGuiCol_Border", ImGuiCol_::ImGuiCol_Border
		, "ImGuiCol_BorderShadow", ImGuiCol_::ImGuiCol_BorderShadow
		, "ImGuiCol_FrameBg", ImGuiCol_::ImGuiCol_FrameBg
		, "ImGuiCol_FrameBgHovered", ImGuiCol_::ImGuiCol_FrameBgHovered
		, "ImGuiCol_FrameBgActive", ImGuiCol_::ImGuiCol_FrameBgActive
		, "ImGuiCol_TitleBg", ImGuiCol_::ImGuiCol_TitleBg
		, "ImGuiCol_TitleBgActive", ImGuiCol_::ImGuiCol_TitleBgActive
		, "ImGuiCol_TitleBgCollapsed", ImGuiCol_::ImGuiCol_TitleBgCollapsed
		, "ImGuiCol_MenuBarBg", ImGuiCol_::ImGuiCol_MenuBarBg
		, "ImGuiCol_ScrollbarBg", ImGuiCol_::ImGuiCol_ScrollbarBg
		, "ImGuiCol_ScrollbarGrab", ImGuiCol_::ImGuiCol_ScrollbarGrab
		, "ImGuiCol_ScrollbarGrabHovered", ImGuiCol_::ImGuiCol_ScrollbarGrabHovered
		, "ImGuiCol_ScrollbarGrabActive", ImGuiCol_::ImGuiCol_ScrollbarGrabActive
		, "ImGuiCol_CheckMark", ImGuiCol_::ImGuiCol_CheckMark
		, "ImGuiCol_SliderGrab", ImGuiCol_::ImGuiCol_SliderGrab
		, "ImGuiCol_SliderGrabActive", ImGuiCol_::ImGuiCol_SliderGrabActive
		, "ImGuiCol_Button", ImGuiCol_::ImGuiCol_Button
		, "ImGuiCol_ButtonHovered", ImGuiCol_::ImGuiCol_ButtonHovered
		, "ImGuiCol_ButtonActive", ImGuiCol_::ImGuiCol_ButtonActive
		, "ImGuiCol_Header", ImGuiCol_::ImGuiCol_Header
		, "ImGuiCol_HeaderHovered", ImGuiCol_::ImGuiCol_HeaderHovered
		, "ImGuiCol_HeaderActive", ImGuiCol_::ImGuiCol_HeaderActive
		, "ImGuiCol_Separator", ImGuiCol_::ImGuiCol_Separator
		, "ImGuiCol_SeparatorHovered", ImGuiCol_::ImGuiCol_SeparatorHovered
		, "ImGuiCol_SeparatorActive", ImGuiCol_::ImGuiCol_SeparatorActive
		, "ImGuiCol_ResizeGrip", ImGuiCol_::ImGuiCol_ResizeGrip
		, "ImGuiCol_ResizeGripHovered", ImGuiCol_::ImGuiCol_ResizeGripHovered
		, "ImGuiCol_ResizeGripActive", ImGuiCol_::ImGuiCol_ResizeGripActive
		, "ImGuiCol_Tab", ImGuiCol_::ImGuiCol_Tab
		, "ImGuiCol_TabHovered", ImGuiCol_::ImGuiCol_TabHovered
		, "ImGuiCol_TabActive", ImGuiCol_::ImGuiCol_TabActive
		, "ImGuiCol_TabUnfocused", ImGuiCol_::ImGuiCol_TabUnfocused
		, "ImGuiCol_TabUnfocusedActive", ImGuiCol_::ImGuiCol_TabUnfocusedActive
		, "ImGuiCol_PlotLines", ImGuiCol_::ImGuiCol_PlotLines
		, "ImGuiCol_PlotLinesHovered", ImGuiCol_::ImGuiCol_PlotLinesHovered
		, "ImGuiCol_PlotHistogram", ImGuiCol_::ImGuiCol_PlotHistogram
		, "ImGuiCol_PlotHistogramHovered", ImGuiCol_::ImGuiCol_PlotHistogramHovered
		, "ImGuiCol_TextSelectedBg", ImGuiCol_::ImGuiCol_TextSelectedBg
		, "ImGuiCol_DragDropTarget", ImGuiCol_::ImGuiCol_DragDropTarget
		, "ImGuiCol_NavHighlight", ImGuiCol_::ImGuiCol_NavHighlight
		, "ImGuiCol_NavWindowingHighlight", ImGuiCol_::ImGuiCol_NavWindowingHighlight
		, "ImGuiCol_NavWindowingDimBg", ImGuiCol_::ImGuiCol_NavWindowingDimBg
		, "ImGuiCol_ModalWindowDimBg", ImGuiCol_::ImGuiCol_ModalWindowDimBg
		, "ImGuiCol_COUNT", ImGuiCol_::ImGuiCol_COUNT
	);
}

void register_enum_ImGuiStyleVar_(sol::state& state)
{
	state.new_enum("ImGuiStyleVar_"
		, "ImGuiStyleVar_Alpha", ImGuiStyleVar_::ImGuiStyleVar_Alpha
		, "ImGuiStyleVar_WindowPadding", ImGuiStyleVar_::ImGuiStyleVar_WindowPadding
		, "ImGuiStyleVar_WindowRounding", ImGuiStyleVar_::ImGuiStyleVar_WindowRounding
		, "ImGuiStyleVar_WindowBorderSize", ImGuiStyleVar_::ImGuiStyleVar_WindowBorderSize
		, "ImGuiStyleVar_WindowMinSize", ImGuiStyleVar_::ImGuiStyleVar_WindowMinSize
		, "ImGuiStyleVar_WindowTitleAlign", ImGuiStyleVar_::ImGuiStyleVar_WindowTitleAlign
		, "ImGuiStyleVar_ChildRounding", ImGuiStyleVar_::ImGuiStyleVar_ChildRounding
		, "ImGuiStyleVar_ChildBorderSize", ImGuiStyleVar_::ImGuiStyleVar_ChildBorderSize
		, "ImGuiStyleVar_PopupRounding", ImGuiStyleVar_::ImGuiStyleVar_PopupRounding
		, "ImGuiStyleVar_PopupBorderSize", ImGuiStyleVar_::ImGuiStyleVar_PopupBorderSize
		, "ImGuiStyleVar_FramePadding", ImGuiStyleVar_::ImGuiStyleVar_FramePadding
		, "ImGuiStyleVar_FrameRounding", ImGuiStyleVar_::ImGuiStyleVar_FrameRounding
		, "ImGuiStyleVar_FrameBorderSize", ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize
		, "ImGuiStyleVar_ItemSpacing", ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing
		, "ImGuiStyleVar_ItemInnerSpacing", ImGuiStyleVar_::ImGuiStyleVar_ItemInnerSpacing
		, "ImGuiStyleVar_IndentSpacing", ImGuiStyleVar_::ImGuiStyleVar_IndentSpacing
		, "ImGuiStyleVar_ScrollbarSize", ImGuiStyleVar_::ImGuiStyleVar_ScrollbarSize
		, "ImGuiStyleVar_ScrollbarRounding", ImGuiStyleVar_::ImGuiStyleVar_ScrollbarRounding
		, "ImGuiStyleVar_GrabMinSize", ImGuiStyleVar_::ImGuiStyleVar_GrabMinSize
		, "ImGuiStyleVar_GrabRounding", ImGuiStyleVar_::ImGuiStyleVar_GrabRounding
		, "ImGuiStyleVar_TabRounding", ImGuiStyleVar_::ImGuiStyleVar_TabRounding
		, "ImGuiStyleVar_ButtonTextAlign", ImGuiStyleVar_::ImGuiStyleVar_ButtonTextAlign
		, "ImGuiStyleVar_SelectableTextAlign", ImGuiStyleVar_::ImGuiStyleVar_SelectableTextAlign
		, "ImGuiStyleVar_COUNT", ImGuiStyleVar_::ImGuiStyleVar_COUNT
	);
}

void register_enum_ImGuiColorEditFlags_(sol::state& state)
{
	state.new_enum("ImGuiColorEditFlags_"
		, "ImGuiColorEditFlags_None", ImGuiColorEditFlags_::ImGuiColorEditFlags_None
		, "ImGuiColorEditFlags_NoAlpha", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoAlpha
		, "ImGuiColorEditFlags_NoPicker", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoPicker
		, "ImGuiColorEditFlags_NoOptions", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoOptions
		, "ImGuiColorEditFlags_NoSmallPreview", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoSmallPreview
		, "ImGuiColorEditFlags_NoInputs", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoInputs
		, "ImGuiColorEditFlags_NoTooltip", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoTooltip
		, "ImGuiColorEditFlags_NoLabel", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoLabel
		, "ImGuiColorEditFlags_NoSidePreview", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoSidePreview
		, "ImGuiColorEditFlags_NoDragDrop", ImGuiColorEditFlags_::ImGuiColorEditFlags_NoDragDrop
		, "ImGuiColorEditFlags_AlphaBar", ImGuiColorEditFlags_::ImGuiColorEditFlags_AlphaBar
		, "ImGuiColorEditFlags_AlphaPreview", ImGuiColorEditFlags_::ImGuiColorEditFlags_AlphaPreview
		, "ImGuiColorEditFlags_AlphaPreviewHalf", ImGuiColorEditFlags_::ImGuiColorEditFlags_AlphaPreviewHalf
		, "ImGuiColorEditFlags_HDR", ImGuiColorEditFlags_::ImGuiColorEditFlags_HDR
		, "ImGuiColorEditFlags_DisplayRGB", ImGuiColorEditFlags_::ImGuiColorEditFlags_DisplayRGB
		, "ImGuiColorEditFlags_DisplayHSV", ImGuiColorEditFlags_::ImGuiColorEditFlags_DisplayHSV
		, "ImGuiColorEditFlags_DisplayHex", ImGuiColorEditFlags_::ImGuiColorEditFlags_DisplayHex
		, "ImGuiColorEditFlags_Uint8", ImGuiColorEditFlags_::ImGuiColorEditFlags_Uint8
		, "ImGuiColorEditFlags_Float", ImGuiColorEditFlags_::ImGuiColorEditFlags_Float
		, "ImGuiColorEditFlags_PickerHueBar", ImGuiColorEditFlags_::ImGuiColorEditFlags_PickerHueBar
		, "ImGuiColorEditFlags_PickerHueWheel", ImGuiColorEditFlags_::ImGuiColorEditFlags_PickerHueWheel
		, "ImGuiColorEditFlags_InputRGB", ImGuiColorEditFlags_::ImGuiColorEditFlags_InputRGB
		, "ImGuiColorEditFlags_InputHSV", ImGuiColorEditFlags_::ImGuiColorEditFlags_InputHSV
		, "ImGuiColorEditFlags__OptionsDefault", ImGuiColorEditFlags_::ImGuiColorEditFlags__OptionsDefault
		, "ImGuiColorEditFlags__DisplayMask", ImGuiColorEditFlags_::ImGuiColorEditFlags__DisplayMask
		, "ImGuiColorEditFlags__DataTypeMask", ImGuiColorEditFlags_::ImGuiColorEditFlags__DataTypeMask
		, "ImGuiColorEditFlags__PickerMask", ImGuiColorEditFlags_::ImGuiColorEditFlags__PickerMask
		, "ImGuiColorEditFlags__InputMask", ImGuiColorEditFlags_::ImGuiColorEditFlags__InputMask
	);
}

void register_enum_ImGuiMouseCursor_(sol::state& state)
{
	state.new_enum("ImGuiMouseCursor_"
		, "ImGuiMouseCursor_None", ImGuiMouseCursor_::ImGuiMouseCursor_None
		, "ImGuiMouseCursor_Arrow", ImGuiMouseCursor_::ImGuiMouseCursor_Arrow
		, "ImGuiMouseCursor_TextInput", ImGuiMouseCursor_::ImGuiMouseCursor_TextInput
		, "ImGuiMouseCursor_ResizeAll", ImGuiMouseCursor_::ImGuiMouseCursor_ResizeAll
		, "ImGuiMouseCursor_ResizeNS", ImGuiMouseCursor_::ImGuiMouseCursor_ResizeNS
		, "ImGuiMouseCursor_ResizeEW", ImGuiMouseCursor_::ImGuiMouseCursor_ResizeEW
		, "ImGuiMouseCursor_ResizeNESW", ImGuiMouseCursor_::ImGuiMouseCursor_ResizeNESW
		, "ImGuiMouseCursor_ResizeNWSE", ImGuiMouseCursor_::ImGuiMouseCursor_ResizeNWSE
		, "ImGuiMouseCursor_Hand", ImGuiMouseCursor_::ImGuiMouseCursor_Hand
		, "ImGuiMouseCursor_COUNT", ImGuiMouseCursor_::ImGuiMouseCursor_COUNT
	);
}

void register_enum_ImGuiCond_(sol::state& state)
{
	state.new_enum("ImGuiCond_"
		, "ImGuiCond_Always", ImGuiCond_::ImGuiCond_Always
		, "ImGuiCond_Once", ImGuiCond_::ImGuiCond_Once
		, "ImGuiCond_FirstUseEver", ImGuiCond_::ImGuiCond_FirstUseEver
		, "ImGuiCond_Appearing", ImGuiCond_::ImGuiCond_Appearing
	);
}

void register_type_ImNewDummy(sol::state& state)
{
	state.new_usertype<ImNewDummy>("ImNewDummy"
		// fields
		// methods
		// constructors
		);
}
