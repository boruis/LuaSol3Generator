#include "LuaBinding_ImGui.h"

#include "imgui.h"


void register_type_ImFontConfig(sol::state& state)
{
	state.new_usertype<ImFontConfig>("ImFontConfig"
		// fields
		, "FontData", &ImFontConfig::FontData
		, "FontDataSize", &ImFontConfig::FontDataSize
		, "FontDataOwnedByAtlas", &ImFontConfig::FontDataOwnedByAtlas
		, "FontNo", &ImFontConfig::FontNo
		, "SizePixels", &ImFontConfig::SizePixels
		, "OversampleH", &ImFontConfig::OversampleH
		, "OversampleV", &ImFontConfig::OversampleV
		, "PixelSnapH", &ImFontConfig::PixelSnapH
		, "GlyphExtraSpacing", &ImFontConfig::GlyphExtraSpacing
		, "GlyphOffset", &ImFontConfig::GlyphOffset
		, "GlyphMinAdvanceX", &ImFontConfig::GlyphMinAdvanceX
		, "GlyphMaxAdvanceX", &ImFontConfig::GlyphMaxAdvanceX
		, "MergeMode", &ImFontConfig::MergeMode
		, "RasterizerFlags", &ImFontConfig::RasterizerFlags
		, "RasterizerMultiply", &ImFontConfig::RasterizerMultiply
		, "DstFont", &ImFontConfig::DstFont
		// methods
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImFontConfig()
		>()
		);
}

void register_type_ImFontGlyph(sol::state& state)
{
	state.new_usertype<ImFontGlyph>("ImFontGlyph"
		// fields
		, "Codepoint", &ImFontGlyph::Codepoint
		, "AdvanceX", &ImFontGlyph::AdvanceX
		, "X0", &ImFontGlyph::X0
		, "Y0", &ImFontGlyph::Y0
		, "X1", &ImFontGlyph::X1
		, "Y1", &ImFontGlyph::Y1
		, "U0", &ImFontGlyph::U0
		, "V0", &ImFontGlyph::V0
		, "U1", &ImFontGlyph::U1
		, "V1", &ImFontGlyph::V1
		// methods
		// constructors
		);
}

void register_type_ImFontGlyphRangesBuilder(sol::state& state)
{
	state.new_usertype<ImFontGlyphRangesBuilder>("ImFontGlyphRangesBuilder"
		// fields
		, "UsedChars", &ImFontGlyphRangesBuilder::UsedChars
		// methods
		, "Clear"
		, &ImFontGlyphRangesBuilder::Clear
		, "GetBit"
		, &ImFontGlyphRangesBuilder::GetBit
		, "SetBit"
		, &ImFontGlyphRangesBuilder::SetBit
		, "AddChar"
		, &ImFontGlyphRangesBuilder::AddChar
		, "AddText"
		, &ImFontGlyphRangesBuilder::AddText
		, "AddRanges"
		, &ImFontGlyphRangesBuilder::AddRanges
		, "BuildRanges"
		, &ImFontGlyphRangesBuilder::BuildRanges
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImFontGlyphRangesBuilder()
		>()
		);
}

void register_type_ImFontAtlasCustomRect(sol::state& state)
{
	state.new_usertype<ImFontAtlasCustomRect>("ImFontAtlasCustomRect"
		// fields
		, "ID", &ImFontAtlasCustomRect::ID
		, "Width", &ImFontAtlasCustomRect::Width
		, "Height", &ImFontAtlasCustomRect::Height
		, "X", &ImFontAtlasCustomRect::X
		, "Y", &ImFontAtlasCustomRect::Y
		, "GlyphAdvanceX", &ImFontAtlasCustomRect::GlyphAdvanceX
		, "GlyphOffset", &ImFontAtlasCustomRect::GlyphOffset
		, "Font", &ImFontAtlasCustomRect::Font
		// methods
		, "IsPacked"
		, &ImFontAtlasCustomRect::IsPacked
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImFontAtlasCustomRect()
		>()
		);
}

void register_enum_ImFontAtlasFlags_(sol::state& state)
{
	state.new_enum("ImFontAtlasFlags_"
		, "ImFontAtlasFlags_None", ImFontAtlasFlags_::ImFontAtlasFlags_None
		, "ImFontAtlasFlags_NoPowerOfTwoHeight", ImFontAtlasFlags_::ImFontAtlasFlags_NoPowerOfTwoHeight
		, "ImFontAtlasFlags_NoMouseCursors", ImFontAtlasFlags_::ImFontAtlasFlags_NoMouseCursors
	);
}

void register_type_ImFontAtlas(sol::state& state)
{
	state.new_usertype<ImFontAtlas>("ImFontAtlas"
		// fields
		, "Locked", &ImFontAtlas::Locked
		, "Flags", &ImFontAtlas::Flags
		, "TexID", &ImFontAtlas::TexID
		, "TexDesiredWidth", &ImFontAtlas::TexDesiredWidth
		, "TexGlyphPadding", &ImFontAtlas::TexGlyphPadding
		, "TexPixelsAlpha8", &ImFontAtlas::TexPixelsAlpha8
		, "TexPixelsRGBA32", &ImFontAtlas::TexPixelsRGBA32
		, "TexWidth", &ImFontAtlas::TexWidth
		, "TexHeight", &ImFontAtlas::TexHeight
		, "TexUvScale", &ImFontAtlas::TexUvScale
		, "TexUvWhitePixel", &ImFontAtlas::TexUvWhitePixel
		, "Fonts", &ImFontAtlas::Fonts
		, "CustomRects", &ImFontAtlas::CustomRects
		, "ConfigData", &ImFontAtlas::ConfigData
		// methods
		, "AddFont"
		, &ImFontAtlas::AddFont
		, "AddFontDefault"
		, &ImFontAtlas::AddFontDefault
		, "AddFontFromFileTTF"
		, &ImFontAtlas::AddFontFromFileTTF
		, "AddFontFromMemoryTTF"
		, &ImFontAtlas::AddFontFromMemoryTTF
		, "AddFontFromMemoryCompressedTTF"
		, &ImFontAtlas::AddFontFromMemoryCompressedTTF
		, "AddFontFromMemoryCompressedBase85TTF"
		, &ImFontAtlas::AddFontFromMemoryCompressedBase85TTF
		, "ClearInputData"
		, &ImFontAtlas::ClearInputData
		, "ClearTexData"
		, &ImFontAtlas::ClearTexData
		, "ClearFonts"
		, &ImFontAtlas::ClearFonts
		, "Clear"
		, &ImFontAtlas::Clear
		, "Build"
		, &ImFontAtlas::Build
		, "GetTexDataAsAlpha8"
		, &ImFontAtlas::GetTexDataAsAlpha8
		, "GetTexDataAsRGBA32"
		, &ImFontAtlas::GetTexDataAsRGBA32
		, "IsBuilt"
		, &ImFontAtlas::IsBuilt
		, "SetTexID"
		, &ImFontAtlas::SetTexID
		, "GetGlyphRangesDefault"
		, &ImFontAtlas::GetGlyphRangesDefault
		, "GetGlyphRangesKorean"
		, &ImFontAtlas::GetGlyphRangesKorean
		, "GetGlyphRangesJapanese"
		, &ImFontAtlas::GetGlyphRangesJapanese
		, "GetGlyphRangesChineseFull"
		, &ImFontAtlas::GetGlyphRangesChineseFull
		, "GetGlyphRangesChineseSimplifiedCommon"
		, &ImFontAtlas::GetGlyphRangesChineseSimplifiedCommon
		, "GetGlyphRangesCyrillic"
		, &ImFontAtlas::GetGlyphRangesCyrillic
		, "GetGlyphRangesThai"
		, &ImFontAtlas::GetGlyphRangesThai
		, "GetGlyphRangesVietnamese"
		, &ImFontAtlas::GetGlyphRangesVietnamese
		, "AddCustomRectRegular"
		, &ImFontAtlas::AddCustomRectRegular
		, "AddCustomRectFontGlyph"
		, &ImFontAtlas::AddCustomRectFontGlyph
		, "GetCustomRectByIndex"
		, &ImFontAtlas::GetCustomRectByIndex
		, "CalcCustomRectUV"
		, &ImFontAtlas::CalcCustomRectUV
		, "GetMouseCursorTexData"
		, &ImFontAtlas::GetMouseCursorTexData
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImFontAtlas()
		>()
		);
}

void register_type_ImFont(sol::state& state)
{
	state.new_usertype<ImFont>("ImFont"
		// fields
		, "IndexAdvanceX", &ImFont::IndexAdvanceX
		, "FallbackAdvanceX", &ImFont::FallbackAdvanceX
		, "FontSize", &ImFont::FontSize
		, "IndexLookup", &ImFont::IndexLookup
		, "Glyphs", &ImFont::Glyphs
		, "FallbackGlyph", &ImFont::FallbackGlyph
		, "DisplayOffset", &ImFont::DisplayOffset
		, "ContainerAtlas", &ImFont::ContainerAtlas
		, "ConfigData", &ImFont::ConfigData
		, "ConfigDataCount", &ImFont::ConfigDataCount
		, "FallbackChar", &ImFont::FallbackChar
		, "Scale", &ImFont::Scale
		, "Ascent", &ImFont::Ascent
		, "Descent", &ImFont::Descent
		, "MetricsTotalSurface", &ImFont::MetricsTotalSurface
		, "DirtyLookupTables", &ImFont::DirtyLookupTables
		// methods
		, "FindGlyph"
		, &ImFont::FindGlyph
		, "FindGlyphNoFallback"
		, &ImFont::FindGlyphNoFallback
		, "GetCharAdvance"
		, &ImFont::GetCharAdvance
		, "IsLoaded"
		, &ImFont::IsLoaded
		, "GetDebugName"
		, &ImFont::GetDebugName
		, "CalcTextSizeA"
		, &ImFont::CalcTextSizeA
		, "CalcWordWrapPositionA"
		, &ImFont::CalcWordWrapPositionA
		, "RenderChar"
		, &ImFont::RenderChar
		, "RenderText"
		, &ImFont::RenderText
		, "BuildLookupTable"
		, &ImFont::BuildLookupTable
		, "ClearOutputData"
		, &ImFont::ClearOutputData
		, "GrowIndex"
		, &ImFont::GrowIndex
		, "AddGlyph"
		, &ImFont::AddGlyph
		, "AddRemapChar"
		, &ImFont::AddRemapChar
		, "SetFallbackChar"
		, &ImFont::SetFallbackChar
		// constructors
		, sol::call_constructor
		, sol::constructors<
		ImFont()
		>()
		);
}