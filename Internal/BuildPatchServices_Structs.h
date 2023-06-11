#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct BuildPatchServices.FileManifestData
// Size: 0x68(Inherited: 0x0) 
struct FFileManifestData
{
	struct FString Filename;  // 0x0(0x10)
	struct FSHAHashData FileHash;  // 0x10(0x14)
	char pad_36[4];  // 0x24(0x4)
	struct TArray<struct FChunkPartData> FileChunkParts;  // 0x28(0x10)
	struct TArray<struct FString> InstallTags;  // 0x38(0x10)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool bIsUnixExecutable : 1;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)
	struct FString SymlinkTarget;  // 0x50(0x10)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bIsReadOnly : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bIsCompressed : 1;  // 0x61(0x1)
	char pad_98[6];  // 0x62(0x6)

}; 
// ScriptStruct BuildPatchServices.ChunkPartData
// Size: 0x18(Inherited: 0x0) 
struct FChunkPartData
{
	struct FGuid Guid;  // 0x0(0x10)
	uint32_t Offset;  // 0x10(0x4)
	uint32_t Size;  // 0x14(0x4)

}; 
// ScriptStruct BuildPatchServices.SHAHashData
// Size: 0x14(Inherited: 0x0) 
struct FSHAHashData
{
	char Hash[14];  // 0x0(0x14)

}; 
// ScriptStruct BuildPatchServices.CustomFieldData
// Size: 0x20(Inherited: 0x0) 
struct FCustomFieldData
{
	struct FString Key;  // 0x0(0x10)
	struct FString Value;  // 0x10(0x10)

}; 
// ScriptStruct BuildPatchServices.ChunkInfoData
// Size: 0x40(Inherited: 0x0) 
struct FChunkInfoData
{
	struct FGuid Guid;  // 0x0(0x10)
	uint64_t Hash;  // 0x10(0x8)
	struct FSHAHashData ShaHash;  // 0x18(0x14)
	char pad_44[4];  // 0x2C(0x4)
	int64_t FileSize;  // 0x30(0x8)
	char GroupNumber;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)

}; 
