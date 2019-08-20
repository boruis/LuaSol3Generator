#include "LuaBinding_ImGui.h"

#include "imgui.h"


void register_type_ImColor(sol::state& state)
{
	state.new_usertype<ImColor>("ImColor"
		// fields
		, "Value", &ImColor::Value
		// methods
		, "SetHSV"
		, &ImColor::SetHSV
		, "HSV"
		, &ImColor::HSV
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImColor()
		,
		ImColor(int, int, int, int)
		,
		ImColor(ImU32)
		,
		ImColor(float, float, float, float)
		,
		ImColor(const ImVec4 &)
		>()
		);
}

void register_type_ImDrawCmd(sol::state& state)
{
	state.new_usertype<ImDrawCmd>("ImDrawCmd"
		// fields
		, "ElemCount", &ImDrawCmd::ElemCount
		, "ClipRect", &ImDrawCmd::ClipRect
		, "TextureId", &ImDrawCmd::TextureId
		, "VtxOffset", &ImDrawCmd::VtxOffset
		, "IdxOffset", &ImDrawCmd::IdxOffset
		, "UserCallback", &ImDrawCmd::UserCallback
		, "UserCallbackData", &ImDrawCmd::UserCallbackData
		// methods
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImDrawCmd()
		>()
		);
}

void register_type_ImDrawVert(sol::state& state)
{
	state.new_usertype<ImDrawVert>("ImDrawVert"
		// fields
		, "pos", &ImDrawVert::pos
		, "uv", &ImDrawVert::uv
		, "col", &ImDrawVert::col
		// methods
		// constructors
		);
}

void register_type_ImDrawChannel(sol::state& state)
{
	state.new_usertype<ImDrawChannel>("ImDrawChannel"
		// fields
		// methods
		// constructors
		);
}

void register_type_ImDrawListSplitter(sol::state& state)
{
	state.new_usertype<ImDrawListSplitter>("ImDrawListSplitter"
		// fields
		// methods
		, "Clear"
		, &ImDrawListSplitter::Clear
		, "ClearFreeMemory"
		, &ImDrawListSplitter::ClearFreeMemory
		, "Split"
		, &ImDrawListSplitter::Split
		, "Merge"
		, &ImDrawListSplitter::Merge
		, "SetCurrentChannel"
		, &ImDrawListSplitter::SetCurrentChannel
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImDrawListSplitter()
		>()
		);
}

void register_enum_ImDrawCornerFlags_(sol::state& state)
{
	state.new_enum("ImDrawCornerFlags_"
		, "ImDrawCornerFlags_None", ImDrawCornerFlags_::ImDrawCornerFlags_None
		, "ImDrawCornerFlags_TopLeft", ImDrawCornerFlags_::ImDrawCornerFlags_TopLeft
		, "ImDrawCornerFlags_TopRight", ImDrawCornerFlags_::ImDrawCornerFlags_TopRight
		, "ImDrawCornerFlags_BotLeft", ImDrawCornerFlags_::ImDrawCornerFlags_BotLeft
		, "ImDrawCornerFlags_BotRight", ImDrawCornerFlags_::ImDrawCornerFlags_BotRight
		, "ImDrawCornerFlags_Top", ImDrawCornerFlags_::ImDrawCornerFlags_Top
		, "ImDrawCornerFlags_Bot", ImDrawCornerFlags_::ImDrawCornerFlags_Bot
		, "ImDrawCornerFlags_Left", ImDrawCornerFlags_::ImDrawCornerFlags_Left
		, "ImDrawCornerFlags_Right", ImDrawCornerFlags_::ImDrawCornerFlags_Right
		, "ImDrawCornerFlags_All", ImDrawCornerFlags_::ImDrawCornerFlags_All
	);
}

void register_enum_ImDrawListFlags_(sol::state& state)
{
	state.new_enum("ImDrawListFlags_"
		, "ImDrawListFlags_None", ImDrawListFlags_::ImDrawListFlags_None
		, "ImDrawListFlags_AntiAliasedLines", ImDrawListFlags_::ImDrawListFlags_AntiAliasedLines
		, "ImDrawListFlags_AntiAliasedFill", ImDrawListFlags_::ImDrawListFlags_AntiAliasedFill
		, "ImDrawListFlags_AllowVtxOffset", ImDrawListFlags_::ImDrawListFlags_AllowVtxOffset
	);
}

void register_type_ImDrawList(sol::state& state)
{
	state.new_usertype<ImDrawList>("ImDrawList"
		// fields
		, "CmdBuffer", &ImDrawList::CmdBuffer
		, "IdxBuffer", &ImDrawList::IdxBuffer
		, "VtxBuffer", &ImDrawList::VtxBuffer
		, "Flags", &ImDrawList::Flags
		// methods
		, "PushClipRect"
		, &ImDrawList::PushClipRect
		, "PushClipRectFullScreen"
		, &ImDrawList::PushClipRectFullScreen
		, "PopClipRect"
		, &ImDrawList::PopClipRect
		, "PushTextureID"
		, &ImDrawList::PushTextureID
		, "PopTextureID"
		, &ImDrawList::PopTextureID
		, "GetClipRectMin"
		, &ImDrawList::GetClipRectMin
		, "GetClipRectMax"
		, &ImDrawList::GetClipRectMax
		, "AddLine"
		, &ImDrawList::AddLine
		, "AddRect"
		, &ImDrawList::AddRect
		, "AddRectFilled"
		, &ImDrawList::AddRectFilled
		, "AddRectFilledMultiColor"
		, &ImDrawList::AddRectFilledMultiColor
		, "AddQuad"
		, &ImDrawList::AddQuad
		, "AddQuadFilled"
		, &ImDrawList::AddQuadFilled
		, "AddTriangle"
		, &ImDrawList::AddTriangle
		, "AddTriangleFilled"
		, &ImDrawList::AddTriangleFilled
		, "AddCircle"
		, &ImDrawList::AddCircle
		, "AddCircleFilled"
		, &ImDrawList::AddCircleFilled
		, "AddText"
		, sol::overload(
			sol::resolve<void(const ImVec2 &, ImU32, const char *, const char *)>(&ImDrawList::AddText)
			,
			sol::resolve<void(const ImFont *, float, const ImVec2 &, ImU32, const char *, const char *, float, const ImVec4 *)>(&ImDrawList::AddText)
		)
		, "AddImage"
		, &ImDrawList::AddImage
		, "AddImageQuad"
		, &ImDrawList::AddImageQuad
		, "AddImageRounded"
		, &ImDrawList::AddImageRounded
		, "AddPolyline"
		, &ImDrawList::AddPolyline
		, "AddConvexPolyFilled"
		, &ImDrawList::AddConvexPolyFilled
		, "AddBezierCurve"
		, &ImDrawList::AddBezierCurve
		, "PathClear"
		, &ImDrawList::PathClear
		, "PathLineTo"
		, &ImDrawList::PathLineTo
		, "PathLineToMergeDuplicate"
		, &ImDrawList::PathLineToMergeDuplicate
		, "PathFillConvex"
		, &ImDrawList::PathFillConvex
		, "PathStroke"
		, &ImDrawList::PathStroke
		, "PathArcTo"
		, &ImDrawList::PathArcTo
		, "PathArcToFast"
		, &ImDrawList::PathArcToFast
		, "PathBezierCurveTo"
		, &ImDrawList::PathBezierCurveTo
		, "PathRect"
		, &ImDrawList::PathRect
		, "AddCallback"
		, &ImDrawList::AddCallback
		, "AddDrawCmd"
		, &ImDrawList::AddDrawCmd
		, "CloneOutput"
		, &ImDrawList::CloneOutput
		, "ChannelsSplit"
		, &ImDrawList::ChannelsSplit
		, "ChannelsMerge"
		, &ImDrawList::ChannelsMerge
		, "ChannelsSetCurrent"
		, &ImDrawList::ChannelsSetCurrent
		, "Clear"
		, &ImDrawList::Clear
		, "ClearFreeMemory"
		, &ImDrawList::ClearFreeMemory
		, "PrimReserve"
		, &ImDrawList::PrimReserve
		, "PrimRect"
		, &ImDrawList::PrimRect
		, "PrimRectUV"
		, &ImDrawList::PrimRectUV
		, "PrimQuadUV"
		, &ImDrawList::PrimQuadUV
		, "PrimWriteVtx"
		, &ImDrawList::PrimWriteVtx
		, "PrimWriteIdx"
		, &ImDrawList::PrimWriteIdx
		, "PrimVtx"
		, &ImDrawList::PrimVtx
		, "UpdateClipRect"
		, &ImDrawList::UpdateClipRect
		, "UpdateTextureID"
		, &ImDrawList::UpdateTextureID
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImDrawList(const ImDrawListSharedData *)
		>()
		);
}

void register_type_ImDrawData(sol::state& state)
{
	state.new_usertype<ImDrawData>("ImDrawData"
		// fields
		, "Valid", &ImDrawData::Valid
		, "CmdListsCount", &ImDrawData::CmdListsCount
		, "TotalIdxCount", &ImDrawData::TotalIdxCount
		, "TotalVtxCount", &ImDrawData::TotalVtxCount
		, "DisplayPos", &ImDrawData::DisplayPos
		, "DisplaySize", &ImDrawData::DisplaySize
		, "FramebufferScale", &ImDrawData::FramebufferScale
		// methods
		, "Clear"
		, &ImDrawData::Clear
		, "DeIndexAllBuffers"
		, &ImDrawData::DeIndexAllBuffers
		, "ScaleClipRects"
		, &ImDrawData::ScaleClipRects
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImDrawData()
		>()
		);
}
