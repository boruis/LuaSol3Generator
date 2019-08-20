#ifndef BINDER_ImGui_H
#define BINDER_ImGui_H

#include <sol/sol.hpp>

void register_type_ImVec2(sol::state& state);
void register_type_ImVec4(sol::state& state);
void register_enum_ImGuiWindowFlags_(sol::state& state);
void register_enum_ImGuiInputTextFlags_(sol::state& state);
void register_enum_ImGuiTreeNodeFlags_(sol::state& state);
void register_enum_ImGuiSelectableFlags_(sol::state& state);
void register_enum_ImGuiComboFlags_(sol::state& state);
void register_enum_ImGuiTabBarFlags_(sol::state& state);
void register_enum_ImGuiTabItemFlags_(sol::state& state);
void register_enum_ImGuiFocusedFlags_(sol::state& state);
void register_enum_ImGuiHoveredFlags_(sol::state& state);
void register_enum_ImGuiDragDropFlags_(sol::state& state);
void register_enum_ImGuiDataType_(sol::state& state);
void register_enum_ImGuiDir_(sol::state& state);
void register_enum_ImGuiKey_(sol::state& state);
void register_enum_ImGuiNavInput_(sol::state& state);
void register_enum_ImGuiConfigFlags_(sol::state& state);
void register_enum_ImGuiBackendFlags_(sol::state& state);
void register_enum_ImGuiCol_(sol::state& state);
void register_enum_ImGuiStyleVar_(sol::state& state);
void register_enum_ImGuiColorEditFlags_(sol::state& state);
void register_enum_ImGuiMouseCursor_(sol::state& state);
void register_enum_ImGuiCond_(sol::state& state);
void register_type_ImNewDummy(sol::state& state);

void register_type_ImGuiStyle(sol::state& state);
void register_type_ImGuiIO(sol::state& state);
void register_type_ImGuiInputTextCallbackData(sol::state& state);
void register_type_ImGuiSizeCallbackData(sol::state& state);
void register_type_ImGuiPayload(sol::state& state);
void register_type_ImGuiOnceUponAFrame(sol::state& state);
void register_type_ImGuiTextFilter(sol::state& state);
void register_type_ImGuiTextBuffer(sol::state& state);
void register_type_ImGuiStorage(sol::state& state);
void register_type_ImGuiListClipper(sol::state& state);

void register_type_ImColor(sol::state& state);
void register_type_ImDrawCmd(sol::state& state);
void register_type_ImDrawVert(sol::state& state);
void register_type_ImDrawChannel(sol::state& state);
void register_type_ImDrawListSplitter(sol::state& state);
void register_enum_ImDrawCornerFlags_(sol::state& state);
void register_enum_ImDrawListFlags_(sol::state& state);
void register_type_ImDrawList(sol::state& state);
void register_type_ImDrawData(sol::state& state);

void register_type_ImFontConfig(sol::state& state);
void register_type_ImFontGlyph(sol::state& state);
void register_type_ImFontGlyphRangesBuilder(sol::state& state);
void register_type_ImFontAtlasCustomRect(sol::state& state);
void register_enum_ImFontAtlasFlags_(sol::state& state);
void register_type_ImFontAtlas(sol::state& state);
void register_type_ImFont(sol::state& state);
void register_library_ImGui(sol::state& state);
void register_ImGui_free_functions(sol::state& state);

#endif // BINDER_ImGui_H
