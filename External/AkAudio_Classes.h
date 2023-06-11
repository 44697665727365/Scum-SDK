#pragma once 
#include <AkAudio_Structs.h>
 
 
 
class UAkPortalComponent
{
public:
	UAkPortalComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbDynamic() {
		return memory.read<bool>(m_addr + 504);
	}
	uint8_t  GetInitialState() {
		return memory.read<uint8_t >(m_addr + 505);
	}
	float GetObstructionRefreshInterval() {
		return memory.read<float>(m_addr + 508);
	}
	char ECollisionChannel GetObstructionCollisionChannel() {
		return memory.read<char ECollisionChannel>(m_addr + 512);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkAudioBank
{
public:
	UAkAudioBank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetAutoLoad() {
		return memory.read<bool>(m_addr + 80);
	}
	struct TMap<struct FString, struct UAkAssetPlatformData> GetLocalizedPlatformAssetDataMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct TMap<struct FString, struct UAkAssetPlatformData>(ptr_addr);
	}
	struct TSet<struct TSoftObjectPtr<UAkAudioEvent>> GetLinkedAkEvents() {
		return memory.read<struct TSet<struct TSoftObjectPtr<UAkAudioEvent>>>(m_addr + 168);
	}
	struct UAkAssetPlatformData GetCurrentLocalizedPlatformAssetData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct UAkAssetPlatformData(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkAudioType
{
public:
	UAkAudioType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetShortID() {
		return memory.read<uint32_t>(m_addr + 40);
	}
	struct TArray<struct UObject> GetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAkAcousticPortal
{
public:
	AAkAcousticPortal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkPortalComponent GetPortal() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UAkPortalComponent(ptr_addr);
	}
	uint8_t  GetInitialState() {
		return memory.read<uint8_t >(m_addr + 608);
	}
	bool GetbRequiresStateMigration() {
		return memory.read<bool>(m_addr + 609);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkPS5InitializationSettings
{
public:
	UAkPS5InitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettings GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettings>(m_addr + 48);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 144);
	}
	struct FAkPS5AdvancedInitializationSettings GetAdvancedSettings() {
		return memory.read<struct FAkPS5AdvancedInitializationSettings>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkAcousticTextureSetComponent
{
public:
	UAkAcousticTextureSetComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkAcousticTexture
{
public:
	UAkAcousticTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AAkAmbientSound
{
public:
	AAkAmbientSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioEvent GetAkAudioEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UAkAudioEvent(ptr_addr);
	}
	struct UAkComponent GetAkComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UAkComponent(ptr_addr);
	}
	bool GetStopWhenOwnerIsDestroyed() {
		return memory.read<bool>(m_addr + 560);
	}
	bool GetAutoPost() {
		return memory.read<bool>(m_addr + 561);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkPlatformInfo
{
public:
	UAkPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkAndroidInitializationSettings
{
public:
	UAkAndroidInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettingsWithSampleRate GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettingsWithSampleRate>(m_addr + 48);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 152);
	}
	struct FAkAndroidAdvancedInitializationSettings GetAdvancedSettings() {
		return memory.read<struct FAkAndroidAdvancedInitializationSettings>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkMediaAssetData
{
public:
	UAkMediaAssetData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsStreamed() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetUseDeviceMemory() {
		return memory.read<bool>(m_addr + 41);
	}
	struct FString GetLanguage() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetAssetPlatform() {
		return memory.read<struct FString>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkAndroidPlatformInfo
{
public:
	UAkAndroidPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkAssetBase
{
public:
	UAkAssetBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAssetPlatformData GetPlatformAssetData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UAkAssetPlatformData(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkPS4PlatformInfo
{
public:
	UAkPS4PlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkRoomComponent
{
public:
	UAkRoomComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbEnable() {
		return memory.read<char>(m_addr + 536);
	}
	bool GetbDynamic() {
		return memory.read<bool>(m_addr + 540);
	}
	float GetPriority() {
		return memory.read<float>(m_addr + 544);
	}
	float GetWallOcclusion() {
		return memory.read<float>(m_addr + 548);
	}
	float GetAuxSendLevel() {
		return memory.read<float>(m_addr + 552);
	}
	bool GetAutoPost() {
		return memory.read<bool>(m_addr + 556);
	}
	struct UAkAcousticTextureSetComponent GetGeometryComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct UAkAcousticTextureSetComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkAssetData
{
public:
	UAkAssetData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetCachedHash() {
		return memory.read<uint32_t>(m_addr + 40);
	}
	struct FString GetBankLanguage() {
		return memory.read<struct FString>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkAssetDataWithMedia
{
public:
	UAkAssetDataWithMedia(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UAkMediaAsset> GetMediaList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct TArray<struct UAkMediaAsset>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkFolder
{
public:
	UAkFolder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetUnrealFolderPath() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetWwiseFolderPath() {
		return memory.read<struct FString>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkPS5PlatformInfo
{
public:
	UAkPS5PlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkAssetPlatformData
{
public:
	UAkAssetPlatformData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAssetData GetCurrentAssetData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UAkAssetData(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkItemBoolProperties
{
public:
	UAkItemBoolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSelectionChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 264);
	}
	struct FMulticastInlineDelegate GetOnPropertyDragged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 280);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkQuailInitializationSettings
{
public:
	UAkQuailInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkAssetDataSwitchContainerData
{
public:
	UAkAssetDataSwitchContainerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UAkGroupValue> GetGroupValue() {
		return memory.read<struct TSoftObjectPtr<UAkGroupValue>>(m_addr + 40);
	}
	struct UAkGroupValue GetDefaultGroupValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UAkGroupValue(ptr_addr);
	}
	struct TArray<struct UAkMediaAsset> GetMediaList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct TArray<struct UAkMediaAsset>(ptr_addr);
	}
	struct TArray<struct UAkAssetDataSwitchContainerData> GetChildren() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct TArray<struct UAkAssetDataSwitchContainerData>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkAssetDataSwitchContainer
{
public:
	UAkAssetDataSwitchContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UAkAssetDataSwitchContainerData> GetSwitchContainers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct TArray<struct UAkAssetDataSwitchContainerData>(ptr_addr);
	}
	struct UAkGroupValue GetDefaultGroupValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UAkGroupValue(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkRtpc
{
public:
	UAkRtpc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkPS4InitializationSettings
{
public:
	UAkPS4InitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettings GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettings>(m_addr + 48);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 144);
	}
	struct FAkPS4AdvancedInitializationSettings GetAdvancedSettings() {
		return memory.read<struct FAkPS4AdvancedInitializationSettings>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkAudioEventData
{
public:
	UAkAudioEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMaxAttenuationRadius() {
		return memory.read<float>(m_addr + 240);
	}
	bool GetIsInfinite() {
		return memory.read<bool>(m_addr + 244);
	}
	float GetMinimumDuration() {
		return memory.read<float>(m_addr + 248);
	}
	float GetMaximumDuration() {
		return memory.read<float>(m_addr + 252);
	}
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer> GetLocalizedMedia() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct TMap<struct FString, struct UAkAssetDataSwitchContainer>(ptr_addr);
	}
	struct TSet<struct UAkAudioEvent> GetPostedEvents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 336);
		return struct TSet<struct UAkAudioEvent>(ptr_addr);
	}
	struct TSet<struct UAkAuxBus> GetUserDefinedSends() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 416);
		return struct TSet<struct UAkAuxBus>(ptr_addr);
	}
	struct TSet<struct UAkTrigger> GetPostedTriggers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 496);
		return struct TSet<struct UAkTrigger>(ptr_addr);
	}
	struct TSet<struct UAkGroupValue> GetGroupValues() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct TSet<struct UAkGroupValue>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkIOSInitializationSettings
{
public:
	UAkIOSInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettingsWithSampleRate GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettingsWithSampleRate>(m_addr + 48);
	}
	struct FAkAudioSession GetAudioSession() {
		return memory.read<struct FAkAudioSession>(m_addr + 152);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 168);
	}
	struct FAkAdvancedInitializationSettings GetAdvancedSettings() {
		return memory.read<struct FAkAdvancedInitializationSettings>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkAudioEvent
{
public:
	UAkAudioEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct UAkAssetPlatformData> GetLocalizedPlatformAssetDataMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct TMap<struct FString, struct UAkAssetPlatformData>(ptr_addr);
	}
	struct UAkAudioBank GetRequiredBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UAkAudioBank(ptr_addr);
	}
	struct UAkAssetPlatformData GetCurrentLocalizedPlatformData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UAkAssetPlatformData(ptr_addr);
	}
	float GetMaxAttenuationRadius() {
		return memory.read<float>(m_addr + 184);
	}
	bool GetIsInfinite() {
		return memory.read<bool>(m_addr + 188);
	}
	float GetMinimumDuration() {
		return memory.read<float>(m_addr + 192);
	}
	float GetMaximumDuration() {
		return memory.read<float>(m_addr + 196);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkGameObject
{
public:
	UAkGameObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioEvent GetAkAudioEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return struct UAkAudioEvent(ptr_addr);
	}
	struct FString GetEventName() {
		return memory.read<struct FString>(m_addr + 512);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkComponent
{
public:
	UAkComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseSpatialAudio() {
		return memory.read<bool>(m_addr + 536);
	}
	char ECollisionChannel GetOcclusionCollisionChannel() {
		return memory.read<char ECollisionChannel>(m_addr + 544);
	}
	char GetEnableSpotReflectors() {
		return memory.read<char>(m_addr + 548);
	}
	float GetOuterRadius() {
		return memory.read<float>(m_addr + 552);
	}
	float GetInnerRadius() {
		return memory.read<float>(m_addr + 556);
	}
	struct UAkAuxBus GetEarlyReflectionAuxBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UAkAuxBus(ptr_addr);
	}
	struct FString GetEarlyReflectionAuxBusName() {
		return memory.read<struct FString>(m_addr + 568);
	}
	int32_t GetEarlyReflectionOrder() {
		return memory.read<int32_t>(m_addr + 584);
	}
	float GetEarlyReflectionBusSendGain() {
		return memory.read<float>(m_addr + 588);
	}
	float GetEarlyReflectionMaxPathLength() {
		return memory.read<float>(m_addr + 592);
	}
	float GetroomReverbAuxBusGain() {
		return memory.read<float>(m_addr + 596);
	}
	int32_t GetdiffractionMaxEdges() {
		return memory.read<int32_t>(m_addr + 600);
	}
	int32_t GetdiffractionMaxPaths() {
		return memory.read<int32_t>(m_addr + 604);
	}
	float GetdiffractionMaxPathLength() {
		return memory.read<float>(m_addr + 608);
	}
	char GetDrawFirstOrderReflections() {
		return memory.read<char>(m_addr + 612);
	}
	char GetDrawSecondOrderReflections() {
		return memory.read<char>(m_addr + 612);
	}
	char GetDrawHigherOrderReflections() {
		return memory.read<char>(m_addr + 612);
	}
	char GetDrawDiffraction() {
		return memory.read<char>(m_addr + 612);
	}
	bool GetStopWhenOwnerDestroyed() {
		return memory.read<bool>(m_addr + 616);
	}
	float GetAttenuationScalingFactor() {
		return memory.read<float>(m_addr + 620);
	}
	float GetOcclusionRefreshInterval() {
		return memory.read<float>(m_addr + 624);
	}
	bool GetbUseReverbVolumes() {
		return memory.read<bool>(m_addr + 628);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkXboxOneAnvilInitializationSettings
{
public:
	UAkXboxOneAnvilInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkLinuxInitializationSettings
{
public:
	UAkLinuxInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettingsWithSampleRate GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettingsWithSampleRate>(m_addr + 48);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 152);
	}
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering GetAdvancedSettings() {
		return memory.read<struct FAkAdvancedInitializationSettingsWithMultiCoreRendering>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkAudioInputComponent
{
public:
	UAkAudioInputComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkAuxBus
{
public:
	UAkAuxBus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioBank GetRequiredBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UAkAudioBank(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkLinuxPlatformInfo
{
public:
	UAkLinuxPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkDurationCallbackInfo
{
public:
	UAkDurationCallbackInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDuration() {
		return memory.read<float>(m_addr + 56);
	}
	float GetEstimatedDuration() {
		return memory.read<float>(m_addr + 60);
	}
	int32_t GetAudioNodeID() {
		return memory.read<int32_t>(m_addr + 64);
	}
	int32_t GetMediaID() {
		return memory.read<int32_t>(m_addr + 68);
	}
	bool GetbStreaming() {
		return memory.read<bool>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkCheckBox
{
public:
	UAkCheckBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetCheckedState() {
		return memory.read<uint8_t >(m_addr + 1128);
	}
	struct FDelegate GetCheckedStateDelegate() {
		return memory.read<struct FDelegate>(m_addr + 1132);
	}
	struct FCheckBoxStyle GetWidgetStyle() {
		return memory.read<struct FCheckBoxStyle>(m_addr + 1152);
	}
	char EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<char EHorizontalAlignment>(m_addr + 2560);
	}
	bool GetIsFocusable() {
		return memory.read<bool>(m_addr + 2561);
	}
	struct FAkBoolPropertyToControl GetThePropertyToControl() {
		return memory.read<struct FAkBoolPropertyToControl>(m_addr + 2568);
	}
	struct FAkWwiseItemToControl GetItemToControl() {
		return memory.read<struct FAkWwiseItemToControl>(m_addr + 2584);
	}
	struct FMulticastInlineDelegate GetAkOnCheckStateChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 2648);
	}
	struct FMulticastInlineDelegate GetOnItemDropped() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 2664);
	}
	struct FMulticastInlineDelegate GetOnPropertyDropped() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 2680);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDrawPortalComponent
{
public:
	UDrawPortalComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDrawRoomComponent
{
public:
	UDrawRoomComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkGameplayStatics
{
public:
	UAkGameplayStatics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkCallbackInfo
{
public:
	UAkCallbackInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkComponent GetAkComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UAkComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkEventCallbackInfo
{
public:
	UAkEventCallbackInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayingID() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetEventId() {
		return memory.read<int32_t>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkMIDIEventCallbackInfo
{
public:
	UAkMIDIEventCallbackInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkItemBoolPropertiesConv
{
public:
	UAkItemBoolPropertiesConv(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkMarkerCallbackInfo
{
public:
	UAkMarkerCallbackInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIdentifier() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t Getposition() {
		return memory.read<int32_t>(m_addr + 60);
	}
	struct FString GetLabel() {
		return memory.read<struct FString>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkMusicSyncCallbackInfo
{
public:
	UAkMusicSyncCallbackInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayingID() {
		return memory.read<int32_t>(m_addr + 48);
	}
	struct FAkSegmentInfo GetSegmentInfo() {
		return memory.read<struct FAkSegmentInfo>(m_addr + 52);
	}
	uint8_t  GetMusicSyncType() {
		return memory.read<uint8_t >(m_addr + 88);
	}
	struct FString GetUserCueName() {
		return memory.read<struct FString>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkGeometryComponent
{
public:
	UAkGeometryComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetMeshType() {
		return memory.read<uint8_t >(m_addr + 528);
	}
	int32_t GetLOD() {
		return memory.read<int32_t>(m_addr + 532);
	}
	float GetWeldingThreshold() {
		return memory.read<float>(m_addr + 536);
	}
	struct TMap<struct UMaterialInterface, struct FAkGeometrySurfaceOverride> GetStaticMeshSurfaceOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct TMap<struct UMaterialInterface, struct FAkGeometrySurfaceOverride>(ptr_addr);
	}
	struct FAkGeometrySurfaceOverride GetCollisionMeshSurfaceOverride() {
		return memory.read<struct FAkGeometrySurfaceOverride>(m_addr + 624);
	}
	char GetbEnableDiffraction() {
		return memory.read<char>(m_addr + 648);
	}
	char GetbEnableDiffractionOnBoundaryEdges() {
		return memory.read<char>(m_addr + 648);
	}
	struct AActor GetAssociatedRoom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct AActor(ptr_addr);
	}
	struct FAkGeometryData GetGeometryData() {
		return memory.read<struct FAkGeometryData>(m_addr + 680);
	}
	struct TMap<int32_t, double> GetSurfaceAreas() {
		return memory.read<struct TMap<int32_t, double>>(m_addr + 760);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkItemPropertiesConv
{
public:
	UAkItemPropertiesConv(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkGroupValue
{
public:
	UAkGroupValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> GetMediaDependencies() {
		return memory.read<struct TArray<struct TSoftObjectPtr<UAkMediaAsset>>>(m_addr + 64);
	}
	uint32_t GetGroupShortID() {
		return memory.read<uint32_t>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkDPXInitializationSettings
{
public:
	UAkDPXInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkHololensInitializationSettings
{
public:
	UAkHololensInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettingsWithSampleRate GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettingsWithSampleRate>(m_addr + 48);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 152);
	}
	struct FAkHololensAdvancedInitializationSettings GetAdvancedSettings() {
		return memory.read<struct FAkHololensAdvancedInitializationSettings>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkItemProperties
{
public:
	UAkItemProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSelectionChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 264);
	}
	struct FMulticastInlineDelegate GetOnPropertyDragged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 280);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkHololensPlatformInfo
{
public:
	UAkHololensPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkInitBankAssetData
{
public:
	UAkInitBankAssetData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAkPluginInfo> GetPluginInfos() {
		return memory.read<struct TArray<struct FAkPluginInfo>>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkInitBank
{
public:
	UAkInitBank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetAvailableAudioCultures() {
		return memory.read<struct TArray<struct FString>>(m_addr + 80);
	}
	struct FString GetDefaultLanguage() {
		return memory.read<struct FString>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkIOSPlatformInfo
{
public:
	UAkIOSPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkLateReverbComponent
{
public:
	UAkLateReverbComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbEnable() {
		return memory.read<char>(m_addr + 504);
	}
	float GetSendLevel() {
		return memory.read<float>(m_addr + 508);
	}
	float GetFadeRate() {
		return memory.read<float>(m_addr + 512);
	}
	float GetPriority() {
		return memory.read<float>(m_addr + 516);
	}
	bool GetAutoAssignAuxBus() {
		return memory.read<bool>(m_addr + 520);
	}
	struct UAkAuxBus GetAuxBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 528);
		return struct UAkAuxBus(ptr_addr);
	}
	struct FString GetAuxBusName() {
		return memory.read<struct FString>(m_addr + 536);
	}
	struct UAkAuxBus GetAuxBusManual() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UAkAuxBus(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkMacInitializationSettings
{
public:
	UAkMacInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettingsWithSampleRate GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettingsWithSampleRate>(m_addr + 48);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 152);
	}
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering GetAdvancedSettings() {
		return memory.read<struct FAkAdvancedInitializationSettingsWithMultiCoreRendering>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkMacPlatformInfo
{
public:
	UAkMacPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkMediaAsset
{
public:
	UAkMediaAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetID() {
		return memory.read<uint32_t>(m_addr + 40);
	}
	struct FString GetMediaName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	bool GetAutoLoad() {
		return memory.read<bool>(m_addr + 64);
	}
	struct TArray<struct UObject> GetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct TArray<struct UObject>(ptr_addr);
	}
	struct FString GetLanguage() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct UAkMediaAssetData GetCurrentMediaAssetData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UAkMediaAssetData(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkLocalizedMediaAsset
{
public:
	UAkLocalizedMediaAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkExternalMediaAsset
{
public:
	UAkExternalMediaAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkPlatformInitialisationSettingsBase
{
public:
	UAkPlatformInitialisationSettingsBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkSettings
{
public:
	UAkSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetMaxSimultaneousReverbVolumes() {
		return memory.read<char>(m_addr + 40);
	}
	struct FFilePath GetWwiseProjectPath() {
		return memory.read<struct FFilePath>(m_addr + 48);
	}
	struct FDirectoryPath GetWwiseSoundDataFolder() {
		return memory.read<struct FDirectoryPath>(m_addr + 64);
	}
	bool GetbAutoConnectToWAAPI() {
		return memory.read<bool>(m_addr + 80);
	}
	char ECollisionChannel GetDefaultOcclusionCollisionChannel() {
		return memory.read<char ECollisionChannel>(m_addr + 81);
	}
	char ECollisionChannel GetDefaultFitToGeometryCollisionChannel() {
		return memory.read<char ECollisionChannel>(m_addr + 82);
	}
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> GetAkGeometryMap() {
		return memory.read<struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap>>(m_addr + 88);
	}
	float GetGlobalDecayAbsorption() {
		return memory.read<float>(m_addr + 168);
	}
	struct TSoftObjectPtr<UAkAuxBus> GetDefaultReverbAuxBus() {
		return memory.read<struct TSoftObjectPtr<UAkAuxBus>>(m_addr + 176);
	}
	struct TMap<float, struct TSoftObjectPtr<UAkAuxBus>> GetEnvironmentDecayAuxBusMap() {
		return memory.read<struct TMap<float, struct TSoftObjectPtr<UAkAuxBus>>>(m_addr + 216);
	}
	struct FString GetHFDampingName() {
		return memory.read<struct FString>(m_addr + 296);
	}
	struct FString GetDecayEstimateName() {
		return memory.read<struct FString>(m_addr + 312);
	}
	struct FString GetTimeToFirstReflectionName() {
		return memory.read<struct FString>(m_addr + 328);
	}
	struct TSoftObjectPtr<UAkRtpc> GetHFDampingRTPC() {
		return memory.read<struct TSoftObjectPtr<UAkRtpc>>(m_addr + 344);
	}
	struct TSoftObjectPtr<UAkRtpc> GetDecayEstimateRTPC() {
		return memory.read<struct TSoftObjectPtr<UAkRtpc>>(m_addr + 384);
	}
	struct TSoftObjectPtr<UAkRtpc> GetTimeToFirstReflectionRTPC() {
		return memory.read<struct TSoftObjectPtr<UAkRtpc>>(m_addr + 424);
	}
	struct TSoftObjectPtr<UAkAudioEvent> GetAudioInputEvent() {
		return memory.read<struct TSoftObjectPtr<UAkAudioEvent>>(m_addr + 464);
	}
	struct TMap<struct FGuid, struct FAkAcousticTextureParams> GetAcousticTextureParamsMap() {
		return memory.read<struct TMap<struct FGuid, struct FAkAcousticTextureParams>>(m_addr + 504);
	}
	bool GetSplitSwitchContainerMedia() {
		return memory.read<bool>(m_addr + 584);
	}
	bool GetSplitMediaPerFolder() {
		return memory.read<bool>(m_addr + 585);
	}
	bool GetUseEventBasedPackaging() {
		return memory.read<bool>(m_addr + 586);
	}
	bool GetEnableAutomaticAssetSynchronization() {
		return memory.read<bool>(m_addr + 587);
	}
	struct FString GetCommandletCommitMessage() {
		return memory.read<struct FString>(m_addr + 592);
	}
	struct TMap<struct FString, struct FString> GetUnrealCultureToWwiseCulture() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 608);
	}
	bool GetAskedToUseNewAssetManagement() {
		return memory.read<bool>(m_addr + 688);
	}
	bool GetbEnableMultiCoreRendering() {
		return memory.read<bool>(m_addr + 689);
	}
	bool GetMigratedEnableMultiCoreRendering() {
		return memory.read<bool>(m_addr + 690);
	}
	bool GetFixupRedirectorsDuringMigration() {
		return memory.read<bool>(m_addr + 691);
	}
	struct FDirectoryPath GetWwiseWindowsInstallationPath() {
		return memory.read<struct FDirectoryPath>(m_addr + 696);
	}
	struct FFilePath GetWwiseMacInstallationPath() {
		return memory.read<struct FFilePath>(m_addr + 712);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkWinAnvilPlatformInfo
{
public:
	UAkWinAnvilPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AAkReverbVolume
{
public:
	AAkReverbVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbEnabled() {
		return memory.read<char>(m_addr + 600);
	}
	struct UAkAuxBus GetAuxBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UAkAuxBus(ptr_addr);
	}
	struct FString GetAuxBusName() {
		return memory.read<struct FString>(m_addr + 616);
	}
	float GetSendLevel() {
		return memory.read<float>(m_addr + 632);
	}
	float GetFadeRate() {
		return memory.read<float>(m_addr + 636);
	}
	float GetPriority() {
		return memory.read<float>(m_addr + 640);
	}
	struct UAkLateReverbComponent GetLateReverbComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UAkLateReverbComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkSettingsPerUser
{
public:
	UAkSettingsPerUser(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDirectoryPath GetWwiseWindowsInstallationPath() {
		return memory.read<struct FDirectoryPath>(m_addr + 40);
	}
	struct FFilePath GetWwiseMacInstallationPath() {
		return memory.read<struct FFilePath>(m_addr + 56);
	}
	bool GetEnableAutomaticAssetSynchronization() {
		return memory.read<bool>(m_addr + 72);
	}
	struct FString GetWaapiIPAddress() {
		return memory.read<struct FString>(m_addr + 80);
	}
	uint32_t GetWaapiPort() {
		return memory.read<uint32_t>(m_addr + 96);
	}
	bool GetbAutoConnectToWAAPI() {
		return memory.read<bool>(m_addr + 100);
	}
	bool GetAutoSyncSelection() {
		return memory.read<bool>(m_addr + 101);
	}
	bool GetSuppressWwiseProjectPathWarnings() {
		return memory.read<bool>(m_addr + 102);
	}
	bool GetSoundDataGenerationSkipLanguage() {
		return memory.read<bool>(m_addr + 103);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkSlider
{
public:
	UAkSlider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 264);
	}
	struct FDelegate GetValueDelegate() {
		return memory.read<struct FDelegate>(m_addr + 268);
	}
	struct FSliderStyle GetWidgetStyle() {
		return memory.read<struct FSliderStyle>(m_addr + 288);
	}
	char EOrientation GetOrientation() {
		return memory.read<char EOrientation>(m_addr + 1120);
	}
	struct FLinearColor GetSliderBarColor() {
		return memory.read<struct FLinearColor>(m_addr + 1124);
	}
	struct FLinearColor GetSliderHandleColor() {
		return memory.read<struct FLinearColor>(m_addr + 1140);
	}
	bool GetIndentHandle() {
		return memory.read<bool>(m_addr + 1156);
	}
	bool GetLocked() {
		return memory.read<bool>(m_addr + 1157);
	}
	float GetStepSize() {
		return memory.read<float>(m_addr + 1160);
	}
	bool GetIsFocusable() {
		return memory.read<bool>(m_addr + 1164);
	}
	struct FAkPropertyToControl GetThePropertyToControl() {
		return memory.read<struct FAkPropertyToControl>(m_addr + 1168);
	}
	struct FAkWwiseItemToControl GetItemToControl() {
		return memory.read<struct FAkWwiseItemToControl>(m_addr + 1184);
	}
	struct FMulticastInlineDelegate GetOnValueChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1248);
	}
	struct FMulticastInlineDelegate GetOnItemDropped() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1264);
	}
	struct FMulticastInlineDelegate GetOnPropertyDropped() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1280);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAkSpatialAudioVolume
{
public:
	AAkSpatialAudioVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkSurfaceReflectorSetComponent GetSurfaceReflectorSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UAkSurfaceReflectorSetComponent(ptr_addr);
	}
	struct UAkLateReverbComponent GetLateReverb() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UAkLateReverbComponent(ptr_addr);
	}
	struct UAkRoomComponent GetRoom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UAkRoomComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAkSpotReflector
{
public:
	AAkSpotReflector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAuxBus GetEarlyReflectionAuxBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UAkAuxBus(ptr_addr);
	}
	struct FString GetEarlyReflectionAuxBusName() {
		return memory.read<struct FString>(m_addr + 552);
	}
	struct UAkAcousticTexture GetAcousticTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct UAkAcousticTexture(ptr_addr);
	}
	float GetDistanceScalingFactor() {
		return memory.read<float>(m_addr + 576);
	}
	float GetLevel() {
		return memory.read<float>(m_addr + 580);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkStadiaInitializationSettings
{
public:
	UAkStadiaInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettingsWithSampleRate GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettingsWithSampleRate>(m_addr + 48);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 152);
	}
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering GetAdvancedSettings() {
		return memory.read<struct FAkAdvancedInitializationSettingsWithMultiCoreRendering>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkStadiaPlatformInfo
{
public:
	UAkStadiaPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkQuailPlatformInfo
{
public:
	UAkQuailPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkStateValue
{
public:
	UAkStateValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkSubmixInputComponent
{
public:
	UAkSubmixInputComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundSubmix GetSubmixToRecord() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct USoundSubmix(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkSurfaceReflectorSetComponent
{
public:
	UAkSurfaceReflectorSetComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbEnableSurfaceReflectors() {
		return memory.read<char>(m_addr + 528);
	}
	struct TArray<struct FAkSurfacePoly> GetAcousticPolys() {
		return memory.read<struct TArray<struct FAkSurfacePoly>>(m_addr + 536);
	}
	char GetbEnableDiffraction() {
		return memory.read<char>(m_addr + 552);
	}
	char GetbEnableDiffractionOnBoundaryEdges() {
		return memory.read<char>(m_addr + 552);
	}
	struct AActor GetAssociatedRoom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkSwitchInitializationSettings
{
public:
	UAkSwitchInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettingsWithSampleRate GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettingsWithSampleRate>(m_addr + 48);
	}
	struct FAkCommunicationSettingsWithCommSelection GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithCommSelection>(m_addr + 152);
	}
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering GetAdvancedSettings() {
		return memory.read<struct FAkAdvancedInitializationSettingsWithMultiCoreRendering>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkSwitchPlatformInfo
{
public:
	UAkSwitchPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkSwitchValue
{
public:
	UAkSwitchValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkTrigger
{
public:
	UAkTrigger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkTVOSInitializationSettings
{
public:
	UAkTVOSInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettingsWithSampleRate GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettingsWithSampleRate>(m_addr + 48);
	}
	struct FAkAudioSession GetAudioSession() {
		return memory.read<struct FAkAudioSession>(m_addr + 152);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 168);
	}
	struct FAkAdvancedInitializationSettings GetAdvancedSettings() {
		return memory.read<struct FAkAdvancedInitializationSettings>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkXboxOneAnvilPlatformInfo
{
public:
	UAkXboxOneAnvilPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkTVOSPlatformInfo
{
public:
	UAkTVOSPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkWaapiCalls
{
public:
	UAkWaapiCalls(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USAkWaapiFieldNamesConv
{
public:
	USAkWaapiFieldNamesConv(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkWaapiJsonManager
{
public:
	UAkWaapiJsonManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkWaapiUriConv
{
public:
	UAkWaapiUriConv(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkWwiseTree
{
public:
	UAkWwiseTree(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSelectionChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 264);
	}
	struct FMulticastInlineDelegate GetOnItemDragged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 280);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkWindowsInitializationSettings
{
public:
	UAkWindowsInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettingsWithSampleRate GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettingsWithSampleRate>(m_addr + 48);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 152);
	}
	struct FAkWindowsAdvancedInitializationSettings GetAdvancedSettings() {
		return memory.read<struct FAkWindowsAdvancedInitializationSettings>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkWin32PlatformInfo
{
public:
	UAkWin32PlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkWin64PlatformInfo
{
public:
	UAkWin64PlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkWindowsPlatformInfo
{
public:
	UAkWindowsPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkWinGDKInitializationSettings
{
public:
	UAkWinGDKInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettingsWithSampleRate GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettingsWithSampleRate>(m_addr + 48);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 152);
	}
	struct FAkWinGDKAdvancedInitializationSettings GetAdvancedSettings() {
		return memory.read<struct FAkWinGDKAdvancedInitializationSettings>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkWinAnvilInitializationSettings
{
public:
	UAkWinAnvilInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkWinGDKPlatformInfo
{
public:
	UAkWinGDKPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkWwiseTreeSelector
{
public:
	UAkWwiseTreeSelector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSelectionChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 264);
	}
	struct FMulticastInlineDelegate GetOnItemDragged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 280);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkXboxOneGDKInitializationSettings
{
public:
	UAkXboxOneGDKInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettings GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettings>(m_addr + 48);
	}
	struct FAkXboxOneGDKApuHeapInitializationSettings GetApuHeapSettings() {
		return memory.read<struct FAkXboxOneGDKApuHeapInitializationSettings>(m_addr + 144);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 152);
	}
	struct FAkXboxOneGDKAdvancedInitializationSettings GetAdvancedSettings() {
		return memory.read<struct FAkXboxOneGDKAdvancedInitializationSettings>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkXB1InitializationSettings
{
public:
	UAkXB1InitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkXboxOneGDKPlatformInfo
{
public:
	UAkXboxOneGDKPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkXB1PlatformInfo
{
public:
	UAkXB1PlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkXboxOneInitializationSettings
{
public:
	UAkXboxOneInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettings GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettings>(m_addr + 48);
	}
	struct FAkXboxOneApuHeapInitializationSettings GetApuHeapSettings() {
		return memory.read<struct FAkXboxOneApuHeapInitializationSettings>(m_addr + 144);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 152);
	}
	struct FAkXboxOneAdvancedInitializationSettings GetAdvancedSettings() {
		return memory.read<struct FAkXboxOneAdvancedInitializationSettings>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkXboxOnePlatformInfo
{
public:
	UAkXboxOnePlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkXSXInitializationSettings
{
public:
	UAkXSXInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkCommonInitializationSettings GetCommonSettings() {
		return memory.read<struct FAkCommonInitializationSettings>(m_addr + 48);
	}
	struct FAkXSXApuHeapInitializationSettings GetApuHeapSettings() {
		return memory.read<struct FAkXSXApuHeapInitializationSettings>(m_addr + 144);
	}
	struct FAkCommunicationSettingsWithSystemInitialization GetCommunicationSettings() {
		return memory.read<struct FAkCommunicationSettingsWithSystemInitialization>(m_addr + 152);
	}
	struct FAkXSXAdvancedInitializationSettings GetAdvancedSettings() {
		return memory.read<struct FAkXSXAdvancedInitializationSettings>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAkMPXInitializationSettings
{
public:
	UAkMPXInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAkXSXPlatformInfo
{
public:
	UAkXSXPlatformInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneAkAudioEventSection
{
public:
	UMovieSceneAkAudioEventSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioEvent GetEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return struct UAkAudioEvent(ptr_addr);
	}
	bool GetRetriggerEvent() {
		return memory.read<bool>(m_addr + 304);
	}
	int32_t GetScrubTailLengthMs() {
		return memory.read<int32_t>(m_addr + 308);
	}
	bool GetStopAtSectionEnd() {
		return memory.read<bool>(m_addr + 312);
	}
	struct FString GetEventName() {
		return memory.read<struct FString>(m_addr + 320);
	}
	float GetMaxSourceDuration() {
		return memory.read<float>(m_addr + 368);
	}
	struct FString GetMaxDurationSourceID() {
		return memory.read<struct FString>(m_addr + 376);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneAkTrack
{
public:
	UMovieSceneAkTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}
	char GetbIsAMasterTrack() {
		return memory.read<char>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneAkAudioEventTrack
{
public:
	UMovieSceneAkAudioEventTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneAkAudioRTPCSection
{
public:
	UMovieSceneAkAudioRTPCSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkRtpc GetRTPC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UAkRtpc(ptr_addr);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 240);
	}
	struct FRichCurve GetFloatCurve() {
		return memory.read<struct FRichCurve>(m_addr + 256);
	}
	struct FMovieSceneFloatChannelSerializationHelper GetFloatChannelSerializationHelper() {
		return memory.read<struct FMovieSceneFloatChannelSerializationHelper>(m_addr + 384);
	}
	struct FMovieSceneFloatChannel GetRTPCChannel() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 432);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneAkAudioRTPCTrack
{
public:
	UMovieSceneAkAudioRTPCTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPostEventAsync
{
public:
	UPostEventAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetCompleted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPostEventAtLocationAsync
{
public:
	UPostEventAtLocationAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetCompleted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


