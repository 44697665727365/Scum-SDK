#pragma once 
#include "SDK.h" 
 
 
// DelegateFunction ImageWriteQueue.OnImageWriteComplete__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FOnImageWriteComplete__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bSuccess : 1;  // 0x0(0x1)

}; 
// ScriptStruct ImageWriteQueue.ImageWriteOptions
// Size: 0x60(Inherited: 0x0) 
struct FImageWriteOptions
{
	uint8_t  Format;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FDelegate OnComplete;  // 0x4(0x10)
	int32_t CompressionQuality;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bOverwriteFile : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool bAsync : 1;  // 0x19(0x1)
	char pad_26[70];  // 0x1A(0x46)

}; 
// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// Size: 0x80(Inherited: 0x0) 
struct FExportToDisk
{
	struct UTexture* Texture;  // 0x0(0x8)
	struct FString Filename;  // 0x8(0x10)
	char pad_24[8];  // 0x18(0x8)
	struct FImageWriteOptions Options;  // 0x20(0x60)

}; 
