#pragma once 
#include "SDK.h" 
 
 
// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
// Size: 0x20(Inherited: 0x0) 
struct FCreateProxyObjectForConvertToTIFF
{
	struct UTexture* SourceImage;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bWantColor : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool bUseGpu : 1;  // 0x9(0x1)
	char pad_10[2];  // 0xA(0x2)
	float Scale;  // 0xC(0x4)
	uint8_t  Rotate;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;  // 0x18(0x8)

}; 
// DelegateFunction AppleImageUtils.AppleImageConversionDelegate__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FAppleImageConversionDelegate__DelegateSignature
{
	struct FAppleImageUtilsImageConversionResult ConversionResult;  // 0x0(0x20)

}; 
// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
// Size: 0x20(Inherited: 0x0) 
struct FCreateProxyObjectForConvertToHEIF
{
	struct UTexture* SourceImage;  // 0x0(0x8)
	int32_t Quality;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bWantColor : 1;  // 0xC(0x1)
	char pad_13_1 : 7;  // 0xD(0x1)
	bool bUseGpu : 1;  // 0xD(0x1)
	char pad_14[2];  // 0xE(0x2)
	float Scale;  // 0x10(0x4)
	uint8_t  Rotate;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;  // 0x18(0x8)

}; 
// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
// Size: 0x20(Inherited: 0x0) 
struct FAppleImageUtilsImageConversionResult
{
	struct FString Error;  // 0x0(0x10)
	struct TArray<char> ImageData;  // 0x10(0x10)

}; 
// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
// Size: 0x20(Inherited: 0x0) 
struct FCreateProxyObjectForConvertToJPEG
{
	struct UTexture* SourceImage;  // 0x0(0x8)
	int32_t Quality;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bWantColor : 1;  // 0xC(0x1)
	char pad_13_1 : 7;  // 0xD(0x1)
	bool bUseGpu : 1;  // 0xD(0x1)
	char pad_14[2];  // 0xE(0x2)
	float Scale;  // 0x10(0x4)
	uint8_t  Rotate;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;  // 0x18(0x8)

}; 
// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
// Size: 0x20(Inherited: 0x0) 
struct FCreateProxyObjectForConvertToPNG
{
	struct UTexture* SourceImage;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bWantColor : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool bUseGpu : 1;  // 0x9(0x1)
	char pad_10[2];  // 0xA(0x2)
	float Scale;  // 0xC(0x4)
	uint8_t  Rotate;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;  // 0x18(0x8)

}; 
