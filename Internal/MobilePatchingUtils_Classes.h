#pragma once 
#include <MobilePatchingUtils_Structs.h>
 
 
 
// Class MobilePatchingUtils.MobileInstalledContent
// Size: 0x48(Inherited: 0x28) 
struct UMobileInstalledContent : public UObject
{
	char pad_40[32];  // 0x28(0x20)

	bool Mount(int32_t PakOrder, struct FString MountPoint); // Function MobilePatchingUtils.MobileInstalledContent.Mount
	float GetInstalledContentSize(); // Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
	float GetDiskFreeSpace(); // Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
}; 



// Class MobilePatchingUtils.MobilePatchingLibrary
// Size: 0x28(Inherited: 0x28) 
struct UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{

	void RequestContent(struct FString RemoteManifestURL, struct FString CloudURL, struct FString InstallDirectory, struct FDelegate OnSucceeded, struct FDelegate OnFailed); // Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
	bool HasActiveWiFiConnection(); // Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
	struct TArray<struct FString> GetSupportedPlatformNames(); // Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
	struct UMobileInstalledContent* GetInstalledContent(struct FString InstallDirectory); // Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
	struct FString GetActiveDeviceProfileName(); // Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
}; 



// Class MobilePatchingUtils.MobilePendingContent
// Size: 0x88(Inherited: 0x48) 
struct UMobilePendingContent : public UMobileInstalledContent
{
	char pad_72[64];  // 0x48(0x40)

	void StartInstall(struct FDelegate OnSucceeded, struct FDelegate OnFailed); // Function MobilePatchingUtils.MobilePendingContent.StartInstall
	float GetTotalDownloadedSize(); // Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
	float GetRequiredDiskSpace(); // Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
	float GetInstallProgress(); // Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
	struct FText GetDownloadStatusText(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
	float GetDownloadSpeed(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
	float GetDownloadSize(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
}; 



