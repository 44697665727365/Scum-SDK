#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct Slate.CustomizedToolMenu
// Size: 0x1E8(Inherited: 0x0) 
struct FCustomizedToolMenu
{
	struct FName Name;  // 0x0(0x8)
	struct TMap<struct FName, struct FCustomizedToolMenuEntry> Entries;  // 0x8(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuSection> Sections;  // 0x58(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder;  // 0xA8(0x50)
	struct TArray<struct FName> SectionOrder;  // 0xF8(0x10)
	char pad_264[224];  // 0x108(0xE0)

}; 
// ScriptStruct Slate.VirtualKeyboardOptions
// Size: 0x1(Inherited: 0x0) 
struct FVirtualKeyboardOptions
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnableAutocorrect : 1;  // 0x0(0x1)

}; 
// ScriptStruct Slate.CustomizedToolMenuNameArray
// Size: 0x10(Inherited: 0x0) 
struct FCustomizedToolMenuNameArray
{
	struct TArray<struct FName> names;  // 0x0(0x10)

}; 
// ScriptStruct Slate.InputChord
// Size: 0x20(Inherited: 0x0) 
struct FInputChord
{
	struct FKey Key;  // 0x0(0x18)
	char bShift : 1;  // 0x18(0x1)
	char bCtrl : 1;  // 0x18(0x1)
	char bAlt : 1;  // 0x18(0x1)
	char bCmd : 1;  // 0x18(0x1)
	char pad_24_1 : 4;  // 0x18(0x1)
	char pad_25[8];  // 0x19(0x8)

}; 
// ScriptStruct Slate.Anchors
// Size: 0x10(Inherited: 0x0) 
struct FAnchors
{
	struct FVector2D Minimum;  // 0x0(0x8)
	struct FVector2D Maximum;  // 0x8(0x8)

}; 
// ScriptStruct Slate.CustomizedToolMenuSection
// Size: 0x4(Inherited: 0x0) 
struct FCustomizedToolMenuSection
{
	uint8_t  Visibility;  // 0x0(0x4)

}; 
// ScriptStruct Slate.CustomizedToolMenuEntry
// Size: 0x4(Inherited: 0x0) 
struct FCustomizedToolMenuEntry
{
	uint8_t  Visibility;  // 0x0(0x4)

}; 
