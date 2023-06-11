#pragma once 
#include "SDK.h" 
 
 
// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
// Size: 0x4(Inherited: 0x0) 
struct FGetDownloadSpeed
{
	float ReturnValue;  // 0x0(0x4)

}; 
// DelegateFunction MobilePatchingUtils.OnContentInstallFailed__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FOnContentInstallFailed__DelegateSignature
{
	struct FText ErrorText;  // 0x0(0x18)
	int32_t ErrorCode;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// DelegateFunction MobilePatchingUtils.OnRequestContentSucceeded__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnRequestContentSucceeded__DelegateSignature
{
	struct UMobilePendingContent* MobilePendingContent;  // 0x0(0x8)

}; 
// DelegateFunction MobilePatchingUtils.OnRequestContentFailed__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FOnRequestContentFailed__DelegateSignature
{
	struct FText ErrorText;  // 0x0(0x18)
	int32_t ErrorCode;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
// Size: 0x4(Inherited: 0x0) 
struct FGetDownloadSize
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
// Size: 0x4(Inherited: 0x0) 
struct FGetDiskFreeSpace
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function MobilePatchingUtils.MobileInstalledContent.Mount
// Size: 0x20(Inherited: 0x0) 
struct FMount
{
	int32_t PakOrder;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString MountPoint;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
// Size: 0x4(Inherited: 0x0) 
struct FGetInstalledContentSize
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
// Size: 0x18(Inherited: 0x0) 
struct FGetDownloadStatusText
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
// Size: 0x4(Inherited: 0x0) 
struct FGetInstallProgress
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
// Size: 0x50(Inherited: 0x0) 
struct FRequestContent
{
	struct FString RemoteManifestURL;  // 0x0(0x10)
	struct FString CloudURL;  // 0x10(0x10)
	struct FString InstallDirectory;  // 0x20(0x10)
	struct FDelegate OnSucceeded;  // 0x30(0x10)
	struct FDelegate OnFailed;  // 0x40(0x10)

}; 
// Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
// Size: 0x4(Inherited: 0x0) 
struct FGetTotalDownloadedSize
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
// Size: 0x4(Inherited: 0x0) 
struct FGetRequiredDiskSpace
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function MobilePatchingUtils.MobilePendingContent.StartInstall
// Size: 0x20(Inherited: 0x0) 
struct FStartInstall
{
	struct FDelegate OnSucceeded;  // 0x0(0x10)
	struct FDelegate OnFailed;  // 0x10(0x10)

}; 
// Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
// Size: 0x10(Inherited: 0x0) 
struct FGetActiveDeviceProfileName
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
// Size: 0x18(Inherited: 0x0) 
struct FGetInstalledContent
{
	struct FString InstallDirectory;  // 0x0(0x10)
	struct UMobileInstalledContent* ReturnValue;  // 0x10(0x8)

}; 
// Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
// Size: 0x10(Inherited: 0x0) 
struct FGetSupportedPlatformNames
{
	struct TArray<struct FString> ReturnValue;  // 0x0(0x10)

}; 
// Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
// Size: 0x1(Inherited: 0x0) 
struct FHasActiveWiFiConnection
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
