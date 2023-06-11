#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct AkAudio.AKWaapiJsonObject
// Size: 0x10(Inherited: 0x0) 
struct FAKWaapiJsonObject
{
	char pad_0[16];  // 0x0(0x10)

}; 
// DelegateFunction AkAudio.OnAkBankCallback__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FOnAkBankCallback__DelegateSignature
{
	uint8_t  Result;  // 0x0(0x1)

}; 
// DelegateFunction AkAudio.OnAkPostEventCallback__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnAkPostEventCallback__DelegateSignature
{
	uint8_t  CallbackType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UAkCallbackInfo* CallbackInfo;  // 0x8(0x8)

}; 
// ScriptStruct AkAudio.AkWaapiUri
// Size: 0x10(Inherited: 0x0) 
struct FAkWaapiUri
{
	struct FString Uri;  // 0x0(0x10)

}; 
// DelegateFunction AkAudio.OnItemPropertyDragDetected__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnItemPropertyDragDetected__DelegateSignature
{
	struct FString PropertyDragged;  // 0x0(0x10)

}; 
// ScriptStruct AkAudio.AkWaapiSubscriptionId
// Size: 0x8(Inherited: 0x0) 
struct FAkWaapiSubscriptionId
{
	char pad_0[8];  // 0x0(0x8)

}; 
// DelegateFunction AkAudio.OnSetCurrentAudioCultureCallback__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FOnSetCurrentAudioCultureCallback__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Succeeded : 1;  // 0x0(0x1)

}; 
// DelegateFunction AkAudio.OnEventCallback__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnEventCallback__DelegateSignature
{
	struct FAkWaapiSubscriptionId SubscriptionId;  // 0x0(0x8)
	struct FAKWaapiJsonObject WaapiJsonObject;  // 0x8(0x10)

}; 
// Function AkAudio.AkGameplayStatics.PostEvent
// Size: 0x58(Inherited: 0x0) 
struct FPostEvent
{
	struct UAkAudioEvent* akEvent;  // 0x0(0x8)
	struct AActor* Actor;  // 0x8(0x8)
	int32_t CallbackMask;  // 0x10(0x4)
	struct FDelegate PostEventCallback;  // 0x14(0x10)
	char pad_36[4];  // 0x24(0x4)
	struct TArray<struct FAkExternalSourceInfo> ExternalSources;  // 0x28(0x10)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bStopWhenAttachedToDestroyed : 1;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)
	struct FString EventName;  // 0x40(0x10)
	int32_t ReturnValue;  // 0x50(0x4)
	char pad_84[4];  // 0x54(0x4)

}; 
// Function AkAudio.AkCheckBox.GetCheckedState
// Size: 0x1(Inherited: 0x0) 
struct FGetCheckedState
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// DelegateFunction AkAudio.OnItemPropertySelectionChanged__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnItemPropertySelectionChanged__DelegateSignature
{
	struct FString PropertySelected;  // 0x0(0x10)

}; 
// ScriptStruct AkAudio.AkWwiseObjectDetails
// Size: 0x30(Inherited: 0x0) 
struct FAkWwiseObjectDetails
{
	struct FString ItemName;  // 0x0(0x10)
	struct FString ItemPath;  // 0x10(0x10)
	struct FString ItemId;  // 0x20(0x10)

}; 
// Function AkAudio.AkSlider.GetValue
// Size: 0x4(Inherited: 0x0) 
struct FGetValue
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AkAudio.AkGameplayStatics.GetSpeakerAngles
// Size: 0x28(Inherited: 0x0) 
struct FGetSpeakerAngles
{
	struct TArray<float> SpeakerAngles;  // 0x0(0x10)
	float HeightAngle;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct FString DeviceShareset;  // 0x18(0x10)

}; 
// DelegateFunction AkAudio.AkOnFloatValueChangedEvent__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FAkOnFloatValueChangedEvent__DelegateSignature
{
	float Value;  // 0x0(0x4)

}; 
// ScriptStruct AkAudio.AkOutputSettings
// Size: 0x18(Inherited: 0x0) 
struct FAkOutputSettings
{
	struct FString AudioDeviceSharesetName;  // 0x0(0x10)
	int32_t IdDevice;  // 0x10(0x4)
	uint8_t  PanRule;  // 0x14(0x1)
	uint8_t  ChannelConfig;  // 0x15(0x1)
	char pad_22[2];  // 0x16(0x2)

}; 
// DelegateFunction AkAudio.OnItemDropDetected__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnItemDropDetected__DelegateSignature
{
	struct FGuid ItemDroppedID;  // 0x0(0x10)

}; 
// Function AkAudio.AkWaapiCalls.GetSubscriptionID
// Size: 0x10(Inherited: 0x0) 
struct FGetSubscriptionID
{
	struct FAkWaapiSubscriptionId Subscription;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct AkAudio.AkMidiCc
// Size: 0x4(Inherited: 0x2) 
struct FAkMidiCc : public FAkMidiEventBase
{
	uint8_t  Cc;  // 0x2(0x1)
	char Value;  // 0x3(0x1)

}; 
// DelegateFunction AkAudio.OnPropertyDropDetected__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnPropertyDropDetected__DelegateSignature
{
	struct FString PropertyDropped;  // 0x0(0x10)

}; 
// DelegateFunction AkAudio.OnItemBoolPropertySelectionChanged__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnItemBoolPropertySelectionChanged__DelegateSignature
{
	struct FString PropertySelected;  // 0x0(0x10)

}; 
// ScriptStruct AkAudio.AkExternalSourceInfo
// Size: 0x38(Inherited: 0x0) 
struct FAkExternalSourceInfo
{
	struct FString ExternalSrcName;  // 0x0(0x10)
	uint8_t  CodecID;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct FString Filename;  // 0x18(0x10)
	struct UAkExternalMediaAsset* ExternalSourceAsset;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool IsStreamed : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// ScriptStruct AkAudio.AkWaapiFieldNames
// Size: 0x10(Inherited: 0x0) 
struct FAkWaapiFieldNames
{
	struct FString FieldName;  // 0x0(0x10)

}; 
// ScriptStruct AkAudio.AkAudioSession
// Size: 0xC(Inherited: 0x0) 
struct FAkAudioSession
{
	uint8_t  AudioSessionCategory;  // 0x0(0x4)
	uint32_t AudioSessionCategoryOptions;  // 0x4(0x4)
	uint8_t  AudioSessionMode;  // 0x8(0x4)

}; 
// DelegateFunction AkAudio.OnItemBoolPropertyDragDetected__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnItemBoolPropertyDragDetected__DelegateSignature
{
	struct FString PropertyDragged;  // 0x0(0x10)

}; 
// ScriptStruct AkAudio.AkMainOutputSettings
// Size: 0x28(Inherited: 0x0) 
struct FAkMainOutputSettings
{
	struct FString AudioDeviceShareset;  // 0x0(0x10)
	uint32_t DeviceID;  // 0x10(0x4)
	uint8_t  PanningRule;  // 0x14(0x4)
	uint8_t  ChannelConfigType;  // 0x18(0x4)
	uint32_t ChannelMask;  // 0x1C(0x4)
	uint32_t NumberOfChannels;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
// Size: 0xC(Inherited: 0x0) 
struct FGetPitchBend
{
	struct FAkMidiPitchBend AsPitchBend;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// DelegateFunction AkAudio.AkOnCheckBoxComponentStateChanged__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FAkOnCheckBoxComponentStateChanged__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsChecked : 1;  // 0x0(0x1)

}; 
// DelegateFunction AkAudio.OnWwiseItemDropDetected__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnWwiseItemDropDetected__DelegateSignature
{
	struct FGuid ItemDroppedID;  // 0x0(0x10)

}; 
// ScriptStruct AkAudio.AkSegmentInfo
// Size: 0x24(Inherited: 0x0) 
struct FAkSegmentInfo
{
	int32_t CurrentPosition;  // 0x0(0x4)
	int32_t PreEntryDuration;  // 0x4(0x4)
	int32_t ActiveDuration;  // 0x8(0x4)
	int32_t PostExitDuration;  // 0xC(0x4)
	int32_t RemainingLookAheadTime;  // 0x10(0x4)
	float BeatDuration;  // 0x14(0x4)
	float BarDuration;  // 0x18(0x4)
	float GridDuration;  // 0x1C(0x4)
	float GridOffset;  // 0x20(0x4)

}; 
// DelegateFunction AkAudio.OnBoolPropertyDropDetected__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnBoolPropertyDropDetected__DelegateSignature
{
	struct FString PropertyDropped;  // 0x0(0x10)

}; 
// Function AkAudio.AkGameplayStatics.StopActor
// Size: 0x8(Inherited: 0x0) 
struct FStopActor
{
	struct AActor* Actor;  // 0x0(0x8)

}; 
// DelegateFunction AkAudio.OnItemSelectionChanged__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnItemSelectionChanged__DelegateSignature
{
	struct FGuid ItemSelectedID;  // 0x0(0x10)

}; 
// ScriptStruct AkAudio.AkBoolPropertyToControl
// Size: 0x10(Inherited: 0x0) 
struct FAkBoolPropertyToControl
{
	struct FString ItemProperty;  // 0x0(0x10)

}; 
// ScriptStruct AkAudio.AkAdvancedInitializationSettings
// Size: 0x2C(Inherited: 0x0) 
struct FAkAdvancedInitializationSettings
{
	uint32_t IO_MemorySize;  // 0x0(0x4)
	uint32_t IO_Granularity;  // 0x4(0x4)
	float TargetAutoStreamBufferLength;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool UseStreamCache : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	uint32_t MaximumPinnedBytesInCache;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool EnableGameSyncPreparation : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	uint32_t ContinuousPlaybackLookAhead;  // 0x18(0x4)
	uint32_t MonitorQueuePoolSize;  // 0x1C(0x4)
	uint32_t MaximumHardwareTimeoutMs;  // 0x20(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool DebugOutOfRangeCheckEnabled : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	float DebugOutOfRangeLimit;  // 0x28(0x4)

}; 
// ScriptStruct AkAudio.AkSpatialAudioSettings
// Size: 0x20(Inherited: 0x0) 
struct FAkSpatialAudioSettings
{
	uint32_t MaxSoundPropagationDepth;  // 0x0(0x4)
	float MovementThreshold;  // 0x4(0x4)
	uint32_t NumberOfPrimaryRays;  // 0x8(0x4)
	uint32_t ReflectionOrder;  // 0xC(0x4)
	float MaximumPathLength;  // 0x10(0x4)
	float CPULimitPercentage;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool EnableDiffractionOnReflections : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool EnableGeometricDiffractionAndTransmission : 1;  // 0x19(0x1)
	char pad_26_1 : 7;  // 0x1A(0x1)
	bool CalcEmitterVirtualPosition : 1;  // 0x1A(0x1)
	char pad_27_1 : 7;  // 0x1B(0x1)
	bool UseObstruction : 1;  // 0x1B(0x1)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool UseOcclusion : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// Function AkAudio.AkGameplayStatics.UnloadBank
// Size: 0x38(Inherited: 0x0) 
struct FUnloadBank
{
	struct UAkAudioBank* Bank;  // 0x0(0x8)
	struct FString BankName;  // 0x8(0x10)
	struct FLatentActionInfo LatentInfo;  // 0x18(0x18)
	struct UObject* WorldContextObject;  // 0x30(0x8)

}; 
// DelegateFunction AkAudio.OnItemDragDetected__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FOnItemDragDetected__DelegateSignature
{
	struct FGuid ItemDraggedID;  // 0x0(0x10)
	struct FString ItemDraggedName;  // 0x10(0x10)

}; 
// DelegateFunction AkAudio.PostEventAsyncOutputPin__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FPostEventAsyncOutputPin__DelegateSignature
{
	int32_t PlayingID;  // 0x0(0x4)

}; 
// ScriptStruct AkAudio.AkPS5AdvancedInitializationSettings
// Size: 0x34(Inherited: 0x30) 
struct FAkPS5AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	char pad_48_1 : 7;  // 0x30(0x1)
	bool UseHardwareCodecLowLatencyMode : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool bVorbisHwAcceleration : 1;  // 0x31(0x1)
	char pad_50[2];  // 0x32(0x2)

}; 
// Function AkAudio.AkGameplayStatics.SetSpeakerAngles
// Size: 0x28(Inherited: 0x0) 
struct FSetSpeakerAngles
{
	struct TArray<float> SpeakerAngles;  // 0x0(0x10)
	float HeightAngle;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct FString DeviceShareset;  // 0x18(0x10)

}; 
// DelegateFunction AkAudio.PostEventAtLocationAsyncOutputPin__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FPostEventAtLocationAsyncOutputPin__DelegateSignature
{
	int32_t PlayingID;  // 0x0(0x4)

}; 
// ScriptStruct AkAudio.AkGeometrySurfaceOverride
// Size: 0x18(Inherited: 0x0) 
struct FAkGeometrySurfaceOverride
{
	struct UAkAcousticTexture* AcousticTexture;  // 0x0(0x8)
	char bEnableOcclusionOverride : 1;  // 0x8(0x1)
	char pad_8_1 : 7;  // 0x8(0x1)
	char pad_9[4];  // 0x9(0x4)
	float OcclusionValue;  // 0xC(0x4)
	float SurfaceArea;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
// Size: 0x30(Inherited: 0x2C) 
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
{
	char pad_44_1 : 7;  // 0x2C(0x1)
	bool EnableMultiCoreRendering : 1;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)

}; 
// ScriptStruct AkAudio.AkSurfaceEdgeInfo
// Size: 0x28(Inherited: 0x0) 
struct FAkSurfaceEdgeInfo
{
	char pad_0[40];  // 0x0(0x28)

}; 
// ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
// Size: 0x38(Inherited: 0x30) 
struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint32_t AudioAPI;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool RoundFrameSizeToHardwareSize : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)

}; 
// ScriptStruct AkAudio.AkWwiseItemToControl
// Size: 0x40(Inherited: 0x0) 
struct FAkWwiseItemToControl
{
	struct FAkWwiseObjectDetails ItemPicked;  // 0x0(0x30)
	struct FString ItemPath;  // 0x30(0x10)

}; 
// ScriptStruct AkAudio.AkMidiEventBase
// Size: 0x2(Inherited: 0x0) 
struct FAkMidiEventBase
{
	uint8_t  Type;  // 0x0(0x1)
	char Chan;  // 0x1(0x1)

}; 
// ScriptStruct AkAudio.AkMidiProgramChange
// Size: 0x3(Inherited: 0x2) 
struct FAkMidiProgramChange : public FAkMidiEventBase
{
	char ProgramNum;  // 0x2(0x1)

}; 
// ScriptStruct AkAudio.AkMidiChannelAftertouch
// Size: 0x3(Inherited: 0x2) 
struct FAkMidiChannelAftertouch : public FAkMidiEventBase
{
	char Value;  // 0x2(0x1)

}; 
// ScriptStruct AkAudio.AkMidiNoteAftertouch
// Size: 0x4(Inherited: 0x2) 
struct FAkMidiNoteAftertouch : public FAkMidiEventBase
{
	char Note;  // 0x2(0x1)
	char Value;  // 0x3(0x1)

}; 
// ScriptStruct AkAudio.AkMidiPitchBend
// Size: 0x8(Inherited: 0x2) 
struct FAkMidiPitchBend : public FAkMidiEventBase
{
	char ValueLsb;  // 0x2(0x1)
	char ValueMsb;  // 0x3(0x1)
	int32_t FullValue;  // 0x4(0x4)

}; 
// ScriptStruct AkAudio.AkMidiNoteOnOff
// Size: 0x4(Inherited: 0x2) 
struct FAkMidiNoteOnOff : public FAkMidiEventBase
{
	char Note;  // 0x2(0x1)
	char Velocity;  // 0x3(0x1)

}; 
// Function AkAudio.AkWaapiJsonManager.SetObjectField
// Size: 0x40(Inherited: 0x0) 
struct FSetObjectField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0(0x10)
	struct FAKWaapiJsonObject FieldValue;  // 0x10(0x10)
	struct FAKWaapiJsonObject Target;  // 0x20(0x10)
	struct FAKWaapiJsonObject ReturnValue;  // 0x30(0x10)

}; 
// ScriptStruct AkAudio.AkMidiGeneric
// Size: 0x4(Inherited: 0x2) 
struct FAkMidiGeneric : public FAkMidiEventBase
{
	char Param1;  // 0x2(0x1)
	char Param2;  // 0x3(0x1)

}; 
// ScriptStruct AkAudio.AkChannelMask
// Size: 0x4(Inherited: 0x0) 
struct FAkChannelMask
{
	int32_t ChannelMask;  // 0x0(0x4)

}; 
// Function AkAudio.AkCheckBox.GetAkItemId
// Size: 0x10(Inherited: 0x0) 
struct FGetAkItemId
{
	struct FGuid ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
// Size: 0x28(Inherited: 0x20) 
struct FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
{
	char pad_32_1 : 7;  // 0x20(0x1)
	bool InitializeSystemComms : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// ScriptStruct AkAudio.AkGeometryData
// Size: 0x50(Inherited: 0x0) 
struct FAkGeometryData
{
	struct TArray<struct FVector> Vertices;  // 0x0(0x10)
	struct TArray<struct FAkAcousticSurface> Surfaces;  // 0x10(0x10)
	struct TArray<struct FAkTriangle> Triangles;  // 0x20(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideAcousticTexture;  // 0x30(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideOcclusion;  // 0x40(0x10)

}; 
// ScriptStruct AkAudio.AkCommonInitializationSettings
// Size: 0x60(Inherited: 0x0) 
struct FAkCommonInitializationSettings
{
	uint32_t MaximumNumberOfMemoryPools;  // 0x0(0x4)
	uint32_t MaximumNumberOfPositioningPaths;  // 0x4(0x4)
	uint32_t CommandQueueSize;  // 0x8(0x4)
	uint32_t SamplesPerFrame;  // 0xC(0x4)
	struct FAkMainOutputSettings MainOutputSettings;  // 0x10(0x28)
	float StreamingLookAheadRatio;  // 0x38(0x4)
	uint16_t NumberOfRefillsInVoice;  // 0x3C(0x2)
	char pad_62[2];  // 0x3E(0x2)
	struct FAkSpatialAudioSettings SpatialAudioSettings;  // 0x40(0x20)

}; 
// ScriptStruct AkAudio.AkTriangle
// Size: 0x8(Inherited: 0x0) 
struct FAkTriangle
{
	uint16_t Point0;  // 0x0(0x2)
	uint16_t Point1;  // 0x2(0x2)
	uint16_t Point2;  // 0x4(0x2)
	uint16_t Surface;  // 0x6(0x2)

}; 
// ScriptStruct AkAudio.AkAcousticSurface
// Size: 0x18(Inherited: 0x0) 
struct FAkAcousticSurface
{
	uint32_t Texture;  // 0x0(0x4)
	float Occlusion;  // 0x4(0x4)
	struct FString Name;  // 0x8(0x10)

}; 
// ScriptStruct AkAudio.AkPluginInfo
// Size: 0x28(Inherited: 0x0) 
struct FAkPluginInfo
{
	struct FString Name;  // 0x0(0x10)
	uint32_t PluginID;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct FString dll;  // 0x18(0x10)

}; 
// ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
// Size: 0x34(Inherited: 0x30) 
struct FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	char pad_48_1 : 7;  // 0x30(0x1)
	bool UseHeadMountedDisplayAudioDevice : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)

}; 
// ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
// Size: 0x68(Inherited: 0x60) 
struct FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
{
	uint32_t SampleRate;  // 0x60(0x4)
	char pad_100[4];  // 0x64(0x4)

}; 
// ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
// Size: 0x30(Inherited: 0x0) 
struct FAkGeometrySurfacePropertiesToMap
{
	struct TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;  // 0x0(0x28)
	float OcclusionValue;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
// Size: 0x28(Inherited: 0x20) 
struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
{
	uint8_t  CommunicationSystem;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct AkAudio.AkCommunicationSettings
// Size: 0x20(Inherited: 0x0) 
struct FAkCommunicationSettings
{
	uint32_t PoolSize;  // 0x0(0x4)
	uint16_t DiscoveryBroadcastPort;  // 0x4(0x2)
	uint16_t CommandPort;  // 0x6(0x2)
	uint16_t NotificationPort;  // 0x8(0x2)
	char pad_10[6];  // 0xA(0x6)
	struct FString NetworkName;  // 0x10(0x10)

}; 
// ScriptStruct AkAudio.AkPropertyToControl
// Size: 0x10(Inherited: 0x0) 
struct FAkPropertyToControl
{
	struct FString ItemProperty;  // 0x0(0x10)

}; 
// Function AkAudio.AkMIDIEventCallbackInfo.GetCc
// Size: 0x5(Inherited: 0x0) 
struct FGetCc
{
	struct FAkMidiCc AsCc;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)

}; 
// ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
// Size: 0x38(Inherited: 0x30) 
struct FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint32_t ACPBatchBufferSize;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool UseHardwareCodecLowLatencyMode : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)

}; 
// ScriptStruct AkAudio.AkReverbDescriptor
// Size: 0x28(Inherited: 0x0) 
struct FAkReverbDescriptor
{
	char pad_0[40];  // 0x0(0x28)

}; 
// ScriptStruct AkAudio.AkAcousticTextureParams
// Size: 0x20(Inherited: 0x0) 
struct FAkAcousticTextureParams
{
	struct FVector4 AbsorptionValues;  // 0x0(0x10)
	char pad_16[16];  // 0x10(0x10)

}; 
// ScriptStruct AkAudio.AkSurfacePoly
// Size: 0x18(Inherited: 0x0) 
struct FAkSurfacePoly
{
	struct UAkAcousticTexture* Texture;  // 0x0(0x8)
	float Occlusion;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool EnableSurface : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	float SurfaceArea;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AkAudio.AkGameplayStatics.PostEventAtLocation
// Size: 0x40(Inherited: 0x0) 
struct FPostEventAtLocation
{
	struct UAkAudioEvent* akEvent;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	struct FRotator Orientation;  // 0x14(0xC)
	struct FString EventName;  // 0x20(0x10)
	struct UObject* WorldContextObject;  // 0x30(0x8)
	int32_t ReturnValue;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 
// Function AkAudio.AkGameplayStatics.IsGame
// Size: 0x10(Inherited: 0x0) 
struct FIsGame
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function AkAudio.AkGameObject.PostAssociatedAkEvent
// Size: 0x30(Inherited: 0x0) 
struct FPostAssociatedAkEvent
{
	int32_t CallbackMask;  // 0x0(0x4)
	struct FDelegate PostEventCallback;  // 0x4(0x10)
	char pad_20[4];  // 0x14(0x4)
	struct TArray<struct FAkExternalSourceInfo> ExternalSources;  // 0x18(0x10)
	int32_t ReturnValue;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct AkAudio.AkSurfaceEdgeVerts
// Size: 0x18(Inherited: 0x0) 
struct FAkSurfaceEdgeVerts
{
	char pad_0[24];  // 0x0(0x18)

}; 
// ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
// Size: 0x38(Inherited: 0x30) 
struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	char pad_48_1 : 7;  // 0x30(0x1)
	bool UseHeadMountedDisplayAudioDevice : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	uint32_t MaxSystemAudioObjects;  // 0x34(0x4)

}; 
// ScriptStruct AkAudio.AkWinGDKAdvancedInitializationSettings
// Size: 0x34(Inherited: 0x30) 
struct FAkWinGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	char pad_48_1 : 7;  // 0x30(0x1)
	bool UseHeadMountedDisplayAudioDevice : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)

}; 
// ScriptStruct AkAudio.AkXboxOneGDKApuHeapInitializationSettings
// Size: 0x8(Inherited: 0x0) 
struct FAkXboxOneGDKApuHeapInitializationSettings
{
	uint32_t CachedSize;  // 0x0(0x4)
	uint32_t NonCachedSize;  // 0x4(0x4)

}; 
// ScriptStruct AkAudio.AkXboxOneGDKAdvancedInitializationSettings
// Size: 0x34(Inherited: 0x30) 
struct FAkXboxOneGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint16_t MaximumNumberOfXMAVoices;  // 0x30(0x2)
	char pad_50_1 : 7;  // 0x32(0x1)
	bool UseHardwareCodecLowLatencyMode : 1;  // 0x32(0x1)
	char pad_51[1];  // 0x33(0x1)

}; 
// ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
// Size: 0x8(Inherited: 0x0) 
struct FAkXboxOneApuHeapInitializationSettings
{
	uint32_t CachedSize;  // 0x0(0x4)
	uint32_t NonCachedSize;  // 0x4(0x4)

}; 
// ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
// Size: 0x34(Inherited: 0x30) 
struct FAkXboxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint16_t MaximumNumberOfXMAVoices;  // 0x30(0x2)
	char pad_50_1 : 7;  // 0x32(0x1)
	bool UseHardwareCodecLowLatencyMode : 1;  // 0x32(0x1)
	char pad_51[1];  // 0x33(0x1)

}; 
// ScriptStruct AkAudio.AkXSXApuHeapInitializationSettings
// Size: 0x8(Inherited: 0x0) 
struct FAkXSXApuHeapInitializationSettings
{
	uint32_t CachedSize;  // 0x0(0x4)
	uint32_t NonCachedSize;  // 0x4(0x4)

}; 
// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
// Size: 0x30(Inherited: 0x0) 
struct FPostAssociatedAkEventAndWaitForEnd
{
	struct TArray<struct FAkExternalSourceInfo> ExternalSources;  // 0x0(0x10)
	struct FLatentActionInfo LatentInfo;  // 0x10(0x18)
	int32_t ReturnValue;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct AkAudio.AkXSXAdvancedInitializationSettings
// Size: 0x38(Inherited: 0x30) 
struct FAkXSXAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint16_t MaximumNumberOfXMAVoices;  // 0x30(0x2)
	char pad_50_1 : 7;  // 0x32(0x1)
	bool UseHardwareCodecLowLatencyMode : 1;  // 0x32(0x1)
	char pad_51[1];  // 0x33(0x1)
	uint16_t MaximumNumberOfOpusVoices;  // 0x34(0x2)
	char pad_54[2];  // 0x36(0x2)

}; 
// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// Size: 0x28(Inherited: 0x20) 
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
	struct UMovieSceneAkAudioEventSection* Section;  // 0x20(0x8)

}; 
// Function AkAudio.AkWaapiJsonManager.GetIntegerField
// Size: 0x28(Inherited: 0x0) 
struct FGetIntegerField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0(0x10)
	struct FAKWaapiJsonObject Target;  // 0x10(0x10)
	int32_t ReturnValue;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
// Size: 0x28(Inherited: 0x0) 
struct FExecuteActionOnEvent
{
	struct UAkAudioEvent* akEvent;  // 0x0(0x8)
	uint8_t  ActionType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct AActor* Actor;  // 0x10(0x8)
	int32_t TransitionDuration;  // 0x18(0x4)
	uint8_t  FadeCurve;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	int32_t PlayingID;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// Size: 0x28(Inherited: 0x20) 
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
	struct UMovieSceneAkAudioRTPCSection* Section;  // 0x20(0x8)

}; 
// ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
// Size: 0x30(Inherited: 0x0) 
struct FMovieSceneFloatChannelSerializationHelper
{
	char ERichCurveExtrapolation PreInfinityExtrap;  // 0x0(0x1)
	char ERichCurveExtrapolation PostInfinityExtrap;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct TArray<int32_t> Times;  // 0x8(0x10)
	struct TArray<struct FMovieSceneFloatValueSerializationHelper> Values;  // 0x18(0x10)
	float DefaultValue;  // 0x28(0x4)
	char pad_44_1 : 7;  // 0x2C(0x1)
	bool bHasDefaultValue : 1;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)

}; 
// ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
// Size: 0x1C(Inherited: 0x0) 
struct FMovieSceneFloatValueSerializationHelper
{
	float Value;  // 0x0(0x4)
	char ERichCurveInterpMode InterpMode;  // 0x4(0x1)
	char ERichCurveTangentMode TangentMode;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)
	struct FMovieSceneTangentDataSerializationHelper Tangent;  // 0x8(0x14)

}; 
// Function AkAudio.AkWaapiJsonManager.GetNumberField
// Size: 0x28(Inherited: 0x0) 
struct FGetNumberField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0(0x10)
	struct FAKWaapiJsonObject Target;  // 0x10(0x10)
	float ReturnValue;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
// Size: 0x18(Inherited: 0x0) 
struct FConv_FAkWaapiSubscriptionIdToString
{
	struct FAkWaapiSubscriptionId INAkWaapiSubscriptionId;  // 0x0(0x8)
	struct FString ReturnValue;  // 0x8(0x10)

}; 
// ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
// Size: 0x14(Inherited: 0x0) 
struct FMovieSceneTangentDataSerializationHelper
{
	float ArriveTangent;  // 0x0(0x4)
	float LeaveTangent;  // 0x4(0x4)
	char ERichCurveTangentWeightMode TangentWeightMode;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float ArriveTangentWeight;  // 0xC(0x4)
	float LeaveTangentWeight;  // 0x10(0x4)

}; 
// Function AkAudio.AkAcousticPortal.GetCurrentState
// Size: 0x1(Inherited: 0x0) 
struct FGetCurrentState
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AkAudio.AkRoomComponent.GetPrimitiveParent
// Size: 0x8(Inherited: 0x0) 
struct FGetPrimitiveParent
{
	struct UPrimitiveComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function AkAudio.AkPortalComponent.PortalPlacementValid
// Size: 0x1(Inherited: 0x0) 
struct FPortalPlacementValid
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
// Size: 0x1(Inherited: 0x0) 
struct FMigrateMultiCoreRendering
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool NewValue : 1;  // 0x0(0x1)

}; 
// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
// Size: 0x20(Inherited: 0x0) 
struct FConv_FAKWaapiJsonObjectToString
{
	struct FAKWaapiJsonObject INAKWaapiJsonObject;  // 0x0(0x10)
	struct FString ReturnValue;  // 0x10(0x10)

}; 
// Function AkAudio.AkAudioEvent.GetIsInfinite
// Size: 0x1(Inherited: 0x0) 
struct FGetIsInfinite
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxAttenuationRadius
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AkAudio.AkAudioEvent.GetMaximumDuration
// Size: 0x4(Inherited: 0x0) 
struct FGetMaximumDuration
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AkAudio.AkAudioEvent.GetMinimumDuration
// Size: 0x4(Inherited: 0x0) 
struct FGetMinimumDuration
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AkAudio.AkGameplayStatics.GetRTPCValue
// Size: 0x28(Inherited: 0x0) 
struct FGetRTPCValue
{
	struct UAkRtpc* RTPCValue;  // 0x0(0x8)
	int32_t PlayingID;  // 0x8(0x4)
	uint8_t  InputValueType;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	float Value;  // 0x10(0x4)
	uint8_t  OutputValueType;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct AActor* Actor;  // 0x18(0x8)
	struct FName RTPC;  // 0x20(0x8)

}; 
// Function AkAudio.AkGameplayStatics.SetBusConfig
// Size: 0x18(Inherited: 0x0) 
struct FSetBusConfig
{
	struct FString BusName;  // 0x0(0x10)
	uint8_t  ChannelConfiguration;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function AkAudio.AkGameObject.PostAkEvent
// Size: 0x48(Inherited: 0x0) 
struct FPostAkEvent
{
	struct UAkAudioEvent* akEvent;  // 0x0(0x8)
	int32_t CallbackMask;  // 0x8(0x4)
	struct FDelegate PostEventCallback;  // 0xC(0x10)
	char pad_28[4];  // 0x1C(0x4)
	struct TArray<struct FAkExternalSourceInfo> ExternalSources;  // 0x20(0x10)
	struct FString in_EventName;  // 0x30(0x10)
	int32_t ReturnValue;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 
// Function AkAudio.AkSlider.SetSliderHandleColor
// Size: 0x10(Inherited: 0x0) 
struct FSetSliderHandleColor
{
	struct FLinearColor InValue;  // 0x0(0x10)

}; 
// Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
// Size: 0x8(Inherited: 0x0) 
struct FAssociateAkTextureSetComponent
{
	struct UAkAcousticTextureSetComponent* textureSetComponent;  // 0x0(0x8)

}; 
// Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
// Size: 0x10(Inherited: 0x0) 
struct FGetAvailableAudioCultures
{
	struct TArray<struct FString> ReturnValue;  // 0x0(0x10)

}; 
// Function AkAudio.AkGameObject.PostAkEventAsync
// Size: 0x50(Inherited: 0x0) 
struct FPostAkEventAsync
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UAkAudioEvent* akEvent;  // 0x8(0x8)
	int32_t PlayingID;  // 0x10(0x4)
	int32_t CallbackMask;  // 0x14(0x4)
	struct FDelegate PostEventCallback;  // 0x18(0x10)
	struct TArray<struct FAkExternalSourceInfo> ExternalSources;  // 0x28(0x10)
	struct FLatentActionInfo LatentInfo;  // 0x38(0x18)

}; 
// Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
// Size: 0x30(Inherited: 0x0) 
struct FPostEventAtLocationAsync
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UAkAudioEvent* akEvent;  // 0x8(0x8)
	struct FVector Location;  // 0x10(0xC)
	struct FRotator Orientation;  // 0x1C(0xC)
	struct UPostEventAtLocationAsync* ReturnValue;  // 0x28(0x8)

}; 
// Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
// Size: 0x50(Inherited: 0x0) 
struct FPostAssociatedAkEventAsync
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	int32_t CallbackMask;  // 0x8(0x4)
	struct FDelegate PostEventCallback;  // 0xC(0x10)
	char pad_28[4];  // 0x1C(0x4)
	struct TArray<struct FAkExternalSourceInfo> ExternalSources;  // 0x20(0x10)
	struct FLatentActionInfo LatentInfo;  // 0x30(0x18)
	int32_t PlayingID;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)

}; 
// Function AkAudio.AkGameplayStatics.SetRTPCValue
// Size: 0x20(Inherited: 0x0) 
struct FSetRTPCValue
{
	struct UAkRtpc* RTPCValue;  // 0x0(0x8)
	float Value;  // 0x8(0x4)
	int32_t InterpolationTimeMs;  // 0xC(0x4)
	struct AActor* Actor;  // 0x10(0x8)
	struct FName RTPC;  // 0x18(0x8)

}; 
// Function AkAudio.AkComponent.GetAttenuationRadius
// Size: 0x4(Inherited: 0x0) 
struct FGetAttenuationRadius
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
// Size: 0x48(Inherited: 0x0) 
struct FPostAkEventAndWaitForEnd
{
	struct UAkAudioEvent* akEvent;  // 0x0(0x8)
	struct FString in_EventName;  // 0x8(0x10)
	struct TArray<struct FAkExternalSourceInfo> ExternalSources;  // 0x18(0x10)
	struct FLatentActionInfo LatentInfo;  // 0x28(0x18)
	int32_t ReturnValue;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 
// Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
// Size: 0x38(Inherited: 0x0) 
struct FPostAkEventAndWaitForEndAsync
{
	struct UAkAudioEvent* akEvent;  // 0x0(0x8)
	int32_t PlayingID;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<struct FAkExternalSourceInfo> ExternalSources;  // 0x10(0x10)
	struct FLatentActionInfo LatentInfo;  // 0x20(0x18)

}; 
// Function AkAudio.AkComponent.PostAkEventByName
// Size: 0x18(Inherited: 0x0) 
struct FPostAkEventByName
{
	struct FString in_EventName;  // 0x0(0x10)
	int32_t ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
// Size: 0x30(Inherited: 0x0) 
struct FPostAssociatedAkEventAndWaitForEndAsync
{
	int32_t PlayingID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FAkExternalSourceInfo> ExternalSources;  // 0x8(0x10)
	struct FLatentActionInfo LatentInfo;  // 0x18(0x18)

}; 
// Function AkAudio.AkGameplayStatics.PostTrigger
// Size: 0x18(Inherited: 0x0) 
struct FPostTrigger
{
	struct UAkTrigger* TriggerValue;  // 0x0(0x8)
	struct AActor* Actor;  // 0x8(0x8)
	struct FName Trigger;  // 0x10(0x8)

}; 
// Function AkAudio.AkComponent.SetAttenuationScalingFactor
// Size: 0x4(Inherited: 0x0) 
struct FSetAttenuationScalingFactor
{
	float Value;  // 0x0(0x4)

}; 
// Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
// Size: 0x10(Inherited: 0x0) 
struct FSetEarlyReflectionsAuxBus
{
	struct FString AuxBusName;  // 0x0(0x10)

}; 
// Function AkAudio.AkComponent.SetEarlyReflectionsVolume
// Size: 0x4(Inherited: 0x0) 
struct FSetEarlyReflectionsVolume
{
	float SendVolume;  // 0x0(0x4)

}; 
// Function AkAudio.AkComponent.SetGameObjectRadius
// Size: 0x8(Inherited: 0x0) 
struct FSetGameObjectRadius
{
	float in_outerRadius;  // 0x0(0x4)
	float in_innerRadius;  // 0x4(0x4)

}; 
// Function AkAudio.AkComponent.SetListeners
// Size: 0x10(Inherited: 0x0) 
struct FSetListeners
{
	struct TArray<struct UAkComponent*> Listeners;  // 0x0(0x10)

}; 
// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
// Size: 0x10(Inherited: 0x0) 
struct FSetOutputBusVolume
{
	float BusVolume;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct AActor* Actor;  // 0x8(0x8)

}; 
// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
// Size: 0x1(Inherited: 0x0) 
struct FSetStopWhenOwnerDestroyed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bStopWhenOwnerDestroyed : 1;  // 0x0(0x1)

}; 
// Function AkAudio.AkGameplayStatics.SetSwitch
// Size: 0x20(Inherited: 0x0) 
struct FSetSwitch
{
	struct UAkSwitchValue* SwitchValue;  // 0x0(0x8)
	struct AActor* Actor;  // 0x8(0x8)
	struct FName SwitchGroup;  // 0x10(0x8)
	struct FName SwitchState;  // 0x18(0x8)

}; 
// Function AkAudio.AkGameplayStatics.UseEarlyReflections
// Size: 0x30(Inherited: 0x0) 
struct FUseEarlyReflections
{
	struct AActor* Actor;  // 0x0(0x8)
	struct UAkAuxBus* AuxBus;  // 0x8(0x8)
	int32_t Order;  // 0x10(0x4)
	float BusSendGain;  // 0x14(0x4)
	float MaxPathLength;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool SpotReflectors : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FString AuxBusName;  // 0x20(0x10)

}; 
// Function AkAudio.AkGameplayStatics.UseReverbVolumes
// Size: 0x10(Inherited: 0x0) 
struct FUseReverbVolumes
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool inUseReverbVolumes : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct AActor* Actor;  // 0x8(0x8)

}; 
// Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
// Size: 0x4(Inherited: 0x0) 
struct FPostAssociatedAudioInputEvent
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function AkAudio.AkCheckBox.GetAkProperty
// Size: 0x10(Inherited: 0x0) 
struct FGetAkProperty
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function AkAudio.AkWaapiJsonManager.GetStringField
// Size: 0x30(Inherited: 0x0) 
struct FGetStringField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0(0x10)
	struct FAKWaapiJsonObject Target;  // 0x10(0x10)
	struct FString ReturnValue;  // 0x20(0x10)

}; 
// Function AkAudio.AkCheckBox.IsChecked
// Size: 0x1(Inherited: 0x0) 
struct FIsChecked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AkAudio.AkCheckBox.IsPressed
// Size: 0x1(Inherited: 0x0) 
struct FIsPressed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
// Size: 0x20(Inherited: 0x0) 
struct FConv_FAkWaapiFieldNamesToString
{
	struct FAkWaapiFieldNames INAkWaapiFieldNames;  // 0x0(0x10)
	struct FString ReturnValue;  // 0x10(0x10)

}; 
// Function AkAudio.AkCheckBox.SetAkBoolProperty
// Size: 0x10(Inherited: 0x0) 
struct FSetAkBoolProperty
{
	struct FString ItemProperty;  // 0x0(0x10)

}; 
// Function AkAudio.AkCheckBox.SetAkItemId
// Size: 0x10(Inherited: 0x0) 
struct FSetAkItemId
{
	struct FGuid ItemId;  // 0x0(0x10)

}; 
// Function AkAudio.AkCheckBox.SetCheckedState
// Size: 0x1(Inherited: 0x0) 
struct FSetCheckedState
{
	uint8_t  InCheckedState;  // 0x0(0x1)

}; 
// Function AkAudio.AkCheckBox.SetIsChecked
// Size: 0x1(Inherited: 0x0) 
struct FSetIsChecked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InIsChecked : 1;  // 0x0(0x1)

}; 
// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
// Size: 0x10(Inherited: 0x0) 
struct FAddOutputCaptureMarker
{
	struct FString MarkerText;  // 0x0(0x10)

}; 
// Function AkAudio.AkGameplayStatics.CancelEventCallback
// Size: 0x10(Inherited: 0x0) 
struct FCancelEventCallback
{
	struct FDelegate PostEventCallback;  // 0x0(0x10)

}; 
// Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
// Size: 0x10(Inherited: 0x0) 
struct FExecuteActionOnPlayingID
{
	uint8_t  ActionType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t PlayingID;  // 0x4(0x4)
	int32_t TransitionDuration;  // 0x8(0x4)
	uint8_t  FadeCurve;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
// Size: 0x18(Inherited: 0x0) 
struct FGetAkAudioTypeUserData
{
	struct UAkAudioType* Instance;  // 0x0(0x8)
	UObject* Type;  // 0x8(0x8)
	struct UObject* ReturnValue;  // 0x10(0x8)

}; 
// Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
// Size: 0x4(Inherited: 0x0) 
struct FGetOcclusionScalingFactor
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AkAudio.AkGameplayStatics.GetAkComponent
// Size: 0x30(Inherited: 0x0) 
struct FGetAkComponent
{
	struct USceneComponent* AttachToComponent;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ComponentCreated : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	struct FName AttachPointName;  // 0xC(0x8)
	struct FVector Location;  // 0x14(0xC)
	char EAttachLocation LocationType;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)
	struct UAkComponent* ReturnValue;  // 0x28(0x8)

}; 
// Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
// Size: 0x18(Inherited: 0x0) 
struct FGetAkMediaAssetUserData
{
	struct UAkMediaAsset* Instance;  // 0x0(0x8)
	UObject* Type;  // 0x8(0x8)
	struct UObject* ReturnValue;  // 0x10(0x8)

}; 
// Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
// Size: 0x40(Inherited: 0x0) 
struct FSetArrayStringFields
{
	struct FAkWaapiFieldNames FieldName;  // 0x0(0x10)
	struct TArray<struct FString> FieldStringValues;  // 0x10(0x10)
	struct FAKWaapiJsonObject Target;  // 0x20(0x10)
	struct FAKWaapiJsonObject ReturnValue;  // 0x30(0x10)

}; 
// Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
// Size: 0x10(Inherited: 0x0) 
struct FGetCurrentAudioCulture
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function AkAudio.AkGameplayStatics.IsEditor
// Size: 0x1(Inherited: 0x0) 
struct FIsEditor
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AkAudio.AkGameplayStatics.LoadBank
// Size: 0x38(Inherited: 0x0) 
struct FLoadBank
{
	struct UAkAudioBank* Bank;  // 0x0(0x8)
	struct FString BankName;  // 0x8(0x10)
	struct FLatentActionInfo LatentInfo;  // 0x18(0x18)
	struct UObject* WorldContextObject;  // 0x30(0x8)

}; 
// Function AkAudio.AkGameplayStatics.LoadBankAsync
// Size: 0x18(Inherited: 0x0) 
struct FLoadBankAsync
{
	struct UAkAudioBank* Bank;  // 0x0(0x8)
	struct FDelegate BankLoadedCallback;  // 0x8(0x10)

}; 
// Function AkAudio.AkGameplayStatics.LoadBankByName
// Size: 0x10(Inherited: 0x0) 
struct FLoadBankByName
{
	struct FString BankName;  // 0x0(0x10)

}; 
// Function AkAudio.AkWaapiJsonManager.GetArrayField
// Size: 0x30(Inherited: 0x0) 
struct FGetArrayField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0(0x10)
	struct FAKWaapiJsonObject Target;  // 0x10(0x10)
	struct TArray<struct FAKWaapiJsonObject> ReturnValue;  // 0x20(0x10)

}; 
// Function AkAudio.AkGameplayStatics.LoadBanks
// Size: 0x18(Inherited: 0x0) 
struct FLoadBanks
{
	struct TArray<struct UAkAudioBank*> SoundBanks;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool SynchronizeSoundBanks : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
// Size: 0x58(Inherited: 0x0) 
struct FPostAndWaitForEndOfEvent
{
	struct UAkAudioEvent* akEvent;  // 0x0(0x8)
	struct AActor* Actor;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bStopWhenAttachedToDestroyed : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct TArray<struct FAkExternalSourceInfo> ExternalSources;  // 0x18(0x10)
	struct FString EventName;  // 0x28(0x10)
	struct FLatentActionInfo LatentInfo;  // 0x38(0x18)
	int32_t ReturnValue;  // 0x50(0x4)
	char pad_84[4];  // 0x54(0x4)

}; 
// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
// Size: 0x20(Inherited: 0x0) 
struct FConv_FAkWaapiUriToString
{
	struct FAkWaapiUri INAkWaapiUri;  // 0x0(0x10)
	struct FString ReturnValue;  // 0x10(0x10)

}; 
// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
// Size: 0x40(Inherited: 0x0) 
struct FPostAndWaitForEndOfEventAsync
{
	struct UAkAudioEvent* akEvent;  // 0x0(0x8)
	struct AActor* Actor;  // 0x8(0x8)
	int32_t PlayingID;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bStopWhenAttachedToDestroyed : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct TArray<struct FAkExternalSourceInfo> ExternalSources;  // 0x18(0x10)
	struct FLatentActionInfo LatentInfo;  // 0x28(0x18)

}; 
// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
// Size: 0x30(Inherited: 0x0) 
struct FPostEventAtLocationByName
{
	struct FString EventName;  // 0x0(0x10)
	struct FVector Location;  // 0x10(0xC)
	struct FRotator Orientation;  // 0x1C(0xC)
	struct UObject* WorldContextObject;  // 0x28(0x8)

}; 
// Function AkAudio.AkGameplayStatics.PostEventAttached
// Size: 0x38(Inherited: 0x0) 
struct FPostEventAttached
{
	struct UAkAudioEvent* akEvent;  // 0x0(0x8)
	struct AActor* Actor;  // 0x8(0x8)
	struct FName AttachPointName;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bStopWhenAttachedToDestroyed : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct FString EventName;  // 0x20(0x10)
	int32_t ReturnValue;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function AkAudio.AkGameplayStatics.PostEventByName
// Size: 0x20(Inherited: 0x0) 
struct FPostEventByName
{
	struct FString EventName;  // 0x0(0x10)
	struct AActor* Actor;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bStopWhenAttachedToDestroyed : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function AkAudio.AkGameplayStatics.ReplaceMainOutput
// Size: 0x18(Inherited: 0x0) 
struct FReplaceMainOutput
{
	struct FAkOutputSettings MainOutputSettings;  // 0x0(0x18)

}; 
// Function AkAudio.AkGameplayStatics.ResetRTPCValue
// Size: 0x20(Inherited: 0x0) 
struct FResetRTPCValue
{
	struct UAkRtpc* RTPCValue;  // 0x0(0x8)
	int32_t InterpolationTimeMs;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct AActor* Actor;  // 0x10(0x8)
	struct FName RTPC;  // 0x18(0x8)

}; 
// Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
// Size: 0x30(Inherited: 0x0) 
struct FSetCurrentAudioCulture
{
	struct FString AudioCulture;  // 0x0(0x10)
	struct FLatentActionInfo LatentInfo;  // 0x10(0x18)
	struct UObject* WorldContextObject;  // 0x28(0x8)

}; 
// Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
// Size: 0x20(Inherited: 0x0) 
struct FSetCurrentAudioCultureAsync
{
	struct FString AudioCulture;  // 0x0(0x10)
	struct FDelegate Completed;  // 0x10(0x10)

}; 
// Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
// Size: 0x18(Inherited: 0x0) 
struct FSetGameObjectToPortalObstruction
{
	struct UAkComponent* GameObjectAkComponent;  // 0x0(0x8)
	struct UAkPortalComponent* PortalComponent;  // 0x8(0x8)
	float ObstructionValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
// Size: 0x30(Inherited: 0x0) 
struct FSetMultipleChannelEmitterPositions
{
	struct UAkComponent* GameObjectAkComponent;  // 0x0(0x8)
	struct TArray<uint8_t > ChannelMasks;  // 0x8(0x10)
	struct TArray<struct FTransform> Positions;  // 0x18(0x10)
	uint8_t  MultiPositionType;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)

}; 
// Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
// Size: 0x30(Inherited: 0x0) 
struct FSetMultipleChannelMaskEmitterPositions
{
	struct UAkComponent* GameObjectAkComponent;  // 0x0(0x8)
	struct TArray<struct FAkChannelMask> ChannelMasks;  // 0x8(0x10)
	struct TArray<struct FTransform> Positions;  // 0x18(0x10)
	uint8_t  MultiPositionType;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)

}; 
// Function AkAudio.AkGameplayStatics.SetMultiplePositions
// Size: 0x20(Inherited: 0x0) 
struct FSetMultiplePositions
{
	struct UAkComponent* GameObjectAkComponent;  // 0x0(0x8)
	struct TArray<struct FTransform> Positions;  // 0x8(0x10)
	uint8_t  MultiPositionType;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
// Size: 0x10(Inherited: 0x0) 
struct FSetOcclusionRefreshInterval
{
	float RefreshInterval;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct AActor* Actor;  // 0x8(0x8)

}; 
// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
// Size: 0x4(Inherited: 0x0) 
struct FSetOcclusionScalingFactor
{
	float ScalingFactor;  // 0x0(0x4)

}; 
// Function AkAudio.AkWaapiCalls.SubscribeToWaapi
// Size: 0x50(Inherited: 0x0) 
struct FSubscribeToWaapi
{
	struct FAkWaapiUri WaapiUri;  // 0x0(0x10)
	struct FAKWaapiJsonObject WaapiOptions;  // 0x10(0x10)
	struct FDelegate Callback;  // 0x20(0x10)
	struct FAkWaapiSubscriptionId SubscriptionId;  // 0x30(0x8)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool SubscriptionDone : 1;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)
	struct FAKWaapiJsonObject ReturnValue;  // 0x40(0x10)

}; 
// Function AkAudio.AkGameplayStatics.SetPanningRule
// Size: 0x1(Inherited: 0x0) 
struct FSetPanningRule
{
	uint8_t  PanRule;  // 0x0(0x1)

}; 
// Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
// Size: 0x10(Inherited: 0x0) 
struct FSetPortalObstructionAndOcclusion
{
	struct UAkPortalComponent* PortalComponent;  // 0x0(0x8)
	float ObstructionValue;  // 0x8(0x4)
	float OcclusionValue;  // 0xC(0x4)

}; 
// Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
// Size: 0x18(Inherited: 0x0) 
struct FSetPortalToPortalObstruction
{
	struct UAkPortalComponent* PortalComponent0;  // 0x0(0x8)
	struct UAkPortalComponent* PortalComponent1;  // 0x8(0x8)
	float ObstructionValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AkAudio.AkGameplayStatics.SetReflectionsOrder
// Size: 0x8(Inherited: 0x0) 
struct FSetReflectionsOrder
{
	int32_t Order;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool RefreshPaths : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function AkAudio.AkGameplayStatics.SetState
// Size: 0x18(Inherited: 0x0) 
struct FSetState
{
	struct UAkStateValue* StateValue;  // 0x0(0x8)
	struct FName StateGroup;  // 0x8(0x8)
	struct FName State;  // 0x10(0x8)

}; 
// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
// Size: 0x50(Inherited: 0x0) 
struct FSpawnAkComponentAtLocation
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UAkAudioEvent* akEvent;  // 0x8(0x8)
	struct FVector Location;  // 0x10(0xC)
	struct FRotator Orientation;  // 0x1C(0xC)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool AutoPost : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct FString EventName;  // 0x30(0x10)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool AutoDestroy : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)
	struct UAkComponent* ReturnValue;  // 0x48(0x8)

}; 
// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
// Size: 0x8(Inherited: 0x0) 
struct FStartAllAmbientSounds
{
	struct UObject* WorldContextObject;  // 0x0(0x8)

}; 
// Function AkAudio.AkGameplayStatics.StartOutputCapture
// Size: 0x10(Inherited: 0x0) 
struct FStartOutputCapture
{
	struct FString Filename;  // 0x0(0x10)

}; 
// Function AkAudio.AkGameplayStatics.StartProfilerCapture
// Size: 0x10(Inherited: 0x0) 
struct FStartProfilerCapture
{
	struct FString Filename;  // 0x0(0x10)

}; 
// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
// Size: 0x8(Inherited: 0x0) 
struct FStopAllAmbientSounds
{
	struct UObject* WorldContextObject;  // 0x0(0x8)

}; 
// Function AkAudio.AkGameplayStatics.UnloadBankAsync
// Size: 0x18(Inherited: 0x0) 
struct FUnloadBankAsync
{
	struct UAkAudioBank* Bank;  // 0x0(0x8)
	struct FDelegate BankUnloadedCallback;  // 0x8(0x10)

}; 
// Function AkAudio.AkGameplayStatics.UnloadBankByName
// Size: 0x10(Inherited: 0x0) 
struct FUnloadBankByName
{
	struct FString BankName;  // 0x0(0x10)

}; 
// Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
// Size: 0x1(Inherited: 0x0) 
struct FGetChannel
{
	char ReturnValue;  // 0x0(0x1)

}; 
// Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
// Size: 0x4(Inherited: 0x0) 
struct FGetChannelAftertouch
{
	struct FAkMidiChannelAftertouch AsChannelAftertouch;  // 0x0(0x3)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool ReturnValue : 1;  // 0x3(0x1)

}; 
// Function AkAudio.AkSlider.SetStepSize
// Size: 0x4(Inherited: 0x0) 
struct FSetStepSize
{
	float InValue;  // 0x0(0x4)

}; 
// Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
// Size: 0x5(Inherited: 0x0) 
struct FGetGeneric
{
	struct FAkMidiGeneric AsGeneric;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)

}; 
// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
// Size: 0x5(Inherited: 0x0) 
struct FGetNoteAftertouch
{
	struct FAkMidiNoteAftertouch AsNoteAftertouch;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)

}; 
// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
// Size: 0x5(Inherited: 0x0) 
struct FGetNoteOff
{
	struct FAkMidiNoteOnOff AsNoteOff;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)

}; 
// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
// Size: 0x5(Inherited: 0x0) 
struct FGetNoteOn
{
	struct FAkMidiNoteOnOff AsNoteOn;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)

}; 
// Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
// Size: 0x4(Inherited: 0x0) 
struct FGetProgramChange
{
	struct FAkMidiProgramChange AsProgramChange;  // 0x0(0x3)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool ReturnValue : 1;  // 0x3(0x1)

}; 
// Function AkAudio.AkMIDIEventCallbackInfo.GetType
// Size: 0x1(Inherited: 0x0) 
struct FGetType
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
// Size: 0x20(Inherited: 0x0) 
struct FConv_FAkBoolPropertyToControlToString
{
	struct FAkBoolPropertyToControl INAkBoolPropertyToControl;  // 0x0(0x10)
	struct FString ReturnValue;  // 0x10(0x10)

}; 
// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
// Size: 0x28(Inherited: 0x0) 
struct FConv_FAkBoolPropertyToControlToText
{
	struct FAkBoolPropertyToControl INAkBoolPropertyToControl;  // 0x0(0x10)
	struct FText ReturnValue;  // 0x10(0x18)

}; 
// Function AkAudio.AkWwiseTree.GetSearchText
// Size: 0x10(Inherited: 0x0) 
struct FGetSearchText
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function AkAudio.AkItemProperties.GetSelectedProperty
// Size: 0x10(Inherited: 0x0) 
struct FGetSelectedProperty
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function AkAudio.AkWwiseTree.SetSearchText
// Size: 0x10(Inherited: 0x0) 
struct FSetSearchText
{
	struct FString newText;  // 0x0(0x10)

}; 
// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
// Size: 0x20(Inherited: 0x0) 
struct FConv_FAkPropertyToControlToString
{
	struct FAkPropertyToControl INAkPropertyToControl;  // 0x0(0x10)
	struct FString ReturnValue;  // 0x10(0x10)

}; 
// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
// Size: 0x28(Inherited: 0x0) 
struct FConv_FAkPropertyToControlToText
{
	struct FAkPropertyToControl INAkPropertyToControl;  // 0x0(0x10)
	struct FText ReturnValue;  // 0x10(0x18)

}; 
// Function AkAudio.AkRoomComponent.SetGeometryComponent
// Size: 0x8(Inherited: 0x0) 
struct FSetGeometryComponent
{
	struct UAkAcousticTextureSetComponent* textureSetComponent;  // 0x0(0x8)

}; 
// Function AkAudio.AkSlider.GetAkSliderItemId
// Size: 0x10(Inherited: 0x0) 
struct FGetAkSliderItemId
{
	struct FGuid ReturnValue;  // 0x0(0x10)

}; 
// Function AkAudio.AkSlider.GetAkSliderItemProperty
// Size: 0x10(Inherited: 0x0) 
struct FGetAkSliderItemProperty
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function AkAudio.AkSlider.SetAkSliderItemId
// Size: 0x10(Inherited: 0x0) 
struct FSetAkSliderItemId
{
	struct FGuid ItemId;  // 0x0(0x10)

}; 
// Function AkAudio.AkSlider.SetAkSliderItemProperty
// Size: 0x10(Inherited: 0x0) 
struct FSetAkSliderItemProperty
{
	struct FString ItemProperty;  // 0x0(0x10)

}; 
// Function AkAudio.AkSlider.SetIndentHandle
// Size: 0x1(Inherited: 0x0) 
struct FSetIndentHandle
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InValue : 1;  // 0x0(0x1)

}; 
// Function AkAudio.AkSlider.SetLocked
// Size: 0x1(Inherited: 0x0) 
struct FSetLocked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InValue : 1;  // 0x0(0x1)

}; 
// Function AkAudio.AkSlider.SetSliderBarColor
// Size: 0x10(Inherited: 0x0) 
struct FSetSliderBarColor
{
	struct FLinearColor InValue;  // 0x0(0x10)

}; 
// Function AkAudio.AkSlider.SetValue
// Size: 0x4(Inherited: 0x0) 
struct FSetValue
{
	float InValue;  // 0x0(0x4)

}; 
// Function AkAudio.AkWaapiCalls.CallWaapi
// Size: 0x40(Inherited: 0x0) 
struct FCallWaapi
{
	struct FAkWaapiUri WaapiUri;  // 0x0(0x10)
	struct FAKWaapiJsonObject WaapiArgs;  // 0x10(0x10)
	struct FAKWaapiJsonObject WaapiOptions;  // 0x20(0x10)
	struct FAKWaapiJsonObject ReturnValue;  // 0x30(0x10)

}; 
// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
// Size: 0x20(Inherited: 0x0) 
struct FConv_FAkWaapiSubscriptionIdToText
{
	struct FAkWaapiSubscriptionId INAkWaapiSubscriptionId;  // 0x0(0x8)
	struct FText ReturnValue;  // 0x8(0x18)

}; 
// Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
// Size: 0x14(Inherited: 0x0) 
struct FRegisterWaapiConnectionLostCallback
{
	struct FDelegate Callback;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
// Size: 0x14(Inherited: 0x0) 
struct FRegisterWaapiProjectLoadedCallback
{
	struct FDelegate Callback;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// Function AkAudio.AkWaapiCalls.SetSubscriptionID
// Size: 0x10(Inherited: 0x0) 
struct FSetSubscriptionID
{
	struct FAkWaapiSubscriptionId Subscription;  // 0x0(0x8)
	int32_t ID;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AkAudio.AkWaapiCalls.Unsubscribe
// Size: 0x20(Inherited: 0x0) 
struct FUnsubscribe
{
	struct FAkWaapiSubscriptionId SubscriptionId;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool UnsubscriptionDone : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FAKWaapiJsonObject ReturnValue;  // 0x10(0x10)

}; 
// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
// Size: 0x28(Inherited: 0x0) 
struct FConv_FAkWaapiFieldNamesToText
{
	struct FAkWaapiFieldNames INAkWaapiFieldNames;  // 0x0(0x10)
	struct FText ReturnValue;  // 0x10(0x18)

}; 
// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
// Size: 0x28(Inherited: 0x0) 
struct FConv_FAKWaapiJsonObjectToText
{
	struct FAKWaapiJsonObject INAKWaapiJsonObject;  // 0x0(0x10)
	struct FText ReturnValue;  // 0x10(0x18)

}; 
// Function AkAudio.AkWaapiJsonManager.GetBoolField
// Size: 0x28(Inherited: 0x0) 
struct FGetBoolField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0(0x10)
	struct FAKWaapiJsonObject Target;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function AkAudio.AkWaapiJsonManager.GetObjectField
// Size: 0x30(Inherited: 0x0) 
struct FGetObjectField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0(0x10)
	struct FAKWaapiJsonObject Target;  // 0x10(0x10)
	struct FAKWaapiJsonObject ReturnValue;  // 0x20(0x10)

}; 
// Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
// Size: 0x40(Inherited: 0x0) 
struct FSetArrayObjectFields
{
	struct FAkWaapiFieldNames FieldName;  // 0x0(0x10)
	struct TArray<struct FAKWaapiJsonObject> FieldObjectValues;  // 0x10(0x10)
	struct FAKWaapiJsonObject Target;  // 0x20(0x10)
	struct FAKWaapiJsonObject ReturnValue;  // 0x30(0x10)

}; 
// Function AkAudio.AkWaapiJsonManager.SetBoolField
// Size: 0x38(Inherited: 0x0) 
struct FSetBoolField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool FieldValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct FAKWaapiJsonObject Target;  // 0x18(0x10)
	struct FAKWaapiJsonObject ReturnValue;  // 0x28(0x10)

}; 
// Function AkAudio.AkWaapiJsonManager.SetNumberField
// Size: 0x38(Inherited: 0x0) 
struct FSetNumberField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0(0x10)
	float FieldValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct FAKWaapiJsonObject Target;  // 0x18(0x10)
	struct FAKWaapiJsonObject ReturnValue;  // 0x28(0x10)

}; 
// Function AkAudio.AkWaapiJsonManager.SetStringField
// Size: 0x40(Inherited: 0x0) 
struct FSetStringField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0(0x10)
	struct FString FieldValue;  // 0x10(0x10)
	struct FAKWaapiJsonObject Target;  // 0x20(0x10)
	struct FAKWaapiJsonObject ReturnValue;  // 0x30(0x10)

}; 
// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
// Size: 0x28(Inherited: 0x0) 
struct FConv_FAkWaapiUriToText
{
	struct FAkWaapiUri INAkWaapiUri;  // 0x0(0x10)
	struct FText ReturnValue;  // 0x10(0x18)

}; 
// Function AkAudio.AkWwiseTree.GetSelectedItem
// Size: 0x30(Inherited: 0x0) 
struct FGetSelectedItem
{
	struct FAkWwiseObjectDetails ReturnValue;  // 0x0(0x30)

}; 
// Function AkAudio.PostEventAsync.PostEventAsync
// Size: 0x50(Inherited: 0x0) 
struct FPostEventAsync
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UAkAudioEvent* akEvent;  // 0x8(0x8)
	struct AActor* Actor;  // 0x10(0x8)
	int32_t CallbackMask;  // 0x18(0x4)
	struct FDelegate PostEventCallback;  // 0x1C(0x10)
	char pad_44[4];  // 0x2C(0x4)
	struct TArray<struct FAkExternalSourceInfo> ExternalSources;  // 0x30(0x10)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bStopWhenAttachedToDestroyed : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)
	struct UPostEventAsync* ReturnValue;  // 0x48(0x8)

}; 
