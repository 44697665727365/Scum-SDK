#pragma once 
#include "SDK.h" 
 
 
// Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
// Size: 0x18(Inherited: 0x0) 
struct FCancelDownload
{
	struct TArray<struct FString> AssetPacks;  // 0x0(0x10)
	uint8_t  ReturnValue;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
// Size: 0x2(Inherited: 0x0) 
struct FGetShowCellularDataConfirmationStatus
{
	uint8_t  Status;  // 0x0(0x1)
	uint8_t  ReturnValue;  // 0x1(0x1)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
// Size: 0x8(Inherited: 0x0) 
struct FGetTotalBytesToDownload
{
	int32_t State;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
// Size: 0x8(Inherited: 0x0) 
struct FGetBytesDownloaded
{
	int32_t State;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
// Size: 0x4(Inherited: 0x0) 
struct FReleaseDownloadState
{
	int32_t State;  // 0x0(0x4)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
// Size: 0x18(Inherited: 0x0) 
struct FGetAssetPackLocation
{
	struct FString Name;  // 0x0(0x10)
	int32_t Location;  // 0x10(0x4)
	uint8_t  ReturnValue;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
// Size: 0x18(Inherited: 0x0) 
struct FGetAssetsPath
{
	int32_t Location;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString ReturnValue;  // 0x8(0x10)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
// Size: 0x8(Inherited: 0x0) 
struct FGetStorageMethod
{
	int32_t Location;  // 0x0(0x4)
	uint8_t  ReturnValue;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
// Size: 0x8(Inherited: 0x0) 
struct FGetDownloadStatus
{
	int32_t State;  // 0x0(0x4)
	uint8_t  ReturnValue;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
// Size: 0x18(Inherited: 0x0) 
struct FGetDownloadState
{
	struct FString Name;  // 0x0(0x10)
	int32_t State;  // 0x10(0x4)
	uint8_t  ReturnValue;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
// Size: 0x4(Inherited: 0x0) 
struct FReleaseAssetPackLocation
{
	int32_t Location;  // 0x0(0x4)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
// Size: 0x18(Inherited: 0x0) 
struct FRequestDownload
{
	struct TArray<struct FString> AssetPacks;  // 0x0(0x10)
	uint8_t  ReturnValue;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
// Size: 0x18(Inherited: 0x0) 
struct FRequestInfo
{
	struct TArray<struct FString> AssetPacks;  // 0x0(0x10)
	uint8_t  ReturnValue;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
// Size: 0x18(Inherited: 0x0) 
struct FRequestRemoval
{
	struct FString Name;  // 0x0(0x10)
	uint8_t  ReturnValue;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
// Size: 0x1(Inherited: 0x0) 
struct FShowCellularDataConfirmation
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
