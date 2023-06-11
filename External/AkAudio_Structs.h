#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FAKWaapiJsonObject
{
public:
	FAKWaapiJsonObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnAkBankCallback__DelegateSignature
{
public:
	FOnAkBankCallback__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetResult() {
		return memory.read<uint8_t >(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAkPostEventCallback__DelegateSignature
{
public:
	FOnAkPostEventCallback__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetCallbackType() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	struct UAkCallbackInfo GetCallbackInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAkCallbackInfo(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkWaapiUri
{
public:
	FAkWaapiUri(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetUri() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemPropertyDragDetected__DelegateSignature
{
public:
	FOnItemPropertyDragDetected__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPropertyDragged() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkWaapiSubscriptionId
{
public:
	FAkWaapiSubscriptionId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnSetCurrentAudioCultureCallback__DelegateSignature
{
public:
	FOnSetCurrentAudioCultureCallback__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetSucceeded() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEventCallback__DelegateSignature
{
public:
	FOnEventCallback__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiSubscriptionId GetSubscriptionId() {
		return memory.read<struct FAkWaapiSubscriptionId>(m_addr + 0);
	}
	struct FAKWaapiJsonObject GetWaapiJsonObject() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostEvent
{
public:
	FPostEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioEvent GetakEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioEvent(ptr_addr);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	int32_t GetCallbackMask() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FDelegate GetPostEventCallback() {
		return memory.read<struct FDelegate>(m_addr + 20);
	}
	struct TArray<struct FAkExternalSourceInfo> GetExternalSources() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 40);
	}
	bool GetbStopWhenAttachedToDestroyed() {
		return memory.read<bool>(m_addr + 56);
	}
	struct FString GetEventName() {
		return memory.read<struct FString>(m_addr + 64);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCheckedState
{
public:
	FGetCheckedState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemPropertySelectionChanged__DelegateSignature
{
public:
	FOnItemPropertySelectionChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPropertySelected() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkWwiseObjectDetails
{
public:
	FAkWwiseObjectDetails(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetItemPath() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetItemId() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValue
{
public:
	FGetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSpeakerAngles
{
public:
	FGetSpeakerAngles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetSpeakerAngles() {
		return memory.read<struct TArray<float>>(m_addr + 0);
	}
	float GetHeightAngle() {
		return memory.read<float>(m_addr + 16);
	}
	struct FString GetDeviceShareset() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkOnFloatValueChangedEvent__DelegateSignature
{
public:
	FAkOnFloatValueChangedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkOutputSettings
{
public:
	FAkOutputSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAudioDeviceSharesetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetIdDevice() {
		return memory.read<int32_t>(m_addr + 16);
	}
	uint8_t  GetPanRule() {
		return memory.read<uint8_t >(m_addr + 20);
	}
	uint8_t  GetChannelConfig() {
		return memory.read<uint8_t >(m_addr + 21);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemDropDetected__DelegateSignature
{
public:
	FOnItemDropDetected__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetItemDroppedID() {
		return memory.read<struct FGuid>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSubscriptionID
{
public:
	FGetSubscriptionID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiSubscriptionId GetSubscription() {
		return memory.read<struct FAkWaapiSubscriptionId>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkMidiCc
{
public:
	FAkMidiCc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetCc() {
		return memory.read<uint8_t >(m_addr + 2);
	}
	char GetValue() {
		return memory.read<char>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPropertyDropDetected__DelegateSignature
{
public:
	FOnPropertyDropDetected__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPropertyDropped() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemBoolPropertySelectionChanged__DelegateSignature
{
public:
	FOnItemBoolPropertySelectionChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPropertySelected() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkExternalSourceInfo
{
public:
	FAkExternalSourceInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetExternalSrcName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	uint8_t  GetCodecID() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct UAkExternalMediaAsset GetExternalSourceAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UAkExternalMediaAsset(ptr_addr);
	}
	bool GetIsStreamed() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkWaapiFieldNames
{
public:
	FAkWaapiFieldNames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFieldName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkAudioSession
{
public:
	FAkAudioSession(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetAudioSessionCategory() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	uint32_t GetAudioSessionCategoryOptions() {
		return memory.read<uint32_t>(m_addr + 4);
	}
	uint8_t  GetAudioSessionMode() {
		return memory.read<uint8_t >(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemBoolPropertyDragDetected__DelegateSignature
{
public:
	FOnItemBoolPropertyDragDetected__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPropertyDragged() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkMainOutputSettings
{
public:
	FAkMainOutputSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAudioDeviceShareset() {
		return memory.read<struct FString>(m_addr + 0);
	}
	uint32_t GetDeviceID() {
		return memory.read<uint32_t>(m_addr + 16);
	}
	uint8_t  GetPanningRule() {
		return memory.read<uint8_t >(m_addr + 20);
	}
	uint8_t  GetChannelConfigType() {
		return memory.read<uint8_t >(m_addr + 24);
	}
	uint32_t GetChannelMask() {
		return memory.read<uint32_t>(m_addr + 28);
	}
	uint32_t GetNumberOfChannels() {
		return memory.read<uint32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPitchBend
{
public:
	FGetPitchBend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkMidiPitchBend GetAsPitchBend() {
		return memory.read<struct FAkMidiPitchBend>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkOnCheckBoxComponentStateChanged__DelegateSignature
{
public:
	FAkOnCheckBoxComponentStateChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsChecked() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnWwiseItemDropDetected__DelegateSignature
{
public:
	FOnWwiseItemDropDetected__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetItemDroppedID() {
		return memory.read<struct FGuid>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkSegmentInfo
{
public:
	FAkSegmentInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCurrentPosition() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetPreEntryDuration() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetActiveDuration() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetPostExitDuration() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetRemainingLookAheadTime() {
		return memory.read<int32_t>(m_addr + 16);
	}
	float GetBeatDuration() {
		return memory.read<float>(m_addr + 20);
	}
	float GetBarDuration() {
		return memory.read<float>(m_addr + 24);
	}
	float GetGridDuration() {
		return memory.read<float>(m_addr + 28);
	}
	float GetGridOffset() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnBoolPropertyDropDetected__DelegateSignature
{
public:
	FOnBoolPropertyDropDetected__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPropertyDropped() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopActor
{
public:
	FStopActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemSelectionChanged__DelegateSignature
{
public:
	FOnItemSelectionChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetItemSelectedID() {
		return memory.read<struct FGuid>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkBoolPropertyToControl
{
public:
	FAkBoolPropertyToControl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemProperty() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkAdvancedInitializationSettings
{
public:
	FAkAdvancedInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetIO_MemorySize() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	uint32_t GetIO_Granularity() {
		return memory.read<uint32_t>(m_addr + 4);
	}
	float GetTargetAutoStreamBufferLength() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetUseStreamCache() {
		return memory.read<bool>(m_addr + 12);
	}
	uint32_t GetMaximumPinnedBytesInCache() {
		return memory.read<uint32_t>(m_addr + 16);
	}
	bool GetEnableGameSyncPreparation() {
		return memory.read<bool>(m_addr + 20);
	}
	uint32_t GetContinuousPlaybackLookAhead() {
		return memory.read<uint32_t>(m_addr + 24);
	}
	uint32_t GetMonitorQueuePoolSize() {
		return memory.read<uint32_t>(m_addr + 28);
	}
	uint32_t GetMaximumHardwareTimeoutMs() {
		return memory.read<uint32_t>(m_addr + 32);
	}
	bool GetDebugOutOfRangeCheckEnabled() {
		return memory.read<bool>(m_addr + 36);
	}
	float GetDebugOutOfRangeLimit() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkSpatialAudioSettings
{
public:
	FAkSpatialAudioSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetMaxSoundPropagationDepth() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	float GetMovementThreshold() {
		return memory.read<float>(m_addr + 4);
	}
	uint32_t GetNumberOfPrimaryRays() {
		return memory.read<uint32_t>(m_addr + 8);
	}
	uint32_t GetReflectionOrder() {
		return memory.read<uint32_t>(m_addr + 12);
	}
	float GetMaximumPathLength() {
		return memory.read<float>(m_addr + 16);
	}
	float GetCPULimitPercentage() {
		return memory.read<float>(m_addr + 20);
	}
	bool GetEnableDiffractionOnReflections() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetEnableGeometricDiffractionAndTransmission() {
		return memory.read<bool>(m_addr + 25);
	}
	bool GetCalcEmitterVirtualPosition() {
		return memory.read<bool>(m_addr + 26);
	}
	bool GetUseObstruction() {
		return memory.read<bool>(m_addr + 27);
	}
	bool GetUseOcclusion() {
		return memory.read<bool>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnloadBank
{
public:
	FUnloadBank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioBank GetBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioBank(ptr_addr);
	}
	struct FString GetBankName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 24);
	}
	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemDragDetected__DelegateSignature
{
public:
	FOnItemDragDetected__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetItemDraggedID() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct FString GetItemDraggedName() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostEventAsyncOutputPin__DelegateSignature
{
public:
	FPostEventAsyncOutputPin__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayingID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkPS5AdvancedInitializationSettings
{
public:
	FAkPS5AdvancedInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetUseHardwareCodecLowLatencyMode() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetbVorbisHwAcceleration() {
		return memory.read<bool>(m_addr + 49);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSpeakerAngles
{
public:
	FSetSpeakerAngles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetSpeakerAngles() {
		return memory.read<struct TArray<float>>(m_addr + 0);
	}
	float GetHeightAngle() {
		return memory.read<float>(m_addr + 16);
	}
	struct FString GetDeviceShareset() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostEventAtLocationAsyncOutputPin__DelegateSignature
{
public:
	FPostEventAtLocationAsyncOutputPin__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayingID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkGeometrySurfaceOverride
{
public:
	FAkGeometrySurfaceOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAcousticTexture GetAcousticTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAcousticTexture(ptr_addr);
	}
	char GetbEnableOcclusionOverride() {
		return memory.read<char>(m_addr + 8);
	}
	float GetOcclusionValue() {
		return memory.read<float>(m_addr + 12);
	}
	float GetSurfaceArea() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	FAkAdvancedInitializationSettingsWithMultiCoreRendering(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnableMultiCoreRendering() {
		return memory.read<bool>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkSurfaceEdgeInfo
{
public:
	FAkSurfaceEdgeInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAkAndroidAdvancedInitializationSettings
{
public:
	FAkAndroidAdvancedInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetAudioAPI() {
		return memory.read<uint32_t>(m_addr + 48);
	}
	bool GetRoundFrameSizeToHardwareSize() {
		return memory.read<bool>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkWwiseItemToControl
{
public:
	FAkWwiseItemToControl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWwiseObjectDetails GetItemPicked() {
		return memory.read<struct FAkWwiseObjectDetails>(m_addr + 0);
	}
	struct FString GetItemPath() {
		return memory.read<struct FString>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkMidiEventBase
{
public:
	FAkMidiEventBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetType() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	char GetChan() {
		return memory.read<char>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkMidiProgramChange
{
public:
	FAkMidiProgramChange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetProgramNum() {
		return memory.read<char>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkMidiChannelAftertouch
{
public:
	FAkMidiChannelAftertouch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetValue() {
		return memory.read<char>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkMidiNoteAftertouch
{
public:
	FAkMidiNoteAftertouch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetNote() {
		return memory.read<char>(m_addr + 2);
	}
	char GetValue() {
		return memory.read<char>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkMidiPitchBend
{
public:
	FAkMidiPitchBend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetValueLsb() {
		return memory.read<char>(m_addr + 2);
	}
	char GetValueMsb() {
		return memory.read<char>(m_addr + 3);
	}
	int32_t GetFullValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkMidiNoteOnOff
{
public:
	FAkMidiNoteOnOff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetNote() {
		return memory.read<char>(m_addr + 2);
	}
	char GetVelocity() {
		return memory.read<char>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetObjectField
{
public:
	FSetObjectField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetFieldName() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	struct FAKWaapiJsonObject GetFieldValue() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 16);
	}
	struct FAKWaapiJsonObject GetTarget() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 32);
	}
	struct FAKWaapiJsonObject GetReturnValue() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkMidiGeneric
{
public:
	FAkMidiGeneric(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetParam1() {
		return memory.read<char>(m_addr + 2);
	}
	char GetParam2() {
		return memory.read<char>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkChannelMask
{
public:
	FAkChannelMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetChannelMask() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAkItemId
{
public:
	FGetAkItemId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetReturnValue() {
		return memory.read<struct FGuid>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkCommunicationSettingsWithSystemInitialization
{
public:
	FAkCommunicationSettingsWithSystemInitialization(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInitializeSystemComms() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkGeometryData
{
public:
	FAkGeometryData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}
	struct TArray<struct FAkAcousticSurface> GetSurfaces() {
		return memory.read<struct TArray<struct FAkAcousticSurface>>(m_addr + 16);
	}
	struct TArray<struct FAkTriangle> GetTriangles() {
		return memory.read<struct TArray<struct FAkTriangle>>(m_addr + 32);
	}
	struct TArray<struct UPhysicalMaterial> GetToOverrideAcousticTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<struct UPhysicalMaterial>(ptr_addr);
	}
	struct TArray<struct UPhysicalMaterial> GetToOverrideOcclusion() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct TArray<struct UPhysicalMaterial>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkCommonInitializationSettings
{
public:
	FAkCommonInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetMaximumNumberOfMemoryPools() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	uint32_t GetMaximumNumberOfPositioningPaths() {
		return memory.read<uint32_t>(m_addr + 4);
	}
	uint32_t GetCommandQueueSize() {
		return memory.read<uint32_t>(m_addr + 8);
	}
	uint32_t GetSamplesPerFrame() {
		return memory.read<uint32_t>(m_addr + 12);
	}
	struct FAkMainOutputSettings GetMainOutputSettings() {
		return memory.read<struct FAkMainOutputSettings>(m_addr + 16);
	}
	float GetStreamingLookAheadRatio() {
		return memory.read<float>(m_addr + 56);
	}
	uint16_t GetNumberOfRefillsInVoice() {
		return memory.read<uint16_t>(m_addr + 60);
	}
	struct FAkSpatialAudioSettings GetSpatialAudioSettings() {
		return memory.read<struct FAkSpatialAudioSettings>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkTriangle
{
public:
	FAkTriangle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t GetPoint0() {
		return memory.read<uint16_t>(m_addr + 0);
	}
	uint16_t GetPoint1() {
		return memory.read<uint16_t>(m_addr + 2);
	}
	uint16_t GetPoint2() {
		return memory.read<uint16_t>(m_addr + 4);
	}
	uint16_t GetSurface() {
		return memory.read<uint16_t>(m_addr + 6);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkAcousticSurface
{
public:
	FAkAcousticSurface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetTexture() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	float GetOcclusion() {
		return memory.read<float>(m_addr + 4);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkPluginInfo
{
public:
	FAkPluginInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	uint32_t GetPluginID() {
		return memory.read<uint32_t>(m_addr + 16);
	}
	struct FString Getdll() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkHololensAdvancedInitializationSettings
{
public:
	FAkHololensAdvancedInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetUseHeadMountedDisplayAudioDevice() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkCommonInitializationSettingsWithSampleRate
{
public:
	FAkCommonInitializationSettingsWithSampleRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetSampleRate() {
		return memory.read<uint32_t>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkGeometrySurfacePropertiesToMap
{
public:
	FAkGeometrySurfacePropertiesToMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UAkAcousticTexture> GetAcousticTexture() {
		return memory.read<struct TSoftObjectPtr<UAkAcousticTexture>>(m_addr + 0);
	}
	float GetOcclusionValue() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkCommunicationSettingsWithCommSelection
{
public:
	FAkCommunicationSettingsWithCommSelection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetCommunicationSystem() {
		return memory.read<uint8_t >(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkCommunicationSettings
{
public:
	FAkCommunicationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetPoolSize() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	uint16_t GetDiscoveryBroadcastPort() {
		return memory.read<uint16_t>(m_addr + 4);
	}
	uint16_t GetCommandPort() {
		return memory.read<uint16_t>(m_addr + 6);
	}
	uint16_t GetNotificationPort() {
		return memory.read<uint16_t>(m_addr + 8);
	}
	struct FString GetNetworkName() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkPropertyToControl
{
public:
	FAkPropertyToControl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemProperty() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCc
{
public:
	FGetCc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkMidiCc GetAsCc() {
		return memory.read<struct FAkMidiCc>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkPS4AdvancedInitializationSettings
{
public:
	FAkPS4AdvancedInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetACPBatchBufferSize() {
		return memory.read<uint32_t>(m_addr + 48);
	}
	bool GetUseHardwareCodecLowLatencyMode() {
		return memory.read<bool>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkReverbDescriptor
{
public:
	FAkReverbDescriptor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAkAcousticTextureParams
{
public:
	FAkAcousticTextureParams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector4 GetAbsorptionValues() {
		return memory.read<struct FVector4>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkSurfacePoly
{
public:
	FAkSurfacePoly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAcousticTexture GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAcousticTexture(ptr_addr);
	}
	float GetOcclusion() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetEnableSurface() {
		return memory.read<bool>(m_addr + 12);
	}
	float GetSurfaceArea() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostEventAtLocation
{
public:
	FPostEventAtLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioEvent GetakEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioEvent(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FRotator GetOrientation() {
		return memory.read<struct FRotator>(m_addr + 20);
	}
	struct FString GetEventName() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UObject(ptr_addr);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsGame
{
public:
	FIsGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostAssociatedAkEvent
{
public:
	FPostAssociatedAkEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCallbackMask() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FDelegate GetPostEventCallback() {
		return memory.read<struct FDelegate>(m_addr + 4);
	}
	struct TArray<struct FAkExternalSourceInfo> GetExternalSources() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 24);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkSurfaceEdgeVerts
{
public:
	FAkSurfaceEdgeVerts(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAkWindowsAdvancedInitializationSettings
{
public:
	FAkWindowsAdvancedInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetUseHeadMountedDisplayAudioDevice() {
		return memory.read<bool>(m_addr + 48);
	}
	uint32_t GetMaxSystemAudioObjects() {
		return memory.read<uint32_t>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkWinGDKAdvancedInitializationSettings
{
public:
	FAkWinGDKAdvancedInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetUseHeadMountedDisplayAudioDevice() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkXboxOneGDKApuHeapInitializationSettings
{
public:
	FAkXboxOneGDKApuHeapInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetCachedSize() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	uint32_t GetNonCachedSize() {
		return memory.read<uint32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkXboxOneGDKAdvancedInitializationSettings
{
public:
	FAkXboxOneGDKAdvancedInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t GetMaximumNumberOfXMAVoices() {
		return memory.read<uint16_t>(m_addr + 48);
	}
	bool GetUseHardwareCodecLowLatencyMode() {
		return memory.read<bool>(m_addr + 50);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkXboxOneApuHeapInitializationSettings
{
public:
	FAkXboxOneApuHeapInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetCachedSize() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	uint32_t GetNonCachedSize() {
		return memory.read<uint32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkXboxOneAdvancedInitializationSettings
{
public:
	FAkXboxOneAdvancedInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t GetMaximumNumberOfXMAVoices() {
		return memory.read<uint16_t>(m_addr + 48);
	}
	bool GetUseHardwareCodecLowLatencyMode() {
		return memory.read<bool>(m_addr + 50);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkXSXApuHeapInitializationSettings
{
public:
	FAkXSXApuHeapInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetCachedSize() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	uint32_t GetNonCachedSize() {
		return memory.read<uint32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostAssociatedAkEventAndWaitForEnd
{
public:
	FPostAssociatedAkEventAndWaitForEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAkExternalSourceInfo> GetExternalSources() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 0);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 16);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FAkXSXAdvancedInitializationSettings
{
public:
	FAkXSXAdvancedInitializationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t GetMaximumNumberOfXMAVoices() {
		return memory.read<uint16_t>(m_addr + 48);
	}
	bool GetUseHardwareCodecLowLatencyMode() {
		return memory.read<bool>(m_addr + 50);
	}
	uint16_t GetMaximumNumberOfOpusVoices() {
		return memory.read<uint16_t>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneAkAudioEventTemplate
{
public:
	FMovieSceneAkAudioEventTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneAkAudioEventSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UMovieSceneAkAudioEventSection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIntegerField
{
public:
	FGetIntegerField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetFieldName() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	struct FAKWaapiJsonObject GetTarget() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 16);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteActionOnEvent
{
public:
	FExecuteActionOnEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioEvent GetakEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioEvent(ptr_addr);
	}
	uint8_t  GetActionType() {
		return memory.read<uint8_t >(m_addr + 8);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AActor(ptr_addr);
	}
	int32_t GetTransitionDuration() {
		return memory.read<int32_t>(m_addr + 24);
	}
	uint8_t  GetFadeCurve() {
		return memory.read<uint8_t >(m_addr + 28);
	}
	int32_t GetPlayingID() {
		return memory.read<int32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneAkAudioRTPCTemplate
{
public:
	FMovieSceneAkAudioRTPCTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneAkAudioRTPCSection GetSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UMovieSceneAkAudioRTPCSection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneFloatChannelSerializationHelper
{
public:
	FMovieSceneFloatChannelSerializationHelper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char ERichCurveExtrapolation GetPreInfinityExtrap() {
		return memory.read<char ERichCurveExtrapolation>(m_addr + 0);
	}
	char ERichCurveExtrapolation GetPostInfinityExtrap() {
		return memory.read<char ERichCurveExtrapolation>(m_addr + 1);
	}
	struct TArray<int32_t> GetTimes() {
		return memory.read<struct TArray<int32_t>>(m_addr + 8);
	}
	struct TArray<struct FMovieSceneFloatValueSerializationHelper> GetValues() {
		return memory.read<struct TArray<struct FMovieSceneFloatValueSerializationHelper>>(m_addr + 24);
	}
	float GetDefaultValue() {
		return memory.read<float>(m_addr + 40);
	}
	bool GetbHasDefaultValue() {
		return memory.read<bool>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneFloatValueSerializationHelper
{
public:
	FMovieSceneFloatValueSerializationHelper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}
	char ERichCurveInterpMode GetInterpMode() {
		return memory.read<char ERichCurveInterpMode>(m_addr + 4);
	}
	char ERichCurveTangentMode GetTangentMode() {
		return memory.read<char ERichCurveTangentMode>(m_addr + 5);
	}
	struct FMovieSceneTangentDataSerializationHelper GetTangent() {
		return memory.read<struct FMovieSceneTangentDataSerializationHelper>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumberField
{
public:
	FGetNumberField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetFieldName() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	struct FAKWaapiJsonObject GetTarget() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 16);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FAkWaapiSubscriptionIdToString
{
public:
	FConv_FAkWaapiSubscriptionIdToString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiSubscriptionId GetINAkWaapiSubscriptionId() {
		return memory.read<struct FAkWaapiSubscriptionId>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneTangentDataSerializationHelper
{
public:
	FMovieSceneTangentDataSerializationHelper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetArriveTangent() {
		return memory.read<float>(m_addr + 0);
	}
	float GetLeaveTangent() {
		return memory.read<float>(m_addr + 4);
	}
	char ERichCurveTangentWeightMode GetTangentWeightMode() {
		return memory.read<char ERichCurveTangentWeightMode>(m_addr + 8);
	}
	float GetArriveTangentWeight() {
		return memory.read<float>(m_addr + 12);
	}
	float GetLeaveTangentWeight() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentState
{
public:
	FGetCurrentState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPrimitiveParent
{
public:
	FGetPrimitiveParent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPortalPlacementValid
{
public:
	FPortalPlacementValid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMigrateMultiCoreRendering
{
public:
	FMigrateMultiCoreRendering(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetNewValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FAKWaapiJsonObjectToString
{
public:
	FConv_FAKWaapiJsonObjectToString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAKWaapiJsonObject GetINAKWaapiJsonObject() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsInfinite
{
public:
	FGetIsInfinite(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaxAttenuationRadius
{
public:
	FGetMaxAttenuationRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaximumDuration
{
public:
	FGetMaximumDuration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMinimumDuration
{
public:
	FGetMinimumDuration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRTPCValue
{
public:
	FGetRTPCValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkRtpc GetRTPCValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkRtpc(ptr_addr);
	}
	int32_t GetPlayingID() {
		return memory.read<int32_t>(m_addr + 8);
	}
	uint8_t  GetInputValueType() {
		return memory.read<uint8_t >(m_addr + 12);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 16);
	}
	uint8_t  GetOutputValueType() {
		return memory.read<uint8_t >(m_addr + 20);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct AActor(ptr_addr);
	}
	struct FName GetRTPC() {
		return memory.read<struct FName>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBusConfig
{
public:
	FSetBusConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetBusName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	uint8_t  GetChannelConfiguration() {
		return memory.read<uint8_t >(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostAkEvent
{
public:
	FPostAkEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioEvent GetakEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioEvent(ptr_addr);
	}
	int32_t GetCallbackMask() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FDelegate GetPostEventCallback() {
		return memory.read<struct FDelegate>(m_addr + 12);
	}
	struct TArray<struct FAkExternalSourceInfo> GetExternalSources() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 32);
	}
	struct FString Getin_EventName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSliderHandleColor
{
public:
	FSetSliderHandleColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetInValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAssociateAkTextureSetComponent
{
public:
	FAssociateAkTextureSetComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAcousticTextureSetComponent GettextureSetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAcousticTextureSetComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAvailableAudioCultures
{
public:
	FGetAvailableAudioCultures(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetReturnValue() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostAkEventAsync
{
public:
	FPostAkEventAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UAkAudioEvent GetakEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAkAudioEvent(ptr_addr);
	}
	int32_t GetPlayingID() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetCallbackMask() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct FDelegate GetPostEventCallback() {
		return memory.read<struct FDelegate>(m_addr + 24);
	}
	struct TArray<struct FAkExternalSourceInfo> GetExternalSources() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 40);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostEventAtLocationAsync
{
public:
	FPostEventAtLocationAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UAkAudioEvent GetakEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAkAudioEvent(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FRotator GetOrientation() {
		return memory.read<struct FRotator>(m_addr + 28);
	}
	struct UPostEventAtLocationAsync GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UPostEventAtLocationAsync(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostAssociatedAkEventAsync
{
public:
	FPostAssociatedAkEventAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	int32_t GetCallbackMask() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FDelegate GetPostEventCallback() {
		return memory.read<struct FDelegate>(m_addr + 12);
	}
	struct TArray<struct FAkExternalSourceInfo> GetExternalSources() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 32);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 48);
	}
	int32_t GetPlayingID() {
		return memory.read<int32_t>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRTPCValue
{
public:
	FSetRTPCValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkRtpc GetRTPCValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkRtpc(ptr_addr);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetInterpolationTimeMs() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AActor(ptr_addr);
	}
	struct FName GetRTPC() {
		return memory.read<struct FName>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAttenuationRadius
{
public:
	FGetAttenuationRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostAkEventAndWaitForEnd
{
public:
	FPostAkEventAndWaitForEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioEvent GetakEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioEvent(ptr_addr);
	}
	struct FString Getin_EventName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct TArray<struct FAkExternalSourceInfo> GetExternalSources() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 24);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 40);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostAkEventAndWaitForEndAsync
{
public:
	FPostAkEventAndWaitForEndAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioEvent GetakEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioEvent(ptr_addr);
	}
	int32_t GetPlayingID() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct TArray<struct FAkExternalSourceInfo> GetExternalSources() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 16);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostAkEventByName
{
public:
	FPostAkEventByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getin_EventName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostAssociatedAkEventAndWaitForEndAsync
{
public:
	FPostAssociatedAkEventAndWaitForEndAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayingID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FAkExternalSourceInfo> GetExternalSources() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 8);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostTrigger
{
public:
	FPostTrigger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkTrigger GetTriggerValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkTrigger(ptr_addr);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct FName GetTrigger() {
		return memory.read<struct FName>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAttenuationScalingFactor
{
public:
	FSetAttenuationScalingFactor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEarlyReflectionsAuxBus
{
public:
	FSetEarlyReflectionsAuxBus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAuxBusName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEarlyReflectionsVolume
{
public:
	FSetEarlyReflectionsVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSendVolume() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGameObjectRadius
{
public:
	FSetGameObjectRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float Getin_outerRadius() {
		return memory.read<float>(m_addr + 0);
	}
	float Getin_innerRadius() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetListeners
{
public:
	FSetListeners(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UAkComponent> GetListeners() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UAkComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOutputBusVolume
{
public:
	FSetOutputBusVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBusVolume() {
		return memory.read<float>(m_addr + 0);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStopWhenOwnerDestroyed
{
public:
	FSetStopWhenOwnerDestroyed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbStopWhenOwnerDestroyed() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSwitch
{
public:
	FSetSwitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkSwitchValue GetSwitchValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkSwitchValue(ptr_addr);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct FName GetSwitchGroup() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FName GetSwitchState() {
		return memory.read<struct FName>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FUseEarlyReflections
{
public:
	FUseEarlyReflections(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct UAkAuxBus GetAuxBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAkAuxBus(ptr_addr);
	}
	int32_t GetOrder() {
		return memory.read<int32_t>(m_addr + 16);
	}
	float GetBusSendGain() {
		return memory.read<float>(m_addr + 20);
	}
	float GetMaxPathLength() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetSpotReflectors() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FString GetAuxBusName() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FUseReverbVolumes
{
public:
	FUseReverbVolumes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetinUseReverbVolumes() {
		return memory.read<bool>(m_addr + 0);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostAssociatedAudioInputEvent
{
public:
	FPostAssociatedAudioInputEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAkProperty
{
public:
	FGetAkProperty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStringField
{
public:
	FGetStringField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetFieldName() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	struct FAKWaapiJsonObject GetTarget() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 16);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsChecked
{
public:
	FIsChecked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPressed
{
public:
	FIsPressed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FAkWaapiFieldNamesToString
{
public:
	FConv_FAkWaapiFieldNamesToString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetINAkWaapiFieldNames() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAkBoolProperty
{
public:
	FSetAkBoolProperty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemProperty() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAkItemId
{
public:
	FSetAkItemId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetItemId() {
		return memory.read<struct FGuid>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCheckedState
{
public:
	FSetCheckedState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetInCheckedState() {
		return memory.read<uint8_t >(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsChecked
{
public:
	FSetIsChecked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInIsChecked() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddOutputCaptureMarker
{
public:
	FAddOutputCaptureMarker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetMarkerText() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCancelEventCallback
{
public:
	FCancelEventCallback(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDelegate GetPostEventCallback() {
		return memory.read<struct FDelegate>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteActionOnPlayingID
{
public:
	FExecuteActionOnPlayingID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetActionType() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	int32_t GetPlayingID() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetTransitionDuration() {
		return memory.read<int32_t>(m_addr + 8);
	}
	uint8_t  GetFadeCurve() {
		return memory.read<uint8_t >(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAkAudioTypeUserData
{
public:
	FGetAkAudioTypeUserData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioType GetInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioType(ptr_addr);
	}
	UObject GetType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UObject(ptr_addr);
	}
	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOcclusionScalingFactor
{
public:
	FGetOcclusionScalingFactor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAkComponent
{
public:
	FGetAkComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetAttachToComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USceneComponent(ptr_addr);
	}
	bool GetComponentCreated() {
		return memory.read<bool>(m_addr + 8);
	}
	struct FName GetAttachPointName() {
		return memory.read<struct FName>(m_addr + 12);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	char EAttachLocation GetLocationType() {
		return memory.read<char EAttachLocation>(m_addr + 32);
	}
	struct UAkComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UAkComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAkMediaAssetUserData
{
public:
	FGetAkMediaAssetUserData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkMediaAsset GetInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkMediaAsset(ptr_addr);
	}
	UObject GetType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UObject(ptr_addr);
	}
	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetArrayStringFields
{
public:
	FSetArrayStringFields(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetFieldName() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	struct TArray<struct FString> GetFieldStringValues() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}
	struct FAKWaapiJsonObject GetTarget() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 32);
	}
	struct FAKWaapiJsonObject GetReturnValue() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentAudioCulture
{
public:
	FGetCurrentAudioCulture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsEditor
{
public:
	FIsEditor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadBank
{
public:
	FLoadBank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioBank GetBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioBank(ptr_addr);
	}
	struct FString GetBankName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 24);
	}
	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadBankAsync
{
public:
	FLoadBankAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioBank GetBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioBank(ptr_addr);
	}
	struct FDelegate GetBankLoadedCallback() {
		return memory.read<struct FDelegate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadBankByName
{
public:
	FLoadBankByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetBankName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetArrayField
{
public:
	FGetArrayField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetFieldName() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	struct FAKWaapiJsonObject GetTarget() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 16);
	}
	struct TArray<struct FAKWaapiJsonObject> GetReturnValue() {
		return memory.read<struct TArray<struct FAKWaapiJsonObject>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadBanks
{
public:
	FLoadBanks(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UAkAudioBank> GetSoundBanks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UAkAudioBank>(ptr_addr);
	}
	bool GetSynchronizeSoundBanks() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostAndWaitForEndOfEvent
{
public:
	FPostAndWaitForEndOfEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioEvent GetakEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioEvent(ptr_addr);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	bool GetbStopWhenAttachedToDestroyed() {
		return memory.read<bool>(m_addr + 16);
	}
	struct TArray<struct FAkExternalSourceInfo> GetExternalSources() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 24);
	}
	struct FString GetEventName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 56);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FAkWaapiUriToString
{
public:
	FConv_FAkWaapiUriToString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiUri GetINAkWaapiUri() {
		return memory.read<struct FAkWaapiUri>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostAndWaitForEndOfEventAsync
{
public:
	FPostAndWaitForEndOfEventAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioEvent GetakEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioEvent(ptr_addr);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	int32_t GetPlayingID() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetbStopWhenAttachedToDestroyed() {
		return memory.read<bool>(m_addr + 20);
	}
	struct TArray<struct FAkExternalSourceInfo> GetExternalSources() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 24);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostEventAtLocationByName
{
public:
	FPostEventAtLocationByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetEventName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FRotator GetOrientation() {
		return memory.read<struct FRotator>(m_addr + 28);
	}
	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostEventAttached
{
public:
	FPostEventAttached(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioEvent GetakEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioEvent(ptr_addr);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct FName GetAttachPointName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	bool GetbStopWhenAttachedToDestroyed() {
		return memory.read<bool>(m_addr + 24);
	}
	struct FString GetEventName() {
		return memory.read<struct FString>(m_addr + 32);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostEventByName
{
public:
	FPostEventByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetEventName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AActor(ptr_addr);
	}
	bool GetbStopWhenAttachedToDestroyed() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplaceMainOutput
{
public:
	FReplaceMainOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkOutputSettings GetMainOutputSettings() {
		return memory.read<struct FAkOutputSettings>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetRTPCValue
{
public:
	FResetRTPCValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkRtpc GetRTPCValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkRtpc(ptr_addr);
	}
	int32_t GetInterpolationTimeMs() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AActor(ptr_addr);
	}
	struct FName GetRTPC() {
		return memory.read<struct FName>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCurrentAudioCulture
{
public:
	FSetCurrentAudioCulture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAudioCulture() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 16);
	}
	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCurrentAudioCultureAsync
{
public:
	FSetCurrentAudioCultureAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAudioCulture() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FDelegate GetCompleted() {
		return memory.read<struct FDelegate>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGameObjectToPortalObstruction
{
public:
	FSetGameObjectToPortalObstruction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkComponent GetGameObjectAkComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkComponent(ptr_addr);
	}
	struct UAkPortalComponent GetPortalComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAkPortalComponent(ptr_addr);
	}
	float GetObstructionValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMultipleChannelEmitterPositions
{
public:
	FSetMultipleChannelEmitterPositions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkComponent GetGameObjectAkComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkComponent(ptr_addr);
	}
	struct TArray<uint8_t > GetChannelMasks() {
		return memory.read<struct TArray<uint8_t >>(m_addr + 8);
	}
	struct TArray<struct FTransform> GetPositions() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 24);
	}
	uint8_t  GetMultiPositionType() {
		return memory.read<uint8_t >(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMultipleChannelMaskEmitterPositions
{
public:
	FSetMultipleChannelMaskEmitterPositions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkComponent GetGameObjectAkComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkComponent(ptr_addr);
	}
	struct TArray<struct FAkChannelMask> GetChannelMasks() {
		return memory.read<struct TArray<struct FAkChannelMask>>(m_addr + 8);
	}
	struct TArray<struct FTransform> GetPositions() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 24);
	}
	uint8_t  GetMultiPositionType() {
		return memory.read<uint8_t >(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMultiplePositions
{
public:
	FSetMultiplePositions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkComponent GetGameObjectAkComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkComponent(ptr_addr);
	}
	struct TArray<struct FTransform> GetPositions() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 8);
	}
	uint8_t  GetMultiPositionType() {
		return memory.read<uint8_t >(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOcclusionRefreshInterval
{
public:
	FSetOcclusionRefreshInterval(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRefreshInterval() {
		return memory.read<float>(m_addr + 0);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOcclusionScalingFactor
{
public:
	FSetOcclusionScalingFactor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetScalingFactor() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubscribeToWaapi
{
public:
	FSubscribeToWaapi(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiUri GetWaapiUri() {
		return memory.read<struct FAkWaapiUri>(m_addr + 0);
	}
	struct FAKWaapiJsonObject GetWaapiOptions() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 16);
	}
	struct FDelegate GetCallback() {
		return memory.read<struct FDelegate>(m_addr + 32);
	}
	struct FAkWaapiSubscriptionId GetSubscriptionId() {
		return memory.read<struct FAkWaapiSubscriptionId>(m_addr + 48);
	}
	bool GetSubscriptionDone() {
		return memory.read<bool>(m_addr + 56);
	}
	struct FAKWaapiJsonObject GetReturnValue() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPanningRule
{
public:
	FSetPanningRule(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetPanRule() {
		return memory.read<uint8_t >(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPortalObstructionAndOcclusion
{
public:
	FSetPortalObstructionAndOcclusion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkPortalComponent GetPortalComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkPortalComponent(ptr_addr);
	}
	float GetObstructionValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetOcclusionValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPortalToPortalObstruction
{
public:
	FSetPortalToPortalObstruction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkPortalComponent GetPortalComponent0() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkPortalComponent(ptr_addr);
	}
	struct UAkPortalComponent GetPortalComponent1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAkPortalComponent(ptr_addr);
	}
	float GetObstructionValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetReflectionsOrder
{
public:
	FSetReflectionsOrder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOrder() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetRefreshPaths() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetState
{
public:
	FSetState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkStateValue GetStateValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkStateValue(ptr_addr);
	}
	struct FName GetStateGroup() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetState() {
		return memory.read<struct FName>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpawnAkComponentAtLocation
{
public:
	FSpawnAkComponentAtLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UAkAudioEvent GetakEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAkAudioEvent(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FRotator GetOrientation() {
		return memory.read<struct FRotator>(m_addr + 28);
	}
	bool GetAutoPost() {
		return memory.read<bool>(m_addr + 40);
	}
	struct FString GetEventName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	bool GetAutoDestroy() {
		return memory.read<bool>(m_addr + 64);
	}
	struct UAkComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UAkComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartAllAmbientSounds
{
public:
	FStartAllAmbientSounds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartOutputCapture
{
public:
	FStartOutputCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartProfilerCapture
{
public:
	FStartProfilerCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopAllAmbientSounds
{
public:
	FStopAllAmbientSounds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnloadBankAsync
{
public:
	FUnloadBankAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAudioBank GetBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAudioBank(ptr_addr);
	}
	struct FDelegate GetBankUnloadedCallback() {
		return memory.read<struct FDelegate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnloadBankByName
{
public:
	FUnloadBankByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetBankName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChannel
{
public:
	FGetChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetReturnValue() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChannelAftertouch
{
public:
	FGetChannelAftertouch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkMidiChannelAftertouch GetAsChannelAftertouch() {
		return memory.read<struct FAkMidiChannelAftertouch>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStepSize
{
public:
	FSetStepSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGeneric
{
public:
	FGetGeneric(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkMidiGeneric GetAsGeneric() {
		return memory.read<struct FAkMidiGeneric>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNoteAftertouch
{
public:
	FGetNoteAftertouch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkMidiNoteAftertouch GetAsNoteAftertouch() {
		return memory.read<struct FAkMidiNoteAftertouch>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNoteOff
{
public:
	FGetNoteOff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkMidiNoteOnOff GetAsNoteOff() {
		return memory.read<struct FAkMidiNoteOnOff>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNoteOn
{
public:
	FGetNoteOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkMidiNoteOnOff GetAsNoteOn() {
		return memory.read<struct FAkMidiNoteOnOff>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetProgramChange
{
public:
	FGetProgramChange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkMidiProgramChange GetAsProgramChange() {
		return memory.read<struct FAkMidiProgramChange>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetType
{
public:
	FGetType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FAkBoolPropertyToControlToString
{
public:
	FConv_FAkBoolPropertyToControlToString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkBoolPropertyToControl GetINAkBoolPropertyToControl() {
		return memory.read<struct FAkBoolPropertyToControl>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FAkBoolPropertyToControlToText
{
public:
	FConv_FAkBoolPropertyToControlToText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkBoolPropertyToControl GetINAkBoolPropertyToControl() {
		return memory.read<struct FAkBoolPropertyToControl>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSearchText
{
public:
	FGetSearchText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSelectedProperty
{
public:
	FGetSelectedProperty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSearchText
{
public:
	FSetSearchText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetnewText() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FAkPropertyToControlToString
{
public:
	FConv_FAkPropertyToControlToString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkPropertyToControl GetINAkPropertyToControl() {
		return memory.read<struct FAkPropertyToControl>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FAkPropertyToControlToText
{
public:
	FConv_FAkPropertyToControlToText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkPropertyToControl GetINAkPropertyToControl() {
		return memory.read<struct FAkPropertyToControl>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGeometryComponent
{
public:
	FSetGeometryComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAkAcousticTextureSetComponent GettextureSetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAkAcousticTextureSetComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAkSliderItemId
{
public:
	FGetAkSliderItemId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetReturnValue() {
		return memory.read<struct FGuid>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAkSliderItemProperty
{
public:
	FGetAkSliderItemProperty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAkSliderItemId
{
public:
	FSetAkSliderItemId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetItemId() {
		return memory.read<struct FGuid>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAkSliderItemProperty
{
public:
	FSetAkSliderItemProperty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemProperty() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIndentHandle
{
public:
	FSetIndentHandle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLocked
{
public:
	FSetLocked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSliderBarColor
{
public:
	FSetSliderBarColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetInValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValue
{
public:
	FSetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCallWaapi
{
public:
	FCallWaapi(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiUri GetWaapiUri() {
		return memory.read<struct FAkWaapiUri>(m_addr + 0);
	}
	struct FAKWaapiJsonObject GetWaapiArgs() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 16);
	}
	struct FAKWaapiJsonObject GetWaapiOptions() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 32);
	}
	struct FAKWaapiJsonObject GetReturnValue() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FAkWaapiSubscriptionIdToText
{
public:
	FConv_FAkWaapiSubscriptionIdToText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiSubscriptionId GetINAkWaapiSubscriptionId() {
		return memory.read<struct FAkWaapiSubscriptionId>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRegisterWaapiConnectionLostCallback
{
public:
	FRegisterWaapiConnectionLostCallback(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDelegate GetCallback() {
		return memory.read<struct FDelegate>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRegisterWaapiProjectLoadedCallback
{
public:
	FRegisterWaapiProjectLoadedCallback(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDelegate GetCallback() {
		return memory.read<struct FDelegate>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSubscriptionID
{
public:
	FSetSubscriptionID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiSubscriptionId GetSubscription() {
		return memory.read<struct FAkWaapiSubscriptionId>(m_addr + 0);
	}
	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnsubscribe
{
public:
	FUnsubscribe(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiSubscriptionId GetSubscriptionId() {
		return memory.read<struct FAkWaapiSubscriptionId>(m_addr + 0);
	}
	bool GetUnsubscriptionDone() {
		return memory.read<bool>(m_addr + 8);
	}
	struct FAKWaapiJsonObject GetReturnValue() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FAkWaapiFieldNamesToText
{
public:
	FConv_FAkWaapiFieldNamesToText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetINAkWaapiFieldNames() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FAKWaapiJsonObjectToText
{
public:
	FConv_FAKWaapiJsonObjectToText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAKWaapiJsonObject GetINAKWaapiJsonObject() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBoolField
{
public:
	FGetBoolField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetFieldName() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	struct FAKWaapiJsonObject GetTarget() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetObjectField
{
public:
	FGetObjectField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetFieldName() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	struct FAKWaapiJsonObject GetTarget() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 16);
	}
	struct FAKWaapiJsonObject GetReturnValue() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetArrayObjectFields
{
public:
	FSetArrayObjectFields(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetFieldName() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	struct TArray<struct FAKWaapiJsonObject> GetFieldObjectValues() {
		return memory.read<struct TArray<struct FAKWaapiJsonObject>>(m_addr + 16);
	}
	struct FAKWaapiJsonObject GetTarget() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 32);
	}
	struct FAKWaapiJsonObject GetReturnValue() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBoolField
{
public:
	FSetBoolField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetFieldName() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	bool GetFieldValue() {
		return memory.read<bool>(m_addr + 16);
	}
	struct FAKWaapiJsonObject GetTarget() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 24);
	}
	struct FAKWaapiJsonObject GetReturnValue() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNumberField
{
public:
	FSetNumberField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetFieldName() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	float GetFieldValue() {
		return memory.read<float>(m_addr + 16);
	}
	struct FAKWaapiJsonObject GetTarget() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 24);
	}
	struct FAKWaapiJsonObject GetReturnValue() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStringField
{
public:
	FSetStringField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiFieldNames GetFieldName() {
		return memory.read<struct FAkWaapiFieldNames>(m_addr + 0);
	}
	struct FString GetFieldValue() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FAKWaapiJsonObject GetTarget() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 32);
	}
	struct FAKWaapiJsonObject GetReturnValue() {
		return memory.read<struct FAKWaapiJsonObject>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FAkWaapiUriToText
{
public:
	FConv_FAkWaapiUriToText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWaapiUri GetINAkWaapiUri() {
		return memory.read<struct FAkWaapiUri>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSelectedItem
{
public:
	FGetSelectedItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAkWwiseObjectDetails GetReturnValue() {
		return memory.read<struct FAkWwiseObjectDetails>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPostEventAsync
{
public:
	FPostEventAsync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UAkAudioEvent GetakEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAkAudioEvent(ptr_addr);
	}
	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AActor(ptr_addr);
	}
	int32_t GetCallbackMask() {
		return memory.read<int32_t>(m_addr + 24);
	}
	struct FDelegate GetPostEventCallback() {
		return memory.read<struct FDelegate>(m_addr + 28);
	}
	struct TArray<struct FAkExternalSourceInfo> GetExternalSources() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 48);
	}
	bool GetbStopWhenAttachedToDestroyed() {
		return memory.read<bool>(m_addr + 64);
	}
	struct UPostEventAsync GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UPostEventAsync(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};