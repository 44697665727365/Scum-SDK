#pragma once 
#include <AkAudio_Structs.h>
 
 
 
// Class AkAudio.AkPortalComponent
// Size: 0x2C0(Inherited: 0x200) 
struct UAkPortalComponent : public USceneComponent
{
	char pad_512_1 : 7;  // 0x200(0x1)
	bool bDynamic : 1;  // 0x1F8(0x1)
	uint8_t  InitialState;  // 0x1F9(0x1)
	float ObstructionRefreshInterval;  // 0x1FC(0x4)
	char ECollisionChannel ObstructionCollisionChannel;  // 0x200(0x1)
	char pad_519[185];  // 0x207(0xB9)

	bool PortalPlacementValid(); // Function AkAudio.AkPortalComponent.PortalPlacementValid
	void OpenPortal(); // Function AkAudio.AkPortalComponent.OpenPortal
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkPortalComponent.GetPrimitiveParent
	uint8_t  GetCurrentState(); // Function AkAudio.AkPortalComponent.GetCurrentState
	void ClosePortal(); // Function AkAudio.AkPortalComponent.ClosePortal
}; 



// Class AkAudio.AkAudioBank
// Size: 0x118(Inherited: 0x50) 
struct UAkAudioBank : public UAkAssetBase
{
	char pad_80_1 : 7;  // 0x50(0x1)
	bool AutoLoad : 1;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)
	struct TMap<struct FString, struct UAkAssetPlatformData*> LocalizedPlatformAssetDataMap;  // 0x58(0x50)
	struct TSet<struct TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents;  // 0xA8(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData;  // 0xF8(0x8)
	char pad_256[24];  // 0x100(0x18)

}; 



// Class AkAudio.AkAudioType
// Size: 0x40(Inherited: 0x28) 
struct UAkAudioType : public UObject
{
	uint32_t ShortID;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct TArray<struct UObject*> UserData;  // 0x30(0x10)

}; 



// Class AkAudio.AkAcousticPortal
// Size: 0x268(Inherited: 0x258) 
struct AAkAcousticPortal : public AVolume
{
	struct UAkPortalComponent* Portal;  // 0x258(0x8)
	uint8_t  InitialState;  // 0x260(0x1)
	char pad_609_1 : 7;  // 0x261(0x1)
	bool bRequiresStateMigration : 1;  // 0x261(0x1)
	char pad_610[6];  // 0x262(0x6)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal
	uint8_t  GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal
}; 



// Class AkAudio.AkPS5InitializationSettings
// Size: 0xF0(Inherited: 0x28) 
struct UAkPS5InitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettings CommonSettings;  // 0x30(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0x90(0x28)
	struct FAkPS5AdvancedInitializationSettings AdvancedSettings;  // 0xB8(0x34)
	char pad_236[4];  // 0xEC(0x4)

}; 



// Class AkAudio.AkAcousticTextureSetComponent
// Size: 0x210(Inherited: 0x200) 
struct UAkAcousticTextureSetComponent : public USceneComponent
{
	char pad_512[16];  // 0x200(0x10)

}; 



// Class AkAudio.AkAcousticTexture
// Size: 0x40(Inherited: 0x40) 
struct UAkAcousticTexture : public UAkAudioType
{

}; 



// Class AkAudio.AkAmbientSound
// Size: 0x260(Inherited: 0x220) 
struct AAkAmbientSound : public AActor
{
	struct UAkAudioEvent* AkAudioEvent;  // 0x220(0x8)
	struct UAkComponent* AkComponent;  // 0x228(0x8)
	char pad_560_1 : 7;  // 0x230(0x1)
	bool StopWhenOwnerIsDestroyed : 1;  // 0x230(0x1)
	char pad_561_1 : 7;  // 0x231(0x1)
	bool AutoPost : 1;  // 0x231(0x1)
	char pad_562[46];  // 0x232(0x2E)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound
}; 



// Class AkAudio.AkPlatformInfo
// Size: 0x70(Inherited: 0x28) 
struct UAkPlatformInfo : public UObject
{
	char pad_40[72];  // 0x28(0x48)

}; 



// Class AkAudio.AkAndroidInitializationSettings
// Size: 0xF8(Inherited: 0x28) 
struct UAkAndroidInitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0x98(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings;  // 0xC0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
}; 



// Class AkAudio.AkMediaAssetData
// Size: 0x78(Inherited: 0x28) 
struct UAkMediaAssetData : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool IsStreamed : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool UseDeviceMemory : 1;  // 0x29(0x1)
	char pad_42[6];  // 0x2A(0x6)
	struct FString Language;  // 0x30(0x10)
	struct FString AssetPlatform;  // 0x40(0x10)
	char pad_80[40];  // 0x50(0x28)

}; 



// Class AkAudio.AkAndroidPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkAndroidPlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkAssetBase
// Size: 0x50(Inherited: 0x40) 
struct UAkAssetBase : public UAkAudioType
{
	struct UAkAssetPlatformData* PlatformAssetData;  // 0x40(0x8)
	char pad_72[8];  // 0x48(0x8)

}; 



// Class AkAudio.AkPS4PlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkPS4PlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkRoomComponent
// Size: 0x250(Inherited: 0x220) 
struct UAkRoomComponent : public UAkGameObject
{
	char bEnable : 1;  // 0x218(0x1)
	char pad_544_1 : 6;  // 0x220(0x1)
	bool bDynamic : 1;  // 0x21C(0x1)
	float Priority;  // 0x220(0x4)
	float WallOcclusion;  // 0x224(0x4)
	float AuxSendLevel;  // 0x228(0x4)
	char pad_557_1 : 7;  // 0x22D(0x1)
	bool AutoPost : 1;  // 0x22C(0x1)
	char pad_558[10];  // 0x22E(0xA)
	struct UAkAcousticTextureSetComponent* GeometryComponent;  // 0x238(0x8)
	char pad_576[16];  // 0x240(0x10)

	void SetGeometryComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkRoomComponent.SetGeometryComponent
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkRoomComponent.GetPrimitiveParent
}; 



// Class AkAudio.AkAssetData
// Size: 0x78(Inherited: 0x28) 
struct UAkAssetData : public UObject
{
	uint32_t CachedHash;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct FString BankLanguage;  // 0x30(0x10)
	char pad_64[56];  // 0x40(0x38)

}; 



// Class AkAudio.AkAssetDataWithMedia
// Size: 0x88(Inherited: 0x78) 
struct UAkAssetDataWithMedia : public UAkAssetData
{
	struct TArray<struct UAkMediaAsset*> MediaList;  // 0x78(0x10)

}; 



// Class AkAudio.AkFolder
// Size: 0xB8(Inherited: 0x40) 
struct UAkFolder : public UAkAudioType
{
	struct FString UnrealFolderPath;  // 0x40(0x10)
	struct FString WwiseFolderPath;  // 0x50(0x10)
	char pad_96[88];  // 0x60(0x58)

}; 



// Class AkAudio.AkPS5PlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkPS5PlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkAssetPlatformData
// Size: 0x30(Inherited: 0x28) 
struct UAkAssetPlatformData : public UObject
{
	struct UAkAssetData* CurrentAssetData;  // 0x28(0x8)

}; 



// Class AkAudio.AkItemBoolProperties
// Size: 0x148(Inherited: 0x108) 
struct UAkItemBoolProperties : public UWidget
{
	struct FMulticastInlineDelegate OnSelectionChanged;  // 0x108(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged;  // 0x118(0x10)
	char pad_296[32];  // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText
}; 



// Class AkAudio.AkQuailInitializationSettings
// Size: 0xF0(Inherited: 0xF0) 
struct UAkQuailInitializationSettings : public UAkStadiaInitializationSettings
{

}; 



// Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x78(Inherited: 0x28) 
struct UAkAssetDataSwitchContainerData : public UObject
{
	struct TSoftObjectPtr<UAkGroupValue> GroupValue;  // 0x28(0x28)
	struct UAkGroupValue* DefaultGroupValue;  // 0x50(0x8)
	struct TArray<struct UAkMediaAsset*> MediaList;  // 0x58(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children;  // 0x68(0x10)

}; 



// Class AkAudio.AkAssetDataSwitchContainer
// Size: 0xF0(Inherited: 0x88) 
struct UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{
	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers;  // 0x88(0x10)
	struct UAkGroupValue* DefaultGroupValue;  // 0x98(0x8)
	char pad_160[80];  // 0xA0(0x50)

}; 



// Class AkAudio.AkRtpc
// Size: 0x40(Inherited: 0x40) 
struct UAkRtpc : public UAkAudioType
{

}; 



// Class AkAudio.AkPS4InitializationSettings
// Size: 0xF0(Inherited: 0x28) 
struct UAkPS4InitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettings CommonSettings;  // 0x30(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0x90(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings;  // 0xB8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
}; 



// Class AkAudio.AkAudioEventData
// Size: 0x290(Inherited: 0xF0) 
struct UAkAudioEventData : public UAkAssetDataSwitchContainer
{
	float MaxAttenuationRadius;  // 0xF0(0x4)
	char pad_244_1 : 7;  // 0xF4(0x1)
	bool IsInfinite : 1;  // 0xF4(0x1)
	char pad_245[3];  // 0xF5(0x3)
	float MinimumDuration;  // 0xF8(0x4)
	float MaximumDuration;  // 0xFC(0x4)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia;  // 0x100(0x50)
	struct TSet<struct UAkAudioEvent*> PostedEvents;  // 0x150(0x50)
	struct TSet<struct UAkAuxBus*> UserDefinedSends;  // 0x1A0(0x50)
	struct TSet<struct UAkTrigger*> PostedTriggers;  // 0x1F0(0x50)
	struct TSet<struct UAkGroupValue*> GroupValues;  // 0x240(0x50)

}; 



// Class AkAudio.AkIOSInitializationSettings
// Size: 0x100(Inherited: 0x28) 
struct UAkIOSInitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30(0x68)
	struct FAkAudioSession AudioSession;  // 0x98(0xC)
	char pad_164[4];  // 0xA4(0x4)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0xA8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings;  // 0xD0(0x2C)
	char pad_252[4];  // 0xFC(0x4)

}; 



// Class AkAudio.AkAudioEvent
// Size: 0xD0(Inherited: 0x50) 
struct UAkAudioEvent : public UAkAssetBase
{
	struct TMap<struct FString, struct UAkAssetPlatformData*> LocalizedPlatformAssetDataMap;  // 0x50(0x50)
	struct UAkAudioBank* RequiredBank;  // 0xA0(0x8)
	char pad_168[8];  // 0xA8(0x8)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData;  // 0xB0(0x8)
	float MaxAttenuationRadius;  // 0xB8(0x4)
	char pad_188_1 : 7;  // 0xBC(0x1)
	bool IsInfinite : 1;  // 0xBC(0x1)
	char pad_189[3];  // 0xBD(0x3)
	float MinimumDuration;  // 0xC0(0x4)
	float MaximumDuration;  // 0xC4(0x4)
	char pad_200[8];  // 0xC8(0x8)

	float GetMinimumDuration(); // Function AkAudio.AkAudioEvent.GetMinimumDuration
	float GetMaximumDuration(); // Function AkAudio.AkAudioEvent.GetMaximumDuration
	float GetMaxAttenuationRadius(); // Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
	bool GetIsInfinite(); // Function AkAudio.AkAudioEvent.GetIsInfinite
}; 



// Class AkAudio.AkGameObject
// Size: 0x220(Inherited: 0x200) 
struct UAkGameObject : public USceneComponent
{
	struct UAkAudioEvent* AkAudioEvent;  // 0x1F8(0x8)
	struct FString EventName;  // 0x200(0x10)
	char pad_536[8];  // 0x218(0x8)

	void Stop(); // Function AkAudio.AkGameObject.Stop
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC); // Function AkAudio.AkGameObject.SetRTPCValue
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources); // Function AkAudio.AkGameObject.PostAssociatedAkEvent
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* akEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync
	int32_t PostAkEvent(struct UAkAudioEvent* akEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName); // Function AkAudio.AkGameObject.PostAkEvent
	void GetRTPCValue(struct UAkRtpc* RTPCValue, uint8_t  InputValueType, float& Value, uint8_t & OutputValueType, struct FString RTPC, int32_t PlayingID); // Function AkAudio.AkGameObject.GetRTPCValue
}; 



// Class AkAudio.AkComponent
// Size: 0x3E0(Inherited: 0x220) 
struct UAkComponent : public UAkGameObject
{
	char pad_544_1 : 7;  // 0x220(0x1)
	bool bUseSpatialAudio : 1;  // 0x218(0x1)
	char ECollisionChannel OcclusionCollisionChannel;  // 0x220(0x1)
	char pad_546[2];  // 0x222(0x2)
	char EnableSpotReflectors : 1;  // 0x224(0x1)
	char pad_548_1 : 7;  // 0x224(0x1)
	char pad_549[4];  // 0x225(0x4)
	float OuterRadius;  // 0x228(0x4)
	float InnerRadius;  // 0x22C(0x4)
	struct UAkAuxBus* EarlyReflectionAuxBus;  // 0x230(0x8)
	struct FString EarlyReflectionAuxBusName;  // 0x238(0x10)
	int32_t EarlyReflectionOrder;  // 0x248(0x4)
	float EarlyReflectionBusSendGain;  // 0x24C(0x4)
	float EarlyReflectionMaxPathLength;  // 0x250(0x4)
	float roomReverbAuxBusGain;  // 0x254(0x4)
	int32_t diffractionMaxEdges;  // 0x258(0x4)
	int32_t diffractionMaxPaths;  // 0x25C(0x4)
	float diffractionMaxPathLength;  // 0x260(0x4)
	char DrawFirstOrderReflections : 1;  // 0x264(0x1)
	char DrawSecondOrderReflections : 1;  // 0x264(0x1)
	char DrawHigherOrderReflections : 1;  // 0x264(0x1)
	char DrawDiffraction : 1;  // 0x264(0x1)
	char pad_612_1 : 4;  // 0x264(0x1)
	char pad_613[4];  // 0x265(0x4)
	char pad_616_1 : 7;  // 0x268(0x1)
	bool StopWhenOwnerDestroyed : 1;  // 0x268(0x1)
	char pad_617[3];  // 0x269(0x3)
	float AttenuationScalingFactor;  // 0x26C(0x4)
	float OcclusionRefreshInterval;  // 0x270(0x4)
	char pad_628_1 : 7;  // 0x274(0x1)
	bool bUseReverbVolumes : 1;  // 0x274(0x1)
	char pad_629[363];  // 0x275(0x16B)

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume
	void SetListeners(struct TArray<struct UAkComponent*>& Listeners); // Function AkAudio.AkComponent.SetListeners
	void SetGameObjectRadius(float in_outerRadius, float in_innerRadius); // Function AkAudio.AkComponent.SetGameObjectRadius
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	int32_t PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	int32_t PostAkEventByName(struct FString in_EventName); // Function AkAudio.AkComponent.PostAkEventByName
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* akEvent, int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* akEvent, struct FString in_EventName, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius
}; 



// Class AkAudio.AkXboxOneAnvilInitializationSettings
// Size: 0xF8(Inherited: 0xF8) 
struct UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{

}; 



// Class AkAudio.AkLinuxInitializationSettings
// Size: 0xF0(Inherited: 0x28) 
struct UAkLinuxInitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;  // 0xC0(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
}; 



// Class AkAudio.AkAudioInputComponent
// Size: 0x410(Inherited: 0x3E0) 
struct UAkAudioInputComponent : public UAkComponent
{
	char pad_992[48];  // 0x3E0(0x30)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
}; 



// Class AkAudio.AkAuxBus
// Size: 0x58(Inherited: 0x50) 
struct UAkAuxBus : public UAkAssetBase
{
	struct UAkAudioBank* RequiredBank;  // 0x50(0x8)

}; 



// Class AkAudio.AkLinuxPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkLinuxPlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkDurationCallbackInfo
// Size: 0x50(Inherited: 0x38) 
struct UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
	float Duration;  // 0x38(0x4)
	float EstimatedDuration;  // 0x3C(0x4)
	int32_t AudioNodeID;  // 0x40(0x4)
	int32_t MediaID;  // 0x44(0x4)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool bStreaming : 1;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)

}; 



// Class AkAudio.AkCheckBox
// Size: 0xAD8(Inherited: 0x120) 
struct UAkCheckBox : public UContentWidget
{
	char pad_288[840];  // 0x120(0x348)
	uint8_t  CheckedState;  // 0x468(0x1)
	char pad_1129[3];  // 0x469(0x3)
	struct FDelegate CheckedStateDelegate;  // 0x46C(0x10)
	char pad_1148[4];  // 0x47C(0x4)
	struct FCheckBoxStyle WidgetStyle;  // 0x480(0x580)
	char EHorizontalAlignment HorizontalAlignment;  // 0xA00(0x1)
	char pad_2561_1 : 7;  // 0xA01(0x1)
	bool IsFocusable : 1;  // 0xA01(0x1)
	char pad_2562[6];  // 0xA02(0x6)
	struct FAkBoolPropertyToControl ThePropertyToControl;  // 0xA08(0x10)
	struct FAkWwiseItemToControl ItemToControl;  // 0xA18(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged;  // 0xA58(0x10)
	struct FMulticastInlineDelegate OnItemDropped;  // 0xA68(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped;  // 0xA78(0x10)
	char pad_2696[80];  // 0xA88(0x50)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked
	void SetCheckedState(uint8_t  InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState
	void SetAkItemId(struct FGuid& ItemId); // Function AkAudio.AkCheckBox.SetAkItemId
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked
	uint8_t  GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId
}; 



// Class AkAudio.DrawPortalComponent
// Size: 0x450(Inherited: 0x450) 
struct UDrawPortalComponent : public UPrimitiveComponent
{

}; 



// Class AkAudio.DrawRoomComponent
// Size: 0x450(Inherited: 0x450) 
struct UDrawRoomComponent : public UPrimitiveComponent
{

}; 



// Class AkAudio.AkGameplayStatics
// Size: 0x28(Inherited: 0x28) 
struct UAkGameplayStatics : public UBlueprintFunctionLibrary
{

	void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.UseReverbVolumes
	void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkGameplayStatics.UseEarlyReflections
	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName
	void UnloadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankUnloadedCallback); // Function AkAudio.AkGameplayStatics.UnloadBankAsync
	void UnloadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.UnloadBank
	void StopProfilerCapture(); // Function AkAudio.AkGameplayStatics.StopProfilerCapture
	void StopOutputCapture(); // Function AkAudio.AkGameplayStatics.StopOutputCapture
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
	void StopAll(); // Function AkAudio.AkGameplayStatics.StopAll
	void StopActor(struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopActor
	void StartProfilerCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartProfilerCapture
	void StartOutputCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartOutputCapture
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
	struct UAkComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* akEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy); // Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitch
	void SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State); // Function AkAudio.AkGameplayStatics.SetState
	void SetSpeakerAngles(struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.SetSpeakerAngles
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.SetRTPCValue
	void SetReflectionsOrder(int32_t Order, bool RefreshPaths); // Function AkAudio.AkGameplayStatics.SetReflectionsOrder
	void SetPortalToPortalObstruction(struct UAkPortalComponent* PortalComponent0, struct UAkPortalComponent* PortalComponent1, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
	void SetPortalObstructionAndOcclusion(struct UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
	void SetPanningRule(uint8_t  PanRule); // Function AkAudio.AkGameplayStatics.SetPanningRule
	void SetOutputBusVolume(float BusVolume, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOutputBusVolume
	void SetOcclusionScalingFactor(float ScalingFactor); // Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
	void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, uint8_t  MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultiplePositions
	void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, uint8_t  MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<uint8_t > ChannelMasks, struct TArray<struct FTransform> Positions, uint8_t  MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	void SetGameObjectToPortalObstruction(struct UAkComponent* GameObjectAkComponent, struct UAkPortalComponent* PortalComponent, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
	void SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate& Completed); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	void SetBusConfig(struct FString BusName, uint8_t  ChannelConfiguration); // Function AkAudio.AkGameplayStatics.SetBusConfig
	void ResetRTPCValue(struct UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.ResetRTPCValue
	void ReplaceMainOutput(struct FAkOutputSettings& MainOutputSettings); // Function AkAudio.AkGameplayStatics.ReplaceMainOutput
	void PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger); // Function AkAudio.AkGameplayStatics.PostTrigger
	void PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PostEventByName
	int32_t PostEventAttached(struct UAkAudioEvent* akEvent, struct AActor* Actor, struct FName AttachPointName, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEventAttached
	void PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
	int32_t PostEventAtLocation(struct UAkAudioEvent* akEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocation
	int32_t PostEvent(struct UAkAudioEvent* akEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEvent
	void PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* akEvent, struct AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
	int32_t PostAndWaitForEndOfEvent(struct UAkAudioEvent* akEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString EventName, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
	void LoadInitBank(); // Function AkAudio.AkGameplayStatics.LoadInitBank
	void LoadBanks(struct TArray<struct UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks); // Function AkAudio.AkGameplayStatics.LoadBanks
	void LoadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.LoadBankByName
	void LoadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankLoadedCallback); // Function AkAudio.AkGameplayStatics.LoadBankAsync
	void LoadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.LoadBank
	bool IsGame(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.IsGame
	bool IsEditor(); // Function AkAudio.AkGameplayStatics.IsEditor
	void GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.GetSpeakerAngles
	void GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, uint8_t  InputValueType, float& Value, uint8_t & OutputValueType, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.GetRTPCValue
	float GetOcclusionScalingFactor(); // Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
	struct FString GetCurrentAudioCulture(); // Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	struct TArray<struct FString> GetAvailableAudioCultures(); // Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	struct UObject* GetAkMediaAssetUserData(struct UAkMediaAsset* Instance, UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
	struct UAkComponent* GetAkComponent(struct USceneComponent* AttachToComponent, bool& ComponentCreated, struct FName AttachPointName, struct FVector Location, char EAttachLocation LocationType); // Function AkAudio.AkGameplayStatics.GetAkComponent
	struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	void ExecuteActionOnPlayingID(uint8_t  ActionType, int32_t PlayingID, int32_t TransitionDuration, uint8_t  FadeCurve); // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	void ExecuteActionOnEvent(struct UAkAudioEvent* akEvent, uint8_t  ActionType, struct AActor* Actor, int32_t TransitionDuration, uint8_t  FadeCurve, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	void ClearBanks(); // Function AkAudio.AkGameplayStatics.ClearBanks
	void CancelEventCallback(struct FDelegate& PostEventCallback); // Function AkAudio.AkGameplayStatics.CancelEventCallback
	void AddOutputCaptureMarker(struct FString MarkerText); // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
}; 



// Class AkAudio.AkCallbackInfo
// Size: 0x30(Inherited: 0x28) 
struct UAkCallbackInfo : public UObject
{
	struct UAkComponent* AkComponent;  // 0x28(0x8)

}; 



// Class AkAudio.AkEventCallbackInfo
// Size: 0x38(Inherited: 0x30) 
struct UAkEventCallbackInfo : public UAkCallbackInfo
{
	int32_t PlayingID;  // 0x30(0x4)
	int32_t EventId;  // 0x34(0x4)

}; 



// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x48(Inherited: 0x38) 
struct UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
	char pad_56[16];  // 0x38(0x10)

	uint8_t  GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType
	bool GetProgramChange(struct FAkMidiProgramChange& AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	bool GetPitchBend(struct FAkMidiPitchBend& AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	bool GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	bool GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	bool GetGeneric(struct FAkMidiGeneric& AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	char GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
	bool GetCc(struct FAkMidiCc& AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc
}; 



// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x28(Inherited: 0x28) 
struct UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{

	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
}; 



// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x50(Inherited: 0x38) 
struct UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
	int32_t Identifier;  // 0x38(0x4)
	int32_t position;  // 0x3C(0x4)
	struct FString Label;  // 0x40(0x10)

}; 



// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x70(Inherited: 0x30) 
struct UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
	int32_t PlayingID;  // 0x30(0x4)
	struct FAkSegmentInfo SegmentInfo;  // 0x34(0x24)
	uint8_t  MusicSyncType;  // 0x58(0x1)
	char pad_89[7];  // 0x59(0x7)
	struct FString UserCueName;  // 0x60(0x10)

}; 



// Class AkAudio.AkGeometryComponent
// Size: 0x3A0(Inherited: 0x210) 
struct UAkGeometryComponent : public UAkAcousticTextureSetComponent
{
	uint8_t  MeshType;  // 0x210(0x1)
	char pad_529[3];  // 0x211(0x3)
	int32_t LOD;  // 0x214(0x4)
	float WeldingThreshold;  // 0x218(0x4)
	char pad_540[4];  // 0x21C(0x4)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;  // 0x220(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride;  // 0x270(0x18)
	char bEnableDiffraction : 1;  // 0x288(0x1)
	char bEnableDiffractionOnBoundaryEdges : 1;  // 0x288(0x1)
	char pad_648_1 : 6;  // 0x288(0x1)
	char pad_649[8];  // 0x289(0x8)
	struct AActor* AssociatedRoom;  // 0x290(0x8)
	char pad_664[16];  // 0x298(0x10)
	struct FAkGeometryData GeometryData;  // 0x2A8(0x50)
	struct TMap<int32_t, double> SurfaceAreas;  // 0x2F8(0x50)
	char pad_840[88];  // 0x348(0x58)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry
	void SendGeometry(); // Function AkAudio.AkGeometryComponent.SendGeometry
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh
}; 



// Class AkAudio.AkItemPropertiesConv
// Size: 0x28(Inherited: 0x28) 
struct UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{

	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
}; 



// Class AkAudio.AkGroupValue
// Size: 0x68(Inherited: 0x40) 
struct UAkGroupValue : public UAkAudioType
{
	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> MediaDependencies;  // 0x40(0x10)
	uint32_t GroupShortID;  // 0x50(0x4)
	char pad_84[20];  // 0x54(0x14)

}; 



// Class AkAudio.AkDPXInitializationSettings
// Size: 0xF0(Inherited: 0xF0) 
struct UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{

}; 



// Class AkAudio.AkHololensInitializationSettings
// Size: 0xF8(Inherited: 0x28) 
struct UAkHololensInitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0x98(0x28)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings;  // 0xC0(0x34)
	char pad_244[4];  // 0xF4(0x4)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
}; 



// Class AkAudio.AkItemProperties
// Size: 0x148(Inherited: 0x108) 
struct UAkItemProperties : public UWidget
{
	struct FMulticastInlineDelegate OnSelectionChanged;  // 0x108(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged;  // 0x118(0x10)
	char pad_296[32];  // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText
}; 



// Class AkAudio.AkHololensPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkHololensPlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkInitBankAssetData
// Size: 0x98(Inherited: 0x88) 
struct UAkInitBankAssetData : public UAkAssetDataWithMedia
{
	struct TArray<struct FAkPluginInfo> PluginInfos;  // 0x88(0x10)

}; 



// Class AkAudio.AkInitBank
// Size: 0x70(Inherited: 0x50) 
struct UAkInitBank : public UAkAssetBase
{
	struct TArray<struct FString> AvailableAudioCultures;  // 0x50(0x10)
	struct FString DefaultLanguage;  // 0x60(0x10)

}; 



// Class AkAudio.AkIOSPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkIOSPlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkLateReverbComponent
// Size: 0x280(Inherited: 0x200) 
struct UAkLateReverbComponent : public USceneComponent
{
	char bEnable : 1;  // 0x1F8(0x1)
	float SendLevel;  // 0x1FC(0x4)
	float FadeRate;  // 0x200(0x4)
	float Priority;  // 0x204(0x4)
	char pad_524_1 : 6;  // 0x20C(0x1)
	bool AutoAssignAuxBus : 1;  // 0x208(0x1)
	char pad_525[3];  // 0x20D(0x3)
	struct UAkAuxBus* AuxBus;  // 0x210(0x8)
	struct FString AuxBusName;  // 0x218(0x10)
	char pad_552[8];  // 0x228(0x8)
	struct UAkAuxBus* AuxBusManual;  // 0x230(0x8)
	char pad_568[72];  // 0x238(0x48)

	void AssociateAkTextureSetComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
}; 



// Class AkAudio.AkMacInitializationSettings
// Size: 0xF0(Inherited: 0x28) 
struct UAkMacInitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;  // 0xC0(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
}; 



// Class AkAudio.AkMacPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkMacPlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkMediaAsset
// Size: 0x78(Inherited: 0x28) 
struct UAkMediaAsset : public UObject
{
	uint32_t ID;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct FString MediaName;  // 0x30(0x10)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool AutoLoad : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)
	struct TArray<struct UObject*> UserData;  // 0x48(0x10)
	struct FString Language;  // 0x58(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData;  // 0x68(0x8)
	char pad_112[8];  // 0x70(0x8)

}; 



// Class AkAudio.AkLocalizedMediaAsset
// Size: 0x78(Inherited: 0x78) 
struct UAkLocalizedMediaAsset : public UAkMediaAsset
{

}; 



// Class AkAudio.AkExternalMediaAsset
// Size: 0xD8(Inherited: 0x78) 
struct UAkExternalMediaAsset : public UAkMediaAsset
{
	char pad_120[96];  // 0x78(0x60)

}; 



// Class AkAudio.AkPlatformInitialisationSettingsBase
// Size: 0x28(Inherited: 0x28) 
struct UAkPlatformInitialisationSettingsBase : public UInterface
{

}; 



// Class AkAudio.AkSettings
// Size: 0x2E0(Inherited: 0x28) 
struct UAkSettings : public UObject
{
	char MaxSimultaneousReverbVolumes;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct FFilePath WwiseProjectPath;  // 0x30(0x10)
	struct FDirectoryPath WwiseSoundDataFolder;  // 0x40(0x10)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool bAutoConnectToWAAPI : 1;  // 0x50(0x1)
	char ECollisionChannel DefaultOcclusionCollisionChannel;  // 0x51(0x1)
	char ECollisionChannel DefaultFitToGeometryCollisionChannel;  // 0x52(0x1)
	char pad_83[5];  // 0x53(0x5)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap;  // 0x58(0x50)
	float GlobalDecayAbsorption;  // 0xA8(0x4)
	char pad_172[4];  // 0xAC(0x4)
	struct TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus;  // 0xB0(0x28)
	struct TMap<float, struct TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap;  // 0xD8(0x50)
	struct FString HFDampingName;  // 0x128(0x10)
	struct FString DecayEstimateName;  // 0x138(0x10)
	struct FString TimeToFirstReflectionName;  // 0x148(0x10)
	struct TSoftObjectPtr<UAkRtpc> HFDampingRTPC;  // 0x158(0x28)
	struct TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC;  // 0x180(0x28)
	struct TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC;  // 0x1A8(0x28)
	struct TSoftObjectPtr<UAkAudioEvent> AudioInputEvent;  // 0x1D0(0x28)
	struct TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap;  // 0x1F8(0x50)
	char pad_584_1 : 7;  // 0x248(0x1)
	bool SplitSwitchContainerMedia : 1;  // 0x248(0x1)
	char pad_585_1 : 7;  // 0x249(0x1)
	bool SplitMediaPerFolder : 1;  // 0x249(0x1)
	char pad_586_1 : 7;  // 0x24A(0x1)
	bool UseEventBasedPackaging : 1;  // 0x24A(0x1)
	char pad_587_1 : 7;  // 0x24B(0x1)
	bool EnableAutomaticAssetSynchronization : 1;  // 0x24B(0x1)
	char pad_588[4];  // 0x24C(0x4)
	struct FString CommandletCommitMessage;  // 0x250(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture;  // 0x260(0x50)
	char pad_688_1 : 7;  // 0x2B0(0x1)
	bool AskedToUseNewAssetManagement : 1;  // 0x2B0(0x1)
	char pad_689_1 : 7;  // 0x2B1(0x1)
	bool bEnableMultiCoreRendering : 1;  // 0x2B1(0x1)
	char pad_690_1 : 7;  // 0x2B2(0x1)
	bool MigratedEnableMultiCoreRendering : 1;  // 0x2B2(0x1)
	char pad_691_1 : 7;  // 0x2B3(0x1)
	bool FixupRedirectorsDuringMigration : 1;  // 0x2B3(0x1)
	char pad_692[4];  // 0x2B4(0x4)
	struct FDirectoryPath WwiseWindowsInstallationPath;  // 0x2B8(0x10)
	struct FFilePath WwiseMacInstallationPath;  // 0x2C8(0x10)
	char pad_728[8];  // 0x2D8(0x8)

}; 



// Class AkAudio.AkWinAnvilPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{

}; 



// Class AkAudio.AkReverbVolume
// Size: 0x290(Inherited: 0x258) 
struct AAkReverbVolume : public AVolume
{
	char bEnabled : 1;  // 0x258(0x1)
	char pad_600_1 : 7;  // 0x258(0x1)
	char pad_601[8];  // 0x259(0x8)
	struct UAkAuxBus* AuxBus;  // 0x260(0x8)
	struct FString AuxBusName;  // 0x268(0x10)
	float SendLevel;  // 0x278(0x4)
	float FadeRate;  // 0x27C(0x4)
	float Priority;  // 0x280(0x4)
	char pad_644[4];  // 0x284(0x4)
	struct UAkLateReverbComponent* LateReverbComponent;  // 0x288(0x8)

}; 



// Class AkAudio.AkSettingsPerUser
// Size: 0x80(Inherited: 0x28) 
struct UAkSettingsPerUser : public UObject
{
	struct FDirectoryPath WwiseWindowsInstallationPath;  // 0x28(0x10)
	struct FFilePath WwiseMacInstallationPath;  // 0x38(0x10)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool EnableAutomaticAssetSynchronization : 1;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)
	struct FString WaapiIPAddress;  // 0x50(0x10)
	uint32_t WaapiPort;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bAutoConnectToWAAPI : 1;  // 0x64(0x1)
	char pad_101_1 : 7;  // 0x65(0x1)
	bool AutoSyncSelection : 1;  // 0x65(0x1)
	char pad_102_1 : 7;  // 0x66(0x1)
	bool SuppressWwiseProjectPathWarnings : 1;  // 0x66(0x1)
	char pad_103_1 : 7;  // 0x67(0x1)
	bool SoundDataGenerationSkipLanguage : 1;  // 0x67(0x1)
	char pad_104[24];  // 0x68(0x18)

}; 



// Class AkAudio.AkSlider
// Size: 0x530(Inherited: 0x108) 
struct UAkSlider : public UWidget
{
	float Value;  // 0x108(0x4)
	struct FDelegate ValueDelegate;  // 0x10C(0x10)
	char pad_284[4];  // 0x11C(0x4)
	struct FSliderStyle WidgetStyle;  // 0x120(0x340)
	char EOrientation Orientation;  // 0x460(0x1)
	char pad_1121[3];  // 0x461(0x3)
	struct FLinearColor SliderBarColor;  // 0x464(0x10)
	struct FLinearColor SliderHandleColor;  // 0x474(0x10)
	char pad_1156_1 : 7;  // 0x484(0x1)
	bool IndentHandle : 1;  // 0x484(0x1)
	char pad_1157_1 : 7;  // 0x485(0x1)
	bool Locked : 1;  // 0x485(0x1)
	char pad_1158[2];  // 0x486(0x2)
	float StepSize;  // 0x488(0x4)
	char pad_1164_1 : 7;  // 0x48C(0x1)
	bool IsFocusable : 1;  // 0x48C(0x1)
	char pad_1165[3];  // 0x48D(0x3)
	struct FAkPropertyToControl ThePropertyToControl;  // 0x490(0x10)
	struct FAkWwiseItemToControl ItemToControl;  // 0x4A0(0x40)
	struct FMulticastInlineDelegate OnValueChanged;  // 0x4E0(0x10)
	struct FMulticastInlineDelegate OnItemDropped;  // 0x4F0(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped;  // 0x500(0x10)
	char pad_1296[32];  // 0x510(0x20)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty
	void SetAkSliderItemId(struct FGuid& ItemId); // Function AkAudio.AkSlider.SetAkSliderItemId
	float GetValue(); // Function AkAudio.AkSlider.GetValue
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId
}; 



// Class AkAudio.AkSpatialAudioVolume
// Size: 0x270(Inherited: 0x258) 
struct AAkSpatialAudioVolume : public AVolume
{
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;  // 0x258(0x8)
	struct UAkLateReverbComponent* LateReverb;  // 0x260(0x8)
	struct UAkRoomComponent* Room;  // 0x268(0x8)

}; 



// Class AkAudio.AkSpotReflector
// Size: 0x248(Inherited: 0x220) 
struct AAkSpotReflector : public AActor
{
	struct UAkAuxBus* EarlyReflectionAuxBus;  // 0x220(0x8)
	struct FString EarlyReflectionAuxBusName;  // 0x228(0x10)
	struct UAkAcousticTexture* AcousticTexture;  // 0x238(0x8)
	float DistanceScalingFactor;  // 0x240(0x4)
	float Level;  // 0x244(0x4)

}; 



// Class AkAudio.AkStadiaInitializationSettings
// Size: 0xF0(Inherited: 0x28) 
struct UAkStadiaInitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;  // 0xC0(0x30)

}; 



// Class AkAudio.AkStadiaPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkStadiaPlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkQuailPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkQuailPlatformInfo : public UAkStadiaPlatformInfo
{

}; 



// Class AkAudio.AkStateValue
// Size: 0x68(Inherited: 0x68) 
struct UAkStateValue : public UAkGroupValue
{

}; 



// Class AkAudio.AkSubmixInputComponent
// Size: 0x470(Inherited: 0x410) 
struct UAkSubmixInputComponent : public UAkAudioInputComponent
{
	char pad_1040[8];  // 0x410(0x8)
	struct USoundSubmix* SubmixToRecord;  // 0x418(0x8)
	char pad_1056[80];  // 0x420(0x50)

}; 



// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x240(Inherited: 0x210) 
struct UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{
	char bEnableSurfaceReflectors : 1;  // 0x210(0x1)
	char pad_528_1 : 7;  // 0x210(0x1)
	char pad_529[8];  // 0x211(0x8)
	struct TArray<struct FAkSurfacePoly> AcousticPolys;  // 0x218(0x10)
	char bEnableDiffraction : 1;  // 0x228(0x1)
	char bEnableDiffractionOnBoundaryEdges : 1;  // 0x228(0x1)
	char pad_552_1 : 6;  // 0x228(0x1)
	char pad_553[8];  // 0x229(0x8)
	struct AActor* AssociatedRoom;  // 0x230(0x8)
	char pad_568[8];  // 0x238(0x8)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
}; 



// Class AkAudio.AkSwitchInitializationSettings
// Size: 0xF0(Inherited: 0x28) 
struct UAkSwitchInitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings;  // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;  // 0xC0(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
}; 



// Class AkAudio.AkSwitchPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkSwitchPlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkSwitchValue
// Size: 0x68(Inherited: 0x68) 
struct UAkSwitchValue : public UAkGroupValue
{

}; 



// Class AkAudio.AkTrigger
// Size: 0x40(Inherited: 0x40) 
struct UAkTrigger : public UAkAudioType
{

}; 



// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x100(Inherited: 0x28) 
struct UAkTVOSInitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30(0x68)
	struct FAkAudioSession AudioSession;  // 0x98(0xC)
	char pad_164[4];  // 0xA4(0x4)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0xA8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings;  // 0xD0(0x2C)
	char pad_252[4];  // 0xFC(0x4)

}; 



// Class AkAudio.AkXboxOneAnvilPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{

}; 



// Class AkAudio.AkTVOSPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkTVOSPlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkWaapiCalls
// Size: 0x28(Inherited: 0x28) 
struct UAkWaapiCalls : public UBlueprintFunctionLibrary
{

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // Function AkAudio.AkWaapiCalls.SubscribeToWaapi
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32_t ID); // Function AkAudio.AkWaapiCalls.SetSubscriptionID
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	bool RegisterWaapiConnectionLostCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription); // Function AkAudio.AkWaapiCalls.GetSubscriptionID
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions); // Function AkAudio.AkWaapiCalls.CallWaapi
}; 



// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x28(Inherited: 0x28) 
struct USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{

	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
}; 



// Class AkAudio.AkWaapiJsonManager
// Size: 0x28(Inherited: 0x28) 
struct UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetObjectField
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetNumberField
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetBoolField
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	struct FString GetStringField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetStringField
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetObjectField
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetNumberField
	int32_t GetIntegerField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetIntegerField
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetBoolField
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetArrayField
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
}; 



// Class AkAudio.AkWaapiUriConv
// Size: 0x28(Inherited: 0x28) 
struct UAkWaapiUriConv : public UBlueprintFunctionLibrary
{

	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
}; 



// Class AkAudio.AkWwiseTree
// Size: 0x148(Inherited: 0x108) 
struct UAkWwiseTree : public UWidget
{
	struct FMulticastInlineDelegate OnSelectionChanged;  // 0x108(0x10)
	struct FMulticastInlineDelegate OnItemDragged;  // 0x118(0x10)
	char pad_296[32];  // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText
}; 



// Class AkAudio.AkWindowsInitializationSettings
// Size: 0xF8(Inherited: 0x28) 
struct UAkWindowsInitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0x98(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings;  // 0xC0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
}; 



// Class AkAudio.AkWin32PlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkWin32PlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkWin64PlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkWin64PlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkWindowsPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{

}; 



// Class AkAudio.AkWinGDKInitializationSettings
// Size: 0xF8(Inherited: 0x28) 
struct UAkWinGDKInitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0x98(0x28)
	struct FAkWinGDKAdvancedInitializationSettings AdvancedSettings;  // 0xC0(0x34)
	char pad_244[4];  // 0xF4(0x4)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
}; 



// Class AkAudio.AkWinAnvilInitializationSettings
// Size: 0xF8(Inherited: 0xF8) 
struct UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{

}; 



// Class AkAudio.AkWinGDKPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkWinGDKPlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkWwiseTreeSelector
// Size: 0x168(Inherited: 0x108) 
struct UAkWwiseTreeSelector : public UWidget
{
	struct FMulticastInlineDelegate OnSelectionChanged;  // 0x108(0x10)
	struct FMulticastInlineDelegate OnItemDragged;  // 0x118(0x10)
	char pad_296[64];  // 0x128(0x40)

}; 



// Class AkAudio.AkXboxOneGDKInitializationSettings
// Size: 0xF8(Inherited: 0x28) 
struct UAkXboxOneGDKInitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettings CommonSettings;  // 0x30(0x60)
	struct FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings;  // 0x90(0x8)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0x98(0x28)
	struct FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings;  // 0xC0(0x34)
	char pad_244[4];  // 0xF4(0x4)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
}; 



// Class AkAudio.AkXB1InitializationSettings
// Size: 0xF8(Inherited: 0xF8) 
struct UAkXB1InitializationSettings : public UAkXboxOneGDKInitializationSettings
{

}; 



// Class AkAudio.AkXboxOneGDKPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkXB1PlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkXB1PlatformInfo : public UAkXboxOneGDKPlatformInfo
{

}; 



// Class AkAudio.AkXboxOneInitializationSettings
// Size: 0xF8(Inherited: 0x28) 
struct UAkXboxOneInitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettings CommonSettings;  // 0x30(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings;  // 0x90(0x8)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0x98(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings;  // 0xC0(0x34)
	char pad_244[4];  // 0xF4(0x4)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
}; 



// Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkXboxOnePlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.AkXSXInitializationSettings
// Size: 0xF8(Inherited: 0x28) 
struct UAkXSXInitializationSettings : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FAkCommonInitializationSettings CommonSettings;  // 0x30(0x60)
	struct FAkXSXApuHeapInitializationSettings ApuHeapSettings;  // 0x90(0x8)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0x98(0x28)
	struct FAkXSXAdvancedInitializationSettings AdvancedSettings;  // 0xC0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
}; 



// Class AkAudio.AkMPXInitializationSettings
// Size: 0xF8(Inherited: 0xF8) 
struct UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{

}; 



// Class AkAudio.AkXSXPlatformInfo
// Size: 0x70(Inherited: 0x70) 
struct UAkXSXPlatformInfo : public UAkPlatformInfo
{

}; 



// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1D0(Inherited: 0xE8) 
struct UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
	char pad_232[64];  // 0xE8(0x40)
	struct UAkAudioEvent* Event;  // 0x128(0x8)
	char pad_304_1 : 7;  // 0x130(0x1)
	bool RetriggerEvent : 1;  // 0x130(0x1)
	char pad_305[3];  // 0x131(0x3)
	int32_t ScrubTailLengthMs;  // 0x134(0x4)
	char pad_312_1 : 7;  // 0x138(0x1)
	bool StopAtSectionEnd : 1;  // 0x138(0x1)
	char pad_313[7];  // 0x139(0x7)
	struct FString EventName;  // 0x140(0x10)
	char pad_336[32];  // 0x150(0x20)
	float MaxSourceDuration;  // 0x170(0x4)
	char pad_372[4];  // 0x174(0x4)
	struct FString MaxDurationSourceID;  // 0x178(0x10)
	char pad_392[72];  // 0x188(0x48)

}; 



// Class AkAudio.MovieSceneAkTrack
// Size: 0xA8(Inherited: 0x90) 
struct UMovieSceneAkTrack : public UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x90(0x10)
	char bIsAMasterTrack : 1;  // 0xA0(0x1)
	char pad_160_1 : 7;  // 0xA0(0x1)
	char pad_161[8];  // 0xA1(0x8)

}; 



// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0xB0(Inherited: 0xA8) 
struct UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
	char pad_168[8];  // 0xA8(0x8)

}; 



// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x250(Inherited: 0xE8) 
struct UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
	struct UAkRtpc* RTPC;  // 0xE8(0x8)
	struct FString Name;  // 0xF0(0x10)
	struct FRichCurve FloatCurve;  // 0x100(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;  // 0x180(0x30)
	struct FMovieSceneFloatChannel RTPCChannel;  // 0x1B0(0xA0)

}; 



// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xB0(Inherited: 0xA8) 
struct UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
	char pad_168[8];  // 0xA8(0x8)

}; 



// Class AkAudio.PostEventAsync
// Size: 0xA0(Inherited: 0x30) 
struct UPostEventAsync : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Completed;  // 0x30(0x10)
	char pad_64[96];  // 0x40(0x60)

	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* akEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture
}; 



// Class AkAudio.PostEventAtLocationAsync
// Size: 0x80(Inherited: 0x30) 
struct UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Completed;  // 0x30(0x10)
	char pad_64[64];  // 0x40(0x40)

	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* akEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
}; 



