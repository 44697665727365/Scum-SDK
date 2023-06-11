#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct PropertyPath.CachedPropertyPath
// Size: 0x28(Inherited: 0x0) 
struct FCachedPropertyPath
{
	struct TArray<struct FPropertyPathSegment> Segments;  // 0x0(0x10)
	char pad_16[8];  // 0x10(0x8)
	struct UFunction* CachedFunction;  // 0x18(0x8)
	char pad_32[8];  // 0x20(0x8)

}; 
// ScriptStruct PropertyPath.PropertyPathSegment
// Size: 0x28(Inherited: 0x0) 
struct FPropertyPathSegment
{
	struct FName Name;  // 0x0(0x8)
	int32_t ArrayIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct UStruct* Struct;  // 0x10(0x8)
	char pad_24[16];  // 0x18(0x10)

}; 
