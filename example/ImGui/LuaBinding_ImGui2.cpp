#include "LuaBinding_ImGui.h"

#include "imgui.h"


void register_type_ImGuiStyle(sol::state& state)
{
	state.new_usertype<ImGuiStyle>("ImGuiStyle"
		// fields
		, "Alpha", &ImGuiStyle::Alpha
		, "WindowPadding", &ImGuiStyle::WindowPadding
		, "WindowRounding", &ImGuiStyle::WindowRounding
		, "WindowBorderSize", &ImGuiStyle::WindowBorderSize
		, "WindowMinSize", &ImGuiStyle::WindowMinSize
		, "WindowTitleAlign", &ImGuiStyle::WindowTitleAlign
		, "WindowMenuButtonPosition", &ImGuiStyle::WindowMenuButtonPosition
		, "ChildRounding", &ImGuiStyle::ChildRounding
		, "ChildBorderSize", &ImGuiStyle::ChildBorderSize
		, "PopupRounding", &ImGuiStyle::PopupRounding
		, "PopupBorderSize", &ImGuiStyle::PopupBorderSize
		, "FramePadding", &ImGuiStyle::FramePadding
		, "FrameRounding", &ImGuiStyle::FrameRounding
		, "FrameBorderSize", &ImGuiStyle::FrameBorderSize
		, "ItemSpacing", &ImGuiStyle::ItemSpacing
		, "ItemInnerSpacing", &ImGuiStyle::ItemInnerSpacing
		, "TouchExtraPadding", &ImGuiStyle::TouchExtraPadding
		, "IndentSpacing", &ImGuiStyle::IndentSpacing
		, "ColumnsMinSpacing", &ImGuiStyle::ColumnsMinSpacing
		, "ScrollbarSize", &ImGuiStyle::ScrollbarSize
		, "ScrollbarRounding", &ImGuiStyle::ScrollbarRounding
		, "GrabMinSize", &ImGuiStyle::GrabMinSize
		, "GrabRounding", &ImGuiStyle::GrabRounding
		, "TabRounding", &ImGuiStyle::TabRounding
		, "TabBorderSize", &ImGuiStyle::TabBorderSize
		, "ColorButtonPosition", &ImGuiStyle::ColorButtonPosition
		, "ButtonTextAlign", &ImGuiStyle::ButtonTextAlign
		, "SelectableTextAlign", &ImGuiStyle::SelectableTextAlign
		, "DisplayWindowPadding", &ImGuiStyle::DisplayWindowPadding
		, "DisplaySafeAreaPadding", &ImGuiStyle::DisplaySafeAreaPadding
		, "MouseCursorScale", &ImGuiStyle::MouseCursorScale
		, "AntiAliasedLines", &ImGuiStyle::AntiAliasedLines
		, "AntiAliasedFill", &ImGuiStyle::AntiAliasedFill
		, "CurveTessellationTol", &ImGuiStyle::CurveTessellationTol
		// methods
		, "ScaleAllSizes"
		, &ImGuiStyle::ScaleAllSizes
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImGuiStyle()
		>()
		);
}

void register_type_ImGuiIO(sol::state& state)
{
	state.new_usertype<ImGuiIO>("ImGuiIO"
		// fields
		, "ConfigFlags", &ImGuiIO::ConfigFlags
		, "BackendFlags", &ImGuiIO::BackendFlags
		, "DisplaySize", &ImGuiIO::DisplaySize
		, "DeltaTime", &ImGuiIO::DeltaTime
		, "IniSavingRate", &ImGuiIO::IniSavingRate
		, "IniFilename", &ImGuiIO::IniFilename
		, "LogFilename", &ImGuiIO::LogFilename
		, "MouseDoubleClickTime", &ImGuiIO::MouseDoubleClickTime
		, "MouseDoubleClickMaxDist", &ImGuiIO::MouseDoubleClickMaxDist
		, "MouseDragThreshold", &ImGuiIO::MouseDragThreshold
		, "KeyRepeatDelay", &ImGuiIO::KeyRepeatDelay
		, "KeyRepeatRate", &ImGuiIO::KeyRepeatRate
		, "UserData", &ImGuiIO::UserData
		, "Fonts", &ImGuiIO::Fonts
		, "FontGlobalScale", &ImGuiIO::FontGlobalScale
		, "FontAllowUserScaling", &ImGuiIO::FontAllowUserScaling
		, "FontDefault", &ImGuiIO::FontDefault
		, "DisplayFramebufferScale", &ImGuiIO::DisplayFramebufferScale
		, "MouseDrawCursor", &ImGuiIO::MouseDrawCursor
		, "ConfigMacOSXBehaviors", &ImGuiIO::ConfigMacOSXBehaviors
		, "ConfigInputTextCursorBlink", &ImGuiIO::ConfigInputTextCursorBlink
		, "ConfigWindowsResizeFromEdges", &ImGuiIO::ConfigWindowsResizeFromEdges
		, "ConfigWindowsMoveFromTitleBarOnly", &ImGuiIO::ConfigWindowsMoveFromTitleBarOnly
		, "BackendPlatformName", &ImGuiIO::BackendPlatformName
		, "BackendRendererName", &ImGuiIO::BackendRendererName
		, "BackendPlatformUserData", &ImGuiIO::BackendPlatformUserData
		, "BackendRendererUserData", &ImGuiIO::BackendRendererUserData
		, "BackendLanguageUserData", &ImGuiIO::BackendLanguageUserData
		, "GetClipboardTextFn", &ImGuiIO::GetClipboardTextFn
		, "SetClipboardTextFn", &ImGuiIO::SetClipboardTextFn
		, "ClipboardUserData", &ImGuiIO::ClipboardUserData
		, "ImeSetInputScreenPosFn", &ImGuiIO::ImeSetInputScreenPosFn
		, "ImeWindowHandle", &ImGuiIO::ImeWindowHandle
		, "RenderDrawListsFnUnused", &ImGuiIO::RenderDrawListsFnUnused
		, "MousePos", &ImGuiIO::MousePos
		, "MouseWheel", &ImGuiIO::MouseWheel
		, "MouseWheelH", &ImGuiIO::MouseWheelH
		, "KeyCtrl", &ImGuiIO::KeyCtrl
		, "KeyShift", &ImGuiIO::KeyShift
		, "KeyAlt", &ImGuiIO::KeyAlt
		, "KeySuper", &ImGuiIO::KeySuper
		, "WantCaptureMouse", &ImGuiIO::WantCaptureMouse
		, "WantCaptureKeyboard", &ImGuiIO::WantCaptureKeyboard
		, "WantTextInput", &ImGuiIO::WantTextInput
		, "WantSetMousePos", &ImGuiIO::WantSetMousePos
		, "WantSaveIniSettings", &ImGuiIO::WantSaveIniSettings
		, "NavActive", &ImGuiIO::NavActive
		, "NavVisible", &ImGuiIO::NavVisible
		, "Framerate", &ImGuiIO::Framerate
		, "MetricsRenderVertices", &ImGuiIO::MetricsRenderVertices
		, "MetricsRenderIndices", &ImGuiIO::MetricsRenderIndices
		, "MetricsRenderWindows", &ImGuiIO::MetricsRenderWindows
		, "MetricsActiveWindows", &ImGuiIO::MetricsActiveWindows
		, "MetricsActiveAllocations", &ImGuiIO::MetricsActiveAllocations
		, "MouseDelta", &ImGuiIO::MouseDelta
		, "MousePosPrev", &ImGuiIO::MousePosPrev
		, "InputQueueCharacters", &ImGuiIO::InputQueueCharacters
		// methods
		, "AddInputCharacter"
		, &ImGuiIO::AddInputCharacter
		, "AddInputCharactersUTF8"
		, &ImGuiIO::AddInputCharactersUTF8
		, "ClearInputCharacters"
		, &ImGuiIO::ClearInputCharacters
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImGuiIO()
		>()
		);
}

void register_type_ImGuiInputTextCallbackData(sol::state& state)
{
	state.new_usertype<ImGuiInputTextCallbackData>("ImGuiInputTextCallbackData"
		// fields
		, "EventFlag", &ImGuiInputTextCallbackData::EventFlag
		, "Flags", &ImGuiInputTextCallbackData::Flags
		, "UserData", &ImGuiInputTextCallbackData::UserData
		, "EventChar", &ImGuiInputTextCallbackData::EventChar
		, "EventKey", &ImGuiInputTextCallbackData::EventKey
		, "Buf", &ImGuiInputTextCallbackData::Buf
		, "BufTextLen", &ImGuiInputTextCallbackData::BufTextLen
		, "BufSize", &ImGuiInputTextCallbackData::BufSize
		, "BufDirty", &ImGuiInputTextCallbackData::BufDirty
		, "CursorPos", &ImGuiInputTextCallbackData::CursorPos
		, "SelectionStart", &ImGuiInputTextCallbackData::SelectionStart
		, "SelectionEnd", &ImGuiInputTextCallbackData::SelectionEnd
		// methods
		, "DeleteChars"
		, &ImGuiInputTextCallbackData::DeleteChars
		, "InsertChars"
		, &ImGuiInputTextCallbackData::InsertChars
		, "HasSelection"
		, &ImGuiInputTextCallbackData::HasSelection
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImGuiInputTextCallbackData()
		>()
		);
}

void register_type_ImGuiSizeCallbackData(sol::state& state)
{
	state.new_usertype<ImGuiSizeCallbackData>("ImGuiSizeCallbackData"
		// fields
		, "UserData", &ImGuiSizeCallbackData::UserData
		, "Pos", &ImGuiSizeCallbackData::Pos
		, "CurrentSize", &ImGuiSizeCallbackData::CurrentSize
		, "DesiredSize", &ImGuiSizeCallbackData::DesiredSize
		// methods
		// constructors
		);
}

void register_type_ImGuiPayload(sol::state& state)
{
	state.new_usertype<ImGuiPayload>("ImGuiPayload"
		// fields
		, "Data", &ImGuiPayload::Data
		, "DataSize", &ImGuiPayload::DataSize
		, "SourceId", &ImGuiPayload::SourceId
		, "SourceParentId", &ImGuiPayload::SourceParentId
		, "DataFrameCount", &ImGuiPayload::DataFrameCount
		, "Preview", &ImGuiPayload::Preview
		, "Delivery", &ImGuiPayload::Delivery
		// methods
		, "Clear"
		, &ImGuiPayload::Clear
		, "IsDataType"
		, &ImGuiPayload::IsDataType
		, "IsPreview"
		, &ImGuiPayload::IsPreview
		, "IsDelivery"
		, &ImGuiPayload::IsDelivery
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImGuiPayload()
		>()
		);
}

void register_type_ImGuiOnceUponAFrame(sol::state& state)
{
	state.new_usertype<ImGuiOnceUponAFrame>("ImGuiOnceUponAFrame"
		// fields
		, "RefFrame", &ImGuiOnceUponAFrame::RefFrame
		// methods
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImGuiOnceUponAFrame()
		>()
		);
}

void register_type_ImGuiTextFilter(sol::state& state)
{
	state.new_usertype<ImGuiTextFilter>("ImGuiTextFilter"
		// fields
		, "Filters", &ImGuiTextFilter::Filters
		, "CountGrep", &ImGuiTextFilter::CountGrep
		// methods
		, "Draw"
		, &ImGuiTextFilter::Draw
		, "PassFilter"
		, &ImGuiTextFilter::PassFilter
		, "Build"
		, &ImGuiTextFilter::Build
		, "Clear"
		, &ImGuiTextFilter::Clear
		, "IsActive"
		, &ImGuiTextFilter::IsActive
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImGuiTextFilter(const char *)
		>()
		);
}

void register_type_ImGuiTextBuffer(sol::state& state)
{
	state.new_usertype<ImGuiTextBuffer>("ImGuiTextBuffer"
		// fields
		, "Buf", &ImGuiTextBuffer::Buf
		// methods
		, "begin"
		, &ImGuiTextBuffer::begin
		, "end"
		, &ImGuiTextBuffer::end
		, "size"
		, &ImGuiTextBuffer::size
		, "empty"
		, &ImGuiTextBuffer::empty
		, "clear"
		, &ImGuiTextBuffer::clear
		, "reserve"
		, &ImGuiTextBuffer::reserve
		, "c_str"
		, &ImGuiTextBuffer::c_str
		, "append"
		, &ImGuiTextBuffer::append
		, "appendfv"
		, &ImGuiTextBuffer::appendfv
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImGuiTextBuffer()
		>()
		);
}

void register_type_ImGuiStorage(sol::state& state)
{
	state.new_usertype<ImGuiStorage>("ImGuiStorage"
		// fields
		, "Data", &ImGuiStorage::Data
		// methods
		, "Clear"
		, &ImGuiStorage::Clear
		, "GetInt"
		, &ImGuiStorage::GetInt
		, "SetInt"
		, &ImGuiStorage::SetInt
		, "GetBool"
		, &ImGuiStorage::GetBool
		, "SetBool"
		, &ImGuiStorage::SetBool
		, "GetFloat"
		, &ImGuiStorage::GetFloat
		, "SetFloat"
		, &ImGuiStorage::SetFloat
		, "GetVoidPtr"
		, &ImGuiStorage::GetVoidPtr
		, "SetVoidPtr"
		, &ImGuiStorage::SetVoidPtr
		, "GetIntRef"
		, &ImGuiStorage::GetIntRef
		, "GetBoolRef"
		, &ImGuiStorage::GetBoolRef
		, "GetFloatRef"
		, &ImGuiStorage::GetFloatRef
		, "SetAllInt"
		, &ImGuiStorage::SetAllInt
		, "BuildSortByKey"
		, &ImGuiStorage::BuildSortByKey
		// constructors
		);
}

void register_type_ImGuiListClipper(sol::state& state)
{
	state.new_usertype<ImGuiListClipper>("ImGuiListClipper"
		// fields
		, "StartPosY", &ImGuiListClipper::StartPosY
		, "ItemsHeight", &ImGuiListClipper::ItemsHeight
		, "ItemsCount", &ImGuiListClipper::ItemsCount
		, "StepNo", &ImGuiListClipper::StepNo
		, "DisplayStart", &ImGuiListClipper::DisplayStart
		, "DisplayEnd", &ImGuiListClipper::DisplayEnd
		// methods
		, "Step"
		, &ImGuiListClipper::Step
		, "Begin"
		, &ImGuiListClipper::Begin
		, "End"
		, &ImGuiListClipper::End
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImGuiListClipper(int, float)
		>()
		);
}
