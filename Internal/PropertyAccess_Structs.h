#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct PropertyAccess.PropertyAccessLibrary
// Size: 0xC8(Inherited: 0x0) 
struct FPropertyAccessLibrary
{
	struct TArray<struct FPropertyAccessSegment> PathSegments;  // 0x0(0x10)
	struct TArray<struct FPropertyAccessPath> SrcPaths;  // 0x10(0x10)
	struct TArray<struct FPropertyAccessPath> DestPaths;  // 0x20(0x10)
	struct FPropertyAccessCopyBatch CopyBatches[4];  // 0x30(0x40)
	struct TArray<struct FPropertyAccessIndirectionChain> SrcAccesses;  // 0x70(0x10)
	struct TArray<struct FPropertyAccessIndirectionChain> DestAccesses;  // 0x80(0x10)
	struct TArray<struct FPropertyAccessIndirection> Indirections;  // 0x90(0x10)
	struct TArray<int32_t> EventAccessIndices;  // 0xA0(0x10)
	char pad_176[24];  // 0xB0(0x18)

}; 
// ScriptStruct PropertyAccess.PropertyAccessIndirection
// Size: 0x40(Inherited: 0x0) 
struct FPropertyAccessIndirection
{
	struct TFieldPath<FNone> ArrayProperty;  // 0x0(0x20)
	struct UFunction* Function;  // 0x20(0x8)
	int32_t ReturnBufferSize;  // 0x28(0x4)
	int32_t ReturnBufferAlignment;  // 0x2C(0x4)
	int32_t ArrayIndex;  // 0x30(0x4)
	uint32_t Offset;  // 0x34(0x4)
	uint8_t  ObjectType;  // 0x38(0x1)
	uint8_t  Type;  // 0x39(0x1)
	char pad_58[6];  // 0x3A(0x6)

}; 
// ScriptStruct PropertyAccess.PropertyAccessCopy
// Size: 0x10(Inherited: 0x0) 
struct FPropertyAccessCopy
{
	int32_t AccessIndex;  // 0x0(0x4)
	int32_t DestAccessStartIndex;  // 0x4(0x4)
	int32_t DestAccessEndIndex;  // 0x8(0x4)
	uint8_t  Type;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// ScriptStruct PropertyAccess.PropertyAccessIndirectionChain
// Size: 0x30(Inherited: 0x0) 
struct FPropertyAccessIndirectionChain
{
	struct TFieldPath<FNone> Property;  // 0x0(0x20)
	int32_t IndirectionStartIndex;  // 0x20(0x4)
	int32_t IndirectionEndIndex;  // 0x24(0x4)
	int32_t EventId;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct PropertyAccess.PropertyAccessPath
// Size: 0xC(Inherited: 0x0) 
struct FPropertyAccessPath
{
	int32_t PathSegmentStartIndex;  // 0x0(0x4)
	int32_t PathSegmentCount;  // 0x4(0x4)
	char bHasEvents : 1;  // 0x8(0x1)
	char pad_8_1 : 7;  // 0x8(0x1)
	char pad_9[4];  // 0x9(0x4)

}; 
// ScriptStruct PropertyAccess.PropertyAccessCopyBatch
// Size: 0x10(Inherited: 0x0) 
struct FPropertyAccessCopyBatch
{
	struct TArray<struct FPropertyAccessCopy> Copies;  // 0x0(0x10)

}; 
// ScriptStruct PropertyAccess.PropertyAccessSegment
// Size: 0x40(Inherited: 0x0) 
struct FPropertyAccessSegment
{
	struct FName Name;  // 0x0(0x8)
	struct UStruct* Struct;  // 0x8(0x8)
	struct TFieldPath<FNone> Property;  // 0x10(0x20)
	struct UFunction* Function;  // 0x30(0x8)
	int32_t ArrayIndex;  // 0x38(0x4)
	uint16_t Flags;  // 0x3C(0x2)
	char pad_62[2];  // 0x3E(0x2)

}; 
