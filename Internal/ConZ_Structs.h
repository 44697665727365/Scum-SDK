#pragma once 
#include "SDK.h" 
 
 
// Function ConZ.ItemObstructionStatics.ChooseItemObstructionSide
// Size: 0x10(Inherited: 0x0) 
struct FChooseItemObstructionSide
{
	struct ACharacter* Character;  // 0x0(0x8)
	float existingSide;  // 0x8(0x4)
	float ReturnValue;  // 0xC(0x4)

}; 
// Function ConZ.PrisonerInventoryComponent.AddStack
// Size: 0x10(Inherited: 0x0) 
struct FAddStack
{
	struct TScriptInterface<IInventoryNode> Item;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.GearboxHandlingParameters
// Size: 0xC(Inherited: 0x0) 
struct FGearboxHandlingParameters
{
	float GearChangeDelayMultiplier;  // 0x0(0x4)
	float GearUpRatioMultiplier;  // 0x4(0x4)
	float GearDownRatioMultiplier;  // 0x8(0x4)

}; 
// Function ConZ.ItemWidget2.OnDropOperation
// Size: 0x8(Inherited: 0x0) 
struct FOnDropOperation
{
	struct UDragDropOperation* Operation;  // 0x0(0x8)

}; 
// Function ConZ.Zombie2.Server_PlayMontage
// Size: 0x8(Inherited: 0x0) 
struct FServer_PlayMontage
{
	struct UAnimMontage* Montage;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.GetRangedWeaponsSkill
// Size: 0x8(Inherited: 0x0) 
struct FGetRangedWeaponsSkill
{
	struct URangedWeaponsSkill* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.GetTargetCrouchStage
// Size: 0x4(Inherited: 0x0) 
struct FGetTargetCrouchStage
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.SpawnMenuWidget.Prisoner_GetComaDuration
// Size: 0x10(Inherited: 0x0) 
struct FPrisoner_GetComaDuration
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Client_UpdateTraderData
// Size: 0x90(Inherited: 0x0) 
struct FClient_UpdateTraderData
{
	struct FPriceUpdateData PriceUpdateData;  // 0x0(0x90)

}; 
// Function ConZ.Prisoner.GetFishingComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetFishingComponent
{
	struct UPrisonerFishingComponent* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.BankAccountRegistryRequestData
// Size: 0x1C(Inherited: 0x0) 
struct FBankAccountRegistryRequestData
{
	char pad_0[28];  // 0x0(0x1C)

}; 
// Function ConZ.Wettable.GetWaterWeight
// Size: 0x4(Inherited: 0x0) 
struct FGetWaterWeight
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.TakeItemInHandsOnServer
// Size: 0x8(Inherited: 0x0) 
struct FTakeItemInHandsOnServer
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.CharacterLegsImpactSoundData
// Size: 0x28(Inherited: 0x0) 
struct FCharacterLegsImpactSoundData
{
	struct TArray<uint8_t > ImpactSourceCategories;  // 0x0(0x10)
	struct TArray<uint8_t > ImpactTargetCategories;  // 0x10(0x10)
	struct FCharacterImpactSounds Sounds;  // 0x20(0x8)

}; 
// Function ConZ.Item.AttachToCharacterHands
// Size: 0x10(Inherited: 0x0) 
struct FAttachToCharacterHands
{
	struct AConZCharacter* Character;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ConZBase.AwardFamePointsToOnlineFlagOwners
// Size: 0xC(Inherited: 0x0) 
struct FAwardFamePointsToOnlineFlagOwners
{
	int32_t flagIndex;  // 0x0(0x4)
	float totalFlagInterval;  // 0x4(0x4)
	float fameInterval;  // 0x8(0x4)

}; 
// ScriptStruct ConZ.ContainerItemDescriptorData
// Size: 0x60(Inherited: 0x0) 
struct FContainerItemDescriptorData
{
	char pad_0[56];  // 0x0(0x38)
	struct UTexture2D* Icon;  // 0x38(0x8)
	char pad_64[32];  // 0x40(0x20)

}; 
// Function ConZ.Item.CanAutoAddItem
// Size: 0x10(Inherited: 0x0) 
struct FCanAutoAddItem
{
	struct AItem* Item;  // 0x0(0x8)
	char column;  // 0x8(0x1)
	char row;  // 0x9(0x1)
	char pad_10_1 : 7;  // 0xA(0x1)
	bool ReturnValue : 1;  // 0xA(0x1)
	char pad_11[5];  // 0xB(0x5)

}; 
// ScriptStruct ConZ.VehicleAttachmentSlot
// Size: 0x48(Inherited: 0x0) 
struct FVehicleAttachmentSlot
{
	struct TArray<struct FPrimaryAssetId> PossibleAttachmentAssetIds;  // 0x0(0x10)
	struct FGameplayTagContainer StateTags;  // 0x10(0x20)
	char pad_48[8];  // 0x30(0x8)
	struct UMaterialInstanceDynamic* ServiceModeMaterial;  // 0x38(0x8)
	struct UMeshComponent* _previewMesh;  // 0x40(0x8)

}; 
// Function ConZ.Item.GetWeightPerUse
// Size: 0x4(Inherited: 0x0) 
struct FGetWeightPerUse
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Item.GetNoiseLoudnessWhenPickedUp
// Size: 0x4(Inherited: 0x0) 
struct FGetNoiseLoudnessWhenPickedUp
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Server_UnlockedAchievement
// Size: 0x18(Inherited: 0x0) 
struct FServer_UnlockedAchievement
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct FString AchievementID;  // 0x8(0x10)

}; 
// Function ConZ.Item.AutoAddItemToInventoryNode
// Size: 0x18(Inherited: 0x0) 
struct FAutoAddItemToInventoryNode
{
	struct TScriptInterface<IInventoryNode> Item;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.InventoryContainer2D.OnActorItemDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnActorItemDestroyed
{
	struct AActor* Actor;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PlayerLoginInfo
// Size: 0x40(Inherited: 0x0) 
struct FPlayerLoginInfo
{
	struct FString UserId;  // 0x0(0x10)
	struct FDbIntegerId UserProfileId;  // 0x10(0x8)
	struct FString UserProfileName;  // 0x18(0x10)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool IsUserAdmin : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool IsUserServerSettingsAdmin : 1;  // 0x29(0x1)
	char pad_42_1 : 7;  // 0x2A(0x1)
	bool PlayAsDrone : 1;  // 0x2A(0x1)
	struct FDeluxeVersion DeluxeVersion;  // 0x2B(0x5)
	int32_t ServerResponsePort;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)
	struct FDbIntegerId ServerUserProfileId;  // 0x38(0x8)

}; 
// Function ConZ.PrisonerBodyCondition_KillBoxGasPoisoning.Client_TriggerDamagedEffect
// Size: 0x8(Inherited: 0x0) 
struct FClient_TriggerDamagedEffect
{
	float Duration;  // 0x0(0x4)
	float Intensity;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.EventsRankingStats
// Size: 0x30(Inherited: 0x0) 
struct FEventsRankingStats
{
	char pad_0[8];  // 0x0(0x8)
	float FamePoints;  // 0x8(0x4)
	int32_t FameLevel;  // 0xC(0x4)
	float EventScore;  // 0x10(0x4)
	int32_t EventKills;  // 0x14(0x4)
	int32_t EventTeamKills;  // 0x18(0x4)
	int32_t EventDeaths;  // 0x1C(0x4)
	int32_t EventSuicides;  // 0x20(0x4)
	int32_t EventAssists;  // 0x24(0x4)
	int32_t EventHeadshots;  // 0x28(0x4)
	char pad_44_1 : 7;  // 0x2C(0x1)
	bool IsBanned : 1;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)

}; 
// Function ConZ.AIDetectionTimerHandler.OnDestroyedEvent
// Size: 0x8(Inherited: 0x0) 
struct FOnDestroyedEvent
{
	struct AActor* DestroyedActor;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.VisibilityReplication
// Size: 0x8(Inherited: 0x0) 
struct FVisibilityReplication
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t RepHelper;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.InventoryItemComponentReplicatedPageData
// Size: 0x18(Inherited: 0x0) 
struct FInventoryItemComponentReplicatedPageData
{
	struct TArray<struct FInventoryItemComponentElement> Elements;  // 0x0(0x10)
	int32_t Version;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.Prisoner.IsAliveInGameEvent
// Size: 0x1(Inherited: 0x0) 
struct FIsAliveInGameEvent
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.MultiplierByClass
// Size: 0x10(Inherited: 0x0) 
struct FMultiplierByClass
{
	UObject* ObjectClass;  // 0x0(0x8)
	float Multiplier;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.AttributeMapInterface.GetBoolAttribute
// Size: 0x18(Inherited: 0x0) 
struct FGetBoolAttribute
{
	struct FString Name;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.ComplexAnimal2.TurnAwayFromActor
// Size: 0x10(Inherited: 0x0) 
struct FTurnAwayFromActor
{
	struct AActor* foe;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Item.DropAt
// Size: 0x1C(Inherited: 0x0) 
struct FDropAt
{
	struct FVector dropLocation;  // 0x0(0xC)
	struct FRotator dropRotation;  // 0xC(0xC)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)

}; 
// Function ConZ.Item.Blink
// Size: 0x4(Inherited: 0x0) 
struct FBlink
{
	float Duration;  // 0x0(0x4)

}; 
// Function ConZ.AudioStatics.GetMotionIntensitySwitchName
// Size: 0x8(Inherited: 0x0) 
struct FGetMotionIntensitySwitchName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Item.CanBeCraftedByCharactrer
// Size: 0x10(Inherited: 0x0) 
struct FCanBeCraftedByCharactrer
{
	struct ACharacter* Character;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Item.GetWidgetDisplayInfo
// Size: 0xC(Inherited: 0x0) 
struct FGetWidgetDisplayInfo
{
	struct FWidgetDisplayInfo ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.Objective.GetDescription
// Size: 0x18(Inherited: 0x0) 
struct FGetDescription
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// ScriptStruct ConZ.MeleeAttackCapsuleHitInfo
// Size: 0x130(Inherited: 0x0) 
struct FMeleeAttackCapsuleHitInfo
{
	struct FMeleeAttackCapsule MeleeAttackCapsule;  // 0x0(0x80)
	struct FHitResult HitResult;  // 0x80(0x88)
	uint8_t  HitSeverity;  // 0x108(0x1)
	uint8_t  AttackType;  // 0x109(0x1)
	char pad_266[2];  // 0x10A(0x2)
	struct FVector_NetQuantize100 AttackerLocation;  // 0x10C(0xC)
	struct FVector_NetQuantize100 VictimLocation;  // 0x118(0xC)
	char pad_292[12];  // 0x124(0xC)

}; 
// Function ConZ.FishingAttachment.Equip
// Size: 0x8(Inherited: 0x0) 
struct FEquip
{
	struct AFishingRod* FishingRod;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerInventoryComponent.CanAddItem
// Size: 0x10(Inherited: 0x0) 
struct FCanAddItem
{
	struct AItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool tryToJoinItems : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool ReturnValue : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// Function ConZ.FishingRod.Server_AddAttachment
// Size: 0x8(Inherited: 0x0) 
struct FServer_AddAttachment
{
	struct AFishingAttachment* Attachment;  // 0x0(0x8)

}; 
// Function ConZ.Item.NetMulticast_SetActorDropLocationAndRotation
// Size: 0x18(Inherited: 0x0) 
struct FNetMulticast_SetActorDropLocationAndRotation
{
	struct FVector Location;  // 0x0(0xC)
	struct FRotator Rotation;  // 0xC(0xC)

}; 
// Function ConZ.Prisoner.AddToSquadOnServer
// Size: 0x8(Inherited: 0x0) 
struct FAddToSquadOnServer
{
	struct FDbIntegerId squadId;  // 0x0(0x8)

}; 
// Function ConZ.Lockpickable.CanInitiateLockpickingFor
// Size: 0x10(Inherited: 0x0) 
struct FCanInitiateLockpickingFor
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Item.CanBeDroppedBy
// Size: 0x10(Inherited: 0x0) 
struct FCanBeDroppedBy
{
	struct AConZCharacter* Character;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Item.CanBeMeleeWeapon
// Size: 0x1(Inherited: 0x0) 
struct FCanBeMeleeWeapon
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Zombie2.Server_PlayTurnMontage
// Size: 0x8(Inherited: 0x0) 
struct FServer_PlayTurnMontage
{
	uint8_t  turnMontage;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float turnAngle;  // 0x4(0x4)

}; 
// Function ConZ.Prisoner.NetMulticast_SpawnUrinationEffects
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_SpawnUrinationEffects
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool isForced : 1;  // 0x0(0x1)

}; 
// Function ConZ.Item.GetObstructionTestCapsules
// Size: 0x10(Inherited: 0x0) 
struct FGetObstructionTestCapsules
{
	struct TArray<struct FItemObstructionTestCapsule> capsules;  // 0x0(0x10)

}; 
// Function ConZ.ConZGameMode.GetLadderMarkersReplicator
// Size: 0x8(Inherited: 0x0) 
struct FGetLadderMarkersReplicator
{
	struct ALadderMarkersReplicator* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerInventoryComponent.CanStack
// Size: 0x1(Inherited: 0x0) 
struct FCanStack
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.SwitchToVehicleSeatIndex
// Size: 0x4(Inherited: 0x0) 
struct FSwitchToVehicleSeatIndex
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerInventoryComponent.CanStackWith
// Size: 0x10(Inherited: 0x0) 
struct FCanStackWith
{
	struct UObject* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ConZ.GameResourceMixingRule
// Size: 0x18(Inherited: 0x0) 
struct FGameResourceMixingRule
{
	UGameResourceType* Source;  // 0x0(0x8)
	UGameResourceType* Destination;  // 0x8(0x8)
	UGameResourceType* Result;  // 0x10(0x8)

}; 
// Function ConZ.Item.GetOutsideInventoryIcon
// Size: 0x8(Inherited: 0x0) 
struct FGetOutsideInventoryIcon
{
	struct UTexture2D* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.WeaponAttachmentMagazine.Server_InsertCartridgeIntoMagazine
// Size: 0x8(Inherited: 0x0) 
struct FServer_InsertCartridgeIntoMagazine
{
	struct AAmmunitionItem* ammo;  // 0x0(0x8)

}; 
// DelegateFunction ConZ.Item.DebugTextChangedDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FDebugTextChangedDelegate__DelegateSignature
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.HuntingManager.NetMulticast_PlayClueSound
// Size: 0x40(Inherited: 0x0) 
struct FNetMulticast_PlayClueSound
{
	struct TSoftObjectPtr<UAkAudioEvent> clueAudioEvent;  // 0x0(0x28)
	struct FVector clueLocation;  // 0x28(0xC)
	float clueHearingDistance;  // 0x34(0x4)
	float clueMinApparentDistance;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 
// ScriptStruct ConZ.ConZSquadEmblemElement
// Size: 0x4(Inherited: 0x0) 
struct FConZSquadEmblemElement
{
	char ShapeIndex;  // 0x0(0x1)
	char PrimaryColorIndex;  // 0x1(0x1)
	char SecondaryColorIndex;  // 0x2(0x1)
	char TertiaryColorIndex;  // 0x3(0x1)

}; 
// Function ConZ.Item.Repair
// Size: 0x4(Inherited: 0x0) 
struct FRepair
{
	float healthToRepair;  // 0x0(0x4)

}; 
// Function ConZ.ConZPlayerController.Client_SetGameEventCooldown
// Size: 0x4(Inherited: 0x0) 
struct FClient_SetGameEventCooldown
{
	float cooldown;  // 0x0(0x4)

}; 
// Function ConZ.WeaponAction.AddAttachmentToWeapon
// Size: 0x10(Inherited: 0x0) 
struct FAddAttachmentToWeapon
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	struct AWeaponAttachment* Attachment;  // 0x8(0x8)

}; 
// Function ConZ.HoverPanelWidget.SetScreenPosition
// Size: 0x8(Inherited: 0x0) 
struct FSetScreenPosition
{
	struct FVector2D position;  // 0x0(0x8)

}; 
// Function ConZ.Item.Drop
// Size: 0x2(Inherited: 0x0) 
struct FDrop
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool wasThrown : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool dropDown : 1;  // 0x1(0x1)

}; 
// ScriptStruct ConZ.GameEventRewardPoints
// Size: 0xC(Inherited: 0x0) 
struct FGameEventRewardPoints
{
	int32_t Cash;  // 0x0(0x4)
	int32_t Score;  // 0x4(0x4)
	float FamePoints;  // 0x8(0x4)

}; 
// Function ConZ.Item.DropAround
// Size: 0x10(Inherited: 0x0) 
struct FDropAround
{
	struct AActor* Actor;  // 0x0(0x8)
	float Radius;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function ConZ.WeaponAttachmentMagazine.GetAmmo
// Size: 0x10(Inherited: 0x0) 
struct FGetAmmo
{
	struct TArray<struct FAmmunitionData> ammo;  // 0x0(0x10)

}; 
// Function ConZ.Prisoner.Server_RemoveInventoryNode
// Size: 0x38(Inherited: 0x0) 
struct FServer_RemoveInventoryNode
{
	struct UObject* Item;  // 0x0(0x8)
	struct UObject* container;  // 0x8(0x8)
	struct FInventoryPositionDataRepHelper position;  // 0x10(0x20)
	struct UObject* Target;  // 0x30(0x8)

}; 
// ScriptStruct ConZ.PlayerUnsubscribeData
// Size: 0x78(Inherited: 0x0) 
struct FPlayerUnsubscribeData
{
	char pad_0[120];  // 0x0(0x78)

}; 
// Function ConZ.Item.FindAnimationMontage
// Size: 0x18(Inherited: 0x0) 
struct FFindAnimationMontage
{
	struct UObject* Context;  // 0x0(0x8)
	uint8_t  prisonerMontageType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct UAnimMontage* ReturnValue;  // 0x10(0x8)

}; 
// DelegateFunction ConZ.CCSliderDeselected__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FCCSliderDeselected__DelegateSignature
{
	struct UCCSkillSliderWidget* Slider;  // 0x0(0x8)

}; 
// Function ConZ.Item.GetSizeY
// Size: 0x4(Inherited: 0x0) 
struct FGetSizeY
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZPlayerController.GetRespawnOptionTime
// Size: 0x8(Inherited: 0x0) 
struct FGetRespawnOptionTime
{
	uint8_t  option;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.ConZGerstnerWavesParameters
// Size: 0x10(Inherited: 0x0) 
struct FConZGerstnerWavesParameters
{
	float angle;  // 0x0(0x4)
	float Height;  // 0x4(0x4)
	float Length;  // 0x8(0x4)
	float Steepness;  // 0xC(0x4)

}; 
// Function ConZ.Weapon.GetMuzzleLocation
// Size: 0xC(Inherited: 0x0) 
struct FGetMuzzleLocation
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.Prisoner.IsInFishingMinigame
// Size: 0x1(Inherited: 0x0) 
struct FIsInFishingMinigame
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.IsInDanger
// Size: 0x1(Inherited: 0x0) 
struct FIsInDanger
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerInventoryComponent.DropItemOnClient
// Size: 0x8(Inherited: 0x0) 
struct FDropItemOnClient
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.IsMalfunctionSupported
// Size: 0x2(Inherited: 0x0) 
struct FIsMalfunctionSupported
{
	uint8_t  malfunction;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// Function ConZ.PlayerRpcChannel.Admin_Server_TeleportTo
// Size: 0x18(Inherited: 0x0) 
struct FAdmin_Server_TeleportTo
{
	struct APlayerController* Controller;  // 0x0(0x8)
	struct FString teleportToUserId;  // 0x8(0x10)

}; 
// Function ConZ.GameEventBase.GetRoundTimeLeft
// Size: 0x4(Inherited: 0x0) 
struct FGetRoundTimeLeft
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.KillboxComponent.AddTimerWidget
// Size: 0x8(Inherited: 0x0) 
struct FAddTimerWidget
{
	struct UKillBoxTimerWidget* timerWidget;  // 0x0(0x8)

}; 
// Function ConZ.TextInputWidget.OnTextBoxTextChanged
// Size: 0x18(Inherited: 0x0) 
struct FOnTextBoxTextChanged
{
	struct FText Text;  // 0x0(0x18)

}; 
// ScriptStruct ConZ.WeaponMalfunctionData
// Size: 0xA8(Inherited: 0x0) 
struct FWeaponMalfunctionData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool UseCustomProbabilityCurve : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FRuntimeFloatCurve ProbabilityCurve;  // 0x8(0x88)
	UWeaponActionClearMalfunctionSequence* ClearMalfunctionSequence;  // 0x90(0x8)
	struct TArray<UWeaponActionClearMalfunctionSequence*> ClearMalfunctionSequences;  // 0x98(0x10)

}; 
// ScriptStruct ConZ.PrisonerActionDifficultyCurve
// Size: 0x18(Inherited: 0x0) 
struct FPrisonerActionDifficultyCurve
{
	float _resting;  // 0x0(0x4)
	float _idle;  // 0x4(0x4)
	float _easy;  // 0x8(0x4)
	float _demanding;  // 0xC(0x4)
	float _veryDemanding;  // 0x10(0x4)
	float _extremelyDemanding;  // 0x14(0x4)

}; 
// Function ConZ.Item.GetPrisonerAnimationSet
// Size: 0x1(Inherited: 0x0) 
struct FGetPrisonerAnimationSet
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.MeleeHitDetectionMarker
// Size: 0x80(Inherited: 0x0) 
struct FMeleeHitDetectionMarker
{
	float Time;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FTransform Transform;  // 0x10(0x30)
	struct FTransform RootMotion;  // 0x40(0x30)
	float DamageMultiplier;  // 0x70(0x4)
	float SelectionWeight;  // 0x74(0x4)
	char pad_120[8];  // 0x78(0x8)

}; 
// ScriptStruct ConZ.CombinationLockUnlockAttemptRequestData
// Size: 0x3C(Inherited: 0x0) 
struct FCombinationLockUnlockAttemptRequestData
{
	char pad_0[60];  // 0x0(0x3C)

}; 
// Function ConZ.TeamDeathmatchGameEvent.SetTeamDeathmatchParameters
// Size: 0x14(Inherited: 0x0) 
struct FSetTeamDeathmatchParameters
{
	struct FTeamDeathmatchParameters Params;  // 0x0(0x14)

}; 
// Function ConZ.Item.FindCharacterAndItemAnimation
// Size: 0x20(Inherited: 0x0) 
struct FFindCharacterAndItemAnimation
{
	struct UObject* Context;  // 0x0(0x8)
	uint8_t  prisonerMontageType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FCharacterAndItemAnimation ReturnValue;  // 0x10(0x10)

}; 
// ScriptStruct ConZ.ActiveHit
// Size: 0xC(Inherited: 0x0) 
struct FActiveHit
{
	char pad_0[12];  // 0x0(0xC)

}; 
// Function ConZ.Prisoner.GetPrisonWalletComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetPrisonWalletComponent
{
	struct UPrisonerPrisonWalletComponent* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.CharacterAndItemAnimation
// Size: 0x10(Inherited: 0x0) 
struct FCharacterAndItemAnimation
{
	struct UAnimMontage* CharacterMontage;  // 0x0(0x8)
	struct UAnimMontage* ItemMontage;  // 0x8(0x8)

}; 
// Function ConZ.InspectedItemWidget.SetIsToolForSomething
// Size: 0x1(Inherited: 0x0) 
struct FSetIsToolForSomething
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsTool : 1;  // 0x0(0x1)

}; 
// Function ConZ.PlayerDrone.Server_TeleportToNextOrPreviousPlayer
// Size: 0x1(Inherited: 0x0) 
struct FServer_TeleportToNextOrPreviousPlayer
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Next : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.Client_Interact
// Size: 0x78(Inherited: 0x0) 
struct FClient_Interact
{
	struct UObject* interactable;  // 0x0(0x8)
	uint8_t  interactionType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FInteractionData InteractionData;  // 0x10(0x68)

}; 
// Function ConZ.Weapon.GetOverrideUseWeaponAnimationPose
// Size: 0x1(Inherited: 0x0) 
struct FGetOverrideUseWeaponAnimationPose
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.InventoryStackData
// Size: 0x80(Inherited: 0x0) 
struct FInventoryStackData
{
	UObject* _stackClass;  // 0x0(0x8)
	float _approximateCount;  // 0x8(0x4)
	float _approximateMaxCount;  // 0xC(0x4)
	float _weight;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct TArray<char> _data;  // 0x18(0x10)
	char pad_40[88];  // 0x28(0x58)

}; 
// Function ConZ.Item.GetAllContainedItems
// Size: 0x18(Inherited: 0x0) 
struct FGetAllContainedItems
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool recursive : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct AItem*> ReturnValue;  // 0x8(0x10)

}; 
// Function ConZ.CharacterSpawnerSpawnee.SetupCharacter
// Size: 0x10(Inherited: 0x0) 
struct FSetupCharacter
{
	struct FCharacterSpawneeInfo spawneeInfo;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.ScopeZoomLevelSettings
// Size: 0x570(Inherited: 0x0) 
struct FScopeZoomLevelSettings
{
	float Magnification;  // 0x0(0x4)
	float DisplayedMagnification;  // 0x4(0x4)
	char pad_8[8];  // 0x8(0x8)
	struct FPostProcessSettings PostProcessSettings;  // 0x10(0x560)

}; 
// Function ConZ.Item.GetInventoryGridSizeY
// Size: 0x4(Inherited: 0x0) 
struct FGetInventoryGridSizeY
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Zombie2.GetAimOffset
// Size: 0xC(Inherited: 0x0) 
struct FGetAimOffset
{
	struct FRotator ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.CraftingRecipeWidget.GetCaption
// Size: 0x18(Inherited: 0x0) 
struct FGetCaption
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function ConZ.ConZPlayerController.Client_UpdateRespawnSettings
// Size: 0x6C(Inherited: 0x0) 
struct FClient_UpdateRespawnSettings
{
	struct FRespawnParameters parameters;  // 0x0(0x6C)

}; 
// Function ConZ.ItemTooltipPanelElement.OnNumberDataChanged
// Size: 0x4(Inherited: 0x0) 
struct FOnNumberDataChanged
{
	float Value;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.CharacterLegsImpactSoundsData
// Size: 0x18(Inherited: 0x0) 
struct FCharacterLegsImpactSoundsData
{
	struct TArray<struct FCharacterLegsImpactSoundData> SoundsData;  // 0x0(0x10)
	struct FCharacterImpactSounds FallbackSounds;  // 0x10(0x8)

}; 
// Function ConZ.BaseItemContainerWidget.GetSlotsForPanel
// Size: 0x38(Inherited: 0x0) 
struct FGetSlotsForPanel
{
	struct UGridSlot* GridSlot;  // 0x0(0x8)
	int32_t Width;  // 0x8(0x4)
	int32_t Height;  // 0xC(0x4)
	struct TArray<struct UInventorySlotUserWidget*> Slots;  // 0x10(0x10)
	struct UGridPanel* panel;  // 0x20(0x8)
	int32_t numColumns;  // 0x28(0x4)
	int32_t numRows;  // 0x2C(0x4)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ReturnValue : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function ConZ.Item.GetMeshComponentForAttachmentToItem
// Size: 0x10(Inherited: 0x0) 
struct FGetMeshComponentForAttachmentToItem
{
	struct AItem* Item;  // 0x0(0x8)
	struct UMeshComponent* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.ConZGameInstance.GetLastNetworkError
// Size: 0x18(Inherited: 0x0) 
struct FGetLastNetworkError
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function ConZ.TextInputWidget.OnTextBoxTextCommitted
// Size: 0x20(Inherited: 0x0) 
struct FOnTextBoxTextCommitted
{
	struct FText Text;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.Prisoner.SetFreeLookEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetFreeLookEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.Item.GetContainerDamagePercentage
// Size: 0x4(Inherited: 0x0) 
struct FGetContainerDamagePercentage
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.GetCurrentHitReactType
// Size: 0x8(Inherited: 0x0) 
struct FGetCurrentHitReactType
{
	struct FGameplayTag ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Zombie2.OnRep_Stance
// Size: 0x1(Inherited: 0x0) 
struct FOnRep_Stance
{
	uint8_t  oldValue;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.IsActorMeleeTargetCandidate
// Size: 0x10(Inherited: 0x0) 
struct FIsActorMeleeTargetCandidate
{
	struct AActor* Actor;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Item.GetDefaultMaxHealth
// Size: 0x4(Inherited: 0x0) 
struct FGetDefaultMaxHealth
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZPlayerController.Server_RequestSquadRankingData
// Size: 0x18(Inherited: 0x0) 
struct FServer_RequestSquadRankingData
{
	uint32_t ID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FDbIntegerId squadId;  // 0x8(0x8)
	int32_t Count;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ConZ.PossibleChoppingTools
// Size: 0x10(Inherited: 0x0) 
struct FPossibleChoppingTools
{
	struct TArray<struct FChoppingTool2> PossibleTools;  // 0x0(0x10)

}; 
// Function ConZ.Zombie2.GetHealth
// Size: 0x4(Inherited: 0x0) 
struct FGetHealth
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.FoliageAIPerceptionData
// Size: 0x2(Inherited: 0x0) 
struct FFoliageAIPerceptionData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool CanCoverPrisoner : 1;  // 0x0(0x1)
	uint8_t  MaxUndetectedPrisonerStance;  // 0x1(0x1)

}; 
// Function ConZ.Prisoner.Client_LoadAmmoIntoMagazine
// Size: 0x18(Inherited: 0x0) 
struct FClient_LoadAmmoIntoMagazine
{
	struct AWeaponAttachmentMagazine* magazine;  // 0x0(0x8)
	struct TArray<struct FAmmunitionData> ammoData;  // 0x8(0x10)

}; 
// Function ConZ.ConZGameInstance.OnPreLoadMap
// Size: 0x10(Inherited: 0x0) 
struct FOnPreLoadMap
{
	struct FString mapName;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.PrisonerAppearance_Tattoo
// Size: 0x58(Inherited: 0x0) 
struct FPrisonerAppearance_Tattoo
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool RequiresGameUpgrade : 1;  // 0x0(0x1)
	uint8_t  GameUpgradeRequired;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture2D>> TattooTextures;  // 0x8(0x50)

}; 
// ScriptStruct ConZ.ProximityReplenishedResourceDescription
// Size: 0x10(Inherited: 0x0) 
struct FProximityReplenishedResourceDescription
{
	float ReplenishChance;  // 0x0(0x4)
	struct FFloatInterval ReplenishAmount;  // 0x4(0x8)
	float ReplenishTimeout;  // 0xC(0x4)

}; 
// Function ConZ.Item.SetHealthAndUsage
// Size: 0x8(Inherited: 0x0) 
struct FSetHealthAndUsage
{
	float health;  // 0x0(0x4)
	int32_t Usage;  // 0x4(0x4)

}; 
// Function ConZ.Item.GetMeshComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetMeshComponent
{
	struct UMeshComponent* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ChargeAttackData
// Size: 0x20(Inherited: 0x0) 
struct FChargeAttackData
{
	struct UAnimMontage* Montage;  // 0x0(0x8)
	float RegainControlDurationModifier;  // 0x8(0x4)
	float Range;  // 0xC(0x4)
	float Speed;  // 0x10(0x4)
	float Height;  // 0x14(0x4)
	float lengthOverride;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.Item.GetIgnoreSupportingHandIK
// Size: 0x1(Inherited: 0x0) 
struct FGetIgnoreSupportingHandIK
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.MissionData
// Size: 0xB8(Inherited: 0x0) 
struct FMissionData
{
	struct FText MissionName;  // 0x0(0x18)
	struct FText MissionCategory;  // 0x18(0x18)
	struct FText MissionDescription;  // 0x30(0x18)
	uint8_t  MissionType;  // 0x48(0x1)
	char pad_73[3];  // 0x49(0x3)
	int32_t MissionOrdinalNumber;  // 0x4C(0x4)
	uint8_t  MissionState;  // 0x50(0x1)
	uint8_t  MissionFaction;  // 0x51(0x1)
	char pad_82[6];  // 0x52(0x6)
	struct TArray<struct TSoftObjectPtr<ALocationTrigger>> MissionStartingLocations;  // 0x58(0x10)
	int32_t IntendedNumberOfPlayers;  // 0x68(0x4)
	float MissionCooldown;  // 0x6C(0x4)
	char pad_112[8];  // 0x70(0x8)
	struct FString MissionAssetId;  // 0x78(0x10)
	struct TArray<struct FObjectiveData> ObjectivesData;  // 0x88(0x10)
	struct FMissionReward MissionReward;  // 0x98(0x18)
	struct UTexture2D* MissionBannerImage;  // 0xB0(0x8)

}; 
// Function ConZ.Prisoner.Server_SyncWeaponState
// Size: 0x50(Inherited: 0x0) 
struct FServer_SyncWeaponState
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	struct FWeaponStateSyncData Data;  // 0x8(0x48)

}; 
// Function ConZ.Prisoner.Server_SetVehicleWeaponAimingStance
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetVehicleWeaponAimingStance
{
	uint8_t  stance;  // 0x0(0x1)

}; 
// Function ConZ.Item.GetInventoryGridSizeX
// Size: 0x4(Inherited: 0x0) 
struct FGetInventoryGridSizeX
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.KeyboardIllumination.PrintSCUM
// Size: 0x4(Inherited: 0x0) 
struct FPrintSCUM
{
	struct FColor Color;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Server_InstrumentPlayTone
// Size: 0xC(Inherited: 0x0) 
struct FServer_InstrumentPlayTone
{
	uint8_t  tone;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float timeOffset;  // 0x4(0x4)
	int32_t octave;  // 0x8(0x4)

}; 
// Function ConZ.CursedScrollBar.CallSetToUpdateFromValue
// Size: 0xC(Inherited: 0x0) 
struct FCallSetToUpdateFromValue
{
	float Value;  // 0x0(0x4)
	float MaxCountOnScreen;  // 0x4(0x4)
	float MaxValue;  // 0x8(0x4)

}; 
// Function ConZ.Item.GetInventoryIcon
// Size: 0x8(Inherited: 0x0) 
struct FGetInventoryIcon
{
	struct UTexture2D* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Item.GetInventoryIconInHands
// Size: 0x8(Inherited: 0x0) 
struct FGetInventoryIconInHands
{
	struct UTexture2D* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerHUD.SetHUDMode
// Size: 0x1(Inherited: 0x0) 
struct FSetHUDMode
{
	uint8_t  NewMode;  // 0x0(0x1)

}; 
// Function ConZ.ItemTooltipPanel.UpdateVisuals
// Size: 0x10(Inherited: 0x0) 
struct FUpdateVisuals
{
	struct TArray<struct FInventoryNodeWidgetData> widgetData;  // 0x0(0x10)

}; 
// Function ConZ.Prisoner.DemoteSquadMemberOnServer
// Size: 0x8(Inherited: 0x0) 
struct FDemoteSquadMemberOnServer
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.Bandage
// Size: 0xC(Inherited: 0x0) 
struct FBandage
{
	float _ratio;  // 0x0(0x4)
	float _asepsis;  // 0x4(0x4)
	float _stabilizationDurationReduction;  // 0x8(0x4)

}; 
// Function ConZ.ConZBaseManager.NetMulticast_ExecuteFlagOvertake
// Size: 0x28(Inherited: 0x0) 
struct FNetMulticast_ExecuteFlagOvertake
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	int64_t ElementID;  // 0x8(0x8)
	struct FVector elementLocation;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)
	struct FDbIntegerId PlayerId;  // 0x20(0x8)

}; 
// Function ConZ.Prisoner.DidGameEventRoundStarted
// Size: 0x1(Inherited: 0x0) 
struct FDidGameEventRoundStarted
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.TradeableClassAndQuantity
// Size: 0x30(Inherited: 0x0) 
struct FTradeableClassAndQuantity
{
	char pad_0[48];  // 0x0(0x30)

}; 
// Function ConZ.Zombie2.GetMaxHealth
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxHealth
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZPlayerController.IsUserAdmin
// Size: 0x1(Inherited: 0x0) 
struct FIsUserAdmin
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.TrashSliderWidget.SetValue
// Size: 0x4(Inherited: 0x0) 
struct FSetValue
{
	float Value;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.WeaponReloadData
// Size: 0x30(Inherited: 0x0) 
struct FWeaponReloadData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsQuick : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct AItem* Item;  // 0x8(0x8)
	struct AItem* Item2;  // 0x10(0x8)
	int32_t Count;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	UObject* ReloadSequenceClass;  // 0x20(0x8)
	float AnimationPlayRate;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function ConZ.GameEventBase.NetMulticast_UpdateScoreboard
// Size: 0xC(Inherited: 0x0) 
struct FNetMulticast_UpdateScoreboard
{
	int32_t victimIndex;  // 0x0(0x4)
	int32_t killerIndex;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool IsHeadShot : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function ConZ.Item.GetNormalizedHealth
// Size: 0x4(Inherited: 0x0) 
struct FGetNormalizedHealth
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ClockFaceWidget.SetMinutes
// Size: 0x4(Inherited: 0x0) 
struct FSetMinutes
{
	int32_t Minutes;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Client_OnNoiseInstigated
// Size: 0x4(Inherited: 0x0) 
struct FClient_OnNoiseInstigated
{
	float noiseLevel;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.PrisonerBodySimulationData_ConsumableDigestionHandlersForValueRange
// Size: 0x28(Inherited: 0x0) 
struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRange
{
	struct FFloatRange ValueRange;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool IsConstrainedByConsumptionMethod : 1;  // 0x10(0x1)
	uint8_t  ConsumptionMethodConstraint;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)
	struct TArray<struct UConsumableDigestionHandler*> DigestionHandlers;  // 0x18(0x10)

}; 
// Function ConZ.ChangeTextWidget.OnCurrentInputTextChanged
// Size: 0x18(Inherited: 0x0) 
struct FOnCurrentInputTextChanged
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function ConZ.User.GetProfileNames
// Size: 0x18(Inherited: 0x0) 
struct FGetProfileNames
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FString> ReturnValue;  // 0x8(0x10)

}; 
// Function ConZ.Item.GetNoiseLoudnessOnGroundImpact
// Size: 0x4(Inherited: 0x0) 
struct FGetNoiseLoudnessOnGroundImpact
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.SwingItemComponent.NetMulticast_SetSwingSpeedLevel
// Size: 0x8(Inherited: 0x0) 
struct FNetMulticast_SetSwingSpeedLevel
{
	int32_t Value;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool shouldPlaySwingMontageEndSection : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.Prisoner.GetWetness
// Size: 0x4(Inherited: 0x0) 
struct FGetWetness
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZPlayerController.SetCommitSuicideOptionTime
// Size: 0x4(Inherited: 0x0) 
struct FSetCommitSuicideOptionTime
{
	float Time;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.SpamConsequences
// Size: 0x8(Inherited: 0x0) 
struct FSpamConsequences
{
	float Timeout;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool PermanentTimeout : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.Item.GetNoiseLoudnessWhenDropped
// Size: 0x4(Inherited: 0x0) 
struct FGetNoiseLoudnessWhenDropped
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZPlayerController.SetGameEventCooldown
// Size: 0x4(Inherited: 0x0) 
struct FSetGameEventCooldown
{
	float cooldown;  // 0x0(0x4)

}; 
// Function ConZ.Item.Multicast_Throw
// Size: 0x24(Inherited: 0x0) 
struct FMulticast_Throw
{
	struct FVector ZeroBasedStartPosition;  // 0x0(0xC)
	struct FRotator StartRotation;  // 0xC(0xC)
	struct FVector StartVelocity;  // 0x18(0xC)

}; 
// ScriptStruct ConZ.ItemSpawnerPreset_Node
// Size: 0x28(Inherited: 0x0) 
struct FItemSpawnerPreset_Node
{
	struct FGameplayTagContainer Nodes;  // 0x0(0x20)
	uint8_t  Rarity;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function ConZ.ConZBorderBase.SetColor
// Size: 0x10(Inherited: 0x0) 
struct FSetColor
{
	struct FLinearColor Color;  // 0x0(0x10)

}; 
// Function ConZ.Item.GetNormalizedMaxHealth
// Size: 0x4(Inherited: 0x0) 
struct FGetNormalizedMaxHealth
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.MetabolismConfiguration
// Size: 0x460(Inherited: 0x0) 
struct FMetabolismConfiguration
{
	float InitialAbsorbedEnergyRatio;  // 0x0(0x4)
	float InitialAbsorbedWaterRatio;  // 0x4(0x4)
	float InitialAbsorbedVitaminsRatio;  // 0x8(0x4)
	float InitialAbsorbedMineralsRatio;  // 0xC(0x4)
	float InitialColonFullness;  // 0x10(0x4)
	float InitialBladderFullness;  // 0x14(0x4)
	float MaxStomachVolume;  // 0x18(0x4)
	float MaxIntestineVolume;  // 0x1C(0x4)
	float MaxColonVolume;  // 0x20(0x4)
	float MaxBladderVolume;  // 0x24(0x4)
	float EnergyAbsorptionCapacityMultiplier;  // 0x28(0x4)
	float WaterAbsorptionCapacityMultiplier;  // 0x2C(0x4)
	float AlcoholAbsorptionBaseCapacity;  // 0x30(0x4)
	float AbsorbedAlcoholDiscardRate;  // 0x34(0x4)
	float MaxEnergyToRecoverFromFatPerHour;  // 0x38(0x4)
	float MaxAbsorbedEnergyExcessToStoreAsFatPerHour;  // 0x3C(0x4)
	struct FSubstancesData NutrientsAbsorptionRateModifier;  // 0x40(0xD0)
	float MinSubstancesToAbsorbRatio;  // 0x110(0x4)
	char pad_276[4];  // 0x114(0x4)
	struct FSubstancesData AbsorbedNonEnergyProvidingNutrientsExcessDiscardRateMultiplier;  // 0x118(0xD0)
	struct FSubstancesData AdditionalRequiredWaterPerNutrientAbsorbed;  // 0x1E8(0xD0)
	float IntestineToColonFecesTransferRate;  // 0x2B8(0x4)
	char pad_700[4];  // 0x2BC(0x4)
	struct FSubstancesData NutrientAbsorptionWasteFecesRatios;  // 0x2C0(0xD0)
	struct FSubstancesData NutrientAbsorptionWasteUrineRatios;  // 0x390(0xD0)

}; 
// ScriptStruct ConZ.ItemObstructionTestCapsule
// Size: 0x50(Inherited: 0x0) 
struct FItemObstructionTestCapsule
{
	char pad_0[80];  // 0x0(0x50)

}; 
// Function ConZ.VehicleHitZoneManager.SetVehicleDoorWindowHitMeshAttached
// Size: 0x8(Inherited: 0x0) 
struct FSetVehicleDoorWindowHitMeshAttached
{
	int32_t doorIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool Value : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// ScriptStruct ConZ.CharacterMeshManagerPerSlotData
// Size: 0x10(Inherited: 0x0) 
struct FCharacterMeshManagerPerSlotData
{
	struct TArray<UCharacterMesh*> CharacterMeshLayers;  // 0x0(0x10)

}; 
// Function ConZ.Item.GetSizeX
// Size: 0x4(Inherited: 0x0) 
struct FGetSizeX
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.GameEventFriendlyFireCheck
// Size: 0x10(Inherited: 0x0) 
struct FGameEventFriendlyFireCheck
{
	struct APrisoner* Other;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ChangeTextWidget.SetCurrentInputText_BP
// Size: 0x18(Inherited: 0x0) 
struct FSetCurrentInputText_BP
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function ConZ.PrisonerInventoryComponent.UnEquipStolenClothesItemOnServer
// Size: 0x10(Inherited: 0x0) 
struct FUnEquipStolenClothesItemOnServer
{
	struct APrisoner* stolenPrisoner;  // 0x0(0x8)
	struct AClothesItem* Item;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.SentryDamageEffectData
// Size: 0x18(Inherited: 0x0) 
struct FSentryDamageEffectData
{
	struct UNiagaraSystem* ParticleSystem;  // 0x0(0x8)
	float EffectsScaleDistanceStart;  // 0x8(0x4)
	float EffectsScaleDistanceRange;  // 0xC(0x4)
	float EffectsScaleByDistanceFactor;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.InteractionComponent.Server_RemoveLockOnServer
// Size: 0x8(Inherited: 0x0) 
struct FServer_RemoveLockOnServer
{
	struct UObject* Lockpickable;  // 0x0(0x8)

}; 
// Function ConZ.Vehicle.SetVehicleLightsActive
// Size: 0x1(Inherited: 0x0) 
struct FSetVehicleLightsActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.ConZCharacter.CharacterAction_EndHandle
// Size: 0x8(Inherited: 0x0) 
struct FCharacterAction_EndHandle
{
	struct UCharacterAction* Action;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.WidgetDisplayInfo
// Size: 0xC(Inherited: 0x0) 
struct FWidgetDisplayInfo
{
	uint8_t  DisplayType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t First;  // 0x4(0x4)
	int32_t Second;  // 0x8(0x4)

}; 
// Function ConZ.Weapon.SetIsChambering
// Size: 0x1(Inherited: 0x0) 
struct FSetIsChambering
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventLocationMarker.CreateGameEvent
// Size: 0x8(Inherited: 0x0) 
struct FCreateGameEvent
{
	struct AGameEventBase* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Tournament.IsInSuddenDeath
// Size: 0x1(Inherited: 0x0) 
struct FIsInSuddenDeath
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerSkillComponent.GetSkills
// Size: 0x10(Inherited: 0x0) 
struct FGetSkills
{
	struct TArray<struct USkill*> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.BaseItemWidget.GetStacksCount
// Size: 0x4(Inherited: 0x0) 
struct FGetStacksCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.KillboxComponent.OnElectricDoorsDefusedDelegate
// Size: 0x8(Inherited: 0x0) 
struct FOnElectricDoorsDefusedDelegate
{
	struct ADoor* Door;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.IsLimping
// Size: 0x1(Inherited: 0x0) 
struct FIsLimping
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.CamouflageSkillParametersPerSkillLevel
// Size: 0x10(Inherited: 0x0) 
struct FCamouflageSkillParametersPerSkillLevel
{
	float Modifier;  // 0x0(0x4)
	float Bonus;  // 0x4(0x4)
	float FoliageAIPerceptionOuterRadius;  // 0x8(0x4)
	float FoliageAIPerceptionInnerRadius;  // 0xC(0x4)

}; 
// ScriptStruct ConZ.BankCardOwnershipPayloadData
// Size: 0x10(Inherited: 0x0) 
struct FBankCardOwnershipPayloadData
{
	char pad_0[16];  // 0x0(0x10)

}; 
// Function ConZ.ConZPlayerController.GetFamePointsRounded
// Size: 0x4(Inherited: 0x0) 
struct FGetFamePointsRounded
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.BaseInteractionEvent
// Size: 0x8(Inherited: 0x0) 
struct FBaseInteractionEvent
{
	char pad_0[8];  // 0x0(0x8)

}; 
// Function ConZ.TeleportComponent.Server_ReportClientReadyToFinishTeleport
// Size: 0x1(Inherited: 0x0) 
struct FServer_ReportClientReadyToFinishTeleport
{
	char RequestID;  // 0x0(0x1)

}; 
// Function ConZ.Item.GetSupportingHandIKLocation
// Size: 0xC(Inherited: 0x0) 
struct FGetSupportingHandIKLocation
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.WeaponBow.GetDrawWeightDefaultsByStrength
// Size: 0x8(Inherited: 0x0) 
struct FGetDrawWeightDefaultsByStrength
{
	float Strength;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.Item.GetTotalUses
// Size: 0x4(Inherited: 0x0) 
struct FGetTotalUses
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.EngineeringSkillExperienceAwards
// Size: 0x10(Inherited: 0x0) 
struct FEngineeringSkillExperienceAwards
{
	float RepairExperienceMultiplier;  // 0x0(0x4)
	float FillFuelExperienceMultiplier;  // 0x4(0x4)
	float DrainFuelExperienceMultiplier;  // 0x8(0x4)
	float ChargeBatteryExperienceMultiplier;  // 0xC(0x4)

}; 
// ScriptStruct ConZ.ServerCraftableItem
// Size: 0xA8(Inherited: 0x0) 
struct FServerCraftableItem
{
	uint32_t ID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	AItem* ItemClass;  // 0x8(0x8)
	int32_t CraftedItemCount;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct TArray<AItem*> BonusItemClasses;  // 0x18(0x10)
	struct TArray<struct FServerUsedItem> MandatoryItems;  // 0x28(0x10)
	struct TArray<struct FServerUsedItem> MandatoryParts;  // 0x38(0x10)
	struct TArray<struct FServerUsedItem> OptionalItems;  // 0x48(0x10)
	struct TArray<struct FServerUsedItem> OptionalParts;  // 0x58(0x10)
	struct TArray<struct FServerUsedItem> ToolsNeeded;  // 0x68(0x10)
	struct UAnimMontage* CustomCraftingMontage;  // 0x78(0x8)
	struct UAkAudioEvent* StartCraftingAudioEvent;  // 0x80(0x8)
	struct UAkAudioEvent* StopCraftingAudioEvent;  // 0x88(0x8)
	char pad_144[24];  // 0x90(0x18)

}; 
// Function ConZ.Item.GetTotalWeight
// Size: 0x4(Inherited: 0x0) 
struct FGetTotalWeight
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Item.GetTypes
// Size: 0x10(Inherited: 0x0) 
struct FGetTypes
{
	struct TArray<UCraftingIngredientType*> ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching_Walking
// Size: 0x24(Inherited: 0x0) 
struct FPrisonerMovementSettings_Ground_Crouching_Walking
{
	struct FPrisonerGroundMovementParameters Default;  // 0x0(0xC)
	struct FPrisonerGroundMovementParameters WeaponAiming;  // 0xC(0xC)
	struct FPrisonerGroundMovementParameters WeaponAimingDownTheSights;  // 0x18(0xC)

}; 
// ScriptStruct ConZ.ItemMotionNoise
// Size: 0x8(Inherited: 0x0) 
struct FItemMotionNoise
{
	struct UAkAudioEvent* AudioEvent;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.FishSpawnData
// Size: 0x10(Inherited: 0x0) 
struct FFishSpawnData
{
	struct UFishSpeciesData* FishSpeciesData;  // 0x0(0x8)
	float SpawningWeight;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Item.GetUsedMass
// Size: 0x4(Inherited: 0x0) 
struct FGetUsedMass
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.ParameterVector
// Size: 0x20(Inherited: 0x10) 
struct FParameterVector : public FEditableParameter
{
	struct FVector Value;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.Item.GetUsedSlots
// Size: 0x4(Inherited: 0x0) 
struct FGetUsedSlots
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.GetDesiredLeanAmount
// Size: 0x4(Inherited: 0x0) 
struct FGetDesiredLeanAmount
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Item.GetWeight
// Size: 0x4(Inherited: 0x0) 
struct FGetWeight
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.HasLadderMarkersInterface.GetLadderMarkers
// Size: 0x10(Inherited: 0x0) 
struct FGetLadderMarkers
{
	struct TArray<struct FLadderMarker> Result;  // 0x0(0x10)

}; 
// Function ConZ.Item.GetWeightRemained
// Size: 0x4(Inherited: 0x0) 
struct FGetWeightRemained
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.SetTargetCrouchStage
// Size: 0x4(Inherited: 0x0) 
struct FSetTargetCrouchStage
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Server_SpawnAmmunitionArrow
// Size: 0xB8(Inherited: 0x0) 
struct FServer_SpawnAmmunitionArrow
{
	struct FHitResult HitResult;  // 0x0(0x88)
	struct FAmmunitionArrowSpawningParamsHelper AmmunitionArrowSpawningParamsHelper;  // 0x88(0x18)
	struct FVector Location;  // 0xA0(0xC)
	struct FRotator Rotation;  // 0xAC(0xC)

}; 
// Function ConZ.Weapon.Server_SwapAttachments
// Size: 0x10(Inherited: 0x0) 
struct FServer_SwapAttachments
{
	struct AWeaponAttachment* oldAttachment;  // 0x0(0x8)
	struct AWeaponAttachment* newAttachment;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.ParameterFloat
// Size: 0x18(Inherited: 0x10) 
struct FParameterFloat : public FEditableParameter
{
	float Value;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.Item.GetWeightUsed
// Size: 0x4(Inherited: 0x0) 
struct FGetWeightUsed
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.IsActivelyParticipatingInGameEvent
// Size: 0x1(Inherited: 0x0) 
struct FIsActivelyParticipatingInGameEvent
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.NetworkStatics.GetAuthTokenForUser
// Size: 0x30(Inherited: 0x0) 
struct FGetAuthTokenForUser
{
	struct UUser* User;  // 0x0(0x8)
	struct FString ServerIp;  // 0x8(0x10)
	int32_t ServerResponsePort;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	struct FString ReturnValue;  // 0x20(0x10)

}; 
// ScriptStruct ConZ.AttachmentSocketDataItem
// Size: 0x18(Inherited: 0x0) 
struct FAttachmentSocketDataItem
{
	struct FName BoneName;  // 0x0(0x8)
	UAttachmentSocketMountType* MountType;  // 0x8(0x8)
	struct AActor* MountedItem;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.VehicleHitZoneData
// Size: 0x30(Inherited: 0x0) 
struct FVehicleHitZoneData
{
	struct UStaticMesh* HitMesh;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FName SocketName;  // 0x10(0x8)
	struct UMaterialInterface* HitZoneMaterial;  // 0x18(0x8)
	struct UMaterialInterface* DeactivatedHitZoneMaterial;  // 0x20(0x8)
	char pad_40[4];  // 0x28(0x4)
	char pad_44_1 : 7;  // 0x2C(0x1)
	bool IsHitMeshAttached : 1;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)

}; 
// Function ConZ.FishingRod.Server_RemoveAttachment
// Size: 0x8(Inherited: 0x0) 
struct FServer_RemoveAttachment
{
	struct AFishingAttachment* Attachment;  // 0x0(0x8)

}; 
// Function ConZ.Item.HasPriorityForContainerItem
// Size: 0x10(Inherited: 0x0) 
struct FHasPriorityForContainerItem
{
	struct AItem* containerItem;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ConZ.NetPackedProjectileDamageEvent
// Size: 0x108(Inherited: 0xB0) 
struct FNetPackedProjectileDamageEvent : public FScumPointDamageEvent
{
	struct FVector_NetQuantize100 DealerLocation;  // 0xB0(0xC)
	struct FVector_NetQuantize100 TargetLocation;  // 0xBC(0xC)
	float ProjectileMass;  // 0xC8(0x4)
	float ProjectileSpeed;  // 0xCC(0x4)
	float ProjectileMuzzleVelocity;  // 0xD0(0x4)
	char SharpnessHardnessPacked;  // 0xD4(0x1)
	char ArmorPiercingFactorPacked;  // 0xD5(0x1)
	char EventDataPacked;  // 0xD6(0x1)
	char pad_215[1];  // 0xD7(0x1)
	AActor* WeaponClass;  // 0xD8(0x8)
	struct UObject* DamageDealer;  // 0xE0(0x8)
	struct UVehicleAttachment* DamageReceiverVehicleAttachment;  // 0xE8(0x8)
	float DistanceTravelled;  // 0xF0(0x4)
	float ExperienceMultiplier;  // 0xF4(0x4)
	char pad_248_1 : 7;  // 0xF8(0x1)
	bool IsVehicleCollision : 1;  // 0xF8(0x1)
	char pad_249[7];  // 0xF9(0x7)
	int64_t BaseElementId;  // 0x100(0x8)

}; 
// Function ConZ.Prisoner.SetDesiredPaceOnServer
// Size: 0x1(Inherited: 0x0) 
struct FSetDesiredPaceOnServer
{
	char Value;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.EventsRankingStatsItem
// Size: 0x48(Inherited: 0x0) 
struct FEventsRankingStatsItem
{
	int32_t Rank;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString PlayerName;  // 0x8(0x10)
	struct FEventsRankingStats CharacterStats;  // 0x18(0x30)

}; 
// Function ConZ.KillboxComponent.NetMulticast_ActivateGasParticles
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_ActivateGasParticles
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Activate : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.NetMulticast_TurnPrisonerInPlace
// Size: 0x4(Inherited: 0x0) 
struct FNetMulticast_TurnPrisonerInPlace
{
	float turnAngle;  // 0x0(0x4)

}; 
// Function ConZ.Item.OnAttachedToItem
// Size: 0x8(Inherited: 0x0) 
struct FOnAttachedToItem
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.Item.OnContainedItemDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnContainedItemDestroyed
{
	struct AActor* containedItem;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ZombieTurnMontageDescription
// Size: 0x28(Inherited: 0x0) 
struct FZombieTurnMontageDescription
{
	struct UAnimMontage* MontageL90;  // 0x0(0x8)
	struct UAnimMontage* MontageL180;  // 0x8(0x8)
	struct UAnimMontage* MontageR90;  // 0x10(0x8)
	struct UAnimMontage* MontageR180;  // 0x18(0x8)
	struct FName TurnAngleCurveName;  // 0x20(0x8)

}; 
// Function ConZ.CustomZoneSettingsConfigurationsList.RemoveConfiguration
// Size: 0x4(Inherited: 0x0) 
struct FRemoveConfiguration
{
	int32_t ConfigurationIndex;  // 0x0(0x4)

}; 
// Function ConZ.ClothesItem.GetCapacityX
// Size: 0x4(Inherited: 0x0) 
struct FGetCapacityX
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.GetMeleeTargetSelectionMode
// Size: 0x1(Inherited: 0x0) 
struct FGetMeleeTargetSelectionMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.WeaponAttachment.GetShakinessModifier
// Size: 0x4(Inherited: 0x0) 
struct FGetShakinessModifier
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.GardenSlotArray
// Size: 0x120(Inherited: 0x108) 
struct FGardenSlotArray : public FFastArraySerializer
{
	struct TArray<struct FGardenSlot> _gardenSlots;  // 0x108(0x10)
	char pad_280[8];  // 0x118(0x8)

}; 
// Function ConZ.ConZCharacter.NetMulticast_CharacterActionAck
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_CharacterActionAck
{
	struct FCharacterActionAck ack;  // 0x0(0xC)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ignoreAutonomousProxy : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function ConZ.Item.OnDetachedFromItem
// Size: 0x8(Inherited: 0x0) 
struct FOnDetachedFromItem
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PlantGrowthStageData
// Size: 0x60(Inherited: 0x0) 
struct FPlantGrowthStageData
{
	float MinWaterMililiters;  // 0x0(0x4)
	float MinSunHours;  // 0x4(0x4)
	struct FFloatInterval OptimalAvgTemperature;  // 0x8(0x8)
	float WaterDeficiencyGrowthExtendHours;  // 0x10(0x4)
	float WaterDeficiencyDeathTimeHours;  // 0x14(0x4)
	float TemperatureDeficiencyGrowthExtendHours;  // 0x18(0x4)
	float TemperatureDeficiencyDeathTimeHours;  // 0x1C(0x4)
	float SunDeficiencyGrowthExtendHours;  // 0x20(0x4)
	float PlantPestGrowthExtendPercentage;  // 0x24(0x4)
	float DeathFromPlantPestTimeHours;  // 0x28(0x4)
	float PlantDiseaseGrowthExendPercentage;  // 0x2C(0x4)
	float DeathFromPlantDiseaseTimeHours;  // 0x30(0x4)
	float WeedGrowthExtendPercentage;  // 0x34(0x4)
	float RecoveryTimeHours;  // 0x38(0x4)
	float WeedHarvestingReductionPercentage;  // 0x3C(0x4)
	float OrganicFertilizerHarvestingIncreasePercentage;  // 0x40(0x4)
	float IndustrialFertilizerHarvestingIncreasePercentage;  // 0x44(0x4)
	float WaterDeficiencyHarvestingDecreasePercentage;  // 0x48(0x4)
	float TemperatureDeficiencyHarvestingDecreasePercentage;  // 0x4C(0x4)
	float WaterDeficiencyHarvestingSearchTimeIncrease;  // 0x50(0x4)
	float TemperatureDeficiencyHarvestingSearchTimeIncrease;  // 0x54(0x4)
	float PlantHealthAtWhichProduceStartsDecaying;  // 0x58(0x4)
	float HarvestedProduceMinHealthPercentage;  // 0x5C(0x4)

}; 
// ScriptStruct ConZ.PrisonerBodySimulationData_BodyPartMappingArray
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerBodySimulationData_BodyPartMappingArray
{
	struct TArray<uint8_t > BodyParts;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.ReplenishableResourceSlotDescription
// Size: 0x1C(Inherited: 0x0) 
struct FReplenishableResourceSlotDescription
{
	char pad_0[28];  // 0x0(0x1C)

}; 
// Function ConZ.Item.OnProjectileStop
// Size: 0x88(Inherited: 0x0) 
struct FOnProjectileStop
{
	struct FHitResult ImpactResult;  // 0x0(0x88)

}; 
// Function ConZ.PrisonerMovementComponent.GetDivingDepth
// Size: 0x4(Inherited: 0x0) 
struct FGetDivingDepth
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZPlayerController.ShowKillFeedMessage
// Size: 0x38(Inherited: 0x0) 
struct FShowKillFeedMessage
{
	struct FString prefix;  // 0x0(0x10)
	struct FString characterName;  // 0x10(0x10)
	struct FString suffix;  // 0x20(0x10)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ping : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function ConZ.Item.SetInventoryIconInHands
// Size: 0x8(Inherited: 0x0) 
struct FSetInventoryIconInHands
{
	struct UTexture2D* Value;  // 0x0(0x8)

}; 
// Function ConZ.ConZPlayerController.GetCurrencyBalanceText
// Size: 0x20(Inherited: 0x0) 
struct FGetCurrencyBalanceText
{
	uint8_t  CurrencyType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FText ReturnValue;  // 0x8(0x18)

}; 
// ScriptStruct ConZ.RadialDamageDescription
// Size: 0x24(Inherited: 0x0) 
struct FRadialDamageDescription
{
	float RandomDamageMultiplier;  // 0x0(0x4)
	float MinRandomMultiplierChance;  // 0x4(0x4)
	float MaxRandomMultiplierChance;  // 0x8(0x4)
	struct FVector BlastDirection;  // 0xC(0xC)
	float BlastInnerAngle;  // 0x18(0x4)
	float BlastOuterAngle;  // 0x1C(0x4)
	float BlastAngleDamageFalloff;  // 0x20(0x4)

}; 
// ScriptStruct ConZ.AttackedByMeleeData
// Size: 0x18(Inherited: 0x0) 
struct FAttackedByMeleeData
{
	struct TWeakObjectPtr<AActor> attacker;  // 0x0(0x8)
	struct TWeakObjectPtr<UAnimMontage> Montage;  // 0x8(0x8)
	float PlayRate;  // 0x10(0x4)
	float Duration;  // 0x14(0x4)

}; 
// Function ConZ.InteractableInterface.Interact
// Size: 0x78(Inherited: 0x0) 
struct FInteract
{
	struct APrisoner* User;  // 0x0(0x8)
	uint8_t  interactionType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FInteractionData InteractionData;  // 0x10(0x68)

}; 
// Function ConZ.Prisoner.Server_DamageLockpickingTools
// Size: 0x10(Inherited: 0x0) 
struct FServer_DamageLockpickingTools
{
	struct AItem* lockpick;  // 0x0(0x8)
	struct AItem* tensionTool;  // 0x8(0x8)

}; 
// DelegateFunction ConZ.Item.PickedUpStateDelegate__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FPickedUpStateDelegate__DelegateSignature
{
	struct AItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool pickedUp : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ActionProgressWidget.SetProgress
// Size: 0x4(Inherited: 0x0) 
struct FSetProgress
{
	float progress;  // 0x0(0x4)

}; 
// Function ConZ.AudioStatics.GetHitSeveritySwitchValue
// Size: 0xC(Inherited: 0x0) 
struct FGetHitSeveritySwitchValue
{
	uint8_t  Value;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName ReturnValue;  // 0x4(0x8)

}; 
// Function ConZ.GameEventBase.GetParticipantInfo
// Size: 0x10(Inherited: 0x0) 
struct FGetParticipantInfo
{
	struct TArray<struct FGameEventParticipantInfo> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.TrapItem.IsBuried
// Size: 0x1(Inherited: 0x0) 
struct FIsBuried
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerInventoryComponent.RemoveStacks
// Size: 0x18(Inherited: 0x0) 
struct FRemoveStacks
{
	int32_t stacksToSplit;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TScriptInterface<IInventoryNode> ReturnValue;  // 0x8(0x10)

}; 
// Function ConZ.ConZPlayerController.Server_RequestEventsRankingStats
// Size: 0x18(Inherited: 0x0) 
struct FServer_RequestEventsRankingStats
{
	uint32_t ID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FDbIntegerId UserProfileId;  // 0x8(0x8)
	int32_t Count;  // 0x10(0x4)
	uint8_t  orderByField;  // 0x14(0x1)
	uint8_t  sortOrder;  // 0x15(0x1)
	char pad_22[2];  // 0x16(0x2)

}; 
// Function ConZ.GameEventBase.InitEvent
// Size: 0x10(Inherited: 0x0) 
struct FInitEvent
{
	struct AGameEventLocationMarker* marker;  // 0x0(0x8)
	struct AGameEventManager* manager;  // 0x8(0x8)

}; 
// Function ConZ.Prisoner.NetMulticast_RemoveNearbyFoliageInstances
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_RemoveNearbyFoliageInstances
{
	struct TArray<struct FPrisonerNearbyFoliageInstanceInfoReplicated> replicatedInstanceInfo;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.WeaponStateSyncData
// Size: 0x48(Inherited: 0x0) 
struct FWeaponStateSyncData
{
	int32_t ZeroRange;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FAmmunitionData> LoadedAmmoData;  // 0x8(0x10)
	struct TArray<struct FAmmunitionData> InternalMagazineAmmoData;  // 0x18(0x10)
	UObject* LoadedAmmunitionItemClass;  // 0x28(0x8)
	AProjectile* LoadedProjectileClass;  // 0x30(0x8)
	uint8_t  FiringMode;  // 0x38(0x1)
	char pad_57[3];  // 0x39(0x3)
	int32_t malfunction;  // 0x3C(0x4)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool IsChamberOpened : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)

}; 
// Function ConZ.Item.Server_Throw
// Size: 0x24(Inherited: 0x0) 
struct FServer_Throw
{
	struct FVector ZeroBasedStartPosition;  // 0x0(0xC)
	struct FRotator StartRotation;  // 0xC(0xC)
	struct FVector StartVelocity;  // 0x18(0xC)

}; 
// Function ConZ.Prisoner.GetPartWaterWeight
// Size: 0x8(Inherited: 0x0) 
struct FGetPartWaterWeight
{
	uint8_t  part;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.Zombie2.GetStance
// Size: 0x1(Inherited: 0x0) 
struct FGetStance
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.Item.SetCaption
// Size: 0x18(Inherited: 0x0) 
struct FSetCaption
{
	struct FText Value;  // 0x0(0x18)

}; 
// ScriptStruct ConZ.PrisonerMovementSettings_Ground
// Size: 0x16C(Inherited: 0x0) 
struct FPrisonerMovementSettings_Ground
{
	struct FPrisonerMovementSettings_Ground_Standing Standing;  // 0x0(0xB4)
	struct FPrisonerMovementSettings_Ground_Crouching Crouching;  // 0xB4(0x6C)
	struct FPrisonerMovementSettings_Ground_Prone Prone;  // 0x120(0x24)
	struct FFloatInterval MaxSpeedMultiplierVsPerformanceRatio;  // 0x144(0x8)
	struct FFloatInterval AccelerationMultiplierVsPerformanceRatio;  // 0x14C(0x8)
	struct FFloatInterval DecelerationMultiplierVsPerformanceRatio;  // 0x154(0x8)
	struct FFloatInterval MaxSpeedWhenImmersedInWaterVsPerformanceRatio;  // 0x15C(0x8)
	float AccelerationMultiplierWhenImmersedInWater;  // 0x164(0x4)
	float DecelerationMultiplierWhenImmersedInWater;  // 0x168(0x4)

}; 
// Function ConZ.GameEventParticipantStats.GetAssists
// Size: 0x4(Inherited: 0x0) 
struct FGetAssists
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Item.SetHealth
// Size: 0x4(Inherited: 0x0) 
struct FSetHealth
{
	float health;  // 0x0(0x4)

}; 
// Function ConZ.Item.SetInventoryIcon
// Size: 0x8(Inherited: 0x0) 
struct FSetInventoryIcon
{
	struct UTexture2D* Value;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.CharacterArmsImpactSoundData
// Size: 0x28(Inherited: 0x0) 
struct FCharacterArmsImpactSoundData
{
	struct TArray<uint8_t > ImpactSourceCategories;  // 0x0(0x10)
	struct TArray<uint8_t > ImpactTargetCategories;  // 0x10(0x10)
	struct FCharacterImpactSounds Sounds;  // 0x20(0x8)

}; 
// Function ConZ.Item.SetMaxHealth
// Size: 0x4(Inherited: 0x0) 
struct FSetMaxHealth
{
	float MaxHealth;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.ConsumableDigestionHandlerSave
// Size: 0x10(Inherited: 0x0) 
struct FConsumableDigestionHandlerSave
{
	struct TArray<char> Data;  // 0x0(0x10)

}; 
// Function ConZ.InventoryNode.GetInventoryNodeDescription
// Size: 0x18(Inherited: 0x0) 
struct FGetInventoryNodeDescription
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function ConZ.GameEventBase.RegisterParticipant
// Size: 0x10(Inherited: 0x0) 
struct FRegisterParticipant
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	int32_t preferredTeam;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// DelegateFunction ConZ.Door.OnLocked__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnLocked__DelegateSignature
{
	struct ADoor* Door;  // 0x0(0x8)

}; 
// Function ConZ.Item.SetOutsideInventoryIcon
// Size: 0x8(Inherited: 0x0) 
struct FSetOutsideInventoryIcon
{
	struct UTexture2D* Value;  // 0x0(0x8)

}; 
// Function ConZ.WeaponCrossbow.Multicast_HandleFiringEffects
// Size: 0x1(Inherited: 0x0) 
struct FMulticast_HandleFiringEffects
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool shotFired : 1;  // 0x0(0x1)

}; 
// Function ConZ.MetalDetector.Server_SetDetectionFactor
// Size: 0x4(Inherited: 0x0) 
struct FServer_SetDetectionFactor
{
	float newDetectionFactor;  // 0x0(0x4)

}; 
// Function ConZ.ConZGameState.GetSquadForUserProfileId
// Size: 0x10(Inherited: 0x0) 
struct FGetSquadForUserProfileId
{
	struct FDbIntegerId ID;  // 0x0(0x8)
	struct AConZSquad* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.Vehicle.GetVehicleHealth
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleHealth
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZPlayerController.CanAddServerToFavorites
// Size: 0x1(Inherited: 0x0) 
struct FCanAddServerToFavorites
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Item.SetWeight
// Size: 0x4(Inherited: 0x0) 
struct FSetWeight
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Cooking_Server_BeginCooking
// Size: 0x38(Inherited: 0x0) 
struct FCooking_Server_BeginCooking
{
	int32_t SlotId;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct APrisoner* User;  // 0x8(0x8)
	struct UCookingRecipe* recipe;  // 0x10(0x8)
	struct TArray<struct AItem*> MainIngredients;  // 0x18(0x10)
	struct TArray<struct AItem*> OptionalIngredients;  // 0x28(0x10)

}; 
// Function ConZ.Prisoner.OpenTabMode
// Size: 0x1(Inherited: 0x0) 
struct FOpenTabMode
{
	uint8_t  mode;  // 0x0(0x1)

}; 
// Function ConZ.FishingRod.Server_SetShouldShortCast
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetShouldShortCast
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// DelegateFunction ConZ.Item.SkeletalMeshChangedDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FSkeletalMeshChangedDelegate__DelegateSignature
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.PlayerRpcChannel.ResourceLockingManager_Server_UnlockResource
// Size: 0x8(Inherited: 0x0) 
struct FResourceLockingManager_Server_UnlockResource
{
	struct FResourceNetworkGUID ResourceGUID;  // 0x0(0x4)
	int32_t ResourceId;  // 0x4(0x4)

}; 
// DelegateFunction ConZ.Item.StateChangedDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FStateChangedDelegate__DelegateSignature
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.ComplexAnimalAIController.OnActionChangedHandler
// Size: 0x2(Inherited: 0x0) 
struct FOnActionChangedHandler
{
	uint8_t  CurrentAction;  // 0x0(0x1)
	uint8_t  PrevAction;  // 0x1(0x1)

}; 
// ScriptStruct ConZ.HuntingClueVisuals
// Size: 0xA0(Inherited: 0x0) 
struct FHuntingClueVisuals
{
	float Weight;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UStaticMesh* ClueStaticMesh;  // 0x8(0x8)
	struct UMaterialInstance* ClueStaticMeshMaterial;  // 0x10(0x8)
	char pad_24[8];  // 0x18(0x8)
	struct FTransform StaticMeshOverrideRelativeTransform;  // 0x20(0x30)
	struct UMaterialInstance* ClueDecalMaterials;  // 0x50(0x8)
	char pad_88[8];  // 0x58(0x8)
	struct FTransform ClueDecalOverrideRelativeTransform;  // 0x60(0x30)
	char pad_144_1 : 7;  // 0x90(0x1)
	bool ShouldOverrideBoxDimensions : 1;  // 0x90(0x1)
	char pad_145[3];  // 0x91(0x3)
	struct FVector ClueDecalOverrideBoxDimensions;  // 0x94(0xC)

}; 
// Function ConZ.Prisoner.SendSquadInvitationOnClient
// Size: 0x18(Inherited: 0x0) 
struct FSendSquadInvitationOnClient
{
	struct APrisoner* invitor;  // 0x0(0x8)
	struct FString invitorName;  // 0x8(0x10)

}; 
// DelegateFunction ConZ.Item.StaticMeshChangedDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FStaticMeshChangedDelegate__DelegateSignature
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.GenitalsExposed
// Size: 0x1(Inherited: 0x0) 
struct FGenitalsExposed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.IsEnabled
// Size: 0x1(Inherited: 0x0) 
struct FIsEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.ConZItemElementData
// Size: 0x1(Inherited: 0x0) 
struct FConZItemElementData
{
	char pad_0[1];  // 0x0(0x1)

}; 
// DelegateFunction ConZ.CircularMenuSegmentThrowingInfo.SegmentExecutionThrowingDelegate__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FSegmentExecutionThrowingDelegate__DelegateSignature
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function ConZ.ConZBaseManager.NetMulticast_ApplyDamageToBaseElement
// Size: 0x28(Inherited: 0x0) 
struct FNetMulticast_ApplyDamageToBaseElement
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	int64_t BaseId;  // 0x8(0x8)
	int64_t ElementID;  // 0x10(0x8)
	struct FVector elementLocation;  // 0x18(0xC)
	float damageAmount;  // 0x24(0x4)

}; 
// Function ConZ.ConZSquad.CanMemberEditName
// Size: 0x10(Inherited: 0x0) 
struct FCanMemberEditName
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Item.Use
// Size: 0x20(Inherited: 0x0) 
struct FUse
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	int32_t Usage;  // 0x8(0x4)
	float usageWeight;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Eat : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float DamageMultiplier;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.ConZPlayerController.Client_ReceiveEventsRankingStats
// Size: 0x20(Inherited: 0x0) 
struct FClient_ReceiveEventsRankingStats
{
	uint32_t ID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FEventsRankingStatsItem> stats;  // 0x8(0x10)
	int32_t playerRank;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ConZ.CookingCategoryDropdownEntryData
// Size: 0x40(Inherited: 0x0) 
struct FCookingCategoryDropdownEntryData
{
	struct FGameplayTag CookingCategoryTag;  // 0x0(0x8)
	struct FGameplayTag NavigationTag;  // 0x8(0x8)
	struct TArray<struct FGameplayTag> NavigationHistory;  // 0x10(0x10)
	struct FText DisplayName;  // 0x20(0x18)
	int32_t IndentationLevel;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 
// Function ConZ.ConZPlayerController.Client_SetIsServerSettingsAdmin
// Size: 0x1(Inherited: 0x0) 
struct FClient_SetIsServerSettingsAdmin
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerInventoryComponent.CanEquipClothesItem
// Size: 0x10(Inherited: 0x0) 
struct FCanEquipClothesItem
{
	struct AClothesItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.WeaponAttachmentFlashlight.OnComponentActivated
// Size: 0x10(Inherited: 0x0) 
struct FOnComponentActivated
{
	struct UActorComponent* Component;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool wasReset : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ConZPlayerController.Client_EndByteStream
// Size: 0x4(Inherited: 0x0) 
struct FClient_EndByteStream
{
	int32_t streamId;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.CraftingPart
// Size: 0x20(Inherited: 0x0) 
struct FCraftingPart
{
	UObject* ItemClass;  // 0x0(0x8)
	char pad_8[24];  // 0x8(0x18)

}; 
// ScriptStruct ConZ.PackedEntitySetupAndId
// Size: 0x8(Inherited: 0x0) 
struct FPackedEntitySetupAndId
{
	uint64_t _value;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.GetMaxPartWaterWeight
// Size: 0x8(Inherited: 0x0) 
struct FGetMaxPartWaterWeight
{
	uint8_t  part;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.FishingRod.Server_SetFishingState
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetFishingState
{
	uint8_t  fishingState;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.ItemStackData
// Size: 0x10(Inherited: 0x0) 
struct FItemStackData
{
	struct TArray<struct UItemStateBase*> Stacks;  // 0x0(0x10)

}; 
// DelegateFunction ConZ.Door.OnUnlocked__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnUnlocked__DelegateSignature
{
	struct ADoor* Door;  // 0x0(0x8)

}; 
// Function ConZ.ConZPlayerController.Client_TestPingLockStuff
// Size: 0xC(Inherited: 0x0) 
struct FClient_TestPingLockStuff
{
	float averageDelta;  // 0x0(0x4)
	float averagePing;  // 0x4(0x4)
	float counter;  // 0x8(0x4)

}; 
// Function ConZ.FishingRod.NetMulticast_ReleaseCastingObject
// Size: 0x20(Inherited: 0x0) 
struct FNetMulticast_ReleaseCastingObject
{
	struct FVector Location;  // 0x0(0xC)
	struct FVector Direction;  // 0xC(0xC)
	float castingPower;  // 0x18(0x4)
	uint8_t  nextState;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// ScriptStruct ConZ.AttachmentSocketOffset
// Size: 0x20(Inherited: 0x0) 
struct FAttachmentSocketOffset
{
	struct FName BoneName;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	struct FRotator Rotation;  // 0x14(0xC)

}; 
// ScriptStruct ConZ.Achievements
// Size: 0x1(Inherited: 0x0) 
struct FAchievements
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct ConZ.AttachmentSocket
// Size: 0x10(Inherited: 0x0) 
struct FAttachmentSocket
{
	struct TArray<struct FAttachmentSocketDataItem> Items;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.RandomRollStage
// Size: 0x98(Inherited: 0x0) 
struct FRandomRollStage
{
	struct FFloatInterval BaseValueRollInterval;  // 0x0(0x8)
	struct FRuntimeFloatCurve BaseValueTargetCurve;  // 0x8(0x88)
	float BaseValueTargetInterpSpeed;  // 0x90(0x4)
	char pad_148[4];  // 0x94(0x4)

}; 
// ScriptStruct ConZ.ConZSquadMember
// Size: 0x20(Inherited: 0x0) 
struct FConZSquadMember
{
	char pad_0[16];  // 0x0(0x10)
	struct FDbIntegerId UserProfileId;  // 0x10(0x8)
	uint8_t  Rank;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool online : 1;  // 0x19(0x1)
	char pad_26_1 : 7;  // 0x1A(0x1)
	bool InDanger : 1;  // 0x1A(0x1)
	char pad_27_1 : 7;  // 0x1B(0x1)
	bool IsAlive : 1;  // 0x1B(0x1)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ConZ.ItemLocation
// Size: 0xF(Inherited: 0x0) 
struct FItemLocation
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Coastal : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool Continantal : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool Mountain : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool Urban : 1;  // 0x3(0x1)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool Rural : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool Industrial : 1;  // 0x5(0x1)
	char pad_6_1 : 7;  // 0x6(0x1)
	bool Police : 1;  // 0x6(0x1)
	char pad_7_1 : 7;  // 0x7(0x1)
	bool MilitaryBasic : 1;  // 0x7(0x1)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool MilitaryMedium : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool MilitaryAdvanced : 1;  // 0x9(0x1)
	char pad_10_1 : 7;  // 0xA(0x1)
	bool MilitaryWW2 : 1;  // 0xA(0x1)
	char pad_11_1 : 7;  // 0xB(0x1)
	bool Sport : 1;  // 0xB(0x1)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool Market : 1;  // 0xC(0x1)
	char pad_13_1 : 7;  // 0xD(0x1)
	bool GasStation : 1;  // 0xD(0x1)
	char pad_14_1 : 7;  // 0xE(0x1)
	bool Airfield : 1;  // 0xE(0x1)

}; 
// Function ConZ.WeaponScopeItemComponent.Server_SetWindage
// Size: 0x4(Inherited: 0x0) 
struct FServer_SetWindage
{
	int32_t Windage;  // 0x0(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Client_UnlockAchievement
// Size: 0x18(Inherited: 0x0) 
struct FClient_UnlockAchievement
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct FString AchievementID;  // 0x8(0x10)

}; 
// ScriptStruct ConZ.SpawnCharacterGroupInfo
// Size: 0x50(Inherited: 0x0) 
struct FSpawnCharacterGroupInfo
{
	struct TArray<APawn*> AvailablePawns;  // 0x0(0x10)
	struct FTransform Transform;  // 0x10(0x30)
	int32_t NumOfCharactersToSpawn;  // 0x40(0x4)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool IgnoreLimit : 1;  // 0x44(0x1)
	char pad_69[11];  // 0x45(0xB)

}; 
// Function ConZ.CharacterSpawningManager.SpawnCharactersAroundLocation
// Size: 0x50(Inherited: 0x0) 
struct FSpawnCharactersAroundLocation
{
	struct FSpawnCharacterAroundInfo Info;  // 0x0(0x50)

}; 
// Function ConZ.ConZPlayerController.Client_BeginByteStream
// Size: 0x8(Inherited: 0x0) 
struct FClient_BeginByteStream
{
	int32_t streamId;  // 0x0(0x4)
	uint8_t  streamType;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.ConZPlayerController.Client_EnableRespawnOption
// Size: 0x1(Inherited: 0x0) 
struct FClient_EnableRespawnOption
{
	uint8_t  option;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.IsInCombatMode
// Size: 0x1(Inherited: 0x0) 
struct FIsInCombatMode
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.ConZPlayerController.Client_HasMountedActorBegunPlay
// Size: 0x8(Inherited: 0x0) 
struct FClient_HasMountedActorBegunPlay
{
	struct AActor* Actor;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ZombieMeshVariation2
// Size: 0x10(Inherited: 0x0) 
struct FZombieMeshVariation2
{
	struct USkeletalMesh* DressedMesh;  // 0x0(0x8)
	struct USkeletalMesh* StrippedMesh;  // 0x8(0x8)

}; 
// Function ConZ.WeaponActionSequence.SetNextMontageSectionFromPrevious
// Size: 0x10(Inherited: 0x0) 
struct FSetNextMontageSectionFromPrevious
{
	struct FName previousSection;  // 0x0(0x8)
	struct FName NextSection;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.SpawnedItems
// Size: 0x18(Inherited: 0x0) 
struct FSpawnedItems
{
	int32_t ID;  // 0x0(0x4)
	uint8_t  Operation;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	struct TArray<struct AItem*> Items;  // 0x8(0x10)

}; 
// Function ConZ.Prisoner.GetPrisonerMovement
// Size: 0x8(Inherited: 0x0) 
struct FGetPrisonerMovement
{
	struct UPrisonerMovementComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZPlayerController.Client_HeartbeatRequest
// Size: 0x4(Inherited: 0x0) 
struct FClient_HeartbeatRequest
{
	uint32_t code;  // 0x0(0x4)

}; 
// Function ConZ.ResourceLockingManager.NetMulticast_UnlockArea
// Size: 0x20(Inherited: 0x0) 
struct FNetMulticast_UnlockArea
{
	int32_t dataVersion;  // 0x0(0x4)
	struct FBox Area;  // 0x4(0x1C)

}; 
// Function ConZ.Prisoner.GetMusicPlayerComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetMusicPlayerComponent
{
	struct UPrisonerMusicPlayerComponent* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ZombieCombatStanceVariation2
// Size: 0x30(Inherited: 0x0) 
struct FZombieCombatStanceVariation2
{
	struct FZombieCombatStanceAnimations Animations;  // 0x0(0x18)
	float RunAcceleration;  // 0x18(0x4)
	float RunDeceleration;  // 0x1C(0x4)
	float RunSpeed;  // 0x20(0x4)
	float RunSpeedInAnimation;  // 0x24(0x4)
	float RunTurnRate;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function ConZ.Prisoner.Server_SetItemInHandsActualObstructionDepth
// Size: 0x4(Inherited: 0x0) 
struct FServer_SetItemInHandsActualObstructionDepth
{
	float Value;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.ConZSquadPendingMember
// Size: 0x10(Inherited: 0x0) 
struct FConZSquadPendingMember
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)

}; 
// Function ConZ.ConZPlayerController.Client_InitializeCharacterModificationTransaction
// Size: 0x50(Inherited: 0x0) 
struct FClient_InitializeCharacterModificationTransaction
{
	int32_t transactionId;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FTransform roomTransform;  // 0x10(0x30)
	uint8_t  Type;  // 0x40(0x1)
	char pad_65[15];  // 0x41(0xF)

}; 
// Function ConZ.Prisoner.Server_HandleGearMotion
// Size: 0x2(Inherited: 0x0) 
struct FServer_HandleGearMotion
{
	uint8_t  motionIntensity;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool shouldMakeNoise : 1;  // 0x1(0x1)

}; 
// Function ConZ.ConZGameMode.GetItemVirtualizationManager
// Size: 0x8(Inherited: 0x0) 
struct FGetItemVirtualizationManager
{
	struct AItemVirtualizationManager* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.InitFromCharacterTemplate
// Size: 0xE0(Inherited: 0x0) 
struct FInitFromCharacterTemplate
{
	struct FCharacterTemplate CharacterTemplate;  // 0x0(0xE0)

}; 
// Function ConZ.UserProfile.GetCreationTemplate
// Size: 0xE0(Inherited: 0x0) 
struct FGetCreationTemplate
{
	struct FCharacterTemplate ReturnValue;  // 0x0(0xE0)

}; 
// Function ConZ.ConZPlayerController.Client_Login
// Size: 0x40(Inherited: 0x0) 
struct FClient_Login
{
	struct FPlayerLoginInfo serverLoginInfo;  // 0x0(0x40)

}; 
// Function ConZ.ConZPlayerController.Server_RequestSquadMemberInfo
// Size: 0x10(Inherited: 0x0) 
struct FServer_RequestSquadMemberInfo
{
	uint32_t ID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FDbIntegerId squadId;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.DbIntegerId
// Size: 0x8(Inherited: 0x0) 
struct FDbIntegerId
{
	int64_t Value;  // 0x0(0x8)

}; 
// Function ConZ.DropZoneGameEvent.GetKey
// Size: 0x8(Inherited: 0x0) 
struct FGetKey
{
	struct ADropZoneKey* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.DeluxeVersion
// Size: 0x5(Inherited: 0x0) 
struct FDeluxeVersion
{
	char pad_0[5];  // 0x0(0x5)

}; 
// Function ConZ.Prisoner.Server_TurnPrisonerInPlace
// Size: 0x4(Inherited: 0x0) 
struct FServer_TurnPrisonerInPlace
{
	float turnAngle;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.RespawnParameters
// Size: 0x6C(Inherited: 0x0) 
struct FRespawnParameters
{
	int32_t RandomLocationPrice;  // 0x0(0x4)
	int32_t SectorLocationPrice;  // 0x4(0x4)
	uint8_t  SectorLocationPriceCurrency;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	int32_t ShelterLocationPrice;  // 0xC(0x4)
	uint8_t  ShelterLocationPriceCurrency;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	int32_t SquadLocationPrice;  // 0x14(0x4)
	uint8_t  SquadLocationPriceCurrency;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	int32_t PermadeathThreshold;  // 0x1C(0x4)
	uint8_t  PermadeathThresholdPriceCurrency;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	float RandomPriceModifier;  // 0x24(0x4)
	float SectorPriceModifier;  // 0x28(0x4)
	float HomePriceModifier;  // 0x2C(0x4)
	float RandomInitialTime;  // 0x30(0x4)
	float SectorInitialTime;  // 0x34(0x4)
	float ShelterInitialTime;  // 0x38(0x4)
	float SquadInitialTime;  // 0x3C(0x4)
	float RandomCooldownTime;  // 0x40(0x4)
	float SectorCooldownTime;  // 0x44(0x4)
	float ShelterCooldownTime;  // 0x48(0x4)
	float SquadCooldownTime;  // 0x4C(0x4)
	float RandomCooldownResetMultiplier;  // 0x50(0x4)
	float SectorCooldownResetMultiplier;  // 0x54(0x4)
	float ShelterCooldownResetMultiplier;  // 0x58(0x4)
	float SquadCooldownResetMultiplier;  // 0x5C(0x4)
	float CommitSuicideInitialTime;  // 0x60(0x4)
	float CommitSuicideCooldownTime;  // 0x64(0x4)
	float CommitSuicideCooldownResetMultiplier;  // 0x68(0x4)

}; 
// Function ConZ.ConZPlayerController.Client_ReceiveBytesFromStream
// Size: 0x18(Inherited: 0x0) 
struct FClient_ReceiveBytesFromStream
{
	int32_t streamId;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<char> bytes;  // 0x8(0x10)

}; 
// Function ConZ.WeaponAction.GetWeapon
// Size: 0x8(Inherited: 0x0) 
struct FGetWeapon
{
	struct AWeapon* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.GameEventBase.GetParticipantJoinLocation
// Size: 0x18(Inherited: 0x0) 
struct FGetParticipantJoinLocation
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	struct FVector ReturnValue;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.UserProfile.SetFamePoints
// Size: 0x4(Inherited: 0x0) 
struct FSetFamePoints
{
	float Value;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.CTFParameters
// Size: 0x30(Inherited: 0x0) 
struct FCTFParameters
{
	float FlagResetDuration;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool AllowReturns : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	int32_t CaptureLimit;  // 0x8(0x4)
	struct FGameEventRewardPoints PointsPerPickup;  // 0xC(0xC)
	struct FGameEventRewardPoints PointsPerCapture;  // 0x18(0xC)
	struct FGameEventRewardPoints PointsPerReturn;  // 0x24(0xC)

}; 
// Function ConZ.HitReactComponent.GetPelvisRotation
// Size: 0x10(Inherited: 0x0) 
struct FGetPelvisRotation
{
	struct FQuat ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.ConZPlayerController.Client_ReceiveSquadMemberInfo
// Size: 0x58(Inherited: 0x0) 
struct FClient_ReceiveSquadMemberInfo
{
	uint32_t ID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FDbIntegerId> userProfileIds;  // 0x8(0x10)
	struct TArray<struct FString> names;  // 0x18(0x10)
	struct TArray<uint8_t > ranks;  // 0x28(0x10)
	struct TArray<float> FamePoints;  // 0x38(0x10)
	struct TArray<bool> online;  // 0x48(0x10)

}; 
// Function ConZ.GameEventBorder.GetState
// Size: 0x1(Inherited: 0x0) 
struct FGetState
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerInventoryComponent.DropItemAtOnServer
// Size: 0x20(Inherited: 0x0) 
struct FDropItemAtOnServer
{
	struct AItem* Item;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	struct FRotator Rotation;  // 0x14(0xC)

}; 
// Function ConZ.ConZPlayerController.Client_ReceiveSquadRankingData
// Size: 0x50(Inherited: 0x0) 
struct FClient_ReceiveSquadRankingData
{
	uint32_t ID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FString> names;  // 0x8(0x10)
	struct TArray<struct FString> information;  // 0x18(0x10)
	struct TArray<uint64_t> emblems;  // 0x28(0x10)
	struct TArray<float> scores;  // 0x38(0x10)
	int32_t squadRank;  // 0x48(0x4)
	int32_t squadIndex;  // 0x4C(0x4)

}; 
// Function ConZ.Prisoner.CreateThrowingComponent
// Size: 0x18(Inherited: 0x0) 
struct FCreateThrowingComponent
{
	struct AItem* itemToThrow;  // 0x0(0x8)
	uint8_t  animationType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct UPrisonerThrowComponent* ReturnValue;  // 0x10(0x8)

}; 
// Function ConZ.ActorStatics.GetActorBoundsCenter
// Size: 0x18(Inherited: 0x0) 
struct FGetActorBoundsCenter
{
	struct AActor* Actor;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool onlyCollidingComponents : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	struct FVector ReturnValue;  // 0xC(0xC)

}; 
// Function ConZ.Prisoner.GetHoldBreathState
// Size: 0x1(Inherited: 0x0) 
struct FGetHoldBreathState
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.ConZPlayerController.Client_ReceiveSurvivalStats
// Size: 0x198(Inherited: 0x0) 
struct FClient_ReceiveSurvivalStats
{
	uint32_t ID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FSurvivalStats stats;  // 0x8(0x190)

}; 
// Function ConZ.PrisonerAnimInstance.GetCurrentLocomotionState
// Size: 0x1(Inherited: 0x0) 
struct FGetCurrentLocomotionState
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.SurvivalStats
// Size: 0x190(Inherited: 0x0) 
struct FSurvivalStats
{
	char pad_0[8];  // 0x0(0x8)
	float HighestPositiveFamePoints;  // 0x8(0x4)
	int32_t DoorsClaimed;  // 0xC(0x4)
	int32_t AnimalsKilled;  // 0x10(0x4)
	float MinutesSurvived;  // 0x14(0x4)
	int32_t Kills;  // 0x18(0x4)
	int32_t Deaths;  // 0x1C(0x4)
	int32_t LocksPicked;  // 0x20(0x4)
	int32_t PuppetsKilled;  // 0x24(0x4)
	int32_t GunsCrafted;  // 0x28(0x4)
	int32_t AmmoCrafted;  // 0x2C(0x4)
	int32_t BulletsCrafted;  // 0x30(0x4)
	int32_t ArrowsCrafted;  // 0x34(0x4)
	int32_t ClothingCrafted;  // 0x38(0x4)
	float LongestKillDistance;  // 0x3C(0x4)
	int32_t MeleeKills;  // 0x40(0x4)
	int32_t ArcheryKills;  // 0x44(0x4)
	int32_t PlayersKnockedOut;  // 0x48(0x4)
	int32_t TotalDefecations;  // 0x4C(0x4)
	int32_t TotalUrinations;  // 0x50(0x4)
	int32_t LightsFired;  // 0x54(0x4)
	int32_t ContainersLooted;  // 0x58(0x4)
	int32_t ItemsPutIntoContainers;  // 0x5C(0x4)
	int32_t DeathsByPrisoners;  // 0x60(0x4)
	int32_t AnimalsSkinned;  // 0x64(0x4)
	float FoodEaten;  // 0x68(0x4)
	float DistanceTravelledByFoot;  // 0x6C(0x4)
	int32_t WoundsPatched;  // 0x70(0x4)
	int32_t ItemsPickedUp;  // 0x74(0x4)
	float LiquidDrank;  // 0x78(0x4)
	int32_t TeethLost;  // 0x7C(0x4)
	int32_t TotalCaloriesIntake;  // 0x80(0x4)
	int32_t ShotsFired;  // 0x84(0x4)
	int32_t ShotsHit;  // 0x88(0x4)
	float RangeWeaponAccuracy;  // 0x8C(0x4)
	int32_t Headshots;  // 0x90(0x4)
	int32_t MeleeWeaponSwings;  // 0x94(0x4)
	int32_t MeleeWeaponHits;  // 0x98(0x4)
	float MeleeWeaponAccuracy;  // 0x9C(0x4)
	int32_t MeleeWeaponsCrafted;  // 0xA0(0x4)
	int32_t DroneKills;  // 0xA4(0x4)
	int32_t SentryKills;  // 0xA8(0x4)
	int32_t PrisonerKills;  // 0xAC(0x4)
	int32_t PuppetsKnockedOut;  // 0xB0(0x4)
	int32_t Diarrheas;  // 0xB4(0x4)
	int32_t Vomits;  // 0xB8(0x4)
	float DistanceTravelledInVehicle;  // 0xBC(0x4)
	int32_t MushroomsEaten;  // 0xC0(0x4)
	float HighestMuscleMass;  // 0xC4(0x4)
	float HighestFat;  // 0xC8(0x4)
	int32_t HeartAttacks;  // 0xCC(0x4)
	int32_t Overdose;  // 0xD0(0x4)
	int32_t Starvation;  // 0xD4(0x4)
	float HighestDamageTaken;  // 0xD8(0x4)
	float HighestWeightCarried;  // 0xDC(0x4)
	int32_t EventsWon;  // 0xE0(0x4)
	int32_t EventsLost;  // 0xE4(0x4)
	float LowestNegativeFamePoints;  // 0xE8(0x4)
	float DistanceTravelledSwimming;  // 0xEC(0x4)
	int32_t EventsEnemyKills;  // 0xF0(0x4)
	int32_t EventsDeaths;  // 0xF4(0x4)
	int32_t FlagCaptures;  // 0xF8(0x4)
	int32_t CrowsKilled;  // 0xFC(0x4)
	int32_t SeagullsKilled;  // 0x100(0x4)
	int32_t HorsesKilled;  // 0x104(0x4)
	int32_t BoarsKilled;  // 0x108(0x4)
	int32_t BearsKilled;  // 0x10C(0x4)
	int32_t GoatsKilled;  // 0x110(0x4)
	int32_t DeersKilled;  // 0x114(0x4)
	int32_t ChickensKilled;  // 0x118(0x4)
	int32_t RabbitsKilled;  // 0x11C(0x4)
	int32_t DonkeysKilled;  // 0x120(0x4)
	int32_t WolvesKilled;  // 0x124(0x4)
	int32_t TimesMauledByABear;  // 0x128(0x4)
	float LongestAnimalKillDistance;  // 0x12C(0x4)
	int32_t EventTeamKills;  // 0x130(0x4)
	float KillDeathRatio;  // 0x134(0x4)
	float EventsKillDeathRatio;  // 0x138(0x4)
	float AlcoholDrank;  // 0x13C(0x4)
	int32_t FoliageCut;  // 0x140(0x4)
	char pad_324[4];  // 0x144(0x4)
	struct FFishingStats FishingStats;  // 0x148(0x28)
	float DistanceTravelledByBoat;  // 0x170(0x4)
	float DistanceSailed;  // 0x174(0x4)
	int32_t TimesCaughtByShark;  // 0x178(0x4)
	int32_t TimesEscapedSharkBite;  // 0x17C(0x4)
	int32_t LastFamePointAwardConsecutiveDays;  // 0x180(0x4)
	int32_t FirearmKills;  // 0x184(0x4)
	int32_t BareHandedKills;  // 0x188(0x4)
	char pad_396[4];  // 0x18C(0x4)

}; 
// Function ConZ.Prisoner.GetMotionIntensity
// Size: 0x1(Inherited: 0x0) 
struct FGetMotionIntensity
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.VoiceChatComponent.GetIsActiveTalker
// Size: 0x1(Inherited: 0x0) 
struct FGetIsActiveTalker
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.FishingStats
// Size: 0x28(Inherited: 0x0) 
struct FFishingStats
{
	int32_t FishCaught;  // 0x0(0x4)
	int32_t FishKept;  // 0x4(0x4)
	int32_t FishReleased;  // 0x8(0x4)
	int32_t LinesBroken;  // 0xC(0x4)
	float HeaviestFishCaught;  // 0x10(0x4)
	float LongestFishCaught;  // 0x14(0x4)
	struct TArray<struct FCaughtFishData> FishSpeciesCaught;  // 0x18(0x10)

}; 
// Function ConZ.ConZCharacter.GetCharacterAction
// Size: 0x8(Inherited: 0x0) 
struct FGetCharacterAction
{
	struct UCharacterAction* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.SetFiringMode
// Size: 0x1(Inherited: 0x0) 
struct FSetFiringMode
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// Function ConZ.LockpickingWidget.GetDuration
// Size: 0x4(Inherited: 0x0) 
struct FGetDuration
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.CaughtFishData
// Size: 0x8(Inherited: 0x0) 
struct FCaughtFishData
{
	uint8_t  FishSpecies;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t Amount;  // 0x4(0x4)

}; 
// Function ConZ.Weapon.SetMalfunction
// Size: 0x1(Inherited: 0x0) 
struct FSetMalfunction
{
	uint8_t  Type;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.Server_SetBehaviourMode
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetBehaviourMode
{
	uint8_t  mode;  // 0x0(0x1)

}; 
// Function ConZ.ConZPlayerController.Client_SendPackedPlayerLocationsForMap
// Size: 0x20(Inherited: 0x0) 
struct FClient_SendPackedPlayerLocationsForMap
{
	struct TArray<struct AConZPlayerState*> playerStates;  // 0x0(0x10)
	struct TArray<uint32_t> packedMapLocations;  // 0x10(0x10)

}; 
// ScriptStruct ConZ.DamageMultiplier
// Size: 0x4(Inherited: 0x0) 
struct FDamageMultiplier
{
	float Multiplier;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.PrisonerViolation
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerViolation
{
	char pad_0[16];  // 0x0(0x10)

}; 
// Function ConZ.ConZPlayerController.Client_SetCommitSuicideOptionTime
// Size: 0x4(Inherited: 0x0) 
struct FClient_SetCommitSuicideOptionTime
{
	float Time;  // 0x0(0x4)

}; 
// Function ConZ.PhotoModeMainPanel.MoveFocusDown
// Size: 0x10(Inherited: 0x0) 
struct FMoveFocusDown
{
	uint8_t  UINavigation;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UWidget* ReturnValue;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.TreeCanopyCapsule
// Size: 0x24(Inherited: 0x0) 
struct FTreeCanopyCapsule
{
	struct FVector Center;  // 0x0(0xC)
	struct FRotator Rotation;  // 0xC(0xC)
	float Radius;  // 0x18(0x4)
	float Length;  // 0x1C(0x4)
	float CanopyDensity;  // 0x20(0x4)

}; 
// Function ConZ.ConZPlayerController.Client_SetIsAdmin
// Size: 0x1(Inherited: 0x0) 
struct FClient_SetIsAdmin
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerInventoryComponent.Server_PickupCorpse
// Size: 0x8(Inherited: 0x0) 
struct FServer_PickupCorpse
{
	struct ACorpse* Corpse;  // 0x0(0x8)

}; 
// Function ConZ.ConZPlayerController.Client_SetRespawnOptionTime
// Size: 0x8(Inherited: 0x0) 
struct FClient_SetRespawnOptionTime
{
	uint8_t  option;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Time;  // 0x4(0x4)

}; 
// Function ConZ.ResourceLockingManager.OnResourceDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnResourceDestroyed
{
	struct AActor* Resource;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.GetPenisSkeletalMeshComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetPenisSkeletalMeshComponent
{
	struct USkeletalMeshComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.SimpleAnimalAIController.UpdatePerception
// Size: 0x10(Inherited: 0x0) 
struct FUpdatePerception
{
	struct TArray<struct AActor*> actorsPercepted;  // 0x0(0x10)

}; 
// Function ConZ.ChangeTextWidget.SetMaxNumberOfCharacters
// Size: 0x4(Inherited: 0x0) 
struct FSetMaxNumberOfCharacters
{
	int32_t Value;  // 0x0(0x4)

}; 
// Function ConZ.ConZSquad.CanMemberKickRank
// Size: 0x10(Inherited: 0x0) 
struct FCanMemberKickRank
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	uint8_t  Rank;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool ReturnValue : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// ScriptStruct ConZ.RepairToolItemParams
// Size: 0x58(Inherited: 0x0) 
struct FRepairToolItemParams
{
	struct FGameplayTagContainer RepairableItemTypes;  // 0x0(0x20)
	struct UAkAudioEvent* StartRepairSound;  // 0x20(0x8)
	struct UAkAudioEvent* StopRepairSound;  // 0x28(0x8)
	struct UAnimMontage* StartRepairMontage;  // 0x30(0x8)
	struct UAnimMontage* StopRepairMontage;  // 0x38(0x8)
	float HealthGainPerUseMultiplier;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)
	struct TArray<struct FRequiredRepairingItemTagParams> RequiredRepairingItemTagsParms;  // 0x48(0x10)

}; 
// Function ConZ.ConZPlayerController.Client_SetRespawnWaitTime
// Size: 0x4(Inherited: 0x0) 
struct FClient_SetRespawnWaitTime
{
	float Seconds;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.StaticMeshMaterialPair
// Size: 0x18(Inherited: 0x0) 
struct FStaticMeshMaterialPair
{
	struct UStaticMesh* Mesh;  // 0x0(0x8)
	struct TArray<struct UMaterialInterface*> Materials;  // 0x8(0x10)

}; 
// Function ConZ.ConZPlayerController.ComputeFameLevel
// Size: 0x8(Inherited: 0x0) 
struct FComputeFameLevel
{
	float FamePoints;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.AudioStatics.SetAkRTPCValue
// Size: 0x18(Inherited: 0x0) 
struct FSetAkRTPCValue
{
	struct FName RTPC;  // 0x0(0x8)
	float Value;  // 0x8(0x4)
	int32_t InterpolationTimeMs;  // 0xC(0x4)
	struct AActor* Actor;  // 0x10(0x8)

}; 
// Function ConZ.PlayerRpcChannel.ResourceLockingManager_Server_UnlockIntersectingAreas
// Size: 0x1C(Inherited: 0x0) 
struct FResourceLockingManager_Server_UnlockIntersectingAreas
{
	struct FBox Area;  // 0x0(0x1C)

}; 
// Function ConZ.Prisoner.GetUserProfile
// Size: 0x8(Inherited: 0x0) 
struct FGetUserProfile
{
	struct UUserProfile* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.MapHUDObject
// Size: 0x18(Inherited: 0x0) 
struct FMapHUDObject
{
	char pad_0[8];  // 0x0(0x8)
	int32_t _priority;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool _showText : 1;  // 0xC(0x1)
	char pad_13_1 : 7;  // 0xD(0x1)
	bool _showMarkers : 1;  // 0xD(0x1)
	char pad_14[10];  // 0xE(0xA)

}; 
// Function ConZ.Prisoner.IsPostFreeLookControllerRotationBlendActive
// Size: 0x1(Inherited: 0x0) 
struct FIsPostFreeLookControllerRotationBlendActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.ConZMapLocationProperties
// Size: 0x4(Inherited: 0x0) 
struct FConZMapLocationProperties
{
	char pad_0[4];  // 0x0(0x4)

}; 
// Function ConZ.PrisonerMovementComponent.NetMulticast_SetDesiredFallingPose
// Size: 0x2(Inherited: 0x0) 
struct FNetMulticast_SetDesiredFallingPose
{
	uint8_t  Pose;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool force : 1;  // 0x1(0x1)

}; 
// Function ConZ.ConZPlayerController.GetAchievementsManagerClient
// Size: 0x8(Inherited: 0x0) 
struct FGetAchievementsManagerClient
{
	struct AAchievementsManagerClient* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.GetLeanAmount
// Size: 0x4(Inherited: 0x0) 
struct FGetLeanAmount
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Chainsaw.GetUseFuelUsagePerHourMultiplierWhenActive
// Size: 0x1(Inherited: 0x0) 
struct FGetUseFuelUsagePerHourMultiplierWhenActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.ConZPlayerController.GetCameraManager
// Size: 0x8(Inherited: 0x0) 
struct FGetCameraManager
{
	struct AConZCameraManager* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Vehicle.GetItemContainer
// Size: 0x8(Inherited: 0x0) 
struct FGetItemContainer
{
	struct AVehicleItemContainer* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.BurnPointDamageEvent
// Size: 0xB8(Inherited: 0xB0) 
struct FBurnPointDamageEvent : public FScumPointDamageEvent
{
	char pad_176[8];  // 0xB0(0x8)

}; 
// Function ConZ.ConZPlayerController.GetCommitSuicideOptionTimeLeft
// Size: 0x4(Inherited: 0x0) 
struct FGetCommitSuicideOptionTimeLeft
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZPlayerController.GetDialogueManager
// Size: 0x8(Inherited: 0x0) 
struct FGetDialogueManager
{
	struct AMissionDialogueManager* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.MissionManager.Client_SendMissionInvitation
// Size: 0x10(Inherited: 0x0) 
struct FClient_SendMissionInvitation
{
	struct AMissionManager* manager;  // 0x0(0x8)
	struct AMission* Mission;  // 0x8(0x8)

}; 
// Function ConZ.ConZPlayerController.GetFameLevel
// Size: 0x4(Inherited: 0x0) 
struct FGetFameLevel
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZPlayerController.GetFameMultiplier
// Size: 0x4(Inherited: 0x0) 
struct FGetFameMultiplier
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Server_RespawnAtCommonSpawnLocation
// Size: 0xC(Inherited: 0x0) 
struct FServer_RespawnAtCommonSpawnLocation
{
	uint8_t  commonSpawnLocation;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FSectorId SectorId;  // 0x4(0x8)

}; 
// Function ConZ.Prisoner.CanOpenTabMode
// Size: 0x2(Inherited: 0x0) 
struct FCanOpenTabMode
{
	uint8_t  mode;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// ScriptStruct ConZ.ObjectiveDataGroup
// Size: 0x18(Inherited: 0x0) 
struct FObjectiveDataGroup
{
	struct TArray<struct TSoftClassPtr<UObject>> RewardItems;  // 0x0(0x10)
	float RewardFamePoints;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.PrisonerInventoryComponent.RemoveStolenItemOnServer
// Size: 0x10(Inherited: 0x0) 
struct FRemoveStolenItemOnServer
{
	struct APrisoner* stolenPrisoner;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)

}; 
// Function ConZ.UserProfile.GetFamePoints
// Size: 0x4(Inherited: 0x0) 
struct FGetFamePoints
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.BasicPrisonerBodySymptomNotificationParameters
// Size: 0x28(Inherited: 0x0) 
struct FBasicPrisonerBodySymptomNotificationParameters
{
	struct FFloatRange SeverityRange;  // 0x0(0x10)
	UNotificationDescription* Notification;  // 0x10(0x8)
	int32_t MaxNumTriggers;  // 0x18(0x4)
	struct FFloatInterval TriggerInterval;  // 0x1C(0x8)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ConZ.DropZoneParameters
// Size: 0x2C(Inherited: 0x0) 
struct FDropZoneParameters
{
	float IntroAnnouncementDelay;  // 0x0(0x4)
	float WarmupPhaseDuration;  // 0x4(0x4)
	float CrateDropDuration;  // 0x8(0x4)
	float SearchPhaseTimeLimit;  // 0xC(0x4)
	float CargoDropDuration;  // 0x10(0x4)
	float CapturePhaseTimeLimit;  // 0x14(0x4)
	float CargoOpeningDuration;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool SkipKeyPhase : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FGameEventRewardPoints PointsPerActivation;  // 0x20(0xC)

}; 
// Function ConZ.ConZPlayerController.GetGameEventCooldown
// Size: 0x4(Inherited: 0x0) 
struct FGetGameEventCooldown
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZPlayerController.GetUserProfileId
// Size: 0x8(Inherited: 0x0) 
struct FGetUserProfileId
{
	struct FDbIntegerId ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZPlayerController.GetMissionDialogueManager
// Size: 0x8(Inherited: 0x0) 
struct FGetMissionDialogueManager
{
	struct AMissionDialogueManager* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.InteractionComponent.CutObjectOnServer
// Size: 0x28(Inherited: 0x0) 
struct FCutObjectOnServer
{
	struct AActor* Actor;  // 0x0(0x8)
	struct UMeshComponent* MeshComponent;  // 0x8(0x8)
	struct FMeshInstanceId InstanceId;  // 0x10(0x8)
	struct FVector Location;  // 0x18(0xC)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool collectOnly : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)

}; 
// Function ConZ.ConZPlayerController.GetNoiseEmitterComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetNoiseEmitterComponent
{
	struct UPawnNoiseEmitterComponent* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.Bandages
// Size: 0x18(Inherited: 0x0) 
struct FBandages
{
	float _amount;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FBandage> _bandages;  // 0x8(0x10)

}; 
// Function ConZ.ConZPlayerController.GetPlayerRpcChannel
// Size: 0x8(Inherited: 0x0) 
struct FGetPlayerRpcChannel
{
	struct UPlayerRpcChannel* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.SetNightVisionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetNightVisionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.CharacterHeadImpactSoundData
// Size: 0x28(Inherited: 0x0) 
struct FCharacterHeadImpactSoundData
{
	struct TArray<uint8_t > ImpactSourceCategories;  // 0x0(0x10)
	struct TArray<uint8_t > ImpactTargetCategories;  // 0x10(0x10)
	struct FCharacterImpactSounds Sounds;  // 0x20(0x8)

}; 
// Function ConZ.Prisoner.SetDesiredLeanAmount
// Size: 0x4(Inherited: 0x0) 
struct FSetDesiredLeanAmount
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerInventoryComponent.GetMaxHairLength
// Size: 0x8(Inherited: 0x0) 
struct FGetMaxHairLength
{
	uint8_t  Gender;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.ConZPlayerController.GetPrisoner
// Size: 0x8(Inherited: 0x0) 
struct FGetPrisoner
{
	struct APrisoner* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.GetFiringMode
// Size: 0x1(Inherited: 0x0) 
struct FGetFiringMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.ConZPlayerController.GetRespawnOptionTimeLeft
// Size: 0x8(Inherited: 0x0) 
struct FGetRespawnOptionTimeLeft
{
	uint8_t  option;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.WeaponActionSequence.CanInterrupt
// Size: 0x1(Inherited: 0x0) 
struct FCanInterrupt
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.ConZPlayerController.GetRespawnWaitTime
// Size: 0x4(Inherited: 0x0) 
struct FGetRespawnWaitTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.GetServerUserProfileId
// Size: 0x8(Inherited: 0x0) 
struct FGetServerUserProfileId
{
	struct FDbIntegerId ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ReplenishableResourceDescription
// Size: 0x88(Inherited: 0x0) 
struct FReplenishableResourceDescription
{
	char pad_0[8];  // 0x0(0x8)
	UGameResourceType* Type;  // 0x8(0x8)
	struct FGameplayTagContainer InSocketTypes;  // 0x10(0x20)
	struct FGameplayTagContainer OutSocketTypes;  // 0x30(0x20)
	float PricePerUnit;  // 0x50(0x4)
	char pad_84_1 : 7;  // 0x54(0x1)
	bool IsReplenishedPeriodically : 1;  // 0x54(0x1)
	char pad_85[3];  // 0x55(0x3)
	struct FPeriodicallyReplenishedResourceDescription PeriodicReplenishment;  // 0x58(0x10)
	struct FProximityReplenishedResourceDescription ProximityReplenishment;  // 0x68(0x10)
	char pad_120[16];  // 0x78(0x10)

}; 
// Function ConZ.ConZPlayerController.GetTeleportWorldStreamingLocationChangeDelay
// Size: 0x4(Inherited: 0x0) 
struct FGetTeleportWorldStreamingLocationChangeDelay
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.SentryPatrolPoint
// Size: 0x20(Inherited: 0x0) 
struct FSentryPatrolPoint
{
	struct FVector LocationRelativeToSentry;  // 0x0(0xC)
	char pad_12[20];  // 0xC(0x14)

}; 
// Function ConZ.LockProtectionTag.GetTotalDamage
// Size: 0x4(Inherited: 0x0) 
struct FGetTotalDamage
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.GetUserId
// Size: 0x10(Inherited: 0x0) 
struct FGetUserId
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.ConZPlayerController.GetUserName2
// Size: 0x10(Inherited: 0x0) 
struct FGetUserName2
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.Prisoner.GetUserProfileName
// Size: 0x10(Inherited: 0x0) 
struct FGetUserProfileName
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.GameEventScoreboardWidget.CreateMini
// Size: 0x20(Inherited: 0x0) 
struct FCreateMini
{
	struct AGameEventBase* gameEvent;  // 0x0(0x8)
	UGameEventParticipantStatsWidget* statClass;  // 0x8(0x8)
	UGameEventTeamHeaderWidget* teamHeaderClass;  // 0x10(0x8)
	struct UGameEventScoreboardWidget* ReturnValue;  // 0x18(0x8)

}; 
// DelegateFunction ConZ.CraftingRecipeWidget.RecipeSelectedDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FRecipeSelectedDelegate__DelegateSignature
{
	struct UCraftingRecipeWidget* Widget;  // 0x0(0x8)

}; 
// Function ConZ.ConZPlayerController.InitializePathFollowingComponent
// Size: 0x8(Inherited: 0x0) 
struct FInitializePathFollowingComponent
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.SetMakeNoiseLoudness
// Size: 0x1(Inherited: 0x0) 
struct FSetMakeNoiseLoudness
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.ItemAction.GetItem
// Size: 0x8(Inherited: 0x0) 
struct FGetItem
{
	struct AItem* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.Server_ApplyPointDamage
// Size: 0x90(Inherited: 0x0) 
struct FServer_ApplyPointDamage
{
	float Damage;  // 0x0(0x4)
	struct FHitResult HitResult;  // 0x4(0x88)
	uint8_t  damageChannel;  // 0x8C(0x1)
	char pad_141[3];  // 0x8D(0x3)

}; 
// Function ConZ.Prisoner.NetMulticast_ForceDeluxePlayer
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_ForceDeluxePlayer
{
	uint8_t  DeluxeVersion;  // 0x0(0x1)

}; 
// Function ConZ.ConZPlayerController.IsPushToTalkPressed
// Size: 0x1(Inherited: 0x0) 
struct FIsPushToTalkPressed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.TraderUnsubscribeData
// Size: 0x28(Inherited: 0x0) 
struct FTraderUnsubscribeData
{
	char pad_0[40];  // 0x0(0x28)

}; 
// Function ConZ.Bird2.GetIsLanding
// Size: 0x1(Inherited: 0x0) 
struct FGetIsLanding
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventScoreboardWidget.GetSelectedIndex
// Size: 0x4(Inherited: 0x0) 
struct FGetSelectedIndex
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ReplenishableResourceManager.NetMulticast_ReleaseReplenishableResourceSlot
// Size: 0x18(Inherited: 0x0) 
struct FNetMulticast_ReleaseReplenishableResourceSlot
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FPackedLocation ID;  // 0x8(0x8)
	int32_t SlotIndex;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.Prisoner.IsTeleportInProgress
// Size: 0x1(Inherited: 0x0) 
struct FIsTeleportInProgress
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.MeleeInterface.OnBeingAttackedByMelee
// Size: 0x18(Inherited: 0x0) 
struct FOnBeingAttackedByMelee
{
	struct FAttackedByMeleeData Data;  // 0x0(0x18)

}; 
// Function ConZ.ConZPlayerController.JoinGameEvent
// Size: 0x10(Inherited: 0x0) 
struct FJoinGameEvent
{
	struct AGameEventBase* gameEvent;  // 0x0(0x8)
	int32_t preferredTeam;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// DelegateFunction ConZ.ConZPlayerController.PrisonerSpawnedDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FPrisonerSpawnedDelegate__DelegateSignature
{
	struct APrisoner* spawnedPrisoner;  // 0x0(0x8)

}; 
// Function ConZ.ConZPlayerController.RegisterRespawn
// Size: 0x1(Inherited: 0x0) 
struct FRegisterRespawn
{
	uint8_t  option;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.Server_PrisonWalletHandleItemSpawning
// Size: 0xC(Inherited: 0x0) 
struct FServer_PrisonWalletHandleItemSpawning
{
	struct FVector Location;  // 0x0(0xC)

}; 
// Function ConZ.ConZGameMode.SendHUDMessageToAll
// Size: 0x18(Inherited: 0x0) 
struct FSendHUDMessageToAll
{
	struct FString Message;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool beep : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.Prisoner.GetPartWetness
// Size: 0x8(Inherited: 0x0) 
struct FGetPartWetness
{
	uint8_t  part;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.GameEventBase.FindParticipantIndex
// Size: 0x10(Inherited: 0x0) 
struct FFindParticipantIndex
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Prisoner.SetPartWaterWeight
// Size: 0x8(Inherited: 0x0) 
struct FSetPartWaterWeight
{
	uint8_t  part;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Value;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.EngineeringSkillParametersPerSkillLevel
// Size: 0x20(Inherited: 0x0) 
struct FEngineeringSkillParametersPerSkillLevel
{
	float RepairRadius;  // 0x0(0x4)
	float RepairTimeMultiplier;  // 0x4(0x4)
	float ResultQuality;  // 0x8(0x4)
	float IngredientMultiplier;  // 0xC(0x4)
	float ToolUsageMultiplier;  // 0x10(0x4)
	float FillFuelDurationMultiplier;  // 0x14(0x4)
	float DrainFuelDurationMultiplier;  // 0x18(0x4)
	float ChargeBatteryDurationMultiplier;  // 0x1C(0x4)

}; 
// Function ConZ.ConZPlayerController.SendHUDMessageToClient
// Size: 0x18(Inherited: 0x0) 
struct FSendHUDMessageToClient
{
	struct FString Message;  // 0x0(0x10)
	struct UAkAudioEvent* AudioEvent;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.BurialInformation
// Size: 0x18(Inherited: 0x0) 
struct FBurialInformation
{
	struct FDbIntegerId BurierUserId;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ShouldBury : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	struct FVector BurialLocation;  // 0xC(0xC)

}; 
// Function ConZ.ConZPlayerController.Server_HeartbeatResponse
// Size: 0x4(Inherited: 0x0) 
struct FServer_HeartbeatResponse
{
	uint32_t code;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.TriggeredEventData
// Size: 0x10(Inherited: 0x0) 
struct FTriggeredEventData
{
	char pad_0[16];  // 0x0(0x10)

}; 
// Function ConZ.PrisonerMovementComponent.GetDesiredCoursePitchAngle
// Size: 0x4(Inherited: 0x0) 
struct FGetDesiredCoursePitchAngle
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.CalculateRespawnPriceBasedOnSquadSize
// Size: 0xC(Inherited: 0x0) 
struct FCalculateRespawnPriceBasedOnSquadSize
{
	int32_t defaultPrice;  // 0x0(0x4)
	uint8_t  SpawnLocation;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	int32_t ReturnValue;  // 0x8(0x4)

}; 
// Function ConZ.ConZPlayerController.Server_JoinGameEvent
// Size: 0x10(Inherited: 0x0) 
struct FServer_JoinGameEvent
{
	struct AGameEventBase* gameEvent;  // 0x0(0x8)
	int32_t preferredTeam;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.ConZPlayerController.Server_MountedActorHasBegunPlay
// Size: 0x8(Inherited: 0x0) 
struct FServer_MountedActorHasBegunPlay
{
	struct AActor* Actor;  // 0x0(0x8)

}; 
// Function ConZ.ConZEconomyManager.NetMulticast_UpdateDateVsGoldPriceMasterMultiplierMap
// Size: 0x28(Inherited: 0x0) 
struct FNetMulticast_UpdateDateVsGoldPriceMasterMultiplierMap
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FDateTime> dates;  // 0x8(0x10)
	struct TArray<float> multipliers;  // 0x18(0x10)

}; 
// Function ConZ.Prisoner.InventoryComponent_ItemEquipped
// Size: 0x10(Inherited: 0x0) 
struct FInventoryComponent_ItemEquipped
{
	struct UPrisonerInventoryComponent* sender;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)

}; 
// Function ConZ.ConZPlayerController.Server_ProcessCharacterModificationTransaction
// Size: 0xE8(Inherited: 0x0) 
struct FServer_ProcessCharacterModificationTransaction
{
	int32_t transactionId;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FCharacterTemplate CharacterTemplate;  // 0x8(0xE0)

}; 
// ScriptStruct ConZ.HitReactDirectionData
// Size: 0x48(Inherited: 0x0) 
struct FHitReactDirectionData
{
	struct TArray<struct FHitReactBodyPartDataItem> FrontHit;  // 0x0(0x10)
	struct TArray<struct FHitReactBodyPartDataItem> LeftHit;  // 0x10(0x10)
	struct TArray<struct FHitReactBodyPartDataItem> BackHit;  // 0x20(0x10)
	struct TArray<struct FHitReactBodyPartDataItem> RightHit;  // 0x30(0x10)
	float RegainControlDurationMultiplier;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 
// ScriptStruct ConZ.CharacterTemplate
// Size: 0xE0(Inherited: 0x0) 
struct FCharacterTemplate
{
	float Strength;  // 0x0(0x4)
	float Constitution;  // 0x4(0x4)
	float Dexterity;  // 0x8(0x4)
	float Intelligence;  // 0xC(0x4)
	int32_t Age;  // 0x10(0x4)
	uint8_t  Gender;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FString Name;  // 0x18(0x10)
	int32_t AppearanceIndex;  // 0x28(0x4)
	int32_t TattooIndex;  // 0x2C(0x4)
	int32_t HairStyleIndex;  // 0x30(0x4)
	int32_t FacialHairStyleIndex;  // 0x34(0x4)
	float BreastSize;  // 0x38(0x4)
	float PenisSize;  // 0x3C(0x4)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool GrowOverTime : 1;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	int32_t TeamIndex;  // 0x44(0x4)
	struct FString BirthDate;  // 0x48(0x10)
	struct FString ArrestDate;  // 0x58(0x10)
	struct TArray<struct FSkillTemplate> Skills;  // 0x68(0x10)
	AItem* Item0;  // 0x78(0x8)
	AItem* Item1;  // 0x80(0x8)
	AItem* Item2;  // 0x88(0x8)
	int32_t FaceTypeIndex;  // 0x90(0x4)
	int32_t SkinToneIndex;  // 0x94(0x4)
	int32_t HairColorId;  // 0x98(0x4)
	int32_t FacialHairColorId;  // 0x9C(0x4)
	int32_t EyeColorIndex;  // 0xA0(0x4)
	int32_t IrisTypeIndex;  // 0xA4(0x4)
	struct FLinearColor EyeshadowColor;  // 0xA8(0x10)
	struct FLinearColor EyelinerColor;  // 0xB8(0x10)
	struct FLinearColor LipstickColor;  // 0xC8(0x10)
	char EyeMakeupMetalness;  // 0xD8(0x1)
	char EyeMakeupIntensity;  // 0xD9(0x1)
	char LipstickRoughness;  // 0xDA(0x1)
	char LipstickIntensity;  // 0xDB(0x1)
	char pad_220[4];  // 0xDC(0x4)

}; 
// Function ConZ.SimpleAnimalAIController.OnTakeDamageHandler
// Size: 0x20(Inherited: 0x0) 
struct FOnTakeDamageHandler
{
	struct AActor* damageActor;  // 0x0(0x8)
	float Damage;  // 0x8(0x4)
	struct FVector HitLocation;  // 0xC(0xC)
	struct APawn* eventInstigator;  // 0x18(0x8)

}; 
// Function ConZ.MeleeSkill.GetBlockToIdleBlendDuration
// Size: 0x4(Inherited: 0x0) 
struct FGetBlockToIdleBlendDuration
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Weapon.NotifyMissOnServer
// Size: 0x14(Inherited: 0x0) 
struct FNotifyMissOnServer
{
	struct FVector_NetQuantizeNormal shootDirection;  // 0x0(0xC)
	int32_t randomSeed;  // 0xC(0x4)
	float reticleSpread;  // 0x10(0x4)

}; 
// ScriptStruct ConZ.SkillTemplate
// Size: 0x38(Inherited: 0x0) 
struct FSkillTemplate
{
	uint8_t  Attribute;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FText Name;  // 0x8(0x18)
	struct FString ClassName;  // 0x20(0x10)
	uint8_t  Level;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	float Experience;  // 0x34(0x4)

}; 
// ScriptStruct ConZ.RadioProgramData
// Size: 0x18(Inherited: 0x0) 
struct FRadioProgramData
{
	URadioProgram* ProgramClass;  // 0x0(0x8)
	struct URadioProgram* Program;  // 0x8(0x8)
	float Chance;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.InventorySlotUserWidget.OnDraggedItemPreRotated
// Size: 0x8(Inherited: 0x0) 
struct FOnDraggedItemPreRotated
{
	struct UItemWidget2* Widget;  // 0x0(0x8)

}; 
// Function ConZ.ConZPlayerController.Server_RequestGameEventTeamChange
// Size: 0x4(Inherited: 0x0) 
struct FServer_RequestGameEventTeamChange
{
	int32_t preferredTeam;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.ActivateFacialExpressionOnGameThread
// Size: 0x14(Inherited: 0x0) 
struct FActivateFacialExpressionOnGameThread
{
	uint8_t  facialExpression;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float BlendInDuration;  // 0x4(0x4)
	float Duration;  // 0x8(0x4)
	float BlendOutDuration;  // 0xC(0x4)
	float blendWeightMultiplier;  // 0x10(0x4)

}; 
// Function ConZ.ConZPlayerController.Server_RequestSurvivalStats
// Size: 0x10(Inherited: 0x0) 
struct FServer_RequestSurvivalStats
{
	uint32_t ID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FDbIntegerId UserProfileId;  // 0x8(0x8)

}; 
// Function ConZ.ConZPlayerController.Server_SelfKickFromGameSession
// Size: 0x10(Inherited: 0x0) 
struct FServer_SelfKickFromGameSession
{
	struct FString reason;  // 0x0(0x10)

}; 
// Function ConZ.MathStatics.GetRandomPointWithinTwoCircles
// Size: 0x20(Inherited: 0x0) 
struct FGetRandomPointWithinTwoCircles
{
	struct FVector2D centerA;  // 0x0(0x8)
	float radiusA;  // 0x8(0x4)
	struct FVector2D centerB;  // 0xC(0x8)
	float radiusB;  // 0x14(0x4)
	struct FVector2D ReturnValue;  // 0x18(0x8)

}; 
// Function ConZ.ConZPlayerController.Server_SetRefreshPawnLocationForMap
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetRefreshPawnLocationForMap
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.KillBoxTimerWidget.SetTime
// Size: 0x8(Inherited: 0x0) 
struct FSetTime
{
	int32_t Minutes;  // 0x0(0x4)
	int32_t Seconds;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.PrisonerNearbyFoliageInstanceInfoReplicated
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerNearbyFoliageInstanceInfoReplicated
{
	struct TWeakObjectPtr<UInstancedStaticMeshComponent> InstancedMeshComponent;  // 0x0(0x8)
	struct FPackedLocation PackedLocation;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.ConsumableSave
// Size: 0x100(Inherited: 0x0) 
struct FConsumableSave
{
	float MassToConsume;  // 0x0(0x4)
	float ConsumptionDuration;  // 0x4(0x4)
	float Density;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FSubstancesData Substances;  // 0x10(0xD0)
	struct TArray<struct FString> ForeignSubstanceClasses;  // 0xE0(0x10)
	struct TArray<char> UserData;  // 0xF0(0x10)

}; 
// Function ConZ.PrisonerHUD.GetHUDMode
// Size: 0x1(Inherited: 0x0) 
struct FGetHUDMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.ConZPlayerController.SetCurrencyBalanceRep
// Size: 0x10(Inherited: 0x0) 
struct FSetCurrencyBalanceRep
{
	uint8_t  CurrencyType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	int64_t currencyBalance;  // 0x8(0x8)

}; 
// Function ConZ.MicInputIndicator.IsPushToTalkEnabled
// Size: 0x1(Inherited: 0x0) 
struct FIsPushToTalkEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.GetLastCorpse
// Size: 0x8(Inherited: 0x0) 
struct FGetLastCorpse
{
	struct ACorpse* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PhysicalSurfaceVehicleTireParticleData
// Size: 0x10(Inherited: 0x0) 
struct FPhysicalSurfaceVehicleTireParticleData
{
	struct UParticleSystem* ParticleTrail;  // 0x0(0x8)
	struct UParticleSystem* ParticleWave;  // 0x8(0x8)

}; 
// Function ConZ.ConZPlayerController.SetRespawnOptionTime
// Size: 0xC(Inherited: 0x0) 
struct FSetRespawnOptionTime
{
	uint8_t  option;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Time;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool force : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// ScriptStruct ConZ.BankATMCarouselCardStateVisual
// Size: 0x10(Inherited: 0x0) 
struct FBankATMCarouselCardStateVisual
{
	struct FMargin Padding;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.VehicleAttachmentWheelSetup
// Size: 0x44(Inherited: 0x0) 
struct FVehicleAttachmentWheelSetup
{
	float Radius;  // 0x0(0x4)
	float SteeringAngle;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ApplyTorque : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float BrakeStrengthMultiplier;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ApplyHandbrake : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float SuspensionLength;  // 0x14(0x4)
	float SuspensionStrength;  // 0x18(0x4)
	float SuspensionDamping;  // 0x1C(0x4)
	float SuspensionRestLength;  // 0x20(0x4)
	float SuspensionAngle;  // 0x24(0x4)
	struct FName SteeringBoneName;  // 0x28(0x8)
	struct FName SuspensionBoneName;  // 0x30(0x8)
	float MinWobbleAngleDeg;  // 0x38(0x4)
	float MaxWobbleAngleDeg;  // 0x3C(0x4)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool ShouldSpawnParticles : 1;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)

}; 
// ScriptStruct ConZ.TargetTypeDamageMultiplier
// Size: 0x10(Inherited: 0x0) 
struct FTargetTypeDamageMultiplier
{
	struct TArray<struct FDamageMultiplier> _multipliers;  // 0x0(0x10)

}; 
// Function ConZ.ConZPlayerController.SetTeleportWorldStreamingLocationChangeDelay
// Size: 0x4(Inherited: 0x0) 
struct FSetTeleportWorldStreamingLocationChangeDelay
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Zombie2.GoToRagdoll
// Size: 0x8(Inherited: 0x0) 
struct FGoToRagdoll
{
	struct FZombieRagdollAutoRecovery autoRecovery;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.DamageMultiplierTracker
// Size: 0x28(Inherited: 0x0) 
struct FDamageMultiplierTracker
{
	float _baseDamage;  // 0x0(0x4)
	float _finalDamage;  // 0x4(0x4)
	struct TArray<struct FString> _appliedMultiplierNames;  // 0x8(0x10)
	struct TArray<float> _appliedMultiplierValues;  // 0x18(0x10)

}; 
// ScriptStruct ConZ.PrisonerNearbyFoliageInfo
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerNearbyFoliageInfo
{
	struct TArray<struct FPrisonerNearbyFoliageInstanceInfo> InstancesInfo;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.AerodynamicSurfaceControlData
// Size: 0x18(Inherited: 0x0) 
struct FAerodynamicSurfaceControlData
{
	struct TArray<char> Indices;  // 0x0(0x10)
	float MaxHealth;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.ConZPlayerController.ShowKillFeedNotificationOnClient
// Size: 0x38(Inherited: 0x0) 
struct FShowKillFeedNotificationOnClient
{
	struct FString prefix;  // 0x0(0x10)
	struct FString characterName;  // 0x10(0x10)
	struct FString suffix;  // 0x20(0x10)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ping : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function ConZ.GameEventBase.GetCardWidget
// Size: 0x8(Inherited: 0x0) 
struct FGetCardWidget
{
	struct UGameEventCardWidget* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.BaseInteractionParams
// Size: 0x8(Inherited: 0x0) 
struct FBaseInteractionParams
{
	struct FDbIntegerId ElementID;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.BankTransactionRequestData
// Size: 0x38(Inherited: 0x0) 
struct FBankTransactionRequestData
{
	char pad_0[56];  // 0x0(0x38)

}; 
// Function ConZ.ConZPlayerController.ShowLevelUpMessage
// Size: 0x10(Inherited: 0x0) 
struct FShowLevelUpMessage
{
	struct USkill* Skill;  // 0x0(0x8)
	uint8_t  skillLevel;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Prisoner.HasHandBondage
// Size: 0x1(Inherited: 0x0) 
struct FHasHandBondage
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.CustomZoneDisplayData
// Size: 0x40(Inherited: 0x0) 
struct FCustomZoneDisplayData
{
	struct FString Value;  // 0x0(0x10)
	struct FText Name;  // 0x10(0x18)
	struct FText Description;  // 0x28(0x18)

}; 
// ScriptStruct ConZ.SplineDescription
// Size: 0x30(Inherited: 0x0) 
struct FSplineDescription
{
	struct USplineComponent* SplineComponent;  // 0x0(0x8)
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents;  // 0x8(0x10)
	struct UStaticMeshComponent* SplineStartConnector;  // 0x18(0x8)
	struct UStaticMeshComponent* SplineEndConnector;  // 0x20(0x8)
	char pad_40[8];  // 0x28(0x8)

}; 
// Function ConZ.ConZPlayerController.ShowLevelUpMessageFromClass
// Size: 0x10(Inherited: 0x0) 
struct FShowLevelUpMessageFromClass
{
	USkill* skillClass;  // 0x0(0x8)
	uint8_t  skillLevel;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ConZPlayerController.ShowWarningMessage
// Size: 0x28(Inherited: 0x0) 
struct FShowWarningMessage
{
	struct FString Message;  // 0x0(0x10)
	float Duration;  // 0x10(0x4)
	struct FLinearColor TextColor;  // 0x14(0x10)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ConZ.ElementQueryMarker
// Size: 0x40(Inherited: 0x0) 
struct FElementQueryMarker
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Include : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	UModularBaseBuildingSocketType* SocketClass;  // 0x8(0x8)
	struct FTransform Transform;  // 0x10(0x30)

}; 
// Function ConZ.PrisonerInventoryComponent.UnEquipClothesItemOnServer
// Size: 0x10(Inherited: 0x0) 
struct FUnEquipClothesItemOnServer
{
	struct AClothesItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool placeInInventory : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool shouldEverDrop : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// Function ConZ.Prisoner.NetMulticast_SetActiveParachute
// Size: 0x8(Inherited: 0x0) 
struct FNetMulticast_SetActiveParachute
{
	struct AClothesItem* Parachute;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.OnPlaceableDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnPlaceableDestroyed
{
	struct AActor* Actor;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.Teleport
// Size: 0x1C(Inherited: 0x0) 
struct FTeleport
{
	struct FPrisonerTeleportRequest request;  // 0x0(0x1C)

}; 
// ScriptStruct ConZ.HitReactBodyPartDataItem
// Size: 0x18(Inherited: 0x0) 
struct FHitReactBodyPartDataItem
{
	struct UAnimMontage* MontageToPlay;  // 0x0(0x8)
	struct UAnimMontage* FollowupMontage;  // 0x8(0x8)
	float RegainControlDurationMultiplier;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ConZ.RangedWeaponSkillParametersPerSkillLevel
// Size: 0x4(Inherited: 0x0) 
struct FRangedWeaponSkillParametersPerSkillLevel
{
	float CrosshairHidingDuration;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.ClimbableObstacleInfo
// Size: 0x88(Inherited: 0x0) 
struct FClimbableObstacleInfo
{
	struct FVector EdgeLocationZero;  // 0x0(0xC)
	float EdgeHeight;  // 0xC(0x4)
	struct FVector HWallNormal;  // 0x10(0xC)
	struct FVector VWallNormal;  // 0x1C(0xC)
	struct FVector CapsuleLocationAtAnchorZero;  // 0x28(0xC)
	struct FRotator CapsuleRotationAtAnchor;  // 0x34(0xC)
	struct TWeakObjectPtr<UPrimitiveComponent> BaseComponent;  // 0x40(0x8)
	struct FPrisonerClimbAnimationInfo AnimationInfo;  // 0x48(0x40)

}; 
// ScriptStruct ConZ.TeleportRequest
// Size: 0x28(Inherited: 0x0) 
struct FTeleportRequest
{
	struct TWeakObjectPtr<AActor> Subject;  // 0x0(0x8)
	struct FVector TargetLocation;  // 0x8(0xC)
	struct FRotator TargetRotation;  // 0x14(0xC)
	struct TWeakObjectPtr<UTeleportUserData> UserData;  // 0x20(0x8)

}; 
// ScriptStruct ConZ.RoomDefinition
// Size: 0x20(Inherited: 0x0) 
struct FRoomDefinition
{
	struct ADoor* RoomDoor;  // 0x0(0x8)
	struct UStaticMeshComponent* Locker;  // 0x8(0x8)
	struct AKillBoxC4SpawnPoint* C4;  // 0x10(0x8)
	char pad_24[8];  // 0x18(0x8)

}; 
// Function ConZ.Prisoner.GetBodySimulation
// Size: 0x8(Inherited: 0x0) 
struct FGetBodySimulation
{
	struct UPrisonerBodySimulationComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZCharacter.ActorHitCallback
// Size: 0xA8(Inherited: 0x0) 
struct FActorHitCallback
{
	struct AActor* Actor;  // 0x0(0x8)
	struct AActor* OtherActor;  // 0x8(0x8)
	struct FVector NormalImpulse;  // 0x10(0xC)
	struct FHitResult Hit;  // 0x1C(0x88)
	char pad_164[4];  // 0xA4(0x4)

}; 
// Function ConZ.ConZCharacter.Client_RequestCharacterAction
// Size: 0x20(Inherited: 0x0) 
struct FClient_RequestCharacterAction
{
	struct FCharacterActionReplicationHelper Value;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool cancelExecutingAction : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// ScriptStruct ConZ.ConZDimensionRow
// Size: 0x20(Inherited: 0x8) 
struct FConZDimensionRow : public FTableRowBase
{
	float Value;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FString Description;  // 0x10(0x10)

}; 
// Function ConZ.PlayerRpcChannel.ScopeableItemComponent_Server_SetCurrentZoomLevel
// Size: 0x10(Inherited: 0x0) 
struct FScopeableItemComponent_Server_SetCurrentZoomLevel
{
	struct UScopeableItemComponent* comp;  // 0x0(0x8)
	int32_t Value;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct ConZ.CharacterActionReplicationHelper
// Size: 0x18(Inherited: 0x0) 
struct FCharacterActionReplicationHelper
{
	char pad_0[24];  // 0x0(0x18)

}; 
// Function ConZ.Prisoner.NetMulticast_SpawnDefecationEffects
// Size: 0x2(Inherited: 0x0) 
struct FNetMulticast_SpawnDefecationEffects
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool shouldBeDiarrhea : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool isForced : 1;  // 0x1(0x1)

}; 
// ScriptStruct ConZ.ConZPlacementQueryParams
// Size: 0x28(Inherited: 0x0) 
struct FConZPlacementQueryParams
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsSnapping : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool MustBePlacedOnFoundations : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool CanEverBePlacedOnFoundations : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool CanBePlacedOnOtherBaseElements : 1;  // 0x3(0x1)
	char pad_4[4];  // 0x4(0x4)
	struct APrisoner* User;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool CanBePlacedWithoutFlag : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool CanBePlacedInBuilding : 1;  // 0x11(0x1)
	char pad_18_1 : 7;  // 0x12(0x1)
	bool CanBePlacedInRestrictedArea : 1;  // 0x12(0x1)
	char pad_19[1];  // 0x13(0x1)
	int32_t MaxInstancesPerFlagArea;  // 0x14(0x4)
	UObject* ClassToSpawn;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool IgnoreDisabledBaseBuildingFlag : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// ScriptStruct ConZ.CharacterSpawnerData
// Size: 0x10(Inherited: 0x0) 
struct FCharacterSpawnerData
{
	struct TArray<APawn*> CharacterClasses;  // 0x0(0x10)

}; 
// Function ConZ.NetworkStatics.SetComponentNetAddressable
// Size: 0x8(Inherited: 0x0) 
struct FSetComponentNetAddressable
{
	struct UActorComponent* Component;  // 0x0(0x8)

}; 
// Function ConZ.ConZCharacter.GetBodyPartFromBoneName
// Size: 0xC(Inherited: 0x0) 
struct FGetBodyPartFromBoneName
{
	struct FName BoneName;  // 0x0(0x8)
	uint8_t  ReturnValue;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function ConZ.Prisoner.GetCollidingNearbyFoliageInfo
// Size: 0x10(Inherited: 0x0) 
struct FGetCollidingNearbyFoliageInfo
{
	struct FPrisonerNearbyFoliageInfo ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.ConZCharacter.GetEnvironmentDescription
// Size: 0x3(Inherited: 0x0) 
struct FGetEnvironmentDescription
{
	struct FEnvironmentDescription ReturnValue;  // 0x0(0x3)

}; 
// Function ConZ.ResourceLockingManager.NetMulticast_RemoveAreaLocks
// Size: 0x18(Inherited: 0x0) 
struct FNetMulticast_RemoveAreaLocks
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FAreaResourceLockNetwork> Locks;  // 0x8(0x10)

}; 
// Function ConZ.PlayerRpcChannel.Notifications_RequestNotification
// Size: 0x18(Inherited: 0x0) 
struct FNotifications_RequestNotification
{
	struct FNotificationDescriptionReplicationHelper Description;  // 0x0(0x18)

}; 
// ScriptStruct ConZ.CorpseSkeletalMeshRepData
// Size: 0x70(Inherited: 0x0) 
struct FCorpseSkeletalMeshRepData
{
	struct FName DisplayName;  // 0x0(0x8)
	struct USkeletalMesh* Mesh;  // 0x8(0x8)
	struct TArray<struct UMaterialInterface*> Materials;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool Visibility : 1;  // 0x20(0x1)
	char pad_33[15];  // 0x21(0xF)
	struct FTransform Transform;  // 0x30(0x30)
	struct FName AttachSocket;  // 0x60(0x8)
	char pad_104[8];  // 0x68(0x8)

}; 
// Function ConZ.Vehicle.GetNumVehicleDoorWindows
// Size: 0x4(Inherited: 0x0) 
struct FGetNumVehicleDoorWindows
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PlayerRpcChannel.BaseBuilding_Server_RequestElementStateUpdate
// Size: 0x10(Inherited: 0x0) 
struct FBaseBuilding_Server_RequestElementStateUpdate
{
	struct FVector Location;  // 0x0(0xC)
	float areaSize;  // 0xC(0x4)

}; 
// ScriptStruct ConZ.EnvironmentDescription
// Size: 0x3(Inherited: 0x0) 
struct FEnvironmentDescription
{
	uint8_t  EnvironmentClass;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool IsUnderground : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool ShouldBlockWeatherEffects : 1;  // 0x2(0x1)

}; 
// ScriptStruct ConZ.LegalTender
// Size: 0x8(Inherited: 0x0) 
struct FLegalTender
{
	int32_t Amount;  // 0x0(0x4)
	uint8_t  Currency;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// ScriptStruct ConZ.BuildingsReplicationHelper
// Size: 0x70(Inherited: 0x0) 
struct FBuildingsReplicationHelper
{
	struct TMap<struct FString, struct FBuildingData> BuildingsData;  // 0x0(0x50)
	char pad_80[32];  // 0x50(0x20)

}; 
// Function ConZ.Prisoner.GetClampedDesiredPace
// Size: 0x1(Inherited: 0x0) 
struct FGetClampedDesiredPace
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.MissionReward
// Size: 0x18(Inherited: 0x0) 
struct FMissionReward
{
	struct TArray<AItem*> RewardItems;  // 0x0(0x10)
	float RewardFamePoints;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool RewardReceived : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function ConZ.ConZCharacter.GetGender
// Size: 0x1(Inherited: 0x0) 
struct FGetGender
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.LadderMarkersReplicator.NetMulticast_UnregisterLadderMarker
// Size: 0xB0(Inherited: 0x0) 
struct FNetMulticast_UnregisterLadderMarker
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FLadderMarker marker;  // 0x10(0xA0)

}; 
// Function ConZ.ConZCharacter.GetHitReactBodyPartFromBodyPart
// Size: 0x2(Inherited: 0x0) 
struct FGetHitReactBodyPartFromBodyPart
{
	uint8_t  Value;  // 0x0(0x1)
	uint8_t  ReturnValue;  // 0x1(0x1)

}; 
// ScriptStruct ConZ.LadderMarker
// Size: 0xA0(Inherited: 0x0) 
struct FLadderMarker
{
	struct FTransform FirstStep;  // 0x0(0x30)
	struct FVector LastStep;  // 0x30(0xC)
	char pad_60[4];  // 0x3C(0x4)
	struct FTransform Edge;  // 0x40(0x30)
	struct FVector CapsuleBias;  // 0x70(0xC)
	float StepHeight;  // 0x7C(0x4)
	float StepWidth;  // 0x80(0x4)
	float HitDetectionExtraAboveLastStep;  // 0x84(0x4)
	float HitDetectionExtraBelowFirstStep;  // 0x88(0x4)
	float HitDetectionExtraOnTheSides;  // 0x8C(0x4)
	char pad_144_1 : 7;  // 0x90(0x1)
	bool HasEdge : 1;  // 0x90(0x1)
	char pad_145_1 : 7;  // 0x91(0x1)
	bool IsNarrow : 1;  // 0x91(0x1)
	char EPhysicalSurface PhysicalSurfaceForSounds;  // 0x92(0x1)
	char pad_147[13];  // 0x93(0xD)

}; 
// Function ConZ.PrisonerMovementComponent.GetMaxAllowedPace
// Size: 0x1(Inherited: 0x0) 
struct FGetMaxAllowedPace
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.User.SetLastDirectConnectionAddress
// Size: 0x10(Inherited: 0x0) 
struct FSetLastDirectConnectionAddress
{
	struct FString Value;  // 0x0(0x10)

}; 
// Function ConZ.Weapon.GetLiveAmmoCount
// Size: 0x4(Inherited: 0x0) 
struct FGetLiveAmmoCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.SharkAnimInstance.IsAlive
// Size: 0x1(Inherited: 0x0) 
struct FIsAlive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.WindowMarkerModifier
// Size: 0x8(Inherited: 0x0) 
struct FWindowMarkerModifier
{
	int32_t Index;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool IsVaultable : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool IsFortifiable : 1;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)

}; 
// Function ConZ.ConZCharacter.GetHitReactBodyPartFromHitResult
// Size: 0x8C(Inherited: 0x0) 
struct FGetHitReactBodyPartFromHitResult
{
	struct FHitResult HitResult;  // 0x0(0x88)
	uint8_t  ReturnValue;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)

}; 
// Function ConZ.Prisoner.Client_ActivateIntroCinematic
// Size: 0x4(Inherited: 0x0) 
struct FClient_ActivateIntroCinematic
{
	float initialAltitude;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.CombinationLockGetCombinationRequestData
// Size: 0x14(Inherited: 0x0) 
struct FCombinationLockGetCombinationRequestData
{
	char pad_0[20];  // 0x0(0x14)

}; 
// Function ConZ.UIStatics.GetDesiredWidgetClass
// Size: 0x10(Inherited: 0x0) 
struct FGetDesiredWidgetClass
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	UUserWidget* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.PrisonerMovementComponent.DetectLadderDisembarkLocation
// Size: 0xD0(Inherited: 0x0) 
struct FDetectLadderDisembarkLocation
{
	struct FLadderInfo LadderInfo;  // 0x0(0xB0)
	struct FVector newCapsuleLocation;  // 0xB0(0xC)
	struct FRotator newCapsuleRotation;  // 0xBC(0xC)
	char pad_200_1 : 7;  // 0xC8(0x1)
	bool ReturnValue : 1;  // 0xC8(0x1)
	char pad_201[7];  // 0xC9(0x7)

}; 
// ScriptStruct ConZ.DrivingSkillEngineStallingParameters
// Size: 0x40(Inherited: 0x0) 
struct FDrivingSkillEngineStallingParameters
{
	float Chance;  // 0x0(0x4)
	float MinDuration;  // 0x4(0x4)
	float MaxDuration;  // 0x8(0x4)
	float StopEngineChance;  // 0xC(0x4)
	struct UCurveFloat* ThrottleCurve;  // 0x10(0x8)
	float ThrottleCurveFrequencyMultiplier;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	struct UCurveFloat* BrakeCurve;  // 0x20(0x8)
	float BrakeCurveFrequencyMultiplier;  // 0x28(0x4)
	float ForceMagnitudeScale;  // 0x2C(0x4)
	struct UCurveFloat* ForceMagnitudeScaleCurve;  // 0x30(0x8)
	float ForceMagnitudeScaleCurveFrequencyMultiplier;  // 0x38(0x4)
	float ForceDirectionRandomizationAngle;  // 0x3C(0x4)

}; 
// Function ConZ.ConZCharacter.GetSoundComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetSoundComponent
{
	struct UCharacterSoundComponent* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PrisonerRestingData
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerRestingData
{
	uint8_t  mode;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool IsRestingOnGround : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool HasChangedTransform : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool HasDisabledCapsuleCollision : 1;  // 0x3(0x1)
	struct TWeakObjectPtr<UAnimSequenceBase> RestingAnimation;  // 0x4(0x8)
	float FeetIKOffset;  // 0xC(0x4)

}; 
// Function ConZ.ConZCharacter.HasCharacterAction
// Size: 0x1(Inherited: 0x0) 
struct FHasCharacterAction
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.InteractionComponent.UnexamineItemOnServer
// Size: 0x8(Inherited: 0x0) 
struct FUnexamineItemOnServer
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.SpawnMenuWidget.GetCurrentCurrencyTextColorAndOpacity
// Size: 0x28(Inherited: 0x0) 
struct FGetCurrentCurrencyTextColorAndOpacity
{
	struct FSlateColor ReturnValue;  // 0x0(0x28)

}; 
// Function ConZ.ConZCharacter.IsConscious
// Size: 0x1(Inherited: 0x0) 
struct FIsConscious
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.MapHUDWorldEventsObject
// Size: 0x18(Inherited: 0x18) 
struct FMapHUDWorldEventsObject : public FMapHUDObject
{

}; 
// ScriptStruct ConZ.MetabolismAPBFontStyle
// Size: 0x30(Inherited: 0x0) 
struct FMetabolismAPBFontStyle
{
	struct UFont* Font;  // 0x0(0x8)
	int32_t FontSize;  // 0x8(0x4)
	struct FMargin TitlePadding;  // 0xC(0x10)
	struct FMargin ValuePadding;  // 0x1C(0x10)
	char EVerticalAlignment TitleVerticalAlignment;  // 0x2C(0x1)
	char EHorizontalAlignment TitleHorizontalAlignment;  // 0x2D(0x1)
	char EVerticalAlignment ValueVerticalAlignment;  // 0x2E(0x1)
	char EHorizontalAlignment ValueHorizontalAlignment;  // 0x2F(0x1)

}; 
// Function ConZ.Weapon.Server_SetMalfunction
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetMalfunction
{
	uint8_t  Type;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.BodyWeaponAnimation
// Size: 0x10(Inherited: 0x0) 
struct FBodyWeaponAnimation
{
	struct UAnimMontage* Body;  // 0x0(0x8)
	struct UAnimMontage* Weapon;  // 0x8(0x8)

}; 
// Function ConZ.Prisoner.IsCompletelyInitialized
// Size: 0x1(Inherited: 0x0) 
struct FIsCompletelyInitialized
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventBase.GetParticipantTeam
// Size: 0x10(Inherited: 0x0) 
struct FGetParticipantTeam
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Vehicle.GetNumMountees
// Size: 0x4(Inherited: 0x0) 
struct FGetNumMountees
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZCharacter.IsHeadBone
// Size: 0xC(Inherited: 0x0) 
struct FIsHeadBone
{
	struct FName BoneName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// ScriptStruct ConZ.CraftingRecipeCraftingItem
// Size: 0x10(Inherited: 0x0) 
struct FCraftingRecipeCraftingItem
{
	AItem* ItemClass;  // 0x0(0x8)
	int32_t Quantity;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool IsOptional : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function ConZ.Zombie2.BaseInteractionComponent_OnBaseInteractionEvent
// Size: 0x10(Inherited: 0x0) 
struct FBaseInteractionComponent_OnBaseInteractionEvent
{
	struct UBaseInteractionComponent* Component;  // 0x0(0x8)
	struct FBaseInteractionEvent BaseInteractionEvent;  // 0x8(0x8)

}; 
// Function ConZ.ConZCharacter.LeaveCorpse
// Size: 0x8(Inherited: 0x0) 
struct FLeaveCorpse
{
	struct ACorpse* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.AddAttachmentOnServer
// Size: 0x8(Inherited: 0x0) 
struct FAddAttachmentOnServer
{
	struct AWeaponAttachment* Attachment;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ParachuteAnimParams
// Size: 0x10(Inherited: 0x0) 
struct FParachuteAnimParams
{
	struct UAnimSequence* OpeningAnimation;  // 0x0(0x8)
	struct FFloatInterval OpeningAnimationTimeRange;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.VehicleAttachmentSave
// Size: 0x10(Inherited: 0x0) 
struct FVehicleAttachmentSave
{
	struct TArray<char> Data;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.CharacterActionAck
// Size: 0xC(Inherited: 0x0) 
struct FCharacterActionAck
{
	int32_t ActionId;  // 0x0(0x4)
	int32_t SubActionIndex;  // 0x4(0x4)
	uint8_t  Type;  // 0x8(0x1)
	uint8_t  EndState;  // 0x9(0x1)
	char pad_10[2];  // 0xA(0x2)

}; 
// ScriptStruct ConZ.AnimalPaceSettings
// Size: 0x10(Inherited: 0x0) 
struct FAnimalPaceSettings
{
	float RunSpeed;  // 0x0(0x4)
	float TrotSpeed;  // 0x4(0x4)
	float WalkSpeed;  // 0x8(0x4)
	float SneakSpeed;  // 0xC(0x4)

}; 
// ScriptStruct ConZ.SearchPerItemData
// Size: 0x48(Inherited: 0x0) 
struct FSearchPerItemData
{
	struct TSoftClassPtr<UObject> ItemClass;  // 0x0(0x28)
	struct TArray<struct UPhysicalMaterial*> NeededMaterials;  // 0x28(0x10)
	float Probability;  // 0x38(0x4)
	int32_t MinQuantity;  // 0x3C(0x4)
	int32_t MaxQuantity;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 
// Function ConZ.Prisoner.HasItemOfClass
// Size: 0x10(Inherited: 0x0) 
struct FHasItemOfClass
{
	UObject* ItemClass;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.InteractableInterface.CanInteract
// Size: 0x10(Inherited: 0x0) 
struct FCanInteract
{
	struct APrisoner* User;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ConZCharacter.NetMulticast_HandleMeleeAttackCapsuleHit
// Size: 0x140(Inherited: 0x0) 
struct FNetMulticast_HandleMeleeAttackCapsuleHit
{
	struct AConZCharacter* attacker;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FMeleeAttackCapsuleHitInfo HitInfo;  // 0x10(0x130)

}; 
// Function ConZ.GameEventBase.GetParticipantAtRank
// Size: 0x8(Inherited: 0x0) 
struct FGetParticipantAtRank
{
	int32_t Rank;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.CookedFoodIngredientNetData
// Size: 0x14(Inherited: 0x0) 
struct FCookedFoodIngredientNetData
{
	struct FPrimaryAssetId Resource;  // 0x0(0x10)
	float Mass;  // 0x10(0x4)

}; 
// ScriptStruct ConZ.ClothesPartSet
// Size: 0x50(Inherited: 0x0) 
struct FClothesPartSet
{
	struct TSet<uint8_t > ClothesParts;  // 0x0(0x50)

}; 
// ScriptStruct ConZ.MeleeAttackCapsule
// Size: 0x80(Inherited: 0x0) 
struct FMeleeAttackCapsule
{
	struct TWeakObjectPtr<AActor> AttachParent;  // 0x0(0x8)
	struct FGameplayTag Attachment;  // 0x8(0x8)
	struct FTransform RelativeTransform;  // 0x10(0x30)
	float UnscaledRadius;  // 0x40(0x4)
	float UnscaledHalfHeight;  // 0x44(0x4)
	struct FMeleeWeaponDesc WeaponDesc;  // 0x48(0x38)

}; 
// ScriptStruct ConZ.CharacterSpawnerMarker
// Size: 0x50(Inherited: 0x0) 
struct FCharacterSpawnerMarker
{
	struct FTransform Transform;  // 0x0(0x30)
	struct FCharacterSpawnerDataBasedOnPreset Spawner;  // 0x30(0x20)

}; 
// ScriptStruct ConZ.MeleeWeaponDesc
// Size: 0x38(Inherited: 0x0) 
struct FMeleeWeaponDesc
{
	float Damage;  // 0x0(0x4)
	float DamageInGameEvent;  // 0x4(0x4)
	struct FTargetTypeDamageMultiplier TargetTypeMultiplier;  // 0x8(0x10)
	float Energy;  // 0x18(0x4)
	float SharpnessSlash;  // 0x1C(0x4)
	float SharpnessPierce;  // 0x20(0x4)
	int32_t HitSeverityChange;  // 0x24(0x4)
	uint8_t  ImpactSoundCategory;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct UProjectileImpactEffects* ImpactEffects;  // 0x30(0x8)

}; 
// Function ConZ.ConZCharacter.NetMulticast_RequestCharacterAction
// Size: 0x20(Inherited: 0x0) 
struct FNetMulticast_RequestCharacterAction
{
	struct FCharacterActionReplicationHelper Value;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ignoreAutonomousProxy : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.PrisonerAnimInstance.GetKnownCurveValueOnWorkerThread
// Size: 0x8(Inherited: 0x0) 
struct FGetKnownCurveValueOnWorkerThread
{
	uint8_t  Curve;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.ExtendedRichTextBlock.SetTextStyle
// Size: 0x270(Inherited: 0x0) 
struct FSetTextStyle
{
	struct FTextBlockStyle Style;  // 0x0(0x270)

}; 
// Function ConZ.ConZCharacter.OnRep_Gender
// Size: 0x1(Inherited: 0x0) 
struct FOnRep_Gender
{
	uint8_t  oldGender;  // 0x0(0x1)

}; 
// Function ConZ.ResourceLockingManager.NetMulticast_RemoveActorLocks
// Size: 0x18(Inherited: 0x0) 
struct FNetMulticast_RemoveActorLocks
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FActorResourceLockNetwork> Locks;  // 0x8(0x10)

}; 
// ScriptStruct ConZ.GameEventNotificationUIData
// Size: 0x50(Inherited: 0x0) 
struct FGameEventNotificationUIData
{
	char pad_0[80];  // 0x0(0x50)

}; 
// Function ConZ.Weapon.AddAmmoSingleAtLocation
// Size: 0x20(Inherited: 0x0) 
struct FAddAmmoSingleAtLocation
{
	struct FAmmunitionData ammoData;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool backLocation : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// ScriptStruct ConZ.WindowClimbingAnimationInfo
// Size: 0x48(Inherited: 0x0) 
struct FWindowClimbingAnimationInfo
{
	struct FVector AnchorOffset;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct UAnimSequenceBase* AnchoringAnimation;  // 0x10(0x8)
	float AnchoringAnimationTime;  // 0x18(0x4)
	float AnchoringDuration;  // 0x1C(0x4)
	struct UAnimMontage* ClimbingMontage;  // 0x20(0x8)
	float MinWindowWidth;  // 0x28(0x4)
	float MinWindowHeight;  // 0x2C(0x4)
	float MinSpacingToLeftWindowEdge;  // 0x30(0x4)
	float MinSpacingToRightWindowEdge;  // 0x34(0x4)
	float MinWindowDistanceToFloor;  // 0x38(0x4)
	float MaxWindowDistanceToFloor;  // 0x3C(0x4)
	float StaminaDrain;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 
// Function ConZ.MissionContainerWidget.StartObjectiveAnimation
// Size: 0x1(Inherited: 0x0) 
struct FStartObjectiveAnimation
{
	uint8_t  AnimationState;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerInventoryComponent.SpawnAndDropItemAtOnServer
// Size: 0x20(Inherited: 0x0) 
struct FSpawnAndDropItemAtOnServer
{
	struct UContainerItemDescriptor* Item;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	struct FRotator Rotation;  // 0x14(0xC)

}; 
// Function ConZ.ConZCharacter.ReceiveBeginHit
// Size: 0xC8(Inherited: 0x0) 
struct FReceiveBeginHit
{
	struct UPrimitiveComponent* MyComp;  // 0x0(0x8)
	struct AActor* Other;  // 0x8(0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool selfMoved : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	struct FVector HitLocation;  // 0x1C(0xC)
	struct FVector HitNormal;  // 0x28(0xC)
	struct FVector NormalImpulse;  // 0x34(0xC)
	struct FHitResult Hit;  // 0x40(0x88)

}; 
// DelegateFunction ConZ.ItemContainer.OnItemContainerLocked__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnItemContainerLocked__DelegateSignature
{
	struct AItemContainer* ItemContainer;  // 0x0(0x8)

}; 
// Function ConZ.ConZCharacter.Server_CharacterActionAck
// Size: 0xC(Inherited: 0x0) 
struct FServer_CharacterActionAck
{
	struct FCharacterActionAck ack;  // 0x0(0xC)

}; 
// ScriptStruct ConZ.PrisonerWaterMovementParameters
// Size: 0xC(Inherited: 0x0) 
struct FPrisonerWaterMovementParameters
{
	float MaxSpeed;  // 0x0(0x4)
	float Acceleration;  // 0x4(0x4)
	float Deceleration;  // 0x8(0x4)

}; 
// Function ConZ.Prisoner.SetMeleeTargetSelectionMode
// Size: 0x1(Inherited: 0x0) 
struct FSetMeleeTargetSelectionMode
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// Function ConZ.ConZCharacter.Server_RequestCharacterAction
// Size: 0x18(Inherited: 0x0) 
struct FServer_RequestCharacterAction
{
	struct FCharacterActionReplicationHelper Value;  // 0x0(0x18)

}; 
// Function ConZ.ConZCharacter.Server_HandleMeleeAttackCapsuleHit
// Size: 0x140(Inherited: 0x0) 
struct FServer_HandleMeleeAttackCapsuleHit
{
	struct AConZCharacter* attacker;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FMeleeAttackCapsuleHitInfo HitInfo;  // 0x10(0x130)

}; 
// Function ConZ.WeaponAmmoDisplayContainerWidget.Init
// Size: 0x18(Inherited: 0x0) 
struct FInit
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	float onScreenDuration;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool displayOnCenter : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct UTexture2D* iconOverride;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.ConZWaterSplineControlPoint
// Size: 0x58(Inherited: 0x44) 
struct FConZWaterSplineControlPoint : public FSplinePoint
{
	char pad_68_1 : 7;  // 0x44(0x1)
	bool selected : 1;  // 0x44(0x1)
	char pad_69[3];  // 0x45(0x3)
	float Width;  // 0x48(0x4)
	float MaxDepth;  // 0x4C(0x4)
	float Speed;  // 0x50(0x4)
	float Opacity;  // 0x54(0x4)

}; 
// Function ConZ.Prisoner.PlaceItemInInventoryOrHolster
// Size: 0x10(Inherited: 0x0) 
struct FPlaceItemInInventoryOrHolster
{
	struct AItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool tryToJoinItems : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ConZCharacter.Server_SetEnvironmentDescription
// Size: 0x3(Inherited: 0x0) 
struct FServer_SetEnvironmentDescription
{
	struct FEnvironmentDescription Value;  // 0x0(0x3)

}; 
// Function ConZ.ConZCharacter.SetEnvironmentDescription
// Size: 0x3(Inherited: 0x0) 
struct FSetEnvironmentDescription
{
	struct FEnvironmentDescription Value;  // 0x0(0x3)

}; 
// ScriptStruct ConZ.VehicleExhaustParticles
// Size: 0x18(Inherited: 0x0) 
struct FVehicleExhaustParticles
{
	struct FName AttachSocketName;  // 0x0(0x8)
	struct UParticleSystem* ParticleSystem;  // 0x8(0x8)
	char pad_16[8];  // 0x10(0x8)

}; 
// Function ConZ.DropZoneSlot.Server_Activate
// Size: 0x8(Inherited: 0x0) 
struct FServer_Activate
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.ConZCharacter.SetGender
// Size: 0x1(Inherited: 0x0) 
struct FSetGender
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.IsMemberOfMySquad
// Size: 0x10(Inherited: 0x0) 
struct FIsMemberOfMySquad
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Prisoner.GetDesiredPace
// Size: 0x1(Inherited: 0x0) 
struct FGetDesiredPace
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.HitEffects
// Size: 0x38(Inherited: 0x0) 
struct FHitEffects
{
	float SpeedThreshold;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UParticleSystem* ParticleSystem;  // 0x8(0x8)
	struct FVector ParticlesScale;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)
	struct UAkAudioEvent* AudioEvent;  // 0x20(0x8)
	UMatineeCameraShake* CameraShake;  // 0x28(0x8)
	float CameraShakeScale;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function ConZ.Prisoner.AcceptSquadInvitationOnServer
// Size: 0x10(Inherited: 0x0) 
struct FAcceptSquadInvitationOnServer
{
	struct AConZSquad* Squad;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool accepted : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Prisoner.NetMulticast_SetUserFakeName
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_SetUserFakeName
{
	struct FString fakeName;  // 0x0(0x10)

}; 
// Function ConZ.Prisoner.GetRotationTarget
// Size: 0x8(Inherited: 0x0) 
struct FGetRotationTarget
{
	struct AActor* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.AddHandBondage
// Size: 0x8(Inherited: 0x0) 
struct FAddHandBondage
{
	struct AItem* bondageItem;  // 0x0(0x8)

}; 
// Function ConZ.ComplexAnimal2.Rest
// Size: 0x4(Inherited: 0x0) 
struct FRest
{
	float Time;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.AddWeaponAttachment
// Size: 0x10(Inherited: 0x0) 
struct FAddWeaponAttachment
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	struct AWeaponAttachment* Attachment;  // 0x8(0x8)

}; 
// Function ConZ.AudioStatics.PostAkEventAtLocation
// Size: 0x40(Inherited: 0x0) 
struct FPostAkEventAtLocation
{
	struct UAkAudioEvent* akEvent;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	struct FRotator Orientation;  // 0x14(0xC)
	struct FString EventName;  // 0x20(0x10)
	struct UObject* WorldContextObject;  // 0x30(0x8)
	int32_t ReturnValue;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 
// Function ConZ.MissionScheduler.OnLocationEnter
// Size: 0x10(Inherited: 0x0) 
struct FOnLocationEnter
{
	struct AActor* OverlapedActor;  // 0x0(0x8)
	struct AActor* OtherActor;  // 0x8(0x8)

}; 
// Function ConZ.Prisoner.AreBreastsExposed
// Size: 0x1(Inherited: 0x0) 
struct FAreBreastsExposed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// DelegateFunction ConZ.Prisoner.BorderCrossingPenaltyChange__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FBorderCrossingPenaltyChange__DelegateSignature
{
	struct APrisoner* sender;  // 0x0(0x8)
	uint8_t  newPenalty;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ConZ.SkillEventThrownItemHitTarget
// Size: 0x8(Inherited: 0x0) 
struct FSkillEventThrownItemHitTarget
{
	struct AActor* Target;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ConZBaseElementInteractionData
// Size: 0x30(Inherited: 0x0) 
struct FConZBaseElementInteractionData
{
	int64_t BaseElementId;  // 0x0(0x8)
	struct FVector BaseElementLocation;  // 0x8(0xC)
	float RepairValue;  // 0x14(0x4)
	int64_t InteractionTimestamp;  // 0x18(0x8)
	int64_t IntegerData;  // 0x20(0x8)
	struct UObject* PointerData;  // 0x28(0x8)

}; 
// Function ConZ.Prisoner.CalculateAIPerceptionPercentage
// Size: 0x4(Inherited: 0x0) 
struct FCalculateAIPerceptionPercentage
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.CanEnterCombatMode
// Size: 0x1(Inherited: 0x0) 
struct FCanEnterCombatMode
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.CustomZoneRegion
// Size: 0x38(Inherited: 0x0) 
struct FCustomZoneRegion
{
	struct FString Name;  // 0x0(0x10)
	struct FVector2D Location;  // 0x10(0x8)
	struct FVector2D Size;  // 0x18(0x8)
	uint8_t  Shape;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	int32_t ConfigurationIndex;  // 0x24(0x4)
	struct FName UniqueDefaultZoneName;  // 0x28(0x8)
	uint8_t  DefaultZoneState;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching
// Size: 0x6C(Inherited: 0x0) 
struct FPrisonerMovementSettings_Ground_Crouching
{
	struct FPrisonerMovementSettings_Ground_Crouching_Walking Walking;  // 0x0(0x24)
	struct FPrisonerMovementSettings_Ground_Crouching_Walking WalkingFaster;  // 0x24(0x24)
	struct FPrisonerMovementSettings_Ground_Crouching_Walking WalkLimping;  // 0x48(0x24)

}; 
// Function ConZ.ThrowingQuickAccessItemWidget.OnImageWidgetMouseButtonDown
// Size: 0x160(Inherited: 0x0) 
struct FOnImageWidgetMouseButtonDown
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// Function ConZ.KeyboardIllumination.FlashAllKeys
// Size: 0xC(Inherited: 0x0) 
struct FFlashAllKeys
{
	struct FColor Color;  // 0x0(0x4)
	float Duration;  // 0x4(0x4)
	float Interval;  // 0x8(0x4)

}; 
// Function ConZ.Prisoner.CanEnterMeleeCombatMode
// Size: 0x1(Inherited: 0x0) 
struct FCanEnterMeleeCombatMode
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.CanLeaveCombatMode
// Size: 0x1(Inherited: 0x0) 
struct FCanLeaveCombatMode
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// DelegateFunction ConZ.Prisoner.TabModeOpened__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FTabModeOpened__DelegateSignature
{
	uint8_t  tabMode;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.ZombieAttackDescription
// Size: 0x20(Inherited: 0x0) 
struct FZombieAttackDescription
{
	struct UAnimMontage* Montage;  // 0x0(0x8)
	struct FFloatInterval PitchRange;  // 0x8(0x8)
	float MinDistance;  // 0x10(0x4)
	float MaxDistance;  // 0x14(0x4)
	float RegainControlMultiplier;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.Prisoner.CanTakeItemInHands
// Size: 0x10(Inherited: 0x0) 
struct FCanTakeItemInHands
{
	struct AItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ResourceLockingManager.OnLockOwnerDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnLockOwnerDestroyed
{
	struct AActor* lockOwner;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.Server_LoadAmmoIntoMagazine
// Size: 0x18(Inherited: 0x0) 
struct FServer_LoadAmmoIntoMagazine
{
	struct AAmmunitionItem* AmmunitionItem;  // 0x0(0x8)
	struct AWeaponAttachmentMagazine* magazine;  // 0x8(0x8)
	int32_t Count;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.Prisoner.CapsuleComponent_PhysicsVolumeChanged
// Size: 0x8(Inherited: 0x0) 
struct FCapsuleComponent_PhysicsVolumeChanged
{
	struct APhysicsVolume* Volume;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.Server_JoinAmmo
// Size: 0x10(Inherited: 0x0) 
struct FServer_JoinAmmo
{
	struct AAmmunitionItem* finalItem;  // 0x0(0x8)
	struct AAmmunitionItem* initiatingItem;  // 0x8(0x8)

}; 
// Function ConZ.Prisoner.EquippedNightVisionGoggles_ActivatedChanged
// Size: 0x8(Inherited: 0x0) 
struct FEquippedNightVisionGoggles_ActivatedChanged
{
	struct ANightVisionGogglesItem* Item;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.CharacterImpactSounds
// Size: 0x8(Inherited: 0x0) 
struct FCharacterImpactSounds
{
	struct UAkAudioEvent* AudioEvent;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.SetShouldIgnoreHeadTurningAndLeaning
// Size: 0x1(Inherited: 0x0) 
struct FSetShouldIgnoreHeadTurningAndLeaning
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// DelegateFunction ConZ.Prisoner.CarriedItemsVisibilityChanged__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FCarriedItemsVisibilityChanged__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Visible : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.CarryItem
// Size: 0x8(Inherited: 0x0) 
struct FCarryItem
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.CargoDropEvent.Multicast_DisplayNotification
// Size: 0x18(Inherited: 0x0) 
struct FMulticast_DisplayNotification
{
	struct FString SectorName;  // 0x0(0x10)
	float FallDuration;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.PrisonerCorpse.GetFacialHairMeshComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetFacialHairMeshComponent
{
	struct USkeletalMeshComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.ChangeSquadData
// Size: 0x38(Inherited: 0x0) 
struct FChangeSquadData
{
	struct FString Name;  // 0x0(0x10)
	struct FString Message;  // 0x10(0x10)
	struct FString information;  // 0x20(0x10)
	struct FConZSquadEmblem emblem;  // 0x30(0x8)

}; 
// ScriptStruct ConZ.ConZSquadEmblem
// Size: 0x8(Inherited: 0x0) 
struct FConZSquadEmblem
{
	struct FConZSquadEmblemElement Background;  // 0x0(0x4)
	struct FConZSquadEmblemElement Symbol;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.SpawnerConfiguration
// Size: 0x18(Inherited: 0x0) 
struct FSpawnerConfiguration
{
	UItemSpawnerPreset* Spawner;  // 0x0(0x8)
	UItemSpawnerPreset2* SpawnerPreset;  // 0x8(0x8)
	int32_t MinimumItemsCount;  // 0x10(0x4)
	int32_t MaximumItemsCount;  // 0x14(0x4)

}; 
// Function ConZ.VicinityPanel3.OnItemActorDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnItemActorDestroyed
{
	struct AActor* Actor;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.ChooseFirstMeleeTarget
// Size: 0x8(Inherited: 0x0) 
struct FChooseFirstMeleeTarget
{
	struct AActor* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.GetAmmoReloadCapacity
// Size: 0x10(Inherited: 0x0) 
struct FGetAmmoReloadCapacity
{
	struct AAmmunitionItem* ammo;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Prisoner.ClearMalfunction
// Size: 0x1(Inherited: 0x0) 
struct FClearMalfunction
{
	uint8_t  malfunction;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.Server_SetShadowIntensity
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetShadowIntensity
{
	char Value;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.BankATMBuyableCardStateVisual
// Size: 0xC(Inherited: 0x0) 
struct FBankATMBuyableCardStateVisual
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool TransparentBackground : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float RenderOpacity;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool PlusCircleVisible : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function ConZ.Prisoner.Client_FadeInVision
// Size: 0x4(Inherited: 0x0) 
struct FClient_FadeInVision
{
	float Duration;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.SpawnedPawnInfo
// Size: 0x14(Inherited: 0x0) 
struct FSpawnedPawnInfo
{
	char pad_0[20];  // 0x0(0x14)

}; 
// Function ConZ.GameEventTransport.IsInteractable
// Size: 0x1(Inherited: 0x0) 
struct FIsInteractable
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.InteractionData
// Size: 0x68(Inherited: 0x0) 
struct FInteractionData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ModifierPressed : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	int64_t IntegerData;  // 0x8(0x8)
	struct UObject* PointerData;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool BoolData : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct FText TextData;  // 0x20(0x18)
	struct FVector InteractionLocation;  // 0x38(0xC)
	struct FVector InteractionNormal;  // 0x44(0xC)
	struct FVector VectorData;  // 0x50(0xC)
	char pad_92[4];  // 0x5C(0x4)
	int64_t BaseElementId;  // 0x60(0x8)

}; 
// Function ConZ.HitReactComponent.CanRecoverFromRagdoll
// Size: 0x1(Inherited: 0x0) 
struct FCanRecoverFromRagdoll
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.CustomZoneConfiguration
// Size: 0x40(Inherited: 0x0) 
struct FCustomZoneConfiguration
{
	struct FString Name;  // 0x0(0x10)
	uint8_t  EventHandlingMethod[13];  // 0x10(0x13)
	char pad_35[1];  // 0x23(0x1)
	struct FLinearColor Color;  // 0x24(0x10)
	struct FName UniqueDefaultZoneName;  // 0x34(0x8)
	uint8_t  DefaultZoneState;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)

}; 
// Function ConZ.ComplexAnimal2.TurnTowardActor
// Size: 0x10(Inherited: 0x0) 
struct FTurnTowardActor
{
	struct AActor* foe;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Vehicle.GetVehicleSteerAmount
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleSteerAmount
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.AmmunitionData
// Size: 0x18(Inherited: 0x0) 
struct FAmmunitionData
{
	AAmmunitionItem* AmmunitionItemClass;  // 0x0(0x8)
	float health;  // 0x8(0x4)
	float MaxHealth;  // 0xC(0x4)
	float DefaultMaxHealth;  // 0x10(0x4)
	uint8_t  State;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function ConZ.ItemUserWidget.ItemPickedUpStateChanged
// Size: 0x10(Inherited: 0x0) 
struct FItemPickedUpStateChanged
{
	struct AItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool pickedUp : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Prisoner.SetDesiredPace
// Size: 0x1(Inherited: 0x0) 
struct FSetDesiredPace
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.Client_OnAIDetectionTimerChanged
// Size: 0x4(Inherited: 0x0) 
struct FClient_OnAIDetectionTimerChanged
{
	float detectionTimer;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Server_SetTargetCrouchStage
// Size: 0x4(Inherited: 0x0) 
struct FServer_SetTargetCrouchStage
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.HalloweenSacrificePit.NetMulticast_SpawnGiftSpawningPreludeEffects
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_SpawnGiftSpawningPreludeEffects
{
	struct UAkAudioEvent* AudioEvent;  // 0x0(0x8)
	struct UParticleSystem* Particles;  // 0x8(0x8)

}; 
// Function ConZ.Prisoner.Client_OnTakeDamage
// Size: 0x28(Inherited: 0x0) 
struct FClient_OnTakeDamage
{
	float Damage;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FDamageEvent DamageEvent;  // 0x8(0x10)
	struct AController* eventInstigator;  // 0x18(0x8)
	struct AActor* damageObject;  // 0x20(0x8)

}; 
// Function ConZ.Prisoner.GetCombatMode
// Size: 0x1(Inherited: 0x0) 
struct FGetCombatMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.SlidingDoorPartInfo
// Size: 0x20(Inherited: 0x0) 
struct FSlidingDoorPartInfo
{
	char pad_0[32];  // 0x0(0x20)

}; 
// Function ConZ.PrisonerUIStatics.GetPrisonerHealthRatio
// Size: 0x10(Inherited: 0x0) 
struct FGetPrisonerHealthRatio
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Prisoner.Client_SetSavedSpawnLocation
// Size: 0x28(Inherited: 0x0) 
struct FClient_SetSavedSpawnLocation
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Active : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector Location;  // 0x4(0xC)
	struct FVector Velocity;  // 0x10(0xC)
	struct FRotator Rotation;  // 0x1C(0xC)

}; 
// Function ConZ.PlayerDrone.Server_SetDroneVisibility
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetDroneVisibility
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.Client_ShowSpawnScreen
// Size: 0x1(Inherited: 0x0) 
struct FClient_ShowSpawnScreen
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool loadoutMenu : 1;  // 0x0(0x1)

}; 
// Function ConZ.PlayerRpcChannel.Vehicle2_Server_SetPhysicsParameters
// Size: 0x28(Inherited: 0x0) 
struct FVehicle2_Server_SetPhysicsParameters
{
	struct AVehicleBase* VehicleBase;  // 0x0(0x8)
	struct FVector comPosition;  // 0x8(0xC)
	struct FVector inertiaTensor;  // 0x14(0xC)
	float Mass;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ConZ.CombustibleItemParams
// Size: 0x8(Inherited: 0x0) 
struct FCombustibleItemParams
{
	float DefaultTemp;  // 0x0(0x4)
	float BurningRate;  // 0x4(0x4)

}; 
// Function ConZ.MiscStatics.BroadcastChatLine
// Size: 0x20(Inherited: 0x0) 
struct FBroadcastChatLine
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FString Text;  // 0x8(0x10)
	uint8_t  ChatType;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.Prisoner.ClosePanels
// Size: 0x2(Inherited: 0x0) 
struct FClosePanels
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool switchingTabs : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// Function ConZ.KillboxComponent.AddGasMist
// Size: 0x8(Inherited: 0x0) 
struct FAddGasMist
{
	struct UParticleSystemComponent* gasMist;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.CreateFishingComponent
// Size: 0x8(Inherited: 0x0) 
struct FCreateFishingComponent
{
	struct UPrisonerFishingComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.GameEventBase.ParticipantEnter
// Size: 0x8(Inherited: 0x0) 
struct FParticipantEnter
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.FindNextOrPreviousMeleeTarget
// Size: 0x18(Inherited: 0x0) 
struct FFindNextOrPreviousMeleeTarget
{
	struct AActor* Target;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool Next : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct AActor* ReturnValue;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.AmmunitionArrowSpawningParamsHelper
// Size: 0x18(Inherited: 0x0) 
struct FAmmunitionArrowSpawningParamsHelper
{
	char pad_0[24];  // 0x0(0x18)

}; 
// Function ConZ.Prisoner.CreateMusicPlayerComponent
// Size: 0x8(Inherited: 0x0) 
struct FCreateMusicPlayerComponent
{
	struct UPrisonerMusicPlayerComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Placeable_Server_FillWithItems
// Size: 0x20(Inherited: 0x0) 
struct FPlaceable_Server_FillWithItems
{
	struct APlaceableActorBase* placeable;  // 0x0(0x8)
	struct APrisoner* User;  // 0x8(0x8)
	struct TArray<struct AItem*> Items;  // 0x10(0x10)

}; 
// Function ConZ.PlayerRpcChannel.InteractWithObjectOnServer
// Size: 0x80(Inherited: 0x0) 
struct FInteractWithObjectOnServer
{
	struct UObject* interactable;  // 0x0(0x8)
	struct APrisoner* User;  // 0x8(0x8)
	uint8_t  interactionType;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct FInteractionData InteractionData;  // 0x18(0x68)

}; 
// Function ConZ.Prisoner.CreatePrisonWalletComponent
// Size: 0x8(Inherited: 0x0) 
struct FCreatePrisonWalletComponent
{
	struct UPrisonerPrisonWalletComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.PlayerRpcChannel.BaseBuilding_Server_OnFlagAreaEntered
// Size: 0x8(Inherited: 0x0) 
struct FBaseBuilding_Server_OnFlagAreaEntered
{
	struct AConZCharacter* Character;  // 0x0(0x8)

}; 
// Function ConZ.ItemUserWidget.SetItem
// Size: 0x8(Inherited: 0x0) 
struct FSetItem
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameState.StartTournament
// Size: 0x10(Inherited: 0x0) 
struct FStartTournament
{
	struct FTournamentParameters parameters;  // 0x0(0x10)

}; 
// Function ConZ.Prisoner.Server_InitiateCraftedUpgradePlacement
// Size: 0x60(Inherited: 0x0) 
struct FServer_InitiateCraftedUpgradePlacement
{
	struct FConZBaseElementIdentifier elementToBeUpgraded;  // 0x0(0x20)
	struct UPlaceableCraftableItem* upgradeRecipe;  // 0x20(0x8)
	char pad_40[8];  // 0x28(0x8)
	struct FTransform Transform;  // 0x30(0x30)

}; 
// ScriptStruct ConZ.PrisonerFallingPoseTransitionParams
// Size: 0x20(Inherited: 0x0) 
struct FPrisonerFallingPoseTransitionParams
{
	float TransitionTime;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UAnimSequence* TransitionAnimation;  // 0x8(0x8)
	struct FFloatInterval TransitionAnimationTimeRange;  // 0x10(0x8)
	struct UCurveFloat* TransitionPitchBlendOverrideCurve;  // 0x18(0x8)

}; 
// Function ConZ.WorldStatics.IsLocationInDangerZone
// Size: 0x18(Inherited: 0x0) 
struct FIsLocationInDangerZone
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ReturnValue : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// ScriptStruct ConZ.HuntingBiomeParameters
// Size: 0x38(Inherited: 0x0) 
struct FHuntingBiomeParameters
{
	struct UBiomeData* BiomeData;  // 0x0(0x8)
	float AnimalSpawnChance;  // 0x8(0x4)
	float DaytimeSpawnMultiplier[4];  // 0xC(0x10)
	float SpawnCheckCooldownMin;  // 0x1C(0x4)
	float SpawnCheckCooldownMax;  // 0x20(0x4)
	int8_t MaxAnimalEncounters;  // 0x24(0x1)
	int8_t MaxAnimalEncountersPerPlayer;  // 0x25(0x1)
	int8_t MaxPlayerTriggers;  // 0x26(0x1)
	char pad_39_1 : 7;  // 0x27(0x1)
	bool PacksAllowed : 1;  // 0x27(0x1)
	char Priority;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	float AnimalSoundCooldownMin;  // 0x2C(0x4)
	float AnimalSoundCooldownMax;  // 0x30(0x4)
	float AnimalSoundPlayProbability;  // 0x34(0x4)

}; 
// ScriptStruct ConZ.TextBoxWithLabelStyle
// Size: 0x158(Inherited: 0x0) 
struct FTextBoxWithLabelStyle
{
	struct FSlateBrush FocusBackgroundImage;  // 0x0(0x88)
	struct FTextBoxTextStyle LabelText;  // 0x88(0x68)
	struct FTextBoxTextStyle InputBoxText;  // 0xF0(0x68)

}; 
// Function ConZ.Prisoner.DestroyPlaceable
// Size: 0x8(Inherited: 0x0) 
struct FDestroyPlaceable
{
	struct FDbIntegerId ID;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.FoliageCanopyData
// Size: 0x40(Inherited: 0x0) 
struct FFoliageCanopyData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool UseSphere : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FTreeCanopySphere Sphere;  // 0x4(0x14)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool UseCapsule : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	struct FTreeCanopyCapsule Capsule;  // 0x1C(0x24)

}; 
// Function ConZ.HitReactComponent.IsPlayingGetUpMontage
// Size: 0x1(Inherited: 0x0) 
struct FIsPlayingGetUpMontage
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.Inv2021_InventoryElementRepHelper
// Size: 0x20(Inherited: 0x0) 
struct FInv2021_InventoryElementRepHelper
{
	char pad_0[32];  // 0x0(0x20)

}; 
// Function ConZ.Prisoner.GetItemInHands
// Size: 0x8(Inherited: 0x0) 
struct FGetItemInHands
{
	struct AItem* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.AdminCommandArgumentCompletion.GetCompletionValues
// Size: 0x10(Inherited: 0x0) 
struct FGetCompletionValues
{
	struct TArray<struct FString> Result;  // 0x0(0x10)

}; 
// Function ConZ.Prisoner.DetonateHead
// Size: 0x1(Inherited: 0x0) 
struct FDetonateHead
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool shouldDestroyHeadgear : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.SkillEventItemThrown
// Size: 0x1(Inherited: 0x0) 
struct FSkillEventItemThrown
{
	char pad_0[1];  // 0x0(0x1)

}; 
// Function ConZ.Vehicle.SetVehicleWheelTireDeflated
// Size: 0x8(Inherited: 0x0) 
struct FSetVehicleWheelTireDeflated
{
	int32_t WheelIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool isDeflated : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.PrisonerHUD.IsShowingSpawnScreen
// Size: 0x1(Inherited: 0x0) 
struct FIsShowingSpawnScreen
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.InventoryComponent_ItemUnequipped
// Size: 0x10(Inherited: 0x0) 
struct FInventoryComponent_ItemUnequipped
{
	struct UPrisonerInventoryComponent* sender;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)

}; 
// Function ConZ.ItemUserWidget.CreateFromItem
// Size: 0x10(Inherited: 0x0) 
struct FCreateFromItem
{
	struct AItem* Item;  // 0x0(0x8)
	struct UItemUserWidget* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.Prisoner.EnterCombatMode
// Size: 0x1(Inherited: 0x0) 
struct FEnterCombatMode
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Zombie2.SetStance
// Size: 0x1(Inherited: 0x0) 
struct FSetStance
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.IngredientClassesArray
// Size: 0x10(Inherited: 0x0) 
struct FIngredientClassesArray
{
	struct TArray<struct TSoftClassPtr<UObject>> IngredientClasses;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.EnduranceSkillParametersPerSkillLevel
// Size: 0x18(Inherited: 0x0) 
struct FEnduranceSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat EnergyConsumptionMultiplier;  // 0x0(0x8)
	struct FExperienceDependentFloat WaterConsumptionMultiplier;  // 0x8(0x8)
	struct FExperienceDependentFloat StaminaRecoveryMultiplier;  // 0x10(0x8)

}; 
// Function ConZ.Prisoner.ExamineItem
// Size: 0x8(Inherited: 0x0) 
struct FExamineItem
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.InventoryContainer2DRepData
// Size: 0x20(Inherited: 0x0) 
struct FInventoryContainer2DRepData
{
	struct TArray<struct FInventoryItemPositionPair> ItemsData;  // 0x0(0x10)
	struct UObject* Parent;  // 0x10(0x8)
	int32_t SizeX;  // 0x18(0x4)
	int32_t SizeY;  // 0x1C(0x4)

}; 
// ScriptStruct ConZ.ItemLootTreeNodeTableRow
// Size: 0x38(Inherited: 0x20) 
struct FItemLootTreeNodeTableRow : public FGameplayTagTableRow
{
	uint8_t  Rarity;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)
	struct TArray<struct TSoftClassPtr<UObject>> PostSpawnActions;  // 0x28(0x10)

}; 
// Function ConZ.Prisoner.GetMeleeTarget
// Size: 0x8(Inherited: 0x0) 
struct FGetMeleeTarget
{
	struct AActor* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.TurnMontages
// Size: 0x10(Inherited: 0x0) 
struct FTurnMontages
{
	struct UAnimMontage* TurnInPlaceLeft;  // 0x0(0x8)
	struct UAnimMontage* TurnInPlaceRight;  // 0x8(0x8)

}; 
// Function ConZ.Weapon.GetReloadActionSequenceForData
// Size: 0x38(Inherited: 0x0) 
struct FGetReloadActionSequenceForData
{
	struct FWeaponReloadData reloadData;  // 0x0(0x30)
	struct UWeaponActionReloadSequence* ReturnValue;  // 0x30(0x8)

}; 
// Function ConZ.FishingBarWidget.SetProgressPercentage
// Size: 0x4(Inherited: 0x0) 
struct FSetProgressPercentage
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.RepairVehicle
// Size: 0x8(Inherited: 0x0) 
struct FRepairVehicle
{
	float healthToRepair;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.ComplexAnimal2.GetAngularVelocity
// Size: 0x4(Inherited: 0x0) 
struct FGetAngularVelocity
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.GetBruisingComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetBruisingComponent
{
	struct UBruisingComponent* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PrisonerNearbyFoliageInstanceInfo
// Size: 0x60(Inherited: 0x0) 
struct FPrisonerNearbyFoliageInstanceInfo
{
	uint8_t  FoliageType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UInstancedStaticMeshComponent* InstancedMeshComponent;  // 0x8(0x8)
	struct FPackedLocation PackedLocation;  // 0x10(0x8)
	char pad_24[8];  // 0x18(0x8)
	struct FTransform TransformZeroOrigin;  // 0x20(0x30)
	struct UFoliageAssetData* FoliageAssetData;  // 0x50(0x8)
	char pad_88[8];  // 0x58(0x8)

}; 
// ScriptStruct ConZ.PackedLocation
// Size: 0x8(Inherited: 0x0) 
struct FPackedLocation
{
	char pad_0[8];  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.UpdateZoomEffect
// Size: 0x4(Inherited: 0x0) 
struct FUpdateZoomEffect
{
	float Fraction;  // 0x0(0x4)

}; 
// Function ConZ.CircularMenuWidget.CreateThrowingMenuWidget
// Size: 0x20(Inherited: 0x0) 
struct FCreateThrowingMenuWidget
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct TArray<struct UCircularMenuSegmentThrowingInfo*> throwingSegmentInfo;  // 0x8(0x10)
	struct UCircularMenuWidget* ReturnValue;  // 0x18(0x8)

}; 
// Function ConZ.PlayerRpcChannel.WeaponBow_Server_InsertArrow
// Size: 0x10(Inherited: 0x0) 
struct FWeaponBow_Server_InsertArrow
{
	struct AWeaponBow* bow;  // 0x0(0x8)
	struct AAmmunitionArrow* arrow;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.WireDescription
// Size: 0x50(Inherited: 0x0) 
struct FWireDescription
{
	char pad_0[80];  // 0x0(0x50)

}; 
// Function ConZ.Prisoner.NetMulticast_PostAudioEventOnPrisoner
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_PostAudioEventOnPrisoner
{
	struct UAkAudioEvent* akEvent;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool multiCastToClients : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Prisoner.GetSavedSpawnLocation
// Size: 0xC(Inherited: 0x0) 
struct FGetSavedSpawnLocation
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.Prisoner.GetCrouchStage
// Size: 0x4(Inherited: 0x0) 
struct FGetCrouchStage
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.AttributeMapInterface.SetBoolAttribute
// Size: 0x18(Inherited: 0x0) 
struct FSetBoolAttribute
{
	struct FString Name;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Value : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.Weapon.ShouldPlayChamberOpenedIdle
// Size: 0x1(Inherited: 0x0) 
struct FShouldPlayChamberOpenedIdle
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.PrisonerThirdPersonSubviewBlendOverride
// Size: 0x8(Inherited: 0x0) 
struct FPrisonerThirdPersonSubviewBlendOverride
{
	uint8_t  Source;  // 0x0(0x1)
	uint8_t  Target;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	float Duration;  // 0x4(0x4)

}; 
// Function ConZ.ConZGameInstance.SetPlayAsDrone
// Size: 0x1(Inherited: 0x0) 
struct FSetPlayAsDrone
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.LockpickingWidget.GetLockpicksCount
// Size: 0x4(Inherited: 0x0) 
struct FGetLockpicksCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.GetCurrentMidiDeviceIndex
// Size: 0x4(Inherited: 0x0) 
struct FGetCurrentMidiDeviceIndex
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.BasePoseAimOffsetPair
// Size: 0x18(Inherited: 0x0) 
struct FBasePoseAimOffsetPair
{
	struct UAnimSequenceBase* UpperBodyPose;  // 0x0(0x8)
	struct UAnimSequenceBase* LowerBodyPose;  // 0x8(0x8)
	struct UBlendSpace* AimOffset;  // 0x10(0x8)

}; 
// Function ConZ.Prisoner.GetFishingRod
// Size: 0x8(Inherited: 0x0) 
struct FGetFishingRod
{
	struct AFishingRod* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.CookingUtilitySlotInstance_UserSetData
// Size: 0x18(Inherited: 0x0) 
struct FCookingUtilitySlotInstance_UserSetData
{
	int32_t SlotId;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<char> InternalCoordinates;  // 0x8(0x10)

}; 
// Function ConZ.Prisoner.Server_SetHoldBreathState
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetHoldBreathState
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// Function ConZ.GameEventParticipantStatsWidget.GetGameEvent
// Size: 0x8(Inherited: 0x0) 
struct FGetGameEvent
{
	struct AGameEventBase* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.HandsHolstersWidget2.OnFishingAttachmentAdded
// Size: 0x10(Inherited: 0x0) 
struct FOnFishingAttachmentAdded
{
	struct AFishingRod* FishingRod;  // 0x0(0x8)
	struct AFishingAttachment* Attachment;  // 0x8(0x8)

}; 
// Function ConZ.CircularMenuWidget.GetSegmentIdForCoordinates
// Size: 0x10(Inherited: 0x0) 
struct FGetSegmentIdForCoordinates
{
	struct FVector2D Coordinates;  // 0x0(0x8)
	int32_t Layer;  // 0x8(0x4)
	int32_t ReturnValue;  // 0xC(0x4)

}; 
// Function ConZ.Prisoner.GetGroundMovementParameters
// Size: 0xC(Inherited: 0x0) 
struct FGetGroundMovementParameters
{
	struct FPrisonerGroundMovementParameters ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.Weapon.UpdateReloadData
// Size: 0x60(Inherited: 0x0) 
struct FUpdateReloadData
{
	struct FWeaponReloadData reloadDataIn;  // 0x0(0x30)
	struct FWeaponReloadData reloadDataOut;  // 0x30(0x30)

}; 
// ScriptStruct ConZ.PrisonerGroundMovementParameters
// Size: 0xC(Inherited: 0x0) 
struct FPrisonerGroundMovementParameters
{
	float MaxSpeed;  // 0x0(0x4)
	float Acceleration;  // 0x4(0x4)
	float Deceleration;  // 0x8(0x4)

}; 
// Function ConZ.PrisonerInventoryComponent.EquipClothesItem
// Size: 0x8(Inherited: 0x0) 
struct FEquipClothesItem
{
	struct AClothesItem* Item;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ConZColorRow
// Size: 0x28(Inherited: 0x8) 
struct FConZColorRow : public FTableRowBase
{
	struct FLinearColor Color;  // 0x8(0x10)
	struct FString Description;  // 0x18(0x10)

}; 
// Function ConZ.AmmunitionItem.Client_SetAmmoCount
// Size: 0x4(Inherited: 0x0) 
struct FClient_SetAmmoCount
{
	int32_t Count;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.ImpactEffectData
// Size: 0x18(Inherited: 0x0) 
struct FImpactEffectData
{
	struct UParticleSystem* ParticleSystem;  // 0x0(0x8)
	struct UNiagaraSystem* NiagaraParticleSystem;  // 0x8(0x8)
	struct UMaterial* Decal;  // 0x10(0x8)

}; 
// Function ConZ.Prisoner.GetHandBondage
// Size: 0x8(Inherited: 0x0) 
struct FGetHandBondage
{
	struct UBondageComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.GetIsInFirstPersonView
// Size: 0x1(Inherited: 0x0) 
struct FGetIsInFirstPersonView
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.VehicleWeaponAimingParameters.CanPrisonerTakeItemInHands
// Size: 0x18(Inherited: 0x0) 
struct FCanPrisonerTakeItemInHands
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)
	uint8_t  stance;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool ReturnValue : 1;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)

}; 
// Function ConZ.ChatSuggestionWidget.SetText
// Size: 0x10(Inherited: 0x0) 
struct FSetText
{
	struct FString Text;  // 0x0(0x10)

}; 
// Function ConZ.Prisoner.IsThrowAiming
// Size: 0x1(Inherited: 0x0) 
struct FIsThrowAiming
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.ResourceNetworkGUID
// Size: 0x4(Inherited: 0x0) 
struct FResourceNetworkGUID
{
	char pad_0[4];  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Server_SetExaminedPrisoner
// Size: 0x8(Inherited: 0x0) 
struct FServer_SetExaminedPrisoner
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.MeleeSkill.GetInactivityIdleAnimations
// Size: 0x10(Inherited: 0x0) 
struct FGetInactivityIdleAnimations
{
	struct TArray<struct UAnimSequenceBase*> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.Vehicle.GetVehicleEngineState
// Size: 0x1(Inherited: 0x0) 
struct FGetVehicleEngineState
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.MeleeCombatComponent.NetMulticast_ExecuteMeleeAction
// Size: 0x20(Inherited: 0x0) 
struct FNetMulticast_ExecuteMeleeAction
{
	struct FMeleeAction Action;  // 0x0(0x20)

}; 
// Function ConZ.Prisoner.GetIsLimpingOverrideEnabled
// Size: 0x1(Inherited: 0x0) 
struct FGetIsLimpingOverrideEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.ConZConsoleVariableRow
// Size: 0x28(Inherited: 0x8) 
struct FConZConsoleVariableRow : public FTableRowBase
{
	struct FString ConsoleVariable;  // 0x8(0x10)
	struct FString Description;  // 0x18(0x10)

}; 
// Function ConZ.Prisoner.OnMidiEvent
// Size: 0x20(Inherited: 0x0) 
struct FOnMidiEvent
{
	struct UMIDIDeviceController* MIDIDeviceController;  // 0x0(0x8)
	int32_t Timestamp;  // 0x8(0x4)
	uint8_t  EventType;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	int32_t Channel;  // 0x10(0x4)
	int32_t ControlID;  // 0x14(0x4)
	int32_t Velocity;  // 0x18(0x4)
	int32_t RawEventType;  // 0x1C(0x4)

}; 
// Function ConZ.Prisoner.GetItemOfClass
// Size: 0x10(Inherited: 0x0) 
struct FGetItemOfClass
{
	UObject* ItemClass;  // 0x0(0x8)
	struct AItem* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.Prisoner.GetLookatMeleeTargetAimOffset
// Size: 0xC(Inherited: 0x0) 
struct FGetLookatMeleeTargetAimOffset
{
	struct FRotator ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.ItemStatusWidget.SetNameText
// Size: 0x10(Inherited: 0x0) 
struct FSetNameText
{
	struct FString Text;  // 0x0(0x10)

}; 
// Function ConZ.Prisoner.GetNearbyFoliageInfo
// Size: 0x10(Inherited: 0x0) 
struct FGetNearbyFoliageInfo
{
	struct FPrisonerNearbyFoliageInfo ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.Prisoner.GetOverrideIsLimping
// Size: 0x1(Inherited: 0x0) 
struct FGetOverrideIsLimping
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.CircularProgressBar.GetPercentage
// Size: 0x4(Inherited: 0x0) 
struct FGetPercentage
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.GetPrisonerAnimInstance
// Size: 0x8(Inherited: 0x0) 
struct FGetPrisonerAnimInstance
{
	struct UPrisonerAnimInstance* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.DropZoneGameEvent.GetCapturingTeam
// Size: 0x4(Inherited: 0x0) 
struct FGetCapturingTeam
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.GetSavedSpawnLocationActive
// Size: 0x1(Inherited: 0x0) 
struct FGetSavedSpawnLocationActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.AttributeMapInterface.SetIntAttribute
// Size: 0x18(Inherited: 0x0) 
struct FSetIntAttribute
{
	struct FString Name;  // 0x0(0x10)
	int32_t Value;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.Prisoner.OnRep_PackedWetness
// Size: 0x4(Inherited: 0x0) 
struct FOnRep_PackedWetness
{
	uint32_t oldWetness;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.VehicleEngineStallingParameters
// Size: 0x58(Inherited: 0x0) 
struct FVehicleEngineStallingParameters
{
	float MinDuration;  // 0x0(0x4)
	float MaxDuration;  // 0x4(0x4)
	float StopEngineChance;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ShouldStallingStopOnThrottleOrBreakRelease : 1;  // 0xC(0x1)
	char pad_13_1 : 7;  // 0xD(0x1)
	bool ShouldEngineStopOnThrottleOrBreakRelease : 1;  // 0xD(0x1)
	char pad_14[2];  // 0xE(0x2)
	struct UCurveFloat* ThrottleCurve;  // 0x10(0x8)
	float ThrottleCurveFrequencyMultiplier;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	struct UCurveFloat* BrakeCurve;  // 0x20(0x8)
	float BrakeCurveFrequencyMultiplier;  // 0x28(0x4)
	float ForceMagnitudeScale;  // 0x2C(0x4)
	struct UCurveFloat* ForceMagnitudeScaleCurve;  // 0x30(0x8)
	float ForceMagnitudeScaleCurveFrequencyMultiplier;  // 0x38(0x4)
	float ForceDirectionRandomizationAngle;  // 0x3C(0x4)
	struct UAkAudioEvent* AudioEvent;  // 0x40(0x8)
	struct TArray<float> AudioEventTriggerTimeRatios;  // 0x48(0x10)

}; 
// Function ConZ.Corpse.CopyFromCharacter
// Size: 0x8(Inherited: 0x0) 
struct FCopyFromCharacter
{
	struct AConZCharacter* sourceCharacter;  // 0x0(0x8)

}; 
// Function ConZ.BruisingComponent.GetBruiseLayerRenderTarget
// Size: 0x10(Inherited: 0x0) 
struct FGetBruiseLayerRenderTarget
{
	uint8_t  Layer;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UTextureRenderTarget2D* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.Prisoner.GetSavedSpawnRotation
// Size: 0xC(Inherited: 0x0) 
struct FGetSavedSpawnRotation
{
	struct FRotator ReturnValue;  // 0x0(0xC)

}; 
// ScriptStruct ConZ.CookingRecipeRegistryEntry
// Size: 0x14(Inherited: 0x0) 
struct FCookingRecipeRegistryEntry
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Enabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FPrimaryAssetId AssetId;  // 0x4(0x10)

}; 
// Function ConZ.Prisoner.GetShouldIgnoreHeadTurningAndLeaning
// Size: 0x1(Inherited: 0x0) 
struct FGetShouldIgnoreHeadTurningAndLeaning
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.ConZGameState.GetSquad
// Size: 0x10(Inherited: 0x0) 
struct FGetSquad
{
	struct FDbIntegerId squadId;  // 0x0(0x8)
	struct AConZSquad* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.PrisonerMovementComponent.GetDesiredCourseAngle
// Size: 0x4(Inherited: 0x0) 
struct FGetDesiredCourseAngle
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.ElementSnapMarker
// Size: 0x60(Inherited: 0x0) 
struct FElementSnapMarker
{
	struct FTransform Transform;  // 0x0(0x30)
	struct FVector Slack;  // 0x30(0xC)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool ElementTypesMustMatch : 1;  // 0x3C(0x1)
	char pad_61_1 : 7;  // 0x3D(0x1)
	bool IncreaseLevelOnSnap : 1;  // 0x3D(0x1)
	char MaxLevelToSnap;  // 0x3E(0x1)
	char pad_63[1];  // 0x3F(0x1)
	struct FVector RequiredElementSize;  // 0x40(0xC)
	struct FVector RequiredElementSizeTolerance;  // 0x4C(0xC)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool DestroySnappedElementWhenDestroyed : 1;  // 0x58(0x1)
	char pad_89[1];  // 0x59(0x1)
	uint16_t OutSocketTypes;  // 0x5A(0x2)
	uint16_t InSocketTypes;  // 0x5C(0x2)
	char pad_94[2];  // 0x5E(0x2)

}; 
// ScriptStruct ConZ.PrisonerBodyEffectSave
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerBodyEffectSave
{
	struct TArray<char> Data;  // 0x0(0x10)

}; 
// Function ConZ.Prisoner.GetTabMode
// Size: 0x1(Inherited: 0x0) 
struct FGetTabMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.WaypointWidgetBase.GetDistance
// Size: 0x4(Inherited: 0x0) 
struct FGetDistance
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.CharacterAction.OnPreActionEnd
// Size: 0x8(Inherited: 0x0) 
struct FOnPreActionEnd
{
	struct UCharacterAction* Action;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.GetTabMouseMovement
// Size: 0x8(Inherited: 0x0) 
struct FGetTabMouseMovement
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.SetMeleeTarget
// Size: 0x8(Inherited: 0x0) 
struct FSetMeleeTarget
{
	struct AActor* Value;  // 0x0(0x8)

}; 
// Function ConZ.KillboxComponent.NetMulticast_QueueHostQuote
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_QueueHostQuote
{
	struct UAkAudioEvent* Sound;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool playOnlyIfInstant : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool stopPreviousQuote : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// Function ConZ.Prisoner.NetMulticast_PlayLockpickingProtectionEffects
// Size: 0x28(Inherited: 0x0) 
struct FNetMulticast_PlayLockpickingProtectionEffects
{
	struct UObject* Lockpickable;  // 0x0(0x8)
	struct UParticleSystem* Particles;  // 0x8(0x8)
	struct UAkAudioEvent* audio;  // 0x10(0x8)
	struct FVector ParticlesScale;  // 0x18(0xC)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function ConZ.InteractableInterface.GetInteractionHint
// Size: 0x20(Inherited: 0x0) 
struct FGetInteractionHint
{
	struct UObject* User;  // 0x0(0x8)
	struct FText ReturnValue;  // 0x8(0x18)

}; 
// ScriptStruct ConZ.SectorId
// Size: 0x8(Inherited: 0x0) 
struct FSectorId
{
	char pad_0[8];  // 0x0(0x8)

}; 
// Function ConZ.Objective.IsCompleted
// Size: 0x1(Inherited: 0x0) 
struct FIsCompleted
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Wettable.SetWaterWeight
// Size: 0x4(Inherited: 0x0) 
struct FSetWaterWeight
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.GetTacticsBlobMaterial
// Size: 0x8(Inherited: 0x0) 
struct FGetTacticsBlobMaterial
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Vehicle.GetVehicleHealthBarCaption
// Size: 0x18(Inherited: 0x0) 
struct FGetVehicleHealthBarCaption
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function ConZ.Prisoner.ShouldIgnoreRotation
// Size: 0x1(Inherited: 0x0) 
struct FShouldIgnoreRotation
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Zombie2.NetMulticast_PlayMontage
// Size: 0x8(Inherited: 0x0) 
struct FNetMulticast_PlayMontage
{
	struct UAnimMontage* Montage;  // 0x0(0x8)

}; 
// Function ConZ.InteractionContainerUserWidget.InteractableDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FInteractableDestroyed
{
	struct AActor* interactable;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.Server_InstrumentStopTone
// Size: 0xC(Inherited: 0x0) 
struct FServer_InstrumentStopTone
{
	uint8_t  tone;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float timeOffset;  // 0x4(0x4)
	int32_t octave;  // 0x8(0x4)

}; 
// ScriptStruct ConZ.WeaponSpreadData
// Size: 0x40(Inherited: 0x0) 
struct FWeaponSpreadData
{
	struct FWeaponSpreadItem ByStance[4];  // 0x0(0x30)
	float IncrementPerShot;  // 0x30(0x4)
	float IncrementFromShotsMax;  // 0x34(0x4)
	float IncrementSpeed;  // 0x38(0x4)
	float DecrementSpeed;  // 0x3C(0x4)

}; 
// Function ConZ.Prisoner.GetThrowingComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetThrowingComponent
{
	struct UPrisonerThrowComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.InteractableInterface.GetStateForInteractionWithItem
// Size: 0x10(Inherited: 0x0) 
struct FGetStateForInteractionWithItem
{
	struct AItem* Item;  // 0x0(0x8)
	uint8_t  ReturnValue;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Prisoner.GetUserActiveName
// Size: 0x10(Inherited: 0x0) 
struct FGetUserActiveName
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.ItemSpawnerPreset_Item
// Size: 0x30(Inherited: 0x0) 
struct FItemSpawnerPreset_Item
{
	struct TSoftClassPtr<UObject> Item;  // 0x0(0x28)
	uint8_t  Rarity;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)

}; 
// Function ConZ.Prisoner.GetVehicleWeaponAimingStance
// Size: 0x1(Inherited: 0x0) 
struct FGetVehicleWeaponAimingStance
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.GetVisionEffectsComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetVisionEffectsComponent
{
	struct UVisionEffectsComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.CTFGameEvent.GetCTFParameters
// Size: 0x30(Inherited: 0x0) 
struct FGetCTFParameters
{
	struct FCTFParameters ReturnValue;  // 0x0(0x30)

}; 
// Function ConZ.GameEventParticipantStatsWidget.GetTeamIndex
// Size: 0x4(Inherited: 0x0) 
struct FGetTeamIndex
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.PrisonerHallucinationSymptomSeverityLevelParams
// Size: 0x4(Inherited: 0x0) 
struct FPrisonerHallucinationSymptomSeverityLevelParams
{
	int32_t MaxNumHallucinationIllusions;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Server_HandleFootstep
// Size: 0x2(Inherited: 0x0) 
struct FServer_HandleFootstep
{
	uint8_t  motionIntensity;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool shouldMakeNoise : 1;  // 0x1(0x1)

}; 
// Function ConZ.Vehicle.GetMaxVehicleHealth
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxVehicleHealth
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.AudioStatics.GetMaterialSwitchValue
// Size: 0xC(Inherited: 0x0) 
struct FGetMaterialSwitchValue
{
	char EPhysicalSurface Value;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName ReturnValue;  // 0x4(0x8)

}; 
// ScriptStruct ConZ.GardenSlot
// Size: 0x200(Inherited: 0xC) 
struct FGardenSlot : public FFastArraySerializerItem
{
	struct FIntPoint _slotPosition;  // 0xC(0x8)
	char pad_20[4];  // 0x14(0x4)
	struct UPlantSpecies* _species;  // 0x18(0x8)
	uint8_t  _stage;  // 0x20(0x1)
	char pad_33[1];  // 0x21(0x1)
	uint16_t _repWater;  // 0x22(0x2)
	char pad_36[4];  // 0x24(0x4)
	char _repGrowthPercentage;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool _organicFertilizer : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool _industrialFertilizer : 1;  // 0x31(0x1)
	char pad_50[6];  // 0x32(0x6)
	struct UPlantPestSpecies* _pests[3];  // 0x38(0x18)
	char _repPestsIntensities[3];  // 0x50(0x3)
	char pad_83[13];  // 0x53(0xD)
	struct UPlantDiseaseSpecies* _diseases[3];  // 0x60(0x18)
	char _repDiseaseIntensities[3];  // 0x78(0x3)
	char pad_123[13];  // 0x7B(0xD)
	char _repWeedIntensity;  // 0x88(0x1)
	char pad_137[7];  // 0x89(0x7)
	char pad_144_1 : 7;  // 0x90(0x1)
	bool _pesticideActive : 1;  // 0x90(0x1)
	char pad_145[7];  // 0x91(0x7)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool _fungicideActive : 1;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)
	char pad_160_1 : 7;  // 0xA0(0x1)
	bool _weedRepellentActive : 1;  // 0xA0(0x1)
	char pad_161[7];  // 0xA1(0x7)
	char _repHealth;  // 0xA8(0x1)
	char pad_169[7];  // 0xA9(0x7)
	char pad_176_1 : 7;  // 0xB0(0x1)
	bool _isDead : 1;  // 0xB0(0x1)
	char pad_177_1 : 7;  // 0xB1(0x1)
	bool _isOld : 1;  // 0xB1(0x1)
	char pad_178[334];  // 0xB2(0x14E)

}; 
// Function ConZ.Prisoner.GetWaterMovementParameters
// Size: 0xC(Inherited: 0x0) 
struct FGetWaterMovementParameters
{
	struct FPrisonerWaterMovementParameters ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.BuildingManager.NetMulticast_UpdateBuildingFortificationsState
// Size: 0x28(Inherited: 0x0) 
struct FNetMulticast_UpdateBuildingFortificationsState
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString buildingId;  // 0x8(0x10)
	struct TArray<struct FFortificationData> FortificationData;  // 0x18(0x10)

}; 
// Function ConZ.Weapon.GetDefaultAmmunitionData
// Size: 0x18(Inherited: 0x0) 
struct FGetDefaultAmmunitionData
{
	struct FAmmunitionData ReturnValue;  // 0x0(0x18)

}; 
// Function ConZ.Prisoner.Server_JoinCurrencyItem
// Size: 0x10(Inherited: 0x0) 
struct FServer_JoinCurrencyItem
{
	struct AItem* finalItem;  // 0x0(0x8)
	struct AItem* initiatingItem;  // 0x8(0x8)

}; 
// Function ConZ.Prisoner.GetWeightLoad
// Size: 0x4(Inherited: 0x0) 
struct FGetWeightLoad
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerMovementComponent.NetMulticast_SetBodyRotation
// Size: 0x20(Inherited: 0x0) 
struct FNetMulticast_SetBodyRotation
{
	struct FQuat Rotation;  // 0x0(0x10)
	struct FVector AngularVelocity;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.Prisoner.OnBorderCrossingPenaltyChange
// Size: 0x10(Inherited: 0x0) 
struct FOnBorderCrossingPenaltyChange
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	uint8_t  newPenalty;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Prisoner.GetWristwatchComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetWristwatchComponent
{
	struct UChildActorComponent* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.VehicleAttachmentAdditionalSocket
// Size: 0x40(Inherited: 0x0) 
struct FVehicleAttachmentAdditionalSocket
{
	struct FName Name;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Transform;  // 0x10(0x30)

}; 
// Function ConZ.Prisoner.HasHandsUp
// Size: 0x1(Inherited: 0x0) 
struct FHasHandsUp
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PlayerRpcChannel.Mechanic_Server_UnsubscribeFromVehicleServiceData
// Size: 0x8(Inherited: 0x0) 
struct FMechanic_Server_UnsubscribeFromVehicleServiceData
{
	struct AMechanic* Mechanic;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.HandleIntroCinematicFinished
// Size: 0x8(Inherited: 0x0) 
struct FHandleIntroCinematicFinished
{
	struct AConZCameraManager* cameraManager;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.VehicleLightReference
// Size: 0x14(Inherited: 0x0) 
struct FVehicleLightReference
{
	struct FName Name;  // 0x0(0x8)
	uint8_t  LightType;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	struct FName MaterialSlotName;  // 0xC(0x8)

}; 
// Function ConZ.Prisoner.HasItem
// Size: 0x10(Inherited: 0x0) 
struct FHasItem
{
	struct AItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ItemObstructionStatics.OverlapClosestBlocking
// Size: 0xE0(Inherited: 0x0) 
struct FOverlapClosestBlocking
{
	struct ACharacter* Character;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform obstructionTestCapsulesWorldTransform;  // 0x10(0x30)
	struct TArray<struct FItemObstructionTestCapsule> obstructionTestCapsules;  // 0x40(0x10)
	struct FHitResult HitResult;  // 0x50(0x88)
	float PenetrationDepth;  // 0xD8(0x4)
	char pad_220_1 : 7;  // 0xDC(0x1)
	bool ReturnValue : 1;  // 0xDC(0x1)
	char pad_221[3];  // 0xDD(0x3)

}; 
// Function ConZ.Prisoner.SetItemInHandsOnClient
// Size: 0x8(Inherited: 0x0) 
struct FSetItemInHandsOnClient
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.HolsterItemOnServer
// Size: 0x10(Inherited: 0x0) 
struct FHolsterItemOnServer
{
	struct AItem* Item;  // 0x0(0x8)
	int32_t attachmentSocketHelper;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Prisoner.Server_UnpackAmmoBox
// Size: 0x8(Inherited: 0x0) 
struct FServer_UnpackAmmoBox
{
	struct AAmmunitionBoxItem* Item;  // 0x0(0x8)

}; 
// DelegateFunction ConZ.Prisoner.HoveredActorChanged__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FHoveredActorChanged__DelegateSignature
{
	struct AActor* hoveredActor;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.IsActivelyFishing
// Size: 0x1(Inherited: 0x0) 
struct FIsActivelyFishing
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.NetMulticast_AIMovementFinished
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_AIMovementFinished
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool wasSuccessful : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.IsFishing
// Size: 0x1(Inherited: 0x0) 
struct FIsFishing
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.IsFreeLookEnabled
// Size: 0x1(Inherited: 0x0) 
struct FIsFreeLookEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.AudioStatics.PostAkEventAttached
// Size: 0x38(Inherited: 0x0) 
struct FPostAkEventAttached
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
// Function ConZ.GameEventBase.Multicast_StopMusic
// Size: 0x8(Inherited: 0x0) 
struct FMulticast_StopMusic
{
	struct UAkAudioEvent* StopAudioEvent;  // 0x0(0x8)

}; 
// Function ConZ.CircularMenuMusicPlayerToggleInfo.CreateSpecific
// Size: 0x148(Inherited: 0x0) 
struct FCreateSpecific
{
	struct APrisoner* interactionInitiator;  // 0x0(0x8)
	struct UObject* interactableObject;  // 0x8(0x8)
	struct FInteractionStruct firstInteractionStruct;  // 0x10(0x98)
	struct FInteractionStruct secondInteractionStruct;  // 0xA8(0x98)
	struct UCircularMenuMusicPlayerToggleInfo* ReturnValue;  // 0x140(0x8)

}; 
// Function ConZ.Prisoner.StartMeleeAttack
// Size: 0x8(Inherited: 0x0) 
struct FStartMeleeAttack
{
	struct FGameplayTag meleeAttackType;  // 0x0(0x8)

}; 
// Function ConZ.UserProfile.SetLastLoginTime
// Size: 0x8(Inherited: 0x0) 
struct FSetLastLoginTime
{
	struct FDateTime Value;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.IsInteracting
// Size: 0x1(Inherited: 0x0) 
struct FIsInteracting
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.SetWeaponAimingTypeOnServer
// Size: 0x1(Inherited: 0x0) 
struct FSetWeaponAimingTypeOnServer
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.IsMemberOf
// Size: 0x10(Inherited: 0x0) 
struct FIsMemberOf
{
	struct AConZSquad* Squad;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ConZ.HeatSourceParameters
// Size: 0x24(Inherited: 0x0) 
struct FHeatSourceParameters
{
	float Temperature;  // 0x0(0x4)
	float TemperatureMultiplier;  // 0x4(0x4)
	float FuelMassRatio;  // 0x8(0x4)
	float Emissivity;  // 0xC(0x4)
	float DistanceScale;  // 0x10(0x4)
	float InnerRadiusTemperatureScale;  // 0x14(0x4)
	float AdditionalTemperaturePerGramOfOxygen;  // 0x18(0x4)
	float InnerRadius;  // 0x1C(0x4)
	float OuterRadius;  // 0x20(0x4)

}; 
// Function ConZ.BaseItemContainerWidget.OnDragStartEvent
// Size: 0x40(Inherited: 0x0) 
struct FOnDragStartEvent
{
	struct UBaseItemWidget* Widget;  // 0x0(0x8)
	struct FGeometry Geometry;  // 0x8(0x38)

}; 
// Function ConZ.Prisoner.IsNightVisionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FIsNightVisionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.IsSquadInvitationReceived
// Size: 0x1(Inherited: 0x0) 
struct FIsSquadInvitationReceived
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.HasEnoughAmmo
// Size: 0x1(Inherited: 0x0) 
struct FHasEnoughAmmo
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.IsThrowing
// Size: 0x1(Inherited: 0x0) 
struct FIsThrowing
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.LeaveCombatMode
// Size: 0x2(Inherited: 0x0) 
struct FLeaveCombatMode
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool PlayAnimation : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool overrideAbilityCheck : 1;  // 0x1(0x1)

}; 
// ScriptStruct ConZ.PrisonerBodyBoneGroupsVsSeverity
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerBodyBoneGroupsVsSeverity
{
	struct TArray<struct FPrisonerBodyBoneGroupsVsSeverityKey> Keys;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.BankATMMyCardsButtonStateVisual
// Size: 0x120(Inherited: 0x0) 
struct FBankATMMyCardsButtonStateVisual
{
	struct FLinearColor FontColor;  // 0x0(0x10)
	struct FSlateBrush BackgroundBrush;  // 0x10(0x88)
	struct FSlateBrush CardIconBrush;  // 0x98(0x88)

}; 
// Function ConZ.Prisoner.NetMulticast_AddNearbyFoliageInstances
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_AddNearbyFoliageInstances
{
	struct TArray<struct FPrisonerNearbyFoliageInstanceInfoReplicated> replicatedInstanceInfo;  // 0x0(0x10)

}; 
// Function ConZ.Weapon.GetUsedAmmoCount
// Size: 0x4(Inherited: 0x0) 
struct FGetUsedAmmoCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.NetMulticast_ApplyHaircutAndMakeup
// Size: 0xE0(Inherited: 0x0) 
struct FNetMulticast_ApplyHaircutAndMakeup
{
	struct FCharacterTemplate CharacterTemplate;  // 0x0(0xE0)

}; 
// Function ConZ.MiscStatics.DrawDebugDigit
// Size: 0x38(Inherited: 0x0) 
struct FDrawDebugDigit
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	int32_t digit;  // 0x8(0x4)
	struct FVector Location;  // 0xC(0xC)
	struct FRotator Rotation;  // 0x18(0xC)
	struct FColor Color;  // 0x24(0x4)
	float Size;  // 0x28(0x4)
	float Duration;  // 0x2C(0x4)
	float Thickness;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function ConZ.Weapon.GetLoadedAmmoCount
// Size: 0x4(Inherited: 0x0) 
struct FGetLoadedAmmoCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.NetMulticast_ApplyPlasticSurgery
// Size: 0xE0(Inherited: 0x0) 
struct FNetMulticast_ApplyPlasticSurgery
{
	struct FCharacterTemplate CharacterTemplate;  // 0x0(0xE0)

}; 
// ScriptStruct ConZ.TraderMarkerTradeableOverrideStruct
// Size: 0x48(Inherited: 0x0) 
struct FTraderMarkerTradeableOverrideStruct
{
	struct TSoftClassPtr<UObject> TradeableClass;  // 0x0(0x28)
	int32_t BasePlayerPurchasePrice;  // 0x28(0x4)
	uint8_t  PurchaseCurrencyType;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	int32_t PurchasePriceAlternateCurrencyPrice;  // 0x30(0x4)
	int32_t BasePlayerSellPrice;  // 0x34(0x4)
	float DeltaPrice;  // 0x38(0x4)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool IsOverridingPurchaseAbility : 1;  // 0x3C(0x1)
	char pad_61_1 : 7;  // 0x3D(0x1)
	bool CanBePurchasedByPlayer : 1;  // 0x3D(0x1)
	char pad_62_1 : 7;  // 0x3E(0x1)
	bool IsLocallyImmuneToUserOverrides : 1;  // 0x3E(0x1)
	char pad_63[1];  // 0x3F(0x1)
	int32_t RequiredFamePoints;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 
// Function ConZ.Zombie2.NetMulticast_HandleLanded
// Size: 0x94(Inherited: 0x0) 
struct FNetMulticast_HandleLanded
{
	struct FVector ImpactVelocity;  // 0x0(0xC)
	struct FHitResult HitResult;  // 0xC(0x88)

}; 
// Function ConZ.GardenManager.DebugPlantAPlantAtLookedLocation
// Size: 0x8(Inherited: 0x0) 
struct FDebugPlantAPlantAtLookedLocation
{
	struct UPlantSpecies* species;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PrisonerHallucinationIllusionInfo
// Size: 0x88(Inherited: 0x0) 
struct FPrisonerHallucinationIllusionInfo
{
	struct TSoftClassPtr<UObject> Class;  // 0x0(0x28)
	struct TSet<struct TSoftClassPtr<UObject>> IncompatibleClasses;  // 0x28(0x50)
	struct FInt32Range SeverityLevelConstraint;  // 0x78(0x10)

}; 
// Function ConZ.HuntingManager.OnAnimalActorDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnAnimalActorDestroyed
{
	struct AActor* animalActor;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.NetMulticast_InstrumentPlayTone
// Size: 0xC(Inherited: 0x0) 
struct FNetMulticast_InstrumentPlayTone
{
	uint8_t  tone;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float timeOffset;  // 0x4(0x4)
	int32_t octave;  // 0x8(0x4)

}; 
// DelegateFunction ConZ.TrashSliderValueChangedTemp__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FTrashSliderValueChangedTemp__DelegateSignature
{
	float NewValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.NetMulticast_InstrumentStopTone
// Size: 0xC(Inherited: 0x0) 
struct FNetMulticast_InstrumentStopTone
{
	uint8_t  tone;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float timeOffset;  // 0x4(0x4)
	int32_t octave;  // 0x8(0x4)

}; 
// Function ConZ.ConZBaseManager.NetMulticast_UpdateDoorData
// Size: 0x70(Inherited: 0x0) 
struct FNetMulticast_UpdateDoorData
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FConZBaseElementIdentifier ElementIdentifier;  // 0x8(0x20)
	struct FDoorRepData doorData;  // 0x28(0x48)

}; 
// Function ConZ.SentryAnimInstance2.GetTurnInPlaceElapsedTimeRight
// Size: 0x4(Inherited: 0x0) 
struct FGetTurnInPlaceElapsedTimeRight
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.FireworksItem.GetSecondsBetweenLaunches
// Size: 0x4(Inherited: 0x0) 
struct FGetSecondsBetweenLaunches
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.NetMulticast_SpawnVomitingEffects
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_SpawnVomitingEffects
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool isForced : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.AirplaneWingHitZoneData
// Size: 0x38(Inherited: 0x30) 
struct FAirplaneWingHitZoneData : public FVehicleHitZoneData
{
	uint8_t  Type;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function ConZ.Prisoner.NetMulticast_UpdateAdminStates
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_UpdateAdminStates
{
	char states;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.OnExaminedPrisonerEquippedItem
// Size: 0x10(Inherited: 0x0) 
struct FOnExaminedPrisonerEquippedItem
{
	struct UPrisonerInventoryComponent* inventory;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)

}; 
// Function ConZ.TacticsSkill.IsPrisonerDetected
// Size: 0x10(Inherited: 0x0) 
struct FIsPrisonerDetected
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.PrisonerSkillComponent.Server_IncreaseSkillExperiencePoints
// Size: 0x8(Inherited: 0x0) 
struct FServer_IncreaseSkillExperiencePoints
{
	uint8_t  skillReplicationID;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Points;  // 0x4(0x4)

}; 
// Function ConZ.GameEventLocationMarker.GetAreaCenter
// Size: 0xC(Inherited: 0x0) 
struct FGetAreaCenter
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.Prisoner.Server_SplitAmmo
// Size: 0x8(Inherited: 0x0) 
struct FServer_SplitAmmo
{
	struct AAmmunitionItem* ammoItem;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.OnExaminedPrisonerUnequippedItem
// Size: 0x10(Inherited: 0x0) 
struct FOnExaminedPrisonerUnequippedItem
{
	struct UPrisonerInventoryComponent* inventory;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)

}; 
// Function ConZ.ComplexAnimal2.Wait
// Size: 0x4(Inherited: 0x0) 
struct FWait
{
	float Time;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.OnMovementUpdated
// Size: 0x1C(Inherited: 0x0) 
struct FOnMovementUpdated
{
	float DeltaSeconds;  // 0x0(0x4)
	struct FVector OldLocation;  // 0x4(0xC)
	struct FVector OldVelocity;  // 0x10(0xC)

}; 
// Function ConZ.KillboxComponent.AddRoomDefinition
// Size: 0x18(Inherited: 0x0) 
struct FAddRoomDefinition
{
	struct ADoor* RoomDoor;  // 0x0(0x8)
	struct UStaticMeshComponent* Locker;  // 0x8(0x8)
	struct AKillBoxC4SpawnPoint* C4;  // 0x10(0x8)

}; 
// Function ConZ.Prisoner.OnHearNoise
// Size: 0x18(Inherited: 0x0) 
struct FOnHearNoise
{
	struct APawn* instigatorPawn;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	float Volume;  // 0x14(0x4)

}; 
// Function ConZ.Prisoner.OnRep_ItemInHandsVisualObstructionDepth
// Size: 0x1(Inherited: 0x0) 
struct FOnRep_ItemInHandsVisualObstructionDepth
{
	char oldValue;  // 0x0(0x1)

}; 
// Function ConZ.DebugRpcChannel.Server_Farming_AddWaterToSlot
// Size: 0x10(Inherited: 0x0) 
struct FServer_Farming_AddWaterToSlot
{
	struct AGarden* Garden;  // 0x0(0x8)
	int32_t Slot;  // 0x8(0x4)
	float Amount;  // 0xC(0x4)

}; 
// Function ConZ.GameEventBase.GetMarker
// Size: 0x8(Inherited: 0x0) 
struct FGetMarker
{
	struct AGameEventLocationMarker* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.PromoteSquadMemberOnServer
// Size: 0x8(Inherited: 0x0) 
struct FPromoteSquadMemberOnServer
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.RemoveFromSquadOnServer
// Size: 0x8(Inherited: 0x0) 
struct FRemoveFromSquadOnServer
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.StartMeleeDodge
// Size: 0x1(Inherited: 0x0) 
struct FStartMeleeDodge
{
	uint8_t  Direction;  // 0x0(0x1)

}; 
// Function ConZ.User.RemoveRecentServerAt
// Size: 0x4(Inherited: 0x0) 
struct FRemoveRecentServerAt
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.RemoveItemFromHands
// Size: 0x1(Inherited: 0x0) 
struct FRemoveItemFromHands
{
	uint8_t  preferedHolsterType;  // 0x0(0x1)

}; 
// Function ConZ.PlayerRpcChannel.ResourceLockingManager_Server_LockArea
// Size: 0x20(Inherited: 0x0) 
struct FResourceLockingManager_Server_LockArea
{
	struct FResourceNetworkGUID LockOwnerGUID;  // 0x0(0x4)
	struct FBox Area;  // 0x4(0x1C)

}; 
// Function ConZ.Prisoner.RemoveWeaponAttachment
// Size: 0x10(Inherited: 0x0) 
struct FRemoveWeaponAttachment
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	struct AWeaponAttachment* Attachment;  // 0x8(0x8)

}; 
// Function ConZ.WeatherController2.NetMulticast_SendStateSnapshot
// Size: 0x34(Inherited: 0x0) 
struct FNetMulticast_SendStateSnapshot
{
	struct FWeatherReplicatedStateSnapshot Snapshot;  // 0x0(0x34)

}; 
// Function ConZ.FishingAttachmentFloater.Server_SendState
// Size: 0x50(Inherited: 0x0) 
struct FServer_SendState
{
	float DeltaTime;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FRigidBodyState State;  // 0x10(0x40)

}; 
// Function ConZ.Door.ChangeOpenState
// Size: 0x1(Inherited: 0x0) 
struct FChangeOpenState
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ShouldOpen : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.Server_SetRotationTarget
// Size: 0x8(Inherited: 0x0) 
struct FServer_SetRotationTarget
{
	struct AActor* rotationTarget;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.RequestRespawn
// Size: 0x1C(Inherited: 0x0) 
struct FRequestRespawn
{
	struct FPrisonerTeleportRequest request;  // 0x0(0x1C)

}; 
// ScriptStruct ConZ.PrisonerTeleportRequest
// Size: 0x1C(Inherited: 0x0) 
struct FPrisonerTeleportRequest
{
	char pad_0[28];  // 0x0(0x1C)

}; 
// Function ConZ.Weapon.GetLoadedProjectileClass
// Size: 0x8(Inherited: 0x0) 
struct FGetLoadedProjectileClass
{
	AProjectile* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerShotsFiredTrackerComponent.Client_SetWidgetVisibilityAndReset
// Size: 0x1(Inherited: 0x0) 
struct FClient_SetWidgetVisibilityAndReset
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Visibility : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.CharacterMeshMorphTargetArray
// Size: 0x10(Inherited: 0x0) 
struct FCharacterMeshMorphTargetArray
{
	struct TArray<struct FCharacterMeshMorphTarget> MorphTargetArray;  // 0x0(0x10)

}; 
// Function ConZ.Prisoner.RespawnAtCommonSpawnLocation
// Size: 0xC(Inherited: 0x0) 
struct FRespawnAtCommonSpawnLocation
{
	uint8_t  commonSpawnLocation;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FSectorId SectorId;  // 0x4(0x8)

}; 
// ScriptStruct ConZ.FireShotDescription
// Size: 0x8(Inherited: 0x0) 
struct FFireShotDescription
{
	char pad_0[8];  // 0x0(0x8)

}; 
// Function ConZ.ConZGameState.SendServerTime
// Size: 0x4(Inherited: 0x0) 
struct FSendServerTime
{
	float Time;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.SetTargetLeanAmountOnServer
// Size: 0x4(Inherited: 0x0) 
struct FSetTargetLeanAmountOnServer
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.SendMessageToClient
// Size: 0x18(Inherited: 0x0) 
struct FSendMessageToClient
{
	struct FString Message;  // 0x0(0x10)
	struct UAkAudioEvent* AudioEvent;  // 0x10(0x8)

}; 
// Function ConZ.ConZGameInstance.GetCurrentUserProfile
// Size: 0x8(Inherited: 0x0) 
struct FGetCurrentUserProfile
{
	struct UUserProfile* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.Server_AddNearbyFoliageInstances
// Size: 0x10(Inherited: 0x0) 
struct FServer_AddNearbyFoliageInstances
{
	struct TArray<struct FPrisonerNearbyFoliageInstanceInfoReplicated> replicatedInstanceInfo;  // 0x0(0x10)

}; 
// Function ConZ.Prisoner.SendSquadInvitationOnServer
// Size: 0x8(Inherited: 0x0) 
struct FSendSquadInvitationOnServer
{
	struct APrisoner* invited;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.TradeOutpostProsperityLevelInfo
// Size: 0x28(Inherited: 0x0) 
struct FTradeOutpostProsperityLevelInfo
{
	struct FString ProsperityLevelName;  // 0x0(0x10)
	float ProsperityLevelThreshold;  // 0x10(0x4)
	float FundsChangeRatePerHour;  // 0x14(0x4)
	int32_t ProsperityLevelThresholdGold;  // 0x18(0x4)
	float GBCRefreshRatePerHour;  // 0x1C(0x4)
	float GSCRefreshRatePerHour;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// DelegateFunction ConZ.ItemWidget2.OnRotated__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnRotated__DelegateSignature
{
	struct UItemWidget2* Widget;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.MapHUDHomeLocationObject
// Size: 0x48(Inherited: 0x18) 
struct FMapHUDHomeLocationObject : public FMapHUDObject
{
	struct UFont* _font;  // 0x18(0x8)
	char pad_32[40];  // 0x20(0x28)

}; 
// Function ConZ.LockpickingWidget.SetLockPickingDifficulty
// Size: 0x1(Inherited: 0x0) 
struct FSetLockPickingDifficulty
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// Function ConZ.PlayerDrone.Server_AddInventoryNode
// Size: 0x38(Inherited: 0x0) 
struct FServer_AddInventoryNode
{
	struct UObject* Item;  // 0x0(0x8)
	struct UObject* container;  // 0x8(0x8)
	struct FInventoryPositionDataRepHelper position;  // 0x10(0x20)
	struct UObject* Target;  // 0x30(0x8)

}; 
// ScriptStruct ConZ.EconomyManagerRequestData
// Size: 0xB0(Inherited: 0x0) 
struct FEconomyManagerRequestData
{
	char pad_0[176];  // 0x0(0xB0)

}; 
// Function ConZ.Vehicle.GetVehicleAnimInstance
// Size: 0x8(Inherited: 0x0) 
struct FGetVehicleAnimInstance
{
	struct UAnimInstance* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.GetMuzzleDirection
// Size: 0xC(Inherited: 0x0) 
struct FGetMuzzleDirection
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// ScriptStruct ConZ.InventoryPositionDataRepHelper
// Size: 0x20(Inherited: 0x0) 
struct FInventoryPositionDataRepHelper
{
	UObject* _dataClass;  // 0x0(0x8)
	struct UInventoryPositionData* _positionData;  // 0x8(0x8)
	struct UObject* _owner;  // 0x10(0x8)
	int32_t _repKey;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.PrisonerMovementComponent.GetWaterImmersionDepth
// Size: 0x4(Inherited: 0x0) 
struct FGetWaterImmersionDepth
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Server_AIMovementFinished
// Size: 0x1(Inherited: 0x0) 
struct FServer_AIMovementFinished
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool wasSuccessful : 1;  // 0x0(0x1)

}; 
// Function ConZ.NetworkStatics.GetDefaultDedicatedServerResponsePort
// Size: 0x4(Inherited: 0x0) 
struct FGetDefaultDedicatedServerResponsePort
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Server_DestroyPlaceable
// Size: 0x8(Inherited: 0x0) 
struct FServer_DestroyPlaceable
{
	struct FDbIntegerId ID;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.Server_InitiateCraftedPlacement
// Size: 0x8(Inherited: 0x0) 
struct FServer_InitiateCraftedPlacement
{
	struct UPlaceableCraftableItem* CraftableItem;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PrisonerAppearance_TattooArray
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerAppearance_TattooArray
{
	struct TArray<struct FPrisonerAppearance_Tattoo> Tattoos;  // 0x0(0x10)

}; 
// Function ConZ.WeaponAttachmentMagazine.AddAmmo
// Size: 0x10(Inherited: 0x0) 
struct FAddAmmo
{
	struct TArray<struct FAmmunitionData> ammo;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.ConZBaseElementIdentifier
// Size: 0x20(Inherited: 0x0) 
struct FConZBaseElementIdentifier
{
	int64_t BaseId;  // 0x0(0x8)
	int64_t ElementID;  // 0x8(0x8)
	struct FVector Location;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.Prisoner.Server_InteractWithLadder
// Size: 0x18(Inherited: 0x0) 
struct FServer_InteractWithLadder
{
	struct FVector traceOrigin;  // 0x0(0xC)
	struct FVector traceDirection;  // 0xC(0xC)

}; 
// ScriptStruct ConZ.PrisonerBodyMuscleGroupsVsSeverityKey
// Size: 0x60(Inherited: 0x0) 
struct FPrisonerBodyMuscleGroupsVsSeverityKey
{
	struct FFloatRange SeverityRange;  // 0x0(0x10)
	struct TSet<uint8_t > Values;  // 0x10(0x50)

}; 
// Function ConZ.ConZSquad.GetMember
// Size: 0x28(Inherited: 0x0) 
struct FGetMember
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	struct FConZSquadMember ReturnValue;  // 0x8(0x20)

}; 
// ScriptStruct ConZ.RecipeItemState
// Size: 0x1C(Inherited: 0x0) 
struct FRecipeItemState
{
	char pad_0[28];  // 0x0(0x1C)

}; 
// Function ConZ.Prisoner.Server_lockpickingEnded
// Size: 0x30(Inherited: 0x0) 
struct FServer_lockpickingEnded
{
	struct UObject* Lockpickable;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool Succeeded : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FConZBaseElementIdentifier lockpickableBaseElement;  // 0x10(0x20)

}; 
// Function ConZ.Prisoner.Server_MinigameEnded
// Size: 0x20(Inherited: 0x0) 
struct FServer_MinigameEnded
{
	AMinigame* minigameClass;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool isPractice : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool Succeeded : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)
	struct TArray<struct TWeakObjectPtr<AItem>> tools;  // 0x10(0x10)

}; 
// ScriptStruct ConZ.HitReactResult
// Size: 0x18(Inherited: 0x0) 
struct FHitReactResult
{
	struct UAnimMontage* MontageToPlay;  // 0x0(0x8)
	struct UAnimMontage* FollowupMontage;  // 0x8(0x8)
	float RegainControlDurationMultiplier;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ConZ.CharacterHeadImpactSoundsData
// Size: 0x18(Inherited: 0x0) 
struct FCharacterHeadImpactSoundsData
{
	struct TArray<struct FCharacterHeadImpactSoundData> SoundsData;  // 0x0(0x10)
	struct FCharacterImpactSounds FallbackSounds;  // 0x10(0x8)

}; 
// Function ConZ.Prisoner.Server_OnLockpickingProtectionTriggered
// Size: 0x30(Inherited: 0x0) 
struct FServer_OnLockpickingProtectionTriggered
{
	struct UObject* Lockpickable;  // 0x0(0x8)
	float Damage;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct UParticleSystem* Particles;  // 0x10(0x8)
	struct UAkAudioEvent* audio;  // 0x18(0x8)
	struct FVector ParticlesScale;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function ConZ.Prisoner.Server_ProjectileDealDamage
// Size: 0x108(Inherited: 0x0) 
struct FServer_ProjectileDealDamage
{
	struct FNetPackedProjectileDamageEvent packedDamageEvent;  // 0x0(0x108)

}; 
// Function ConZ.InteractionComponent.Server_UpdateLockHPOnServer
// Size: 0x10(Inherited: 0x0) 
struct FServer_UpdateLockHPOnServer
{
	struct UObject* Lockpickable;  // 0x0(0x8)
	float lockHP;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Server_DealRadialDamage
// Size: 0x40(Inherited: 0x0) 
struct FServer_DealRadialDamage
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	UObject* WeaponClass;  // 0x8(0x8)
	struct FVector zeroLocation;  // 0x10(0xC)
	float Damage;  // 0x1C(0x4)
	float InnerRadius;  // 0x20(0x4)
	float OuterRadius;  // 0x24(0x4)
	float Falloff;  // 0x28(0x4)
	float force;  // 0x2C(0x4)
	struct FTargetTypeDamageMultiplier TargetTypeMultiplier;  // 0x30(0x10)

}; 
// Function ConZ.HitReactComponent.GetPelvisBoneName
// Size: 0x8(Inherited: 0x0) 
struct FGetPelvisBoneName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.TakeItemInHands
// Size: 0x8(Inherited: 0x0) 
struct FTakeItemInHands
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.BaseItemContainerWidget.GetSlots
// Size: 0x28(Inherited: 0x0) 
struct FGetSlots
{
	struct UGridSlot* GridSlot;  // 0x0(0x8)
	int32_t Width;  // 0x8(0x4)
	int32_t Height;  // 0xC(0x4)
	struct TArray<struct UInventorySlotUserWidget*> Slots;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// ScriptStruct ConZ.ScumPointDamageEvent
// Size: 0xB0(Inherited: 0xA8) 
struct FScumPointDamageEvent : public FPointDamageEvent
{
	char pad_168[8];  // 0xA8(0x8)

}; 
// Function ConZ.InteractableInterface.InteractWithItem
// Size: 0x80(Inherited: 0x0) 
struct FInteractWithItem
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)
	uint8_t  interactionType;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct FInteractionData InteractionData;  // 0x18(0x68)

}; 
// ScriptStruct ConZ.TabButtonStyle
// Size: 0x288(Inherited: 0x0) 
struct FTabButtonStyle
{
	struct FVector2D Size;  // 0x0(0x8)
	char EHorizontalAlignment HorizontalAlignment;  // 0x8(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)
	struct FButtonStyle ButtonStyle;  // 0x10(0x278)

}; 
// Function ConZ.Prisoner.Server_RemoveNearbyFoliageInstances
// Size: 0x10(Inherited: 0x0) 
struct FServer_RemoveNearbyFoliageInstances
{
	struct TArray<struct FPrisonerNearbyFoliageInstanceInfoReplicated> replicatedInstanceInfo;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.BankCardTypeData
// Size: 0x48(Inherited: 0x0) 
struct FBankCardTypeData
{
	struct TSoftClassPtr<UObject> ItemClass;  // 0x0(0x28)
	int32_t PurchasePrice;  // 0x28(0x4)
	uint8_t  PurchasePriceCurrency;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	int32_t MaxWrongPinAttempts;  // 0x30(0x4)
	int32_t FreeRenewalNum;  // 0x34(0x4)
	int32_t DailyWithdrawLimit;  // 0x38(0x4)
	int32_t DailyDepositLimit;  // 0x3C(0x4)
	int32_t PinComplexity;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 
// Function ConZ.Prisoner.Server_ReportVote
// Size: 0x1(Inherited: 0x0) 
struct FServer_ReportVote
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Vote : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.SpawnCharacterAroundInfo
// Size: 0x50(Inherited: 0x0) 
struct FSpawnCharacterAroundInfo
{
	struct TArray<APawn*> AvailablePawns;  // 0x0(0x10)
	struct FTransform Transform;  // 0x10(0x30)
	float MinSpawnRadius;  // 0x40(0x4)
	float MaxSpawnRadius;  // 0x44(0x4)
	int32_t NumOfCharactersToSpawn;  // 0x48(0x4)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool IgnoreLimit : 1;  // 0x4C(0x1)
	char pad_77[3];  // 0x4D(0x3)

}; 
// Function ConZ.DropZoneGameEvent.GetPhase
// Size: 0x1(Inherited: 0x0) 
struct FGetPhase
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.PlayerRpcChannel.Mechanic_Server_SubscribeToVehicleServiceData
// Size: 0x8(Inherited: 0x0) 
struct FMechanic_Server_SubscribeToVehicleServiceData
{
	struct AMechanic* Mechanic;  // 0x0(0x8)

}; 
// Function ConZ.TrapItem.Multicast_SetOnlyManualTrigger
// Size: 0x1(Inherited: 0x0) 
struct FMulticast_SetOnlyManualTrigger
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool onlyManualTrigger : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerSkillComponent.SetSkillStaminaConsumptionOnServer
// Size: 0x10(Inherited: 0x0) 
struct FSetSkillStaminaConsumptionOnServer
{
	struct USkill* Skill;  // 0x0(0x8)
	float Consumption;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Prisoner.Server_SetActiveParachute
// Size: 0x8(Inherited: 0x0) 
struct FServer_SetActiveParachute
{
	struct AClothesItem* Parachute;  // 0x0(0x8)

}; 
// Function ConZ.Bird2.GetIsStaringPerched
// Size: 0x1(Inherited: 0x0) 
struct FGetIsStaringPerched
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.Server_SetCarryingItemState
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetCarryingItemState
{
	uint8_t  State;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.RemoveAttachment
// Size: 0x8(Inherited: 0x0) 
struct FRemoveAttachment
{
	struct AWeaponAttachment* Attachment;  // 0x0(0x8)

}; 
// Function ConZ.Drone.Server_SetCurrentSpeedStep
// Size: 0x4(Inherited: 0x0) 
struct FServer_SetCurrentSpeedStep
{
	int32_t step;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Server_SetDangerCooldown
// Size: 0x10(Inherited: 0x0) 
struct FServer_SetDangerCooldown
{
	float cooldown;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct APrisoner* Prisoner;  // 0x8(0x8)

}; 
// Function ConZ.Vehicle.SetVehicleDoorWindowCollisionAttached
// Size: 0x8(Inherited: 0x0) 
struct FSetVehicleDoorWindowCollisionAttached
{
	int32_t doorIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool Value : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// DelegateFunction ConZ.TrashNamedSliderValueChangedTemp__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FTrashNamedSliderValueChangedTemp__DelegateSignature
{
	float NewValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Server_SetGameEventLoadout
// Size: 0x68(Inherited: 0x0) 
struct FServer_SetGameEventLoadout
{
	AItem* primary;  // 0x0(0x8)
	struct TArray<AItem*> primaryAttachments;  // 0x8(0x10)
	AItem* secondary;  // 0x18(0x8)
	struct TArray<AItem*> secondaryAttachments;  // 0x20(0x10)
	AItem* tertiary;  // 0x30(0x8)
	struct TArray<AItem*> tertiaryAttachments;  // 0x38(0x10)
	struct TArray<AItem*> outfit;  // 0x48(0x10)
	struct TArray<AItem*> support;  // 0x58(0x10)

}; 
// Function ConZ.DropZoneKey.SphereOverlap
// Size: 0xA8(Inherited: 0x0) 
struct FSphereOverlap
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0(0x8)
	struct AActor* OtherActor;  // 0x8(0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10(0x8)
	int32_t OtherBodyIndex;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bFromSweep : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FHitResult SweepResult;  // 0x20(0x88)

}; 
// ScriptStruct ConZ.LadderDetectionParams
// Size: 0x20(Inherited: 0x0) 
struct FLadderDetectionParams
{
	struct FVector RayOrigin;  // 0x0(0xC)
	struct FVector RayDirection;  // 0xC(0xC)
	float MaxHorzDistanceToLadder;  // 0x18(0x4)
	float MaxRayToLadderAngle;  // 0x1C(0x4)

}; 
// Function ConZ.QuickAccessItemWidget.OnItemDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnItemDestroyed
{
	struct AActor* itemActor;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.Server_SetItemInHandsVisualObstructionDepth
// Size: 0x4(Inherited: 0x0) 
struct FServer_SetItemInHandsVisualObstructionDepth
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Server_SetMeleeTarget
// Size: 0x8(Inherited: 0x0) 
struct FServer_SetMeleeTarget
{
	struct AActor* Value;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.Server_SetPlayingInstrumentState
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetPlayingInstrumentState
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.VehicleMarkerData
// Size: 0x20(Inherited: 0x0) 
struct FVehicleMarkerData
{
	char pad_0[32];  // 0x0(0x20)

}; 
// DelegateFunction ConZ.TrashCarouselValueChangedTemp__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FTrashCarouselValueChangedTemp__DelegateSignature
{
	int32_t NewValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Server_SetScopingWithItemInHandsState
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetScopingWithItemInHandsState
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// Function ConZ.CookedFoodItem.NetMulticast_SetupStateFromCooking
// Size: 0x18(Inherited: 0x0) 
struct FNetMulticast_SetupStateFromCooking
{
	uint32_t cookState;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<char> ingredientData;  // 0x8(0x10)

}; 
// Function ConZ.Prisoner.Server_SetShouldIgnoreHeadTurning
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetShouldIgnoreHeadTurning
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.Server_SetVehicleAimingYaw
// Size: 0x4(Inherited: 0x0) 
struct FServer_SetVehicleAimingYaw
{
	float angle;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.SetIsInCombatModeOnServer
// Size: 0x1(Inherited: 0x0) 
struct FSetIsInCombatModeOnServer
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventBorder.GetRadius
// Size: 0x4(Inherited: 0x0) 
struct FGetRadius
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.DoorUnlockDataDescription
// Size: 0x10(Inherited: 0x0) 
struct FDoorUnlockDataDescription
{
	UDoorUnlockData* DoorUnlockData;  // 0x0(0x8)
	int32_t ProbabilityCount;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Prisoner.Server_SplitCurrencyItem
// Size: 0x10(Inherited: 0x0) 
struct FServer_SplitCurrencyItem
{
	struct AItem* currencyItem;  // 0x0(0x8)
	int32_t newAmount;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.WeaponAction.InsertCartridgeIntoWeaponAtLocation
// Size: 0x18(Inherited: 0x0) 
struct FInsertCartridgeIntoWeaponAtLocation
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	struct AAmmunitionItem* ammo;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool backLocation : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.Vehicle.GetNumVehicleDoors
// Size: 0x4(Inherited: 0x0) 
struct FGetNumVehicleDoors
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Prisoner.Server_StoreAmmoInAmmoBox
// Size: 0x10(Inherited: 0x0) 
struct FServer_StoreAmmoInAmmoBox
{
	struct AAmmunitionItem* ammo;  // 0x0(0x8)
	struct AAmmunitionBoxItem* Box;  // 0x8(0x8)

}; 
// Function ConZ.Weapon.GetMakeNoiseLoudness
// Size: 0x4(Inherited: 0x0) 
struct FGetMakeNoiseLoudness
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.PrisonerBodyMuscleGroupsVsSeverity
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerBodyMuscleGroupsVsSeverity
{
	struct TArray<struct FPrisonerBodyMuscleGroupsVsSeverityKey> Keys;  // 0x0(0x10)

}; 
// Function ConZ.Vehicle.GetMountSlotIndicatorsWidget
// Size: 0x8(Inherited: 0x0) 
struct FGetMountSlotIndicatorsWidget
{
	UUserWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.Server_SwapWeaponAttachments
// Size: 0x18(Inherited: 0x0) 
struct FServer_SwapWeaponAttachments
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	struct AWeaponAttachment* oldAttachment;  // 0x8(0x8)
	struct AWeaponAttachment* newAttachment;  // 0x10(0x8)

}; 
// Function ConZ.Prisoner.Server_UnloadAmmoFromMagazine
// Size: 0x8(Inherited: 0x0) 
struct FServer_UnloadAmmoFromMagazine
{
	struct AWeaponAttachmentMagazine* magazine;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.HitReactMagnitudeData
// Size: 0x120(Inherited: 0x0) 
struct FHitReactMagnitudeData
{
	struct FHitReactDirectionData SmallHit;  // 0x0(0x48)
	struct FHitReactDirectionData MediumHit;  // 0x48(0x48)
	struct FHitReactDirectionData LargeHit;  // 0x90(0x48)
	struct FHitReactDirectionData KnockoutHit;  // 0xD8(0x48)

}; 
// Function ConZ.Prisoner.SetFreeLookEnabledOnServer
// Size: 0x1(Inherited: 0x0) 
struct FSetFreeLookEnabledOnServer
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventTeamHeaderWidget.SetGameEvent
// Size: 0x8(Inherited: 0x0) 
struct FSetGameEvent
{
	struct AGameEventBase* gameEvent;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.VehicleExhaustEffectsParameters
// Size: 0x70(Inherited: 0x0) 
struct FVehicleExhaustEffectsParameters
{
	struct FTransform Transform;  // 0x0(0x30)
	struct UParticleSystem* EngineStartedParticleSystem;  // 0x30(0x8)
	struct UParticleSystem* EngineIdleParticleSystem;  // 0x38(0x8)
	struct UParticleSystem* ThrottlePressedParticleSystem;  // 0x40(0x8)
	struct UAkAudioEvent* ThrottlePressedAudioEvent;  // 0x48(0x8)
	float MinDurationBetweenThrottlePressedEffects;  // 0x50(0x4)
	float DeactivationDelay;  // 0x54(0x4)
	char pad_88[24];  // 0x58(0x18)

}; 
// Function ConZ.Prisoner.SetIsEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetIsEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.MeleeCombatComponent.SetIsInCombatMode
// Size: 0x1(Inherited: 0x0) 
struct FSetIsInCombatMode
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.SetIsLimpingOverrideEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetIsLimpingOverrideEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerAnimInstance.GetIKLegsRootOffsetVectorFromCardinalDirection
// Size: 0x10(Inherited: 0x0) 
struct FGetIKLegsRootOffsetVectorFromCardinalDirection
{
	uint8_t  Value;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector ReturnValue;  // 0x4(0xC)

}; 
// ScriptStruct ConZ.PhysicalAnimationDesc
// Size: 0x34(Inherited: 0x0) 
struct FPhysicalAnimationDesc
{
	char pad_0[52];  // 0x0(0x34)

}; 
// Function ConZ.Prisoner.SetMidiDeviceByIndex
// Size: 0x8(Inherited: 0x0) 
struct FSetMidiDeviceByIndex
{
	int32_t Index;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// ScriptStruct ConZ.WindowMarker
// Size: 0x50(Inherited: 0x0) 
struct FWindowMarker
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsVaultable : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool IsFortifiable : 1;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct UWindowFortificationsType* WindowFortificationsType;  // 0x8(0x8)
	struct TArray<int32_t> AdditionalMarkerIndicesToModify;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool DidIFailToCorrectlyPlaceWindowMarkers : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	struct FVector Vertex1;  // 0x24(0xC)
	struct FVector Vertex2;  // 0x30(0xC)
	float FortificationOffset;  // 0x3C(0x4)
	float CollisionBoxVertBias;  // 0x40(0x4)
	float CollisionBoxHorzBias;  // 0x44(0x4)
	char pad_72[8];  // 0x48(0x8)

}; 
// ScriptStruct ConZ.MapHUDPrisonerObject
// Size: 0x40(Inherited: 0x18) 
struct FMapHUDPrisonerObject : public FMapHUDObject
{
	struct FVector2D _prisonerPositionTextureSize;  // 0x18(0x8)
	struct UTexture* _myPrisonerPositionTexture;  // 0x20(0x8)
	struct UTexture* _prisonerPingAnimationTexture;  // 0x28(0x8)
	float _prisonerPingSizeMultiplier;  // 0x30(0x4)
	char pad_52[12];  // 0x34(0xC)

}; 
// Function ConZ.Prisoner.SetMidiDeviceByName
// Size: 0x18(Inherited: 0x0) 
struct FSetMidiDeviceByName
{
	struct FString Name;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ConZ.NotificationDescriptionReplicationHelper
// Size: 0x18(Inherited: 0x0) 
struct FNotificationDescriptionReplicationHelper
{
	char pad_0[24];  // 0x0(0x18)

}; 
// Function ConZ.Prisoner.SetOverrideIsLimping
// Size: 0x1(Inherited: 0x0) 
struct FSetOverrideIsLimping
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.CorpseStaticMeshRepData
// Size: 0x70(Inherited: 0x0) 
struct FCorpseStaticMeshRepData
{
	struct FName DisplayName;  // 0x0(0x8)
	struct UStaticMesh* Mesh;  // 0x8(0x8)
	struct TArray<struct UMaterialInterface*> Materials;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool Visibility : 1;  // 0x20(0x1)
	char pad_33[15];  // 0x21(0xF)
	struct FTransform Transform;  // 0x30(0x30)
	struct FName AttachSocket;  // 0x60(0x8)
	char pad_104[8];  // 0x68(0x8)

}; 
// ScriptStruct ConZ.CarouselTextStyle
// Size: 0x80(Inherited: 0x0) 
struct FCarouselTextStyle
{
	struct FMargin Padding;  // 0x0(0x10)
	char EHorizontalAlignment HorizontalAlignment;  // 0x10(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)
	struct FSlateFontInfo Font;  // 0x18(0x58)
	struct FLinearColor ColorAndOpacity;  // 0x70(0x10)

}; 
// Function ConZ.Prisoner.SetPlayerSoundLevel
// Size: 0x4(Inherited: 0x0) 
struct FSetPlayerSoundLevel
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.ItemSelectionWidget.On_Selection_MouseButtonDown
// Size: 0x160(Inherited: 0x0) 
struct FOn_Selection_MouseButtonDown
{
	struct FGeometry Geometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// Function ConZ.Vehicle.IsVehicleInteriorExposed
// Size: 0x1(Inherited: 0x0) 
struct FIsVehicleInteriorExposed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.User.SetFavoriteServers
// Size: 0x10(Inherited: 0x0) 
struct FSetFavoriteServers
{
	struct TArray<struct FUserServerHistoryItem> Value;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.ActiveMovingThroughFoliageSounds
// Size: 0x20(Inherited: 0x0) 
struct FActiveMovingThroughFoliageSounds
{
	char pad_0[8];  // 0x0(0x8)
	struct UAkAudioEvent* StartAudioEvent;  // 0x8(0x8)
	struct UAkAudioEvent* StopAudioEvent;  // 0x10(0x8)
	char pad_24[8];  // 0x18(0x8)

}; 
// ScriptStruct ConZ.CraftingIngredientTypeModifier
// Size: 0x10(Inherited: 0x0) 
struct FCraftingIngredientTypeModifier
{
	UCraftingIngredientType* IngredientType;  // 0x0(0x8)
	float AmountMultiplier;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Prisoner.SetRotationTarget
// Size: 0x8(Inherited: 0x0) 
struct FSetRotationTarget
{
	struct AActor* rotationTarget;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.AITeamAttitudeData
// Size: 0x7(Inherited: 0x0) 
struct FAITeamAttitudeData
{
	char ETeamAttitude AttitudePerTeam[7];  // 0x0(0x7)

}; 
// Function ConZ.Prisoner.SetTargetOnServer
// Size: 0x8(Inherited: 0x0) 
struct FSetTargetOnServer
{
	struct AActor* Target;  // 0x0(0x8)

}; 
// Function ConZ.Prisoner.SetWristwatchBrightness
// Size: 0x4(Inherited: 0x0) 
struct FSetWristwatchBrightness
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Weapon.Server_InsertCartridgeIntoWeapon
// Size: 0x20(Inherited: 0x0) 
struct FServer_InsertCartridgeIntoWeapon
{
	struct AAmmunitionItem* ammo;  // 0x0(0x8)
	struct FAmmunitionData AmmunitionData;  // 0x8(0x18)

}; 
// Function ConZ.Prisoner.ShouldLookatMeleeTarget
// Size: 0x1(Inherited: 0x0) 
struct FShouldLookatMeleeTarget
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Prisoner.ShowSpawnScreen
// Size: 0x1(Inherited: 0x0) 
struct FShowSpawnScreen
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool loadoutMenu : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.PrisonerMountReplication
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerMountReplication
{
	struct UObject* MountedSlot;  // 0x0(0x8)
	uint8_t  _mountFlags;  // 0x8(0x1)
	char _version;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// DelegateFunction ConZ.Door.OnLockRemoved__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnLockRemoved__DelegateSignature
{
	struct ADoor* Door;  // 0x0(0x8)

}; 
// Function ConZ.Door.OnRep_StateFlags
// Size: 0x1(Inherited: 0x0) 
struct FOnRep_StateFlags
{
	uint8_t  Previous;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.VehicleManualSpawnPresetArray
// Size: 0x20(Inherited: 0x0) 
struct FVehicleManualSpawnPresetArray
{
	struct UVehiclePreset* PresetPerSpawnType[4];  // 0x0(0x20)

}; 
// Function ConZ.Door.ShouldOpen
// Size: 0x1(Inherited: 0x0) 
struct FShouldOpen
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.TabTextStyle
// Size: 0x98(Inherited: 0x0) 
struct FTabTextStyle
{
	struct FMargin Padding;  // 0x0(0x10)
	char EHorizontalAlignment HorizontalAlignment;  // 0x10(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)
	struct FSlateFontInfo Font;  // 0x18(0x58)
	struct FLinearColor Color;  // 0x70(0x10)
	struct FVector2D ShadowOffset;  // 0x80(0x8)
	struct FLinearColor ShadowColorAndOpacity;  // 0x88(0x10)

}; 
// ScriptStruct ConZ.DoorRepData
// Size: 0x48(Inherited: 0x0) 
struct FDoorRepData
{
	uint8_t  StateFlags;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FDbIntegerId OwningUserProfileId;  // 0x8(0x8)
	struct TArray<UObject*> Locks;  // 0x10(0x10)
	struct TArray<int32_t> RemainingNeutralizationAttemptsPerLock;  // 0x20(0x10)
	char DoorAccessLevel;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)
	struct TArray<struct AItem*> AttachedItems;  // 0x38(0x10)

}; 
// DelegateFunction ConZ.ConZBaseElement.ElementInteractedEvent__DelegateSignature
// Size: 0x80(Inherited: 0x0) 
struct FElementInteractedEvent__DelegateSignature
{
	struct APrisoner* User;  // 0x0(0x8)
	uint8_t  interactionType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FInteractionData InteractionData;  // 0x10(0x68)
	struct FBaseInteractionParams BaseInteractionParams;  // 0x78(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Inventory_Server_DropInventoryElement
// Size: 0x40(Inherited: 0x0) 
struct FInventory_Server_DropInventoryElement
{
	struct AConZCharacter* Character;  // 0x0(0x8)
	struct FInv2021_InventoryElementRepHelper Element;  // 0x8(0x20)
	struct FInv2021_InventoryPositionObjectRepHelper position;  // 0x28(0x18)

}; 
// Function ConZ.Weapon.GetMalfunctionsForEvent
// Size: 0x30(Inherited: 0x0) 
struct FGetMalfunctionsForEvent
{
	uint8_t  malfunctionEvent;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FWeaponMalfunctionEventDescription desc;  // 0x4(0x8)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<struct FWeaponMalfunctionProbability> malfunctionsIn;  // 0x10(0x10)
	struct TArray<struct FWeaponMalfunctionProbability> malfunctionsOut;  // 0x20(0x10)

}; 
// Function ConZ.SquadEditor.OnBackgroundClicked
// Size: 0x8(Inherited: 0x0) 
struct FOnBackgroundClicked
{
	struct UDropdownMenuSelectionWidget* Widget;  // 0x0(0x8)

}; 
// DelegateFunction ConZ.TakeDamageDelegate__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FTakeDamageDelegate__DelegateSignature
{
	struct AActor* damageActor;  // 0x0(0x8)
	float Damage;  // 0x8(0x4)
	struct FVector HitLocation;  // 0xC(0xC)
	struct APawn* eventInstigator;  // 0x18(0x8)

}; 
// Function ConZ.PrisonerAnimInstance.GetCurrentLocomotionStateElapsedTime
// Size: 0x4(Inherited: 0x0) 
struct FGetCurrentLocomotionStateElapsedTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.PrisonerAppearance_SkinParams
// Size: 0x38(Inherited: 0x0) 
struct FPrisonerAppearance_SkinParams
{
	struct TArray<struct FPrisonerAppearance_FaceVariation> FaceVariations;  // 0x0(0x10)
	struct TArray<struct FPrisonerAppearance_SkinTone> SkinTones;  // 0x10(0x10)
	struct TArray<struct FPrisonerAppearance_HairColorPreset> HairColorPresets;  // 0x20(0x10)
	int32_t DefaultSkinToneIndex;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// DelegateFunction ConZ.ActionChangedDelegate__DelegateSignature
// Size: 0x2(Inherited: 0x0) 
struct FActionChangedDelegate__DelegateSignature
{
	uint8_t  CurrentAction;  // 0x0(0x1)
	uint8_t  PrevAction;  // 0x1(0x1)

}; 
// ScriptStruct ConZ.UnlockLocation
// Size: 0x30(Inherited: 0x0) 
struct FUnlockLocation
{
	struct FTransform Transform;  // 0x0(0x30)

}; 
// Function ConZ.AmmunitionItem.SetAmmoCount
// Size: 0x8(Inherited: 0x0) 
struct FSetAmmoCount
{
	int32_t Count;  // 0x0(0x4)
	uint8_t  broadcastRPCType;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.ComplexAnimal2.ChangeSpeed
// Size: 0x4(Inherited: 0x0) 
struct FChangeSpeed
{
	float pace;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.FishStateParameters
// Size: 0x10(Inherited: 0x0) 
struct FFishStateParameters
{
	float MaxSpeed;  // 0x0(0x4)
	float Acceleration;  // 0x4(0x4)
	float Deceleration;  // 0x8(0x4)
	float TurnSpeed;  // 0xC(0x4)

}; 
// DelegateFunction ConZ.ItemContainer.OnItemContainerUnlocked__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnItemContainerUnlocked__DelegateSignature
{
	struct AItemContainer* ItemContainer;  // 0x0(0x8)

}; 
// Function ConZ.PhotoModePawn.Client_Initialize
// Size: 0x8(Inherited: 0x0) 
struct FClient_Initialize
{
	struct AActor* Target;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.AddAttachment
// Size: 0x10(Inherited: 0x0) 
struct FAddAttachment
{
	struct AWeaponAttachment* Attachment;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool attach : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool removeExistingOnTheSameMountType : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// Function ConZ.Objective.Client_ShowWaypointWidget
// Size: 0x10(Inherited: 0x0) 
struct FClient_ShowWaypointWidget
{
	struct AActor* targetActor;  // 0x0(0x8)
	struct AActor* actorToTieLifetime;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.AquaticLifeSpawningVolumeDescription
// Size: 0x68(Inherited: 0x0) 
struct FAquaticLifeSpawningVolumeDescription
{
	char pad_0[32];  // 0x0(0x20)
	struct UFishSpeciesPreset* FishSpeciesPreset;  // 0x20(0x8)
	struct UFishSpawningPreset* FishSpawningPreset;  // 0x28(0x8)
	char pad_48[56];  // 0x30(0x38)

}; 
// Function ConZ.UserProfile.SetAuthorityInfo
// Size: 0x40(Inherited: 0x0) 
struct FSetAuthorityInfo
{
	struct FUserProfileAuthorityInfo Value;  // 0x0(0x40)

}; 
// Function ConZ.Weapon.AddAttachmentLocal
// Size: 0x10(Inherited: 0x0) 
struct FAddAttachmentLocal
{
	struct AWeaponAttachment* Attachment;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool attach : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ItemUserWidget.OnItemSelectionChanged
// Size: 0x1(Inherited: 0x0) 
struct FOnItemSelectionChanged
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool selected : 1;  // 0x0(0x1)

}; 
// Function ConZ.PlayerRpcChannel.Chat_Client_UpdatePlayerArgumentCompletionCache
// Size: 0x10(Inherited: 0x0) 
struct FChat_Client_UpdatePlayerArgumentCompletionCache
{
	struct TArray<struct FString> completions;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.PrisonerInjuryTypeLikelihoods
// Size: 0x20(Inherited: 0x0) 
struct FPrisonerInjuryTypeLikelihoods
{
	struct FString Name;  // 0x0(0x10)
	float BoneInjuryLikelihood;  // 0x10(0x4)
	float MuscleInjuryLikelihood;  // 0x14(0x4)
	float OrganInjuryLikelihood;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// DelegateFunction ConZ.Weapon.AttachmentAddedSignature__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FAttachmentAddedSignature__DelegateSignature
{
	struct AWeapon* sender;  // 0x0(0x8)
	struct AWeaponAttachment* Attachment;  // 0x8(0x8)

}; 
// DelegateFunction ConZ.Weapon.AttachmentRemovedSignature__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FAttachmentRemovedSignature__DelegateSignature
{
	struct AWeapon* sender;  // 0x0(0x8)
	struct AWeaponAttachment* Attachment;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.ProjectileArrowData
// Size: 0x20(Inherited: 0x0) 
struct FProjectileArrowData
{
	UObject* AmmunitionArrowClass;  // 0x0(0x8)
	float ItemsHealth;  // 0x8(0x4)
	float StiffnessFactor;  // 0xC(0x4)
	float FlightRotationCorrectionSpeed;  // 0x10(0x4)
	float DeviationDegrees;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool IsPartOfEvent : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.BuildingCraftingPanelBase.OnRecipeClicked
// Size: 0x8(Inherited: 0x0) 
struct FOnRecipeClicked
{
	struct UCraftingRecipeWidget* Widget;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.CanAddAttachment
// Size: 0x10(Inherited: 0x0) 
struct FCanAddAttachment
{
	struct AWeaponAttachment* Attachment;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Weapon.RequestClearMalfunction
// Size: 0x1(Inherited: 0x0) 
struct FRequestClearMalfunction
{
	uint8_t  malfunction;  // 0x0(0x1)

}; 
// Function ConZ.FishingRod.GetFishingRodOwner
// Size: 0x8(Inherited: 0x0) 
struct FGetFishingRodOwner
{
	struct APrisoner* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.HandheldLightItem.GetCurrentLightAngle
// Size: 0x4(Inherited: 0x0) 
struct FGetCurrentLightAngle
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.BoatParametersPerMovementPace_Deprecated
// Size: 0x18(Inherited: 0x0) 
struct FBoatParametersPerMovementPace_Deprecated
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsValid : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float BaseMaxForwardSpeed;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool CanReverse : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float BaseMaxReverseSpeed;  // 0xC(0x4)
	float MinPrisonerStrength;  // 0x10(0x4)
	float ThrottleMultiplier;  // 0x14(0x4)

}; 
// Function ConZ.FishingRod.NetMulticast_SetHookBitten
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_SetHookBitten
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UFishSpeciesData* speciesData;  // 0x8(0x8)

}; 
// Function ConZ.GameEventBase.ChooseSpawnLocation
// Size: 0x18(Inherited: 0x0) 
struct FChooseSpawnLocation
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	struct FVector ReturnValue;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ConZ.CharacterMeshMaterialOverride
// Size: 0x78(Inherited: 0x0) 
struct FCharacterMeshMaterialOverride
{
	struct FGameplayTagQuery Condition;  // 0x0(0x48)
	struct FName MaterialSlot;  // 0x48(0x8)
	struct TSoftObjectPtr<UMaterialInstance> OverrideMaterial;  // 0x50(0x28)

}; 
// ScriptStruct ConZ.FireShotProjectileDescription
// Size: 0x1(Inherited: 0x0) 
struct FFireShotProjectileDescription
{
	char pad_0[1];  // 0x0(0x1)

}; 
// Function ConZ.GameEventBase.AssignParticipantTeam
// Size: 0x10(Inherited: 0x0) 
struct FAssignParticipantTeam
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Weapon.ShouldPlayCasingEjectedSound
// Size: 0x1(Inherited: 0x0) 
struct FShouldPlayCasingEjectedSound
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.ConZGameInstance.GetDedicatedServerRequest
// Size: 0x8(Inherited: 0x0) 
struct FGetDedicatedServerRequest
{
	struct UDedicatedServerRequest* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.FishingRod.OnFishingActionAnimNotify
// Size: 0x1(Inherited: 0x0) 
struct FOnFishingActionAnimNotify
{
	uint8_t  notifyType;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.MovableCollisionFieldMoveInfo
// Size: 0x8(Inherited: 0x0) 
struct FMovableCollisionFieldMoveInfo
{
	float Duration;  // 0x0(0x4)
	uint8_t  curveType;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.FishingBarWidget.GetProgressPercentage
// Size: 0x4(Inherited: 0x0) 
struct FGetProgressPercentage
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Weapon.RemoveAttachmentLocal
// Size: 0x8(Inherited: 0x0) 
struct FRemoveAttachmentLocal
{
	struct AWeaponAttachment* Attachment;  // 0x0(0x8)

}; 
// Function ConZ.GameEventBase.AwardParticipant
// Size: 0x10(Inherited: 0x0) 
struct FAwardParticipant
{
	int32_t Index;  // 0x0(0x4)
	struct FGameEventRewardPoints reward;  // 0x4(0xC)

}; 
// Function ConZ.PlayerRpcChannel.Lockpickable_Server_TriggerFailurePenalty
// Size: 0x10(Inherited: 0x0) 
struct FLockpickable_Server_TriggerFailurePenalty
{
	struct UObject* Lockpickable;  // 0x0(0x8)
	struct APrisoner* triggeringPrisoner;  // 0x8(0x8)

}; 
// Function ConZ.FishingRod.Server_CheckIfFishBitBait
// Size: 0xC(Inherited: 0x0) 
struct FServer_CheckIfFishBitBait
{
	struct FVector Location;  // 0x0(0xC)

}; 
// ScriptStruct ConZ.HitReactLandingData
// Size: 0x28(Inherited: 0x0) 
struct FHitReactLandingData
{
	float MinImpactSpeedToReact;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UAnimMontage* MontageToPlay;  // 0x8(0x8)
	float RegainControlDurationMultiplier;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool CanEverGoToRagdoll : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	float MinImpactSpeedForRagdoll;  // 0x18(0x4)
	float MinRagdollDuration;  // 0x1C(0x4)
	float MaxRagdollDuration;  // 0x20(0x4)
	float RagdollDurationPerSpeedUnit;  // 0x24(0x4)

}; 
// ScriptStruct ConZ.MeleeSkillAttack
// Size: 0x78(Inherited: 0x0) 
struct FMeleeSkillAttack
{
	struct FGameplayTagContainer AttackTypes;  // 0x0(0x20)
	struct FGameplayTagContainer IgnoreReason;  // 0x20(0x20)
	struct UAnimMontage* Montage;  // 0x40(0x8)
	struct UAnimMontage* MontageFP;  // 0x48(0x8)
	struct FFloatInterval PitchRange;  // 0x50(0x8)
	float MaxDistance;  // 0x58(0x4)
	float MinDistance;  // 0x5C(0x4)
	float MinStamina;  // 0x60(0x4)
	float OrientToTargetSpeedFactor;  // 0x64(0x4)
	float RegainControlDurationMultiplier;  // 0x68(0x4)
	float StaminaDrainMultiplier;  // 0x6C(0x4)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool CanBeUsedAsInitialAttack : 1;  // 0x70(0x1)
	char pad_113_1 : 7;  // 0x71(0x1)
	bool CanBeUsedToCloseLargeDistanceToTarget : 1;  // 0x71(0x1)
	char pad_114_1 : 7;  // 0x72(0x1)
	bool Solo : 1;  // 0x72(0x1)
	char pad_115_1 : 7;  // 0x73(0x1)
	bool Mute : 1;  // 0x73(0x1)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool IsAlwaysCandidate : 1;  // 0x74(0x1)
	char pad_117[3];  // 0x75(0x3)

}; 
// Function ConZ.FishingRod.Server_CleanupTrophyState
// Size: 0x1(Inherited: 0x0) 
struct FServer_CleanupTrophyState
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool keptFish : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.SearchItemSpawnerPresetArray
// Size: 0x10(Inherited: 0x0) 
struct FSearchItemSpawnerPresetArray
{
	struct TArray<UItemSpawnerPreset*> ItemSpawnerPresets;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.PrisonerAppearance_IrisColor
// Size: 0x30(Inherited: 0x0) 
struct FPrisonerAppearance_IrisColor
{
	struct FLinearColor PreviewColor;  // 0x0(0x10)
	struct FVector4 IrisColor;  // 0x10(0x10)
	uint8_t  ColorName;  // 0x20(0x1)
	char pad_33[15];  // 0x21(0xF)

}; 
// Function ConZ.FishingRod.Server_ReleaseCastingObject
// Size: 0x20(Inherited: 0x0) 
struct FServer_ReleaseCastingObject
{
	struct FVector Location;  // 0x0(0xC)
	struct FVector Direction;  // 0xC(0xC)
	float castingPower;  // 0x18(0x4)
	uint8_t  nextState;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// Function ConZ.FishingRod.Server_SetCastPower
// Size: 0x4(Inherited: 0x0) 
struct FServer_SetCastPower
{
	float Value;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.Inv2021_InventoryPositionObjectRepHelper
// Size: 0x18(Inherited: 0x0) 
struct FInv2021_InventoryPositionObjectRepHelper
{
	char pad_0[24];  // 0x0(0x18)

}; 
// Function ConZ.FishingRod.Server_SpawnCaughtFish
// Size: 0x18(Inherited: 0x0) 
struct FServer_SpawnCaughtFish
{
	AActor* caughtFishClass;  // 0x0(0x8)
	uint8_t  FishSpecies;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float caughtFishMass;  // 0xC(0x4)
	float caughtFishSize;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.DeactivateFacialExpressionOnGameThread
// Size: 0x1(Inherited: 0x0) 
struct FDeactivateFacialExpressionOnGameThread
{
	uint8_t  facialExpression;  // 0x0(0x1)

}; 
// Function ConZ.ClothesItem.GetCapacityY
// Size: 0x4(Inherited: 0x0) 
struct FGetCapacityY
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ClothesItem.GetWarmth
// Size: 0x4(Inherited: 0x0) 
struct FGetWarmth
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.ConZWeaponDescRow
// Size: 0x38(Inherited: 0x8) 
struct FConZWeaponDescRow : public FTableRowBase
{
	float Damage;  // 0x8(0x4)
	float DamageInGameEvent;  // 0xC(0x4)
	struct FTargetTypeDamageMultiplier TargetTypeMultiplier;  // 0x10(0x10)
	float Energy;  // 0x20(0x4)
	float SharpnessSlash;  // 0x24(0x4)
	float SharpnessPierce;  // 0x28(0x4)
	uint8_t  ImpactSoundCategory;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	struct UProjectileImpactEffects* ImpactEffects;  // 0x30(0x8)

}; 
// Function ConZ.VoiceChatComponent.GetAllVoiceChatComponentsInRange
// Size: 0x10(Inherited: 0x0) 
struct FGetAllVoiceChatComponentsInRange
{
	struct TArray<struct UVoiceChatComponent*> pawnList;  // 0x0(0x10)

}; 
// Function ConZ.ClothesItem.SetDirtiness
// Size: 0x4(Inherited: 0x0) 
struct FSetDirtiness
{
	float dirtiness;  // 0x0(0x4)

}; 
// DelegateFunction ConZ.NightVisionGogglesItem.ActivatedChangedEvent__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FActivatedChangedEvent__DelegateSignature
{
	struct ANightVisionGogglesItem* sender;  // 0x0(0x8)

}; 
// Function ConZ.WeaponAttachmentFlashlight.OnComponentDeactivated
// Size: 0x8(Inherited: 0x0) 
struct FOnComponentDeactivated
{
	struct UActorComponent* Component;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PhysicalSurfaceData
// Size: 0x1C(Inherited: 0x0) 
struct FPhysicalSurfaceData
{
	float DirtinessFactor;  // 0x0(0x4)
	float WetnessFactor;  // 0x4(0x4)
	float LandingImpactVelocityModifier;  // 0x8(0x4)
	float NoiseLoudnessModifier;  // 0xC(0x4)
	float FootstepEnhancerChance;  // 0x10(0x4)
	float FootwearDamageMultiplier;  // 0x14(0x4)
	float FootAbrasionsMultiplier;  // 0x18(0x4)

}; 
// Function ConZ.ItemActionSequence.CanBeCanceled
// Size: 0x1(Inherited: 0x0) 
struct FCanBeCanceled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.GetFiringBodyWeaponAnimation
// Size: 0x10(Inherited: 0x0) 
struct FGetFiringBodyWeaponAnimation
{
	struct FBodyWeaponAnimation ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.ObjectConditionContainer
// Size: 0x10(Inherited: 0x0) 
struct FObjectConditionContainer
{
	struct TArray<UObject*> _objectConditions;  // 0x0(0x10)

}; 
// DelegateFunction ConZ.TriggerComponent.TriggeredEvent__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FTriggeredEvent__DelegateSignature
{
	struct FTriggeredEventData eventData;  // 0x0(0x10)

}; 
// Function ConZ.PrisonerSkillComponent.HighlightItemOnClient
// Size: 0x8(Inherited: 0x0) 
struct FHighlightItemOnClient
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.InteractionStruct
// Size: 0x98(Inherited: 0x0) 
struct FInteractionStruct
{
	uint8_t  interactionType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FString InteractionCaption;  // 0x8(0x10)
	char pad_24[128];  // 0x18(0x80)

}; 
// Function ConZ.WeaponAttachmentMagazine.AddAmmoSingle
// Size: 0x18(Inherited: 0x0) 
struct FAddAmmoSingle
{
	struct FAmmunitionData ammo;  // 0x0(0x18)

}; 
// Function ConZ.Weapon.CanBeginFiringSequenceWithMalfunction
// Size: 0x2(Inherited: 0x0) 
struct FCanBeginFiringSequenceWithMalfunction
{
	uint8_t  malfunction;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// Function ConZ.Weapon.CanFireAgain
// Size: 0x1(Inherited: 0x0) 
struct FCanFireAgain
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.CanReloadUsingData
// Size: 0x38(Inherited: 0x0) 
struct FCanReloadUsingData
{
	struct FWeaponReloadData Data;  // 0x0(0x30)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ReturnValue : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function ConZ.MissionManager.UntrackMission
// Size: 0x1(Inherited: 0x0) 
struct FUntrackMission
{
	uint8_t  MissionType;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.CanSwitchFiringMode
// Size: 0x1(Inherited: 0x0) 
struct FCanSwitchFiringMode
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.ComplexAnimal2.Eat
// Size: 0x4(Inherited: 0x0) 
struct FEat
{
	float Time;  // 0x0(0x4)

}; 
// Function ConZ.Weapon.FindReloadData
// Size: 0x48(Inherited: 0x0) 
struct FFindReloadData
{
	struct TArray<struct AItem*> Items;  // 0x0(0x10)
	struct FWeaponReloadData reloadData;  // 0x10(0x30)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool ReturnValue : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)

}; 
// Function ConZ.TrashNamedSliderWidget.GetMaxValue
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxValue
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.ItemContainersReplicationHelper
// Size: 0x70(Inherited: 0x0) 
struct FItemContainersReplicationHelper
{
	struct TMap<struct FString, struct FItemContainerRepData> ItemContainerData;  // 0x0(0x50)
	char pad_80[32];  // 0x50(0x20)

}; 
// Function ConZ.WeaponAttachmentMagazine.GetAmmoCount
// Size: 0x4(Inherited: 0x0) 
struct FGetAmmoCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.CharacterMeshMorphTarget
// Size: 0x50(Inherited: 0x0) 
struct FCharacterMeshMorphTarget
{
	struct FGameplayTagQuery Condition;  // 0x0(0x48)
	float Value;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)

}; 
// ScriptStruct ConZ.AnimalActionMontageData
// Size: 0x18(Inherited: 0x0) 
struct FAnimalActionMontageData
{
	struct UAnimMontage* SleepMontage;  // 0x0(0x8)
	struct UAnimMontage* EatMontage;  // 0x8(0x8)
	struct UAnimMontage* IntimidateMontage;  // 0x10(0x8)

}; 
// Function ConZ.Weapon.GetAmmoTypeString
// Size: 0x10(Inherited: 0x0) 
struct FGetAmmoTypeString
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.MeleeSkill.GetPrimaryIdleAnimationTP
// Size: 0x8(Inherited: 0x0) 
struct FGetPrimaryIdleAnimationTP
{
	struct UAnimSequenceBase* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.GetAmmunitionItemClass
// Size: 0x8(Inherited: 0x0) 
struct FGetAmmunitionItemClass
{
	UObject* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.RequestSpamFilter
// Size: 0x14(Inherited: 0x0) 
struct FRequestSpamFilter
{
	char pad_0[20];  // 0x0(0x14)

}; 
// ScriptStruct ConZ.ZombieRelaxedStanceAnimations
// Size: 0x8(Inherited: 0x0) 
struct FZombieRelaxedStanceAnimations
{
	struct UAnimSequenceBase* WalkLoopAnimation;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerHUD.ShouldShowExtendedWidgetTooltip
// Size: 0x1(Inherited: 0x0) 
struct FShouldShowExtendedWidgetTooltip
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.GetFiringMontage
// Size: 0x10(Inherited: 0x0) 
struct FGetFiringMontage
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool isLastShot : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UAnimMontage* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.Weapon.GetInternalMagazineAmmoCount
// Size: 0x4(Inherited: 0x0) 
struct FGetInternalMagazineAmmoCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.PrisonerBodyOrganGroupsVsSeverityKey
// Size: 0x60(Inherited: 0x0) 
struct FPrisonerBodyOrganGroupsVsSeverityKey
{
	struct FFloatRange SeverityRange;  // 0x0(0x10)
	struct TSet<uint8_t > Values;  // 0x10(0x50)

}; 
// Function ConZ.Weapon.GetInternalMagazineSpace
// Size: 0x4(Inherited: 0x0) 
struct FGetInternalMagazineSpace
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ItemAction.Begin
// Size: 0x4(Inherited: 0x0) 
struct FBegin
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.GuardedZoneManagerDescription
// Size: 0x40(Inherited: 0x0) 
struct FGuardedZoneManagerDescription
{
	struct TArray<struct FSentrySpawnerDescription> _sentrySpawners;  // 0x0(0x10)
	char pad_16[48];  // 0x10(0x30)

}; 
// Function ConZ.Animal2.UnpackUint8
// Size: 0x18(Inherited: 0x0) 
struct FUnpackUint8
{
	char pack;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<bool> B;  // 0x8(0x10)

}; 
// Function ConZ.Weapon.Server_PlayChamberEffects
// Size: 0x1(Inherited: 0x0) 
struct FServer_PlayChamberEffects
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool playDryFireSound : 1;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.GetIsChambering
// Size: 0x1(Inherited: 0x0) 
struct FGetIsChambering
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.CustomZoneSettingsConfigurationsList.UpdateConfiguration
// Size: 0x48(Inherited: 0x0) 
struct FUpdateConfiguration
{
	int32_t ConfigurationIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FCustomZoneConfiguration configuration;  // 0x8(0x40)

}; 
// Function ConZ.PrisonerMovementComponent.CanClimbWindow
// Size: 0x1(Inherited: 0x0) 
struct FCanClimbWindow
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.MeshHitZones.IsHitZoneActive
// Size: 0x8(Inherited: 0x0) 
struct FIsHitZoneActive
{
	int32_t zoneIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.Weapon.GetIsScopingAllowed
// Size: 0x1(Inherited: 0x0) 
struct FGetIsScopingAllowed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Objective.IsStarted
// Size: 0x1(Inherited: 0x0) 
struct FIsStarted
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.ConZSquad.CanMemberEditEmblem
// Size: 0x10(Inherited: 0x0) 
struct FCanMemberEditEmblem
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Weapon.GetMagazine
// Size: 0x8(Inherited: 0x0) 
struct FGetMagazine
{
	struct AWeaponAttachmentMagazine* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.WeaponMalfunctionProbability
// Size: 0x8(Inherited: 0x0) 
struct FWeaponMalfunctionProbability
{
	uint8_t  malfunction;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Probability;  // 0x4(0x4)

}; 
// Function ConZ.ItemActionSequence.CanEverBeCanceled
// Size: 0x1(Inherited: 0x0) 
struct FCanEverBeCanceled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.WeaponMalfunctionEventDescription
// Size: 0x8(Inherited: 0x0) 
struct FWeaponMalfunctionEventDescription
{
	char pad_0[8];  // 0x0(0x8)

}; 
// Function ConZ.FireworksItem.SetIsFiring
// Size: 0x1(Inherited: 0x0) 
struct FSetIsFiring
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsFiring : 1;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.GetMaxAmmoCount
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxAmmoCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.WeaponBowAimOffsets
// Size: 0x18(Inherited: 0x0) 
struct FWeaponBowAimOffsets
{
	struct UBlendSpace* DrawPercentage[3];  // 0x0(0x18)

}; 
// Function ConZ.ElectricityGeneratorItem.RangedResourceProvider_ResourceAmountChanged
// Size: 0x10(Inherited: 0x0) 
struct FRangedResourceProvider_ResourceAmountChanged
{
	struct URangedResourceProviderComponent* Component;  // 0x0(0x8)
	float Value;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Weapon.GetProbabilityForMalfunction
// Size: 0xC(Inherited: 0x0) 
struct FGetProbabilityForMalfunction
{
	uint8_t  malfunction;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float normalizedHealth;  // 0x4(0x4)
	float ReturnValue;  // 0x8(0x4)

}; 
// Function ConZ.Weapon.GetShakiness
// Size: 0x4(Inherited: 0x0) 
struct FGetShakiness
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Weapon.GetSpread
// Size: 0x4(Inherited: 0x0) 
struct FGetSpread
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.BaseDamageInteractionEvent
// Size: 0x98(Inherited: 0x8) 
struct FBaseDamageInteractionEvent : public FBaseInteractionEvent
{
	char pad_8[144];  // 0x8(0x90)

}; 
// Function ConZ.UserProfile.GetType
// Size: 0x1(Inherited: 0x0) 
struct FGetType
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Running
// Size: 0xC(Inherited: 0x0) 
struct FPrisonerMovementSettings_Ground_Standing_Running
{
	struct FPrisonerGroundMovementParameters Default;  // 0x0(0xC)

}; 
// Function ConZ.Weapon.GetUseMuzzleDirectionForShooting
// Size: 0x1(Inherited: 0x0) 
struct FGetUseMuzzleDirectionForShooting
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.GetUseWeaponAnimationPose
// Size: 0x1(Inherited: 0x0) 
struct FGetUseWeaponAnimationPose
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.MissionItemInfo
// Size: 0x38(Inherited: 0x0) 
struct FMissionItemInfo
{
	struct TSoftObjectPtr<AActor> ItemLocation;  // 0x0(0x28)
	AItem* ItemClass;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ShouldRemove : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	float TimeToDestroy;  // 0x34(0x4)

}; 
// Function ConZ.Weapon.GetWeaponOwner
// Size: 0x8(Inherited: 0x0) 
struct FGetWeaponOwner
{
	struct APrisoner* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PrisonerMaxMovementPaceVsSeverityKey
// Size: 0x14(Inherited: 0x0) 
struct FPrisonerMaxMovementPaceVsSeverityKey
{
	struct FFloatRange SeverityRange;  // 0x0(0x10)
	uint8_t  MaxMovementPace;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// ScriptStruct ConZ.HalloweenSacrificePitRequiredItemVariants
// Size: 0x10(Inherited: 0x0) 
struct FHalloweenSacrificePitRequiredItemVariants
{
	struct TArray<struct TSoftClassPtr<UObject>> Variants;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.CraftingSlotRequirement
// Size: 0x68(Inherited: 0x0) 
struct FCraftingSlotRequirement
{
	struct FString SlotName;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool LimitIngredientTypes : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct TArray<UCraftingIngredientType*> IngredientTypes;  // 0x18(0x10)
	uint8_t  ConsumptionHint;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	int32_t AmountNeeded;  // 0x2C(0x4)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool OverrideAmountNeededSkill : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)
	struct FCraftingSlotAmountNeededPerSkillLevel AmountNeededSkillLevelOverride;  // 0x38(0x20)
	struct TArray<struct FCraftingIngredientTypeModifier> IngredientTypeModifiers;  // 0x58(0x10)

}; 
// Function ConZ.ItemSelectionWidget.Get_ItemName_ColorAndOpacity
// Size: 0x28(Inherited: 0x0) 
struct FGet_ItemName_ColorAndOpacity
{
	struct FSlateColor ReturnValue;  // 0x0(0x28)

}; 
// Function ConZ.Weapon.GetZeroRange
// Size: 0x4(Inherited: 0x0) 
struct FGetZeroRange
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Weapon.HasAmmoToUnload
// Size: 0x1(Inherited: 0x0) 
struct FHasAmmoToUnload
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.WorldStatics.TransformWorldPositionToTargetFOV
// Size: 0x28(Inherited: 0x0) 
struct FTransformWorldPositionToTargetFOV
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float FieldOfView;  // 0x8(0x4)
	struct FVector WorldPosition;  // 0xC(0xC)
	struct FVector ReturnValue;  // 0x18(0xC)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function ConZ.UIStatics.FilterNonNumbersFromString
// Size: 0x20(Inherited: 0x0) 
struct FFilterNonNumbersFromString
{
	struct FString String;  // 0x0(0x10)
	struct FString ReturnValue;  // 0x10(0x10)

}; 
// Function ConZ.ReplenishableResourceManager.NetMulticast_SetReplenishableResourceAmount
// Size: 0x18(Inherited: 0x0) 
struct FNetMulticast_SetReplenishableResourceAmount
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FPackedLocation ID;  // 0x8(0x8)
	float Value;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ConZ.MetabolismRadialProgressBarFontSettings
// Size: 0x14(Inherited: 0x0) 
struct FMetabolismRadialProgressBarFontSettings
{
	int32_t FontSize;  // 0x0(0x4)
	struct FMargin FontPadding;  // 0x4(0x10)

}; 
// Function ConZ.Weapon.IsAmmoCompatible
// Size: 0xC(Inherited: 0x0) 
struct FIsAmmoCompatible
{
	struct FGameplayTag AmmunitionTag;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// ScriptStruct ConZ.SentrySpawnerDescription
// Size: 0x68(Inherited: 0x0) 
struct FSentrySpawnerDescription
{
	char pad_0[8];  // 0x0(0x8)
	ASentry2* _sentryClass;  // 0x8(0x8)
	char pad_16[88];  // 0x10(0x58)

}; 
// Function ConZ.Weapon.IsAmmoInMagazineCompatible
// Size: 0x10(Inherited: 0x0) 
struct FIsAmmoInMagazineCompatible
{
	struct AWeaponAttachmentMagazine* magazine;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Weapon.IsChamberOpened
// Size: 0x1(Inherited: 0x0) 
struct FIsChamberOpened
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.FireworksItem.IsFiring
// Size: 0x1(Inherited: 0x0) 
struct FIsFiring
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.CookingUtilitySlotArray
// Size: 0x1C0(Inherited: 0x108) 
struct FCookingUtilitySlotArray : public FFastArraySerializer
{
	struct TArray<struct FCookingUtilitySlotInstance> _slots;  // 0x108(0x10)
	char pad_280[168];  // 0x118(0xA8)

}; 
// ScriptStruct ConZ.CharacterStatsItem
// Size: 0x48(Inherited: 0x0) 
struct FCharacterStatsItem
{
	int32_t Rank;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString PlayerName;  // 0x8(0x10)
	struct FCharacterStats CharacterStats;  // 0x18(0x30)

}; 
// Function ConZ.DialogueContainerWidget.GetHideAvatarAnimation
// Size: 0x8(Inherited: 0x0) 
struct FGetHideAvatarAnimation
{
	struct UWidgetAnimation* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.IsInGameEvent
// Size: 0x1(Inherited: 0x0) 
struct FIsInGameEvent
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.NetMulticast_PlayChamberEffects
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_PlayChamberEffects
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool playDryFireSound : 1;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.NetMulticast_PlayFiringEffects
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_PlayFiringEffects
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool isLastShot : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventBorder.Multicast_SetRadius
// Size: 0x4(Inherited: 0x0) 
struct FMulticast_SetRadius
{
	float Radius;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerHUD.IsShowingLoading
// Size: 0x1(Inherited: 0x0) 
struct FIsShowingLoading
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.ZoneConfiguration
// Size: 0x18(Inherited: 0x0) 
struct FZoneConfiguration
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsOutpost : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool IsItemPlacementAllowed : 1;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct TArray<uint8_t > InteractionsToDisable;  // 0x8(0x10)

}; 
// Function ConZ.SquadEditor.OnEmblemUpdate
// Size: 0x8(Inherited: 0x0) 
struct FOnEmblemUpdate
{
	struct UDropdownMenuSelectionWidget* Widget;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.MapHUDFlagsObject
// Size: 0xC0(Inherited: 0x18) 
struct FMapHUDFlagsObject : public FMapHUDObject
{
	struct UTexture* _flagPositionOuterRingTexture;  // 0x18(0x8)
	struct FLinearColor _flagOuterRingColor;  // 0x20(0x10)
	struct FLinearColor _flagHighlightOuterRingColor;  // 0x30(0x10)
	struct UTexture* _flagPositionInnerCircleTexture;  // 0x40(0x8)
	struct FLinearColor _flagInnerCircleColor;  // 0x48(0x10)
	struct FLinearColor _flagHighlightInnerCircleColor;  // 0x58(0x10)
	struct UFont* _flagFont;  // 0x68(0x8)
	struct FLinearColor _flagNameHighlightColor;  // 0x70(0x10)
	struct FLinearColor _flagNameHighlightOutlineColor;  // 0x80(0x10)
	struct FLinearColor _flagNameColor;  // 0x90(0x10)
	struct FLinearColor _flagNameOutlineColor;  // 0xA0(0x10)
	struct FVector2D _flagPositionTextureSize;  // 0xB0(0x8)
	int32_t _flagTextStackOffset;  // 0xB8(0x4)
	char pad_188[4];  // 0xBC(0x4)

}; 
// Function ConZ.TrashNamedSliderWidget.SetLimits
// Size: 0xC(Inherited: 0x0) 
struct FSetLimits
{
	float MinValue;  // 0x0(0x4)
	float MaxValue;  // 0x4(0x4)
	int32_t stepCount;  // 0x8(0x4)

}; 
// Function ConZ.Weapon.NotifyHitOnServer
// Size: 0x9C(Inherited: 0x0) 
struct FNotifyHitOnServer
{
	struct FHitResult HitResult;  // 0x0(0x88)
	struct FVector_NetQuantizeNormal shootDirection;  // 0x88(0xC)
	int32_t randomSeed;  // 0x94(0x4)
	float reticleSpread;  // 0x98(0x4)

}; 
// Function ConZ.RadioCategory.ProvideNextRadioTrack
// Size: 0x8(Inherited: 0x0) 
struct FProvideNextRadioTrack
{
	struct URadioTrack* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.RecipeAvailabilityState
// Size: 0xC8(Inherited: 0x0) 
struct FRecipeAvailabilityState
{
	char pad_0[200];  // 0x0(0xC8)

}; 
// Function ConZ.Vehicle.GetNumVehicleReverseGears
// Size: 0x4(Inherited: 0x0) 
struct FGetNumVehicleReverseGears
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.TextBoxWithLabel.OnTextChanged
// Size: 0x18(Inherited: 0x0) 
struct FOnTextChanged
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function ConZ.HandsHolstersWidget2.OnAttachmentAdded
// Size: 0x10(Inherited: 0x0) 
struct FOnAttachmentAdded
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	struct AWeaponAttachment* Attachment;  // 0x8(0x8)

}; 
// Function ConZ.HandsHolstersWidget2.OnAttachmentRemoved
// Size: 0x10(Inherited: 0x0) 
struct FOnAttachmentRemoved
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	struct AWeaponAttachment* Attachment;  // 0x8(0x8)

}; 
// Function ConZ.Weapon.OnShotFired
// Size: 0x1(Inherited: 0x0) 
struct FOnShotFired
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool isLastShot : 1;  // 0x0(0x1)

}; 
// Function ConZ.CharacterCreationMenu.OnTextNameCommittedInCharacterPanel
// Size: 0x20(Inherited: 0x0) 
struct FOnTextNameCommittedInCharacterPanel
{
	struct FText NewValue;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.WeaponAction.OnWeaponActionAnimNotify
// Size: 0x1(Inherited: 0x0) 
struct FOnWeaponActionAnimNotify
{
	uint8_t  notifyType;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.GameEventParticipantInfo
// Size: 0x78(Inherited: 0x0) 
struct FGameEventParticipantInfo
{
	struct FString UniqueId;  // 0x0(0x10)
	struct TWeakObjectPtr<APrisoner> Prisoner;  // 0x10(0x8)
	struct FString Name;  // 0x18(0x10)
	uint8_t  State;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	int32_t TeamIndex;  // 0x2C(0x4)
	struct TArray<struct UGameEventParticipantStats*> RoundStats;  // 0x30(0x10)
	struct UGameEventParticipantStats* EventStats;  // 0x40(0x8)
	struct TArray<struct APrisoner*> HurtBy;  // 0x48(0x10)
	int32_t RepHelper;  // 0x58(0x4)
	char pad_92[28];  // 0x5C(0x1C)

}; 
// ScriptStruct ConZ.ConZTradeableDescRow
// Size: 0x168(Inherited: 0x8) 
struct FConZTradeableDescRow : public FTableRowBase
{
	struct TSoftClassPtr<UObject> TradeableClass;  // 0x8(0x28)
	struct FPrimaryAssetId PrimaryAssetId;  // 0x30(0x10)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool CanBePurchasedByPlayer : 1;  // 0x40(0x1)
	uint8_t  TradeCategory;  // 0x41(0x1)
	char pad_66[6];  // 0x42(0x6)
	struct TSet<uint8_t > TraderTypes;  // 0x48(0x50)
	float BasePurchasePriceModifier;  // 0x98(0x4)
	float BaseSalePriceReductionModifier;  // 0x9C(0x4)
	uint8_t  PurchaseCurrencyType;  // 0xA0(0x1)
	char pad_161[3];  // 0xA1(0x3)
	int32_t AlternateCurrencyPurchasePrice;  // 0xA4(0x4)
	uint8_t  SpawnType;  // 0xA8(0x1)
	char pad_169[7];  // 0xA9(0x7)
	struct FText TradingEntryCaption;  // 0xB0(0x18)
	struct TSoftObjectPtr<UTexture2D> TradingEntryIconTexture;  // 0xC8(0x28)
	int32_t MaxAmountPurchasedAtOnce;  // 0xF0(0x4)
	char pad_244_1 : 7;  // 0xF4(0x1)
	bool IsStockAmountUnlimited : 1;  // 0xF4(0x1)
	char pad_245[3];  // 0xF5(0x3)
	struct FGameplayTag TradeableFamePointPenaltyGroup;  // 0xF8(0x8)
	int32_t RequiredFamePoints;  // 0x100(0x4)
	struct FGameplayTag TradeableRotationRarity;  // 0x104(0x8)
	char pad_268_1 : 7;  // 0x10C(0x1)
	bool OnlyAvailableAfterPlayerSale : 1;  // 0x10C(0x1)
	char pad_269[3];  // 0x10D(0x3)
	int32_t CustomStockAmountMin;  // 0x110(0x4)
	int32_t CustomStockAmountMax;  // 0x114(0x4)
	UTradeableDiscountCondition* TradeableDiscountCondition;  // 0x118(0x8)
	struct FGameplayTagContainer TraderSearchTypes;  // 0x120(0x20)
	struct FGameplayTagContainer TraderSearchRelated;  // 0x140(0x20)
	char pad_352_1 : 7;  // 0x160(0x1)
	bool IsImmuneToUserOverrides : 1;  // 0x160(0x1)
	char pad_353[7];  // 0x161(0x7)

}; 
// Function ConZ.Weapon.PlayFiringEffects
// Size: 0x1(Inherited: 0x0) 
struct FPlayFiringEffects
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool isLastShot : 1;  // 0x0(0x1)

}; 
// Function ConZ.BondageComponent.GetBondageItem
// Size: 0x8(Inherited: 0x0) 
struct FGetBondageItem
{
	struct AItem* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.WeaponAttachmentMagazine.RemoveAmmo
// Size: 0x18(Inherited: 0x0) 
struct FRemoveAmmo
{
	struct FAmmunitionData ReturnValue;  // 0x0(0x18)

}; 
// Function ConZ.DroneAIController.FollowCharacter
// Size: 0x8(Inherited: 0x0) 
struct FFollowCharacter
{
	struct ACharacter* characterToFollow;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.RemoveAttachmentOnServer
// Size: 0x8(Inherited: 0x0) 
struct FRemoveAttachmentOnServer
{
	struct AWeaponAttachment* Attachment;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.NotificationAndDelay
// Size: 0x10(Inherited: 0x0) 
struct FNotificationAndDelay
{
	struct UNotificationDescription* Notification;  // 0x0(0x8)
	float Delay;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct ConZ.FoliageEffectsData
// Size: 0x18(Inherited: 0x0) 
struct FFoliageEffectsData
{
	struct UAkAudioEvent* StartMovingThroughFoliageAudioEvent;  // 0x0(0x8)
	struct UAkAudioEvent* StopMovingThroughFoliageAudioEvent;  // 0x8(0x8)
	struct UAkAudioEvent* OneShotMovingThroughFoliageAudioEvent;  // 0x10(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Client_ReceiveServerData
// Size: 0xC(Inherited: 0x0) 
struct FClient_ReceiveServerData
{
	int32_t RequestID;  // 0x0(0x4)
	struct FPlayerRpcChannelServerDataResponseNetSerializer Response;  // 0x4(0x8)

}; 
// Function ConZ.Weapon.Server_DropAttachment
// Size: 0x8(Inherited: 0x0) 
struct FServer_DropAttachment
{
	struct AWeaponAttachment* Attachment;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.DcxWheeledVehicleFlatTireWheelConfiguration
// Size: 0x50(Inherited: 0x0) 
struct FDcxWheeledVehicleFlatTireWheelConfiguration
{
	struct FDcxVehicleWheelData FlatTireWheelData;  // 0x0(0x20)
	char pad_32[32];  // 0x20(0x20)
	struct UDcxVehicleTire* FlatTire;  // 0x40(0x8)
	struct UDcxVehicleTire* OriginalTire;  // 0x48(0x8)

}; 
// ScriptStruct ConZ.ScumRadialDamageEvent
// Size: 0x48(Inherited: 0x40) 
struct FScumRadialDamageEvent : public FRadialDamageEvent
{
	char pad_64[8];  // 0x40(0x8)

}; 
// Function ConZ.Weapon.Server_FireShotProjectile
// Size: 0x34(Inherited: 0x0) 
struct FServer_FireShotProjectile
{
	struct FFireShotProjectileData Data;  // 0x0(0x2C)
	struct FFireShotDescription desc;  // 0x2C(0x8)

}; 
// ScriptStruct ConZ.FireShotProjectileData
// Size: 0x2C(Inherited: 0x0) 
struct FFireShotProjectileData
{
	struct FVector StartLocation;  // 0x0(0xC)
	struct FVector_NetQuantizeNormal shootDirection;  // 0xC(0xC)
	int32_t ZeroRange;  // 0x18(0x4)
	float Windage;  // 0x1C(0x4)
	int32_t RandomFactor;  // 0x20(0x4)
	float ConeHalfAngle;  // 0x24(0x4)
	struct FFireShotProjectileDescription Description;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)

}; 
// ScriptStruct ConZ.DcxWheeledVehicleTireEffectProperties
// Size: 0x14(Inherited: 0x0) 
struct FDcxWheeledVehicleTireEffectProperties
{
	struct FVector TireLocalOffset;  // 0x0(0xC)
	char pad_12[8];  // 0xC(0x8)

}; 
// Function ConZ.ThrowingComponent.OnProjectileStopped
// Size: 0x88(Inherited: 0x0) 
struct FOnProjectileStopped
{
	struct FHitResult ImpactResult;  // 0x0(0x88)

}; 
// Function ConZ.Weapon.Server_PlayFiringEffects
// Size: 0x1(Inherited: 0x0) 
struct FServer_PlayFiringEffects
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool isLastShot : 1;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.SetFiringModeOnServer
// Size: 0x1(Inherited: 0x0) 
struct FSetFiringModeOnServer
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// Function ConZ.AttributeMapInterface.SetStringAttribute
// Size: 0x20(Inherited: 0x0) 
struct FSetStringAttribute
{
	struct FString Name;  // 0x0(0x10)
	struct FString Value;  // 0x10(0x10)

}; 
// Function ConZ.Weapon.SetIsScopingAllowed
// Size: 0x1(Inherited: 0x0) 
struct FSetIsScopingAllowed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.AmmunitionItem.GetSpreadMultiplierForWeapon
// Size: 0x10(Inherited: 0x0) 
struct FGetSpreadMultiplierForWeapon
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Weapon.SetLoadedProjectileClass
// Size: 0x8(Inherited: 0x0) 
struct FSetLoadedProjectileClass
{
	AProjectile* projectileClass;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.VehicleAttachmentAlternatorSetup
// Size: 0x8(Inherited: 0x0) 
struct FVehicleAttachmentAlternatorSetup
{
	struct UCurveFloat* RpmChargeCurve;  // 0x0(0x8)

}; 
// Function ConZ.Weapon.SetOverrideUseWeaponAnimationPose
// Size: 0x1(Inherited: 0x0) 
struct FSetOverrideUseWeaponAnimationPose
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.Weapon.SetShouldPlayChamberOpenedIdle
// Size: 0x1(Inherited: 0x0) 
struct FSetShouldPlayChamberOpenedIdle
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventBase.UpdateRanking
// Size: 0x4(Inherited: 0x0) 
struct FUpdateRanking
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function ConZ.GameEventBorder.ChangeState
// Size: 0x8(Inherited: 0x0) 
struct FChangeState
{
	uint8_t  State;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Duration;  // 0x4(0x4)

}; 
// Function ConZ.Weapon.SetUseMuzzleDirectionForShooting
// Size: 0x1(Inherited: 0x0) 
struct FSetUseMuzzleDirectionForShooting
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.WheeledVehicleAnimInstanceProxy
// Size: 0x780(Inherited: 0x770) 
struct FWheeledVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
	char pad_1904[16];  // 0x770(0x10)

}; 
// Function ConZ.Weapon.SetUseWeaponAnimationPose
// Size: 0x1(Inherited: 0x0) 
struct FSetUseWeaponAnimationPose
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.DropZoneSlot.GetOpeningDuration
// Size: 0x4(Inherited: 0x0) 
struct FGetOpeningDuration
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.NetworkStatics.ParseServerIpAndPort
// Size: 0x28(Inherited: 0x0) 
struct FParseServerIpAndPort
{
	struct FString Text;  // 0x0(0x10)
	struct FString Ip;  // 0x10(0x10)
	int32_t Port;  // 0x20(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool ReturnValue : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)

}; 
// ScriptStruct ConZ.CookingFoodProxyMesh
// Size: 0xB0(Inherited: 0x0) 
struct FCookingFoodProxyMesh
{
	struct UStaticMesh* Mesh;  // 0x0(0x8)
	char pad_8[136];  // 0x8(0x88)
	struct UStaticMeshComponent* _meshComponent;  // 0x90(0x8)
	struct UAkComponent* _thermalSoundEffectComponent;  // 0x98(0x8)
	struct UAkAudioEvent* _startCookingEvent;  // 0xA0(0x8)
	struct UAkAudioEvent* _stopCookingEvent;  // 0xA8(0x8)

}; 
// ScriptStruct ConZ.AnimalSpawnData
// Size: 0x2C(Inherited: 0x0) 
struct FAnimalSpawnData
{
	float NextClueDistanceMin;  // 0x0(0x4)
	float NextClueDistanceMax;  // 0x4(0x4)
	int32_t NumCluesMin;  // 0x8(0x4)
	int32_t NumCluesMax;  // 0xC(0x4)
	int32_t PackSizeMin;  // 0x10(0x4)
	int32_t PackSizeMax;  // 0x14(0x4)
	float NextClueMaxHalfAngleDeg;  // 0x18(0x4)
	struct FAnimalSpawnWeigthsPerDayPeriod SpawnWeights;  // 0x1C(0x10)

}; 
// Function ConZ.Weapon.SetZeroRangeOnServer
// Size: 0x4(Inherited: 0x0) 
struct FSetZeroRangeOnServer
{
	int32_t ZeroRange;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.CookingUtilityFilterDropdownEntryData
// Size: 0x20(Inherited: 0x0) 
struct FCookingUtilityFilterDropdownEntryData
{
	struct FGameplayTag CookingUtilityTag;  // 0x0(0x8)
	struct FText DisplayName;  // 0x8(0x18)

}; 
// ScriptStruct ConZ.CollisionPointDamageEvent
// Size: 0x160(Inherited: 0xB0) 
struct FCollisionPointDamageEvent : public FScumPointDamageEvent
{
	char pad_176[176];  // 0xB0(0xB0)

}; 
// Function ConZ.PrisonerMovementComponent.DetectWindow
// Size: 0xE0(Inherited: 0x0) 
struct FDetectWindow
{
	struct FWindowInfo Result;  // 0x0(0xD0)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool ReturnValue : 1;  // 0xD0(0x1)
	char pad_209[15];  // 0xD1(0xF)

}; 
// Function ConZ.DropZoneGameEvent.GetKeyCarrier
// Size: 0x8(Inherited: 0x0) 
struct FGetKeyCarrier
{
	struct APrisoner* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ItemAction.CanBegin
// Size: 0x1(Inherited: 0x0) 
struct FCanBegin
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.WeaponActionClearMalfunctionSequence.ShouldClearMalfunctionOnEvent
// Size: 0x3(Inherited: 0x0) 
struct FShouldClearMalfunctionOnEvent
{
	uint8_t  malfunction;  // 0x0(0x1)
	uint8_t  malfunctionEvent;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool ReturnValue : 1;  // 0x2(0x1)

}; 
// ScriptStruct ConZ.ConZBaseRepairAreaDuration
// Size: 0x8(Inherited: 0x0) 
struct FConZBaseRepairAreaDuration
{
	int32_t NumberOfBaseElementsTreshold;  // 0x0(0x4)
	float RepairDuration;  // 0x4(0x4)

}; 
// Function ConZ.WeaponAttachmentMagazine.UpdateAmmunitionMeshes
// Size: 0x18(Inherited: 0x0) 
struct FUpdateAmmunitionMeshes
{
	struct TArray<int32_t> ammoIndices;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool showReversed : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.VehicleEnginePowertrainComponent.BeginIgnitionAttempt
// Size: 0x8(Inherited: 0x0) 
struct FBeginIgnitionAttempt
{
	uint32_t ignitionAttempts;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool willRecoverFromStall : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// ScriptStruct ConZ.WeaponMalfunctionChances
// Size: 0x38(Inherited: 0x0) 
struct FWeaponMalfunctionChances
{
	struct FFloatInterval Value[7];  // 0x0(0x38)

}; 
// Function ConZ.MeleeSkill.GetAimOffsetBlendSpaceFP
// Size: 0x8(Inherited: 0x0) 
struct FGetAimOffsetBlendSpaceFP
{
	struct UBlendSpace* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PlayerPawnBirdInfo
// Size: 0x10(Inherited: 0x0) 
struct FPlayerPawnBirdInfo
{
	int32_t CoastalBirdsinProximity;  // 0x0(0x4)
	int32_t ContinetalBirdsinProximity;  // 0x4(0x4)
	int32_t VirtualAssignedCoastalBirds;  // 0x8(0x4)
	int32_t VirtualAssignedContinentalBirds;  // 0xC(0x4)

}; 
// Function ConZ.PrisonerInventoryComponent.UnEquipClothesItem
// Size: 0x10(Inherited: 0x0) 
struct FUnEquipClothesItem
{
	struct AClothesItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool placeInInventory : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool shouldEverDrop : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// Function ConZ.Chainsaw.Server_SetUseFuelUsagePerHourMultiplierWhenActive
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetUseFuelUsagePerHourMultiplierWhenActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.ParameterVector4
// Size: 0x20(Inherited: 0x10) 
struct FParameterVector4 : public FEditableParameter
{
	struct FVector4 Value;  // 0x10(0x10)

}; 
// ScriptStruct ConZ.FireAnimationData
// Size: 0xC0(Inherited: 0x0) 
struct FFireAnimationData
{
	struct FBodyWeaponAnimation BodyWeaponAnimation;  // 0x0(0x10)
	float TimeBetweenShots;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct FBodyWeaponAnimation BodyWeaponAnimationChamber;  // 0x18(0x10)
	float TimeForChamber;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	UWeaponActionWornOutFiringConditions* Conditions;  // 0x30(0x8)
	struct FRuntimeFloatCurve ProbabilityWeightCurve;  // 0x38(0x88)

}; 
// Function ConZ.TrapItem.NetMulticast_TriggerTrap
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_TriggerTrap
{
	struct FTrapTriggerParams Params;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.BaseBuildingSizeVariation
// Size: 0x18(Inherited: 0x0) 
struct FBaseBuildingSizeVariation
{
	UBaseBuildingComponent* Component;  // 0x0(0x8)
	char pad_8[16];  // 0x8(0x10)

}; 
// ScriptStruct ConZ.WeaponViewKickData
// Size: 0x18(Inherited: 0x0) 
struct FWeaponViewKickData
{
	float PitchMin;  // 0x0(0x4)
	float PitchMax;  // 0x4(0x4)
	float YawMin;  // 0x8(0x4)
	float YawMax;  // 0xC(0x4)
	float PitchDecrementSpeed;  // 0x10(0x4)
	float YawDecrementSpeed;  // 0x14(0x4)

}; 
// ScriptStruct ConZ.SkillExperienceChange
// Size: 0x8(Inherited: 0x0) 
struct FSkillExperienceChange
{
	float ExperienceChange;  // 0x0(0x4)
	float Time;  // 0x4(0x4)

}; 
// Function ConZ.TacticsSkill.ShouldDetectPrisoner
// Size: 0x10(Inherited: 0x0) 
struct FShouldDetectPrisoner
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ConZ.WeaponSpreadItem
// Size: 0xC(Inherited: 0x0) 
struct FWeaponSpreadItem
{
	float Idle;  // 0x0(0x4)
	float Moving;  // 0x4(0x4)
	float SpeedTarget;  // 0x8(0x4)

}; 
// ScriptStruct ConZ.WeaponAttachmentAnimations
// Size: 0x20(Inherited: 0x0) 
struct FWeaponAttachmentAnimations
{
	struct FBodyWeaponAnimation Add;  // 0x0(0x10)
	struct FBodyWeaponAnimation Remove;  // 0x10(0x10)

}; 
// Function ConZ.PrisonerHUD.GetHudWidgetCanvasPanel
// Size: 0x8(Inherited: 0x0) 
struct FGetHudWidgetCanvasPanel
{
	struct UCanvasPanel* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.WorldCraftingMarkerWidget.ChangeMode
// Size: 0x1(Inherited: 0x0) 
struct FChangeMode
{
	uint8_t  mode;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerTreatmentUIController.OnInventoryContainerAddedOrRemoved
// Size: 0x10(Inherited: 0x0) 
struct FOnInventoryContainerAddedOrRemoved
{
	struct UPrisonerInventoryComponent* sender;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.ParticleCollisionDecalData
// Size: 0x18(Inherited: 0x0) 
struct FParticleCollisionDecalData
{
	struct UMaterialInterface* Decal;  // 0x0(0x8)
	float MinSize;  // 0x8(0x4)
	float MaxSize;  // 0xC(0x4)
	float MinLifetime;  // 0x10(0x4)
	float MaxLifetime;  // 0x14(0x4)

}; 
// Function ConZ.ResourceLockingManager.NetMulticast_LockResource
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_LockResource
{
	int32_t dataVersion;  // 0x0(0x4)
	struct FResourceNetworkGUID LockOwnerGUID;  // 0x4(0x4)
	struct FResourceNetworkGUID ResourceGUID;  // 0x8(0x4)
	int32_t ResourceId;  // 0xC(0x4)

}; 
// Function ConZ.PrisonerSkillComponent.UpdateIsInFocusModeOnServer
// Size: 0x1(Inherited: 0x0) 
struct FUpdateIsInFocusModeOnServer
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool isInFocus : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerHUD.GetWaypointScreenWidget
// Size: 0x8(Inherited: 0x0) 
struct FGetWaypointScreenWidget
{
	struct UWaypointScreenWidget* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.FortificationMarkerParams
// Size: 0x30(Inherited: 0x0) 
struct FFortificationMarkerParams
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsValid : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t MarkerIndex;  // 0x4(0x4)
	struct UStaticMesh* Mesh;  // 0x8(0x8)
	struct FVector Location;  // 0x10(0xC)
	struct FRotator Rotation;  // 0x1C(0xC)
	float Scale;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function ConZ.PrisonerHUD.ReceiveVehicleMarkerData
// Size: 0x8(Inherited: 0x0) 
struct FReceiveVehicleMarkerData
{
	struct UVehicleMarkersData* Data;  // 0x0(0x8)

}; 
// Function ConZ.DebugRpcChannel.Server_Farming_ApplyFungicide
// Size: 0x10(Inherited: 0x0) 
struct FServer_Farming_ApplyFungicide
{
	struct AGarden* Garden;  // 0x0(0x8)
	int32_t Slot;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// DelegateFunction ConZ.PrisonerHUD.ShouldShowExtendedWidgetTooltipChanged__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FShouldShowExtendedWidgetTooltipChanged__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ShouldShowExtendedWidgetTooltip : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.MapHUDVehiclesObject
// Size: 0xC0(Inherited: 0x18) 
struct FMapHUDVehiclesObject : public FMapHUDObject
{
	struct UTexture* _vehiclePositionOuterRingTexture;  // 0x18(0x8)
	struct FLinearColor _vehicleOuterRingColor;  // 0x20(0x10)
	struct FLinearColor _vehicleHighlightOuterRingColor;  // 0x30(0x10)
	struct UTexture* _vehiclePositionInnerCircleTexture;  // 0x40(0x8)
	struct FLinearColor _vehicleInnerCircleColor;  // 0x48(0x10)
	struct FLinearColor _vehicleHighlightInnerCircleColor;  // 0x58(0x10)
	struct UFont* _vehicleFont;  // 0x68(0x8)
	struct FLinearColor _vehicleNameHighlightColor;  // 0x70(0x10)
	struct FLinearColor _vehicleNameHighlightOutlineColor;  // 0x80(0x10)
	struct FLinearColor _vehicleNameColor;  // 0x90(0x10)
	struct FLinearColor _vehicleNameOutlineColor;  // 0xA0(0x10)
	struct FVector2D _vehiclePositionTextureSize;  // 0xB0(0x8)
	int32_t _vehicleTextStackOffset;  // 0xB8(0x4)
	char pad_188[4];  // 0xBC(0x4)

}; 
// DelegateFunction ConZ.CCSliderSelected__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FCCSliderSelected__DelegateSignature
{
	struct UCCSkillSliderWidget* Slider;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.MapHUDDroneObject
// Size: 0x38(Inherited: 0x18) 
struct FMapHUDDroneObject : public FMapHUDObject
{
	struct UTexture* _droneDirectionTexture;  // 0x18(0x8)
	struct UTexture* _dronePositionTexture;  // 0x20(0x8)
	struct UTexture* _dronePingAnimationTexture;  // 0x28(0x8)
	char pad_48[8];  // 0x30(0x8)

}; 
// ScriptStruct ConZ.MapHUDOtherPlayersObject
// Size: 0xC0(Inherited: 0x18) 
struct FMapHUDOtherPlayersObject : public FMapHUDObject
{
	struct UTexture* _otherPlayerPositionOuterRingTexture;  // 0x18(0x8)
	struct FLinearColor _otherPlayerOuterRingColor;  // 0x20(0x10)
	struct FLinearColor _otherPlayerHighlightOuterRingColor;  // 0x30(0x10)
	struct UTexture* _otherPlayerPositionInnerCicleTexture;  // 0x40(0x8)
	struct FLinearColor _otherPlayerInnerCircleColor;  // 0x48(0x10)
	struct FLinearColor _otherPlayerHighlightInnerCircleColor;  // 0x58(0x10)
	struct UFont* _otherPlayerFont;  // 0x68(0x8)
	struct FLinearColor _otherPlayerNameHighlightColor;  // 0x70(0x10)
	struct FLinearColor _otherPlayerNameHighlightOutlineColor;  // 0x80(0x10)
	struct FLinearColor _otherPlayerNameColor;  // 0x90(0x10)
	struct FLinearColor _otherPlayerNameOutlineColor;  // 0xA0(0x10)
	struct FVector2D _prisonerPositionTextureSize;  // 0xB0(0x8)
	int32_t _otherPlayerTextStackOffset;  // 0xB8(0x4)
	char pad_188[4];  // 0xBC(0x4)

}; 
// Function ConZ.PrisonerInventoryComponent.AddSelectionItemOnClient
// Size: 0x8(Inherited: 0x0) 
struct FAddSelectionItemOnClient
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerInventoryComponent.AutoAddAllItemsOnServer
// Size: 0x18(Inherited: 0x0) 
struct FAutoAddAllItemsOnServer
{
	struct TArray<struct AItem*> Items;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool removeSelection : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.CustomZoneSettingsRegionDetails.HandleSizeChange
// Size: 0x8(Inherited: 0x0) 
struct FHandleSizeChange
{
	float Value;  // 0x0(0x4)
	char ETextCommit CommitMethod;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.GameEventBase.GetTeamScore
// Size: 0x8(Inherited: 0x0) 
struct FGetTeamScore
{
	int32_t TeamIndex;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.GameResourceConsumptionDataForeignSubstance
// Size: 0x10(Inherited: 0x0) 
struct FGameResourceConsumptionDataForeignSubstance
{
	UForeignSubstance* Class;  // 0x0(0x8)
	float Amount;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.PrisonerInventoryComponent.AutoAddItemOnServer
// Size: 0x10(Inherited: 0x0) 
struct FAutoAddItemOnServer
{
	struct AItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool tryToJoinItems : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ConZ.PlaceableIngredient
// Size: 0x50(Inherited: 0x0) 
struct FPlaceableIngredient
{
	struct TArray<struct UCraftingItemTag*> Tags;  // 0x0(0x10)
	struct TArray<AItem*> SpecificItems;  // 0x10(0x10)
	struct TArray<uint8_t > TagsCraftingTypes;  // 0x20(0x10)
	struct TArray<uint8_t > SpecificItemsCraftingTypes;  // 0x30(0x10)
	uint8_t  Type;  // 0x40(0x1)
	uint8_t  ScalingType;  // 0x41(0x1)
	char pad_66[2];  // 0x42(0x2)
	float Required;  // 0x44(0x4)
	float Satisfied;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)

}; 
// Function ConZ.PrisonerInventoryComponent.Client_SendQuickAccessState
// Size: 0x18(Inherited: 0x0) 
struct FClient_SendQuickAccessState
{
	struct TArray<struct FQuickAccessClientSyncData> Data;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool enableSendingState : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ConZ.QuickAccessClientSyncData
// Size: 0x18(Inherited: 0x0) 
struct FQuickAccessClientSyncData
{
	char pad_0[24];  // 0x0(0x18)

}; 
// Function ConZ.PrisonerInventoryComponent.DropAllItemsOnServer
// Size: 0x18(Inherited: 0x0) 
struct FDropAllItemsOnServer
{
	struct TArray<struct AItem*> Items;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool removeSelection : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.BaseItemContainerWidget.InitGrid
// Size: 0x10(Inherited: 0x0) 
struct FInitGrid
{
	struct FMargin gridPadding;  // 0x0(0x10)

}; 
// Function ConZ.PrisonerInventoryComponent.DropItemOnServer
// Size: 0x8(Inherited: 0x0) 
struct FDropItemOnServer
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.GameEventBase.GetCurrentRoundDatabaseId
// Size: 0x8(Inherited: 0x0) 
struct FGetCurrentRoundDatabaseId
{
	struct FDbIntegerId ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerInventoryComponent.EquipClothesItemOnServer
// Size: 0x8(Inherited: 0x0) 
struct FEquipClothesItemOnServer
{
	struct AClothesItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerInventoryComponent.EquipItemInHandsOnServer
// Size: 0x8(Inherited: 0x0) 
struct FEquipItemInHandsOnServer
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerInventoryComponent.GetEquippedClothes
// Size: 0x10(Inherited: 0x0) 
struct FGetEquippedClothes
{
	struct TArray<struct AClothesItem*> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.PrisonerInventoryComponent.GetGearWeight
// Size: 0x4(Inherited: 0x0) 
struct FGetGearWeight
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerInventoryComponent.GetGearWeightFast
// Size: 0x4(Inherited: 0x0) 
struct FGetGearWeightFast
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZSquad.DemoteMember
// Size: 0x8(Inherited: 0x0) 
struct FDemoteMember
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)

}; 
// Function ConZ.WeaponAutoCrossbow.SetFollowerBoneLocationOffset
// Size: 0x4(Inherited: 0x0) 
struct FSetFollowerBoneLocationOffset
{
	float LocationOffset;  // 0x0(0x4)

}; 
// Function ConZ.SpawnMenuWidget.Prisoner_GetHealthRatio
// Size: 0x10(Inherited: 0x0) 
struct FPrisoner_GetHealthRatio
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.SedentaryNPCBackgroundInteraction.NetMulticast_PlayBackgroundInteraction
// Size: 0x8(Inherited: 0x0) 
struct FNetMulticast_PlayBackgroundInteraction
{
	int32_t animationAudioPairIndex;  // 0x0(0x4)
	uint8_t  playType;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// ScriptStruct ConZ.PossibleRecipeIngredient
// Size: 0x48(Inherited: 0x0) 
struct FPossibleRecipeIngredient
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsResource : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TSoftClassPtr<UObject> Item;  // 0x8(0x28)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ShouldConsumeWhole : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	int32_t Usage;  // 0x34(0x4)
	UGameResourceType* ResourceType;  // 0x38(0x8)
	float Liters;  // 0x40(0x4)
	float NutrientInclusionFactor;  // 0x44(0x4)

}; 
// Function ConZ.PrisonerInventoryComponent.GetMaxFacialHairLength
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxFacialHairLength
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerInventoryComponent.HasSelectionItem
// Size: 0x10(Inherited: 0x0) 
struct FHasSelectionItem
{
	struct AItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.PrisonerInventoryComponent.IsClothesItemEquipped
// Size: 0x10(Inherited: 0x0) 
struct FIsClothesItemEquipped
{
	struct AClothesItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// DelegateFunction ConZ.PrisonerInventoryComponent.ItemEquippedDelegate__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FItemEquippedDelegate__DelegateSignature
{
	struct UPrisonerInventoryComponent* sender;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)

}; 
// Function ConZ.DcxWheeledVehicleDriveComponent4W.InflateWheelTire
// Size: 0x4(Inherited: 0x0) 
struct FInflateWheelTire
{
	int32_t WheelIndex;  // 0x0(0x4)

}; 
// Function ConZ.InteractionComponent.ExamineObjectOnServer
// Size: 0x28(Inherited: 0x0) 
struct FExamineObjectOnServer
{
	struct UMeshComponent* MeshComponent;  // 0x0(0x8)
	struct FMeshInstanceId InstanceId;  // 0x8(0x8)
	struct FVector instanceLocation;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)
	struct UObject* Spawner;  // 0x20(0x8)

}; 
// Function ConZ.WeaponBow.EquipArrow
// Size: 0x8(Inherited: 0x0) 
struct FEquipArrow
{
	struct AAmmunitionArrow* arrow;  // 0x0(0x8)

}; 
// Function ConZ.DropZoneGameEvent.SetDropZoneParameters
// Size: 0x2C(Inherited: 0x0) 
struct FSetDropZoneParameters
{
	struct FDropZoneParameters Params;  // 0x0(0x2C)

}; 
// DelegateFunction ConZ.PrisonerInventoryComponent.ItemUnequippedDelegate__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FItemUnequippedDelegate__DelegateSignature
{
	struct UPrisonerInventoryComponent* sender;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)

}; 
// Function ConZ.PrisonerInventoryComponent.OnEquippedClothesDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnEquippedClothesDestroyed
{
	struct AActor* Actor;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerInventoryComponent.RemoveItemOnServer
// Size: 0x8(Inherited: 0x0) 
struct FRemoveItemOnServer
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.InventoryNode.GetInventoryNodeIcon
// Size: 0x8(Inherited: 0x0) 
struct FGetInventoryNodeIcon
{
	struct UTexture2D* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PossibleItem
// Size: 0x30(Inherited: 0x0) 
struct FPossibleItem
{
	struct UCraftingItemTag* CraftingTag;  // 0x0(0x8)
	AItem* Item;  // 0x8(0x8)
	int32_t Quantity;  // 0x10(0x4)
	int32_t Usage;  // 0x14(0x4)
	float usageWeight;  // 0x18(0x4)
	uint8_t  CraftingType;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	int32_t QuantityVariation;  // 0x20(0x4)
	float WeightVariation;  // 0x24(0x4)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool SpawnHere : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)

}; 
// Function ConZ.User.RemoveRecentServer
// Size: 0x28(Inherited: 0x0) 
struct FRemoveRecentServer
{
	struct FUserServerHistoryItem Item;  // 0x0(0x28)

}; 
// Function ConZ.PrisonerInventoryComponent.RemoveSelectionItemsOnClient
// Size: 0x10(Inherited: 0x0) 
struct FRemoveSelectionItemsOnClient
{
	struct TArray<struct AItem*> Items;  // 0x0(0x10)

}; 
// Function ConZ.PrisonerInventoryComponent.RemoveSelectionItemsOnClients
// Size: 0x18(Inherited: 0x0) 
struct FRemoveSelectionItemsOnClients
{
	struct TArray<struct AItem*> Items;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool allClients : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.PlayerDrone.Server_InitializeItemVirtualizedInventory
// Size: 0x8(Inherited: 0x0) 
struct FServer_InitializeItemVirtualizedInventory
{
	struct UObject* Item;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerInventoryComponent.Server_SendQuickAccessState
// Size: 0x10(Inherited: 0x0) 
struct FServer_SendQuickAccessState
{
	struct TArray<struct FQuickAccessSlotData> Data;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.DemolitionSkillParametersPerSkillLevel
// Size: 0x78(Inherited: 0x0) 
struct FDemolitionSkillParametersPerSkillLevel
{
	float TrapQuality;  // 0x0(0x4)
	float ArmTrapXP;  // 0x4(0x4)
	float DisarmOwnedTrapXP;  // 0x8(0x4)
	float DisarmEnemyTrapXP;  // 0xC(0x4)
	float AddTriggerXP;  // 0x10(0x4)
	float CraftTrapXP;  // 0x14(0x4)
	int32_t NumberOfWires;  // 0x18(0x4)
	int32_t GreenWiresNumber;  // 0x1C(0x4)
	int32_t RedWiresNumber;  // 0x20(0x4)
	int32_t NumberOfDefuseAttempts;  // 0x24(0x4)
	struct TMap<uint8_t , struct FDemolitionSkillParametersPerTrapType> ParametersPerTrapType;  // 0x28(0x50)

}; 
// ScriptStruct ConZ.QuickAccessSlotData
// Size: 0x14(Inherited: 0x0) 
struct FQuickAccessSlotData
{
	char pad_0[20];  // 0x0(0x14)

}; 
// DelegateFunction ConZ.ReportingManager.PrisonerWhistled__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FPrisonerWhistled__DelegateSignature
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.VehicleHandlingExperienceAwards
// Size: 0x8(Inherited: 0x0) 
struct FVehicleHandlingExperienceAwards
{
	float PointsForStartingEngine;  // 0x0(0x4)
	float PointsPerDrivenDistanceInKm;  // 0x4(0x4)

}; 
// Function ConZ.BaseItemContainerWidget.GetItemWidgets
// Size: 0x10(Inherited: 0x0) 
struct FGetItemWidgets
{
	struct TArray<struct UItemUserWidget*> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.PlayerRpcChannel.TrapItem_Server_SetNumTries
// Size: 0x10(Inherited: 0x0) 
struct FTrapItem_Server_SetNumTries
{
	struct ATrapItem* TrapItem;  // 0x0(0x8)
	int32_t numTries;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.BaseItemContainerWidget.OnDragCancelledEvent
// Size: 0x8(Inherited: 0x0) 
struct FOnDragCancelledEvent
{
	struct UBaseItemWidget* Widget;  // 0x0(0x8)

}; 
// Function ConZ.GardenManager.DebugAddWaterToPlantAtLookedLocation
// Size: 0x4(Inherited: 0x0) 
struct FDebugAddWaterToPlantAtLookedLocation
{
	float Amount;  // 0x0(0x4)

}; 
// Function ConZ.BaseItemContainerWidget.OnDragEnterEvent
// Size: 0x10(Inherited: 0x0) 
struct FOnDragEnterEvent
{
	struct UInventorySlotUserWidget* inventorySlot;  // 0x0(0x8)
	struct UBaseItemWidget* Widget;  // 0x8(0x8)

}; 
// Function ConZ.BaseItemContainerWidget.OnDragLeaveEvent
// Size: 0x10(Inherited: 0x0) 
struct FOnDragLeaveEvent
{
	struct UInventorySlotUserWidget* inventorySlot;  // 0x0(0x8)
	struct UBaseItemWidget* Widget;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.BruisePatch
// Size: 0x38(Inherited: 0x0) 
struct FBruisePatch
{
	uint8_t  Layer;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<uint8_t > AllowedZones;  // 0x8(0x10)
	int32_t Order;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	struct UTexture2D* Texture;  // 0x20(0x8)
	struct FVector2D Offset;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool Mute : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// DelegateFunction ConZ.DropdownMenuSelectionWidget.OnDropdownSelectionDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnDropdownSelectionDelegate__DelegateSignature
{
	struct UDropdownMenuSelectionWidget* Widget;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameInstance.OnPlaySessionEnd
// Size: 0x1(Inherited: 0x0) 
struct FOnPlaySessionEnd
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool quit : 1;  // 0x0(0x1)

}; 
// Function ConZ.User.FindProfile
// Size: 0x10(Inherited: 0x0) 
struct FFindProfile
{
	struct FDbIntegerId ID;  // 0x0(0x8)
	struct UUserProfile* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.PlayerRpcChannel.HasOwningUser_Client_UpdateState
// Size: 0x18(Inherited: 0x0) 
struct FHasOwningUser_Client_UpdateState
{
	struct UObject* Object;  // 0x0(0x8)
	struct FString ownerString;  // 0x8(0x10)

}; 
// Function ConZ.BaseItemContainerWidget.OnDropEvent
// Size: 0x10(Inherited: 0x0) 
struct FOnDropEvent
{
	struct UInventorySlotUserWidget* inventorySlot;  // 0x0(0x8)
	struct UBaseItemWidget* Item;  // 0x8(0x8)

}; 
// Function ConZ.UserProfile.GetAuthorityInfo
// Size: 0x40(Inherited: 0x0) 
struct FGetAuthorityInfo
{
	struct FUserProfileAuthorityInfo ReturnValue;  // 0x0(0x40)

}; 
// DelegateFunction ConZ.BaseItemContainerWidget.OnObjectAddedToContainerEvent__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnObjectAddedToContainerEvent__DelegateSignature
{
	struct UObject* Object;  // 0x0(0x8)

}; 
// Function ConZ.WaypointWidgetBase.GetAngle
// Size: 0x4(Inherited: 0x0) 
struct FGetAngle
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.WaypointWidgetBase.GetTargetActor
// Size: 0x8(Inherited: 0x0) 
struct FGetTargetActor
{
	struct AActor* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameState.Multicast_AddToOrUpdatePrisonerKillRegistry
// Size: 0x10(Inherited: 0x0) 
struct FMulticast_AddToOrUpdatePrisonerKillRegistry
{
	struct FDbIntegerId Target;  // 0x0(0x8)
	struct FDbIntegerId killer;  // 0x8(0x8)

}; 
// Function ConZ.WaypointWidgetBase.IsAttached
// Size: 0x1(Inherited: 0x0) 
struct FIsAttached
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.WaypointWidgetBase.IsOnScreen
// Size: 0x1(Inherited: 0x0) 
struct FIsOnScreen
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventBase.EquipParticipantLoadout
// Size: 0x8(Inherited: 0x0) 
struct FEquipParticipantLoadout
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.WaypointWidgetBase.OnLifetimeTiedActorDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnLifetimeTiedActorDestroyed
{
	struct AActor* Actor;  // 0x0(0x8)

}; 
// DelegateFunction ConZ.ChangeTextWidget.TextAcceptedEvent__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FTextAcceptedEvent__DelegateSignature
{
	struct APrisoner* User;  // 0x0(0x8)
	struct FText Text;  // 0x8(0x18)

}; 
// DelegateFunction ConZ.CCSliderChanged__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FCCSliderChanged__DelegateSignature
{
	struct UCCSkillSliderWidget* Slider;  // 0x0(0x8)
	uint8_t  Attribute;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ConZ.SizeVariatedTilesData
// Size: 0x40(Inherited: 0x18) 
struct FSizeVariatedTilesData : public FTilesData
{
	char pad_24[40];  // 0x18(0x28)

}; 
// DelegateFunction ConZ.ComboBoxStringWithIndexing.OnSelectionIndexChangedEvent__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FOnSelectionIndexChangedEvent__DelegateSignature
{
	int32_t SelectedIndex;  // 0x0(0x4)

}; 
// DelegateFunction ConZ.CraftingAvailableItemWidget.ClickedDelegate__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FClickedDelegate__DelegateSignature
{
	struct UCraftingAvailableItemWidget* Widget;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)

}; 
// Function ConZ.CraftingRecipeWidget.GetAvailabilityState
// Size: 0x1(Inherited: 0x0) 
struct FGetAvailabilityState
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.WeaponActionClearMalfunctionSequence.HandleMalfunctionEvent
// Size: 0xC(Inherited: 0x0) 
struct FHandleMalfunctionEvent
{
	uint8_t  malfunctionEvent;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FWeaponMalfunctionEventDescription desc;  // 0x4(0x8)

}; 
// Function ConZ.ResourceLockingManager.NetMulticast_LockArea
// Size: 0x24(Inherited: 0x0) 
struct FNetMulticast_LockArea
{
	int32_t dataVersion;  // 0x0(0x4)
	struct FResourceNetworkGUID LockOwnerGUID;  // 0x4(0x4)
	struct FBox Area;  // 0x8(0x1C)

}; 
// ScriptStruct ConZ.DrivingSkillParametersPerSkillLevel
// Size: 0x100(Inherited: 0x0) 
struct FDrivingSkillParametersPerSkillLevel
{
	float EngineStartViaMotionDuration;  // 0x0(0x4)
	float EngineStartViaMotionFailureChance;  // 0x4(0x4)
	float EngineReadyDelay;  // 0x8(0x4)
	float EngineFailedToStartDelay;  // 0xC(0x4)
	float EngineFailedToStartNoFuelDelay;  // 0x10(0x4)
	float EngineFailedToStartNoBatteryDelay;  // 0x14(0x4)
	float EngineStalledDelay;  // 0x18(0x4)
	float MaxSpeedModifier;  // 0x1C(0x4)
	float ThrottleModifier;  // 0x20(0x4)
	float BrakeModifier;  // 0x24(0x4)
	float WheelSteeringLerpSpeedMultiplier;  // 0x28(0x4)
	struct FEngineHandlingParameters EngineHandlingParameters;  // 0x2C(0x8)
	struct FGearboxHandlingParameters GearboxHandlingParameters;  // 0x34(0xC)
	struct FDrivingSkillEngineStallingParameters EngineStallingByAccelerationParameters;  // 0x40(0x40)
	struct FDrivingSkillEngineStallingParameters EngineStallingByUpShiftParameters;  // 0x80(0x40)
	struct FDrivingSkillEngineStallingParameters EngineStallingWhenStartingViaMotion;  // 0xC0(0x40)

}; 
// ScriptStruct ConZ.ConZFlagElementData
// Size: 0x18(Inherited: 0x0) 
struct FConZFlagElementData
{
	int64_t OvertakeEndTime;  // 0x0(0x8)
	struct FDbIntegerId OvertakerId;  // 0x8(0x8)
	int32_t NumberOfExpandedElements;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.DropdownMenuSelectionWidget.Click
// Size: 0x160(Inherited: 0x0) 
struct FClick
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// ScriptStruct ConZ.AnimalStationaryRotationRateSettings
// Size: 0x3C(Inherited: 0x0) 
struct FAnimalStationaryRotationRateSettings
{
	struct FRotator RunRotationRate;  // 0x0(0xC)
	struct FRotator TrotRotationRate;  // 0xC(0xC)
	struct FRotator WalkRotationRate;  // 0x18(0xC)
	struct FRotator SneakRotationRate;  // 0x24(0xC)
	struct FRotator StandRotationRate;  // 0x30(0xC)

}; 
// Function ConZ.ItemWidget2.OnDragOperationCancelled
// Size: 0x8(Inherited: 0x0) 
struct FOnDragOperationCancelled
{
	struct UDragDropOperation* Operation;  // 0x0(0x8)

}; 
// Function ConZ.UserProfile.GetPrisonerId
// Size: 0x8(Inherited: 0x0) 
struct FGetPrisonerId
{
	struct FDbIntegerId ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.BaseItemWidget.GetDragImage
// Size: 0x40(Inherited: 0x0) 
struct FGetDragImage
{
	struct FGeometry Geometry;  // 0x0(0x38)
	struct UInventorySlotUserWidget* widgetImage;  // 0x38(0x8)

}; 
// Function ConZ.BaseItemWidget.SetStacksCount
// Size: 0x4(Inherited: 0x0) 
struct FSetStacksCount
{
	int32_t Count;  // 0x0(0x4)

}; 
// DelegateFunction ConZ.ItemUserWidget.OnClicked__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnClicked__DelegateSignature
{
	struct UItemUserWidget* clickedWidget;  // 0x0(0x8)

}; 
// Function ConZ.ItemUserWidget.SetImage
// Size: 0x8(Inherited: 0x0) 
struct FSetImage
{
	struct UTexture2D* Image;  // 0x0(0x8)

}; 
// Function ConZ.User.CreateEmptyProfile
// Size: 0x10(Inherited: 0x0) 
struct FCreateEmptyProfile
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UUserProfile* ReturnValue;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.BaseElementDamageZone
// Size: 0x28(Inherited: 0x0) 
struct FBaseElementDamageZone
{
	struct FVector BoundsMin;  // 0x0(0xC)
	struct FVector BoundsMax;  // 0xC(0xC)
	float MinDamagePerSecond;  // 0x18(0x4)
	float MaxDamagePerSecond;  // 0x1C(0x4)
	float MinSpeedForDamage;  // 0x20(0x4)
	float MaxSpeedForDamage;  // 0x24(0x4)

}; 
// ScriptStruct ConZ.VehicleAttachmentSlotId
// Size: 0x18(Inherited: 0x0) 
struct FVehicleAttachmentSlotId
{
	char pad_0[24];  // 0x0(0x18)

}; 
// DelegateFunction ConZ.PreviousNextSwitchWidget.OnSwitchClickedDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnSwitchClickedDelegate__DelegateSignature
{
	int32_t widgetArrayIndex;  // 0x0(0x4)
	int32_t Index;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.PowerNodeConnector
// Size: 0x20(Inherited: 0x0) 
struct FPowerNodeConnector
{
	struct FName SocketName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ShouldHaveCable : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	int32_t CableMeshIndex;  // 0xC(0x4)
	int32_t TargetConnectorIndex;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct UStaticMeshComponent* CableMeshComponent;  // 0x18(0x8)

}; 
// DelegateFunction ConZ.OnChoiceClickedEvent__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnChoiceClickedEvent__DelegateSignature
{
	struct USpawnChoiceWidget* SpawnChoiceWidget;  // 0x0(0x8)

}; 
// Function ConZ.Vehicle.IsVehicleFreeLookEnabled
// Size: 0x1(Inherited: 0x0) 
struct FIsVehicleFreeLookEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.AchievementStats
// Size: 0x1(Inherited: 0x0) 
struct FAchievementStats
{
	char pad_0[1];  // 0x0(0x1)

}; 
// Function ConZ.InteractionComponent.CutObjectOnClients
// Size: 0x10(Inherited: 0x0) 
struct FCutObjectOnClients
{
	struct UMeshComponent* MeshComponent;  // 0x0(0x8)
	struct FMeshInstanceId InstanceId;  // 0x8(0x8)

}; 
// Function ConZ.PrisonerSoundComponent.PlayGearSounds
// Size: 0x1(Inherited: 0x0) 
struct FPlayGearSounds
{
	uint8_t  motionIntensity;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.AdminCommandArgumentDescription
// Size: 0x40(Inherited: 0x0) 
struct FAdminCommandArgumentDescription
{
	struct FText Name;  // 0x0(0x18)
	struct FText Description;  // 0x18(0x18)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ShowCompletionValuesInHelpText : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)
	struct UAdminCommandArgumentDataTypeBase* Data;  // 0x38(0x8)

}; 
// ScriptStruct ConZ.VehicleWeaponAimingThirdPersonData
// Size: 0x10(Inherited: 0x0) 
struct FVehicleWeaponAimingThirdPersonData
{
	struct TArray<struct FVehicleThirdPersonWeaponTypeData> WeaponTypeData;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.SearchItemClassesArray
// Size: 0x10(Inherited: 0x0) 
struct FSearchItemClassesArray
{
	struct TArray<struct TSoftClassPtr<UObject>> ItemClasses;  // 0x0(0x10)

}; 
// Function ConZ.MathStatics.GetCircleYForX
// Size: 0x18(Inherited: 0x0) 
struct FGetCircleYForX
{
	float X;  // 0x0(0x4)
	struct FVector2D Center;  // 0x4(0x8)
	float Radius;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Up : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float ReturnValue;  // 0x14(0x4)

}; 
// ScriptStruct ConZ.PrisonerAppearance_HairColorPreset
// Size: 0x58(Inherited: 0x0) 
struct FPrisonerAppearance_HairColorPreset
{
	struct FLinearColor PreviewColor;  // 0x0(0x10)
	float Brightness;  // 0x10(0x4)
	struct FLinearColor RootColor;  // 0x14(0x10)
	struct FLinearColor RootColorOnHead;  // 0x24(0x10)
	uint8_t  ColorName;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	float Roughness;  // 0x38(0x4)
	float Scatter;  // 0x3C(0x4)
	struct FLinearColor TipColor;  // 0x40(0x10)
	float RandomHueVariation;  // 0x50(0x4)
	float RandomValueVariation;  // 0x54(0x4)

}; 
// ScriptStruct ConZ.DemolitionSkillParametersPerTrapType
// Size: 0x4(Inherited: 0x0) 
struct FDemolitionSkillParametersPerTrapType
{
	float DefuseTime;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.DetectionDelayTimerData
// Size: 0x10(Inherited: 0x0) 
struct FDetectionDelayTimerData
{
	float MinDetectionDelayBasedOnDistance;  // 0x0(0x4)
	float MaxDetectionDelayBasedOnDistance;  // 0x4(0x4)
	float MinDetectionDelayBasedOnVisibility;  // 0x8(0x4)
	float MaxDetectionDelayBasedOnVisibility;  // 0xC(0x4)

}; 
// ScriptStruct ConZ.AnimNode_WheelAndSuspensionHandler
// Size: 0x100(Inherited: 0xC8) 
struct FAnimNode_WheelAndSuspensionHandler : public FAnimNode_SkeletalControlBase
{
	char pad_200[56];  // 0xC8(0x38)

}; 
// ScriptStruct ConZ.AviationSkillParametersPerSkillLevel
// Size: 0x100(Inherited: 0x0) 
struct FAviationSkillParametersPerSkillLevel
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ShouldHaveMouseInput : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float EngineReadyDelay;  // 0x4(0x4)
	float EngineFailedToStartDelay;  // 0x8(0x4)
	float EngineFailedToStartNoFuelDelay;  // 0xC(0x4)
	float EngineFailedToStartNoBatteryDelay;  // 0x10(0x4)
	float EngineStalledDelay;  // 0x14(0x4)
	float ThrottleLerpMultiplier;  // 0x18(0x4)
	float BrakeLerpMultiplier;  // 0x1C(0x4)
	float RollLerpMultiplier;  // 0x20(0x4)
	float YawLerpMultiplier;  // 0x24(0x4)
	float PitchLerpMultiplier;  // 0x28(0x4)
	float ControlResetLerpMultiplier;  // 0x2C(0x4)
	float WindInfluenceMultiplier;  // 0x30(0x4)
	struct FEngineHandlingParameters EngineHandlingParameters;  // 0x34(0x8)
	char pad_60[4];  // 0x3C(0x4)
	struct FDrivingSkillEngineStallingParameters EngineStallingByAccelerationParameters;  // 0x40(0x40)
	struct FDrivingSkillEngineStallingParameters EngineStallingByUpShiftParameters;  // 0x80(0x40)
	struct FDrivingSkillEngineStallingParameters EngineStallingWhenStartingViaMotion;  // 0xC0(0x40)

}; 
// ScriptStruct ConZ.ChoppingIngredient
// Size: 0x50(Inherited: 0x0) 
struct FChoppingIngredient
{
	struct TSoftClassPtr<UObject> Item;  // 0x0(0x28)
	int32_t MinQuantity;  // 0x28(0x4)
	int32_t MaxQuantity;  // 0x2C(0x4)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool IsQuantityAffectedByTool : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	float InitialDamage;  // 0x34(0x4)
	float RandomizeDamage;  // 0x38(0x4)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool OverrideAutoDestructTime : 1;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)
	float AutoDestructTime;  // 0x40(0x4)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool IsHealthAffectedByChoppedItem : 1;  // 0x44(0x1)
	char pad_69[11];  // 0x45(0xB)

}; 
// ScriptStruct ConZ.EngineHandlingParameters
// Size: 0x8(Inherited: 0x0) 
struct FEngineHandlingParameters
{
	float IgnitionDurationMultiplier;  // 0x0(0x4)
	float IgnitionFailureChance;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.BankCardOperationRequestData
// Size: 0x10(Inherited: 0x0) 
struct FBankCardOperationRequestData
{
	char pad_0[16];  // 0x0(0x10)

}; 
// ScriptStruct ConZ.CurrencyConversionRequestData
// Size: 0x24(Inherited: 0x0) 
struct FCurrencyConversionRequestData
{
	char pad_0[36];  // 0x0(0x24)

}; 
// ScriptStruct ConZ.BankATMBoughtCardStateVisual
// Size: 0x40(Inherited: 0x0) 
struct FBankATMBoughtCardStateVisual
{
	struct FSlateColor FontColor;  // 0x0(0x28)
	struct FLinearColor BrushColor;  // 0x28(0x10)
	float OnHoveredUpwardsOffset;  // 0x38(0x4)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool OptionsCircleSelectedState : 1;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)

}; 
// ScriptStruct ConZ.BankATMPointingButtonStateVisual
// Size: 0x98(Inherited: 0x0) 
struct FBankATMPointingButtonStateVisual
{
	struct FLinearColor FontColor;  // 0x0(0x10)
	struct FSlateBrush BackgroundBrush;  // 0x10(0x88)

}; 
// ScriptStruct ConZ.FamePointAwards
// Size: 0x160(Inherited: 0x0) 
struct FFamePointAwards
{
	float BaseFameInflux;  // 0x0(0x4)
	float MovingOnFoot;  // 0x4(0x4)
	float MovingDriving;  // 0x8(0x4)
	float MovingFlying;  // 0xC(0x4)
	float RustyLockLockpick;  // 0x10(0x4)
	float IronLockLockpick;  // 0x14(0x4)
	float SilverLockLockpick;  // 0x18(0x4)
	float GoldLockLockpick;  // 0x1C(0x4)
	float BombDefuse;  // 0x20(0x4)
	float OwningTheBase;  // 0x24(0x4)
	struct FTimespan MaxTimeFromLastLogin;  // 0x28(0x8)
	float BaseOvertakeMultiplier;  // 0x30(0x4)
	float BuiltBlueprintNoSkill;  // 0x34(0x4)
	float BuiltBlueprintBasic;  // 0x38(0x4)
	float BuiltBlueprintMedium;  // 0x3C(0x4)
	float BuiltBlueprintAdvanced;  // 0x40(0x4)
	float BuiltBaseElementNoSkill;  // 0x44(0x4)
	float BuiltBaseElementBasic;  // 0x48(0x4)
	float BuiltBaseElementMedium;  // 0x4C(0x4)
	float BuiltBaseElementAdvanced;  // 0x50(0x4)
	float VehicleSold;  // 0x54(0x4)
	float WheelBarrowSold;  // 0x58(0x4)
	float AcquiredGoldCreditCard;  // 0x5C(0x4)
	float TreatedWoundC1;  // 0x60(0x4)
	float TreatedWoundC2;  // 0x64(0x4)
	float TreatedWoundC3;  // 0x68(0x4)
	float TreatedWoundC4;  // 0x6C(0x4)
	float CuredInfectionC1;  // 0x70(0x4)
	float CuredInfectionC2;  // 0x74(0x4)
	float CuredInfectionC3;  // 0x78(0x4)
	float CuredSepsis;  // 0x7C(0x4)
	float AbundantFishCaughtMultiplier;  // 0x80(0x4)
	float CommonFishCaughtMultiplier;  // 0x84(0x4)
	float UncommonFishCaughtMultiplier;  // 0x88(0x4)
	float RareFishCaughtMultiplier;  // 0x8C(0x4)
	float VeryRareFishCaughtMultiplier;  // 0x90(0x4)
	float ExtremelyRareFishCaughtMultiplier;  // 0x94(0x4)
	float FishCaughtFamePointsPerKg;  // 0x98(0x4)
	float ConsecutivelyKept50Fish;  // 0x9C(0x4)
	float ConsecutivelyReleased50Fish;  // 0xA0(0x4)
	float UnlockedDoorKillbox;  // 0xA4(0x4)
	float CraftedItemNoSkill;  // 0xA8(0x4)
	float CraftedItemBasic;  // 0xAC(0x4)
	float CraftedItemMedium;  // 0xB0(0x4)
	float CraftedItemAdvanced;  // 0xB4(0x4)
	float CraftedC4;  // 0xB8(0x4)
	float SurvivedConsecutiveDays2;  // 0xBC(0x4)
	float SurvivedConsecutiveDays4;  // 0xC0(0x4)
	float SurvivedConsecutiveDays8;  // 0xC4(0x4)
	float SurvivedConsecutiveDays16;  // 0xC8(0x4)
	float SurvivedConsecutiveDays32;  // 0xCC(0x4)
	float EscapedSharkBite;  // 0xD0(0x4)
	float PuppetKills;  // 0xD4(0x4)
	float PuppetKills10;  // 0xD8(0x4)
	float PuppetKills100;  // 0xDC(0x4)
	float PuppetKills500;  // 0xE0(0x4)
	float AnimalKills;  // 0xE4(0x4)
	float AnimalKills10;  // 0xE8(0x4)
	float AnimalKills100;  // 0xEC(0x4)
	float AnimalKills500;  // 0xF0(0x4)
	float FirearmKills10;  // 0xF4(0x4)
	float FirearmKills100;  // 0xF8(0x4)
	float FirearmKills500;  // 0xFC(0x4)
	float FirearmHeadShotOver200m;  // 0x100(0x4)
	float BowHeadshotOver100m;  // 0x104(0x4)
	float MeleeKills10;  // 0x108(0x4)
	float MeleeKills100;  // 0x10C(0x4)
	float MeleeKills500;  // 0x110(0x4)
	float BareHandedKills10;  // 0x114(0x4)
	float BareHandedKills100;  // 0x118(0x4)
	float BareHandedKills500;  // 0x11C(0x4)
	float FinishedHauntedHouseRitual;  // 0x120(0x4)
	float SkillLeveledUpToBasic;  // 0x124(0x4)
	float SkillLeveledUpToMedium;  // 0x128(0x4)
	float SkillLeveledUpToAdvanced;  // 0x12C(0x4)
	float SkillLeveledUpToAdvancedPlus;  // 0x130(0x4)
	float MaxedOutAttributes;  // 0x134(0x4)
	float Decontaminated;  // 0x138(0x4)
	float WashedClothing;  // 0x13C(0x4)
	float LandedWithParachute;  // 0x140(0x4)
	float BuiltGarden;  // 0x144(0x4)
	float SeedsPlanted;  // 0x148(0x4)
	float SuccessfulHarvest;  // 0x14C(0x4)
	float WeedsPlucked;  // 0x150(0x4)
	float CollectedSeeds;  // 0x154(0x4)
	float AppliedPesticideOrFungicide;  // 0x158(0x4)
	float HadPlasticSurgery;  // 0x15C(0x4)

}; 
// Function ConZ.BombDefusalWidget.GetNumTries
// Size: 0x4(Inherited: 0x0) 
struct FGetNumTries
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.BankATMVirtualEditboxStateVisual
// Size: 0x10(Inherited: 0x0) 
struct FBankATMVirtualEditboxStateVisual
{
	struct FLinearColor OutlineColor;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.CraftingProductDescription
// Size: 0xC8(Inherited: 0x0) 
struct FCraftingProductDescription
{
	struct TSoftClassPtr<UObject> ProductClass;  // 0x0(0x28)
	struct FString ProductClassName;  // 0x28(0x10)
	struct FText ProductCaption;  // 0x38(0x18)
	struct UTexture2D* ProductIcon;  // 0x50(0x8)
	struct TArray<struct FCraftingSlotRequirement> SlotRequirements;  // 0x58(0x10)
	struct TArray<struct UCraftingCondition*> Conditions;  // 0x68(0x10)
	struct TArray<struct UCraftingAction*> Actions;  // 0x78(0x10)
	struct FCraftingRecipeSkillReward SkillReward;  // 0x88(0x40)

}; 
// ScriptStruct ConZ.CraftingRecipeSkillReward
// Size: 0x40(Inherited: 0x0) 
struct FCraftingRecipeSkillReward
{
	struct TSoftClassPtr<UObject> Skill;  // 0x0(0x28)
	int32_t NoSkillReward;  // 0x28(0x4)
	int32_t BasicReward;  // 0x2C(0x4)
	int32_t MediumReward;  // 0x30(0x4)
	int32_t AdvancedReward;  // 0x34(0x4)
	int32_t AboveAdvancedReward;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 
// ScriptStruct ConZ.CraftingSlotAmountNeededPerSkillLevel
// Size: 0x20(Inherited: 0x0) 
struct FCraftingSlotAmountNeededPerSkillLevel
{
	USkill* Skill;  // 0x0(0x8)
	int32_t NoSkillAmount;  // 0x8(0x4)
	int32_t BasicAmount;  // 0xC(0x4)
	int32_t MediumAmount;  // 0x10(0x4)
	int32_t AdvancedAmount;  // 0x14(0x4)
	int32_t AboveAdvancedAmount;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ConZ.CraftingIngredientCost
// Size: 0x18(Inherited: 0x0) 
struct FCraftingIngredientCost
{
	char pad_0[24];  // 0x0(0x18)

}; 
// ScriptStruct ConZ.VehicleSpawnerInfo
// Size: 0x80(Inherited: 0x0) 
struct FVehicleSpawnerInfo
{
	struct FEntityId VehicleEntityId;  // 0x0(0x8)
	struct FPrimaryAssetId VehicleAssetId;  // 0x8(0x10)
	struct FEntityId ContainerId;  // 0x18(0x8)
	struct TWeakObjectPtr<AVehicleBase> VehicleBase;  // 0x20(0x8)
	struct FString VehicleAlias;  // 0x28(0x10)
	char pad_56[8];  // 0x38(0x8)
	struct FTransform VehicleTransform;  // 0x40(0x30)
	int64_t VehicleLastAccessTime;  // 0x70(0x8)
	char pad_120[8];  // 0x78(0x8)

}; 
// ScriptStruct ConZ.RequiredItemForItemTagParams
// Size: 0xC(Inherited: 0x0) 
struct FRequiredItemForItemTagParams
{
	char pad_0[12];  // 0x0(0xC)

}; 
// ScriptStruct ConZ.VehicleAttachmentGearboxSimulationData
// Size: 0x14(Inherited: 0x0) 
struct FVehicleAttachmentGearboxSimulationData
{
	char pad_0[4];  // 0x0(0x4)
	int32_t CurrentGearIndex;  // 0x4(0x4)
	char pad_8[12];  // 0x8(0xC)

}; 
// ScriptStruct ConZ.ConZOnDemandElementData
// Size: 0x30(Inherited: 0x0) 
struct FConZOnDemandElementData
{
	struct FConZBaseElementIdentifier ElementIdentifier;  // 0x0(0x20)
	struct FString OwnerName;  // 0x20(0x10)

}; 
// ScriptStruct ConZ.CraftingRecipeParams
// Size: 0x88(Inherited: 0x0) 
struct FCraftingRecipeParams
{
	struct TSoftClassPtr<UObject> ProductClass;  // 0x0(0x28)
	struct TMap<USkill*, uint8_t > SkillLevels;  // 0x28(0x50)
	struct TArray<struct FCraftingSlotParams> Slots;  // 0x78(0x10)

}; 
// ScriptStruct ConZ.CraftingSlotParams
// Size: 0x10(Inherited: 0x0) 
struct FCraftingSlotParams
{
	struct TArray<struct TScriptInterface<ICraftingIngredient>> Ingredients;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.BasicNotificationDescriptionData
// Size: 0x38(Inherited: 0x0) 
struct FBasicNotificationDescriptionData
{
	struct FText Message;  // 0x0(0x18)
	int32_t FontSize;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	struct UTexture2D* Icon;  // 0x20(0x8)
	int32_t IconSize;  // 0x28(0x4)
	float Duration;  // 0x2C(0x4)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ping : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	float Delay;  // 0x34(0x4)

}; 
// Function ConZ.Zombie2.GetHealthRatio
// Size: 0x4(Inherited: 0x0) 
struct FGetHealthRatio
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.FoliageGeneralData
// Size: 0x10(Inherited: 0x0) 
struct FFoliageGeneralData
{
	float CollisionBoundsScale;  // 0x0(0x4)
	struct FVector CollisionBoundsOffset;  // 0x4(0xC)

}; 
// ScriptStruct ConZ.AnimalSpawnWeigthsPerDayPeriod
// Size: 0x10(Inherited: 0x0) 
struct FAnimalSpawnWeigthsPerDayPeriod
{
	float SpawnWeight[4];  // 0x0(0x10)

}; 
// ScriptStruct ConZ.BoatParametersPerMovementPace
// Size: 0x18(Inherited: 0x0) 
struct FBoatParametersPerMovementPace
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsValid : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float BaseMaxForwardSpeed;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool CanReverse : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float BaseMaxReverseSpeed;  // 0xC(0x4)
	float MinPrisonerStrength;  // 0x10(0x4)
	float ThrottleMultiplier;  // 0x14(0x4)

}; 
// ScriptStruct ConZ.BuildingsArray
// Size: 0x10(Inherited: 0x0) 
struct FBuildingsArray
{
	struct TArray<struct ABuilding*> _buildings;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.BuryMaterialData
// Size: 0x28(Inherited: 0x0) 
struct FBuryMaterialData
{
	struct UMaterialInterface* Material;  // 0x0(0x8)
	struct UParticleSystem* BreachActionParticles;  // 0x8(0x8)
	struct UAkAudioEvent* BreachActionSound;  // 0x10(0x8)
	struct UParticleSystem* DumpActionParticles;  // 0x18(0x8)
	struct UAkAudioEvent* DumpActionSound;  // 0x20(0x8)

}; 
// Function ConZ.Vehicle.GetVehicleEngineRpm
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleEngineRpm
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.CamouflageSkillExperienceAwards
// Size: 0x4(Inherited: 0x0) 
struct FCamouflageSkillExperienceAwards
{
	float BonusExperience;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.TeleportUserDataReplicator
// Size: 0x8(Inherited: 0x0) 
struct FTeleportUserDataReplicator
{
	struct UTeleportUserData* UserData;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.DoorUnlockDataCollection
// Size: 0x10(Inherited: 0x0) 
struct FDoorUnlockDataCollection
{
	struct TArray<struct FDoorUnlockDataDescription> Data;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.CargoDropSpawnerPreset
// Size: 0x18(Inherited: 0x0) 
struct FCargoDropSpawnerPreset
{
	UItemSpawnerPreset* Preset;  // 0x0(0x8)
	UItemSpawnerPreset2* SpawnerPreset;  // 0x8(0x8)
	float ChanceMultiplier;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ConZ.CarouselStyle
// Size: 0x570(Inherited: 0x0) 
struct FCarouselStyle
{
	struct FButtonStyle LeftArrowIcon;  // 0x0(0x278)
	struct FButtonStyle RightArrowIcon;  // 0x278(0x278)
	struct FCarouselTextStyle ValueText;  // 0x4F0(0x80)

}; 
// ScriptStruct ConZ.EntityComponentId
// Size: 0x10(Inherited: 0x0) 
struct FEntityComponentId
{
	struct FEntityId EntityId;  // 0x0(0x8)
	struct FName ComponentName;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.CarouselWithLabelStyle
// Size: 0x108(Inherited: 0x0) 
struct FCarouselWithLabelStyle
{
	struct FSlateBrush FocusBackgroundImage;  // 0x0(0x88)
	struct FCarouselTextStyle LabelText;  // 0x88(0x80)

}; 
// ScriptStruct ConZ.CharacterActionAnimationDescription
// Size: 0x20(Inherited: 0x0) 
struct FCharacterActionAnimationDescription
{
	char pad_0[32];  // 0x0(0x20)

}; 
// ScriptStruct ConZ.AttachComponentData
// Size: 0x18(Inherited: 0x0) 
struct FAttachComponentData
{
	struct UMeshComponent* MeshComponent;  // 0x0(0x8)
	int32_t ParticleIndex;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool SimulateTension : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct FName SocketName;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.CCNonImplementedSkill
// Size: 0x20(Inherited: 0x0) 
struct FCCNonImplementedSkill
{
	uint8_t  Attribute;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FText Caption;  // 0x8(0x18)

}; 
// ScriptStruct ConZ.DroneVisitTimeData
// Size: 0x8(Inherited: 0x0) 
struct FDroneVisitTimeData
{
	float MinVisitTime;  // 0x0(0x4)
	float MaxVisitTime;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.CharacterMeshSlice
// Size: 0x190(Inherited: 0x0) 
struct FCharacterMeshSlice
{
	struct FGameplayTagQuery Condition;  // 0x0(0x48)
	struct FGameplayTagContainer Slots;  // 0x48(0x20)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh;  // 0x68(0x28)
	struct FGameplayTag SkeletalMeshSocket;  // 0x90(0x8)
	struct TMap<struct FName, struct FCharacterMeshMorphTargetArray> SkeletalMeshMorphTargets;  // 0x98(0x50)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh;  // 0xE8(0x28)
	struct FGameplayTag StaticMeshSocket;  // 0x110(0x8)
	struct TArray<struct FCharacterMeshMaterialOverride> OverrideMaterials;  // 0x118(0x10)
	struct TSoftClassPtr<UObject> SpecificAnimationBlueprintClass;  // 0x128(0x28)
	struct FTransform SpecificTransform;  // 0x150(0x30)
	char pad_384_1 : 7;  // 0x180(0x1)
	bool HidesUnderlyingLayer : 1;  // 0x180(0x1)
	char pad_385[15];  // 0x181(0xF)

}; 
// ScriptStruct ConZ.TextBoxTextStyle
// Size: 0x68(Inherited: 0x0) 
struct FTextBoxTextStyle
{
	struct FSlateFontInfo Font;  // 0x0(0x58)
	struct FLinearColor ColorAndOpacity;  // 0x58(0x10)

}; 
// ScriptStruct ConZ.CharacterArmsImpactSoundsData
// Size: 0x18(Inherited: 0x0) 
struct FCharacterArmsImpactSoundsData
{
	struct TArray<struct FCharacterArmsImpactSoundData> SoundsData;  // 0x0(0x10)
	struct FCharacterImpactSounds FallbackSounds;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.CharacterTorsoImpactSoundsData
// Size: 0x18(Inherited: 0x0) 
struct FCharacterTorsoImpactSoundsData
{
	struct TArray<struct FCharacterTorsoImpactSoundData> SoundsData;  // 0x0(0x10)
	struct FCharacterImpactSounds FallbackSounds;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.CharacterTorsoImpactSoundData
// Size: 0x28(Inherited: 0x0) 
struct FCharacterTorsoImpactSoundData
{
	struct TArray<uint8_t > ImpactSourceCategories;  // 0x0(0x10)
	struct TArray<uint8_t > ImpactTargetCategories;  // 0x10(0x10)
	struct FCharacterImpactSounds Sounds;  // 0x20(0x8)

}; 
// Function ConZ.ComplexAnimal2.PreformChargeAttack
// Size: 0xC(Inherited: 0x0) 
struct FPreformChargeAttack
{
	int32_t attackIndex;  // 0x0(0x4)
	float Time;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// ScriptStruct ConZ.BaseElementSpawnParams
// Size: 0x48(Inherited: 0x0) 
struct FBaseElementSpawnParams
{
	float Quality;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<UObject*> DoorUpgrades;  // 0x8(0x10)
	struct TArray<int32_t> CombinationsPerLock;  // 0x18(0x10)
	struct FDbIntegerId ShelterId;  // 0x28(0x8)
	struct FEntityId EntityId;  // 0x30(0x8)
	struct TArray<struct AItem*> AttachedItems;  // 0x38(0x10)

}; 
// ScriptStruct ConZ.WeaponTypeAimOffset
// Size: 0x18(Inherited: 0x0) 
struct FWeaponTypeAimOffset
{
	uint8_t  WeaponType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UBlendSpace* AimOffset[2];  // 0x8(0x10)

}; 
// ScriptStruct ConZ.CharacterMeshClassSet
// Size: 0x50(Inherited: 0x0) 
struct FCharacterMeshClassSet
{
	struct TSet<UCharacterMesh*> Classes;  // 0x0(0x50)

}; 
// Function ConZ.WeaponCrossbow.NetMulticast_SetLoadedVariablesForCrossbow
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_SetLoadedVariablesForCrossbow
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool isCocked : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.CloseRangeAttackData
// Size: 0x18(Inherited: 0x0) 
struct FCloseRangeAttackData
{
	struct UAnimMontage* Montage;  // 0x0(0x8)
	float RegainControlDurationModifier;  // 0x8(0x4)
	float Range;  // 0xC(0x4)
	float angle;  // 0x10(0x4)
	float HorizontalHalfAngleRange;  // 0x14(0x4)

}; 
// ScriptStruct ConZ.CharacterMeshClassArray
// Size: 0x10(Inherited: 0x0) 
struct FCharacterMeshClassArray
{
	struct TArray<UCharacterMesh*> Classes;  // 0x0(0x10)

}; 
// Function ConZ.ConZSquad.IsAnyMemberAlive
// Size: 0x1(Inherited: 0x0) 
struct FIsAnyMemberAlive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.HitByMeleeImpactSoundsInfo
// Size: 0x10(Inherited: 0x0) 
struct FHitByMeleeImpactSoundsInfo
{
	uint8_t  ImpactSourceSoundCategory;  // 0x0(0x1)
	uint8_t  HitSeverity;  // 0x1(0x1)
	uint8_t  ImpactBodyPart;  // 0x2(0x1)
	char pad_3[1];  // 0x3(0x1)
	struct FVector ImpactPoint;  // 0x4(0xC)

}; 
// ScriptStruct ConZ.CharacterSpawnerDataBasedOnPreset
// Size: 0x20(Inherited: 0x0) 
struct FCharacterSpawnerDataBasedOnPreset
{
	UCharacterSpawnerPreset* Preset;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool OverrideCharacterClasses : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct TArray<APawn*> CharacterClasses;  // 0x10(0x10)

}; 
// Function ConZ.GameEventParticipantStatsWidget.IsValid
// Size: 0x1(Inherited: 0x0) 
struct FIsValid
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.CharacterSpawneeInfo
// Size: 0x10(Inherited: 0x0) 
struct FCharacterSpawneeInfo
{
	char pad_0[16];  // 0x0(0x10)

}; 
// Function ConZ.PrisonerAppearanceComponent.NetMulticast_UpdateHair
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_UpdateHair
{
	char hairParams;  // 0x0(0x1)

}; 
// Function ConZ.DropZoneGameEvent.GetPhaseTimeLeft
// Size: 0x4(Inherited: 0x0) 
struct FGetPhaseTimeLeft
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.PawnCharacterInfo
// Size: 0xB0(Inherited: 0x0) 
struct FPawnCharacterInfo
{
	APawn* SpawnablePawn;  // 0x0(0x8)
	struct TArray<APawn*> CharacterPreset;  // 0x8(0x10)
	float PoiCharacterIdleThresholdTime;  // 0x18(0x4)
	float ExteriorCharacterIdleThresholdTime;  // 0x1C(0x4)
	float InteriorCharacterIdleThresholdTime;  // 0x20(0x4)
	float MinShortRangeSpawnDistance;  // 0x24(0x4)
	float MaxShortRangeSpawnDistance;  // 0x28(0x4)
	float MinLongRangeSpawnDistance;  // 0x2C(0x4)
	float MaxLongRangeSpawnDistance;  // 0x30(0x4)
	float PawnCullDuration;  // 0x34(0x4)
	int32_t MinWildCharactersPerPawnGroup;  // 0x38(0x4)
	int32_t MaxWildCharactersPerPawnGroup;  // 0x3C(0x4)
	int32_t MaxExteriorCharactersPerPawnGroup;  // 0x40(0x4)
	int32_t MaxInteriorCharactersPerPawnGroup;  // 0x44(0x4)
	float PawnFieldOfView;  // 0x48(0x4)
	float SpawningFieldOfView;  // 0x4C(0x4)
	int32_t MaxAllowedPawns;  // 0x50(0x4)
	int32_t MaxAllowedWildPawns;  // 0x54(0x4)
	char pad_88[8];  // 0x58(0x8)
	int32_t MaxAllowedExteriorPawns;  // 0x60(0x4)
	char pad_100[8];  // 0x64(0x8)
	int32_t MaxAllowedInteriorPawns;  // 0x6C(0x4)
	char pad_112[8];  // 0x70(0x8)
	float ExteriorPawnAmountModifier;  // 0x78(0x4)
	char pad_124[8];  // 0x7C(0x8)
	float InteriorPawnAmountModifier;  // 0x84(0x4)
	char pad_136[8];  // 0x88(0x8)
	float WildPawnAmountModifier;  // 0x90(0x4)
	char pad_148[12];  // 0x94(0xC)
	struct TArray<struct FSpawnedPawnInfo> SpawnedPawns;  // 0xA0(0x10)

}; 
// Function ConZ.PhotoModePawn.SetGameAudioPaused
// Size: 0x1(Inherited: 0x0) 
struct FSetGameAudioPaused
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool paused : 1;  // 0x0(0x1)

}; 
// Function ConZ.MeleeSkill.GetTiredIdleAnimationFP
// Size: 0x8(Inherited: 0x0) 
struct FGetTiredIdleAnimationFP
{
	struct UAnimSequenceBase* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.WeaponActionClearMalfunctionSequence.ShowOnUI
// Size: 0x1(Inherited: 0x0) 
struct FShowOnUI
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.CharacterStats
// Size: 0x30(Inherited: 0x0) 
struct FCharacterStats
{
	char pad_0[8];  // 0x0(0x8)
	float FamePoints;  // 0x8(0x4)
	int32_t FameLevel;  // 0xC(0x4)
	float EventScore;  // 0x10(0x4)
	int32_t EventKills;  // 0x14(0x4)
	int32_t EventTeamKills;  // 0x18(0x4)
	int32_t EventDeaths;  // 0x1C(0x4)
	int32_t EventSuicides;  // 0x20(0x4)
	int32_t EventAssists;  // 0x24(0x4)
	int32_t EventHeadshots;  // 0x28(0x4)
	char pad_44_1 : 7;  // 0x2C(0x1)
	bool IsBanned : 1;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)

}; 
// Function ConZ.VehicleHitZoneManager.GetWheelTires
// Size: 0x10(Inherited: 0x0) 
struct FGetWheelTires
{
	struct TArray<struct FVehicleHitZoneData> ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.SpamSeverityConditions
// Size: 0x8(Inherited: 0x0) 
struct FSpamSeverityConditions
{
	float ResetDuration;  // 0x0(0x4)
	int32_t OffenceRepetitions;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.FirstPersonViewParameters
// Size: 0x28(Inherited: 0x0) 
struct FFirstPersonViewParameters
{
	struct FFloatInterval MinMaxViewPitch;  // 0x0(0x8)
	struct FFloatInterval MinMaxViewYaw;  // 0x8(0x8)
	struct FFloatInterval MinMaxViewYawInCombatMode;  // 0x10(0x8)
	struct FFloatInterval MinMaxViewYawIfBlocked;  // 0x18(0x8)
	struct UCurveLinearColor* MinMaxViewPitchByYaw;  // 0x20(0x8)

}; 
// Function ConZ.PrisonerAnimInstance.OnIdleStateExit
// Size: 0xB8(Inherited: 0x0) 
struct FOnIdleStateExit
{
	struct FAnimNode_StateMachine Machine;  // 0x0(0xB0)
	int32_t prevStateIndex;  // 0xB0(0x4)
	int32_t nextStateIndex;  // 0xB4(0x4)

}; 
// ScriptStruct ConZ.ChoppingRecipe
// Size: 0x98(Inherited: 0x0) 
struct FChoppingRecipe
{
	struct FText InteractionCaption;  // 0x0(0x18)
	struct UAkAudioEvent* ChopAudioEvent;  // 0x18(0x8)
	uint8_t  noiseLevel;  // 0x20(0x1)
	uint8_t  ChoppingMontage;  // 0x21(0x1)
	uint8_t  ChoppingMontageEnd;  // 0x22(0x1)
	char pad_35_1 : 7;  // 0x23(0x1)
	bool EnforceDroppingItemOnGround : 1;  // 0x23(0x1)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool ShouldResultUsesDependOnSourceHP : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	struct TArray<struct FChoppingIngredient> Ingredients;  // 0x28(0x10)
	struct FPossibleChoppingTools ToolRequiredToBeInRightHand;  // 0x38(0x10)
	struct TArray<struct FPossibleChoppingTools> AdditionalToolsRequired;  // 0x48(0x10)
	USkill* Skill;  // 0x58(0x8)
	float ExperiencePointsAwarded;  // 0x60(0x4)
	struct FChoppingParametersPerSkillLevel NoSkillLevelData;  // 0x64(0xC)
	struct FChoppingParametersPerSkillLevel BasicLevelData;  // 0x70(0xC)
	struct FChoppingParametersPerSkillLevel MediumLevelData;  // 0x7C(0xC)
	struct FChoppingParametersPerSkillLevel AdvancedLevelData;  // 0x88(0xC)
	char pad_148[4];  // 0x94(0x4)

}; 
// ScriptStruct ConZ.ChoppingParametersPerSkillLevel
// Size: 0xC(Inherited: 0x0) 
struct FChoppingParametersPerSkillLevel
{
	struct FExperienceDependentFloat ChoppingTime;  // 0x0(0x8)
	int32_t IngredientsQuantityBonus;  // 0x8(0x4)

}; 
// ScriptStruct ConZ.ExperienceDependentFloat
// Size: 0x8(Inherited: 0x0) 
struct FExperienceDependentFloat
{
	float ValueWhenExperienceIsMinimal;  // 0x0(0x4)
	float ValueWhenExperienceIsMaximal;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Jogging
// Size: 0x24(Inherited: 0x0) 
struct FPrisonerMovementSettings_Ground_Standing_Jogging
{
	struct FPrisonerGroundMovementParameters Default;  // 0x0(0xC)
	struct FPrisonerGroundMovementParameters MeleeCombat;  // 0xC(0xC)
	struct FPrisonerGroundMovementParameters WeaponAiming;  // 0x18(0xC)

}; 
// ScriptStruct ConZ.ChoppingTool2
// Size: 0x50(Inherited: 0x0) 
struct FChoppingTool2
{
	struct TArray<struct UBaseItemTag*> ItemTags;  // 0x0(0x10)
	UBaseItemTag* ItemTagClass;  // 0x10(0x8)
	struct TSoftClassPtr<UObject> ItemClass;  // 0x18(0x28)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool OverrideChoppingTime : 1;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	float ChoppingTimeMultiplier;  // 0x44(0x4)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool OverrideIngredientsQuantity : 1;  // 0x48(0x1)
	char pad_73[3];  // 0x49(0x3)
	int32_t IngredientsQuantityBonus;  // 0x4C(0x4)

}; 
// ScriptStruct ConZ.InventoryContainerClothesData
// Size: 0x20(Inherited: 0x0) 
struct FInventoryContainerClothesData
{
	struct TArray<struct FInventoryItemPositionPair> ItemsData;  // 0x0(0x10)
	struct UObject* Parent;  // 0x10(0x8)
	int32_t RepCounter;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ConZ.SelectedChoppingTool
// Size: 0x60(Inherited: 0x0) 
struct FSelectedChoppingTool
{
	struct AItem* Item;  // 0x0(0x8)
	struct FChoppingTool2 Tool;  // 0x8(0x50)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool IsRequiredToBeInHands : 1;  // 0x58(0x1)
	char pad_89[7];  // 0x59(0x7)

}; 
// ScriptStruct ConZ.FortificationData
// Size: 0x20(Inherited: 0x0) 
struct FFortificationData
{
	int32_t MarkerIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	UObject* FortificationClass;  // 0x8(0x8)
	struct FDbIntegerId OwnerUserProfileId;  // 0x10(0x8)
	float health;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.DropZoneEquipmentTable.OnTrackedItemDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnTrackedItemDestroyed
{
	struct AActor* Actor;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.CircularSegmentContainer
// Size: 0x18(Inherited: 0x0) 
struct FCircularSegmentContainer
{
	struct TArray<struct UCircularMenuSegmentWidget*> SegmentWidgets;  // 0x0(0x10)
	int32_t SegmentCountOverride;  // 0x10(0x4)
	float Offset;  // 0x14(0x4)

}; 
// ScriptStruct ConZ.CircularLayerData
// Size: 0x8(Inherited: 0x0) 
struct FCircularLayerData
{
	float CenterCutoffPercentage;  // 0x0(0x4)
	float Size;  // 0x4(0x4)

}; 
// Function ConZ.Vehicle.SetVehicleGearDown
// Size: 0x1(Inherited: 0x0) 
struct FSetVehicleGearDown
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.RepActionData
// Size: 0x3(Inherited: 0x0) 
struct FRepActionData
{
	uint8_t  Action;  // 0x0(0x1)
	char IndexParameter;  // 0x1(0x1)
	char Version;  // 0x2(0x1)

}; 
// Function ConZ.TimeControllableSpotLight.OnTimeOfDayChanged
// Size: 0x8(Inherited: 0x0) 
struct FOnTimeOfDayChanged
{
	struct AWeatherController2* sender;  // 0x0(0x8)

}; 
// Function ConZ.User.GetLastDirectConnectionAddress
// Size: 0x10(Inherited: 0x0) 
struct FGetLastDirectConnectionAddress
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.TraderMarker
// Size: 0xD0(Inherited: 0x70) 
struct FTraderMarker : public FSedentaryNPCMarker
{
	struct UTraderPersonalityDataAsset* TraderPersonality;  // 0x68(0x8)
	struct FTransform PurchasedTradeablesSpawnTransform;  // 0x70(0x30)
	struct FTransform DepotSpawnTransform;  // 0xA0(0x30)

}; 
// Function ConZ.PlayerRpcChannel.Server_RequestServerData
// Size: 0xC(Inherited: 0x0) 
struct FServer_RequestServerData
{
	int32_t RequestID;  // 0x0(0x4)
	struct FPlayerRpcChannelServerDataRequestNetSerializer request;  // 0x4(0x8)

}; 
// ScriptStruct ConZ.LandingEffectDataPerSeverity
// Size: 0x10(Inherited: 0x0) 
struct FLandingEffectDataPerSeverity
{
	struct UParticleSystem* ParticleSystem;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool SpawnParticlesInDirectionOfVelocity : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ItemActionSequence.Cancel
// Size: 0x1(Inherited: 0x0) 
struct FCancel
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Regular : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.ImageAssetToLoad
// Size: 0x18(Inherited: 0x0) 
struct FImageAssetToLoad
{
	struct FGameplayTag Name;  // 0x0(0x8)
	struct FString FilePath;  // 0x8(0x10)

}; 
// ScriptStruct ConZ.EntityId
// Size: 0x8(Inherited: 0x0) 
struct FEntityId
{
	int64_t Value;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ServerInfo
// Size: 0x50(Inherited: 0x0) 
struct FServerInfo
{
	struct FString Address;  // 0x0(0x10)
	int32_t Port;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct FString Name;  // 0x18(0x10)
	char PlayerCount;  // 0x28(0x1)
	char MaxPlayerCount;  // 0x29(0x1)
	char pad_42_1 : 7;  // 0x2A(0x1)
	bool PasswordProtected : 1;  // 0x2A(0x1)
	char pad_43[1];  // 0x2B(0x1)
	float ping;  // 0x2C(0x4)
	float InGameTime;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)
	struct FString Version;  // 0x38(0x10)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool IsComplete : 1;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)

}; 
// ScriptStruct ConZ.VehicleServiceData
// Size: 0x18(Inherited: 0x0) 
struct FVehicleServiceData
{
	char pad_0[16];  // 0x0(0x10)
	struct UVehicleServiceStationSaveObject* ServiceStationSaveObject;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.BaseInteractionVisitor
// Size: 0x20(Inherited: 0x0) 
struct FBaseInteractionVisitor
{
	char pad_0[32];  // 0x0(0x20)

}; 
// Function ConZ.PlayerRpcChannel.Cooking_Server_RemoveFavoriteRecipe
// Size: 0x1(Inherited: 0x0) 
struct FCooking_Server_RemoveFavoriteRecipe
{
	char recipeId;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.ConZBaseInteractionData
// Size: 0x18(Inherited: 0x0) 
struct FConZBaseInteractionData
{
	int64_t BaseId;  // 0x0(0x8)
	struct FVector BaseLocation;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ConZ.GameEventParameters
// Size: 0x188(Inherited: 0x0) 
struct FGameEventParameters
{
	float AnnounceDuration;  // 0x0(0x4)
	float CancelDuration;  // 0x4(0x4)
	float RoundDuration;  // 0x8(0x4)
	int32_t RoundLimit;  // 0xC(0x4)
	int32_t WinLimit;  // 0x10(0x4)
	float RespawnDelay;  // 0x14(0x4)
	float TimeoutDuration;  // 0x18(0x4)
	int32_t MinParticipants;  // 0x1C(0x4)
	int32_t MaxParticipants;  // 0x20(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool AllowRespawn : 1;  // 0x24(0x1)
	char pad_37_1 : 7;  // 0x25(0x1)
	bool FriendlyFire : 1;  // 0x25(0x1)
	char pad_38[2];  // 0x26(0x2)
	struct TArray<int32_t> TeamLimit;  // 0x28(0x10)
	int32_t EntryFee;  // 0x38(0x4)
	struct FGameEventRewardPoints PointsPerEnemyKill;  // 0x3C(0xC)
	struct FGameEventRewardPoints PointsPerTeamKill;  // 0x48(0xC)
	struct FGameEventRewardPoints PointsPerDeath;  // 0x54(0xC)
	struct FGameEventRewardPoints PointsPerSuicide;  // 0x60(0xC)
	struct FGameEventRewardPoints PointsPerAssist;  // 0x6C(0xC)
	struct FGameEventRewardPoints PointsPerHeadshot;  // 0x78(0xC)
	struct FGameEventRewardPoints PointsPerRoundWin;  // 0x84(0xC)
	struct TArray<struct FGameEventRewardPoints> PointsPerRank;  // 0x90(0x10)
	struct FGameEventRewardPoints PointsForParticipation;  // 0xA0(0xC)
	float ScoreToFameConversionFactor;  // 0xAC(0x4)
	struct TArray<struct UItemSelection*> PossiblePrimaryWeapons;  // 0xB0(0x10)
	struct TArray<struct UItemSelection*> PossibleSecondaryWeapons;  // 0xC0(0x10)
	struct TArray<struct UItemSelection*> PossibleTertiaryWeapons;  // 0xD0(0x10)
	struct TArray<struct UItemSelection*> PossibleOutfits;  // 0xE0(0x10)
	struct TArray<struct UItemSelection*> PossibleSupportItems;  // 0xF0(0x10)
	struct TArray<struct UItemSelection*> MandatoryGear;  // 0x100(0x10)
	struct FText EventName;  // 0x110(0x18)
	struct FText EventDescription;  // 0x128(0x18)
	struct FText PrerequisitesText;  // 0x140(0x18)
	struct FText WeaponText;  // 0x158(0x18)
	struct FText RewardsText;  // 0x170(0x18)

}; 
// ScriptStruct ConZ.RunningSkillParametersPerSkillLevel
// Size: 0x10(Inherited: 0x0) 
struct FRunningSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat MaxSpeedMultiplier;  // 0x0(0x8)
	struct FExperienceDependentFloat StaminaConsumptionMultiplier;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.ElementMorphQuery
// Size: 0x50(Inherited: 0x0) 
struct FElementMorphQuery
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool DebugSolo : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName QueryName;  // 0x4(0x8)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<struct FElementQueryMarker> Markers;  // 0x10(0x10)
	struct UStaticMesh* StaticMesh;  // 0x20(0x8)
	struct FElementSnapMarkerOverride MarkersOverride;  // 0x28(0x18)
	char pad_64[16];  // 0x40(0x10)

}; 
// Function ConZ.MetabolismBodyEffectProgressBar.OnInteractionButtonClicked
// Size: 0x1(Inherited: 0x0) 
struct FOnInteractionButtonClicked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsChecked : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventBase.SetParticipantTeam
// Size: 0x10(Inherited: 0x0) 
struct FSetParticipantTeam
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	int32_t TeamIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct ConZ.ElementSnapMarkerOverride
// Size: 0x18(Inherited: 0x0) 
struct FElementSnapMarkerOverride
{
	uint8_t  OverrideType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FName> SnapMarkersToRemove;  // 0x8(0x10)

}; 
// ScriptStruct ConZ.ModularElementSnapMarker
// Size: 0x60(Inherited: 0x0) 
struct FModularElementSnapMarker
{
	struct FName Name;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Transform;  // 0x10(0x30)
	struct FModularElementSnapMarkerSocket Socket;  // 0x40(0x18)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool InfluenceStability : 1;  // 0x58(0x1)
	char pad_89[3];  // 0x59(0x3)
	float Stability;  // 0x5C(0x4)

}; 
// ScriptStruct ConZ.ModularElementSnapMarkerSocket
// Size: 0x18(Inherited: 0x0) 
struct FModularElementSnapMarkerSocket
{
	UModularBaseBuildingSocketType* Type;  // 0x0(0x8)
	UModularBaseBuildingSocketType* InType;  // 0x8(0x8)
	UModularBaseBuildingSocketType* OutType;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.ConZBaseData
// Size: 0x140(Inherited: 0x0) 
struct FConZBaseData
{
	int64_t BaseId;  // 0x0(0x8)
	struct FString BaseName;  // 0x8(0x10)
	struct FVector2D BaseSize;  // 0x18(0x8)
	struct FVector BaseLocation;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)
	int64_t BaseOwnerPlayerId;  // 0x30(0x8)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool IsOwnedByPlayer : 1;  // 0x38(0x1)
	char pad_57[3];  // 0x39(0x3)
	struct FVector2D BaseBoundsMin;  // 0x3C(0x8)
	struct FVector2D BaseBoundsMax;  // 0x44(0x8)
	char pad_76[244];  // 0x4C(0xF4)

}; 
// Function ConZ.PrisonerMovementComponent.IsClimbingLadder
// Size: 0x1(Inherited: 0x0) 
struct FIsClimbingLadder
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.WeaponActionReloadSequence.GetReloadData
// Size: 0x30(Inherited: 0x0) 
struct FGetReloadData
{
	struct FWeaponReloadData ReturnValue;  // 0x0(0x30)

}; 
// ScriptStruct ConZ.ConZBaseElementData
// Size: 0xA0(Inherited: 0x0) 
struct FConZBaseElementData
{
	int64_t ElementID;  // 0x0(0x8)
	int64_t OwnerPlayerId;  // 0x8(0x8)
	int64_t CreatorPrisonerId;  // 0x10(0x8)
	struct FString OwnerName;  // 0x18(0x10)
	char pad_40[8];  // 0x28(0x8)
	struct FTransform Transform;  // 0x30(0x30)
	UObject* ElementClass;  // 0x60(0x8)
	float HealthPoints;  // 0x68(0x4)
	float Quality;  // 0x6C(0x4)
	char DoorElementStateFlags;  // 0x70(0x1)
	char pad_113[7];  // 0x71(0x7)
	struct TArray<UObject*> DoorUpgrades;  // 0x78(0x10)
	struct TArray<int32_t> CombinationsPerLock;  // 0x88(0x10)
	uint8_t  DoorAccessLevel;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)

}; 
// ScriptStruct ConZ.BaseElementDestructionZone
// Size: 0x2C(Inherited: 0x0) 
struct FBaseElementDestructionZone
{
	struct FBox Bounds;  // 0x0(0x1C)
	float DamageToItems;  // 0x1C(0x4)
	float FallDamagePerMeter;  // 0x20(0x4)
	float MaxFallDamage;  // 0x24(0x4)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool MustElementBeAboveZone : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool IgnoreElementsThatCantBePlacedOnOtherElements : 1;  // 0x29(0x1)
	char pad_42[2];  // 0x2A(0x2)

}; 
// Function ConZ.SentryAnimInstance2.GetTurnInPlaceElapsedTimeLeft
// Size: 0x4(Inherited: 0x0) 
struct FGetTurnInPlaceElapsedTimeLeft
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.BuoyancyTestPoint
// Size: 0x14(Inherited: 0x0) 
struct FBuoyancyTestPoint
{
	struct FVector Location;  // 0x0(0xC)
	float Radius;  // 0xC(0x4)
	float Density;  // 0x10(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetWeaponAnimationPoseOnWorkerThread
// Size: 0x10(Inherited: 0x0) 
struct FGetWeaponAnimationPoseOnWorkerThread
{
	uint8_t  animationPose;  // 0x0(0x1)
	uint8_t  stance;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct UAnimSequenceBase* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.ItemAction.CanBeSelected
// Size: 0x10(Inherited: 0x0) 
struct FCanBeSelected
{
	struct UItemActionDescription* Description;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ConZ.CharacterCreationMenuContext
// Size: 0x30(Inherited: 0x0) 
struct FCharacterCreationMenuContext
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsPreferringMultiplayer : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FString ServerIp;  // 0x8(0x10)
	int32_t ServerResponsePort;  // 0x18(0x4)
	int32_t ServerGameplayPort;  // 0x1C(0x4)
	struct FString ServerAuthToken;  // 0x20(0x10)

}; 
// ScriptStruct ConZ.CommonMaps
// Size: 0x78(Inherited: 0x0) 
struct FCommonMaps
{
	struct TSoftObjectPtr<UWorld> MainMenu;  // 0x0(0x28)
	struct TSoftObjectPtr<UWorld> CharacterCreationMenu;  // 0x28(0x28)
	struct TSoftObjectPtr<UWorld> Singleplayer;  // 0x50(0x28)

}; 
// Function ConZ.AudioStatics.GetGenderSwitchValue
// Size: 0xC(Inherited: 0x0) 
struct FGetGenderSwitchValue
{
	uint8_t  Value;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName ReturnValue;  // 0x4(0x8)

}; 
// Function ConZ.ItemObstructionStatics.OverlapBlocking
// Size: 0x120(Inherited: 0x0) 
struct FOverlapBlocking
{
	struct ACharacter* Character;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform obstructionTestCapsuleWorldTransform;  // 0x10(0x30)
	struct FItemObstructionTestCapsule obstructionTestCapsule;  // 0x40(0x50)
	struct FHitResult HitResult;  // 0x90(0x88)
	float PenetrationDepth;  // 0x118(0x4)
	char pad_284_1 : 7;  // 0x11C(0x1)
	bool ReturnValue : 1;  // 0x11C(0x1)
	char pad_285[3];  // 0x11D(0x3)

}; 
// Function ConZ.VehicleHitZoneManager.SetVehicleDoorHitMeshAttached
// Size: 0x8(Inherited: 0x0) 
struct FSetVehicleDoorHitMeshAttached
{
	int32_t doorIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool Value : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// ScriptStruct ConZ.ConZSliderStyle
// Size: 0x228(Inherited: 0x0) 
struct FConZSliderStyle
{
	struct FProgressBarStyle Slider;  // 0x0(0x1A0)
	struct FSlateBrush Thumb;  // 0x1A0(0x88)

}; 
// ScriptStruct ConZ.WaterQueryResult
// Size: 0xF0(Inherited: 0x0) 
struct FWaterQueryResult
{
	struct FVector Location;  // 0x0(0xC)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool InWaterIncludingWaves : 1;  // 0xC(0x1)
	char pad_13_1 : 7;  // 0xD(0x1)
	bool InWaterExcludingWaves : 1;  // 0xD(0x1)
	char pad_14_1 : 7;  // 0xE(0x1)
	bool IsBottomValid : 1;  // 0xE(0x1)
	char pad_15[1];  // 0xF(0x1)
	struct FVector Surface;  // 0x10(0xC)
	struct FVector Bottom;  // 0x1C(0xC)
	struct FVector Velocity;  // 0x28(0xC)
	float WaveHeight;  // 0x34(0x4)
	struct FVector WaveNormal;  // 0x38(0xC)
	char pad_68[12];  // 0x44(0xC)
	struct FVirtualizedWaterSpline WaterSpline;  // 0x50(0xA0)

}; 
// Function ConZ.ItemInventoryWidget2.OnExpandToggleClicked
// Size: 0x1(Inherited: 0x0) 
struct FOnExpandToggleClicked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool checked : 1;  // 0x0(0x1)

}; 
// Function ConZ.WeaponCrossbow.Server_HandleFiringEffects
// Size: 0x1(Inherited: 0x0) 
struct FServer_HandleFiringEffects
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool shotFired : 1;  // 0x0(0x1)

}; 
// Function ConZ.ConZWaterSplineRegistry.DrawQueryResult
// Size: 0x100(Inherited: 0x0) 
struct FDrawQueryResult
{
	struct FWaterQueryResult Result;  // 0x0(0xF0)
	float Duration;  // 0xF0(0x4)
	char pad_244[12];  // 0xF4(0xC)

}; 
// ScriptStruct ConZ.VirtualizedWaterSpline
// Size: 0xA0(Inherited: 0x0) 
struct FVirtualizedWaterSpline
{
	char pad_0[160];  // 0x0(0xA0)

}; 
// ScriptStruct ConZ.InventoryItemPositionPair
// Size: 0x28(Inherited: 0x0) 
struct FInventoryItemPositionPair
{
	struct FInventoryPositionDataRepHelper position;  // 0x0(0x20)
	struct UObject* Item;  // 0x20(0x8)

}; 
// ScriptStruct ConZ.PrisonerBodySimulationData_Effects
// Size: 0x50(Inherited: 0x0) 
struct FPrisonerBodySimulationData_Effects
{
	UPrisonerBodyCondition_Knockout* Knockout;  // 0x0(0x8)
	UPrisonerBodyCondition_BasicInjury* BasicInjury;  // 0x8(0x8)
	UPrisonerBodyCondition_BleedingInjury* BleedingInjury;  // 0x10(0x8)
	UPrisonerBodyCondition_Choking* Choking;  // 0x18(0x8)
	UPrisonerBodyCondition_FoodDisgust* FoodDisgust;  // 0x20(0x8)
	UPrisonerBodyCondition_TearGasExposure* TearGasExposure;  // 0x28(0x8)
	UPrisonerBodyEffect_Limping* Limping;  // 0x30(0x8)
	struct FPrisonerBodySimulationData_Effects_ExhaustionChange ExhaustionChange;  // 0x38(0x18)

}; 
// ScriptStruct ConZ.ConZPrisonerSpawnEquipmentProperties
// Size: 0x18(Inherited: 0x0) 
struct FConZPrisonerSpawnEquipmentProperties
{
	float Elevation;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ClearEquipment : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool OverrideDefaultOutfit : 1;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)
	struct UPrisonerLoadout* LoadoutFemale;  // 0x8(0x8)
	struct UPrisonerLoadout* LoadoutMale;  // 0x10(0x8)

}; 
// Function ConZ.ItemActionSequence.IsPlayingAnimation
// Size: 0x1(Inherited: 0x0) 
struct FIsPlayingAnimation
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.ConZOceanLocationProperties
// Size: 0x24(Inherited: 0x0) 
struct FConZOceanLocationProperties
{
	char pad_0[36];  // 0x0(0x24)

}; 
// ScriptStruct ConZ.EntitySetup_Component
// Size: 0x10(Inherited: 0x0) 
struct FEntitySetup_Component
{
	struct FName Name;  // 0x0(0x8)
	struct UEntityComponentSetup* Component;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.HoverClickButtonVisualInfo
// Size: 0x20(Inherited: 0x0) 
struct FHoverClickButtonVisualInfo
{
	struct FLinearColor BackgroundColor;  // 0x0(0x10)
	struct FLinearColor BorderColor;  // 0x10(0x10)

}; 
// Function ConZ.AdminCommand.CanEverBeExecuted
// Size: 0x20(Inherited: 0x0) 
struct FCanEverBeExecuted
{
	struct APlayerController* Controller;  // 0x0(0x8)
	struct FString reasonIfNot;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// ScriptStruct ConZ.GameEventTeamColours
// Size: 0x60(Inherited: 0x0) 
struct FGameEventTeamColours
{
	struct FLinearColor TeamName;  // 0x0(0x10)
	struct FLinearColor ParticipantStatsDarker;  // 0x10(0x10)
	struct FLinearColor ParticipantStatsLighter;  // 0x20(0x10)
	struct FLinearColor ParticipantStatsHighlighted;  // 0x30(0x10)
	struct FLinearColor ParticipantStatsDisabled;  // 0x40(0x10)
	struct FLinearColor ParticipantStatsMini;  // 0x50(0x10)

}; 
// ScriptStruct ConZ.RadiationSourceDescription
// Size: 0x60(Inherited: 0x0) 
struct FRadiationSourceDescription
{
	struct FTransform Transform;  // 0x0(0x30)
	struct FVector Extents;  // 0x30(0xC)
	struct FVector EpicenterLocation;  // 0x3C(0xC)
	float EpicenterRadius;  // 0x48(0x4)
	float MaxRadiationAmountIncreaseRate;  // 0x4C(0x4)
	float RadiationAmountIncreaseRateFalloffExponent;  // 0x50(0x4)
	float RadiationNoiseAmountScale;  // 0x54(0x4)
	float RadiationNoiseLocationScale;  // 0x58(0x4)
	char pad_92[4];  // 0x5C(0x4)

}; 
// ScriptStruct ConZ.MainPointSnappedUtilities
// Size: 0xC8(Inherited: 0x0) 
struct FMainPointSnappedUtilities
{
	char pad_0[160];  // 0x0(0xA0)
	struct TArray<struct FEntityId> _repSnappedKey;  // 0xA0(0x10)
	struct TArray<struct FEntityId> _repSnappedValue;  // 0xB0(0x10)
	char pad_192[8];  // 0xC0(0x8)

}; 
// ScriptStruct ConZ.CookingUtilitySlotInstance
// Size: 0x1F8(Inherited: 0xC) 
struct FCookingUtilitySlotInstance : public FFastArraySerializerItem
{
	char pad_12[44];  // 0xC(0x2C)
	struct FDbIntegerId _uniqueId;  // 0x38(0x8)
	struct FGameplayTag _utilityType;  // 0x40(0x8)
	char _usage;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)
	struct FEntityId _boundCookingUtility;  // 0x50(0x8)
	char pad_88[8];  // 0x58(0x8)
	struct UCookingRecipe* _boundRecipe;  // 0x60(0x8)
	struct UCookingRecipe* _clientReservedRecipe;  // 0x68(0x8)
	char pad_112[2];  // 0x70(0x2)
	uint16_t _repTemperature;  // 0x72(0x2)
	char pad_116[8];  // 0x74(0x8)
	uint16_t _repCookTime;  // 0x7C(0x2)
	char pad_126[10];  // 0x7E(0xA)
	char _cookQualityPacked;  // 0x88(0x1)
	char pad_137[7];  // 0x89(0x7)
	struct FEntityId _ownerCookingUtility;  // 0x90(0x8)
	char pad_152[32];  // 0x98(0x20)
	struct TArray<uint32_t> _packedLocations;  // 0xB8(0x10)
	struct TArray<char> _internalCoordinatesPacked;  // 0xC8(0x10)
	char pad_216[52];  // 0xD8(0x34)
	int32_t _slotItemTagArrayIndex;  // 0x10C(0x4)
	struct TWeakObjectPtr<AFoodItem> _resultItem;  // 0x110(0x8)
	char pad_280[84];  // 0x118(0x54)
	float _targetCookTime;  // 0x16C(0x4)
	char pad_368[4];  // 0x170(0x4)
	char pad_372_1 : 7;  // 0x174(0x1)
	bool _cookingFinished : 1;  // 0x174(0x1)
	char pad_373_1 : 7;  // 0x175(0x1)
	bool _cookingStartFailed : 1;  // 0x175(0x1)
	char pad_374[1];  // 0x176(0x1)
	char pad_375_1 : 7;  // 0x177(0x1)
	bool _cookingAborted : 1;  // 0x177(0x1)
	char pad_376[8];  // 0x178(0x8)
	struct FDbIntegerId _parentInstance;  // 0x180(0x8)
	char pad_392[112];  // 0x188(0x70)

}; 
// ScriptStruct ConZ.CookingResult
// Size: 0x28(Inherited: 0x0) 
struct FCookingResult
{
	struct TSoftClassPtr<UObject> Item;  // 0x0(0x28)

}; 
// ScriptStruct ConZ.RecipeIngredient
// Size: 0x30(Inherited: 0x0) 
struct FRecipeIngredient
{
	struct FText IngredientTitle;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool IsResource : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct TArray<struct FPossibleRecipeIngredient> PossibleIngredient;  // 0x20(0x10)

}; 
// ScriptStruct ConZ.EngineeringEventData
// Size: 0x8(Inherited: 0x0) 
struct FEngineeringEventData
{
	char pad_0[8];  // 0x0(0x8)

}; 
// Function ConZ.TextBoxWithLabel.OnShowPasswordToggle
// Size: 0x160(Inherited: 0x0) 
struct FOnShowPasswordToggle
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// ScriptStruct ConZ.CookingSortingDropdownEntryData
// Size: 0xA8(Inherited: 0x0) 
struct FCookingSortingDropdownEntryData
{
	struct FText DisplayName;  // 0x0(0x18)
	uint8_t  RecipesSort;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct FSlateBrush Icon;  // 0x20(0x88)

}; 
// Function ConZ.GameEventBorder.GetBorderCenter
// Size: 0xC(Inherited: 0x0) 
struct FGetBorderCenter
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// ScriptStruct ConZ.IgnitableItemIgnitionRequirements
// Size: 0x18(Inherited: 0x0) 
struct FIgnitableItemIgnitionRequirements
{
	struct TArray<struct UFireSourceItemTag*> PossibleItemTags;  // 0x0(0x10)
	int32_t Uses;  // 0x10(0x4)
	float usageWeight;  // 0x14(0x4)

}; 
// Function ConZ.DropZoneEquipmentTable.UntrackItem
// Size: 0x8(Inherited: 0x0) 
struct FUntrackItem
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.CookingUtilityMainSnapPoint
// Size: 0x48(Inherited: 0x0) 
struct FCookingUtilityMainSnapPoint
{
	struct FGameplayTag UtilitySlotType;  // 0x0(0x8)
	struct FVector LocationOffset;  // 0x8(0xC)
	float SnapRadius;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool CanAllUtilityTypesBePlacedOn : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct FGameplayTagContainer UtilityTypesThatCanBePlaced;  // 0x20(0x20)
	int32_t RepresentativeSlotId;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 
// Function ConZ.GameEventBase.GetMaxDurationLeft
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxDurationLeft
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.CookingUtilitySlot
// Size: 0x88(Inherited: 0x0) 
struct FCookingUtilitySlot
{
	struct FGameplayTag UtilitySlotType;  // 0x0(0x8)
	struct FVector LocationOffset;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)
	struct TArray<struct FVector> MovementEndpoints;  // 0x18(0x10)
	float CircularShapeRadius;  // 0x28(0x4)
	float ThermalConduction;  // 0x2C(0x4)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool CanAllUtilityTypesBePlacedOn : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)
	struct FGameplayTagContainer UtilityTypesThatCanBePlaced;  // 0x38(0x20)
	struct FVector CookMeshVisualOffset;  // 0x58(0xC)
	char pad_100[4];  // 0x64(0x4)
	struct UCookingUtilityUIDataAsset* CookingUtilityUIDataAsset;  // 0x68(0x8)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool HighlightSlot : 1;  // 0x70(0x1)
	char pad_113[23];  // 0x71(0x17)

}; 
// ScriptStruct ConZ.CookingUtilityUITableRow
// Size: 0x18(Inherited: 0x8) 
struct FCookingUtilityUITableRow : public FTableRowBase
{
	struct FGameplayTag UtilitySlotType;  // 0x8(0x8)
	struct UCookingUtilityUIDataAsset* CookingUtilityUIDataAsset;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.PhysicalHitReactData
// Size: 0x18(Inherited: 0x0) 
struct FPhysicalHitReactData
{
	struct FName ProfileName;  // 0x0(0x8)
	struct FName PelvisBoneName;  // 0x8(0x8)
	float InitialStrengthMultiplier;  // 0x10(0x4)
	float BlendDuration;  // 0x14(0x4)

}; 
// ScriptStruct ConZ.CorpsePoseData
// Size: 0x40(Inherited: 0x0) 
struct FCorpsePoseData
{
	struct FVector_NetQuantize Location;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct FQuat Rotation;  // 0x10(0x10)
	struct FVector_NetQuantize LinearVelocity;  // 0x20(0xC)
	struct FVector_NetQuantize AngularVelocity;  // 0x2C(0xC)
	char pad_56[8];  // 0x38(0x8)

}; 
// ScriptStruct ConZ.CraftingPair
// Size: 0x28(Inherited: 0x0) 
struct FCraftingPair
{
	AItem* CraftedItem;  // 0x0(0x8)
	AItem* CraftingItem;  // 0x8(0x8)
	int32_t CraftedItemCount;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct TArray<AItem*> BonusItems;  // 0x18(0x10)

}; 
// Function ConZ.GameEventBase.GetCurrentRound
// Size: 0x4(Inherited: 0x0) 
struct FGetCurrentRound
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PlayerRpcChannel.SurvivalStats_Server_HandlePlayerLogout
// Size: 0x8(Inherited: 0x0) 
struct FSurvivalStats_Server_HandlePlayerLogout
{
	struct APlayerController* PlayerController;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.CraftingItem
// Size: 0x30(Inherited: 0x0) 
struct FCraftingItem
{
	struct FString Description;  // 0x0(0x10)
	struct TArray<struct FPossibleItem> PossibleItems;  // 0x10(0x10)
	uint8_t  ScalingType;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)
	struct UAkAudioEvent* FillSound;  // 0x28(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Mechanic_Client_UpdateServiceDataOnClient
// Size: 0x58(Inherited: 0x0) 
struct FMechanic_Client_UpdateServiceDataOnClient
{
	struct AMechanic* Mechanic;  // 0x0(0x8)
	struct FVehicleAttachmentPriceDataPerClassMap Delta;  // 0x8(0x50)

}; 
// ScriptStruct ConZ.FundsOverviewUIData
// Size: 0x60(Inherited: 0x0) 
struct FFundsOverviewUIData
{
	char pad_0[96];  // 0x0(0x60)

}; 
// ScriptStruct ConZ.CraftingSkillLevelData
// Size: 0x14(Inherited: 0x0) 
struct FCraftingSkillLevelData
{
	float CraftingTime;  // 0x0(0x4)
	float ProcessingTime;  // 0x4(0x4)
	float Points;  // 0x8(0x4)
	float Probability_Add;  // 0xC(0x4)
	float Probability_Multiply;  // 0x10(0x4)

}; 
// ScriptStruct ConZ.PrisonerFirstPersonSubviewBlendOverride
// Size: 0x8(Inherited: 0x0) 
struct FPrisonerFirstPersonSubviewBlendOverride
{
	uint8_t  Source;  // 0x0(0x1)
	uint8_t  Target;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	float Duration;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.ItemClassesArray
// Size: 0x10(Inherited: 0x0) 
struct FItemClassesArray
{
	struct TArray<AItem*> ItemClasses;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.InventoryItemComponentElement
// Size: 0x30(Inherited: 0x0) 
struct FInventoryItemComponentElement
{
	char pad_0[48];  // 0x0(0x30)

}; 
// ScriptStruct ConZ.PrisonerAppearance_SkinTone
// Size: 0x30(Inherited: 0x0) 
struct FPrisonerAppearance_SkinTone
{
	struct FLinearColor PreviewColor;  // 0x0(0x10)
	struct FLinearColor SkinColorOffset;  // 0x10(0x10)
	struct FLinearColor AverageLipColor;  // 0x20(0x10)

}; 
// ScriptStruct ConZ.CraftingRecipe
// Size: 0x38(Inherited: 0x0) 
struct FCraftingRecipe
{
	struct TArray<struct FCraftingRecipeCraftableItem> CraftableItems;  // 0x0(0x10)
	struct TArray<struct FCraftingRecipeCraftingIngredient> CraftingIngredients;  // 0x10(0x10)
	USkill* SkillNeeded;  // 0x20(0x8)
	uint8_t  SkillLevelNeeded;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct UCraftableItem* CraftableItem;  // 0x30(0x8)

}; 
// Function ConZ.InteractionComponent.Server_InteractWithBaseElement
// Size: 0x50(Inherited: 0x0) 
struct FServer_InteractWithBaseElement
{
	uint8_t  interactionType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FConZBaseInteractionData baseData;  // 0x8(0x18)
	struct FConZBaseElementInteractionData elementData;  // 0x20(0x30)

}; 
// ScriptStruct ConZ.CraftingRecipeCraftingIngredient
// Size: 0x18(Inherited: 0x0) 
struct FCraftingRecipeCraftingIngredient
{
	struct TArray<struct FCraftingRecipeCraftingItem> CraftingItems;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool IsTool : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool IsOptional : 1;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)

}; 
// Function ConZ.CustomZoneSettingsRegionDetails.HandleShapeChange
// Size: 0x18(Inherited: 0x0) 
struct FHandleShapeChange
{
	int32_t oldValue;  // 0x0(0x4)
	int32_t NewValue;  // 0x4(0x4)
	struct UWidget* Source;  // 0x8(0x8)
	uint8_t  changeSource;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ConZ.PowerCableMeshInfo
// Size: 0x10(Inherited: 0x0) 
struct FPowerCableMeshInfo
{
	struct UStaticMesh* Mesh;  // 0x0(0x8)
	float Length;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct ConZ.CraftingRecipeCraftableItem
// Size: 0x10(Inherited: 0x0) 
struct FCraftingRecipeCraftableItem
{
	AItem* ItemClass;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool EnoughSkill : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ConZ.CraftingSlot
// Size: 0x18(Inherited: 0x0) 
struct FCraftingSlot
{
	struct FString SlotName;  // 0x0(0x10)
	UCraftingSlotType* SlotType;  // 0x10(0x8)

}; 
// Function ConZ.DropZoneEquipmentTable.TrackItem
// Size: 0x8(Inherited: 0x0) 
struct FTrackItem
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.CriminalRecordUIData
// Size: 0x238(Inherited: 0x0) 
struct FCriminalRecordUIData
{
	char pad_0[568];  // 0x0(0x238)

}; 
// Function ConZ.GameEventBase.SetParameters
// Size: 0x188(Inherited: 0x0) 
struct FSetParameters
{
	struct FGameEventParameters parameters;  // 0x0(0x188)

}; 
// Function ConZ.WeaponActionSequence.SetNextMontageSection
// Size: 0x8(Inherited: 0x0) 
struct FSetNextMontageSection
{
	struct FName NextSection;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.SkillTemplateUIData
// Size: 0x38(Inherited: 0x0) 
struct FSkillTemplateUIData
{
	char pad_0[56];  // 0x0(0x38)

}; 
// ScriptStruct ConZ.DamageTargetTypeMapping
// Size: 0x18(Inherited: 0x0) 
struct FDamageTargetTypeMapping
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<UObject*> Classes;  // 0x8(0x10)

}; 
// Function ConZ.CTFGameEvent.GetFlagB
// Size: 0x8(Inherited: 0x0) 
struct FGetFlagB
{
	struct ACTFFlag* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerCorpse.GetHairMeshComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetHairMeshComponent
{
	struct USkeletalMeshComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.PlayerRpcChannel.ItemContainer_Client_TriggerFailurePenalty
// Size: 0x18(Inherited: 0x0) 
struct FItemContainer_Client_TriggerFailurePenalty
{
	struct FString runtimeId;  // 0x0(0x10)
	struct AActor* triggeringActor;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.MeshMaterialPair
// Size: 0x10(Inherited: 0x0) 
struct FMeshMaterialPair
{
	struct USkeletalMesh* SkeletalMesh;  // 0x0(0x8)
	struct UMaterialInstance* EquippedMaterialOverride;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.DcxVehicleTireParticleData
// Size: 0x14(Inherited: 0x0) 
struct FDcxVehicleTireParticleData
{
	float MinLateralSlip;  // 0x0(0x4)
	float MaxLateralSlip;  // 0x4(0x4)
	float MinLongitudinalSlip;  // 0x8(0x4)
	float MaxLongitudinalSlip;  // 0xC(0x4)
	float ParticleScaleModifier;  // 0x10(0x4)

}; 
// ScriptStruct ConZ.DeathmatchParameters
// Size: 0x14(Inherited: 0x0) 
struct FDeathmatchParameters
{
	int32_t RoundScoreLimit;  // 0x0(0x4)
	float AreaRestrictionInterval;  // 0x4(0x4)
	float AreaRestrictionDuration;  // 0x8(0x4)
	float AreaRestrictionStep;  // 0xC(0x4)
	float BarrierHeatUpDuration;  // 0x10(0x4)

}; 
// ScriptStruct ConZ.TooltipPanelData
// Size: 0x20(Inherited: 0x0) 
struct FTooltipPanelData
{
	UObject* ItemClass;  // 0x0(0x8)
	UUserWidget* WidgetClass;  // 0x8(0x8)
	uint8_t  PanelType;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	int32_t Layer;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool IsEditorOnly : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.GameEventBase.ScheduleEvent
// Size: 0x1(Inherited: 0x0) 
struct FScheduleEvent
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.WheelData
// Size: 0x28(Inherited: 0x0) 
struct FWheelData
{
	char pad_0[8];  // 0x0(0x8)
	struct UStaticMeshComponent* WheelMesh;  // 0x8(0x8)
	char pad_16[24];  // 0x10(0x18)

}; 
// ScriptStruct ConZ.DialogInfoContainer
// Size: 0x10(Inherited: 0x0) 
struct FDialogInfoContainer
{
	struct TArray<struct FDialogueInfo> DialogInfos;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.InventoryStackMemberData
// Size: 0x8(Inherited: 0x0) 
struct FInventoryStackMemberData
{
	int32_t position;  // 0x0(0x4)
	int32_t Size;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.DialogueInfo
// Size: 0x28(Inherited: 0x0) 
struct FDialogueInfo
{
	struct UAkAudioEvent* VoiceOver;  // 0x0(0x8)
	struct FText Text;  // 0x8(0x18)
	float Duration;  // 0x20(0x4)
	uint8_t  DialogType;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)

}; 
// ScriptStruct ConZ.DistantLevelDescription
// Size: 0xA0(Inherited: 0x0) 
struct FDistantLevelDescription
{
	struct FString Name;  // 0x0(0x10)
	struct FTransform Transform;  // 0x10(0x30)
	uint8_t  MeshStreamingBehavior;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	float MaxDrawDistance;  // 0x44(0x4)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool NeverDistanceCull : 1;  // 0x48(0x1)
	char pad_73[3];  // 0x49(0x3)
	struct FBoxSphereBounds MeshBounds;  // 0x4C(0x1C)
	struct TSoftObjectPtr<UStaticMesh> CollisionMesh;  // 0x68(0x28)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> MeshLODs;  // 0x90(0x10)

}; 
// ScriptStruct ConZ.DummyCollisionCapsuleInfo
// Size: 0x50(Inherited: 0x0) 
struct FDummyCollisionCapsuleInfo
{
	struct TWeakObjectPtr<AActor> AttachParent;  // 0x0(0x8)
	struct FGameplayTag Attachment;  // 0x8(0x8)
	struct FTransform RelativeTransform;  // 0x10(0x30)
	float UnscaledRadius;  // 0x40(0x4)
	float UnscaledHalfHeight;  // 0x44(0x4)
	char pad_72[8];  // 0x48(0x8)

}; 
// ScriptStruct ConZ.WeaponUnloadAmmoData
// Size: 0x10(Inherited: 0x0) 
struct FWeaponUnloadAmmoData
{
	UObject* ActionSequenceClass;  // 0x0(0x8)
	int32_t AmmoCount;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct ConZ.CurrencyDescription
// Size: 0x68(Inherited: 0x0) 
struct FCurrencyDescription
{
	struct FString CurrencySymbol;  // 0x0(0x10)
	struct FText CurrencyName;  // 0x10(0x18)
	struct FString ConfigFileSymbol;  // 0x28(0x10)
	struct FSlateColor UITextColor;  // 0x38(0x28)
	uint8_t  RequiredBankCardTypeToPerformTransactions;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool MustBeOwnerOfBankCard : 1;  // 0x61(0x1)
	char pad_98[6];  // 0x62(0x6)

}; 
// ScriptStruct ConZ.DamageOverTimeUpdateGroup
// Size: 0x18(Inherited: 0x0) 
struct FDamageOverTimeUpdateGroup
{
	float UpdateInterval;  // 0x0(0x4)
	char pad_4[20];  // 0x4(0x14)

}; 
// ScriptStruct ConZ.EntityToCreateOnStartupParams
// Size: 0x10(Inherited: 0x0) 
struct FEntityToCreateOnStartupParams
{
	UEntitySetup* Entity;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool CreateOnServer : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool CreateOnClient : 1;  // 0x9(0x1)
	char pad_10_1 : 7;  // 0xA(0x1)
	bool CreateInShippingBuilds : 1;  // 0xA(0x1)
	char pad_11[5];  // 0xB(0x5)

}; 
// ScriptStruct ConZ.ExplosionRadialDamageEvent
// Size: 0x98(Inherited: 0x48) 
struct FExplosionRadialDamageEvent : public FScumRadialDamageEvent
{
	UDamageCustomization* DamageCustomizationClass;  // 0x48(0x8)
	float force;  // 0x50(0x4)
	char pad_84[4];  // 0x54(0x4)
	struct FTargetTypeDamageMultiplier TargetTypeMultiplier;  // 0x58(0x10)
	struct UObject* DamageDealer;  // 0x68(0x8)
	char pad_112[40];  // 0x70(0x28)

}; 
// ScriptStruct ConZ.VehicleAttachmentAssociatedTradeables
// Size: 0x50(Inherited: 0x0) 
struct FVehicleAttachmentAssociatedTradeables
{
	struct TSoftClassPtr<UObject> RepairServiceClass;  // 0x0(0x28)
	struct TSoftClassPtr<UObject> InstallationServiceClass;  // 0x28(0x28)

}; 
// ScriptStruct ConZ.FamePointPenalties
// Size: 0x18(Inherited: 0x0) 
struct FFamePointPenalties
{
	float IronLockLockpick;  // 0x0(0x4)
	float SilverLockLockpick;  // 0x4(0x4)
	float GoldLockLockpick;  // 0x8(0x4)
	float VehiclePurchased;  // 0xC(0x4)
	float WheelBarrowPurchased;  // 0x10(0x4)
	float PrisonerCommittedSuicide;  // 0x14(0x4)

}; 
// Function ConZ.GameEventBorder.SetEnablePawnCollision
// Size: 0x1(Inherited: 0x0) 
struct FSetEnablePawnCollision
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.FarmingSkillParametersPerSkillLevel
// Size: 0x70(Inherited: 0x0) 
struct FFarmingSkillParametersPerSkillLevel
{
	float PlantingSeedTime;  // 0x0(0x4)
	float PlantingSeedTimeDecreaseByStrength;  // 0x4(0x4)
	float FertilizingTime;  // 0x8(0x4)
	float WateringTime;  // 0xC(0x4)
	float WeedingByHandTime;  // 0x10(0x4)
	float WeedingByToolTime;  // 0x14(0x4)
	float ApplyWeedRepellentTime;  // 0x18(0x4)
	float ApplyPesticideTime;  // 0x1C(0x4)
	float GardenSlotCraftTime;  // 0x20(0x4)
	float RemovePlantTime;  // 0x24(0x4)
	float RemovePlantTimeDecreaseByStrength;  // 0x28(0x4)
	float DestroyGardenTime;  // 0x2C(0x4)
	float DestroyGardenTimeDecreaseByStrength;  // 0x30(0x4)
	float BaseMultiplier;  // 0x34(0x4)
	float ExpMultiplier;  // 0x38(0x4)
	float SuccessfulHarvestChancePercentage;  // 0x3C(0x4)
	struct FInt32Interval SuccessfulHarvestNumItemsToSpawn;  // 0x40(0x8)
	float SkillLevelBonusExperience;  // 0x48(0x4)
	float PlantingSeedExperience;  // 0x4C(0x4)
	float AddFertilizerExperience;  // 0x50(0x4)
	float WateringPlantExperiencePerLiter;  // 0x54(0x4)
	float ReachingNextPlantStageExperience;  // 0x58(0x4)
	float WeedingByHandExperience;  // 0x5C(0x4)
	float WeedingByToolExperience;  // 0x60(0x4)
	float ApplyWeedRepellentExperience;  // 0x64(0x4)
	float ApplyPesticideExperience;  // 0x68(0x4)
	float CraftGardenExperience;  // 0x6C(0x4)

}; 
// ScriptStruct ConZ.FillItemWithReplenishableResourceInteractionData
// Size: 0x40(Inherited: 0x0) 
struct FFillItemWithReplenishableResourceInteractionData
{
	struct FText InteractionCaptionOverride;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool CanShowDrinkAsDefaultInteraction : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	float BaseActionDuration;  // 0x1C(0x4)
	float ActionDurationPerAmountFilled;  // 0x20(0x4)
	float ResourceFillingExperiencePerAmount;  // 0x24(0x4)
	struct UAnimMontage* PrisonerFillingMontage;  // 0x28(0x8)
	struct UAkAudioEvent* StartItemNoiseAudioEvent;  // 0x30(0x8)
	struct UAkAudioEvent* StopItemNoiseAudioEvent;  // 0x38(0x8)

}; 
// Function ConZ.BCULockRegistry.UpdateBCULockRegistryOnClientWithUserProfileId
// Size: 0x8(Inherited: 0x0) 
struct FUpdateBCULockRegistryOnClientWithUserProfileId
{
	struct FDbIntegerId ServerUserProfileId;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.MissionLevelInfo
// Size: 0x10(Inherited: 0x0) 
struct FMissionLevelInfo
{
	char pad_0[16];  // 0x0(0x10)

}; 
// ScriptStruct ConZ.FishingMinigameData
// Size: 0x74(Inherited: 0x0) 
struct FFishingMinigameData
{
	char pad_0[116];  // 0x0(0x74)

}; 
// Function ConZ.VehicleBaseMountSlot.OnRep_AttachmentOwner
// Size: 0x8(Inherited: 0x0) 
struct FOnRep_AttachmentOwner
{
	struct UVehicleAttachment* oldAttachmentOwner;  // 0x0(0x8)

}; 
// Function ConZ.Vehicle.VehicleHasFuel
// Size: 0x1(Inherited: 0x0) 
struct FVehicleHasFuel
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.FishingData
// Size: 0x18(Inherited: 0x0) 
struct FFishingData
{
	struct FVector Location;  // 0x0(0xC)
	float HookDepth;  // 0xC(0x4)
	char pad_16[8];  // 0x10(0x8)

}; 
// ScriptStruct ConZ.PrisonerFallingPosePair
// Size: 0x2(Inherited: 0x0) 
struct FPrisonerFallingPosePair
{
	uint8_t  poseA;  // 0x0(0x1)
	uint8_t  poseB;  // 0x1(0x1)

}; 
// ScriptStruct ConZ.FloatingWidgetUIData
// Size: 0x1C(Inherited: 0x0) 
struct FFloatingWidgetUIData
{
	char pad_0[28];  // 0x0(0x1C)

}; 
// ScriptStruct ConZ.TreeCanopySphere
// Size: 0x14(Inherited: 0x0) 
struct FTreeCanopySphere
{
	struct FVector Center;  // 0x0(0xC)
	float Radius;  // 0xC(0x4)
	float CanopyDensity;  // 0x10(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Switch_Server_Press
// Size: 0x8(Inherited: 0x0) 
struct FSwitch_Server_Press
{
	struct ASwitch* Actor;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.BuildingData
// Size: 0x28(Inherited: 0x0) 
struct FBuildingData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsCleared : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FWindowMarkerModifier> WindowMarkerModifiers;  // 0x8(0x10)
	struct TArray<struct FFortificationData> Fortifications;  // 0x18(0x10)

}; 
// Function ConZ.MiscStatics.IsUserDeveloper
// Size: 0x18(Inherited: 0x0) 
struct FIsUserDeveloper
{
	struct FString UserId;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ConZ.EditableParameter
// Size: 0x10(Inherited: 0x0) 
struct FEditableParameter
{
	struct FString Name;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.DamageMultipliers
// Size: 0x18(Inherited: 0x0) 
struct FDamageMultipliers
{
	AActor* DamageCauserClass;  // 0x0(0x8)
	struct TArray<struct FMultiplierByClass> DamageMultipliers;  // 0x8(0x10)

}; 
// Function ConZ.LockpickingWidget.GetTensionToolCount
// Size: 0x4(Inherited: 0x0) 
struct FGetTensionToolCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.ParameterInt32
// Size: 0x18(Inherited: 0x10) 
struct FParameterInt32 : public FEditableParameter
{
	int32_t Value;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.MeleeSkill.GetWalkingIdleAnimationFP
// Size: 0x8(Inherited: 0x0) 
struct FGetWalkingIdleAnimationFP
{
	struct UAnimSequenceBase* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameState.GetWaterSplineRegistry
// Size: 0x8(Inherited: 0x0) 
struct FGetWaterSplineRegistry
{
	struct AConZWaterSplineRegistry* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.WeaponActionSequence.OnMontageBlendingOutStarted
// Size: 0x10(Inherited: 0x0) 
struct FOnMontageBlendingOutStarted
{
	struct UAnimMontage* Montage;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool interrupted : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ConZ.SpawnArea
// Size: 0x14(Inherited: 0x0) 
struct FSpawnArea
{
	struct FVector Center;  // 0x0(0xC)
	float Radius;  // 0xC(0x4)
	int32_t TeamIndex;  // 0x10(0x4)

}; 
// Function ConZ.WeaponCrossbow.SetIsCocked
// Size: 0x1(Inherited: 0x0) 
struct FSetIsCocked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.HeatSource
// Size: 0xA8(Inherited: 0x0) 
struct FHeatSource
{
	struct FVector Location;  // 0x0(0xC)
	struct FHeatSourceParameters parameters;  // 0xC(0x24)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool IsUsingFuelSimulation : 1;  // 0x30(0x1)
	char pad_49[35];  // 0x31(0x23)
	int32_t TimesUpdatedWithoutMoving;  // 0x54(0x4)
	char pad_88[80];  // 0x58(0x50)

}; 
// ScriptStruct ConZ.MeleeSkillExperienceAwards
// Size: 0x10(Inherited: 0x0) 
struct FMeleeSkillExperienceAwards
{
	float Hit;  // 0x0(0x4)
	float Kill;  // 0x4(0x4)
	float ComboHitMultiplier;  // 0x8(0x4)
	float SkillLevelBonus;  // 0xC(0x4)

}; 
// ScriptStruct ConZ.HuntingBiomeDescription
// Size: 0x70(Inherited: 0x0) 
struct FHuntingBiomeDescription
{
	struct FTransform Transform;  // 0x0(0x30)
	float Radius;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)
	struct FHuntingBiomeParameters parameters;  // 0x38(0x38)

}; 
// ScriptStruct ConZ.InteractionQueryParameters
// Size: 0x40(Inherited: 0x0) 
struct FInteractionQueryParameters
{
	struct FVector InteractionLocation;  // 0x0(0xC)
	struct FVector InteractionNormal;  // 0xC(0xC)
	struct TWeakObjectPtr<UPrimitiveComponent> Component;  // 0x18(0x8)
	int32_t InstanceIndex;  // 0x20(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool IsInDroneMode : 1;  // 0x24(0x1)
	char pad_37[27];  // 0x25(0x1B)

}; 
// ScriptStruct ConZ.InventoryContainerClothesElement
// Size: 0x20(Inherited: 0x0) 
struct FInventoryContainerClothesElement
{
	char pad_0[32];  // 0x0(0x20)

}; 
// Function ConZ.ChestItem.CanViewName
// Size: 0x10(Inherited: 0x0) 
struct FCanViewName
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.MiscStatics.DrawCircle
// Size: 0x48(Inherited: 0x0) 
struct FDrawCircle
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Center;  // 0x8(0xC)
	struct FVector X;  // 0x14(0xC)
	struct FVector Y;  // 0x20(0xC)
	float Radius;  // 0x2C(0x4)
	float numberOfSides;  // 0x30(0x4)
	struct FColor Color;  // 0x34(0x4)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool persistentLines : 1;  // 0x38(0x1)
	char pad_57[3];  // 0x39(0x3)
	float LifeTime;  // 0x3C(0x4)
	char DepthPriority;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	float Thickness;  // 0x44(0x4)

}; 
// ScriptStruct ConZ.Inv2021_InventoryPosition
// Size: 0x8(Inherited: 0x0) 
struct FInv2021_InventoryPosition
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct ConZ.Inv2021_InventoryPosition2D
// Size: 0x18(Inherited: 0x8) 
struct FInv2021_InventoryPosition2D : public FInv2021_InventoryPosition
{
	int32_t X;  // 0x8(0x4)
	int32_t Y;  // 0xC(0x4)
	char Rotation;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.WeaponBow.Server_SetBowState
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetBowState
{
	uint8_t  State;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.InventoryContainerHandsHolstersData
// Size: 0x20(Inherited: 0x0) 
struct FInventoryContainerHandsHolstersData
{
	struct TArray<struct FInventoryItemPositionPair> ItemsData;  // 0x0(0x10)
	struct UObject* Parent;  // 0x10(0x8)
	int32_t RepCounter;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ConZ.InventoryContainerSelectionRepData
// Size: 0x28(Inherited: 0x0) 
struct FInventoryContainerSelectionRepData
{
	struct TArray<struct UObject*> Items;  // 0x0(0x10)
	struct TArray<struct FInventoryItemPositionPair> ItemsData;  // 0x10(0x10)
	struct UObject* Parent;  // 0x20(0x8)

}; 
// ScriptStruct ConZ.InventoryNodeWidgetData
// Size: 0x40(Inherited: 0x0) 
struct FInventoryNodeWidgetData
{
	struct FName Slot;  // 0x0(0x8)
	uint8_t  Type;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float NumberData;  // 0xC(0x4)
	int32_t IntegerNumberData;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct FText TextData;  // 0x18(0x18)
	struct UTexture2D* IconData;  // 0x30(0x8)
	uint8_t  VisibilityData;  // 0x38(0x1)
	char pad_57_1 : 7;  // 0x39(0x1)
	bool IsAnimated : 1;  // 0x39(0x1)
	char pad_58[2];  // 0x3A(0x2)
	float Opacity;  // 0x3C(0x4)

}; 
// Function ConZ.WeaponAttachment.GetOwningWeapon
// Size: 0x8(Inherited: 0x0) 
struct FGetOwningWeapon
{
	struct AWeapon* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ItemContainersArray
// Size: 0x10(Inherited: 0x0) 
struct FItemContainersArray
{
	struct TArray<struct AItemContainer*> _itemContainers;  // 0x0(0x10)

}; 
// Function ConZ.ConZEconomyManager.NetMulticast_UpdateGoldPriceMasterMultiplier
// Size: 0x8(Inherited: 0x0) 
struct FNetMulticast_UpdateGoldPriceMasterMultiplier
{
	int32_t dataVersion;  // 0x0(0x4)
	float goldPriceMasterMultiplier;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.ItemContainerRepData
// Size: 0x20(Inherited: 0x0) 
struct FItemContainerRepData
{
	struct TArray<UObject*> Locks;  // 0x0(0x10)
	struct TArray<int32_t> RemainingNeutralizationAttemptsPerLock;  // 0x10(0x10)

}; 
// ScriptStruct ConZ.ItemGeneralParametersTableRow
// Size: 0x60(Inherited: 0x8) 
struct FItemGeneralParametersTableRow : public FTableRowBase
{
	struct FText _caption;  // 0x8(0x18)
	struct FText _description;  // 0x20(0x18)
	struct TSoftObjectPtr<UTexture2D> _outsideInventoryIcon;  // 0x38(0x28)

}; 
// Function ConZ.GameEventBase.GetWinningTeamsPerRound
// Size: 0x10(Inherited: 0x0) 
struct FGetWinningTeamsPerRound
{
	struct TArray<int32_t> ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.ItemSpawnerMarker
// Size: 0x160(Inherited: 0x0) 
struct FItemSpawnerMarker
{
	struct FTransform Transform;  // 0x0(0x30)
	struct FItemSpawnerDataBasedOnPreset Spawner;  // 0x30(0x90)
	struct FItemSpawnerPresetWithOverrides SpawnerPreset;  // 0xC0(0xA0)

}; 
// Function ConZ.MissionManager.Server_DestroyCompletedMission
// Size: 0x8(Inherited: 0x0) 
struct FServer_DestroyCompletedMission
{
	struct AMission* Mission;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ItemSpawnerPresetWithOverrides
// Size: 0xA0(Inherited: 0x0) 
struct FItemSpawnerPresetWithOverrides
{
	UItemSpawnerPreset2* Preset;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool OverrideNodes : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct TArray<struct FItemSpawnerPreset_Node> Nodes;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool OverrideItems : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)
	struct TArray<struct FItemSpawnerPreset_Item> Items;  // 0x28(0x10)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool OverrideFixedItems : 1;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)
	struct TArray<struct TSoftClassPtr<UObject>> FixedItems;  // 0x40(0x10)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool OverrideAlwaysSpawn : 1;  // 0x50(0x1)
	char pad_81_1 : 7;  // 0x51(0x1)
	bool AlwaysSpawn : 1;  // 0x51(0x1)
	char pad_82_1 : 7;  // 0x52(0x1)
	bool OverrideProbability : 1;  // 0x52(0x1)
	char pad_83[1];  // 0x53(0x1)
	float Probability;  // 0x54(0x4)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool OverrideQuantity : 1;  // 0x58(0x1)
	char pad_89[3];  // 0x59(0x3)
	struct FInt32Interval Quantity;  // 0x5C(0x8)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool OverrideAllowDuplicates : 1;  // 0x64(0x1)
	char pad_101_1 : 7;  // 0x65(0x1)
	bool AllowDuplicates : 1;  // 0x65(0x1)
	char pad_102_1 : 7;  // 0x66(0x1)
	bool OverrideShouldFilterItemsByZone : 1;  // 0x66(0x1)
	char pad_103_1 : 7;  // 0x67(0x1)
	bool ShouldFilterItemsByZone : 1;  // 0x67(0x1)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool OverrideInitialDamage : 1;  // 0x68(0x1)
	char pad_105[3];  // 0x69(0x3)
	float InitialDamage;  // 0x6C(0x4)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool OverrideRandomDamage : 1;  // 0x70(0x1)
	char pad_113[3];  // 0x71(0x3)
	float RandomDamage;  // 0x74(0x4)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool OverrideInitialUsage : 1;  // 0x78(0x1)
	char pad_121[3];  // 0x79(0x3)
	float InitialUsage;  // 0x7C(0x4)
	char pad_128_1 : 7;  // 0x80(0x1)
	bool OverrideRandomUsage : 1;  // 0x80(0x1)
	char pad_129[3];  // 0x81(0x3)
	float RandomUsage;  // 0x84(0x4)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool OverridePostSpawnActions : 1;  // 0x88(0x1)
	char pad_137[7];  // 0x89(0x7)
	struct TArray<struct TSoftClassPtr<UObject>> PostSpawnActions;  // 0x90(0x10)

}; 
// ScriptStruct ConZ.PrisonerMovementSettings_Air
// Size: 0x140(Inherited: 0x0) 
struct FPrisonerMovementSettings_Air
{
	struct FPrisonerAirMovementParameters Fall;  // 0x0(0x1C)
	struct FPrisonerAirMovementParameters SkydiveSlow;  // 0x1C(0x1C)
	struct FPrisonerAirMovementParameters SkydiveFast;  // 0x38(0x1C)
	struct FPrisonerAirMovementParameters DiveHeadFirst;  // 0x54(0x1C)
	struct FPrisonerAirMovementParameters DiveFeetFirst;  // 0x70(0x1C)
	struct FPrisonerAirMovementParameters HandsBound;  // 0x8C(0x1C)
	struct TMap<struct FPrisonerFallingPosePair, struct FPrisonerFallingPoseTransitionParams> PoseTransitionParamsMap;  // 0xA8(0x50)
	float JumpZVelocity;  // 0xF8(0x4)
	char pad_252[60];  // 0xFC(0x3C)
	struct FFloatInterval JumpZVelocityMultiplierVsPerformanceRatio;  // 0x138(0x8)

}; 
// ScriptStruct ConZ.ItemSpawnerDataBasedOnPreset
// Size: 0x90(Inherited: 0x0) 
struct FItemSpawnerDataBasedOnPreset
{
	UItemSpawnerPreset* Preset;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool OverrideItemClasses : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool OverrideItemSpawnTypes : 1;  // 0x9(0x1)
	char pad_10_1 : 7;  // 0xA(0x1)
	bool OverrideAlwaysSpawn : 1;  // 0xA(0x1)
	char pad_11_1 : 7;  // 0xB(0x1)
	bool OverrideProbability : 1;  // 0xB(0x1)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool OverrideUseItemZone : 1;  // 0xC(0x1)
	char pad_13_1 : 7;  // 0xD(0x1)
	bool OverrideUseItemRarity : 1;  // 0xD(0x1)
	char pad_14_1 : 7;  // 0xE(0x1)
	bool OverrideUseItemSpawnGroup : 1;  // 0xE(0x1)
	char pad_15_1 : 7;  // 0xF(0x1)
	bool OverrideInitialDamage : 1;  // 0xF(0x1)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool OverrideRandomizeDamage : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool OverrideInitialUsage : 1;  // 0x11(0x1)
	char pad_18_1 : 7;  // 0x12(0x1)
	bool OverrideRandomizeUsage : 1;  // 0x12(0x1)
	char pad_19_1 : 7;  // 0x13(0x1)
	bool OverrideInitialDirtiness : 1;  // 0x13(0x1)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool OverrideRandomizeDirtiness : 1;  // 0x14(0x1)
	char pad_21_1 : 7;  // 0x15(0x1)
	bool OverrideMinAmmoCount : 1;  // 0x15(0x1)
	char pad_22_1 : 7;  // 0x16(0x1)
	bool OverrideMaxAmmoCount : 1;  // 0x16(0x1)
	char pad_23_1 : 7;  // 0x17(0x1)
	bool OverrideMinCashAmount : 1;  // 0x17(0x1)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool OverrideMaxCashAmount : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool OverrideUseCollisionTraceToAdjustSpawnLocation : 1;  // 0x19(0x1)
	char pad_26_1 : 7;  // 0x1A(0x1)
	bool OverrideUseCollisionTraceToAdjustSpawnRotation : 1;  // 0x1A(0x1)
	char pad_27_1 : 7;  // 0x1B(0x1)
	bool OverridePostItemsSpawnedActions : 1;  // 0x1B(0x1)
	char pad_28[4];  // 0x1C(0x4)
	struct TArray<struct TSoftClassPtr<UObject>> ItemClasses;  // 0x20(0x10)
	struct FGameplayTagContainer ItemSpawnTypes;  // 0x30(0x20)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool AlwaysSpawn : 1;  // 0x50(0x1)
	char pad_81[3];  // 0x51(0x3)
	float Probability;  // 0x54(0x4)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool UseItemZone : 1;  // 0x58(0x1)
	char pad_89_1 : 7;  // 0x59(0x1)
	bool UseItemRarity : 1;  // 0x59(0x1)
	char pad_90_1 : 7;  // 0x5A(0x1)
	bool UseItemSpawnGroup : 1;  // 0x5A(0x1)
	char pad_91[1];  // 0x5B(0x1)
	float InitialDamage;  // 0x5C(0x4)
	float RandomizeDamage;  // 0x60(0x4)
	float InitialUsage;  // 0x64(0x4)
	float RandomizeUsage;  // 0x68(0x4)
	float InitialDirtiness;  // 0x6C(0x4)
	float RandomizeDirtiness;  // 0x70(0x4)
	int32_t MinAmmoCount;  // 0x74(0x4)
	int32_t MaxAmmoCount;  // 0x78(0x4)
	int32_t MinCashAmount;  // 0x7C(0x4)
	int32_t MaxCashAmount;  // 0x80(0x4)
	char pad_132_1 : 7;  // 0x84(0x1)
	bool UseCollisionTraceToAdjustSpawnLocation : 1;  // 0x84(0x1)
	char pad_133_1 : 7;  // 0x85(0x1)
	bool UseCollisionTraceToAdjustSpawnRotation : 1;  // 0x85(0x1)
	char pad_134[2];  // 0x86(0x2)
	UPostItemsSpawnedActions* PostItemsSpawnedActions;  // 0x88(0x8)

}; 
// ScriptStruct ConZ.BodyConditionSpriteData
// Size: 0x160(Inherited: 0x0) 
struct FBodyConditionSpriteData
{
	char pad_0[352];  // 0x0(0x160)

}; 
// ScriptStruct ConZ.ItemSpawningSettings
// Size: 0x44(Inherited: 0x0) 
struct FItemSpawningSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool UseQuadTreeToDetermineRelevantSpawnerGroups : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float RelevantSpawnerGroupsUpdateInterval;  // 0x4(0x4)
	float MinPlayerLocationDeltaToUpdateRelevantSpawnerGroups;  // 0x8(0x4)
	float SpawnerGroupsCullDistance;  // 0xC(0x4)
	float SpawnerExpirationTimeInMinutes;  // 0x10(0x4)
	float ExamineSpawnerExpirationTimeInMinutes;  // 0x14(0x4)
	float SpawnerTasksProcessingInterval;  // 0x18(0x4)
	float SpawnerTasksProcessingBudgetInMilliseconds;  // 0x1C(0x4)
	int32_t MaxNumberOfSpawnerTasksPerUpdate;  // 0x20(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool ShouldDestroySpawnedItemsIfNoPlayersAround : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	float RarityRatio;  // 0x28(0x4)
	float SpawnerProbabilityMultiplier;  // 0x2C(0x4)
	float ExamineSpawnerProbabilityMultiplier;  // 0x30(0x4)
	float ItemHealthMultiplierWhenUnderwater;  // 0x34(0x4)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool IgnoreSpawnerProbability : 1;  // 0x38(0x1)
	char pad_57_1 : 7;  // 0x39(0x1)
	bool IgnoreItemLimit : 1;  // 0x39(0x1)
	char pad_58_1 : 7;  // 0x3A(0x1)
	bool IgnoreItemZone : 1;  // 0x3A(0x1)
	char pad_59_1 : 7;  // 0x3B(0x1)
	bool IgnoreItemRarity : 1;  // 0x3B(0x1)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool DebugDrawItemSpawnTransforms : 1;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)
	float DebugDrawItemSpawnTransformsDuration;  // 0x40(0x4)

}; 
// ScriptStruct ConZ.ExamineItemSpawnerData
// Size: 0xB0(Inherited: 0x0) 
struct FExamineItemSpawnerData
{
	int32_t MinQuantity;  // 0x0(0x4)
	int32_t MaxQuantity;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool AllowDuplicates : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FItemSpawnerDataBasedOnPreset Spawner;  // 0x10(0x90)
	struct TArray<struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes> MaxOccurrencesPerSpawnTypes;  // 0xA0(0x10)

}; 
// Function ConZ.PlayerRpcChannel.CustomZones_Client_ReceiveCustomZoneData
// Size: 0x60(Inherited: 0x0) 
struct FCustomZones_Client_ReceiveCustomZoneData
{
	struct FCustomZoneConfiguration globalConfiguration;  // 0x0(0x40)
	struct TArray<struct FCustomZoneConfiguration> configurations;  // 0x40(0x10)
	struct TArray<struct FCustomZoneRegion> Regions;  // 0x50(0x10)

}; 
// ScriptStruct ConZ.ExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
// Size: 0x28(Inherited: 0x0) 
struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
{
	struct FGameplayTagContainer ItemSpawnTypes;  // 0x0(0x20)
	int32_t MaxNumberOfOccurrences;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ConZ.ProjectileImpulseMultiplier
// Size: 0x10(Inherited: 0x0) 
struct FProjectileImpulseMultiplier
{
	AActor* ActorClass;  // 0x0(0x8)
	float Multiplier;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct ConZ.ItemSpawnerData
// Size: 0x70(Inherited: 0x0) 
struct FItemSpawnerData
{
	struct TArray<struct TSoftClassPtr<UObject>> ItemClasses;  // 0x0(0x10)
	struct FGameplayTagContainer ItemSpawnTypes;  // 0x10(0x20)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool AlwaysSpawn : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	float Probability;  // 0x34(0x4)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool UseItemZone : 1;  // 0x38(0x1)
	char pad_57_1 : 7;  // 0x39(0x1)
	bool UseItemRarity : 1;  // 0x39(0x1)
	char pad_58_1 : 7;  // 0x3A(0x1)
	bool UseItemSpawnGroup : 1;  // 0x3A(0x1)
	char pad_59[1];  // 0x3B(0x1)
	float InitialDamage;  // 0x3C(0x4)
	float RandomizeDamage;  // 0x40(0x4)
	float InitialUsage;  // 0x44(0x4)
	float RandomizeUsage;  // 0x48(0x4)
	float InitialDirtiness;  // 0x4C(0x4)
	float RandomizeDirtiness;  // 0x50(0x4)
	int32_t MinAmmoCount;  // 0x54(0x4)
	int32_t MaxAmmoCount;  // 0x58(0x4)
	int32_t MinCashAmount;  // 0x5C(0x4)
	int32_t MaxCashAmount;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool UseCollisionTraceToAdjustSpawnLocation : 1;  // 0x64(0x1)
	char pad_101_1 : 7;  // 0x65(0x1)
	bool UseCollisionTraceToAdjustSpawnRotation : 1;  // 0x65(0x1)
	char pad_102[2];  // 0x66(0x2)
	UPostItemsSpawnedActions* PostItemsSpawnedActions;  // 0x68(0x8)

}; 
// ScriptStruct ConZ.ItemSpawningParametersTableRow
// Size: 0x60(Inherited: 0x8) 
struct FItemSpawningParametersTableRow : public FTableRowBase
{
	int32_t MaxOccurrences;  // 0x8(0x4)
	struct FItemLocation AllowedLocations;  // 0xC(0xF)
	char pad_27[1];  // 0x1B(0x1)
	struct FFloatInterval CooldownPerSquadMember;  // 0x1C(0x8)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool IsSubjectToAllowTrapsConfig : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	struct TArray<struct TSoftClassPtr<UObject>> Variations;  // 0x28(0x10)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool ShouldOverrideInitialAndRandomUsage : 1;  // 0x38(0x1)
	char pad_57[3];  // 0x39(0x3)
	float InitialUsageOverride;  // 0x3C(0x4)
	float RandomUsageOverride;  // 0x40(0x4)
	struct FVector SpawnLocationOffset;  // 0x44(0xC)
	struct FRotator SpawnRotationOffset;  // 0x50(0xC)
	float SpawnRotationRandomization;  // 0x5C(0x4)

}; 
// Function ConZ.ConZSquad.GetOnlineMemberCount
// Size: 0x4(Inherited: 0x0) 
struct FGetOnlineMemberCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.RoomDifficultyConfiguration
// Size: 0x38(Inherited: 0x0) 
struct FRoomDifficultyConfiguration
{
	struct TArray<AItem*> Locks;  // 0x0(0x10)
	struct TArray<AItem*> Zappers;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool IsC4Present : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)
	struct TArray<struct FSpawnerConfiguration> PossibleSpawners;  // 0x28(0x10)

}; 
// ScriptStruct ConZ.LandingEffectDataPerPhysicalSurface
// Size: 0x30(Inherited: 0x0) 
struct FLandingEffectDataPerPhysicalSurface
{
	struct FLandingEffectDataPerSeverity Light;  // 0x0(0x10)
	struct FLandingEffectDataPerSeverity Medium;  // 0x10(0x10)
	struct FLandingEffectDataPerSeverity Heavy;  // 0x20(0x10)

}; 
// ScriptStruct ConZ.WaterForceWhenSwimmingParams
// Size: 0x14(Inherited: 0x0) 
struct FWaterForceWhenSwimmingParams
{
	float DownstreamWaterForceMultiplier;  // 0x0(0x4)
	float UpstreamWaterForceMultiplier;  // 0x4(0x4)
	float ImpulseThreshold;  // 0x8(0x4)
	float ImpulseMultiplier;  // 0xC(0x4)
	float MinSpeedForUpstream;  // 0x10(0x4)

}; 
// Function ConZ.Tournament.GetStatsOrderedByDeath
// Size: 0x10(Inherited: 0x0) 
struct FGetStatsOrderedByDeath
{
	struct TArray<struct FTournamentStats> stats;  // 0x0(0x10)

}; 
// Function ConZ.DeathmatchGameEvent.SetDeathmatchParameters
// Size: 0x14(Inherited: 0x0) 
struct FSetDeathmatchParameters
{
	struct FDeathmatchParameters Params;  // 0x0(0x14)

}; 
// Function ConZ.ThrowingComponent.Multicast_PierceHitObject
// Size: 0x94(Inherited: 0x0) 
struct FMulticast_PierceHitObject
{
	struct FVector ImpactVelocity;  // 0x0(0xC)
	struct FHitResult ZeroBasedImpactResult;  // 0xC(0x88)

}; 
// ScriptStruct ConZ.AerodynamicSurface
// Size: 0x80(Inherited: 0x0) 
struct FAerodynamicSurface
{
	struct FName Name;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Transform;  // 0x10(0x30)
	float LiftSlope;  // 0x40(0x4)
	float SkinFriction;  // 0x44(0x4)
	float ZeroLiftAoA;  // 0x48(0x4)
	float StallAngleHigh;  // 0x4C(0x4)
	float StallAngleLow;  // 0x50(0x4)
	float Chord;  // 0x54(0x4)
	float Span;  // 0x58(0x4)
	float AspectRatio;  // 0x5C(0x4)
	float FlapFraction;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool IsControlable : 1;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)
	float FlapAngle;  // 0x68(0x4)
	float FlapAngleSensitivity;  // 0x6C(0x4)
	float MaxFlapAngle;  // 0x70(0x4)
	float AreaMultiplier;  // 0x74(0x4)
	char pad_120[8];  // 0x78(0x8)

}; 
// ScriptStruct ConZ.VehicleAttachmentPriceDataPerClassMap
// Size: 0x50(Inherited: 0x0) 
struct FVehicleAttachmentPriceDataPerClassMap
{
	char pad_0[80];  // 0x0(0x50)

}; 
// Function ConZ.HoverPanelWidget.GetContentBox
// Size: 0x8(Inherited: 0x0) 
struct FGetContentBox
{
	struct UVerticalBox* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.MeleeAction
// Size: 0x20(Inherited: 0x0) 
struct FMeleeAction
{
	uint8_t  ActionType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct TWeakObjectPtr<UAnimMontage> Montage;  // 0x4(0x8)
	float StartDelay;  // 0xC(0x4)
	float PlayRate;  // 0x10(0x4)
	float BlockDuration;  // 0x14(0x4)
	float OrientToTargetSpeedFactor;  // 0x18(0x4)
	float RegainControlDurationModifier;  // 0x1C(0x4)

}; 
// ScriptStruct ConZ.MeleeDodge
// Size: 0x10(Inherited: 0x0) 
struct FMeleeDodge
{
	char pad_0[16];  // 0x0(0x10)

}; 
// ScriptStruct ConZ.MeleeAttack
// Size: 0x20(Inherited: 0x0) 
struct FMeleeAttack
{
	char pad_0[32];  // 0x0(0x20)

}; 
// ScriptStruct ConZ.CheckMeleeAttackCapsuleCollisionData
// Size: 0xD0(Inherited: 0x0) 
struct FCheckMeleeAttackCapsuleCollisionData
{
	char pad_0[208];  // 0x0(0xD0)

}; 
// Function ConZ.InteractionComponent.UpdateExistenceOnClient
// Size: 0x1(Inherited: 0x0) 
struct FUpdateExistenceOnClient
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Exists : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.MeleeSkillParametersPerSkillLevel
// Size: 0x88(Inherited: 0x0) 
struct FMeleeSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat StartDelay;  // 0x0(0x8)
	struct FExperienceDependentFloat StartDelayPenaltyPerStrengthShortage;  // 0x8(0x8)
	struct FExperienceDependentFloat AnimationPlayRateModifier;  // 0x10(0x8)
	struct FExperienceDependentFloat AnimationPlayRatePenaltyPerStrengthShortage;  // 0x18(0x8)
	struct FExperienceDependentFloat RegainControlDurationModifier;  // 0x20(0x8)
	struct FExperienceDependentFloat StaminaDrain;  // 0x28(0x8)
	struct FExperienceDependentFloat StaminaDrainPenaltyPerStrengthShortage;  // 0x30(0x8)
	struct FExperienceDependentFloat StaminaRecoveryDelay;  // 0x38(0x8)
	struct FExperienceDependentFloat StaminaRecoveryDuration;  // 0x40(0x8)
	struct FExperienceDependentFloat StaminaInfluenceWindowMin;  // 0x48(0x8)
	struct FExperienceDependentFloat StaminaInfluenceWindowMax;  // 0x50(0x8)
	struct FExperienceDependentFloat StaminaInfluenceWindowLinearity;  // 0x58(0x8)
	struct FExperienceDependentFloat StartDelayWhenExhausted;  // 0x60(0x8)
	struct FExperienceDependentFloat AnimationPlayRateModifierWhenExhausted;  // 0x68(0x8)
	struct FExperienceDependentFloat RegainControlDurationModifierWhenExhausted;  // 0x70(0x8)
	struct FExperienceDependentFloat StaminaMultiplierPerExcessGearWeight;  // 0x78(0x8)
	struct FExperienceDependentFloat ComboCooldownDuration;  // 0x80(0x8)

}; 
// ScriptStruct ConZ.MeleeSkillAnimations
// Size: 0x98(Inherited: 0x0) 
struct FMeleeSkillAnimations
{
	struct UAnimSequenceBase* PrimaryIdleAnimationTP;  // 0x0(0x8)
	struct UAnimSequenceBase* PrimaryIdleAnimationFP;  // 0x8(0x8)
	struct UAnimSequenceBase* TiredIdleAnimationTP;  // 0x10(0x8)
	struct UAnimSequenceBase* TiredIdleAnimationFP;  // 0x18(0x8)
	struct UAnimSequenceBase* WalkingIdleAnimationTP;  // 0x20(0x8)
	struct UAnimSequenceBase* WalkingIdleAnimationFP;  // 0x28(0x8)
	struct UAnimSequenceBase* BlockIdleAnimationTP;  // 0x30(0x8)
	struct UAnimSequenceBase* BlockIdleAnimationFP;  // 0x38(0x8)
	struct UBlendSpace* AimOffsetBlendSpaceTP;  // 0x40(0x8)
	struct UBlendSpace* AimOffsetBlendSpaceFP;  // 0x48(0x8)
	struct UAnimMontage* EnterCombatModeMontage;  // 0x50(0x8)
	struct UAnimMontage* LeaveCombatModeMontage;  // 0x58(0x8)
	struct TArray<struct UAnimSequenceBase*> InactivityIdleAnimations;  // 0x60(0x10)
	float IdleToBlockBlendDuration;  // 0x70(0x4)
	float BlockToIdleBlendDuration;  // 0x74(0x4)
	struct TArray<struct FMeleeSkillAttack> Attacks;  // 0x78(0x10)
	struct TArray<struct FMeleeSkillDodge> Dodges;  // 0x88(0x10)

}; 
// ScriptStruct ConZ.MeleeSkillDodge
// Size: 0x18(Inherited: 0x0) 
struct FMeleeSkillDodge
{
	uint8_t  DodgeDirectionType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UAnimMontage* Montage;  // 0x8(0x8)
	float RegainControlDurationMultiplier;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ConZ.MeshHitZone
// Size: 0x1C(Inherited: 0x0) 
struct FMeshHitZone
{
	char pad_0[28];  // 0x0(0x1C)

}; 
// ScriptStruct ConZ.MetabolismRadialProgressBarColorScheme
// Size: 0x80(Inherited: 0x0) 
struct FMetabolismRadialProgressBarColorScheme
{
	struct FLinearColor BackgroundColor;  // 0x0(0x10)
	struct FLinearColor PrimaryBarColor;  // 0x10(0x10)
	struct FLinearColor PrimaryBarGlowColor;  // 0x20(0x10)
	struct FLinearColor SecondaryBarColor;  // 0x30(0x10)
	struct FLinearColor SecondaryBarGlowColor;  // 0x40(0x10)
	struct FLinearColor FontColor;  // 0x50(0x10)
	struct FLinearColor FontInnerGlowColor;  // 0x60(0x10)
	struct FLinearColor FontOuterGlowColor;  // 0x70(0x10)

}; 
// ScriptStruct ConZ.InPlaceTurningData
// Size: 0x2C(Inherited: 0x0) 
struct FInPlaceTurningData
{
	struct FInPlaceTurnAnimationInfo LAnimationInfo;  // 0x0(0x14)
	struct FInPlaceTurnAnimationInfo RAnimationInfo;  // 0x14(0x14)
	float BlendAlphaInterpolationSpeed;  // 0x28(0x4)

}; 
// Function ConZ.TabElement.GetNextIndex
// Size: 0x8(Inherited: 0x0) 
struct FGetNextIndex
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Up : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.MeshInstanceId
// Size: 0x8(Inherited: 0x0) 
struct FMeshInstanceId
{
	char pad_0[8];  // 0x0(0x8)

}; 
// Function ConZ.Zombie2.OnRep_Health
// Size: 0x4(Inherited: 0x0) 
struct FOnRep_Health
{
	float oldValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.SubstancesData
// Size: 0xD0(Inherited: 0x0) 
struct FSubstancesData
{
	float Nutrients[20];  // 0x0(0x80)
	struct TMap<int32_t, float> ForeignSubstances;  // 0x80(0x50)

}; 
// ScriptStruct ConZ.MetabolismRadialAttributeProgressBarColor
// Size: 0x30(Inherited: 0x0) 
struct FMetabolismRadialAttributeProgressBarColor
{
	struct FLinearColor PositiveColor;  // 0x0(0x10)
	struct FLinearColor NeutralColor;  // 0x10(0x10)
	struct FLinearColor NegativeColor;  // 0x20(0x10)

}; 
// ScriptStruct ConZ.DigestionItemSave
// Size: 0x2C0(Inherited: 0x0) 
struct FDigestionItemSave
{
	struct FConsumableSave Consumable;  // 0x0(0x100)
	float RemainingMassToConsume;  // 0x100(0x4)
	float MassConsumed;  // 0x104(0x4)
	float TotalMassConsumed;  // 0x108(0x4)
	float MassAbsorbed;  // 0x10C(0x4)
	struct FSubstancesData SubstancesInStomach;  // 0x110(0xD0)
	struct FSubstancesData SubstancesInIntestine;  // 0x1E0(0xD0)
	struct TArray<struct FConsumableDigestionHandlerSave> DigestionHandlers;  // 0x2B0(0x10)

}; 
// Function ConZ.GameEventBorder.HeatUpAndChangeArea
// Size: 0x18(Inherited: 0x0) 
struct FHeatUpAndChangeArea
{
	float Radius;  // 0x0(0x4)
	struct FVector focus;  // 0x4(0xC)
	float Duration;  // 0x10(0x4)
	float heatUpDuration;  // 0x14(0x4)

}; 
// Function ConZ.User.GetProvider
// Size: 0x10(Inherited: 0x0) 
struct FGetProvider
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.ForeignSubstanceSave
// Size: 0x10(Inherited: 0x0) 
struct FForeignSubstanceSave
{
	struct TArray<char> Data;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.MetabolismSPBColorScheme
// Size: 0x50(Inherited: 0x0) 
struct FMetabolismSPBColorScheme
{
	struct FLinearColor BaseColor;  // 0x0(0x10)
	struct FLinearColor FillColorBottom;  // 0x10(0x10)
	struct FLinearColor FillColorTop;  // 0x20(0x10)
	struct FLinearColor OutlineColorBottom;  // 0x30(0x10)
	struct FLinearColor OutlineColorTop;  // 0x40(0x10)

}; 
// ScriptStruct ConZ.LadderInfo
// Size: 0xB0(Inherited: 0x0) 
struct FLadderInfo
{
	struct FTransform Transform;  // 0x0(0x30)
	struct FTransform TransformInverse;  // 0x30(0x30)
	struct FTransform Edge;  // 0x60(0x30)
	struct FVector CapsuleBias;  // 0x90(0xC)
	float StepHeight;  // 0x9C(0x4)
	float StepWidth;  // 0xA0(0x4)
	char pad_164_1 : 7;  // 0xA4(0x1)
	bool HasEdge : 1;  // 0xA4(0x1)
	char pad_165_1 : 7;  // 0xA5(0x1)
	bool IsNarrow : 1;  // 0xA5(0x1)
	char EPhysicalSurface PhysicalSurfaceForSounds;  // 0xA6(0x1)
	char pad_167[1];  // 0xA7(0x1)
	int32_t NumberOfSteps;  // 0xA8(0x4)
	int32_t HitStepIndex;  // 0xAC(0x4)

}; 
// ScriptStruct ConZ.MinigameToolRequestData
// Size: 0x18(Inherited: 0x0) 
struct FMinigameToolRequestData
{
	char pad_0[24];  // 0x0(0x18)

}; 
// Function ConZ.Zombie2.IsRagdollAtRest
// Size: 0x1(Inherited: 0x0) 
struct FIsRagdollAtRest
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.ActiveManagers
// Size: 0x10(Inherited: 0x0) 
struct FActiveManagers
{
	struct TArray<struct AMissionManager*> MissionManagers;  // 0x0(0x10)

}; 
// Function ConZ.Bedroll.Multicast_SetVisuals
// Size: 0x10(Inherited: 0x0) 
struct FMulticast_SetVisuals
{
	struct UStaticMesh* StaticMesh;  // 0x0(0x8)
	struct UMaterialInterface* Material;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.ObjectiveData
// Size: 0x30(Inherited: 0x0) 
struct FObjectiveData
{
	struct FString ObjectiveAssetId;  // 0x0(0x10)
	uint8_t  ObjectiveState;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct FText Description;  // 0x18(0x18)

}; 
// ScriptStruct ConZ.ModularTooltipSectionData
// Size: 0x28(Inherited: 0x0) 
struct FModularTooltipSectionData
{
	char pad_0[24];  // 0x0(0x18)
	struct TArray<struct UModularTooltipElementData*> Elements;  // 0x18(0x10)

}; 
// Function ConZ.GameEventBase.CanStart
// Size: 0x1(Inherited: 0x0) 
struct FCanStart
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.DebugRpcChannel.Server_Farming_RemovePlant
// Size: 0x10(Inherited: 0x0) 
struct FServer_Farming_RemovePlant
{
	struct AGarden* Garden;  // 0x0(0x8)
	int32_t SlotId;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct ConZ.MovableMeshComponentData
// Size: 0x14(Inherited: 0x0) 
struct FMovableMeshComponentData
{
	char pad_0[20];  // 0x0(0x14)

}; 
// ScriptStruct ConZ.SpawnedDepotsHelperStruct
// Size: 0x58(Inherited: 0x0) 
struct FSpawnedDepotsHelperStruct
{
	char pad_0[88];  // 0x0(0x58)

}; 
// ScriptStruct ConZ.MovableCollisionFieldState
// Size: 0x3(Inherited: 0x0) 
struct FMovableCollisionFieldState
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsTurnedOn : 1;  // 0x0(0x1)
	char PackedCurrentPercentage;  // 0x1(0x1)
	uint8_t  MoveType;  // 0x2(0x1)

}; 
// Function ConZ.SentryAnimInstance2.GetTurnInPlaceDirectionBlendAlpha
// Size: 0x4(Inherited: 0x0) 
struct FGetTurnInPlaceDirectionBlendAlpha
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.NutrientsRDA
// Size: 0x6C(Inherited: 0x0) 
struct FNutrientsRDA
{
	float MinProteinsPerLeanBodyMass;  // 0x0(0x4)
	float MaxProteinsPerLeanBodyMass;  // 0x4(0x4)
	float Fats;  // 0x8(0x4)
	float Water;  // 0xC(0x4)
	float VitaminA;  // 0x10(0x4)
	float VitaminB1;  // 0x14(0x4)
	float VitaminB2;  // 0x18(0x4)
	float VitaminB3;  // 0x1C(0x4)
	float VitaminB4;  // 0x20(0x4)
	float VitaminB5;  // 0x24(0x4)
	float VitaminB6;  // 0x28(0x4)
	float VitaminB9;  // 0x2C(0x4)
	float VitaminB12;  // 0x30(0x4)
	float VitaminC;  // 0x34(0x4)
	float VitaminD;  // 0x38(0x4)
	float VitaminE;  // 0x3C(0x4)
	float VitaminK;  // 0x40(0x4)
	float Calcium;  // 0x44(0x4)
	float Magnesium;  // 0x48(0x4)
	float Potassium;  // 0x4C(0x4)
	float Copper;  // 0x50(0x4)
	float Selenium;  // 0x54(0x4)
	float Iron;  // 0x58(0x4)
	float Phosphorus;  // 0x5C(0x4)
	float Zinc;  // 0x60(0x4)
	float Manganese;  // 0x64(0x4)
	float Sodium;  // 0x68(0x4)

}; 
// ScriptStruct ConZ.ObjectiveTrackableData
// Size: 0x8(Inherited: 0x0) 
struct FObjectiveTrackableData
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PhysicalSurfaceEffectsData
// Size: 0x50(Inherited: 0x0) 
struct FPhysicalSurfaceEffectsData
{
	struct FPhysicalSurfaceVehicleEffectsData Vehicle;  // 0x0(0x50)

}; 
// ScriptStruct ConZ.SkillEventWeaponReload
// Size: 0x1(Inherited: 0x1) 
struct FSkillEventWeaponReload : public FSkillEventWeapon
{

}; 
// ScriptStruct ConZ.PhysicalSurfaceVehicleEffectsData
// Size: 0x50(Inherited: 0x0) 
struct FPhysicalSurfaceVehicleEffectsData
{
	struct UParticleSystem* ParticleTrail;  // 0x0(0x8)
	float ParticleTrailSlipModifier;  // 0x8(0x4)
	float ParticleTrailDestructionDelay;  // 0xC(0x4)
	struct UParticleSystem* ParticleWave;  // 0x10(0x8)
	float ParticleWaveSlipModifier;  // 0x18(0x4)
	float ParticleWaveDestructionDelay;  // 0x1C(0x4)
	struct FPhysicalSurfaceVehicleTireParticleData SmallTireParticles;  // 0x20(0x10)
	struct FPhysicalSurfaceVehicleTireParticleData MediumTireParticles;  // 0x30(0x10)
	struct FPhysicalSurfaceVehicleTireParticleData LargeTireParticles;  // 0x40(0x10)

}; 
// ScriptStruct ConZ.PlaceableActorStateReplicationHelper
// Size: 0x8(Inherited: 0x0) 
struct FPlaceableActorStateReplicationHelper
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct ConZ.TilesData
// Size: 0x18(Inherited: 0x0) 
struct FTilesData
{
	struct UHierarchicalInstancedStaticMeshComponent* HISMComponentMain;  // 0x0(0x8)
	struct UHierarchicalInstancedStaticMeshComponent* HISMComponentOutline;  // 0x8(0x8)
	struct UHierarchicalInstancedStaticMeshComponent* HISMComponentDepth;  // 0x10(0x8)

}; 
// Function ConZ.ConZSquad.SendMessageToMembers
// Size: 0x10(Inherited: 0x0) 
struct FSendMessageToMembers
{
	struct FString Message;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.LineTraceSocketPair
// Size: 0x10(Inherited: 0x0) 
struct FLineTraceSocketPair
{
	struct FName TraceStart;  // 0x0(0x8)
	struct FName TraceEnd;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.PlantMeshData
// Size: 0x70(Inherited: 0x0) 
struct FPlantMeshData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool PlantGrowsUpright : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector Translation;  // 0x4(0xC)
	struct FFloatInterval RandomVerticalOffsetInterval;  // 0x10(0x8)
	struct FFloatInterval RandomHorizontalOffsetInterval;  // 0x18(0x8)
	struct FFloatInterval RandomScaleInterval;  // 0x20(0x8)
	struct FPlantStageMeshData VegetatingPlantMesh;  // 0x28(0x18)
	struct FPlantStageMeshData FloweringPlantMesh;  // 0x40(0x18)
	struct FPlantStageMeshData RipeningPlantMesh;  // 0x58(0x18)

}; 
// ScriptStruct ConZ.PlantStageMeshData
// Size: 0x18(Inherited: 0x0) 
struct FPlantStageMeshData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool SkipStage : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ProduceReadyStagePercent;  // 0x4(0x4)
	struct TArray<struct FPlantMesh> Meshes;  // 0x8(0x10)

}; 
// ScriptStruct ConZ.PlantMesh
// Size: 0x60(Inherited: 0x0) 
struct FPlantMesh
{
	struct FStaticMeshMaterialPair Mesh;  // 0x0(0x18)
	struct FFloatInterval StageMorphTargetInterpolationRange;  // 0x18(0x8)
	struct FVector GrowthExponents;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)
	struct FTransform Transform;  // 0x30(0x30)

}; 
// Function ConZ.InteractionComponent.Client_SendGroundSearchLocation
// Size: 0xC(Inherited: 0x0) 
struct FClient_SendGroundSearchLocation
{
	struct FVector Location;  // 0x0(0xC)

}; 
// ScriptStruct ConZ.PlayerRpcChannelServerDataResponseNetSerializer
// Size: 0x8(Inherited: 0x0) 
struct FPlayerRpcChannelServerDataResponseNetSerializer
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PlayerRpcChannelServerDataRequestNetSerializer
// Size: 0x8(Inherited: 0x0) 
struct FPlayerRpcChannelServerDataRequestNetSerializer
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PrisonerFPWeaponFOVSettings
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerFPWeaponFOVSettings
{
	char pad_0[16];  // 0x0(0x10)

}; 
// ScriptStruct ConZ.WheelBarrowParametersPerMovementPace
// Size: 0x20(Inherited: 0x0) 
struct FWheelBarrowParametersPerMovementPace
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsValid : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float BaseMaxForwardSpeed;  // 0x4(0x4)
	float BaseMaxForwardSpeedLimping;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool CanReverse : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	float BaseMaxReverseSpeed;  // 0x10(0x4)
	float BaseMaxReverseSpeedLimping;  // 0x14(0x4)
	float BaseMaxLoad;  // 0x18(0x4)
	float MinPrisonerStrength;  // 0x1C(0x4)

}; 
// ScriptStruct ConZ.InstrumentEvent
// Size: 0x10(Inherited: 0x0) 
struct FInstrumentEvent
{
	char pad_0[16];  // 0x0(0x10)

}; 
// Function ConZ.PrisonerAnimInstance.FindTimeBeforeJumpApex
// Size: 0x10(Inherited: 0x0) 
struct FFindTimeBeforeJumpApex
{
	struct UAnimSequenceBase* AnimSequence;  // 0x0(0x8)
	float distanceToApex;  // 0x8(0x4)
	float ReturnValue;  // 0xC(0x4)

}; 
// ScriptStruct ConZ.VisualParameter
// Size: 0x14(Inherited: 0x0) 
struct FVisualParameter
{
	struct FName MorphName;  // 0x0(0x8)
	struct FName MaterialParamName;  // 0x8(0x8)
	float Value;  // 0x10(0x4)

}; 
// Function ConZ.ChestItem.BP_OnInventoryCountChanged
// Size: 0x4(Inherited: 0x0) 
struct FBP_OnInventoryCountChanged
{
	int32_t numContainedItems;  // 0x0(0x4)

}; 
// Function ConZ.LargeAquaticAnimal.OnRep_Behavior
// Size: 0x1(Inherited: 0x0) 
struct FOnRep_Behavior
{
	uint8_t  oldValue;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.PrisonerAppearanceId
// Size: 0x8(Inherited: 0x0) 
struct FPrisonerAppearanceId
{
	uint8_t  Gender;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t Index;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.PrisonerAppearance_IrisVariation
// Size: 0x50(Inherited: 0x0) 
struct FPrisonerAppearance_IrisVariation
{
	struct TSoftObjectPtr<UTexture2D> IrisHeight;  // 0x0(0x28)
	struct TSoftObjectPtr<UTexture2D> IrisMasks;  // 0x28(0x28)

}; 
// Function ConZ.ConZBaseManager.NetMulticast_ProcessDecay
// Size: 0x8(Inherited: 0x0) 
struct FNetMulticast_ProcessDecay
{
	int32_t dataVersion;  // 0x0(0x4)
	float DeltaSeconds;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.PrisonerAppearance_FaceVariation
// Size: 0x50(Inherited: 0x0) 
struct FPrisonerAppearance_FaceVariation
{
	struct TSoftObjectPtr<UTexture2D> SkinColor;  // 0x0(0x28)
	struct TSoftObjectPtr<UTexture2D> SkinNormal;  // 0x28(0x28)

}; 
// ScriptStruct ConZ.PrisonerAppearance_HairStyle
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerAppearance_HairStyle
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool RequiresGameUpgrade : 1;  // 0x0(0x1)
	uint8_t  GameUpgradeRequired;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct UCharacterMesh* Mesh;  // 0x8(0x8)

}; 
// Function ConZ.LaserTriggerComponent.BoxComponent_OnComponentBeginOverlap
// Size: 0xA8(Inherited: 0x0) 
struct FBoxComponent_OnComponentBeginOverlap
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0(0x8)
	struct AActor* OtherActor;  // 0x8(0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10(0x8)
	int32_t OtherBodyIndex;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bFromSweep : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FHitResult SweepResult;  // 0x20(0x88)

}; 
// ScriptStruct ConZ.PrisonerBodyOrganGroupsVsSeverity
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerBodyOrganGroupsVsSeverity
{
	struct TArray<struct FPrisonerBodyOrganGroupsVsSeverityKey> Keys;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.TradeOutpostManagerDescription
// Size: 0xB8(Inherited: 0x0) 
struct FTradeOutpostManagerDescription
{
	char pad_0[184];  // 0x0(0xB8)

}; 
// ScriptStruct ConZ.PrisonerBodyBoneGroupsVsSeverityKey
// Size: 0x60(Inherited: 0x0) 
struct FPrisonerBodyBoneGroupsVsSeverityKey
{
	struct FFloatRange SeverityRange;  // 0x0(0x10)
	struct TSet<uint8_t > Values;  // 0x10(0x50)

}; 
// Function ConZ.PrisonerBodySymptom_PeriodicAffect.Client_PendAffect
// Size: 0x8(Inherited: 0x0) 
struct FClient_PendAffect
{
	float Duration;  // 0x0(0x4)
	float Intensity;  // 0x4(0x4)

}; 
// Function ConZ.GameEventBase.Multicast_PlayMusic
// Size: 0x8(Inherited: 0x0) 
struct FMulticast_PlayMusic
{
	struct UAkAudioEvent* StartAudioEvent;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PBCTI_ApplyBandagesOrDisinfect_ApplyBandagesData
// Size: 0x3C(Inherited: 0x0) 
struct FPBCTI_ApplyBandagesOrDisinfect_ApplyBandagesData
{
	float BaseActionDuration;  // 0x0(0x4)
	struct FFloatRange ActionDurationLimits;  // 0x4(0x10)
	float BaseExperienceGainVsSkillLevel[5];  // 0x14(0x14)
	float StabilizationDurationReductionVsSkillLevel[5];  // 0x28(0x14)

}; 
// Function ConZ.ConZSquad.GetMemberRank
// Size: 0x10(Inherited: 0x0) 
struct FGetMemberRank
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	uint8_t  ReturnValue;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ConZ.PBCTI_ApplyBandagesOrDisinfect_DisinfectData
// Size: 0x38(Inherited: 0x0) 
struct FPBCTI_ApplyBandagesOrDisinfect_DisinfectData
{
	float BaseActionDuration;  // 0x0(0x4)
	struct FFloatRange ActionDurationLimits;  // 0x4(0x10)
	float BaseExperienceGainVsSkillLevel[5];  // 0x14(0x14)
	struct UAkAudioEvent* BeginInteractionPatientAudioEvent;  // 0x28(0x8)
	struct UAkAudioEvent* EndInteractionPatientAudioEvent;  // 0x30(0x8)

}; 
// ScriptStruct ConZ.PBCTIIT_ApplyBandagesOrDisinfect_ApplyBandages_PerSkillData
// Size: 0x10(Inherited: 0x0) 
struct FPBCTIIT_ApplyBandagesOrDisinfect_ApplyBandages_PerSkillData
{
	struct TArray<int32_t> NumUsesPerSeverityLevel;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.PBCTIIT_ApplyBandagesOrDisinfect_Disinfect_PerSkillData
// Size: 0x10(Inherited: 0x0) 
struct FPBCTIIT_ApplyBandagesOrDisinfect_Disinfect_PerSkillData
{
	struct TArray<int32_t> NumUsesPerSeverityLevel;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.PrisonerBodySimulationData_ConsumableDigestionHandlersForValueRanges
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRanges
{
	struct TArray<struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRange> ValueRanges;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.PrisonerBodySimulationData_Effects_ExhaustionChange
// Size: 0x18(Inherited: 0x0) 
struct FPrisonerBodySimulationData_Effects_ExhaustionChange
{
	UPrisonerBodyEffect_ExhaustionChange* Consumption;  // 0x0(0x8)
	UPrisonerBodyEffect_ExhaustionChange* Resting;  // 0x8(0x8)
	UPrisonerBodyEffect_ExhaustionChange* Smoking;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.PrisonerMaxMovementPaceVsSeverity
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerMaxMovementPaceVsSeverity
{
	struct TArray<struct FPrisonerMaxMovementPaceVsSeverityKey> Keys;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.ControllerDigestionItem
// Size: 0x28(Inherited: 0x0) 
struct FControllerDigestionItem
{
	char pad_0[40];  // 0x0(0x28)

}; 
// ScriptStruct ConZ.PrisonerCharacterMeshDecayMultiplierData
// Size: 0x2C(Inherited: 0x0) 
struct FPrisonerCharacterMeshDecayMultiplierData
{
	float DamageMultiplierPerPace[4];  // 0x0(0x10)
	float DamageMultiplierPerStance[4];  // 0x10(0x10)
	float WetnessDamageThreshold;  // 0x20(0x4)
	float WetnessDamageMultiplier;  // 0x24(0x4)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool DamagedByFloor : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)

}; 
// ScriptStruct ConZ.WindowInfo
// Size: 0xD0(Inherited: 0x0) 
struct FWindowInfo
{
	struct FTransform Transform;  // 0x0(0x30)
	struct FTransform TransformInverse;  // 0x30(0x30)
	struct FVector Anchor;  // 0x60(0xC)
	float Width;  // 0x6C(0x4)
	float Height;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)
	struct FWindowClimbingAnimationInfo AnimationInfo;  // 0x78(0x48)
	int32_t AnimationIndex;  // 0xC0(0x4)
	char pad_196[12];  // 0xC4(0xC)

}; 
// ScriptStruct ConZ.VATMaterialParam
// Size: 0x10(Inherited: 0x0) 
struct FVATMaterialParam
{
	char pad_0[8];  // 0x0(0x8)
	struct UMaterialInstanceDynamic* DynamicMaterial;  // 0x8(0x8)

}; 
// Function ConZ.HasWindowMarkersInterface.GetWindowMarkers
// Size: 0x10(Inherited: 0x0) 
struct FGetWindowMarkers
{
	struct TArray<struct FWindowMarker> Result;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.WindowDetectionParams
// Size: 0x38(Inherited: 0x0) 
struct FWindowDetectionParams
{
	struct FVector CharacterHeadLocation;  // 0x0(0xC)
	struct FVector CharacterFeetLocation;  // 0xC(0xC)
	struct FVector CharacterForwardVector;  // 0x18(0xC)
	float MaxHorzDistanceToWindow;  // 0x24(0x4)
	float MaxCharacterToWindowAngle;  // 0x28(0x4)
	float HorzHitDetectionBias;  // 0x2C(0x4)
	float HitDetectionBiasBelowWindow;  // 0x30(0x4)
	float HitDetectionBiasAboveWindow;  // 0x34(0x4)

}; 
// ScriptStruct ConZ.LadderInfoRepData
// Size: 0x50(Inherited: 0x0) 
struct FLadderInfoRepData
{
	struct FTransform LadderTransform;  // 0x0(0x30)
	struct FVector CapsuleBias;  // 0x30(0xC)
	struct FVector RootBoneOffset;  // 0x3C(0xC)
	float StepHeight;  // 0x48(0x4)
	char EPhysicalSurface PhysicalSurfaceForSounds;  // 0x4C(0x1)
	char NumberOfSteps;  // 0x4D(0x1)
	char pad_78[2];  // 0x4E(0x2)

}; 
// ScriptStruct ConZ.PrisonerClimbAnimationInfo
// Size: 0x40(Inherited: 0x0) 
struct FPrisonerClimbAnimationInfo
{
	float MinEdgeHeight;  // 0x0(0x4)
	float MaxEdgeHeight;  // 0x4(0x4)
	float VaultDistance;  // 0x8(0x4)
	float MaxVaultLandHeightError;  // 0xC(0x4)
	struct FVector AnchorOffset;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)
	struct UAnimSequenceBase* AnchoringAnimation;  // 0x20(0x8)
	float AnchoringAnimationTime;  // 0x28(0x4)
	float AnchoringDuration;  // 0x2C(0x4)
	struct UAnimMontage* ClimbingMontage;  // 0x30(0x8)
	float StaminaDrain;  // 0x38(0x4)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool RequiresEmptyLHand : 1;  // 0x3C(0x1)
	char pad_61_1 : 7;  // 0x3D(0x1)
	bool RequiresEmptyRHand : 1;  // 0x3D(0x1)
	char pad_62[2];  // 0x3E(0x2)

}; 
// ScriptStruct ConZ.PrisonerCommonData_ResponseIdles
// Size: 0x8(Inherited: 0x0) 
struct FPrisonerCommonData_ResponseIdles
{
	UPrisonerResponseIdle* DirtyAfterProne;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PrisonerInitialSkillInfo
// Size: 0x10(Inherited: 0x0) 
struct FPrisonerInitialSkillInfo
{
	struct USkill* Skill;  // 0x0(0x8)
	uint8_t  InitialLevel;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float InitialExperiencePoints;  // 0xC(0x4)

}; 
// ScriptStruct ConZ.PrisonerConditionalSpawnEquipment
// Size: 0x78(Inherited: 0x0) 
struct FPrisonerConditionalSpawnEquipment
{
	struct FGameplayTagQuery Condition;  // 0x0(0x48)
	struct TSoftClassPtr<UObject> ItemClass;  // 0x48(0x28)
	uint8_t  EquipType;  // 0x70(0x1)
	char pad_113[7];  // 0x71(0x7)

}; 
// ScriptStruct ConZ.PrisonerMovementSettings_Water
// Size: 0x54(Inherited: 0x0) 
struct FPrisonerMovementSettings_Water
{
	struct FPrisonerWaterMovementParameters Slow;  // 0x0(0xC)
	struct FPrisonerWaterMovementParameters Medium;  // 0xC(0xC)
	struct FPrisonerWaterMovementParameters Fast;  // 0x18(0xC)
	struct FPrisonerWaterMovementParameters DivingSlow;  // 0x24(0xC)
	struct FPrisonerWaterMovementParameters DivingMedium;  // 0x30(0xC)
	struct FFloatInterval MaxSpeedMultiplierVsPerformanceRatio;  // 0x3C(0x8)
	struct FFloatInterval AccelerationMultiplierVsPerformanceRatio;  // 0x44(0x8)
	struct FFloatInterval DecelerationMultiplierVsPerformanceRatio;  // 0x4C(0x8)

}; 
// ScriptStruct ConZ.PrisonerAirMovementParameters
// Size: 0x1C(Inherited: 0x0) 
struct FPrisonerAirMovementParameters
{
	float TerminalVelocity;  // 0x0(0x4)
	float LateralMaxSpeed;  // 0x4(0x4)
	float LateralDrag;  // 0x8(0x4)
	float DesiredPitch;  // 0xC(0x4)
	float YawRotationRateFactor;  // 0x10(0x4)
	float ControlChangeSpeed;  // 0x14(0x4)
	float DragIntensity;  // 0x18(0x4)

}; 
// Function ConZ.ItemActionSequence.GetNumberOfPendingNotifiesInCurrentSection
// Size: 0x8(Inherited: 0x0) 
struct FGetNumberOfPendingNotifiesInCurrentSection
{
	uint8_t  notifyType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone
// Size: 0x24(Inherited: 0x0) 
struct FPrisonerMovementSettings_Ground_Prone
{
	struct FPrisonerMovementSettings_Ground_Prone_Walking Walking;  // 0x0(0x24)

}; 
// Function ConZ.CharacterAction.PlayMontage
// Size: 0x20(Inherited: 0x0) 
struct FPlayMontage
{
	struct UAnimMontage* Montage;  // 0x0(0x8)
	float PlayRate;  // 0x8(0x4)
	struct FName startSection;  // 0xC(0x8)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool assignCallbacks : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	float ReturnValue;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ConZ.VehicleAttachmentBatterySetup
// Size: 0x30(Inherited: 0x0) 
struct FVehicleAttachmentBatterySetup
{
	UGameResourceType* BatteryResourceType;  // 0x0(0x8)
	float Charge;  // 0x8(0x4)
	float ChargingBaseDuration;  // 0xC(0x4)
	float ChargingDurationPerAmountCharged;  // 0x10(0x4)
	float ExperienceAwardedPerAmountCharged;  // 0x14(0x4)
	struct UAnimMontage* PrisonerChargingMontage;  // 0x18(0x8)
	struct UAkAudioEvent* StartChargingAudioEvent;  // 0x20(0x8)
	struct UAkAudioEvent* StopChargingAudioEvent;  // 0x28(0x8)

}; 
// Function ConZ.CargoDropContainer.AddCargoLocker
// Size: 0x8(Inherited: 0x0) 
struct FAddCargoLocker
{
	struct UStaticMeshComponent* cargoLocker;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone_Walking
// Size: 0x24(Inherited: 0x0) 
struct FPrisonerMovementSettings_Ground_Prone_Walking
{
	struct FPrisonerGroundMovementParameters Default;  // 0x0(0xC)
	struct FPrisonerGroundMovementParameters WeaponAiming;  // 0xC(0xC)
	struct FPrisonerGroundMovementParameters WeaponAimingDownTheSights;  // 0x18(0xC)

}; 
// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing
// Size: 0xB4(Inherited: 0x0) 
struct FPrisonerMovementSettings_Ground_Standing
{
	struct FPrisonerMovementSettings_Ground_Standing_Walking Walking;  // 0x0(0x30)
	struct FPrisonerMovementSettings_Ground_Standing_Walking WalkLimping;  // 0x30(0x30)
	struct FPrisonerMovementSettings_Ground_Standing_Jogging Jogging;  // 0x60(0x24)
	struct FPrisonerMovementSettings_Ground_Standing_Jogging JogLimping;  // 0x84(0x24)
	struct FPrisonerMovementSettings_Ground_Standing_Running Running;  // 0xA8(0xC)

}; 
// Function ConZ.InventoryNode.CanBeEverDropped
// Size: 0x1(Inherited: 0x0) 
struct FCanBeEverDropped
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Walking
// Size: 0x30(Inherited: 0x0) 
struct FPrisonerMovementSettings_Ground_Standing_Walking
{
	struct FPrisonerGroundMovementParameters Default;  // 0x0(0xC)
	struct FPrisonerGroundMovementParameters MeleeCombat;  // 0xC(0xC)
	struct FPrisonerGroundMovementParameters WeaponAiming;  // 0x18(0xC)
	struct FPrisonerGroundMovementParameters WeaponAimingDownTheSights;  // 0x24(0xC)

}; 
// Function ConZ.ConZBaseManager.NetMulticast_DestroyAllElementsInRadius
// Size: 0x30(Inherited: 0x0) 
struct FNetMulticast_DestroyAllElementsInRadius
{
	int32_t dataVersion;  // 0x0(0x4)
	struct FVector Center;  // 0x4(0xC)
	float Radius;  // 0x10(0x4)
	float minElementAreaCovered;  // 0x14(0x4)
	float minAngleDeg;  // 0x18(0x4)
	float maxAngleDeg;  // 0x1C(0x4)
	struct FVector forwardVector;  // 0x20(0xC)
	uint8_t  typeFilter;  // 0x2C(0x4)

}; 
// ScriptStruct ConZ.MusicPlayerPlaybackOptions
// Size: 0x28(Inherited: 0x0) 
struct FMusicPlayerPlaybackOptions
{
	struct TArray<struct FString> MusicPlaylist;  // 0x0(0x10)
	int32_t CurrentPlaylistIndex;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool PlaybackPaused : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	float CurrentPlaybackVolume;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool ShouldRepeatCurrent : 1;  // 0x1C(0x1)
	char pad_29_1 : 7;  // 0x1D(0x1)
	bool ShouldLoop : 1;  // 0x1D(0x1)
	char pad_30_1 : 7;  // 0x1E(0x1)
	bool ShouldShuffle : 1;  // 0x1E(0x1)
	char pad_31_1 : 7;  // 0x1F(0x1)
	bool ShouldPlayRadio : 1;  // 0x1F(0x1)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool IsTurnedOn : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// ScriptStruct ConZ.PrisonerRestingDataAutonomous
// Size: 0x1C(Inherited: 0x0) 
struct FPrisonerRestingDataAutonomous
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool HasDisabledMovement : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector_NetQuantize Location;  // 0x4(0xC)
	struct FVector_NetQuantize EulerRotation;  // 0x10(0xC)

}; 
// ScriptStruct ConZ.PrisonerRestingParameters
// Size: 0x60(Inherited: 0x0) 
struct FPrisonerRestingParameters
{
	uint8_t  mode;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ShouldUpdateTransform : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool ShouldDisableMovement : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool ShouldDisableCapsuleCollision : 1;  // 0x3(0x1)
	struct TWeakObjectPtr<UAnimSequenceBase> RestingAnimation;  // 0x4(0x8)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<struct FVector> EndRestLocations;  // 0x10(0x10)
	struct FTransform Transform;  // 0x20(0x30)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool IsRestingOnGround : 1;  // 0x50(0x1)
	char pad_81[3];  // 0x51(0x3)
	float FeetIKOffset;  // 0x54(0x4)
	struct TWeakObjectPtr<AItem> Item;  // 0x58(0x8)

}; 
// Function ConZ.CargoDropContainer.SetLockStateWidget
// Size: 0x8(Inherited: 0x0) 
struct FSetLockStateWidget
{
	struct UDiegeticLockState* Value;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameInstance.GetPlayAsDrone
// Size: 0x1(Inherited: 0x0) 
struct FGetPlayAsDrone
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventBase.GetNumberOfParticipants
// Size: 0x4(Inherited: 0x0) 
struct FGetNumberOfParticipants
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PhotoModeMainPanel.MoveFocusUp
// Size: 0x10(Inherited: 0x0) 
struct FMoveFocusUp
{
	uint8_t  UINavigation;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UWidget* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.MetabolismSymptomTitle.GetToolTipWidget
// Size: 0x8(Inherited: 0x0) 
struct FGetToolTipWidget
{
	struct UWidget* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ThrowingItemData
// Size: 0x10(Inherited: 0x0) 
struct FThrowingItemData
{
	char pad_0[16];  // 0x0(0x10)

}; 
// Function ConZ.MeleeSkill.GetWalkingIdleAnimationTP
// Size: 0x8(Inherited: 0x0) 
struct FGetWalkingIdleAnimationTP
{
	struct UAnimSequenceBase* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.PrisonerDistanceTravelledContext
// Size: 0x20(Inherited: 0x0) 
struct FPrisonerDistanceTravelledContext
{
	char pad_0[32];  // 0x0(0x20)

}; 
// ScriptStruct ConZ.PrisonerMeleeAttackTypes
// Size: 0x88(Inherited: 0x0) 
struct FPrisonerMeleeAttackTypes
{
	struct FGameplayTag PrimaryMeleeAttackTypeWhenNotMoving;  // 0x0(0x8)
	struct FGameplayTag PrimaryMeleeAttackTypeWhenWalking;  // 0x8(0x8)
	struct FGameplayTag PrimaryMeleeAttackTypeWhenJogging;  // 0x10(0x8)
	struct FGameplayTag PrimaryMeleeAttackTypeWhenRunning;  // 0x18(0x8)
	struct FGameplayTag PrimaryMeleeAttackTypeWhenFalling;  // 0x20(0x8)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenNotMoving;  // 0x28(0x8)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenWalking;  // 0x30(0x8)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenJogging;  // 0x38(0x8)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenRunning;  // 0x40(0x8)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenFalling;  // 0x48(0x8)
	struct FGameplayTag ComboMeleeAttackTypeWhenNotMoving;  // 0x50(0x8)
	struct FGameplayTag ComboMeleeAttackTypeWhenWalking;  // 0x58(0x8)
	struct FGameplayTag ComboMeleeAttackTypeWhenJogging;  // 0x60(0x8)
	struct FGameplayTag ComboMeleeAttackTypeWhenRunning;  // 0x68(0x8)
	struct FGameplayTag ComboMeleeAttackTypeWhenFalling;  // 0x70(0x8)
	struct FGameplayTag BashMeleeAttackType;  // 0x78(0x8)
	struct FGameplayTag WeaponBayonetMeleeAttackType;  // 0x80(0x8)

}; 
// ScriptStruct ConZ.SkillEventWeaponProjectileHitTarget
// Size: 0x28(Inherited: 0x1) 
struct FSkillEventWeaponProjectileHitTarget : public FSkillEventWeapon
{
	char pad_1[7];  // 0x1(0x7)
	struct AActor* Target;  // 0x8(0x8)
	float Distance;  // 0x10(0x4)
	float EnergyRatio;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool IsHeadShot : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool IsKill : 1;  // 0x19(0x1)
	char pad_26_1 : 7;  // 0x1A(0x1)
	bool WasSniping : 1;  // 0x1A(0x1)
	uint8_t  stance;  // 0x1B(0x1)
	uint8_t  WindSpeedCategory;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	float ExperienceMultiplier;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ConZ.PrisonerTurnMontageDescription
// Size: 0x30(Inherited: 0x0) 
struct FPrisonerTurnMontageDescription
{
	struct UAnimSequenceBase* AnimationL90;  // 0x0(0x8)
	struct UAnimSequenceBase* AnimationR90;  // 0x8(0x8)
	struct FName TurnAngleCurveName;  // 0x10(0x8)
	struct FName SlotName;  // 0x18(0x8)
	float BlendInTime;  // 0x20(0x4)
	float BlendOutTime;  // 0x24(0x4)
	float BlendOutTriggerTime;  // 0x28(0x4)
	float PlayRate;  // 0x2C(0x4)

}; 
// ScriptStruct ConZ.DerivedPrisonerSkillComponentUIData
// Size: 0x38(Inherited: 0x0) 
struct FDerivedPrisonerSkillComponentUIData
{
	char pad_0[56];  // 0x0(0x38)

}; 
// ScriptStruct ConZ.LocalOffsetCurves
// Size: 0x20(Inherited: 0x0) 
struct FLocalOffsetCurves
{
	struct UCurveLinearColor* YawIdle;  // 0x0(0x8)
	struct UCurveLinearColor* YawMoving;  // 0x8(0x8)
	struct UCurveLinearColor* PitchIdle;  // 0x10(0x8)
	struct UCurveLinearColor* PitchMoving;  // 0x18(0x8)

}; 
// Function ConZ.WeaponBow.GetOwnersDrawWeightBySkill
// Size: 0x4(Inherited: 0x0) 
struct FGetOwnersDrawWeightBySkill
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.PrisonerViewInfo
// Size: 0x610(Inherited: 0x5F0) 
struct FPrisonerViewInfo : public FMinimalViewInfo
{
	float WeaponFOV;  // 0x5F0(0x4)
	struct FVector WeaponFoveationOffset;  // 0x5F4(0xC)
	float MinViewYaw;  // 0x600(0x4)
	float MaxViewYaw;  // 0x604(0x4)
	float MinViewPitch;  // 0x608(0x4)
	float MaxViewPitch;  // 0x60C(0x4)

}; 
// Function ConZ.AttributeMapInterface.GetFloatAttribute
// Size: 0x18(Inherited: 0x0) 
struct FGetFloatAttribute
{
	struct FString Name;  // 0x0(0x10)
	float ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ConZ.ProjectileData
// Size: 0x60(Inherited: 0x0) 
struct FProjectileData
{
	struct FText Caption;  // 0x0(0x18)
	float Caliber;  // 0x18(0x4)
	float Weight;  // 0x1C(0x4)
	float MuzzleVelocity;  // 0x20(0x4)
	float BallisticCoefficient;  // 0x24(0x4)
	uint8_t  BallisticDragModel;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	float InitialDamage;  // 0x2C(0x4)
	float InitialDamageInGameEvent;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)
	struct FTargetTypeDamageMultiplier TargetTypeMultiplier;  // 0x38(0x10)
	float PenetrationFactor;  // 0x48(0x4)
	float GlancingAngle;  // 0x4C(0x4)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool AllowGlanceOrForceBounce : 1;  // 0x50(0x1)
	char pad_81[3];  // 0x51(0x3)
	float BounceAngle;  // 0x54(0x4)
	float ArmorPiercingFactor;  // 0x58(0x4)
	char pad_92_1 : 7;  // 0x5C(0x1)
	bool CanCauseHeadExplosion : 1;  // 0x5C(0x1)
	char pad_93[3];  // 0x5D(0x3)

}; 
// Function ConZ.SerializableLayoutWidgetInterface.SaveLayout
// Size: 0x10(Inherited: 0x0) 
struct FSaveLayout
{
	struct TScriptInterface<IAttributeMapInterface> Attributes;  // 0x0(0x10)

}; 
// ScriptStruct ConZ.FiredShotDescriptionRep
// Size: 0x4(Inherited: 0x0) 
struct FFiredShotDescriptionRep
{
	uint32_t PackedData;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.ConnectionSaveData
// Size: 0x18(Inherited: 0x0) 
struct FConnectionSaveData
{
	struct FEntityComponentId ID;  // 0x0(0x10)
	float Amount;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.WetnessStatics.SetMaterialsWetness
// Size: 0x10(Inherited: 0x0) 
struct FSetMaterialsWetness
{
	struct UPrimitiveComponent* Component;  // 0x0(0x8)
	float Wetness;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct ConZ.RequiredRepairingItemTagParams
// Size: 0x10(Inherited: 0x0) 
struct FRequiredRepairingItemTagParams
{
	struct UBaseItemTag* ItemTag;  // 0x0(0x8)
	int32_t ItemUsageConsumption;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct ConZ.RepairableParams
// Size: 0x38(Inherited: 0x0) 
struct FRepairableParams
{
	struct FGameplayTagContainer RepairableTypes;  // 0x0(0x20)
	float HealthRepairedPerUse;  // 0x20(0x4)
	float ExperienceAwardedPerHealthRepaired;  // 0x24(0x4)
	float MinRepairDuration;  // 0x28(0x4)
	float MaxRepairDuration;  // 0x2C(0x4)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ShouldRepairZeroHealth : 1;  // 0x30(0x1)
	uint8_t  MinSkillLevelRequired;  // 0x31(0x1)
	char pad_50[6];  // 0x32(0x6)

}; 
// ScriptStruct ConZ.ReplenishableResource
// Size: 0xA0(Inherited: 0x0) 
struct FReplenishableResource
{
	char pad_0[160];  // 0x0(0xA0)

}; 
// Function ConZ.MathStatics.NormalizeRotator
// Size: 0x18(Inherited: 0x0) 
struct FNormalizeRotator
{
	struct FRotator Rotator;  // 0x0(0xC)
	struct FRotator ReturnValue;  // 0xC(0xC)

}; 
// ScriptStruct ConZ.PeriodicallyReplenishedResourceDescription
// Size: 0x10(Inherited: 0x0) 
struct FPeriodicallyReplenishedResourceDescription
{
	float InitialAmount;  // 0x0(0x4)
	float MaxAmount;  // 0x4(0x4)
	float ReplenishInterval;  // 0x8(0x4)
	float ReplenishAmount;  // 0xC(0x4)

}; 
// ScriptStruct ConZ.AreaResourceLockNetwork
// Size: 0x20(Inherited: 0x0) 
struct FAreaResourceLockNetwork
{
	struct FResourceNetworkGUID LockOwnerGUID;  // 0x0(0x4)
	struct FBox Area;  // 0x4(0x1C)

}; 
// ScriptStruct ConZ.ActorResourceLockNetwork
// Size: 0xC(Inherited: 0x0) 
struct FActorResourceLockNetwork
{
	struct FResourceNetworkGUID LockOwnerGUID;  // 0x0(0x4)
	struct FResourceNetworkGUID ResourceGUID;  // 0x4(0x4)
	int32_t ResourceId;  // 0x8(0x4)

}; 
// ScriptStruct ConZ.MeshInstancesRestoreOptions
// Size: 0x4(Inherited: 0x0) 
struct FMeshInstancesRestoreOptions
{
	float RestoreInterval;  // 0x0(0x4)

}; 
// Function ConZ.CombinationLockItem.Server_SetCombination
// Size: 0x4(Inherited: 0x0) 
struct FServer_SetCombination
{
	int32_t Value;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.RestorableMeshInstanceId
// Size: 0x18(Inherited: 0x0) 
struct FRestorableMeshInstanceId
{
	char pad_0[24];  // 0x0(0x18)

}; 
// Function ConZ.GameEventBase.SavePrisonerState
// Size: 0x8(Inherited: 0x0) 
struct FSavePrisonerState
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.SedentaryNPCHeadAnimationAndAudio
// Size: 0x18(Inherited: 0x0) 
struct FSedentaryNPCHeadAnimationAndAudio
{
	struct UAnimMontage* HeadAnimation;  // 0x0(0x8)
	struct UAkAudioEvent* AudioEvent;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool OverrideNativeTrackingAnimations : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.GrenadeItem.GetArmingMontage
// Size: 0x10(Inherited: 0x0) 
struct FGetArmingMontage
{
	uint8_t  throwingType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UAnimMontage* ReturnValue;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.SedentaryNPCMarker
// Size: 0x70(Inherited: 0x0) 
struct FSedentaryNPCMarker
{
	struct TSoftClassPtr<UObject> SedentaryNPCClass;  // 0x0(0x28)
	char pad_40[8];  // 0x28(0x8)
	struct FTransform SpawnTransform;  // 0x30(0x30)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool ShouldRaycastSpawnPosition : 1;  // 0x60(0x1)
	char pad_97[15];  // 0x61(0xF)

}; 
// ScriptStruct ConZ.InPlaceTurnAnimationInfo
// Size: 0x14(Inherited: 0x0) 
struct FInPlaceTurnAnimationInfo
{
	float Duration;  // 0x0(0x4)
	float TurnSpeed;  // 0x4(0x4)
	float AnimationPlayRate;  // 0x8(0x4)
	float BlendInDuration;  // 0xC(0x4)
	float BlendOutDuration;  // 0x10(0x4)

}; 
// Function ConZ.GameEventBase.IsParticipating
// Size: 0x10(Inherited: 0x0) 
struct FIsParticipating
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.PlayerRpcChannel.Vehicle_Server_TakeMeleeDamage
// Size: 0x10(Inherited: 0x0) 
struct FVehicle_Server_TakeMeleeDamage
{
	struct UVehicleAttachment* Attachment;  // 0x0(0x8)
	float damageAmount;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct ConZ.SentryGlitchingPartInfo
// Size: 0x8(Inherited: 0x0) 
struct FSentryGlitchingPartInfo
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsGlitching : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float NextUpdateTime;  // 0x4(0x4)

}; 
// ScriptStruct ConZ.SentryCombatBehaviorMode
// Size: 0x20(Inherited: 0x0) 
struct FSentryCombatBehaviorMode
{
	float CombatVariationWeights[5];  // 0x0(0x14)
	float GrenadeLaunchVariationWeights[3];  // 0x14(0xC)

}; 
// ScriptStruct ConZ.SentryMeleeAttackDescription
// Size: 0x10(Inherited: 0x0) 
struct FSentryMeleeAttackDescription
{
	struct UAnimMontage* AttackAnimation;  // 0x0(0x8)
	float EnemyAngleMin;  // 0x8(0x4)
	float EnemyAngleMax;  // 0xC(0x4)

}; 
// Function ConZ.ItemActionSequenceLoadMagazine.GetEndSectionName
// Size: 0x8(Inherited: 0x0) 
struct FGetEndSectionName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ServerUsedItem
// Size: 0x18(Inherited: 0x0) 
struct FServerUsedItem
{
	struct AItem* Item;  // 0x0(0x8)
	int32_t Quantity;  // 0x8(0x4)
	int32_t Usage;  // 0xC(0x4)
	float usageWeight;  // 0x10(0x4)
	uint8_t  CraftingType;  // 0x14(0x1)
	char pad_21_1 : 7;  // 0x15(0x1)
	bool SpawnHere : 1;  // 0x15(0x1)
	char pad_22[2];  // 0x16(0x2)

}; 
// ScriptStruct ConZ.PriceUpdateData
// Size: 0x90(Inherited: 0x0) 
struct FPriceUpdateData
{
	char pad_0[144];  // 0x0(0x90)

}; 
// ScriptStruct ConZ.SkillEventWeapon
// Size: 0x1(Inherited: 0x0) 
struct FSkillEventWeapon
{
	uint8_t  WeaponCategory;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.SkillEventWeaponClearedMalfunction
// Size: 0x2(Inherited: 0x1) 
struct FSkillEventWeaponClearedMalfunction : public FSkillEventWeapon
{
	uint8_t  malfunction;  // 0x1(0x1)

}; 
// ScriptStruct ConZ.SkillEventWeaponFireShot
// Size: 0x1(Inherited: 0x1) 
struct FSkillEventWeaponFireShot : public FSkillEventWeapon
{

}; 
// Function ConZ.FishingAttachment.GetOwningFishingRod
// Size: 0x8(Inherited: 0x0) 
struct FGetOwningFishingRod
{
	struct AFishingRod* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.SkillRecord
// Size: 0x20(Inherited: 0x0) 
struct FSkillRecord
{
	uint8_t  ID;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ExperiencePoints;  // 0x4(0x4)
	uint8_t  Level;  // 0x8(0x1)
	int8_t counter;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)
	struct TArray<char> SkillSpecificData;  // 0x10(0x10)

}; 
// ScriptStruct ConZ.SliderWithLabelAndNumberStyle
// Size: 0x158(Inherited: 0x0) 
struct FSliderWithLabelAndNumberStyle
{
	struct FSlateBrush FocusBackgroundImage;  // 0x0(0x88)
	struct FSliderWithLabelAndNumberTextStyle LabelText;  // 0x88(0x68)
	struct FSliderWithLabelAndNumberTextStyle NumberText;  // 0xF0(0x68)

}; 
// Function ConZ.ComplexAnimal2.ChangePace
// Size: 0x1(Inherited: 0x0) 
struct FChangePace
{
	uint8_t  pace;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.SliderWithLabelAndNumberTextStyle
// Size: 0x68(Inherited: 0x0) 
struct FSliderWithLabelAndNumberTextStyle
{
	struct FSlateFontInfo Font;  // 0x0(0x58)
	struct FLinearColor ColorAndOpacity;  // 0x58(0x10)

}; 
// Function ConZ.ConZSquad.GetLeader
// Size: 0x8(Inherited: 0x0) 
struct FGetLeader
{
	struct FDbIntegerId ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerMovementComponent.IsClimbingWindow
// Size: 0x1(Inherited: 0x0) 
struct FIsClimbingWindow
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.StartLocationDescription
// Size: 0x50(Inherited: 0x0) 
struct FStartLocationDescription
{
	char TypeFlags;  // 0x0(0x1)
	char pad_1[15];  // 0x1(0xF)
	struct FTransform Transform;  // 0x10(0x30)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool IsDisabled : 1;  // 0x40(0x1)
	char pad_65[15];  // 0x41(0xF)

}; 
// Function ConZ.SwingItemComponent.Server_SetSwingSpeedLevel
// Size: 0x8(Inherited: 0x0) 
struct FServer_SetSwingSpeedLevel
{
	int32_t Value;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool shouldPlaySwingMontageEndSection : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// ScriptStruct ConZ.CompassSkillParametersPerSkillLevel
// Size: 0x1(Inherited: 0x0) 
struct FCompassSkillParametersPerSkillLevel
{
	char CompassSkillLevel;  // 0x0(0x1)

}; 
// Function ConZ.HandsHolstersWidget2.OnFishingAttachmentDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnFishingAttachmentDestroyed
{
	struct AActor* Attachment;  // 0x0(0x8)

}; 
// Function ConZ.KillboxComponent.OnInnerDoorUnlockedDelegate
// Size: 0x8(Inherited: 0x0) 
struct FOnInnerDoorUnlockedDelegate
{
	struct ADoor* Door;  // 0x0(0x8)

}; 
// Function ConZ.Vehicle.GetMaxVehicleEngineBlockHealth
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxVehicleEngineBlockHealth
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.ConZFontRow
// Size: 0x70(Inherited: 0x8) 
struct FConZFontRow : public FTableRowBase
{
	struct FSlateFontInfo Font;  // 0x8(0x58)
	struct FString Description;  // 0x60(0x10)

}; 
// ScriptStruct ConZ.ItemFirstPersonUpperBodyAnimationsData
// Size: 0x50(Inherited: 0x0) 
struct FItemFirstPersonUpperBodyAnimationsData
{
	struct UAnimSequenceBase* StandIdle;  // 0x0(0x8)
	struct UBlendSpace1D* StandWalk;  // 0x8(0x8)
	struct UBlendSpace1D* StandWalkLimping;  // 0x10(0x8)
	struct UBlendSpace1D* StandJog;  // 0x18(0x8)
	struct UBlendSpace1D* StandJogLimping;  // 0x20(0x8)
	struct UAnimSequenceBase* StandRun;  // 0x28(0x8)
	struct UAnimSequenceBase* CrouchIdle;  // 0x30(0x8)
	struct UBlendSpace1D* CrouchWalk;  // 0x38(0x8)
	struct UBlendSpace1D* CrouchWalkLimping;  // 0x40(0x8)
	struct UAnimSequenceBase* ProneIdle;  // 0x48(0x8)

}; 
// Function ConZ.MathStatics.AreCirclesIntersecting
// Size: 0x1C(Inherited: 0x0) 
struct FAreCirclesIntersecting
{
	struct FVector2D centerA;  // 0x0(0x8)
	float radiusA;  // 0x8(0x4)
	struct FVector2D centerB;  // 0xC(0x8)
	float radiusB;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool onlyEdge : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool ReturnValue : 1;  // 0x19(0x1)
	char pad_26[2];  // 0x1A(0x2)

}; 
// ScriptStruct ConZ.HandsPoseCorrections
// Size: 0x40(Inherited: 0x0) 
struct FHandsPoseCorrections
{
	struct UAnimSequenceBase* RightHand;  // 0x0(0x8)
	struct UAnimSequenceBase* RightFist;  // 0x8(0x8)
	struct UAnimSequenceBase* RightFistInCombatMode;  // 0x10(0x8)
	float RightHandToIdleBlendAlpha;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	struct UAnimSequenceBase* LeftHand;  // 0x20(0x8)
	struct UAnimSequenceBase* LeftFist;  // 0x28(0x8)
	struct UAnimSequenceBase* LeftFistInCombatMode;  // 0x30(0x8)
	float LeftHandToIdleBlendAlpha;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 
// Function ConZ.SentryAnimInstance2.GetTurnInPlaceBlendAlpha
// Size: 0x4(Inherited: 0x0) 
struct FGetTurnInPlaceBlendAlpha
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.GhostTrailComponent.GetTrailActive
// Size: 0x1(Inherited: 0x0) 
struct FGetTrailActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.ObjectiveItem
// Size: 0x10(Inherited: 0x0) 
struct FObjectiveItem
{
	AItem* ItemClass;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)

}; 
// ScriptStruct ConZ.TeamDeathmatchParameters
// Size: 0x14(Inherited: 0x0) 
struct FTeamDeathmatchParameters
{
	int32_t RoundScoreLimit;  // 0x0(0x4)
	float AreaRestrictionInterval;  // 0x4(0x4)
	float AreaRestrictionDuration;  // 0x8(0x4)
	float AreaRestrictionStep;  // 0xC(0x4)
	float BarrierHeatUpDuration;  // 0x10(0x4)

}; 
// ScriptStruct ConZ.VehicleWeaponAimingStanceTransitionCurves
// Size: 0x10(Inherited: 0x0) 
struct FVehicleWeaponAimingStanceTransitionCurves
{
	uint8_t  stance;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UCurveFloat* SupportedYawAngles;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.TeleportRepData
// Size: 0x30(Inherited: 0x0) 
struct FTeleportRepData
{
	char RequestID;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool IsInProgress : 1;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	struct TWeakObjectPtr<AActor> Subject;  // 0x4(0x8)
	struct FVector TargetLocation;  // 0xC(0xC)
	struct FRotator TargetRotation;  // 0x18(0xC)
	char pad_36[4];  // 0x24(0x4)
	struct FTeleportUserDataReplicator UserDataReplicator;  // 0x28(0x8)

}; 
// ScriptStruct ConZ.ThrowingAnimationSet
// Size: 0x20(Inherited: 0x0) 
struct FThrowingAnimationSet
{
	struct UAnimMontage* PlayerLongThrowMontage;  // 0x0(0x8)
	struct UAnimMontage* PlayerLongThrowLoopMontage;  // 0x8(0x8)
	struct UAnimMontage* PlayerShortThrowMontage;  // 0x10(0x8)
	struct UAnimMontage* PlayerThrowbackMontage;  // 0x18(0x8)

}; 
// ScriptStruct ConZ.TireSurfaceAudioEntry
// Size: 0x18(Inherited: 0x0) 
struct FTireSurfaceAudioEntry
{
	struct UAkAudioEvent* SoundGroup;  // 0x0(0x8)
	struct TArray<char EPhysicalSurface> RelatedPhysicalSurfaces;  // 0x8(0x10)

}; 
// ScriptStruct ConZ.TournamentStats
// Size: 0x30(Inherited: 0x0) 
struct FTournamentStats
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	struct FString PlayerName;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool online : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool Alive : 1;  // 0x19(0x1)
	char pad_26[2];  // 0x1A(0x2)
	int32_t FamePoints;  // 0x1C(0x4)
	int32_t Kills;  // 0x20(0x4)
	int32_t Deaths;  // 0x24(0x4)
	struct FDateTime LastDeathTime;  // 0x28(0x8)

}; 
// Function ConZ.WorldStatics.GetDistanceSquaredToClosestPlayerPawnOrSpectator
// Size: 0x18(Inherited: 0x0) 
struct FGetDistanceSquaredToClosestPlayerPawnOrSpectator
{
	struct UWorld* World;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	float ReturnValue;  // 0x14(0x4)

}; 
// Function ConZ.BaseCraftingRecipe.Process
// Size: 0x98(Inherited: 0x0) 
struct FProcess
{
	struct FCraftingRecipeParams Params;  // 0x0(0x88)
	struct UCraftingResult* Result;  // 0x88(0x8)
	char pad_144_1 : 7;  // 0x90(0x1)
	bool ReturnValue : 1;  // 0x90(0x1)
	char pad_145[7];  // 0x91(0x7)

}; 
// Function ConZ.KillboxComponent.AddHardSpawnPoint
// Size: 0x10(Inherited: 0x0) 
struct FAddHardSpawnPoint
{
	struct ADoor* holeDoor;  // 0x0(0x8)
	struct AKillBoxSpawnPoint* Spawner;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.TournamentParameters
// Size: 0x10(Inherited: 0x0) 
struct FTournamentParameters
{
	char pad_0[16];  // 0x0(0x10)

}; 
// Function ConZ.TextStatics.GetColorText
// Size: 0x20(Inherited: 0x0) 
struct FGetColorText
{
	uint8_t  Color;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FText ReturnValue;  // 0x8(0x18)

}; 
// ScriptStruct ConZ.TraderDropdownMenuEntry
// Size: 0x50(Inherited: 0x0) 
struct FTraderDropdownMenuEntry
{
	struct FText Title;  // 0x0(0x18)
	int32_t IndentationLevel;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	struct FGameplayTagContainer TradeCategories;  // 0x20(0x20)
	struct UUserWidget* RelatedCategoryButton;  // 0x40(0x8)
	struct UPanelWidget* PanelToOpenOnClick;  // 0x48(0x8)

}; 
// ScriptStruct ConZ.TraderLocationMarker
// Size: 0x40(Inherited: 0x0) 
struct FTraderLocationMarker
{
	uint8_t  MarkerType;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FTransform Transform;  // 0x10(0x30)

}; 
// ScriptStruct ConZ.PendingTraderPersonalityDataHelperStruct
// Size: 0x18(Inherited: 0x0) 
struct FPendingTraderPersonalityDataHelperStruct
{
	char pad_0[16];  // 0x0(0x10)
	struct UTraderPersonalityDataAsset* Personality;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.TradeablesResponseData
// Size: 0x50(Inherited: 0x0) 
struct FTradeablesResponseData
{
	char pad_0[80];  // 0x0(0x50)

}; 
// ScriptStruct ConZ.TradeableClassDataOverrideReplicationHelper
// Size: 0x70(Inherited: 0x0) 
struct FTradeableClassDataOverrideReplicationHelper
{
	char pad_0[112];  // 0x0(0x70)

}; 
// Function ConZ.ChatWidget.OnTextCommitted
// Size: 0x20(Inherited: 0x0) 
struct FOnTextCommitted
{
	struct FText Text;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// ScriptStruct ConZ.PerTraderOverrideDataHelper
// Size: 0x70(Inherited: 0x0) 
struct FPerTraderOverrideDataHelper
{
	char pad_0[112];  // 0x0(0x70)

}; 
// ScriptStruct ConZ.TradeableOverrideData
// Size: 0x1C(Inherited: 0x0) 
struct FTradeableOverrideData
{
	char pad_0[28];  // 0x0(0x1C)

}; 
// ScriptStruct ConZ.TrapTriggerParams
// Size: 0x10(Inherited: 0x0) 
struct FTrapTriggerParams
{
	struct AActor* TriggeredActor;  // 0x0(0x8)
	float DeltaTime;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.WeaponActionSequence.Execute
// Size: 0x4(Inherited: 0x0) 
struct FExecute
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.DebugRpcChannel.Server_Farming_SetWeedIntensity
// Size: 0x10(Inherited: 0x0) 
struct FServer_Farming_SetWeedIntensity
{
	struct AGarden* Garden;  // 0x0(0x8)
	int32_t SlotId;  // 0x8(0x4)
	float Intensity;  // 0xC(0x4)

}; 
// Function ConZ.GameEventBase.GetNumberOfActiveParticipants
// Size: 0x4(Inherited: 0x0) 
struct FGetNumberOfActiveParticipants
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.UsableObjectiveItem
// Size: 0x10(Inherited: 0x0) 
struct FUsableObjectiveItem
{
	AItem* ItemClass;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)

}; 
// Function ConZ.WeaponActionSequence.CanExecute
// Size: 0x1(Inherited: 0x0) 
struct FCanExecute
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.UserProfileAuthorityInfo
// Size: 0x40(Inherited: 0x0) 
struct FUserProfileAuthorityInfo
{
	struct FString Name;  // 0x0(0x10)
	struct FString Ip;  // 0x10(0x10)
	int32_t ResponsePort;  // 0x20(0x4)
	int32_t GameplayPort;  // 0x24(0x4)
	struct FDbIntegerId UserProfileId;  // 0x28(0x8)
	struct FString AuthToken;  // 0x30(0x10)

}; 
// ScriptStruct ConZ.UserServerHistoryItem
// Size: 0x28(Inherited: 0x0) 
struct FUserServerHistoryItem
{
	struct FString Name;  // 0x0(0x10)
	struct FString Host;  // 0x10(0x10)
	int32_t Port;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ConZ.VehicleAttachmentBatterySimulationData
// Size: 0x4(Inherited: 0x0) 
struct FVehicleAttachmentBatterySimulationData
{
	float CurrentCharge;  // 0x0(0x4)

}; 
// Function ConZ.CustomZoneSettingsRegionDetails.HandleNameChange
// Size: 0x20(Inherited: 0x0) 
struct FHandleNameChange
{
	struct FText Text;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// ScriptStruct ConZ.VehicleServiceItemSlot
// Size: 0x18(Inherited: 0x0) 
struct FVehicleServiceItemSlot
{
	struct FName ItemLocationSocketName;  // 0x0(0x8)
	struct FName AttachPointSocketName;  // 0x8(0x8)
	struct FGameplayTag ServiceTag;  // 0x10(0x8)

}; 
// Function ConZ.WeaponAction.InsertCartridgeIntoMagazine
// Size: 0x10(Inherited: 0x0) 
struct FInsertCartridgeIntoMagazine
{
	struct AWeaponAttachmentMagazine* magazine;  // 0x0(0x8)
	struct AAmmunitionItem* ammo;  // 0x8(0x8)

}; 
// Function ConZ.DebugRpcChannel.Server_Farming_PlantAPlant
// Size: 0x20(Inherited: 0x0) 
struct FServer_Farming_PlantAPlant
{
	struct APrisoner* planter;  // 0x0(0x8)
	struct AGarden* Garden;  // 0x8(0x8)
	int32_t Slot;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct UPlantSpecies* species;  // 0x18(0x8)

}; 
// ScriptStruct ConZ.VehicleAttachmentDoorSetup
// Size: 0x60(Inherited: 0x0) 
struct FVehicleAttachmentDoorSetup
{
	struct FRotator OpenRotator;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct FTransform PrisonerTransformToInteract;  // 0x10(0x30)
	struct UAnimMontage* PrisonerUnmountedOpenMontage;  // 0x40(0x8)
	struct UAnimMontage* PrisonerUnmountedCloseMontage;  // 0x48(0x8)
	struct UAnimMontage* PrisonerMountedOpenMontage;  // 0x50(0x8)
	struct UAnimMontage* PrisonerMountedCloseMontage;  // 0x58(0x8)

}; 
// ScriptStruct ConZ.VehicleAttachmentEngineBlockSimulationData
// Size: 0x2C(Inherited: 0x0) 
struct FVehicleAttachmentEngineBlockSimulationData
{
	uint8_t  State;  // 0x0(0x1)
	char pad_1[11];  // 0x1(0xB)
	float IgnitionDurationMultiplier;  // 0xC(0x4)
	float IgnitionFailureChance;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ShouldApplyTorque : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	float CurrentRpm;  // 0x18(0x4)
	float Load;  // 0x1C(0x4)
	float CurrentFuelCapacity;  // 0x20(0x4)
	float TargetTemperature;  // 0x24(0x4)
	float CurrentTemperature;  // 0x28(0x4)

}; 
// ScriptStruct ConZ.VehicleAttachmentEngineBlockSetup
// Size: 0x110(Inherited: 0x0) 
struct FVehicleAttachmentEngineBlockSetup
{
	struct UCurveFloat* AccelerationCurve;  // 0x0(0x8)
	struct UCurveFloat* TorqueCurve;  // 0x8(0x8)
	float RpmMax;  // 0x10(0x4)
	float RpmLimiter;  // 0x14(0x4)
	float RpmIdle;  // 0x18(0x4)
	float RpmRise;  // 0x1C(0x4)
	float RpmFall;  // 0x20(0x4)
	float FuelCapacity;  // 0x24(0x4)
	UGameResourceType* FuelResourceType;  // 0x28(0x8)
	struct UCurveFloat* FuelConsumptionToRpmCurve;  // 0x30(0x8)
	float FuelFillingBaseDuration;  // 0x38(0x4)
	float FuelDrainingBaseDuration;  // 0x3C(0x4)
	float FillingDurationPerFuelAmountFilled;  // 0x40(0x4)
	float DrainingDurationPerFuelAmountDrained;  // 0x44(0x4)
	float ExperienceAwardedPerFuelAmountFilled;  // 0x48(0x4)
	float ExperienceAwardedPerFuelAmountDrained;  // 0x4C(0x4)
	struct UAnimMontage* PrisonerFillingFuelMontage;  // 0x50(0x8)
	struct UAnimMontage* PrisonerDrainingFuelMontage;  // 0x58(0x8)
	struct UAkAudioEvent* StartFillingFuelAudioEvent;  // 0x60(0x8)
	struct UAkAudioEvent* StopFillingFuelAudioEvent;  // 0x68(0x8)
	struct UAkAudioEvent* StartFillingFuelWithReplenishableResourceAudioEvent;  // 0x70(0x8)
	struct UAkAudioEvent* StopFillingFuelWithReplenishableResourceAudioEvent;  // 0x78(0x8)
	struct UAkAudioEvent* StartDrainingFuelAudioEvent;  // 0x80(0x8)
	struct UAkAudioEvent* StopDrainingFuelAudioEvent;  // 0x88(0x8)
	struct FVector ReplenishableFillSourceOverlapBoxExtent;  // 0x90(0xC)
	float IgnitionBatteryDrainPerSecond;  // 0x9C(0x4)
	struct UAkAudioEvent* RunningAudioEventStart;  // 0xA0(0x8)
	struct UAkAudioEvent* RunningAudioEventStop;  // 0xA8(0x8)
	float RTPCRpmMaxMultiplier;  // 0xB0(0x4)
	float RTPCRpmMinMultiplier;  // 0xB4(0x4)
	float RTPCRpmMultiplier;  // 0xB8(0x4)
	float RTPCRpmMultiplierReverse;  // 0xBC(0x4)
	float WorkingTemperature;  // 0xC0(0x4)
	float MaxTemperature;  // 0xC4(0x4)
	struct UCurveFloat* CoolantRatioToTemperatureRiseCurve;  // 0xC8(0x8)
	float IgnitionDuration;  // 0xD0(0x4)
	char pad_212[4];  // 0xD4(0x4)
	struct UAkAudioEvent* IgnitionAudioEventStart;  // 0xD8(0x8)
	struct UAkAudioEvent* IgnitionAudioEventStop;  // 0xE0(0x8)
	struct UAkAudioEvent* IgnitionSuccessAudioEvent;  // 0xE8(0x8)
	float StallingDuration;  // 0xF0(0x4)
	float StallingRecoveryChance;  // 0xF4(0x4)
	struct UAkAudioEvent* StallingAudioEventStart;  // 0xF8(0x8)
	struct UAkAudioEvent* StallingAudioEventStop;  // 0x100(0x8)
	struct UAkAudioEvent* RemovedAudioEventStart;  // 0x108(0x8)

}; 
// ScriptStruct ConZ.VehicleAttachmentGearboxSetup
// Size: 0x18(Inherited: 0x0) 
struct FVehicleAttachmentGearboxSetup
{
	struct TArray<struct FVehicleGearSetup> Gears;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool IsAutomatic : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float GearChangeDelay;  // 0x14(0x4)

}; 
// ScriptStruct ConZ.VehicleGearSetup
// Size: 0x14(Inherited: 0x0) 
struct FVehicleGearSetup
{
	struct FName Name;  // 0x0(0x8)
	float GearUpRatio;  // 0x8(0x4)
	float GearDownRatio;  // 0xC(0x4)
	float GearRatio;  // 0x10(0x4)

}; 
// ScriptStruct ConZ.DamageAdjacentAttachment
// Size: 0x4(Inherited: 0x0) 
struct FDamageAdjacentAttachment
{
	float DamagePropagationMultiplier;  // 0x0(0x4)

}; 
// Function ConZ.User.GetRecentServers
// Size: 0x10(Inherited: 0x0) 
struct FGetRecentServers
{
	struct TArray<struct FUserServerHistoryItem> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.ConZGameInstance.AddLoadingWidget
// Size: 0x8(Inherited: 0x0) 
struct FAddLoadingWidget
{
	struct ULoadingScreen* Widget;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.VehicleAttachmentMeshSetup
// Size: 0x90(Inherited: 0x0) 
struct FVehicleAttachmentMeshSetup
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ShouldCreate : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ShouldCreateOnServer : 1;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct FSoftObjectPath Mesh;  // 0x8(0x18)
	UAnimInstance* AnimationBlueprintClass;  // 0x20(0x8)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool RefPoseAttach : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct FTransform Offset;  // 0x30(0x30)
	float Mass;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool ShouldWeld : 1;  // 0x64(0x1)
	char pad_101_1 : 7;  // 0x65(0x1)
	bool SimulatePhysics : 1;  // 0x65(0x1)
	char pad_102_1 : 7;  // 0x66(0x1)
	bool EnableGravity : 1;  // 0x66(0x1)
	char pad_103_1 : 7;  // 0x67(0x1)
	bool ApplyImpulseOnDamage : 1;  // 0x67(0x1)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool CastShadow : 1;  // 0x68(0x1)
	char pad_105_1 : 7;  // 0x69(0x1)
	bool Visibility : 1;  // 0x69(0x1)
	char pad_106_1 : 7;  // 0x6A(0x1)
	bool ShouldNotifyRigidBodyCollision : 1;  // 0x6A(0x1)
	char pad_107_1 : 7;  // 0x6B(0x1)
	bool CanEverAffectNavigation : 1;  // 0x6B(0x1)
	char ECollisionEnabled CollisionEnabled;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)
	struct FName CollisionProfileName;  // 0x70(0x8)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool ShouldRegisterHit : 1;  // 0x78(0x1)
	char pad_121[7];  // 0x79(0x7)
	struct UPhysicalMaterial* PhysicalMaterialOverride;  // 0x80(0x8)
	char pad_136[8];  // 0x88(0x8)

}; 
// ScriptStruct ConZ.ClientEffectData
// Size: 0xA4(Inherited: 0x0) 
struct FClientEffectData
{
	char pad_0[164];  // 0x0(0xA4)

}; 
// ScriptStruct ConZ.VehicleBaseTickFunction
// Size: 0x30(Inherited: 0x28) 
struct FVehicleBaseTickFunction : public FTickFunction
{
	char pad_40[8];  // 0x28(0x8)

}; 
// Function ConZ.ConZSquad.CanMemberDemoteRank
// Size: 0x10(Inherited: 0x0) 
struct FCanMemberDemoteRank
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	uint8_t  Rank;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool ReturnValue : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// ScriptStruct ConZ.VehicleCorpseBurningParticles
// Size: 0x70(Inherited: 0x0) 
struct FVehicleCorpseBurningParticles
{
	struct UParticleSystem* Particles;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform ParticlesTransform;  // 0x10(0x30)
	struct FHeatSourceParameters DEPRECATED_HeatSourceParameters;  // 0x40(0x24)
	char pad_100[4];  // 0x64(0x4)
	struct FDbIntegerId DEPRECATED_HeatSourceId;  // 0x68(0x8)

}; 
// ScriptStruct ConZ.VehicleForcePushParams
// Size: 0x38(Inherited: 0x0) 
struct FVehicleForcePushParams
{
	struct FText InteractionName;  // 0x0(0x18)
	float ActionDuration;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool IsRadialImpulse : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FVector Impulse;  // 0x20(0xC)
	struct FVector Location;  // 0x2C(0xC)

}; 
// ScriptStruct ConZ.VehiclePartDescription
// Size: 0xC(Inherited: 0x0) 
struct FVehiclePartDescription
{
	struct FGameplayTag PartType;  // 0x0(0x8)
	float health;  // 0x8(0x4)

}; 
// ScriptStruct ConZ.VehicleAttachmentSpawnData
// Size: 0x8(Inherited: 0x0) 
struct FVehicleAttachmentSpawnData
{
	float VehicleMileageMin;  // 0x0(0x4)
	float SpawningChance;  // 0x4(0x4)

}; 
// Function ConZ.DamageStatics.TestingOnly_DirectDamage
// Size: 0x10(Inherited: 0x0) 
struct FTestingOnly_DirectDamage
{
	struct AActor* Target;  // 0x0(0x8)
	float Damage;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct ConZ.VehicleServiceRequest_InstallAttachment
// Size: 0x1(Inherited: 0x0) 
struct FVehicleServiceRequest_InstallAttachment
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct ConZ.VehicleWeaponAimingStanceData
// Size: 0x78(Inherited: 0x0) 
struct FVehicleWeaponAimingStanceData
{
	struct TArray<struct FVehicleWeaponAimingStanceTransitionMontages> StanceTransitionMontages;  // 0x0(0x10)
	struct TArray<struct FVehicleWeaponAimingStanceTransitionCurves> SupportedAnglesForTransition;  // 0x10(0x10)
	struct FVehicleWeaponAimingFirstPersonData FirstPerson;  // 0x20(0x48)
	struct FVehicleWeaponAimingThirdPersonData ThirdPerson;  // 0x68(0x10)

}; 
// Function ConZ.CustomZoneRegistry.NetMulticast_ReceiveCustomZoneData
// Size: 0x60(Inherited: 0x0) 
struct FNetMulticast_ReceiveCustomZoneData
{
	struct FCustomZoneConfiguration globalConfiguration;  // 0x0(0x40)
	struct TArray<struct FCustomZoneConfiguration> configurations;  // 0x40(0x10)
	struct TArray<struct FCustomZoneRegion> Regions;  // 0x50(0x10)

}; 
// ScriptStruct ConZ.VehicleThirdPersonWeaponTypeData
// Size: 0x38(Inherited: 0x0) 
struct FVehicleThirdPersonWeaponTypeData
{
	uint8_t  WeaponType;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool alwaysIgnorePreMountAimOffsets : 1;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct FBasePoseAimOffsetPair IdlePoseAndAimOffset[2];  // 0x8(0x30)

}; 
// ScriptStruct ConZ.VehicleWeaponAimingFirstPersonData
// Size: 0x48(Inherited: 0x0) 
struct FVehicleWeaponAimingFirstPersonData
{
	struct FFirstPersonViewParameters ViewParameters;  // 0x0(0x28)
	struct FVector LocationOffset;  // 0x28(0xC)
	char pad_52[4];  // 0x34(0x4)
	struct UCurveVector* LocationOffsetByYaw;  // 0x38(0x8)
	struct UCurveVector* LocationOffsetByPitch;  // 0x40(0x8)

}; 
// Function ConZ.HuntingManager.OnAnimalKilled
// Size: 0x8(Inherited: 0x0) 
struct FOnAnimalKilled
{
	struct AAnimal2* Animal;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.VehicleWeaponAimingStanceTransitionMontages
// Size: 0x18(Inherited: 0x0) 
struct FVehicleWeaponAimingStanceTransitionMontages
{
	uint8_t  stance;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FWeaponTypeMontage> WeaponTypeMontages;  // 0x8(0x10)

}; 
// ScriptStruct ConZ.WeaponTypeMontage
// Size: 0x18(Inherited: 0x0) 
struct FWeaponTypeMontage
{
	uint8_t  WeaponType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UAnimMontage* Montage;  // 0x8(0x8)
	struct UCurveFloat* SupportedYawAngles;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.VehicleTireEffectProperties
// Size: 0x14(Inherited: 0x0) 
struct FVehicleTireEffectProperties
{
	struct FVector TireLocalOffset;  // 0x0(0xC)
	char pad_12[8];  // 0xC(0x8)

}; 
// ScriptStruct ConZ.WashItemData
// Size: 0x10(Inherited: 0x0) 
struct FWashItemData
{
	AItem* CleanItem;  // 0x0(0x8)
	int32_t WashItemUsage;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.PrisonerAppearanceComponent.NetMulticast_UpdateRepData
// Size: 0x4(Inherited: 0x0) 
struct FNetMulticast_UpdateRepData
{
	uint32_t RepData;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.VehicleMaterialParameterDescription
// Size: 0x10(Inherited: 0x0) 
struct FVehicleMaterialParameterDescription
{
	struct FName ParameterName;  // 0x0(0x8)
	float MinValue;  // 0x8(0x4)
	float MaxValue;  // 0xC(0x4)

}; 
// ScriptStruct ConZ.VehicleImpactEffects
// Size: 0x38(Inherited: 0x0) 
struct FVehicleImpactEffects
{
	float HitImpulseThreshold;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UParticleSystem* ParticleSystem;  // 0x8(0x8)
	struct FVector ParticlesScale;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)
	struct UAkAudioEvent* AudioEvent;  // 0x20(0x8)
	UMatineeCameraShake* CameraShake;  // 0x28(0x8)
	float CameraShakeScale;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function ConZ.ConZGameMode.GetAchievementsManagerServer
// Size: 0x8(Inherited: 0x0) 
struct FGetAchievementsManagerServer
{
	struct AAchievementsManagerServer* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.VehicleExhaustEffects
// Size: 0x48(Inherited: 0x0) 
struct FVehicleExhaustEffects
{
	struct TArray<struct FVehicleExhaustParticles> Particles;  // 0x0(0x10)
	float ThrottleImpulseMinValue;  // 0x10(0x4)
	float ThrottleImpulseMaxValue;  // 0x14(0x4)
	float ThrottleImpulseSpeedTermMaxValue;  // 0x18(0x4)
	float ThrottleImpulseAttackDuration;  // 0x1C(0x4)
	float ThrottleImpulseSustainDuration;  // 0x20(0x4)
	float ThrottleImpulseReleaseDuration;  // 0x24(0x4)
	float ParticlesDestructionDelay;  // 0x28(0x4)
	char pad_44[28];  // 0x2C(0x1C)

}; 
// ScriptStruct ConZ.VehicleDamagedEffectsParameters
// Size: 0x60(Inherited: 0x0) 
struct FVehicleDamagedEffectsParameters
{
	struct FFloatRange HealthRatioRange;  // 0x0(0x10)
	struct FTransform Transform;  // 0x10(0x30)
	struct UParticleSystem* ParticleSystem;  // 0x40(0x8)
	struct UAkAudioEvent* StartAudioEvent;  // 0x48(0x8)
	struct UAkAudioEvent* StopAudioEvent;  // 0x50(0x8)
	float DeactivationDelay;  // 0x58(0x4)
	char pad_92[4];  // 0x5C(0x4)

}; 
// Function ConZ.SpawnScreen.GetPenaltyCountdownVisibility
// Size: 0x1(Inherited: 0x0) 
struct FGetPenaltyCountdownVisibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// ScriptStruct ConZ.VehicleSpawnerMarker
// Size: 0x40(Inherited: 0x0) 
struct FVehicleSpawnerMarker
{
	struct FTransform Transform;  // 0x0(0x30)
	struct UVehicleGroupSpawningPreset* VehicleGroupSpawningPreset;  // 0x30(0x8)
	char pad_56[8];  // 0x38(0x8)

}; 
// Function ConZ.WeaponBow.Server_SetBowStateData
// Size: 0xC(Inherited: 0x0) 
struct FServer_SetBowStateData
{
	struct FWeaponBowStateDataReplicated State;  // 0x0(0xC)

}; 
// ScriptStruct ConZ.VehicleSpawnPointData
// Size: 0x40(Inherited: 0x0) 
struct FVehicleSpawnPointData
{
	struct FTransform SpawnTransform;  // 0x0(0x30)
	struct TArray<struct UVehiclePreset*> VehicleSpawnPresets;  // 0x30(0x10)

}; 
// ScriptStruct ConZ.Version
// Size: 0x10(Inherited: 0x0) 
struct FVersion
{
	int32_t Major;  // 0x0(0x4)
	int32_t Minor;  // 0x4(0x4)
	int32_t Build;  // 0x8(0x4)
	int32_t Revision;  // 0xC(0x4)

}; 
// Function ConZ.GameEventBase.Multicast_PlayCountdownAnnouncement
// Size: 0x8(Inherited: 0x0) 
struct FMulticast_PlayCountdownAnnouncement
{
	struct UAkAudioEvent* Sound;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.ClassesArray
// Size: 0x20(Inherited: 0x0) 
struct FClassesArray
{
	struct TArray<UObject*> Classes;  // 0x0(0x10)
	struct TArray<UObject*> ProhibitedClasses;  // 0x10(0x10)

}; 
// ScriptStruct ConZ.MessageStruct
// Size: 0x30(Inherited: 0x0) 
struct FMessageStruct
{
	struct FText Text;  // 0x0(0x18)
	float Duration;  // 0x18(0x4)
	struct FLinearColor Color;  // 0x1C(0x10)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct ConZ.WeaponBowArmsShake
// Size: 0x30(Inherited: 0x0) 
struct FWeaponBowArmsShake
{
	struct UAnimSequenceBase* ThirdPerson[3];  // 0x0(0x18)
	struct UAnimSequenceBase* FirstPerson[3];  // 0x18(0x18)

}; 
// ScriptStruct ConZ.WeaponBowStateDataReplicated
// Size: 0xC(Inherited: 0x0) 
struct FWeaponBowStateDataReplicated
{
	uint8_t  BowDrawPercentage;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float HoldTimeInFullDraw;  // 0x4(0x4)
	uint8_t  WeaponBowState;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// ScriptStruct ConZ.WeaponBowDrawData
// Size: 0xC(Inherited: 0x0) 
struct FWeaponBowDrawData
{
	char pad_0[12];  // 0x0(0xC)

}; 
// Function ConZ.ItemActionSequence.GetPlayingAnimations
// Size: 0x20(Inherited: 0x0) 
struct FGetPlayingAnimations
{
	struct FCharacterActionAnimationDescription ReturnValue;  // 0x0(0x20)

}; 
// ScriptStruct ConZ.ClearMalfunctionData
// Size: 0x18(Inherited: 0x0) 
struct FClearMalfunctionData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ShouldClearMalfunction : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FBodyWeaponAnimation Animations;  // 0x8(0x10)

}; 
// ScriptStruct ConZ.WeaponMalfunctionProbabilityCurves
// Size: 0x3B8(Inherited: 0x0) 
struct FWeaponMalfunctionProbabilityCurves
{
	struct FRuntimeFloatCurve ProbabilityCurve[7];  // 0x0(0x3B8)

}; 
// Function ConZ.SpawnScreen.GetWaitTimeInSeconds
// Size: 0x4(Inherited: 0x0) 
struct FGetWaitTimeInSeconds
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ConZ.WeaponCheckAmmoData
// Size: 0x8(Inherited: 0x0) 
struct FWeaponCheckAmmoData
{
	UObject* ActionSequenceClass;  // 0x0(0x8)

}; 
// ScriptStruct ConZ.MultistageRandomRoll
// Size: 0x68(Inherited: 0x0) 
struct FMultistageRandomRoll
{
	struct FFloatInterval _valueRange;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool _shouldWrapValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct TArray<struct FRandomRollStage> _baseValueRollStages;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool _isVarianceEnabled : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	struct FFloatInterval _varianceRollInterval;  // 0x24(0x8)
	struct FFloatInterval _varianceTargetInterval;  // 0x2C(0x8)
	float _varianceTargetInterpSpeed;  // 0x34(0x4)
	char pad_56[44];  // 0x38(0x2C)
	int32_t _baseValueStageToSetWhenForcingBaseValue;  // 0x64(0x4)

}; 
// Function ConZ.Drone.NetMulticast_PlaySoundOnClients
// Size: 0x2(Inherited: 0x0) 
struct FNetMulticast_PlaySoundOnClients
{
	uint8_t  SoundToPlay;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool force : 1;  // 0x1(0x1)

}; 
// Function ConZ.GameEventBase.Multicast_PlayAnnouncementToParticipant
// Size: 0x10(Inherited: 0x0) 
struct FMulticast_PlayAnnouncementToParticipant
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	struct UAkAudioEvent* Sound;  // 0x8(0x8)

}; 
// ScriptStruct ConZ.WeatherReplicatedStateSnapshot
// Size: 0x34(Inherited: 0x0) 
struct FWeatherReplicatedStateSnapshot
{
	char pad_0[52];  // 0x0(0x34)

}; 
// ScriptStruct ConZ.WorldEventDrawData
// Size: 0x50(Inherited: 0x0) 
struct FWorldEventDrawData
{
	char pad_0[80];  // 0x0(0x50)

}; 
// ScriptStruct ConZ.ZombieCombatStanceAnimations
// Size: 0x18(Inherited: 0x0) 
struct FZombieCombatStanceAnimations
{
	struct UAnimSequenceBase* RunStartAnimation;  // 0x0(0x8)
	struct UAnimSequenceBase* RunLoopAnimation;  // 0x8(0x8)
	struct UAnimSequenceBase* RunStopAnimation;  // 0x10(0x8)

}; 
// ScriptStruct ConZ.ZombieRelaxedStanceVariation2
// Size: 0x20(Inherited: 0x0) 
struct FZombieRelaxedStanceVariation2
{
	struct FZombieRelaxedStanceAnimations Animations;  // 0x0(0x8)
	float WalkAcceleration;  // 0x8(0x4)
	float WalkDeceleration;  // 0xC(0x4)
	float WalkSpeed;  // 0x10(0x4)
	float WalkSpeedInAnimation;  // 0x14(0x4)
	float WalkTurnRate;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ConZ.ZombieRagdollAutoRecovery
// Size: 0x8(Inherited: 0x0) 
struct FZombieRagdollAutoRecovery
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Timespan;  // 0x4(0x4)

}; 
// Function ConZ.ActorStatics.GetActorComponentByName
// Size: 0x18(Inherited: 0x0) 
struct FGetActorComponentByName
{
	struct AActor* Actor;  // 0x0(0x8)
	struct FName Name;  // 0x8(0x8)
	struct UActorComponent* ReturnValue;  // 0x10(0x8)

}; 
// Function ConZ.AdminCommand.CanBeExecuted
// Size: 0x20(Inherited: 0x0) 
struct FCanBeExecuted
{
	struct APlayerController* Controller;  // 0x0(0x8)
	struct FString reasonIfNot;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.ChristmasGhost.SpawnGift
// Size: 0x30(Inherited: 0x0) 
struct FSpawnGift
{
	struct FTransform Transform;  // 0x0(0x30)

}; 
// Function ConZ.InteractionComponent.ExecuteInteractionOnServer
// Size: 0xB8(Inherited: 0x0) 
struct FExecuteInteractionOnServer
{
	struct AItem* interactionItem;  // 0x0(0x8)
	uint8_t  Interaction;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FServerCraftableItem CraftableItem;  // 0x10(0xA8)

}; 
// Function ConZ.Objective.CanInterruptDialogue
// Size: 0x1(Inherited: 0x0) 
struct FCanInterruptDialogue
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Objective.Client_BroadcastTrackedItemAmount
// Size: 0x4(Inherited: 0x0) 
struct FClient_BroadcastTrackedItemAmount
{
	int32_t currentAmount;  // 0x0(0x4)

}; 
// Function ConZ.Objective.FailObjective
// Size: 0x1(Inherited: 0x0) 
struct FFailObjective
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool forceFail : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventLoadoutMenuWidget.CreateLoadout
// Size: 0x40(Inherited: 0x0) 
struct FCreateLoadout
{
	AItem* primary;  // 0x0(0x8)
	AItem* secondary;  // 0x8(0x8)
	AItem* tertiary;  // 0x10(0x8)
	struct TArray<AItem*> outfit;  // 0x18(0x10)
	struct TArray<AItem*> support;  // 0x28(0x10)
	struct UPrisonerLoadout* loadout;  // 0x38(0x8)

}; 
// Function ConZ.Objective.SetObjectiveState
// Size: 0x2(Inherited: 0x0) 
struct FSetObjectiveState
{
	uint8_t  Value;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool silent : 1;  // 0x1(0x1)

}; 
// Function ConZ.AdvancedCraftingObjective.OnTabMenuOpenedHandler
// Size: 0x1(Inherited: 0x0) 
struct FOnTabMenuOpenedHandler
{
	uint8_t  tabMode;  // 0x0(0x1)

}; 
// Function ConZ.Airplane.OnPropellerHit
// Size: 0xB0(Inherited: 0x0) 
struct FOnPropellerHit
{
	struct UPrimitiveComponent* HitComponent;  // 0x0(0x8)
	struct AActor* OtherActor;  // 0x8(0x8)
	struct UPrimitiveComponent* OtherComponent;  // 0x10(0x8)
	struct FVector NormalImpulse;  // 0x18(0xC)
	struct FHitResult Hit;  // 0x24(0x88)
	char pad_172[4];  // 0xAC(0x4)

}; 
// Function ConZ.ItemActionSequence.PlayAnimation
// Size: 0x20(Inherited: 0x0) 
struct FPlayAnimation
{
	struct ACharacter* Character;  // 0x0(0x8)
	float PlayRate;  // 0x8(0x4)
	struct FName startSection;  // 0xC(0x8)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool assignCallbacks : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	float ReturnValue;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.WheeledVehicleBase.UpdateHandlingParametersOnClient
// Size: 0x18(Inherited: 0x0) 
struct FUpdateHandlingParametersOnClient
{
	float WheelSteeringLerpSpeedMultiplier;  // 0x0(0x4)
	float engineIgnitionDurationMultiplier;  // 0x4(0x4)
	float engineIgnitionFailureChance;  // 0x8(0x4)
	float gearboxGearChangeDelayMultiplier;  // 0xC(0x4)
	float gearboxGearUpRatioMultiplier;  // 0x10(0x4)
	float gearboxGearDownRatioMultiplier;  // 0x14(0x4)

}; 
// Function ConZ.AmmunitionItem.NetMulticast_SetAmmoCount
// Size: 0x4(Inherited: 0x0) 
struct FNetMulticast_SetAmmoCount
{
	int32_t Count;  // 0x0(0x4)

}; 
// Function ConZ.Animal2.ClosestPrisoner
// Size: 0x8(Inherited: 0x0) 
struct FClosestPrisoner
{
	struct APrisoner* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Animal2.PackBoolsIntoUint8
// Size: 0x18(Inherited: 0x0) 
struct FPackBoolsIntoUint8
{
	struct TArray<bool> B;  // 0x0(0x10)
	char ReturnValue;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.ComplexAnimalAIController.GetMode
// Size: 0x1(Inherited: 0x0) 
struct FGetMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.AnimNotify_ConditionalPlayParticleEffectForItem.ShouldPlayParticleEffectForItem
// Size: 0x10(Inherited: 0x0) 
struct FShouldPlayParticleEffectForItem
{
	struct AItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.AttachableItemComponent.OnBaseElementDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnBaseElementDestroyed
{
	struct FDbIntegerId BaseElementId;  // 0x0(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Cooking_Server_StopCooking
// Size: 0x10(Inherited: 0x0) 
struct FCooking_Server_StopCooking
{
	int32_t SlotId;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct APrisoner* User;  // 0x8(0x8)

}; 
// Function ConZ.AttributeMapInterface.GetIntAttribute
// Size: 0x18(Inherited: 0x0) 
struct FGetIntAttribute
{
	struct FString Name;  // 0x0(0x10)
	int32_t ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.AttributeMapInterface.GetStringAttribute
// Size: 0x20(Inherited: 0x0) 
struct FGetStringAttribute
{
	struct FString Name;  // 0x0(0x10)
	struct FString ReturnValue;  // 0x10(0x10)

}; 
// Function ConZ.AttributeMapInterface.HasAttribute
// Size: 0x18(Inherited: 0x0) 
struct FHasAttribute
{
	struct FString Name;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.ConZBase.GetBaseName
// Size: 0x10(Inherited: 0x0) 
struct FGetBaseName
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.AttributeMapInterface.SetFloatAttribute
// Size: 0x18(Inherited: 0x0) 
struct FSetFloatAttribute
{
	struct FString Name;  // 0x0(0x10)
	float Value;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.AudioStatics.GetAkRTPCValue
// Size: 0x18(Inherited: 0x0) 
struct FGetAkRTPCValue
{
	struct FName RTPC;  // 0x0(0x8)
	float OutValue;  // 0x8(0x4)
	uint8_t  outValueType;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct AActor* Actor;  // 0x10(0x8)

}; 
// Function ConZ.AudioStatics.GetCharacterPainSeveritySwitchName
// Size: 0x8(Inherited: 0x0) 
struct FGetCharacterPainSeveritySwitchName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.AudioStatics.GetCharacterPainSeveritySwitchValue
// Size: 0xC(Inherited: 0x0) 
struct FGetCharacterPainSeveritySwitchValue
{
	uint8_t  Value;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName ReturnValue;  // 0x4(0x8)

}; 
// Function ConZ.Zombie2.CanStartAttack
// Size: 0x1(Inherited: 0x0) 
struct FCanStartAttack
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.IgnitableExplosiveItemComponent.Multicast_OnDetonate
// Size: 0xC(Inherited: 0x0) 
struct FMulticast_OnDetonate
{
	struct FVector zeroBasedLocation;  // 0x0(0xC)

}; 
// Function ConZ.AudioStatics.GetEnvironmentSwitchName
// Size: 0x8(Inherited: 0x0) 
struct FGetEnvironmentSwitchName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.AudioStatics.GetEnvironmentSwitchValue
// Size: 0xC(Inherited: 0x0) 
struct FGetEnvironmentSwitchValue
{
	uint8_t  Value;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName ReturnValue;  // 0x4(0x8)

}; 
// Function ConZ.AudioStatics.GetGenderSwitchName
// Size: 0x8(Inherited: 0x0) 
struct FGetGenderSwitchName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.AudioStatics.GetImpactSeveritySwitchName
// Size: 0x8(Inherited: 0x0) 
struct FGetImpactSeveritySwitchName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.WeaponScopeItemComponent.Server_SetDisplayBrightnessMultiplier
// Size: 0x4(Inherited: 0x0) 
struct FServer_SetDisplayBrightnessMultiplier
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.AudioStatics.GetMaterialSwitchName
// Size: 0x8(Inherited: 0x0) 
struct FGetMaterialSwitchName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.AudioStatics.GetMotionIntensitySwitchValue
// Size: 0xC(Inherited: 0x0) 
struct FGetMotionIntensitySwitchValue
{
	uint8_t  Value;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName ReturnValue;  // 0x4(0x8)

}; 
// Function ConZ.CircularProgressBar.SetPercentage
// Size: 0x4(Inherited: 0x0) 
struct FSetPercentage
{
	float Percentage;  // 0x0(0x4)

}; 
// Function ConZ.AudioStatics.GetMovementPaceSwitchName
// Size: 0x8(Inherited: 0x0) 
struct FGetMovementPaceSwitchName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.AudioStatics.GetMovementPaceSwitchValue
// Size: 0xC(Inherited: 0x0) 
struct FGetMovementPaceSwitchValue
{
	uint8_t  Value;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName ReturnValue;  // 0x4(0x8)

}; 
// Function ConZ.AudioStatics.PostAkAudioEvent
// Size: 0x30(Inherited: 0x0) 
struct FPostAkAudioEvent
{
	struct UAkAudioEvent* akEvent;  // 0x0(0x8)
	struct AActor* Actor;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bStopWhenAttachedToDestroyed : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct FString EventName;  // 0x18(0x10)
	int32_t ReturnValue;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function ConZ.AudioStatics.PostAndWaitForEndOfAkEvent
// Size: 0x58(Inherited: 0x0) 
struct FPostAndWaitForEndOfAkEvent
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
// Function ConZ.AudioStatics.StopAkActor
// Size: 0x8(Inherited: 0x0) 
struct FStopAkActor
{
	struct AActor* Actor;  // 0x0(0x8)

}; 
// Function ConZ.InteractionComponent.CraftItemOnServer
// Size: 0xA8(Inherited: 0x0) 
struct FCraftItemOnServer
{
	struct FServerCraftableItem CraftableItem;  // 0x0(0xA8)

}; 
// Function ConZ.ModularBaseBuildingComponent.GetModularMarkerNameOptions
// Size: 0x10(Inherited: 0x0) 
struct FGetModularMarkerNameOptions
{
	struct TArray<struct FName> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.GameEventBase.GetSpawnRotationForLocation
// Size: 0x18(Inherited: 0x0) 
struct FGetSpawnRotationForLocation
{
	struct FVector Location;  // 0x0(0xC)
	struct FRotator ReturnValue;  // 0xC(0xC)

}; 
// Function ConZ.BaseCraftingRecipe.Finalize
// Size: 0x18(Inherited: 0x0) 
struct FFinalize
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UCraftingResult* Result;  // 0x8(0x8)
	struct UObject* ReturnValue;  // 0x10(0x8)

}; 
// Function ConZ.BasicTextWidget.SetCurrentText
// Size: 0x18(Inherited: 0x0) 
struct FSetCurrentText
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function ConZ.ConZGameMode.GetVehicleSpawningManager2
// Size: 0x8(Inherited: 0x0) 
struct FGetVehicleSpawningManager2
{
	struct AVehicleSpawningManager2* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.BCULockItem.OnResourceObjectDeactivated
// Size: 0x8(Inherited: 0x0) 
struct FOnResourceObjectDeactivated
{
	struct UActorComponent* containerComponent;  // 0x0(0x8)

}; 
// Function ConZ.Bedroll.OnUserLogin
// Size: 0x8(Inherited: 0x0) 
struct FOnUserLogin
{
	struct FDbIntegerId UserId;  // 0x0(0x8)

}; 
// Function ConZ.ComplexAnimal2.StartAction_Multicast
// Size: 0x3(Inherited: 0x0) 
struct FStartAction_Multicast
{
	struct FRepActionData newAction;  // 0x0(0x3)

}; 
// Function ConZ.Bedroll.OnUserLogout
// Size: 0x8(Inherited: 0x0) 
struct FOnUserLogout
{
	struct FDbIntegerId UserId;  // 0x0(0x8)

}; 
// Function ConZ.Bird2.CapsuleComponent_OnComponentHit
// Size: 0xB0(Inherited: 0x0) 
struct FCapsuleComponent_OnComponentHit
{
	struct UPrimitiveComponent* HitComponent;  // 0x0(0x8)
	struct AActor* OtherActor;  // 0x8(0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10(0x8)
	struct FVector NormalImpulse;  // 0x18(0xC)
	struct FHitResult Hit;  // 0x24(0x88)
	char pad_172[4];  // 0xAC(0x4)

}; 
// Function ConZ.Bird2.GetIsFlying
// Size: 0x1(Inherited: 0x0) 
struct FGetIsFlying
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.InventorySlotUserWidget.OnDraggedItemPostRotated
// Size: 0x8(Inherited: 0x0) 
struct FOnDraggedItemPostRotated
{
	struct UItemWidget2* Widget;  // 0x0(0x8)

}; 
// Function ConZ.Bird2.GetIsPerched
// Size: 0x1(Inherited: 0x0) 
struct FGetIsPerched
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Bird2.GetIsTakingOff
// Size: 0x1(Inherited: 0x0) 
struct FGetIsTakingOff
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.BombDefusalWidget.ShouldShowChangeDurationInfo
// Size: 0x1(Inherited: 0x0) 
struct FShouldShowChangeDurationInfo
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PlayerRpcChannel.Chat_Client_UpdateSquadArgumentCompletionCache
// Size: 0x10(Inherited: 0x0) 
struct FChat_Client_UpdateSquadArgumentCompletionCache
{
	struct TArray<struct FString> completions;  // 0x0(0x10)

}; 
// Function ConZ.WeaponAttachment.CanBeRemovedIfAttachedToWeapon
// Size: 0x1(Inherited: 0x0) 
struct FCanBeRemovedIfAttachedToWeapon
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.GrenadeItem.Multicast_PlayEffects
// Size: 0x18(Inherited: 0x0) 
struct FMulticast_PlayEffects
{
	struct FVector zeroBasedLocation;  // 0x0(0xC)
	struct FRotator Rotation;  // 0xC(0xC)

}; 
// Function ConZ.ComplexAnimal2.GetSpeed
// Size: 0xC(Inherited: 0x0) 
struct FGetSpeed
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.FishingAttachment.GetSkeletalMeshWhenAttached
// Size: 0x8(Inherited: 0x0) 
struct FGetSkeletalMeshWhenAttached
{
	struct USkeletalMesh* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.FishingAttachment.GetStaticMeshWhenAttached
// Size: 0x8(Inherited: 0x0) 
struct FGetStaticMeshWhenAttached
{
	struct UStaticMesh* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.MissionManager.SwitchActiveMission
// Size: 0x8(Inherited: 0x0) 
struct FSwitchActiveMission
{
	AMission* missionClass;  // 0x0(0x8)

}; 
// Function ConZ.WeaponAttachment.GetWeaponMalfunctionProbabilityForMalfunctionEvent
// Size: 0x18(Inherited: 0x0) 
struct FGetWeaponMalfunctionProbabilityForMalfunctionEvent
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	uint8_t  malfunctionEvent;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	struct FWeaponMalfunctionProbability ReturnValue;  // 0xC(0x8)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.MeleeSkill.GetAimOffsetBlendSpaceTP
// Size: 0x8(Inherited: 0x0) 
struct FGetAimOffsetBlendSpaceTP
{
	struct UBlendSpace* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.MeleeSkill.GetBlockIdleAnimationFP
// Size: 0x8(Inherited: 0x0) 
struct FGetBlockIdleAnimationFP
{
	struct UAnimSequenceBase* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameInstance.GetDatabaseConnection
// Size: 0x8(Inherited: 0x0) 
struct FGetDatabaseConnection
{
	struct UDbConnection* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.MeleeSkill.GetBlockIdleAnimationTP
// Size: 0x8(Inherited: 0x0) 
struct FGetBlockIdleAnimationTP
{
	struct UAnimSequenceBase* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.MeleeSkill.GetEnterCombatModeMontage
// Size: 0x8(Inherited: 0x0) 
struct FGetEnterCombatModeMontage
{
	struct UAnimMontage* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.MeleeSkill.GetIdleToBlockBlendDuration
// Size: 0x4(Inherited: 0x0) 
struct FGetIdleToBlockBlendDuration
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.MeleeSkill.GetLeaveCombatModeMontage
// Size: 0x8(Inherited: 0x0) 
struct FGetLeaveCombatModeMontage
{
	struct UAnimMontage* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.WorldStatics.FindTeleportSpotInArea
// Size: 0x38(Inherited: 0x0) 
struct FFindTeleportSpotInArea
{
	struct AActor* Actor;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	struct FRotator Rotation;  // 0x14(0xC)
	float MinRadius;  // 0x20(0x4)
	float MaxRadius;  // 0x24(0x4)
	int32_t numIterationsPerRadius;  // 0x28(0x4)
	int32_t numIterationsPerSlice;  // 0x2C(0x4)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ReturnValue : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function ConZ.MeleeSkill.GetPrimaryIdleAnimationFP
// Size: 0x8(Inherited: 0x0) 
struct FGetPrimaryIdleAnimationFP
{
	struct UAnimSequenceBase* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.MeleeSkill.GetStaminaMultiplier
// Size: 0x8(Inherited: 0x0) 
struct FGetStaminaMultiplier
{
	float excessGearWeight;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.WeaponActionSequence.OnMontageEnded
// Size: 0x10(Inherited: 0x0) 
struct FOnMontageEnded
{
	struct UAnimMontage* Montage;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool interrupted : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.MeleeSkill.GetTiredIdleAnimationTP
// Size: 0x8(Inherited: 0x0) 
struct FGetTiredIdleAnimationTP
{
	struct UAnimSequenceBase* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.LaserTriggerComponent.BoxComponent_OnComponentEndOverlap
// Size: 0x20(Inherited: 0x0) 
struct FBoxComponent_OnComponentEndOverlap
{
	struct UPrimitiveComponent* activatedComp;  // 0x0(0x8)
	struct AActor* OtherActor;  // 0x8(0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10(0x8)
	int32_t OtherBodyIndex;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.BruisingComponent.AddBruise
// Size: 0x1(Inherited: 0x0) 
struct FAddBruise
{
	uint8_t  zone;  // 0x0(0x1)

}; 
// Function ConZ.BuildingManager.NetMulticast_UpdateBuildingData
// Size: 0x40(Inherited: 0x0) 
struct FNetMulticast_UpdateBuildingData
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString runtimeId;  // 0x8(0x10)
	struct FBuildingData BuildingData;  // 0x18(0x28)

}; 
// Function ConZ.CamouflageSkill.GetHidePenaltyForCharacter
// Size: 0x10(Inherited: 0x0) 
struct FGetHidePenaltyForCharacter
{
	struct AConZCharacter* Character;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.CargoDropContainer.DropToLocation
// Size: 0x10(Inherited: 0x0) 
struct FDropToLocation
{
	struct FVector EndLocation;  // 0x0(0xC)
	float fallingTime;  // 0xC(0x4)

}; 
// Function ConZ.SpawnMenuWidget.Prisoner_Die
// Size: 0x8(Inherited: 0x0) 
struct FPrisoner_Die
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.CargoDropContainer.SetTimerWidget
// Size: 0x8(Inherited: 0x0) 
struct FSetTimerWidget
{
	struct UKillBoxTimerWidget* timerWidget;  // 0x0(0x8)

}; 
// Function ConZ.Chainsaw.OnRep_TurnedOn
// Size: 0x1(Inherited: 0x0) 
struct FOnRep_TurnedOn
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool oldValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.WeaponAttachmentFlashlight.Server_SetTurnedOn
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetTurnedOn
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.Chainsaw.SetUseFuelUsagePerHourMultiplierWhenActive
// Size: 0x1(Inherited: 0x0) 
struct FSetUseFuelUsagePerHourMultiplierWhenActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.WeaponAction.InsertCartridgeIntoWeapon
// Size: 0x10(Inherited: 0x0) 
struct FInsertCartridgeIntoWeapon
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	struct AAmmunitionItem* ammo;  // 0x8(0x8)

}; 
// Function ConZ.WeaponAction.IsCharacterOwnerMountedAsDriver
// Size: 0x1(Inherited: 0x0) 
struct FIsCharacterOwnerMountedAsDriver
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.WeaponAction.OnActionAnimNotify
// Size: 0x1(Inherited: 0x0) 
struct FOnActionAnimNotify
{
	uint8_t  notifyType;  // 0x0(0x1)

}; 
// Function ConZ.WeaponAction.RemoveAttachmentFromWeapon
// Size: 0x10(Inherited: 0x0) 
struct FRemoveAttachmentFromWeapon
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	struct AWeaponAttachment* Attachment;  // 0x8(0x8)

}; 
// Function ConZ.WeaponHolsterItem.HolsterWeapon
// Size: 0x10(Inherited: 0x0) 
struct FHolsterWeapon
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.PlayerRpcChannel.Vehicle_Server_ProvidePrisonerWithDamage
// Size: 0x178(Inherited: 0x0) 
struct FVehicle_Server_ProvidePrisonerWithDamage
{
	struct AActor* Object;  // 0x0(0x8)
	struct AActor* Target;  // 0x8(0x8)
	struct FCollisionPointDamageEvent DamageEvent;  // 0x10(0x160)
	struct AController* Instigator;  // 0x170(0x8)

}; 
// Function ConZ.WeaponActionReloadSequence.CanExecuteUsingData
// Size: 0x38(Inherited: 0x0) 
struct FCanExecuteUsingData
{
	struct FWeaponReloadData Data;  // 0x0(0x30)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ReturnValue : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function ConZ.WeaponActionSequence.End
// Size: 0x1(Inherited: 0x0) 
struct FEnd
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Regular : 1;  // 0x0(0x1)

}; 
// Function ConZ.WeaponActionReloadSequence.ExecuteUsingData
// Size: 0x38(Inherited: 0x0) 
struct FExecuteUsingData
{
	struct FWeaponReloadData Data;  // 0x0(0x30)
	float ReturnValue;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function ConZ.WeaponActionSequence.GetActiveAnimationBody
// Size: 0x8(Inherited: 0x0) 
struct FGetActiveAnimationBody
{
	struct UAnimMontage* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Vehicle.ShouldShowAviationHud
// Size: 0x1(Inherited: 0x0) 
struct FShouldShowAviationHud
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.ItemSplitWidget.OnSliderValueUpdated
// Size: 0x4(Inherited: 0x0) 
struct FOnSliderValueUpdated
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.WeaponActionSequence.GetActiveAnimationWeapon
// Size: 0x8(Inherited: 0x0) 
struct FGetActiveAnimationWeapon
{
	struct UAnimMontage* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.DebugRpcChannel.Server_Farming_KillPlant
// Size: 0x10(Inherited: 0x0) 
struct FServer_Farming_KillPlant
{
	struct AGarden* Garden;  // 0x0(0x8)
	int32_t SlotId;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.WeaponActionReloadSequence.IgnoreChamberBulletOnEnd
// Size: 0x1(Inherited: 0x0) 
struct FIgnoreChamberBulletOnEnd
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.CCNonSelectableTextWidget.HighlightPartially
// Size: 0x4(Inherited: 0x0) 
struct FHighlightPartially
{
	float percent;  // 0x0(0x4)

}; 
// Function ConZ.InteractionComponent.CheckExistenceOnServer
// Size: 0x10(Inherited: 0x0) 
struct FCheckExistenceOnServer
{
	struct UMeshComponent* MeshComponent;  // 0x0(0x8)
	struct FMeshInstanceId InstanceId;  // 0x8(0x8)

}; 
// Function ConZ.CCNonSelectableTextWidget.SetTextColor
// Size: 0x10(Inherited: 0x0) 
struct FSetTextColor
{
	struct FLinearColor Color;  // 0x0(0x10)

}; 
// Function ConZ.CCSkillSliderWidget.HandleValueChanged
// Size: 0x4(Inherited: 0x0) 
struct FHandleValueChanged
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.MetalDetector.OnResourceComponentActivated
// Size: 0x10(Inherited: 0x0) 
struct FOnResourceComponentActivated
{
	struct UActorComponent* Component;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool wasReset : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.CharacterCreationMenu.HandleSkillSliderValueChanged
// Size: 0x10(Inherited: 0x0) 
struct FHandleSkillSliderValueChanged
{
	struct UCCSkillSliderWidget* Slider;  // 0x0(0x8)
	uint8_t  Attribute;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ComplexAnimal2.TurnTowardLocation
// Size: 0x10(Inherited: 0x0) 
struct FTurnTowardLocation
{
	struct FVector Location;  // 0x0(0xC)
	float ReturnValue;  // 0xC(0x4)

}; 
// Function ConZ.CharacterCreationMenu.OnTextNameChanged
// Size: 0x18(Inherited: 0x0) 
struct FOnTextNameChanged
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function ConZ.CharacterCreationMenu.OnTextNameCommittedInFacePanel
// Size: 0x20(Inherited: 0x0) 
struct FOnTextNameCommittedInFacePanel
{
	struct FText NewValue;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.Vehicle.GetCurrentVehicleGear
// Size: 0x4(Inherited: 0x0) 
struct FGetCurrentVehicleGear
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.CharacterCreationMenu.OnTextNameCommittedInSkillsPanel
// Size: 0x20(Inherited: 0x0) 
struct FOnTextNameCommittedInSkillsPanel
{
	struct FText NewValue;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.CharacterSelectionWidget.DeleteCharacter
// Size: 0x8(Inherited: 0x0) 
struct FDeleteCharacter
{
	struct UUserProfile* UserProfile;  // 0x0(0x8)

}; 
// Function ConZ.CharacterSelectionWidget.UpdatePreviewPrisonersInternal
// Size: 0x8(Inherited: 0x0) 
struct FUpdatePreviewPrisonersInternal
{
	struct UUserProfile* profile;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameMode.GetMissionScheduler
// Size: 0x8(Inherited: 0x0) 
struct FGetMissionScheduler
{
	struct AMissionScheduler* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.CharacterSpawningManager.OnSpawnedPawnDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnSpawnedPawnDestroyed
{
	struct AActor* DestroyedActor;  // 0x0(0x8)

}; 
// Function ConZ.ComplexAnimal2.Intimidate
// Size: 0x10(Inherited: 0x0) 
struct FIntimidate
{
	float Time;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct AActor* foe;  // 0x8(0x8)

}; 
// Function ConZ.CharacterSpawningManager.OnSpawnTriggerDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnSpawnTriggerDestroyed
{
	struct AActor* DestroyedActor;  // 0x0(0x8)

}; 
// Function ConZ.CharacterSpawningManager.SpawnCharacter
// Size: 0x40(Inherited: 0x0) 
struct FSpawnCharacter
{
	struct FTransform SpawnTransform;  // 0x0(0x30)
	APawn* PawnClass;  // 0x30(0x8)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool IgnoreLimit : 1;  // 0x38(0x1)
	char pad_57_1 : 7;  // 0x39(0x1)
	bool ReturnValue : 1;  // 0x39(0x1)
	char pad_58[6];  // 0x3A(0x6)

}; 
// Function ConZ.CharacterSpawningManager.SpawnCharacterGroup
// Size: 0x50(Inherited: 0x0) 
struct FSpawnCharacterGroup
{
	struct FSpawnCharacterGroupInfo Info;  // 0x0(0x50)

}; 
// Function ConZ.ChatSuggestionWidget.SetIsHighlighted
// Size: 0x1(Inherited: 0x0) 
struct FSetIsHighlighted
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.ChestItem.CanChangeName
// Size: 0x10(Inherited: 0x0) 
struct FCanChangeName
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ChestItem.NetMulticast_TriggerLockNeutralizationFailurePenalty
// Size: 0x8(Inherited: 0x0) 
struct FNetMulticast_TriggerLockNeutralizationFailurePenalty
{
	struct AActor* triggeringActor;  // 0x0(0x8)

}; 
// Function ConZ.ChristmasGhost.Client_BeginGiftAssetsLoading
// Size: 0x28(Inherited: 0x0) 
struct FClient_BeginGiftAssetsLoading
{
	struct TSoftClassPtr<UObject> ItemClass;  // 0x0(0x28)

}; 
// Function ConZ.ChristmasGhost.Client_SpawnGiftItemEffects
// Size: 0x40(Inherited: 0x0) 
struct FClient_SpawnGiftItemEffects
{
	struct FTransform Transform;  // 0x0(0x30)
	struct UParticleSystem* ParticleSystem;  // 0x30(0x8)
	struct UAkAudioEvent* AudioEvent;  // 0x38(0x8)

}; 
// Function ConZ.GameEventScoreboardWidget.Create
// Size: 0x28(Inherited: 0x0) 
struct FCreate
{
	struct AGameEventBase* gameEvent;  // 0x0(0x8)
	UGameEventRoundInfoWidget* roundInfoClass;  // 0x8(0x8)
	UGameEventTeamHeaderWidget* teamHeaderClass;  // 0x10(0x8)
	UGameEventParticipantStatsWidget* statClass;  // 0x18(0x8)
	struct UGameEventScoreboardWidget* ReturnValue;  // 0x20(0x8)

}; 
// Function ConZ.User.FindMultiplayerCacheProfile
// Size: 0x20(Inherited: 0x0) 
struct FFindMultiplayerCacheProfile
{
	struct FString ServerIp;  // 0x0(0x10)
	int32_t ServerResponsePort;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct UUserProfile* ReturnValue;  // 0x18(0x8)

}; 
// Function ConZ.VehicleAttachment.OnHit
// Size: 0xB0(Inherited: 0x0) 
struct FOnHit
{
	struct UPrimitiveComponent* HitComponent;  // 0x0(0x8)
	struct AActor* OtherActor;  // 0x8(0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10(0x8)
	struct FVector NormalImpulse;  // 0x18(0xC)
	struct FHitResult Hit;  // 0x24(0x88)
	char pad_172[4];  // 0xAC(0x4)

}; 
// Function ConZ.CircularMenuSegmentWidget.CreateFromInfo
// Size: 0x10(Inherited: 0x0) 
struct FCreateFromInfo
{
	struct UCircularMenuSegmentInfo* Info;  // 0x0(0x8)
	struct UCircularMenuSegmentWidget* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.PrisonerSoundComponent.OnBorderCrossingStateChanged
// Size: 0x10(Inherited: 0x0) 
struct FOnBorderCrossingStateChanged
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	uint8_t  penalty;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.DropZoneGameEvent.GetCrateA
// Size: 0x8(Inherited: 0x0) 
struct FGetCrateA
{
	struct ADropZoneCrate* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.CircularMenuSegmentWidget.GetTooltipText
// Size: 0x18(Inherited: 0x0) 
struct FGetTooltipText
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function ConZ.CircularMenuSegmentWidget.IsTooltipEnabled
// Size: 0x1(Inherited: 0x0) 
struct FIsTooltipEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Vehicle.GetVehicleBrakeAmount
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleBrakeAmount
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.CircularMenuSegmentWidget.UpdateVisualParameters
// Size: 0x14(Inherited: 0x0) 
struct FUpdateVisualParameters
{
	int32_t numberOfSegments;  // 0x0(0x4)
	int32_t Index;  // 0x4(0x4)
	float Offset;  // 0x8(0x4)
	float middleCutoffPercentage;  // 0xC(0x4)
	float Size;  // 0x10(0x4)

}; 
// Function ConZ.CircularMenuWidget.GetSegmentIdForCoordinatesAndLayer
// Size: 0x10(Inherited: 0x0) 
struct FGetSegmentIdForCoordinatesAndLayer
{
	struct FVector2D Coordinates;  // 0x0(0x8)
	int32_t Layer;  // 0x8(0x4)
	int32_t ReturnValue;  // 0xC(0x4)

}; 
// Function ConZ.ConZGameState.RemoveMemberFromAllSquads
// Size: 0x10(Inherited: 0x0) 
struct FRemoveMemberFromAllSquads
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool destroySquadIfEmpty : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.UserProfile.GetName
// Size: 0x10(Inherited: 0x0) 
struct FGetName
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.ItemAction.IsStandAloneOrOwningClient
// Size: 0x1(Inherited: 0x0) 
struct FIsStandAloneOrOwningClient
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.CircularMenuWidget.InitializeLayer
// Size: 0x20(Inherited: 0x0) 
struct FInitializeLayer
{
	int32_t Layer;  // 0x0(0x4)
	float Offset;  // 0x4(0x4)
	struct TArray<struct UCircularMenuSegmentInfo*> SegmentInfo;  // 0x8(0x10)
	int32_t countParameterOverride;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool createAdditionalDummySegments : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// Function ConZ.ItemStatusWidget.SetTitleText
// Size: 0x10(Inherited: 0x0) 
struct FSetTitleText
{
	struct FString Text;  // 0x0(0x10)

}; 
// Function ConZ.CircularMenuWidget.InitializeThrowingLayer
// Size: 0x20(Inherited: 0x0) 
struct FInitializeThrowingLayer
{
	int32_t Layer;  // 0x0(0x4)
	float Offset;  // 0x4(0x4)
	struct TArray<struct UCircularMenuSegmentThrowingInfo*> SegmentInfo;  // 0x8(0x10)
	int32_t countParameterOverride;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.ClockFaceWidget.SetHours
// Size: 0x4(Inherited: 0x0) 
struct FSetHours
{
	int32_t Hours;  // 0x0(0x4)

}; 
// Function ConZ.Mission.Server_NotifyObjectiveDone
// Size: 0x10(Inherited: 0x0) 
struct FServer_NotifyObjectiveDone
{
	struct AObjective* Objective;  // 0x0(0x8)
	uint8_t  ObjectiveState;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ComplexAnimal2.Alert
// Size: 0x4(Inherited: 0x0) 
struct FAlert
{
	float Time;  // 0x0(0x4)

}; 
// Function ConZ.ComplexAnimal2.ChargeAttackFoe
// Size: 0x10(Inherited: 0x0) 
struct FChargeAttackFoe
{
	struct AActor* foe;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.PrisonerMovementComponent.ClimbWindow
// Size: 0xE0(Inherited: 0x0) 
struct FClimbWindow
{
	struct FWindowInfo WindowInfo;  // 0x0(0xD0)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool ReturnValue : 1;  // 0xD0(0x1)
	char pad_209[15];  // 0xD1(0xF)

}; 
// Function ConZ.ComplexAnimal2.ForceRoattionRate
// Size: 0xC(Inherited: 0x0) 
struct FForceRoattionRate
{
	struct FRotator RotationRate;  // 0x0(0xC)

}; 
// Function ConZ.Zombie2.IsAttacking
// Size: 0x1(Inherited: 0x0) 
struct FIsAttacking
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.ComplexAnimal2.NetMulticast_ForceSetAnimalRotation
// Size: 0xC(Inherited: 0x0) 
struct FNetMulticast_ForceSetAnimalRotation
{
	struct FRotator NewRotation;  // 0x0(0xC)

}; 
// Function ConZ.ComplexAnimal2.Sit
// Size: 0x4(Inherited: 0x0) 
struct FSit
{
	float Time;  // 0x0(0x4)

}; 
// Function ConZ.MetalDetector.OnResourceComponentDeactivated
// Size: 0x8(Inherited: 0x0) 
struct FOnResourceComponentDeactivated
{
	struct UActorComponent* Component;  // 0x0(0x8)

}; 
// Function ConZ.ComplexAnimal2.Turn
// Size: 0x8(Inherited: 0x0) 
struct FTurn
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool directionLeft : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.GameEventBase.GetCancelTimeLeft
// Size: 0x4(Inherited: 0x0) 
struct FGetCancelTimeLeft
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ContinuousFuelHeatSource.OnRep_ConsumptionRate
// Size: 0x1(Inherited: 0x0) 
struct FOnRep_ConsumptionRate
{
	char previousConsumptionRate;  // 0x0(0x1)

}; 
// Function ConZ.ConZBase.OnElementInteracted
// Size: 0x80(Inherited: 0x0) 
struct FOnElementInteracted
{
	struct APrisoner* User;  // 0x0(0x8)
	uint8_t  interactionType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FInteractionData InteractionData;  // 0x10(0x68)
	struct FBaseInteractionParams BaseInteractionParams;  // 0x78(0x8)

}; 
// Function ConZ.ConZBaseManager.NetMulticast_ChangeFlagOwner
// Size: 0x18(Inherited: 0x0) 
struct FNetMulticast_ChangeFlagOwner
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FDbIntegerId oldOwnerProfileId;  // 0x8(0x8)
	struct FDbIntegerId newOwnerProfileId;  // 0x10(0x8)

}; 
// Function ConZ.ConZGameMode.GetEffectOverTimeDealer
// Size: 0x8(Inherited: 0x0) 
struct FGetEffectOverTimeDealer
{
	struct AEffectOverTimeDealer* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZBaseManager.NetMulticast_ClearBaseOwnerPlayerId
// Size: 0x20(Inherited: 0x0) 
struct FNetMulticast_ClearBaseOwnerPlayerId
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FConZBaseInteractionData baseData;  // 0x8(0x18)

}; 
// Function ConZ.ConZBaseManager.NetMulticast_DestroyElement
// Size: 0x30(Inherited: 0x0) 
struct FNetMulticast_DestroyElement
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FConZBaseElementIdentifier ElementIdentifier;  // 0x8(0x20)
	uint8_t  reason;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool cascade : 1;  // 0x29(0x1)
	char pad_42[6];  // 0x2A(0x6)

}; 
// Function ConZ.ConZBaseManager.NetMulticast_InteractWithElement
// Size: 0x58(Inherited: 0x0) 
struct FNetMulticast_InteractWithElement
{
	int32_t dataVersion;  // 0x0(0x4)
	uint8_t  interactionType;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	struct FConZBaseInteractionData baseData;  // 0x8(0x18)
	struct FConZBaseElementInteractionData baseElementData;  // 0x20(0x30)
	struct APrisoner* User;  // 0x50(0x8)

}; 
// Function ConZ.PrisonerCorpse.GetFacialHairLength
// Size: 0x4(Inherited: 0x0) 
struct FGetFacialHairLength
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZBaseManager.NetMulticast_SetBaseOwnerPlayerId
// Size: 0x28(Inherited: 0x0) 
struct FNetMulticast_SetBaseOwnerPlayerId
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FConZBaseInteractionData baseData;  // 0x8(0x18)
	int64_t PlayerId;  // 0x20(0x8)

}; 
// Function ConZ.ConZBaseManager.NetMulticast_SetDebugMode
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_SetDebugMode
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	uint8_t  mode;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ConZBaseManager.NetMulticast_SpawnBaseElement
// Size: 0x1F0(Inherited: 0x0) 
struct FNetMulticast_SpawnBaseElement
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FTransform Transform;  // 0x10(0x30)
	struct FConZBaseData baseData;  // 0x40(0x140)
	UObject* ElementClass;  // 0x180(0x8)
	int64_t ElementID;  // 0x188(0x8)
	int64_t OwnerUserProfileId;  // 0x190(0x8)
	int64_t CreatorPrisonerId;  // 0x198(0x8)
	char pad_416_1 : 7;  // 0x1A0(0x1)
	bool IsOwnedByPlayer : 1;  // 0x1A0(0x1)
	char pad_417[7];  // 0x1A1(0x7)
	struct FBaseElementSpawnParams Params;  // 0x1A8(0x48)

}; 
// Function ConZ.ConZBaseManager.NetMulticast_TransferOwnership
// Size: 0x18(Inherited: 0x0) 
struct FNetMulticast_TransferOwnership
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FDbIntegerId oldId;  // 0x8(0x8)
	struct FDbIntegerId newId;  // 0x10(0x8)

}; 
// Function ConZ.ConZEconomyManager.NetMulticast_UpdateTradeableClassMapHelperOverrides
// Size: 0x78(Inherited: 0x0) 
struct FNetMulticast_UpdateTradeableClassMapHelperOverrides
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FTradeableClassDataOverrideReplicationHelper overrideUpdates;  // 0x8(0x70)

}; 
// Function ConZ.ConZEconomyManager.NetMulticast_UpdateTradeablePriceMultiplierFactor
// Size: 0x8(Inherited: 0x0) 
struct FNetMulticast_UpdateTradeablePriceMultiplierFactor
{
	int32_t dataVersion;  // 0x0(0x4)
	int32_t tradeablePriceMultiplierFactor;  // 0x4(0x4)

}; 
// Function ConZ.ConZSquad.GetOnlineMembers
// Size: 0x10(Inherited: 0x0) 
struct FGetOnlineMembers
{
	struct TArray<struct FConZSquadMember> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.ConZGameInstance.GetCurrentUser
// Size: 0x8(Inherited: 0x0) 
struct FGetCurrentUser
{
	struct UUser* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameInstance.HandleNetworkFailure
// Size: 0x28(Inherited: 0x0) 
struct FHandleNetworkFailure
{
	struct UWorld* World;  // 0x0(0x8)
	struct UNetDriver* NetDriver;  // 0x8(0x8)
	char ENetworkFailure FailureType;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct FString errorString;  // 0x18(0x10)

}; 
// Function ConZ.GameEventBase.ForceParticipantStatsRep
// Size: 0x4(Inherited: 0x0) 
struct FForceParticipantStatsRep
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function ConZ.ConZGameInstance.IsTransitioningMap
// Size: 0x1(Inherited: 0x0) 
struct FIsTransitioningMap
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.ConZGameInstance.OnPostLoadMap
// Size: 0x8(Inherited: 0x0) 
struct FOnPostLoadMap
{
	struct UWorld* loadedWorld;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameInstance.StartMultiplayerGame
// Size: 0x28(Inherited: 0x0) 
struct FStartMultiplayerGame
{
	struct FString Ip;  // 0x0(0x10)
	int32_t GameplayPort;  // 0x10(0x4)
	int32_t ResponsePort;  // 0x14(0x4)
	struct FString AuthToken;  // 0x18(0x10)

}; 
// Function ConZ.TrapItem.OnLocalPrisonerSpawned
// Size: 0x8(Inherited: 0x0) 
struct FOnLocalPrisonerSpawned
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerMovementComponent.ClimbOffLadder
// Size: 0x1(Inherited: 0x0) 
struct FClimbOffLadder
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.ConZGameMode.GetAIDetectionTimerHandler
// Size: 0x8(Inherited: 0x0) 
struct FGetAIDetectionTimerHandler
{
	struct AAIDetectionTimerHandler* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameMode.GetBaseManager
// Size: 0x8(Inherited: 0x0) 
struct FGetBaseManager
{
	struct AConZBaseManager* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameMode.GetCharacterSpawningManager
// Size: 0x8(Inherited: 0x0) 
struct FGetCharacterSpawningManager
{
	struct ACharacterSpawningManager* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.KillboxComponent.AddElectricalDoor
// Size: 0x8(Inherited: 0x0) 
struct FAddElectricalDoor
{
	struct ADoor* electricalDoor;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameMode.GetGlobalAquaticLifeManager
// Size: 0x8(Inherited: 0x0) 
struct FGetGlobalAquaticLifeManager
{
	struct AGlobalAquaticLifeManager* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameMode.GetGlobalGuardedZoneManager
// Size: 0x8(Inherited: 0x0) 
struct FGetGlobalGuardedZoneManager
{
	struct AGlobalGuardedZoneManager* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameMode.GetHeatSourceManager
// Size: 0x8(Inherited: 0x0) 
struct FGetHeatSourceManager
{
	struct AHeatSourceManager* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameMode.GetItemSpawningManager
// Size: 0x8(Inherited: 0x0) 
struct FGetItemSpawningManager
{
	struct AItemSpawningManager* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameMode.GetMissionLevelManager
// Size: 0x8(Inherited: 0x0) 
struct FGetMissionLevelManager
{
	struct AMissionLevelManager* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameMode.GetReportingManager
// Size: 0x8(Inherited: 0x0) 
struct FGetReportingManager
{
	struct AReportingManager* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameMode.GetSurvivalStatsHandler
// Size: 0x8(Inherited: 0x0) 
struct FGetSurvivalStatsHandler
{
	struct ASurvivalStatsHandler* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameMode.KickPlayer
// Size: 0x20(Inherited: 0x0) 
struct FKickPlayer
{
	struct AConZPlayerController* Player;  // 0x0(0x8)
	struct FString KickReason;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.MiscStatics.CopyLocationAndRotationToClipboard
// Size: 0x18(Inherited: 0x0) 
struct FCopyLocationAndRotationToClipboard
{
	struct FVector Location;  // 0x0(0xC)
	struct FRotator Rotation;  // 0xC(0xC)

}; 
// Function ConZ.ConZGameState.AddMemberToSquad
// Size: 0x20(Inherited: 0x0) 
struct FAddMemberToSquad
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	struct FString UserId;  // 0x8(0x10)
	struct AConZSquad* Squad;  // 0x18(0x8)

}; 
// Function ConZ.ConZGameState.CreateSquad
// Size: 0x10(Inherited: 0x0) 
struct FCreateSquad
{
	struct FDbIntegerId squadId;  // 0x0(0x8)
	struct AConZSquad* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.ConZGameState.GetCustomMapBorder
// Size: 0x8(Inherited: 0x0) 
struct FGetCustomMapBorder
{
	struct ACustomMapBorder* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.GameEventParticipantStatsWidget.SetColours
// Size: 0x60(Inherited: 0x0) 
struct FSetColours
{
	struct FGameEventTeamColours colours;  // 0x0(0x60)

}; 
// Function ConZ.PrisonerAnimInstance.AnimNotify_EnableCapsuleCollision
// Size: 0x8(Inherited: 0x0) 
struct FAnimNotify_EnableCapsuleCollision
{
	struct UAnimNotify* Notify;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameState.GetRegisteredPrisoners
// Size: 0x10(Inherited: 0x0) 
struct FGetRegisteredPrisoners
{
	struct TArray<struct APrisoner*> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.ConZGameState.GetSquadForPrisoner
// Size: 0x10(Inherited: 0x0) 
struct FGetSquadForPrisoner
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	struct AConZSquad* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.ConZGameState.GetTournament
// Size: 0x8(Inherited: 0x0) 
struct FGetTournament
{
	struct ATournament* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameState.IsTournamentInProgress
// Size: 0x1(Inherited: 0x0) 
struct FIsTournamentInProgress
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.ConZGameState.Multicast_RemoveFromPrisonerKillRegistry
// Size: 0x8(Inherited: 0x0) 
struct FMulticast_RemoveFromPrisonerKillRegistry
{
	struct FDbIntegerId Target;  // 0x0(0x8)

}; 
// Function ConZ.ConZGameState.RemoveMemberFromSquad
// Size: 0x18(Inherited: 0x0) 
struct FRemoveMemberFromSquad
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	struct AConZSquad* Squad;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool destroySquadIfEmpty : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.ConZSquad.AddMember
// Size: 0x20(Inherited: 0x0) 
struct FAddMember
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	struct FString UserId;  // 0x8(0x10)
	uint8_t  Rank;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.GameEventParticipantStats.GetTeamKills
// Size: 0x4(Inherited: 0x0) 
struct FGetTeamKills
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZSquad.CanMemberEditInformation
// Size: 0x10(Inherited: 0x0) 
struct FCanMemberEditInformation
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ConZSquad.CanMemberEditMessage
// Size: 0x10(Inherited: 0x0) 
struct FCanMemberEditMessage
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ConZSquad.CanMemberPromoteRank
// Size: 0x10(Inherited: 0x0) 
struct FCanMemberPromoteRank
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	uint8_t  Rank;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool ReturnValue : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// Function ConZ.ConZSquad.CanMemberRecruitMembers
// Size: 0x10(Inherited: 0x0) 
struct FCanMemberRecruitMembers
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.DebugRpcChannel.Server_Farming_ApplyPesticide
// Size: 0x10(Inherited: 0x0) 
struct FServer_Farming_ApplyPesticide
{
	struct AGarden* Garden;  // 0x0(0x8)
	int32_t Slot;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.ConZSquad.GetMaxAllowedMemberCount
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxAllowedMemberCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ConZSquad.GetMemberCount
// Size: 0x8(Inherited: 0x0) 
struct FGetMemberCount
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool includePending : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.ConZSquad.GetMemberLockAccessibility
// Size: 0x10(Inherited: 0x0) 
struct FGetMemberLockAccessibility
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	uint8_t  ReturnValue;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.KillboxComponent.SetKillBoxEntrance
// Size: 0x8(Inherited: 0x0) 
struct FSetKillBoxEntrance
{
	struct ADoor* entrance;  // 0x0(0x8)

}; 
// Function ConZ.ConZSquad.GetMembers
// Size: 0x10(Inherited: 0x0) 
struct FGetMembers
{
	struct TArray<struct FConZSquadMember> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.ConZSquad.GetSuccessorForMember
// Size: 0x10(Inherited: 0x0) 
struct FGetSuccessorForMember
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	struct FDbIntegerId ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.ConZSquad.HasMember
// Size: 0x10(Inherited: 0x0) 
struct FHasMember
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool includePending : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool ReturnValue : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// Function ConZ.ConZSquad.InviteMember
// Size: 0x8(Inherited: 0x0) 
struct FInviteMember
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)

}; 
// Function ConZ.ConZSquad.IsAnyMemberInDanger
// Size: 0x1(Inherited: 0x0) 
struct FIsAnyMemberInDanger
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.ConZSquad.IsMemberCountValid
// Size: 0x2(Inherited: 0x0) 
struct FIsMemberCountValid
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool includePending : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// Function ConZ.ConZSquad.PromoteMember
// Size: 0x8(Inherited: 0x0) 
struct FPromoteMember
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)

}; 
// Function ConZ.MiscStatics.Test_ProcessAdminCommand
// Size: 0x18(Inherited: 0x0) 
struct FTest_ProcessAdminCommand
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FString commandText;  // 0x8(0x10)

}; 
// Function ConZ.ConZSquad.RemoveMember
// Size: 0x8(Inherited: 0x0) 
struct FRemoveMember
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)

}; 
// Function ConZ.MeleeCombatComponent.Server_StartMeleeAttack
// Size: 0x20(Inherited: 0x0) 
struct FServer_StartMeleeAttack
{
	struct FMeleeAction Action;  // 0x0(0x20)

}; 
// Function ConZ.ConZSquad.SetMemberRank
// Size: 0x10(Inherited: 0x0) 
struct FSetMemberRank
{
	struct FDbIntegerId UserProfileId;  // 0x0(0x8)
	uint8_t  Rank;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.ConZStandardButton.SetFontSize
// Size: 0x4(Inherited: 0x0) 
struct FSetFontSize
{
	int32_t FontSize;  // 0x0(0x4)

}; 
// Function ConZ.ConZStandardButton.SetTextInternal
// Size: 0x18(Inherited: 0x0) 
struct FSetTextInternal
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function ConZ.ConZWaterSplineRegistry.QueryWaterSplines
// Size: 0x100(Inherited: 0x0) 
struct FQueryWaterSplines
{
	struct FVector Location;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct FWaterQueryResult ReturnValue;  // 0x10(0xF0)

}; 
// Function ConZ.CookingUtilityFilterDropdown.CreateContentWidget
// Size: 0x8(Inherited: 0x0) 
struct FCreateContentWidget
{
	struct UUserWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.TrashSliderWidget.OnValueChanged
// Size: 0x4(Inherited: 0x0) 
struct FOnValueChanged
{
	float NewValue;  // 0x0(0x4)

}; 
// Function ConZ.Corpse.Multicast_ClonePoseLocally
// Size: 0x8(Inherited: 0x0) 
struct FMulticast_ClonePoseLocally
{
	struct AConZCharacter* sourceCharacter;  // 0x0(0x8)

}; 
// Function ConZ.CraftingInfoWidget.SwapIngredient
// Size: 0x8(Inherited: 0x0) 
struct FSwapIngredient
{
	int32_t widgetIndex;  // 0x0(0x4)
	int32_t orderIndex;  // 0x4(0x4)

}; 
// Function ConZ.CraftingRecipeDescriptionPanel.OnAdditionalIngredientSelected
// Size: 0x10(Inherited: 0x0) 
struct FOnAdditionalIngredientSelected
{
	struct UCraftingAvailableItemWidget* Widget;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)

}; 
// Function ConZ.GameEventParticipantStats.GetDeaths
// Size: 0x4(Inherited: 0x0) 
struct FGetDeaths
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.InteractionComponent.ExaminePrisonerOnServer
// Size: 0x8(Inherited: 0x0) 
struct FExaminePrisonerOnServer
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.GameEventParticipantStats.GetEnemyKills
// Size: 0x4(Inherited: 0x0) 
struct FGetEnemyKills
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.GameEventParticipantStats.GetHeadshots
// Size: 0x4(Inherited: 0x0) 
struct FGetHeadshots
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.GameEventParticipantStats.GetScore
// Size: 0x4(Inherited: 0x0) 
struct FGetScore
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Chat_Client_MuteUser
// Size: 0x20(Inherited: 0x0) 
struct FChat_Client_MuteUser
{
	struct FString UserId;  // 0x0(0x10)
	struct FString UserName;  // 0x10(0x10)

}; 
// Function ConZ.GameEventParticipantStats.GetSuicides
// Size: 0x4(Inherited: 0x0) 
struct FGetSuicides
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.GameEventBase.CallInParticipant
// Size: 0x8(Inherited: 0x0) 
struct FCallInParticipant
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.GameEventBase.CancelEvent
// Size: 0x1(Inherited: 0x0) 
struct FCancelEvent
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool force : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventBase.CanJoin
// Size: 0x10(Inherited: 0x0) 
struct FCanJoin
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	int32_t preferredTeam;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function ConZ.InventoryContainerSelection.OnRep_Data
// Size: 0x28(Inherited: 0x0) 
struct FOnRep_Data
{
	struct FInventoryContainerSelectionRepData OldData;  // 0x0(0x28)

}; 
// Function ConZ.GameEventBase.CanSchedule
// Size: 0x1(Inherited: 0x0) 
struct FCanSchedule
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventBase.ConvertScoreToFame
// Size: 0x8(Inherited: 0x0) 
struct FConvertScoreToFame
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.WeaponCrossbow.GetIsCocked
// Size: 0x1(Inherited: 0x0) 
struct FGetIsCocked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventBase.DeclareWinningTeam
// Size: 0x4(Inherited: 0x0) 
struct FDeclareWinningTeam
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.GameEventBase.GetBorder
// Size: 0x8(Inherited: 0x0) 
struct FGetBorder
{
	struct AGameEventBorder* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ItemTooltipPanel.DebugMode
// Size: 0x1(Inherited: 0x0) 
struct FDebugMode
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventBase.GetDatabaseEventId
// Size: 0x8(Inherited: 0x0) 
struct FGetDatabaseEventId
{
	struct FDbIntegerId ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.GameEventBase.GetEventState
// Size: 0x1(Inherited: 0x0) 
struct FGetEventState
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.GameEventBase.GetMiniScoreboardWidget
// Size: 0x8(Inherited: 0x0) 
struct FGetMiniScoreboardWidget
{
	struct UGameEventScoreboardWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.GameEventBase.GetNumberOfTeams
// Size: 0x4(Inherited: 0x0) 
struct FGetNumberOfTeams
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.GameEventBase.GetParameters
// Size: 0x188(Inherited: 0x0) 
struct FGetParameters
{
	struct FGameEventParameters ReturnValue;  // 0x0(0x188)

}; 
// Function ConZ.GameEventBase.GetPossibleLoadout
// Size: 0x68(Inherited: 0x0) 
struct FGetPossibleLoadout
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	struct TArray<struct UItemSelection*> primaryWeapons;  // 0x8(0x10)
	struct TArray<struct UItemSelection*> secondaryWeapons;  // 0x18(0x10)
	struct TArray<struct UItemSelection*> tertiaryWeapons;  // 0x28(0x10)
	struct TArray<struct UItemSelection*> outfits;  // 0x38(0x10)
	struct TArray<struct UItemSelection*> support;  // 0x48(0x10)
	struct TArray<struct UItemSelection*> Gear;  // 0x58(0x10)

}; 
// Function ConZ.Tournament.GetScoreboardWidget
// Size: 0x8(Inherited: 0x0) 
struct FGetScoreboardWidget
{
	struct UTournamentScoreboardWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.GameEventTransport.TravelToDestination
// Size: 0xC(Inherited: 0x0) 
struct FTravelToDestination
{
	struct FVector Destination;  // 0x0(0xC)

}; 
// Function ConZ.GameEventBase.GetStatusTime
// Size: 0x4(Inherited: 0x0) 
struct FGetStatusTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.GameEventBase.GetTeamMemberCount
// Size: 0x8(Inherited: 0x0) 
struct FGetTeamMemberCount
{
	int32_t TeamIndex;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.GameEventBase.Multicast_PlayAnnouncementToTeam
// Size: 0x10(Inherited: 0x0) 
struct FMulticast_PlayAnnouncementToTeam
{
	int32_t TeamIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UAkAudioEvent* Sound;  // 0x8(0x8)

}; 
// Function ConZ.GameEventBase.IsTeamFull
// Size: 0x8(Inherited: 0x0) 
struct FIsTeamFull
{
	int32_t TeamIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.PrisonerAnimInstance.GetWeaponAimOffsetOnGameThread
// Size: 0x10(Inherited: 0x0) 
struct FGetWeaponAimOffsetOnGameThread
{
	uint8_t  prisonerAimOffsetType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UBlendSpace* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.GameEventBase.KickParticipant
// Size: 0x8(Inherited: 0x0) 
struct FKickParticipant
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.SpawnScreen.GetOtherButtonVisibility
// Size: 0x1(Inherited: 0x0) 
struct FGetOtherButtonVisibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerAnimInstance.AnimNotify_DisableCapsuleCollision
// Size: 0x8(Inherited: 0x0) 
struct FAnimNotify_DisableCapsuleCollision
{
	struct UAnimNotify* Notify;  // 0x0(0x8)

}; 
// Function ConZ.GameEventBase.Multicast_PlayAnnouncementToAllParticipants
// Size: 0x8(Inherited: 0x0) 
struct FMulticast_PlayAnnouncementToAllParticipants
{
	struct UAkAudioEvent* Sound;  // 0x0(0x8)

}; 
// Function ConZ.GameEventBase.Multicast_ShowEventNotification
// Size: 0x18(Inherited: 0x0) 
struct FMulticast_ShowEventNotification
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FString auxString;  // 0x8(0x10)

}; 
// Function ConZ.GameEventBase.PresentSpawnScreen
// Size: 0x8(Inherited: 0x0) 
struct FPresentSpawnScreen
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Inventory_Server_AutoAddInventoryElementToContainer
// Size: 0x30(Inherited: 0x0) 
struct FInventory_Server_AutoAddInventoryElementToContainer
{
	struct AConZCharacter* Character;  // 0x0(0x8)
	struct FInv2021_InventoryElementRepHelper Element;  // 0x8(0x20)
	struct UObject* destinationContainer;  // 0x28(0x8)

}; 
// Function ConZ.GameEventBase.SameTeam
// Size: 0x18(Inherited: 0x0) 
struct FSameTeam
{
	struct APrisoner* prisonerA;  // 0x0(0x8)
	struct APrisoner* prisonerB;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.PlayerRpcChannel.Admin_Client_SendRespawnTimes
// Size: 0x8(Inherited: 0x0) 
struct FAdmin_Client_SendRespawnTimes
{
	int32_t RespawnTime;  // 0x0(0x4)
	int32_t respawnTimeReset;  // 0x4(0x4)

}; 
// Function ConZ.GameEventBase.SetNumberOfTeams
// Size: 0x4(Inherited: 0x0) 
struct FSetNumberOfTeams
{
	int32_t Value;  // 0x0(0x4)

}; 
// Function ConZ.GameEventBase.SetTeamScore
// Size: 0x8(Inherited: 0x0) 
struct FSetTeamScore
{
	int32_t TeamIndex;  // 0x0(0x4)
	float Score;  // 0x4(0x4)

}; 
// Function ConZ.PlayerDrone.Server_DropItemAt
// Size: 0x20(Inherited: 0x0) 
struct FServer_DropItemAt
{
	struct AItem* Item;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	struct FRotator Rotation;  // 0x14(0xC)

}; 
// Function ConZ.CTFGameEvent.GetFlagA
// Size: 0x8(Inherited: 0x0) 
struct FGetFlagA
{
	struct ACTFFlag* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.CTFGameEvent.OnParticipantDied
// Size: 0x28(Inherited: 0x0) 
struct FOnParticipantDied
{
	struct APrisoner* victim;  // 0x0(0x8)
	struct FDamageEvent DamageEvent;  // 0x8(0x10)
	struct AController* eventInstigator;  // 0x18(0x8)
	struct AActor* causer;  // 0x20(0x8)

}; 
// Function ConZ.CTFGameEvent.SetCTFParameters
// Size: 0x30(Inherited: 0x0) 
struct FSetCTFParameters
{
	struct FCTFParameters Params;  // 0x0(0x30)

}; 
// Function ConZ.GameEventLocationMarker.CreateBorder
// Size: 0x8(Inherited: 0x0) 
struct FCreateBorder
{
	struct AGameEventBorder* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.DebugRpcChannel.Server_Farming_AddFertilizer
// Size: 0x10(Inherited: 0x0) 
struct FServer_Farming_AddFertilizer
{
	struct AGarden* Garden;  // 0x0(0x8)
	int32_t Slot;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool isIndustrial : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function ConZ.VicinityPanel3.OnVicinityContainerInitialized
// Size: 0x18(Inherited: 0x0) 
struct FOnVicinityContainerInitialized
{
	struct TScriptInterface<IInventoryNode> Item;  // 0x0(0x10)
	struct UItemWidget2* Widget;  // 0x10(0x8)

}; 
// Function ConZ.CursedScrollBar.CallOnSliderMoved
// Size: 0x4(Inherited: 0x0) 
struct FCallOnSliderMoved
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.CursedScrollBar.UpdateFromValueInternal2
// Size: 0xC(Inherited: 0x0) 
struct FUpdateFromValueInternal2
{
	float Value;  // 0x0(0x4)
	float MaxCountOnScreen;  // 0x4(0x4)
	float MaxValue;  // 0x8(0x4)

}; 
// Function ConZ.CustomZoneSettingsConfigurationsList.AddConfiguration
// Size: 0x40(Inherited: 0x0) 
struct FAddConfiguration
{
	struct FCustomZoneConfiguration configuration;  // 0x0(0x40)

}; 
// Function ConZ.UIStatics.ProjectWorldToScreen
// Size: 0x28(Inherited: 0x0) 
struct FProjectWorldToScreen
{
	struct APlayerController* Controller;  // 0x0(0x8)
	struct FVector WorldPosition;  // 0x8(0xC)
	struct FVector2D Size;  // 0x14(0x8)
	struct FVector2D screenPosition;  // 0x1C(0x8)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool ReturnValue : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)

}; 
// Function ConZ.CustomZoneSettingsHandlingMethodSelector.GetHandlingMethodDescription
// Size: 0x20(Inherited: 0x0) 
struct FGetHandlingMethodDescription
{
	uint8_t  Method;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FText ReturnValue;  // 0x8(0x18)

}; 
// Function ConZ.Vehicle.VehicleHasEngine
// Size: 0x1(Inherited: 0x0) 
struct FVehicleHasEngine
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.CustomZoneSettingsRegion.GetDefaultZoneState
// Size: 0x1(Inherited: 0x0) 
struct FGetDefaultZoneState
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.CustomZoneSettingsRegionDetails.HandleLocationChange
// Size: 0x8(Inherited: 0x0) 
struct FHandleLocationChange
{
	float Value;  // 0x0(0x4)
	char ETextCommit CommitMethod;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.WeaponRevolver.NetMulticast_PlayFiringAnimation
// Size: 0x8(Inherited: 0x0) 
struct FNetMulticast_PlayFiringAnimation
{
	int32_t ammoIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool dryFire : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.DamageStatics.CheckWeaponDescReferences
// Size: 0x8(Inherited: 0x0) 
struct FCheckWeaponDescReferences
{
	struct UObject* WorldContext;  // 0x0(0x8)

}; 
// Function ConZ.WeaponRocketLauncher.IsArmed
// Size: 0x1(Inherited: 0x0) 
struct FIsArmed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.TrapItem.OnTriggerEvent
// Size: 0x10(Inherited: 0x0) 
struct FOnTriggerEvent
{
	struct FTriggeredEventData eventData;  // 0x0(0x10)

}; 
// Function ConZ.DcxWheeledVehicleDriveComponent4W.DeflateWheelTire
// Size: 0x4(Inherited: 0x0) 
struct FDeflateWheelTire
{
	int32_t WheelIndex;  // 0x0(0x4)

}; 
// Function ConZ.DcxWheeledVehicleDriveComponent4W.GetEngineLoad
// Size: 0x4(Inherited: 0x0) 
struct FGetEngineLoad
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.DeathmatchGameEvent.GetDeathmatchParameters
// Size: 0x14(Inherited: 0x0) 
struct FGetDeathmatchParameters
{
	struct FDeathmatchParameters ReturnValue;  // 0x0(0x14)

}; 
// Function ConZ.PlayerRpcChannel.Server_ReportUnachievedAchievements
// Size: 0x18(Inherited: 0x0) 
struct FServer_ReportUnachievedAchievements
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct TArray<struct FString> achievementsIds;  // 0x8(0x10)

}; 
// Function ConZ.DebugRpcChannel.Server_Farming_CreateGarden
// Size: 0x28(Inherited: 0x0) 
struct FServer_Farming_CreateGarden
{
	struct APrisoner* Owner;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	struct FRotator Rotation;  // 0x14(0xC)
	struct FIntPoint Size;  // 0x20(0x8)

}; 
// Function ConZ.DebugRpcChannel.Server_Farming_SetGrowthState
// Size: 0x10(Inherited: 0x0) 
struct FServer_Farming_SetGrowthState
{
	struct AGarden* Garden;  // 0x0(0x8)
	int32_t SlotId;  // 0x8(0x4)
	uint8_t  stage;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function ConZ.DialogueContainerWidget.GetShowAvatarAnimation
// Size: 0x8(Inherited: 0x0) 
struct FGetShowAvatarAnimation
{
	struct UWidgetAnimation* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.DialogueContainerWidget.StartAvatarAnimation
// Size: 0x1(Inherited: 0x0) 
struct FStartAvatarAnimation
{
	uint8_t  AnimationState;  // 0x0(0x1)

}; 
// Function ConZ.DoubleSlidingDoorStatic.AddDoorPartInfo
// Size: 0x20(Inherited: 0x0) 
struct FAddDoorPartInfo
{
	struct FVector cloasedPosition;  // 0x0(0xC)
	struct FVector OpenedPosition;  // 0xC(0xC)
	struct USceneComponent* moveableComponent;  // 0x18(0x8)

}; 
// Function ConZ.Drone.NetMulticast_ToggleSmokeParticles
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_ToggleSmokeParticles
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool shouldPlay : 1;  // 0x0(0x1)

}; 
// Function ConZ.Drone.SelfDestruct
// Size: 0x1(Inherited: 0x0) 
struct FSelfDestruct
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool shouldSpawnItem : 1;  // 0x0(0x1)

}; 
// Function ConZ.LevelUpNotificationWidget.GetLevelUpAnimation
// Size: 0x8(Inherited: 0x0) 
struct FGetLevelUpAnimation
{
	struct UWidgetAnimation* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.DropZoneGameEvent.GetCaptureProgress
// Size: 0x4(Inherited: 0x0) 
struct FGetCaptureProgress
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.DropZoneGameEvent.GetCargo
// Size: 0x8(Inherited: 0x0) 
struct FGetCargo
{
	struct ADropZoneCargo* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ItemContainerManager.NetMulticast_UpdateItemContainerData
// Size: 0x38(Inherited: 0x0) 
struct FNetMulticast_UpdateItemContainerData
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString runtimeId;  // 0x8(0x10)
	struct FItemContainerRepData ItemContainerData;  // 0x18(0x20)

}; 
// Function ConZ.DropZoneGameEvent.GetCrateB
// Size: 0x8(Inherited: 0x0) 
struct FGetCrateB
{
	struct ADropZoneCrate* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.DropZoneGameEvent.GetDropZoneParameters
// Size: 0x2C(Inherited: 0x0) 
struct FGetDropZoneParameters
{
	struct FDropZoneParameters ReturnValue;  // 0x0(0x2C)

}; 
// Function ConZ.DropZoneGameEvent.GetSlot
// Size: 0x8(Inherited: 0x0) 
struct FGetSlot
{
	struct ADropZoneSlot* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.ElectricityGeneratorItem.RangedResourceProvider_AvailableResourceAmountChanged
// Size: 0x10(Inherited: 0x0) 
struct FRangedResourceProvider_AvailableResourceAmountChanged
{
	struct URangedResourceProviderComponent* Component;  // 0x0(0x8)
	float Value;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.ExpandableContainer.InvokeExpansionChanged
// Size: 0x1(Inherited: 0x0) 
struct FInvokeExpansionChanged
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool maximized : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventScoreboardWidget.SetSelectedIndex
// Size: 0x4(Inherited: 0x0) 
struct FSetSelectedIndex
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function ConZ.FireworksItem.CanStartFiring
// Size: 0x10(Inherited: 0x0) 
struct FCanStartFiring
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.FireworksItem.GetTotalShells
// Size: 0x4(Inherited: 0x0) 
struct FGetTotalShells
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.FishingBarWidget.SetSegmentBarNum
// Size: 0x4(Inherited: 0x0) 
struct FSetSegmentBarNum
{
	int32_t numOfSegments;  // 0x0(0x4)

}; 
// Function ConZ.FishingReelAnimInstance.GetReelingAnimSequence
// Size: 0x8(Inherited: 0x0) 
struct FGetReelingAnimSequence
{
	struct UAnimSequenceBase* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.FogSphere.SetFogDensity
// Size: 0x4(Inherited: 0x0) 
struct FSetFogDensity
{
	float Density;  // 0x0(0x4)

}; 
// Function ConZ.GameEventBorder.ChangeArea
// Size: 0x14(Inherited: 0x0) 
struct FChangeArea
{
	float Radius;  // 0x0(0x4)
	struct FVector focus;  // 0x4(0xC)
	float Duration;  // 0x10(0x4)

}; 
// Function ConZ.GameEventBorder.GetOffset
// Size: 0xC(Inherited: 0x0) 
struct FGetOffset
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.GameEventBorder.IsActive
// Size: 0x1(Inherited: 0x0) 
struct FIsActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.GameEventBorder.Multicast_SetOffset
// Size: 0xC(Inherited: 0x0) 
struct FMulticast_SetOffset
{
	struct FVector Offset;  // 0x0(0xC)

}; 
// Function ConZ.GameEventParticipantInfoCardWidget.UpdateStats
// Size: 0x8(Inherited: 0x0) 
struct FUpdateStats
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.GameEventLeaderboardWidget.RequestPlayerRanking
// Size: 0x8(Inherited: 0x0) 
struct FRequestPlayerRanking
{
	int32_t Pad;  // 0x0(0x4)
	uint8_t  orderByField;  // 0x4(0x1)
	uint8_t  sortOrder;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)

}; 
// Function ConZ.GameEventLeaderboardWidget.RequestTopPlayers
// Size: 0x8(Inherited: 0x0) 
struct FRequestTopPlayers
{
	int32_t Count;  // 0x0(0x4)
	uint8_t  orderByField;  // 0x4(0x1)
	uint8_t  sortOrder;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)

}; 
// Function ConZ.MissionManager.Client_UpdateMissionsData
// Size: 0xC0(Inherited: 0x0) 
struct FClient_UpdateMissionsData
{
	AMission* missionClass;  // 0x0(0x8)
	struct FMissionData MissionData;  // 0x8(0xB8)

}; 
// Function ConZ.GameEventLeftPanel.OnEventComboBoxSelectionChanged
// Size: 0x18(Inherited: 0x0) 
struct FOnEventComboBoxSelectionChanged
{
	struct FString SelectedItem;  // 0x0(0x10)
	char ESelectInfo SelectionType;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.GameEventParticipantStatsWidget.GetIndex
// Size: 0x4(Inherited: 0x0) 
struct FGetIndex
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.GameEventParticipantStatsWidget.GetScoreboard
// Size: 0x8(Inherited: 0x0) 
struct FGetScoreboard
{
	struct UGameEventScoreboardWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.GameEventParticipantStatsWidget.SetTeamIndex
// Size: 0x4(Inherited: 0x0) 
struct FSetTeamIndex
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function ConZ.GameEventTransport.GetReservedParticipant
// Size: 0x8(Inherited: 0x0) 
struct FGetReservedParticipant
{
	struct APrisoner* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.GameEventTransport.LandAtLocation
// Size: 0xC(Inherited: 0x0) 
struct FLandAtLocation
{
	struct FVector Destination;  // 0x0(0xC)

}; 
// Function ConZ.GameEventTransport.ReserveForPrisoner
// Size: 0x8(Inherited: 0x0) 
struct FReserveForPrisoner
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.GardenManager.DebugGenerateGardensInRadius
// Size: 0x24(Inherited: 0x0) 
struct FDebugGenerateGardensInRadius
{
	int32_t Count;  // 0x0(0x4)
	struct FVector Location;  // 0x4(0xC)
	float Spread;  // 0x10(0x4)
	struct FIntPoint MinSize;  // 0x14(0x8)
	struct FIntPoint MaxSize;  // 0x1C(0x8)

}; 
// Function ConZ.ResourceLockingManager.NetMulticast_UnlockResource
// Size: 0xC(Inherited: 0x0) 
struct FNetMulticast_UnlockResource
{
	int32_t dataVersion;  // 0x0(0x4)
	struct FResourceNetworkGUID ResourceGUID;  // 0x4(0x4)
	int32_t ResourceId;  // 0x8(0x4)

}; 
// Function ConZ.GardenManager.DebugGenerateGardensInSquare
// Size: 0x2C(Inherited: 0x0) 
struct FDebugGenerateGardensInSquare
{
	struct FVector Location;  // 0x0(0xC)
	struct FIntPoint countXY;  // 0xC(0x8)
	struct FVector2D distanceXY;  // 0x14(0x8)
	struct FIntPoint MinSize;  // 0x1C(0x8)
	struct FIntPoint MaxSize;  // 0x24(0x8)

}; 
// Function ConZ.GhostTrailComponent.SetTrailActive
// Size: 0x1(Inherited: 0x0) 
struct FSetTrailActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Active : 1;  // 0x0(0x1)

}; 
// Function ConZ.HalloweenSacrificePit.NetMulticast_SpawnGiftSpawningFinishedEffects
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_SpawnGiftSpawningFinishedEffects
{
	struct UAkAudioEvent* AudioEvent;  // 0x0(0x8)
	struct UParticleSystem* Particles;  // 0x8(0x8)

}; 
// Function ConZ.Vehicle.GetMaxVehicleBatteryAmount
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxVehicleBatteryAmount
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.HalloweenSacrificePit.NetMulticast_StartLoadingAssets
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_StartLoadingAssets
{
	struct TArray<struct FSoftObjectPath> AssetPaths;  // 0x0(0x10)

}; 
// Function ConZ.HandheldLightItem.BP_OnCurrentLightAngleChanged
// Size: 0x4(Inherited: 0x0) 
struct FBP_OnCurrentLightAngleChanged
{
	float NewValue;  // 0x0(0x4)

}; 
// Function ConZ.HandheldLightItem.BP_OnCurrentLightIntensityChanged
// Size: 0x4(Inherited: 0x0) 
struct FBP_OnCurrentLightIntensityChanged
{
	float NewValue;  // 0x0(0x4)

}; 
// Function ConZ.HandsHolstersWidget2.OnAttachmentDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnAttachmentDestroyed
{
	struct AActor* Attachment;  // 0x0(0x8)

}; 
// Function ConZ.HandsHolstersWidget2.OnFishingAttachmentRemoved
// Size: 0x10(Inherited: 0x0) 
struct FOnFishingAttachmentRemoved
{
	struct AFishingRod* FishingRod;  // 0x0(0x8)
	struct AFishingAttachment* Attachment;  // 0x8(0x8)

}; 
// Function ConZ.ScreenSpaceHealthWidget.SetHealthPercentage
// Size: 0x4(Inherited: 0x0) 
struct FSetHealthPercentage
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.ScreenSpaceHealthWidget.SetMaxHealthPercentage
// Size: 0x4(Inherited: 0x0) 
struct FSetMaxHealthPercentage
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.HitReactComponent.ApplyPhysicalAnimationData
// Size: 0x34(Inherited: 0x0) 
struct FApplyPhysicalAnimationData
{
	struct FPhysicalAnimationDesc desc;  // 0x0(0x34)

}; 
// Function ConZ.HitReactComponent.IsBlendingRagdoll
// Size: 0x1(Inherited: 0x0) 
struct FIsBlendingRagdoll
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.HitReactComponent.IsCapsuleOverlapped
// Size: 0x1(Inherited: 0x0) 
struct FIsCapsuleOverlapped
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Zombie2.IsInRagdoll
// Size: 0x1(Inherited: 0x0) 
struct FIsInRagdoll
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.HitReactComponent.MoveRagdollMesh
// Size: 0x20(Inherited: 0x0) 
struct FMoveRagdollMesh
{
	struct UPrimitiveComponent* MeshComponent;  // 0x0(0x8)
	struct FVector currentLocation;  // 0x8(0xC)
	struct FVector TargetLocation;  // 0x14(0xC)

}; 
// Function ConZ.HitReactComponent.OnMontageBlendingOut
// Size: 0x10(Inherited: 0x0) 
struct FOnMontageBlendingOut
{
	struct UAnimMontage* Montage;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool interrupted : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.HoverPanelWidget.SetWorldPosition
// Size: 0xC(Inherited: 0x0) 
struct FSetWorldPosition
{
	struct FVector position;  // 0x0(0xC)

}; 
// Function ConZ.Zombie2.GetZombieSoundComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetZombieSoundComponent
{
	struct UZombieSoundComponent2* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.InsertMagazine.IsMagazineToLoadEmpty
// Size: 0x38(Inherited: 0x0) 
struct FIsMagazineToLoadEmpty
{
	struct FWeaponReloadData Data;  // 0x0(0x30)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ReturnValue : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function ConZ.InteractableInterface.GetDefaultInteractionForDrone
// Size: 0xE0(Inherited: 0x0) 
struct FGetDefaultInteractionForDrone
{
	struct ADrone* Drone;  // 0x0(0x8)
	struct FInteractionQueryParameters Params;  // 0x8(0x40)
	struct FInteractionStruct ReturnValue;  // 0x48(0x98)

}; 
// Function ConZ.InteractableInterface.GetDefaultInteractionForPrisoner
// Size: 0xE0(Inherited: 0x0) 
struct FGetDefaultInteractionForPrisoner
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	struct FInteractionQueryParameters Params;  // 0x8(0x40)
	struct FInteractionStruct ReturnValue;  // 0x48(0x98)

}; 
// Function ConZ.InteractableInterface.GetInteractableName
// Size: 0x20(Inherited: 0x0) 
struct FGetInteractableName
{
	struct UObject* User;  // 0x0(0x8)
	struct FText ReturnValue;  // 0x8(0x18)

}; 
// Function ConZ.InteractableInterface.GetInteractions
// Size: 0x60(Inherited: 0x0) 
struct FGetInteractions
{
	struct UObject* User;  // 0x0(0x8)
	struct UObject* creator;  // 0x8(0x8)
	struct FInteractionQueryParameters Params;  // 0x10(0x40)
	struct TArray<struct FInteractionStruct> ReturnValue;  // 0x50(0x10)

}; 
// Function ConZ.InteractableInterface.GetInteractionsWithItem
// Size: 0x20(Inherited: 0x0) 
struct FGetInteractionsWithItem
{
	struct UObject* User;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)
	struct TArray<struct FInteractionStruct> ReturnValue;  // 0x10(0x10)

}; 
// Function ConZ.InteractableInterface.Interactable_WantsHealthBarVisible
// Size: 0x1(Inherited: 0x0) 
struct FInteractable_WantsHealthBarVisible
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.InteractableInterface.IsAbleToInteractWithItem
// Size: 0x10(Inherited: 0x0) 
struct FIsAbleToInteractWithItem
{
	struct AItem* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.InteractableInterface.OnHovered
// Size: 0x8(Inherited: 0x0) 
struct FOnHovered
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.InteractionComponent.ChopOnServer
// Size: 0x8(Inherited: 0x0) 
struct FChopOnServer
{
	struct UObject* choppedObject;  // 0x0(0x8)

}; 
// Function ConZ.InteractionComponent.FillWaterOnServer
// Size: 0x18(Inherited: 0x0) 
struct FFillWaterOnServer
{
	struct AItem* Item;  // 0x0(0x8)
	float Ratio;  // 0x8(0x4)
	float Salinity;  // 0xC(0x4)
	UGameResourceType* ResourceType;  // 0x10(0x8)

}; 
// Function ConZ.PrisonerMovementComponent.GetActualCourseAngle
// Size: 0x4(Inherited: 0x0) 
struct FGetActualCourseAngle
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.MeleeCombatComponent.GetIsInCombatMode
// Size: 0x1(Inherited: 0x0) 
struct FGetIsInCombatMode
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.InteractionComponent.FinishExaminePrisonerOnServer
// Size: 0x8(Inherited: 0x0) 
struct FFinishExaminePrisonerOnServer
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.InteractionComponent.NetMulticast_UpdateLockHPOnClients
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_UpdateLockHPOnClients
{
	struct UObject* Lockpickable;  // 0x0(0x8)
	float lockHP;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.InteractionComponent.OpenItemOnServer
// Size: 0x10(Inherited: 0x0) 
struct FOpenItemOnServer
{
	struct AFoodItem* FoodItem;  // 0x0(0x8)
	struct AItem* openingItem;  // 0x8(0x8)

}; 
// Function ConZ.InteractionComponent.PickupItemOnClients
// Size: 0x28(Inherited: 0x0) 
struct FPickupItemOnClients
{
	struct UMeshComponent* MeshComponent;  // 0x0(0x8)
	struct FMeshInstanceId InstanceId;  // 0x8(0x8)
	struct UStaticMesh* StaticMesh;  // 0x10(0x8)
	struct FVector pickupLocation;  // 0x18(0xC)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function ConZ.InteractionComponent.PickupItemOnServer
// Size: 0x28(Inherited: 0x0) 
struct FPickupItemOnServer
{
	struct UMeshComponent* MeshComponent;  // 0x0(0x8)
	struct FMeshInstanceId InstanceId;  // 0x8(0x8)
	struct UStaticMesh* StaticMesh;  // 0x10(0x8)
	struct FVector pickupLocation;  // 0x18(0xC)
	uint8_t  Operation;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)

}; 
// Function ConZ.InteractionComponent.Server_FindOrCreateGardenSlotMeshComponentForInteraction
// Size: 0x8(Inherited: 0x0) 
struct FServer_FindOrCreateGardenSlotMeshComponentForInteraction
{
	struct UStaticMesh* PlantMesh;  // 0x0(0x8)

}; 
// Function ConZ.InteractionComponent.UncraftItemOnServer
// Size: 0x8(Inherited: 0x0) 
struct FUncraftItemOnServer
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.InteractionComponent.UnexamineItemOnClient
// Size: 0x8(Inherited: 0x0) 
struct FUnexamineItemOnClient
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.InteractionComponent.UnspawnExaminedItemsOnServer
// Size: 0x1(Inherited: 0x0) 
struct FUnspawnExaminedItemsOnServer
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool destroyItems : 1;  // 0x0(0x1)

}; 
// Function ConZ.InteractionComponent.UseItemOnServer
// Size: 0x18(Inherited: 0x0) 
struct FUseItemOnServer
{
	struct AItem* Item;  // 0x0(0x8)
	int32_t Usage;  // 0x8(0x4)
	float usageWeight;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Eat : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.InteractionContainerUserWidget.RemoveActiveInteractionWidget
// Size: 0x8(Inherited: 0x0) 
struct FRemoveActiveInteractionWidget
{
	struct APlayerController* PlayerController;  // 0x0(0x8)

}; 
// Function ConZ.InventoryContainerSelection.OnRep_Items
// Size: 0x10(Inherited: 0x0) 
struct FOnRep_Items
{
	struct TArray<struct UObject*> _oldItems;  // 0x0(0x10)

}; 
// Function ConZ.InventoryNode.GetInventoryNodeName
// Size: 0x18(Inherited: 0x0) 
struct FGetInventoryNodeName
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function ConZ.ItemActionSequence.GetAnimations
// Size: 0x10(Inherited: 0x0) 
struct FGetAnimations
{
	struct FCharacterAndItemAnimation ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.ItemActionSequence.JumpToAnimationSection
// Size: 0x8(Inherited: 0x0) 
struct FJumpToAnimationSection
{
	struct FName Section;  // 0x0(0x8)

}; 
// Function ConZ.LockpickingMinigame.OnLockpickDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnLockpickDestroyed
{
	struct AActor* lockpick;  // 0x0(0x8)

}; 
// Function ConZ.ItemActionSequence.OnAnimNotify
// Size: 0x1(Inherited: 0x0) 
struct FOnAnimNotify
{
	uint8_t  notifyType;  // 0x0(0x1)

}; 
// Function ConZ.ItemActionSequence.SetNextAnimationSection
// Size: 0xC(Inherited: 0x0) 
struct FSetNextAnimationSection
{
	struct FName Section;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool allowLoop : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function ConZ.ItemActionSequence.SetNextAnimationSectionFromPrevious
// Size: 0x10(Inherited: 0x0) 
struct FSetNextAnimationSectionFromPrevious
{
	struct FName previousSection;  // 0x0(0x8)
	struct FName NextSection;  // 0x8(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Server_ApplyBaseDamageInteractionEventToZombie
// Size: 0x98(Inherited: 0x0) 
struct FServer_ApplyBaseDamageInteractionEventToZombie
{
	struct AZombie2* Zombie;  // 0x0(0x8)
	float Damage;  // 0x8(0x4)
	struct FHitResult HitResult;  // 0xC(0x88)
	char pad_148[4];  // 0x94(0x4)

}; 
// Function ConZ.ItemSplitWidget.OnStackAmountBoxTextChanged
// Size: 0x18(Inherited: 0x0) 
struct FOnStackAmountBoxTextChanged
{
	struct FText newText;  // 0x0(0x18)

}; 
// Function ConZ.ItemTooltipPanelElement.OnTextDataChanged
// Size: 0x18(Inherited: 0x0) 
struct FOnTextDataChanged
{
	struct FText Value;  // 0x0(0x18)

}; 
// Function ConZ.ItemWithText.OnTextAccepted
// Size: 0x20(Inherited: 0x0) 
struct FOnTextAccepted
{
	struct APrisoner* User;  // 0x0(0x8)
	struct FText Text;  // 0x8(0x18)

}; 
// Function ConZ.KillboxComponent.AddGasEmitter
// Size: 0x8(Inherited: 0x0) 
struct FAddGasEmitter
{
	struct UParticleSystemComponent* gasEmitter;  // 0x0(0x8)

}; 
// Function ConZ.KillboxComponent.AddSpawnPoint
// Size: 0x10(Inherited: 0x0) 
struct FAddSpawnPoint
{
	struct ADoor* holeDoor;  // 0x0(0x8)
	struct AKillBoxSpawnPoint* Spawner;  // 0x8(0x8)

}; 
// Function ConZ.Zombie2.NetMulticast_PlaySound
// Size: 0x8(Inherited: 0x0) 
struct FNetMulticast_PlaySound
{
	struct UAkAudioEvent* Sound;  // 0x0(0x8)

}; 
// Function ConZ.KillboxComponent.OnEntranceUnlockedDelegate
// Size: 0x8(Inherited: 0x0) 
struct FOnEntranceUnlockedDelegate
{
	struct ADoor* Door;  // 0x0(0x8)

}; 
// Function ConZ.KillboxComponent.SetDetectionField
// Size: 0x8(Inherited: 0x0) 
struct FSetDetectionField
{
	struct AKillBoxDetectionField* detectionField;  // 0x0(0x8)

}; 
// Function ConZ.KillboxComponent.SetLaserComponent
// Size: 0x8(Inherited: 0x0) 
struct FSetLaserComponent
{
	struct UMovableCollisionFieldComponent* laserComponent;  // 0x0(0x8)

}; 
// Function ConZ.KillboxComponent.SetMusicComponent
// Size: 0x8(Inherited: 0x0) 
struct FSetMusicComponent
{
	struct UAkComponent* musicComponent;  // 0x0(0x8)

}; 
// Function ConZ.KillboxComponent.SetPanicbutton
// Size: 0x8(Inherited: 0x0) 
struct FSetPanicbutton
{
	struct ASwitch* panicButton;  // 0x0(0x8)

}; 
// Function ConZ.LadderMarkersReplicator.NetMulticast_RegisterLadderMarker
// Size: 0xB0(Inherited: 0x0) 
struct FNetMulticast_RegisterLadderMarker
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FLadderMarker marker;  // 0x10(0xA0)

}; 
// Function ConZ.NameableItemComponent.OnEditTextWidgetTextAccepted
// Size: 0x20(Inherited: 0x0) 
struct FOnEditTextWidgetTextAccepted
{
	struct APrisoner* User;  // 0x0(0x8)
	struct FText Text;  // 0x8(0x18)

}; 
// Function ConZ.Lockpickable.HasLocks
// Size: 0x1(Inherited: 0x0) 
struct FHasLocks
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.LockpickingMinigame.OnTensionToolDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnTensionToolDestroyed
{
	struct AActor* tensionTool;  // 0x0(0x8)

}; 
// Function ConZ.WeaponAttachmentMagazine.FillWithDefaultAmmo
// Size: 0x4(Inherited: 0x0) 
struct FFillWithDefaultAmmo
{
	int32_t Count;  // 0x0(0x4)

}; 
// Function ConZ.LockProtectionTag.GetBaseDamage
// Size: 0x4(Inherited: 0x0) 
struct FGetBaseDamage
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.LockProtectionTag.SetModifiedDamage
// Size: 0x4(Inherited: 0x0) 
struct FSetModifiedDamage
{
	float Damage;  // 0x0(0x4)

}; 
// Function ConZ.LockpickingWidget.GetRemainingTime
// Size: 0x4(Inherited: 0x0) 
struct FGetRemainingTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.MathStatics.GetRandomPointWithinCircle
// Size: 0x14(Inherited: 0x0) 
struct FGetRandomPointWithinCircle
{
	struct FVector2D Center;  // 0x0(0x8)
	float Radius;  // 0x8(0x4)
	struct FVector2D ReturnValue;  // 0xC(0x8)

}; 
// Function ConZ.MathStatics.IsPointWithinCircle
// Size: 0x18(Inherited: 0x0) 
struct FIsPointWithinCircle
{
	struct FVector2D Point;  // 0x0(0x8)
	struct FVector2D circleCenter;  // 0x8(0x8)
	float circleRadius;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ReturnValue : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function ConZ.MathStatics.LineBoxIntersection
// Size: 0x50(Inherited: 0x0) 
struct FLineBoxIntersection
{
	struct FVector HitLocation;  // 0x0(0xC)
	struct FBox Box;  // 0xC(0x1C)
	struct FVector Start;  // 0x28(0xC)
	struct FVector End;  // 0x34(0xC)
	struct FVector startToEnd;  // 0x40(0xC)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool ReturnValue : 1;  // 0x4C(0x1)
	char pad_77[3];  // 0x4D(0x3)

}; 
// Function ConZ.MechanoidsManager.Drone_OnDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FDrone_OnDestroyed
{
	struct AActor* sender;  // 0x0(0x8)

}; 
// Function ConZ.MeleeCombatComponent.IsHoldingBlock
// Size: 0x1(Inherited: 0x0) 
struct FIsHoldingBlock
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.MeleeCombatComponent.Server_Dodge
// Size: 0x20(Inherited: 0x0) 
struct FServer_Dodge
{
	struct FMeleeAction Action;  // 0x0(0x20)

}; 
// Function ConZ.MeleeCombatComponent.Server_EnablePendingBlockOrDodge
// Size: 0x1(Inherited: 0x0) 
struct FServer_EnablePendingBlockOrDodge
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerAnimInstance.GetCardinalDirectionFromCourseAngle
// Size: 0x8(Inherited: 0x0) 
struct FGetCardinalDirectionFromCourseAngle
{
	float Value;  // 0x0(0x4)
	uint8_t  ReturnValue;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.MeleeInterface.CanBeAttackedByMelee
// Size: 0x1(Inherited: 0x0) 
struct FCanBeAttackedByMelee
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.MeleeInterface.CanHoldBlock
// Size: 0x1(Inherited: 0x0) 
struct FCanHoldBlock
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.UserProfile.MakeCharacterTemplate
// Size: 0xE0(Inherited: 0x0) 
struct FMakeCharacterTemplate
{
	struct FCharacterTemplate ReturnValue;  // 0x0(0xE0)

}; 
// Function ConZ.MeleeInterface.CheckMeleeAttackCapsuleCollision
// Size: 0xE0(Inherited: 0x0) 
struct FCheckMeleeAttackCapsuleCollision
{
	struct FCheckMeleeAttackCapsuleCollisionData Data;  // 0x0(0xD0)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool ReturnValue : 1;  // 0xD0(0x1)
	char pad_209[15];  // 0xD1(0xF)

}; 
// Function ConZ.Metabolism_BCU_ICU_Monitor.OnICUStateChanged
// Size: 0x1(Inherited: 0x0) 
struct FOnICUStateChanged
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool isCollapsed : 1;  // 0x0(0x1)

}; 
// Function ConZ.Zombie2.GetFoe
// Size: 0x8(Inherited: 0x0) 
struct FGetFoe
{
	struct APawn* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Misc_Client_PostAudioEvent
// Size: 0x18(Inherited: 0x0) 
struct FMisc_Client_PostAudioEvent
{
	struct UAkAudioEvent* AudioEvent;  // 0x0(0x8)
	struct AActor* Actor;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool stopWhenAttachedToDestroyed : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.Zombie2.GetHitReactComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetHitReactComponent
{
	struct UHitReactComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Zombie2.GetZombieMovement
// Size: 0x8(Inherited: 0x0) 
struct FGetZombieMovement
{
	struct UZombieMovementComponent2* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Zombie2.NetMulticast_PlayTurnMontage
// Size: 0x8(Inherited: 0x0) 
struct FNetMulticast_PlayTurnMontage
{
	uint8_t  turnMontage;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float turnAngle;  // 0x4(0x4)

}; 
// Function ConZ.Zombie2.NetMulticast_StartAttack
// Size: 0x4(Inherited: 0x0) 
struct FNetMulticast_StartAttack
{
	int32_t attackDescriptionIndex;  // 0x0(0x4)

}; 
// Function ConZ.SquadEmblemWidget.GetEmblemData
// Size: 0x8(Inherited: 0x0) 
struct FGetEmblemData
{
	struct FConZSquadEmblem ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Zombie2.OnRep_IsSearched
// Size: 0x1(Inherited: 0x0) 
struct FOnRep_IsSearched
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool oldValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Zombie2.Server_SetStance
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetStance
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// Function ConZ.Zombie2.Server_StartAttack
// Size: 0x4(Inherited: 0x0) 
struct FServer_StartAttack
{
	int32_t attackDescriptionIndex;  // 0x0(0x4)

}; 
// Function ConZ.Zombie2.SetFoe
// Size: 0x8(Inherited: 0x0) 
struct FSetFoe
{
	struct APawn* Value;  // 0x0(0x8)

}; 
// Function ConZ.Zombie2.StartAttack
// Size: 0x10(Inherited: 0x0) 
struct FStartAttack
{
	struct APawn* foe;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.MiscStatics.DrawDebugNumber
// Size: 0x30(Inherited: 0x0) 
struct FDrawDebugNumber
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float Number;  // 0x8(0x4)
	struct FVector Location;  // 0xC(0xC)
	struct FColor Color;  // 0x18(0x4)
	float Size;  // 0x1C(0x4)
	float Duration;  // 0x20(0x4)
	float Thickness;  // 0x24(0x4)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool autoSize : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)

}; 
// Function ConZ.MiscStatics.DrawLine
// Size: 0x38(Inherited: 0x0) 
struct FDrawLine
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector LineStart;  // 0x8(0xC)
	struct FVector LineEnd;  // 0x14(0xC)
	struct FColor Color;  // 0x20(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool persistentLines : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	float LifeTime;  // 0x28(0x4)
	char DepthPriority;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	float Thickness;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function ConZ.MiscStatics.GetClassDefaultObject
// Size: 0x10(Inherited: 0x0) 
struct FGetClassDefaultObject
{
	UObject* ObjectClass;  // 0x0(0x8)
	struct UObject* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.MiscStatics.GetDeveloperUsers
// Size: 0x50(Inherited: 0x0) 
struct FGetDeveloperUsers
{
	struct TSet<struct FString> ReturnValue;  // 0x0(0x50)

}; 
// Function ConZ.MiscStatics.GetGameVersion
// Size: 0x10(Inherited: 0x0) 
struct FGetGameVersion
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.MiscStatics.GetLineBatcher
// Size: 0x20(Inherited: 0x0) 
struct FGetLineBatcher
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bPersistentLines : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float LifeTime;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bDepthIsForeground : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct ULineBatchComponent* ReturnValue;  // 0x18(0x8)

}; 
// Function ConZ.MiscStatics.LocalToUtcDateTime
// Size: 0x10(Inherited: 0x0) 
struct FLocalToUtcDateTime
{
	struct FDateTime Local;  // 0x0(0x8)
	struct FDateTime ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.MiscStatics.ParseTransformFromString
// Size: 0x50(Inherited: 0x0) 
struct FParseTransformFromString
{
	struct FString String;  // 0x0(0x10)
	struct FTransform Transform;  // 0x10(0x30)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool ReturnValue : 1;  // 0x40(0x1)
	char pad_65[15];  // 0x41(0xF)

}; 
// Function ConZ.MiscStatics.ParseVectorFromString
// Size: 0x20(Inherited: 0x0) 
struct FParseVectorFromString
{
	struct FString String;  // 0x0(0x10)
	struct FVector outVector;  // 0x10(0xC)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool ReturnValue : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// Function ConZ.MiscStatics.PasteLocationAndRotationFromClipboard
// Size: 0x1C(Inherited: 0x0) 
struct FPasteLocationAndRotationFromClipboard
{
	struct FVector Location;  // 0x0(0xC)
	struct FRotator Rotation;  // 0xC(0xC)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)

}; 
// Function ConZ.MiscStatics.ResolveObjectPathForPIE
// Size: 0x48(Inherited: 0x0) 
struct FResolveObjectPathForPIE
{
	struct TSoftObjectPtr<UObject> Asset;  // 0x0(0x28)
	struct UObject* WorldContext;  // 0x28(0x8)
	struct FSoftObjectPath ReturnValue;  // 0x30(0x18)

}; 
// Function ConZ.MiscStatics.SendChatLineToPlayer
// Size: 0x20(Inherited: 0x0) 
struct FSendChatLineToPlayer
{
	struct AConZPlayerController* PlayerController;  // 0x0(0x8)
	struct FString Text;  // 0x8(0x10)
	uint8_t  ChatType;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool ShouldCopyToClientClipboard : 1;  // 0x19(0x1)
	char pad_26[6];  // 0x1A(0x6)

}; 
// Function ConZ.MiscStatics.SortSkillsByLevelAndExperience
// Size: 0x10(Inherited: 0x0) 
struct FSortSkillsByLevelAndExperience
{
	struct TArray<struct USkill*> Skills;  // 0x0(0x10)

}; 
// Function ConZ.MiscStatics.UtcToLocalDateTime
// Size: 0x10(Inherited: 0x0) 
struct FUtcToLocalDateTime
{
	struct FDateTime utc;  // 0x0(0x8)
	struct FDateTime ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.MissionContainerWidget.GetCompleteObjectiveAnimation
// Size: 0x8(Inherited: 0x0) 
struct FGetCompleteObjectiveAnimation
{
	struct UWidgetAnimation* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.MissionContainerWidget.GetStartObjectiveAnimation
// Size: 0x8(Inherited: 0x0) 
struct FGetStartObjectiveAnimation
{
	struct UWidgetAnimation* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.SpawnScreen.CanSpawn
// Size: 0x1(Inherited: 0x0) 
struct FCanSpawn
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.MissionDialogueManager.AddToQueue
// Size: 0x18(Inherited: 0x0) 
struct FAddToQueue
{
	struct TArray<struct FDialogueInfo> missionDialogue;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool interrupt : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.MissionDialogueManager.OnJournalTabModeOpened
// Size: 0x1(Inherited: 0x0) 
struct FOnJournalTabModeOpened
{
	uint8_t  tabMode;  // 0x0(0x1)

}; 
// Function ConZ.MissionManager.Client_ShowMissionResultWidget
// Size: 0x10(Inherited: 0x0) 
struct FClient_ShowMissionResultWidget
{
	struct AMission* Mission;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool Completed : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.MissionManager.IsMissionInvitationReceived
// Size: 0x1(Inherited: 0x0) 
struct FIsMissionInvitationReceived
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.MissionManager.Server_AcceptMissionInvitation
// Size: 0x10(Inherited: 0x0) 
struct FServer_AcceptMissionInvitation
{
	struct AMission* Mission;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool accepted : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.MissionManager.Server_SendMissionInvitation
// Size: 0x10(Inherited: 0x0) 
struct FServer_SendMissionInvitation
{
	struct AMissionManager* manager;  // 0x0(0x8)
	struct AMission* Mission;  // 0x8(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Chat_Server_BroadcastChatMessage
// Size: 0x18(Inherited: 0x0) 
struct FChat_Server_BroadcastChatMessage
{
	struct FString Message;  // 0x0(0x10)
	uint8_t  Channel;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.ModularTooltip.PrisonerHUD_OnShouldShowExtendedWidgetTooltipChanged
// Size: 0x1(Inherited: 0x0) 
struct FPrisonerHUD_OnShouldShowExtendedWidgetTooltipChanged
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.MovableCollisionFieldComponent.Initialize
// Size: 0x20(Inherited: 0x0) 
struct FInitialize
{
	struct TArray<struct UStaticMeshComponent*> movableMeshes;  // 0x0(0x10)
	struct TArray<struct UStaticMeshComponent*> collisionMeshes;  // 0x10(0x10)

}; 
// Function ConZ.NameableItemComponent.OnLocalPrisonerHoveredActorChanged
// Size: 0x8(Inherited: 0x0) 
struct FOnLocalPrisonerHoveredActorChanged
{
	struct AActor* hoveredActor;  // 0x0(0x8)

}; 
// Function ConZ.NetworkPredictionComponent.Multicast_SendTransform
// Size: 0x10(Inherited: 0x0) 
struct FMulticast_SendTransform
{
	struct TArray<char> packedState;  // 0x0(0x10)

}; 
// Function ConZ.NetworkPredictionComponent.Server_SendTransform
// Size: 0x10(Inherited: 0x0) 
struct FServer_SendTransform
{
	struct TArray<char> packedState;  // 0x0(0x10)

}; 
// Function ConZ.NetworkStatics.GetAuthTokenForCurrentUser
// Size: 0x30(Inherited: 0x0) 
struct FGetAuthTokenForCurrentUser
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FString ServerIp;  // 0x8(0x10)
	int32_t ServerResponsePort;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	struct FString ReturnValue;  // 0x20(0x10)

}; 
// Function ConZ.NetworkStatics.MakeAuthToken
// Size: 0x30(Inherited: 0x0) 
struct FMakeAuthToken
{
	struct FString UserId;  // 0x0(0x10)
	struct FString password;  // 0x10(0x10)
	struct FString ReturnValue;  // 0x20(0x10)

}; 
// Function ConZ.NetworkStatics.MakeAuthTokenForCurrentUser
// Size: 0x28(Inherited: 0x0) 
struct FMakeAuthTokenForCurrentUser
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FString password;  // 0x8(0x10)
	struct FString ReturnValue;  // 0x18(0x10)

}; 
// Function ConZ.NetworkStatics.MakeAuthTokenForUser
// Size: 0x28(Inherited: 0x0) 
struct FMakeAuthTokenForUser
{
	struct UUser* User;  // 0x0(0x8)
	struct FString password;  // 0x8(0x10)
	struct FString ReturnValue;  // 0x18(0x10)

}; 
// Function ConZ.NotificationsManager.NetMulticast_RequestNotification
// Size: 0x18(Inherited: 0x0) 
struct FNetMulticast_RequestNotification
{
	struct FNotificationDescriptionReplicationHelper Description;  // 0x0(0x18)

}; 
// Function ConZ.NotificationsManager.OnPlayerReadyToPlay
// Size: 0x8(Inherited: 0x0) 
struct FOnPlayerReadyToPlay
{
	struct AConZPlayerController* PlayerController;  // 0x0(0x8)

}; 
// Function ConZ.PlaceableActorBase.Server_Place
// Size: 0x18(Inherited: 0x0) 
struct FServer_Place
{
	struct FVector Location;  // 0x0(0xC)
	struct FRotator Rotation;  // 0xC(0xC)

}; 
// Function ConZ.PlaceableActorBase.Server_UpdateState
// Size: 0x8(Inherited: 0x0) 
struct FServer_UpdateState
{
	struct FPlaceableActorStateReplicationHelper State;  // 0x0(0x8)

}; 
// Function ConZ.PlantGrowthDisplay.GetGrowthPercentage
// Size: 0x4(Inherited: 0x0) 
struct FGetGrowthPercentage
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PlantGrowthDisplay.GetPlantGrowthStagePercentage
// Size: 0x18(Inherited: 0x0) 
struct FGetPlantGrowthStagePercentage
{
	float growth;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UPlantSpecies* species;  // 0x8(0x8)
	float ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.PlantGrowthDisplay.GetPlantGrowthStageString
// Size: 0x20(Inherited: 0x0) 
struct FGetPlantGrowthStageString
{
	float growth;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UPlantSpecies* species;  // 0x8(0x8)
	struct FString ReturnValue;  // 0x10(0x10)

}; 
// Function ConZ.PlayerDrone.Client_DropItem
// Size: 0x8(Inherited: 0x0) 
struct FClient_DropItem
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.PlayerDrone.Server_CloseDoor
// Size: 0x8(Inherited: 0x0) 
struct FServer_CloseDoor
{
	struct ADoor* Door;  // 0x0(0x8)

}; 
// Function ConZ.VoiceAudioComponent.QueueVoiceData
// Size: 0x10(Inherited: 0x0) 
struct FQueueVoiceData
{
	struct TArray<char> CompressedVoiceData;  // 0x0(0x10)

}; 
// Function ConZ.PlayerDrone.Server_DestroyBaseElement
// Size: 0x20(Inherited: 0x0) 
struct FServer_DestroyBaseElement
{
	int64_t BaseId;  // 0x0(0x8)
	int64_t ElementID;  // 0x8(0x8)
	struct FVector Location;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.PlayerDrone.Server_DestroyGarden
// Size: 0x10(Inherited: 0x0) 
struct FServer_DestroyGarden
{
	struct FVector Location;  // 0x0(0xC)
	uint16_t gardenId;  // 0xC(0x2)
	char pad_14[2];  // 0xE(0x2)

}; 
// Function ConZ.PlayerDrone.Server_OpenDoor
// Size: 0x8(Inherited: 0x0) 
struct FServer_OpenDoor
{
	struct ADoor* Door;  // 0x0(0x8)

}; 
// Function ConZ.PlayerDrone.Server_SpawnAndDropItemAt
// Size: 0x20(Inherited: 0x0) 
struct FServer_SpawnAndDropItemAt
{
	struct UContainerItemDescriptor* Item;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	struct FRotator Rotation;  // 0x14(0xC)

}; 
// Function ConZ.PlayerRpcChannel.Admin_Client_ShowSpawnedVehicles
// Size: 0x20(Inherited: 0x0) 
struct FAdmin_Client_ShowSpawnedVehicles
{
	struct APlayerController* Controller;  // 0x0(0x8)
	struct FString spawnedVehiclesInfo;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ShouldCopyToClientClipboard : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.PlayerRpcChannel.Admin_Server_TeleportTo_Location
// Size: 0x30(Inherited: 0x0) 
struct FAdmin_Server_TeleportTo_Location
{
	struct AConZPlayerController* Controller;  // 0x0(0x8)
	struct FTeleportRequest TeleportRequest;  // 0x8(0x28)

}; 
// Function ConZ.PlayerRpcChannel.Admin_Server_TeleportTo_VehicleLocation
// Size: 0x40(Inherited: 0x0) 
struct FAdmin_Server_TeleportTo_VehicleLocation
{
	struct AConZPlayerController* Controller;  // 0x0(0x8)
	struct FTeleportRequest TeleportRequest;  // 0x8(0x28)
	struct FString vehicleName;  // 0x30(0x10)

}; 
// Function ConZ.PlayerRpcChannel.BaseBuilding_Client_UpdateElementState
// Size: 0x20(Inherited: 0x0) 
struct FBaseBuilding_Client_UpdateElementState
{
	struct FVector Location;  // 0x0(0xC)
	float areaSize;  // 0xC(0x4)
	struct TArray<struct FConZOnDemandElementData> Data;  // 0x10(0x10)

}; 
// Function ConZ.PlayerRpcChannel.BaseBuilding_Server_OnFlagAreaExited
// Size: 0x8(Inherited: 0x0) 
struct FBaseBuilding_Server_OnFlagAreaExited
{
	struct AConZCharacter* Character;  // 0x0(0x8)

}; 
// Function ConZ.UserProfile.SetPrisonerId
// Size: 0x8(Inherited: 0x0) 
struct FSetPrisonerId
{
	struct FDbIntegerId Value;  // 0x0(0x8)

}; 
// Function ConZ.PlayerRpcChannel.BCULockRegistry_Client_SetClientHasActiveBCULock
// Size: 0x1(Inherited: 0x0) 
struct FBCULockRegistry_Client_SetClientHasActiveBCULock
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool clientHasActiveBCULock : 1;  // 0x0(0x1)

}; 
// Function ConZ.PlayerRpcChannel.Chat_Client_ProcessAdminCommand
// Size: 0x10(Inherited: 0x0) 
struct FChat_Client_ProcessAdminCommand
{
	struct FString commandText;  // 0x0(0x10)

}; 
// Function ConZ.PlayerRpcChannel.Chat_Client_SendMessageToChat
// Size: 0x20(Inherited: 0x0) 
struct FChat_Client_SendMessageToChat
{
	struct FString Message;  // 0x0(0x10)
	struct AConZPlayerState* SenderPlayerState;  // 0x10(0x8)
	uint8_t  Channel;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool shouldCopyToClipboard : 1;  // 0x19(0x1)
	char pad_26[6];  // 0x1A(0x6)

}; 
// Function ConZ.PlayerRpcChannel.Chat_Client_UnmuteUser
// Size: 0x10(Inherited: 0x0) 
struct FChat_Client_UnmuteUser
{
	struct FString UserId;  // 0x0(0x10)

}; 
// Function ConZ.PlayerRpcChannel.Chat_Server_ProcessAdminCommand
// Size: 0x10(Inherited: 0x0) 
struct FChat_Server_ProcessAdminCommand
{
	struct FString commandText;  // 0x0(0x10)

}; 
// Function ConZ.PlayerRpcChannel.Client_IncreaseStat
// Size: 0x20(Inherited: 0x0) 
struct FClient_IncreaseStat
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct FString statId;  // 0x8(0x10)
	int32_t statIncBy;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Client_SendBuyErrorMessage
// Size: 0x10(Inherited: 0x0) 
struct FClient_SendBuyErrorMessage
{
	struct AConZPlayerController* PlayerController;  // 0x0(0x8)
	uint8_t  errorMessage;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.UserProfile.SetName
// Size: 0x10(Inherited: 0x0) 
struct FSetName
{
	struct FString Value;  // 0x0(0x10)

}; 
// Function ConZ.PlayerRpcChannel.Client_SendSellErrorMessage
// Size: 0x10(Inherited: 0x0) 
struct FClient_SendSellErrorMessage
{
	struct AConZPlayerController* PlayerController;  // 0x0(0x8)
	uint8_t  errorMessage;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.PlayerRpcChannel.Client_ServerSettingsLock_ReceiveLockOwner
// Size: 0x28(Inherited: 0x0) 
struct FClient_ServerSettingsLock_ReceiveLockOwner
{
	struct FString lockOwnerId;  // 0x0(0x10)
	struct FString lockOwnerName;  // 0x10(0x10)
	int32_t MessageIndex;  // 0x20(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool lockIsMine : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)

}; 
// Function ConZ.PlayerRpcChannel.Client_ServerSettingsSendToClient
// Size: 0x20(Inherited: 0x0) 
struct FClient_ServerSettingsSendToClient
{
	struct TArray<int32_t> settingIndices;  // 0x0(0x10)
	struct TArray<struct FString> Settings;  // 0x10(0x10)

}; 
// Function ConZ.PlayerRpcChannel.Client_SetStat
// Size: 0x20(Inherited: 0x0) 
struct FClient_SetStat
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct FString statId;  // 0x8(0x10)
	int32_t StatValue;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Cooking_Server_AddFavoriteRecipe
// Size: 0x1(Inherited: 0x0) 
struct FCooking_Server_AddFavoriteRecipe
{
	char recipeId;  // 0x0(0x1)

}; 
// Function ConZ.PlayerRpcChannel.Cooking_Server_CreateResultItemAndAssignToPrisoner
// Size: 0x10(Inherited: 0x0) 
struct FCooking_Server_CreateResultItemAndAssignToPrisoner
{
	int32_t SlotId;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct APrisoner* User;  // 0x8(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Cooking_Server_UpdateCookingSlotsFromUserSetData
// Size: 0x10(Inherited: 0x0) 
struct FCooking_Server_UpdateCookingSlotsFromUserSetData
{
	struct TArray<struct FCookingUtilitySlotInstance_UserSetData> Data;  // 0x0(0x10)

}; 
// Function ConZ.PlayerRpcChannel.CustomZones_Server_UpdateCustomZoneData
// Size: 0x60(Inherited: 0x0) 
struct FCustomZones_Server_UpdateCustomZoneData
{
	struct FCustomZoneConfiguration globalConfiguration;  // 0x0(0x40)
	struct TArray<struct FCustomZoneConfiguration> configurations;  // 0x40(0x10)
	struct TArray<struct FCustomZoneRegion> Regions;  // 0x50(0x10)

}; 
// Function ConZ.PlayerRpcChannel.Door_Client_TriggerFailurePenalty
// Size: 0x18(Inherited: 0x0) 
struct FDoor_Client_TriggerFailurePenalty
{
	struct FString runtimeId;  // 0x0(0x10)
	struct AActor* triggeringActor;  // 0x10(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Grapple_Server_EndGrappleAttack
// Size: 0x18(Inherited: 0x0) 
struct FGrapple_Server_EndGrappleAttack
{
	struct AConZCharacter* grappler;  // 0x0(0x8)
	struct APrisoner* grapplee;  // 0x8(0x8)
	uint8_t  grappleEndType;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.PlayerRpcChannel.HasOwningUser_Server_RequestStateUpdate
// Size: 0x8(Inherited: 0x0) 
struct FHasOwningUser_Server_RequestStateUpdate
{
	struct UObject* Object;  // 0x0(0x8)

}; 
// Function ConZ.Tournament.GetStats
// Size: 0x10(Inherited: 0x0) 
struct FGetStats
{
	struct TArray<struct FTournamentStats> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.PlayerRpcChannel.HeatSourceItemComponent_Server_AdjustDial
// Size: 0x10(Inherited: 0x0) 
struct FHeatSourceItemComponent_Server_AdjustDial
{
	struct UContinuousFuelHeatSource* FueledHeatSource;  // 0x0(0x8)
	char dialValue;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.PlayerRpcChannel.Inventory_Server_AddInventoryElementToContainer
// Size: 0x48(Inherited: 0x0) 
struct FInventory_Server_AddInventoryElementToContainer
{
	struct AConZCharacter* Character;  // 0x0(0x8)
	struct FInv2021_InventoryElementRepHelper Element;  // 0x8(0x20)
	struct UObject* destinationContainer;  // 0x28(0x8)
	struct FInv2021_InventoryPositionObjectRepHelper position;  // 0x30(0x18)

}; 
// Function ConZ.PlayerRpcChannel.Inventory_Server_AddToStack
// Size: 0x48(Inherited: 0x0) 
struct FInventory_Server_AddToStack
{
	struct AConZCharacter* Character;  // 0x0(0x8)
	struct FInv2021_InventoryElementRepHelper elementToAdd;  // 0x8(0x20)
	struct FInv2021_InventoryElementRepHelper Destination;  // 0x28(0x20)

}; 
// Function ConZ.PlayerRpcChannel.Inventory_Server_DropInventoryElementAt
// Size: 0x58(Inherited: 0x0) 
struct FInventory_Server_DropInventoryElementAt
{
	struct AConZCharacter* Character;  // 0x0(0x8)
	struct FInv2021_InventoryElementRepHelper Element;  // 0x8(0x20)
	struct FVector Location;  // 0x28(0xC)
	struct FRotator Rotation;  // 0x34(0xC)
	struct FInv2021_InventoryPositionObjectRepHelper position;  // 0x40(0x18)

}; 
// Function ConZ.PlayerRpcChannel.Inventory_Server_RemoveStacks
// Size: 0x30(Inherited: 0x0) 
struct FInventory_Server_RemoveStacks
{
	struct AConZCharacter* Character;  // 0x0(0x8)
	struct FInv2021_InventoryElementRepHelper targetElement;  // 0x8(0x20)
	int32_t numStacksToRemove;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function ConZ.PlayerRpcChannel.InventoryItemComponent_Server_RequestPageReplicationForController
// Size: 0x18(Inherited: 0x0) 
struct FInventoryItemComponent_Server_RequestPageReplicationForController
{
	struct UInventoryItemComponent* inventoryItemComp;  // 0x0(0x8)
	int32_t pageIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct AController* Controller;  // 0x10(0x8)

}; 
// Function ConZ.PlayerRpcChannel.ItemContainer_Server_ResetLockTimer
// Size: 0x10(Inherited: 0x0) 
struct FItemContainer_Server_ResetLockTimer
{
	struct FString runtimeId;  // 0x0(0x10)

}; 
// Function ConZ.WorldStatics.IsEnvironmentClassIndoor
// Size: 0x2(Inherited: 0x0) 
struct FIsEnvironmentClassIndoor
{
	uint8_t  Value;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// Function ConZ.PrisonerMovementComponent.GetTimeSpentFalling
// Size: 0x4(Inherited: 0x0) 
struct FGetTimeSpentFalling
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetBoxingInPlaceTurningElapsedTimeLeft
// Size: 0x4(Inherited: 0x0) 
struct FGetBoxingInPlaceTurningElapsedTimeLeft
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Lockpickable_Server_SetNumTries
// Size: 0x10(Inherited: 0x0) 
struct FLockpickable_Server_SetNumTries
{
	struct UObject* Lockpickable;  // 0x0(0x8)
	int32_t numTries;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Misc_Server_LogKill
// Size: 0x20(Inherited: 0x0) 
struct FMisc_Server_LogKill
{
	struct APrisoner* victim;  // 0x0(0x8)
	struct APrisoner* killer;  // 0x8(0x8)
	struct FString killerUserProfileId;  // 0x10(0x10)

}; 
// Function ConZ.PlayerRpcChannel.Prisoner_Server_Die
// Size: 0x8(Inherited: 0x0) 
struct FPrisoner_Server_Die
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Prisoner_Server_PushStaminaDrain
// Size: 0x20(Inherited: 0x0) 
struct FPrisoner_Server_PushStaminaDrain
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	float AmountToDrain;  // 0x8(0x4)
	float drainDuration;  // 0xC(0x4)
	float RecoveryDelay;  // 0x10(0x4)
	float RatioToRecover;  // 0x14(0x4)
	float recoveryDuration;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.PlayerRpcChannel.ResourceLockingManager_Server_LockResource
// Size: 0xC(Inherited: 0x0) 
struct FResourceLockingManager_Server_LockResource
{
	struct FResourceNetworkGUID LockOwnerGUID;  // 0x0(0x4)
	struct FResourceNetworkGUID ResourceGUID;  // 0x4(0x4)
	int32_t ResourceId;  // 0x8(0x4)

}; 
// Function ConZ.PlayerRpcChannel.ResourceLockingManager_Server_UnlockArea
// Size: 0x1C(Inherited: 0x0) 
struct FResourceLockingManager_Server_UnlockArea
{
	struct FBox Area;  // 0x0(0x1C)

}; 
// Function ConZ.PlayerRpcChannel.Server_ServerSettingsSendToServer
// Size: 0x20(Inherited: 0x0) 
struct FServer_ServerSettingsSendToServer
{
	struct TArray<int32_t> settingIndices;  // 0x0(0x10)
	struct TArray<struct FString> Settings;  // 0x10(0x10)

}; 
// Function ConZ.PlayerRpcChannel.Server_InteractWithHuntingClue
// Size: 0x8(Inherited: 0x0) 
struct FServer_InteractWithHuntingClue
{
	struct AHuntingClue* HuntingClue;  // 0x0(0x8)

}; 
// Function ConZ.WeaponAmmoDisplayContainerWidget.OnTabModeOpened
// Size: 0x1(Inherited: 0x0) 
struct FOnTabModeOpened
{
	uint8_t  tabMode;  // 0x0(0x1)

}; 
// Function ConZ.PlayerRpcChannel.Server_MakeNoise
// Size: 0x28(Inherited: 0x0) 
struct FServer_MakeNoise
{
	struct AActor* targetActor;  // 0x0(0x8)
	float Loudness;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct APawn* Instigator;  // 0x10(0x8)
	struct FVector ImpactPoint;  // 0x18(0xC)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Server_PlayerPurchaseTradeable
// Size: 0x28(Inherited: 0x0) 
struct FServer_PlayerPurchaseTradeable
{
	struct AConZPlayerController* PlayerController;  // 0x0(0x8)
	struct TArray<struct FTradeableClassAndQuantity> tradeableClassesAndQuantity;  // 0x8(0x10)
	struct ATrader* Trader;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool isCashPreferred : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	float clientsidePlayerBasedPriceMultiplier;  // 0x24(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Server_PlayerSellTradeables
// Size: 0x28(Inherited: 0x0) 
struct FServer_PlayerSellTradeables
{
	struct AConZPlayerController* PlayerController;  // 0x0(0x8)
	struct TArray<struct UObject*> tradeables;  // 0x8(0x10)
	struct ATrader* Trader;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool playerWantsCash : 1;  // 0x20(0x1)
	uint8_t  Flags;  // 0x21(0x1)
	char pad_34[2];  // 0x22(0x2)
	float clientsidePlayerBasedPriceMultiplier;  // 0x24(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Server_RequestDoorUpdate
// Size: 0x8(Inherited: 0x0) 
struct FServer_RequestDoorUpdate
{
	struct ADoor* Door;  // 0x0(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Server_ResetMission
// Size: 0x10(Inherited: 0x0) 
struct FServer_ResetMission
{
	AMission* missionClass;  // 0x0(0x8)
	uint8_t  MissionType;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool restartMission : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// Function ConZ.PlayerRpcChannel.Server_ServerSettingsLock_RequestLockAcquisition
// Size: 0x4(Inherited: 0x0) 
struct FServer_ServerSettingsLock_RequestLockAcquisition
{
	int32_t MessageIndex;  // 0x0(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Server_SwitchActiveMission
// Size: 0x8(Inherited: 0x0) 
struct FServer_SwitchActiveMission
{
	AMission* missionClass;  // 0x0(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Server_UnsubscribeFromUnachievedAchievements
// Size: 0x18(Inherited: 0x0) 
struct FServer_UnsubscribeFromUnachievedAchievements
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct TArray<struct FString> achievementsIds;  // 0x8(0x10)

}; 
// Function ConZ.PlayerRpcChannel.Server_UnsubscribePlayer
// Size: 0x78(Inherited: 0x0) 
struct FServer_UnsubscribePlayer
{
	struct FPlayerUnsubscribeData PlayerUnsubscribeData;  // 0x0(0x78)

}; 
// Function ConZ.PlayerRpcChannel.Server_UntrackMission
// Size: 0x1(Inherited: 0x0) 
struct FServer_UntrackMission
{
	uint8_t  MissionType;  // 0x0(0x1)

}; 
// Function ConZ.PlayerRpcChannel.Skill_Server_IncreaseExperiencePoints
// Size: 0x18(Inherited: 0x0) 
struct FSkill_Server_IncreaseExperiencePoints
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	USkill* skillClass;  // 0x8(0x8)
	float ExperiencePoints;  // 0x10(0x4)
	float famePointsMultiplier;  // 0x14(0x4)

}; 
// Function ConZ.PlayerRpcChannel.SurvivalStats_Server_HandlePlayerLogin
// Size: 0x8(Inherited: 0x0) 
struct FSurvivalStats_Server_HandlePlayerLogin
{
	struct APlayerController* PlayerController;  // 0x0(0x8)

}; 
// Function ConZ.PlayerRpcChannel.TrapItem_Server_ClientAuthoritativeTriggerTrap
// Size: 0x18(Inherited: 0x0) 
struct FTrapItem_Server_ClientAuthoritativeTriggerTrap
{
	struct ATrapItem* TrapItem;  // 0x0(0x8)
	struct FTrapTriggerParams Params;  // 0x8(0x10)

}; 
// Function ConZ.PlayerRpcChannel.TrapItem_Server_DisarmTrap
// Size: 0x10(Inherited: 0x0) 
struct FTrapItem_Server_DisarmTrap
{
	struct APrisoner* disarmer;  // 0x0(0x8)
	struct ATrapItem* TrapItem;  // 0x8(0x8)

}; 
// Function ConZ.PlayerRpcChannel.TrapItem_Server_TriggerTrap
// Size: 0x18(Inherited: 0x0) 
struct FTrapItem_Server_TriggerTrap
{
	struct ATrapItem* TrapItem;  // 0x0(0x8)
	struct FTrapTriggerParams Params;  // 0x8(0x10)

}; 
// Function ConZ.PlayerRpcChannel.Vehicle_Server_ApplyImpactDamage
// Size: 0xA0(Inherited: 0x0) 
struct FVehicle_Server_ApplyImpactDamage
{
	struct APawn* Vehicle;  // 0x0(0x8)
	float Damage;  // 0x8(0x4)
	struct FHitResult HitResult;  // 0xC(0x88)
	char pad_148[4];  // 0x94(0x4)
	struct AActor* OtherActor;  // 0x98(0x8)

}; 
// Function ConZ.PlayerRpcChannel.Vehicle_Server_DriverShouldBecomeOwner
// Size: 0x18(Inherited: 0x0) 
struct FVehicle_Server_DriverShouldBecomeOwner
{
	struct APawn* Vehicle;  // 0x0(0x8)
	struct ACharacter* Driver;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool IsWorldStreamed : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.PlayerRpcChannel.Vehicle_Server_MarkForDestruction
// Size: 0x10(Inherited: 0x0) 
struct FVehicle_Server_MarkForDestruction
{
	struct AVehicleBase* Vehicle;  // 0x0(0x8)
	float timeToDestruct;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.PlayerRpcChannel.Vehicle_Server_SetLightsCategoryStates
// Size: 0x10(Inherited: 0x0) 
struct FVehicle_Server_SetLightsCategoryStates
{
	struct AVehicleBase* Vehicle;  // 0x0(0x8)
	uint8_t  lightsCategoryStates;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.PlayerRpcChannel.Vehicle_Server_TakeCollisionDamage
// Size: 0x28(Inherited: 0x0) 
struct FVehicle_Server_TakeCollisionDamage
{
	struct AVehicleBase* Vehicle;  // 0x0(0x8)
	struct TArray<struct UVehicleAttachment*> Attachments;  // 0x8(0x10)
	struct TArray<float> collisionDamages;  // 0x18(0x10)

}; 
// Function ConZ.PrisonerActionChopBaseElementDescription.GetBaseElementStaticMesh
// Size: 0x8(Inherited: 0x0) 
struct FGetBaseElementStaticMesh
{
	struct UStaticMesh* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerAnimInstance.AnimNotify_RemoveItemFromHands
// Size: 0x8(Inherited: 0x0) 
struct FAnimNotify_RemoveItemFromHands
{
	struct UAnimNotify* Notify;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerAnimInstance.AnimNotify_TakeItemInHands
// Size: 0x8(Inherited: 0x0) 
struct FAnimNotify_TakeItemInHands
{
	struct UAnimNotify* Notify;  // 0x0(0x8)

}; 
// Function ConZ.Vehicle.IsRadioTurnedOn
// Size: 0x1(Inherited: 0x0) 
struct FIsRadioTurnedOn
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerAnimInstance.FindTimeAfterJumpApex
// Size: 0x10(Inherited: 0x0) 
struct FFindTimeAfterJumpApex
{
	struct UAnimSequenceBase* AnimSequence;  // 0x0(0x8)
	float distanceToApex;  // 0x8(0x4)
	float ReturnValue;  // 0xC(0x4)

}; 
// Function ConZ.SentryAnimInstance2.FindTimeAtStoppingDistance
// Size: 0x10(Inherited: 0x0) 
struct FFindTimeAtStoppingDistance
{
	struct UAnimSequenceBase* AnimSequence;  // 0x0(0x8)
	float stoppingDistance;  // 0x8(0x4)
	float ReturnValue;  // 0xC(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetBowArmsShakeAnimationOnGameThread
// Size: 0x10(Inherited: 0x0) 
struct FGetBowArmsShakeAnimationOnGameThread
{
	uint8_t  stance;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UAnimSequenceBase* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.PrisonerAnimInstance.GetBoxingInPlaceTurningBlendAlpha
// Size: 0x4(Inherited: 0x0) 
struct FGetBoxingInPlaceTurningBlendAlpha
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetBoxingInPlaceTurningDirectionBlendAlpha
// Size: 0x4(Inherited: 0x0) 
struct FGetBoxingInPlaceTurningDirectionBlendAlpha
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetBoxingInPlaceTurningElapsedTimeRight
// Size: 0x4(Inherited: 0x0) 
struct FGetBoxingInPlaceTurningElapsedTimeRight
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.TrashNamedSliderWidget.GetMinValue
// Size: 0x4(Inherited: 0x0) 
struct FGetMinValue
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetBoxingTurnAngle
// Size: 0x4(Inherited: 0x0) 
struct FGetBoxingTurnAngle
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.SetCurrentVehicleGear
// Size: 0x4(Inherited: 0x0) 
struct FSetCurrentVehicleGear
{
	int32_t Value;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetFacialExpressionBlendWeightOnGameThread
// Size: 0x8(Inherited: 0x0) 
struct FGetFacialExpressionBlendWeightOnGameThread
{
	uint8_t  facialExpression;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetPenisSize
// Size: 0x4(Inherited: 0x0) 
struct FGetPenisSize
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetFacialExpressionBlendWeightOnWorkerThread
// Size: 0x8(Inherited: 0x0) 
struct FGetFacialExpressionBlendWeightOnWorkerThread
{
	uint8_t  facialExpression;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetInPlaceTurningBlendAlpha
// Size: 0x8(Inherited: 0x0) 
struct FGetInPlaceTurningBlendAlpha
{
	uint8_t  stance;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.User.AddRecentServer
// Size: 0x28(Inherited: 0x0) 
struct FAddRecentServer
{
	struct FUserServerHistoryItem Item;  // 0x0(0x28)

}; 
// Function ConZ.PrisonerAnimInstance.GetInPlaceTurningDirectionBlendAlpha
// Size: 0x8(Inherited: 0x0) 
struct FGetInPlaceTurningDirectionBlendAlpha
{
	uint8_t  stance;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetInPlaceTurningElapsedTimeLeft
// Size: 0x8(Inherited: 0x0) 
struct FGetInPlaceTurningElapsedTimeLeft
{
	uint8_t  stance;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetInPlaceTurningElapsedTimeRight
// Size: 0x8(Inherited: 0x0) 
struct FGetInPlaceTurningElapsedTimeRight
{
	uint8_t  stance;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetIsVehicleDriver
// Size: 0x1(Inherited: 0x0) 
struct FGetIsVehicleDriver
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerAnimInstance.GetLeanBlendWeights
// Size: 0x18(Inherited: 0x0) 
struct FGetLeanBlendWeights
{
	float Left;  // 0x0(0x4)
	float Right;  // 0x4(0x4)
	float Multiplier;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct UCurveFloat* strengthBySpeedCurve;  // 0x10(0x8)

}; 
// Function ConZ.PrisonerAnimInstance.GetLocomotionStateWeight
// Size: 0x8(Inherited: 0x0) 
struct FGetLocomotionStateWeight
{
	uint8_t  State;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetLowerEyelidRotationDelta
// Size: 0xC(Inherited: 0x0) 
struct FGetLowerEyelidRotationDelta
{
	struct FRotator ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.PrisonerAnimInstance.GetPlayRateFromSpeed
// Size: 0x10(Inherited: 0x0) 
struct FGetPlayRateFromSpeed
{
	float speedInAnimation;  // 0x0(0x4)
	float MinPlayRate;  // 0x4(0x4)
	float MaxPlayRate;  // 0x8(0x4)
	float ReturnValue;  // 0xC(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetStandLookBlendAlpha
// Size: 0x4(Inherited: 0x0) 
struct FGetStandLookBlendAlpha
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetUpperEyelidRotationDelta
// Size: 0xC(Inherited: 0x0) 
struct FGetUpperEyelidRotationDelta
{
	struct FRotator ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.PrisonerAnimInstance.GetVehicleBumpiness
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleBumpiness
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetVehicleDriverForwardIdleAnimation
// Size: 0x8(Inherited: 0x0) 
struct FGetVehicleDriverForwardIdleAnimation
{
	struct UBlendSpace* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Vehicle.GetVehicleHandbrakeAmount
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleHandbrakeAmount
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetVehiclePassengerIdleAnimation
// Size: 0x8(Inherited: 0x0) 
struct FGetVehiclePassengerIdleAnimation
{
	struct UBlendSpace* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerAnimInstance.GetVehicleSpeed
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleSpeed
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetVehicleSpeedKph
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleSpeedKph
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.GetVehicleThrottleAmount
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleThrottleAmount
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetWeaponAimingNoiseBlendValueOnGameThread
// Size: 0x4(Inherited: 0x0) 
struct FGetWeaponAimingNoiseBlendValueOnGameThread
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetWeaponAimingNoisePlayRateOnGameThread
// Size: 0x4(Inherited: 0x0) 
struct FGetWeaponAimingNoisePlayRateOnGameThread
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.GetWeaponRelatedIdleStateAnimationPlayRateOnGameThread
// Size: 0x4(Inherited: 0x0) 
struct FGetWeaponRelatedIdleStateAnimationPlayRateOnGameThread
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerAnimInstance.IsAnyStanceTransitionActive
// Size: 0x1(Inherited: 0x0) 
struct FIsAnyStanceTransitionActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerAnimInstance.IsCourseAngleSupportedByStartAndStopAnimations
// Size: 0x8(Inherited: 0x0) 
struct FIsCourseAngleSupportedByStartAndStopAnimations
{
	float courseAngle;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.PrisonerAnimInstance.OnIdleStateEntry
// Size: 0xB8(Inherited: 0x0) 
struct FOnIdleStateEntry
{
	struct FAnimNode_StateMachine Machine;  // 0x0(0xB0)
	int32_t prevStateIndex;  // 0xB0(0x4)
	int32_t nextStateIndex;  // 0xB4(0x4)

}; 
// Function ConZ.PrisonerAnimInstance_Aerial.FindJumpTime
// Size: 0x18(Inherited: 0x0) 
struct FFindJumpTime
{
	struct UAnimSequenceBase* AnimSequence;  // 0x0(0x8)
	float distanceToApex;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool afterApex : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	float ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.PrisonerAppearanceComponent.NetMulticast_UpdateChipLightColorIndex
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_UpdateChipLightColorIndex
{
	int8_t chipLightColor;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerAppearanceComponent.NetMulticast_UpdateFemaleRepData
// Size: 0x18(Inherited: 0x0) 
struct FNetMulticast_UpdateFemaleRepData
{
	uint64_t RepData;  // 0x0(0x8)
	struct FColor EyeshadowColor;  // 0x8(0x4)
	struct FColor EyelinerColor;  // 0xC(0x4)
	struct FColor LipstickColor;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.PrisonerCorpse.GetHairLength
// Size: 0x4(Inherited: 0x0) 
struct FGetHairLength
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerCorpse.UpdateWetnessFromPrisoner
// Size: 0x8(Inherited: 0x0) 
struct FUpdateWetnessFromPrisoner
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
// Function ConZ.PrisonerDebugUI_MainWidget.PrisonersComboBox_SelectionChanged
// Size: 0x18(Inherited: 0x0) 
struct FPrisonersComboBox_SelectionChanged
{
	struct FString SelectedItem;  // 0x0(0x10)
	char ESelectInfo SelectionType;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.PrisonerLoadout.EquipPrisoner
// Size: 0x20(Inherited: 0x0) 
struct FEquipPrisoner
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	struct TArray<struct AItem*> givenItems;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ClearEquipment : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool applyOutfit : 1;  // 0x19(0x1)
	char pad_26_1 : 7;  // 0x1A(0x1)
	bool applyItems : 1;  // 0x1A(0x1)
	char pad_27[5];  // 0x1B(0x5)

}; 
// Function ConZ.PrisonerMovementComponent.CanClimb
// Size: 0x1(Inherited: 0x0) 
struct FCanClimb
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerMovementComponent.CanClimbOntoLadder
// Size: 0x1(Inherited: 0x0) 
struct FCanClimbOntoLadder
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerMovementComponent.Climb
// Size: 0x1(Inherited: 0x0) 
struct FClimb
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerMovementComponent.ClimbOntoLadder
// Size: 0xC0(Inherited: 0x0) 
struct FClimbOntoLadder
{
	struct FLadderInfo LadderInfo;  // 0x0(0xB0)
	char pad_176_1 : 7;  // 0xB0(0x1)
	bool ReturnValue : 1;  // 0xB0(0x1)
	char pad_177[15];  // 0xB1(0xF)

}; 
// Function ConZ.PrisonerMovementComponent.DetectClimbableObstacle
// Size: 0x90(Inherited: 0x0) 
struct FDetectClimbableObstacle
{
	struct FClimbableObstacleInfo Result;  // 0x0(0x88)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool ReturnValue : 1;  // 0x88(0x1)
	char pad_137[7];  // 0x89(0x7)

}; 
// Function ConZ.PrisonerMovementComponent.DetectLadder
// Size: 0xC0(Inherited: 0x0) 
struct FDetectLadder
{
	struct FLadderInfo Result;  // 0x0(0xB0)
	char pad_176_1 : 7;  // 0xB0(0x1)
	bool ReturnValue : 1;  // 0xB0(0x1)
	char pad_177[15];  // 0xB1(0xF)

}; 
// Function ConZ.PrisonerMovementComponent.GetAnticipatedLandingSpot
// Size: 0x88(Inherited: 0x0) 
struct FGetAnticipatedLandingSpot
{
	struct FHitResult ReturnValue;  // 0x0(0x88)

}; 
// Function ConZ.PrisonerMovementComponent.GetClimbableObstacleInfo
// Size: 0x88(Inherited: 0x0) 
struct FGetClimbableObstacleInfo
{
	struct FClimbableObstacleInfo ReturnValue;  // 0x0(0x88)

}; 
// Function ConZ.PrisonerMovementComponent.GetCustomMovementMode
// Size: 0x1(Inherited: 0x0) 
struct FGetCustomMovementMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerMovementComponent.GetGroundSlopeAngle
// Size: 0x4(Inherited: 0x0) 
struct FGetGroundSlopeAngle
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerMovementComponent.GetGroundSlopeAngleForSpeedScaling
// Size: 0x4(Inherited: 0x0) 
struct FGetGroundSlopeAngleForSpeedScaling
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerMovementComponent.GetGroundSlopeAngleSmoothed
// Size: 0x4(Inherited: 0x0) 
struct FGetGroundSlopeAngleSmoothed
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerMovementComponent.GetLadderInfo
// Size: 0xB0(Inherited: 0x0) 
struct FGetLadderInfo
{
	struct FLadderInfo ReturnValue;  // 0x0(0xB0)

}; 
// Function ConZ.PrisonerMovementComponent.GetTimeSpentInAir
// Size: 0x4(Inherited: 0x0) 
struct FGetTimeSpentInAir
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerMovementComponent.GetWindowInfo
// Size: 0xD0(Inherited: 0x0) 
struct FGetWindowInfo
{
	struct FWindowInfo ReturnValue;  // 0x0(0xD0)

}; 
// Function ConZ.PrisonerMovementComponent.IsClimbing
// Size: 0x1(Inherited: 0x0) 
struct FIsClimbing
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerMovementComponent.IsDiving
// Size: 0x1(Inherited: 0x0) 
struct FIsDiving
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerMovementComponent.IsFlyingOrFalling
// Size: 0x4(Inherited: 0x0) 
struct FIsFlyingOrFalling
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.PrisonerMovementComponent.JumpOffLadder
// Size: 0x10(Inherited: 0x0) 
struct FJumpOffLadder
{
	struct FVector jumpVelocity;  // 0x0(0xC)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function ConZ.PrisonerMovementComponent.NetMulticast_FinishAnchoring
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_FinishAnchoring
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool anchoringSucceded : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerMovementComponent.NetMulticast_PlayAnimMontageIfSimulatedProxy
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_PlayAnimMontageIfSimulatedProxy
{
	struct UAnimMontage* Montage;  // 0x0(0x8)
	float PlayRate;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.PrisonerMovementComponent.Server_SetDesiredFallingPose
// Size: 0x2(Inherited: 0x0) 
struct FServer_SetDesiredFallingPose
{
	uint8_t  Pose;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool force : 1;  // 0x1(0x1)

}; 
// Function ConZ.PrisonerMovementComponent.Server_SetDivingState
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetDivingState
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerMovementComponent.Server_SetFallingControlRepData
// Size: 0x1(Inherited: 0x0) 
struct FServer_SetFallingControlRepData
{
	char RepData;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerMusicPlayerComponent.OnResult
// Size: 0x18(Inherited: 0x0) 
struct FOnResult
{
	struct URuntimeAudioImporterLibrary* RuntimeAudioImporterObjectRef;  // 0x0(0x8)
	struct UImportedSoundWave* SoundWaveRef;  // 0x8(0x8)
	uint8_t  Status;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.PrisonerSkillComponent.Server_UpdateDetectablePrisoners
// Size: 0x20(Inherited: 0x0) 
struct FServer_UpdateDetectablePrisoners
{
	struct TArray<struct APrisoner*> deltaToAdd;  // 0x0(0x10)
	struct TArray<struct APrisoner*> deltaToRemove;  // 0x10(0x10)

}; 
// Function ConZ.PrisonerSkillComponent.Server_UpdateNearbyFoliageCoverage
// Size: 0x1(Inherited: 0x0) 
struct FServer_UpdateNearbyFoliageCoverage
{
	char nearbyFoliageCoveragePackedData;  // 0x0(0x1)

}; 
// Function ConZ.SpawnScreen.GetWaitTimeText
// Size: 0x18(Inherited: 0x0) 
struct FGetWaitTimeText
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function ConZ.PrisonerSoundComponent.OnOutOfBoundsSoundPercentChanged
// Size: 0x10(Inherited: 0x0) 
struct FOnOutOfBoundsSoundPercentChanged
{
	struct USoundWave* PlayingSoundWave;  // 0x0(0x8)
	float PlaybackPercent;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Tournament.IsInProgress
// Size: 0x1(Inherited: 0x0) 
struct FIsInProgress
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerSoundComponent.PlayFootstepSounds
// Size: 0x1(Inherited: 0x0) 
struct FPlayFootstepSounds
{
	char EPhysicalSurface inPhysicalSurface;  // 0x0(0x1)

}; 
// Function ConZ.PrisonerSoundComponent.PlayMovingThroughFoliageSounds
// Size: 0x18(Inherited: 0x0) 
struct FPlayMovingThroughFoliageSounds
{
	struct UAkAudioEvent* StartAudioEvent;  // 0x0(0x8)
	struct UAkAudioEvent* StopAudioEvent;  // 0x8(0x8)
	uint8_t  motionIntensity;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	int32_t ReturnValue;  // 0x14(0x4)

}; 
// Function ConZ.PrisonerSoundComponent.StopMovingThroughFoliageSounds
// Size: 0x8(Inherited: 0x0) 
struct FStopMovingThroughFoliageSounds
{
	int32_t PlayingID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.PrisonerSoundComponent.UpdateMovingThroughFoliageSounds
// Size: 0x8(Inherited: 0x0) 
struct FUpdateMovingThroughFoliageSounds
{
	int32_t PlayingID;  // 0x0(0x4)
	uint8_t  motionIntensity;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool ReturnValue : 1;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)

}; 
// Function ConZ.PrisonerStatics.GetAdditionalPenisInchesBasedOnTotalPlayTime
// Size: 0x10(Inherited: 0x0) 
struct FGetAdditionalPenisInchesBasedOnTotalPlayTime
{
	struct UPrisonerCommonData* commonData;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.PrisonerUIStatics.GetPrisonerEnergy
// Size: 0x10(Inherited: 0x0) 
struct FGetPrisonerEnergy
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.PrisonerUIStatics.GetPrisonerHydration
// Size: 0x10(Inherited: 0x0) 
struct FGetPrisonerHydration
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.PrisonerUIStatics.GetPrisonerStaminaRatio
// Size: 0x10(Inherited: 0x0) 
struct FGetPrisonerStaminaRatio
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.Projectile.OnStop
// Size: 0x88(Inherited: 0x0) 
struct FOnStop
{
	struct FHitResult HitResult;  // 0x0(0x88)

}; 
// Function ConZ.QuartalPieProgressBar.SetProgressIndex
// Size: 0x4(Inherited: 0x0) 
struct FSetProgressIndex
{
	int32_t progressIndex;  // 0x0(0x4)

}; 
// Function ConZ.QuickAccessItemSwitcher3.SetItemOpacity
// Size: 0x8(Inherited: 0x0) 
struct FSetItemOpacity
{
	float Value;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool Invalidate : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.QuickAccessItemSwitcher3.ThrowingModePressed
// Size: 0x1(Inherited: 0x0) 
struct FThrowingModePressed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsChecked : 1;  // 0x0(0x1)

}; 
// Function ConZ.RadioProgram.ProvideNextRadioCategory
// Size: 0x8(Inherited: 0x0) 
struct FProvideNextRadioCategory
{
	struct URadioCategory* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.RadioStation.Multicast_SendNextTrack
// Size: 0x8(Inherited: 0x0) 
struct FMulticast_SendNextTrack
{
	struct URadioTrack* Track;  // 0x0(0x8)

}; 
// Function ConZ.RemoteSensorItem.OnResourceAmountChanged
// Size: 0x10(Inherited: 0x0) 
struct FOnResourceAmountChanged
{
	struct UBasicGameResourceContainerComponent* containerComponent;  // 0x0(0x8)
	float newAmount;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ConZ.ReplenishableResourceManager.NetMulticast_CreateReplenishableResource
// Size: 0x90(Inherited: 0x0) 
struct FNetMulticast_CreateReplenishableResource
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FReplenishableResourceDescription Description;  // 0x8(0x88)

}; 
// Function ConZ.ReplenishableResourceManager.NetMulticast_DestroyReplenishableResource
// Size: 0x10(Inherited: 0x0) 
struct FNetMulticast_DestroyReplenishableResource
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FPackedLocation ID;  // 0x8(0x8)

}; 
// Function ConZ.ReplenishableResourceManager.NetMulticast_ReserveReplenishableResourceSlot
// Size: 0x18(Inherited: 0x0) 
struct FNetMulticast_ReserveReplenishableResourceSlot
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FPackedLocation ID;  // 0x8(0x8)
	int32_t SlotIndex;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ConZ.ResourceIndicatorWidget.GetResourceAmountRatio
// Size: 0x4(Inherited: 0x0) 
struct FGetResourceAmountRatio
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ResourceLockingManager.NetMulticast_UnlockIntersectingAreas
// Size: 0x20(Inherited: 0x0) 
struct FNetMulticast_UnlockIntersectingAreas
{
	int32_t dataVersion;  // 0x0(0x4)
	struct FBox Area;  // 0x4(0x1C)

}; 
// Function ConZ.RestorableMeshInstancesManager.NetMulticast_RemoveMeshInstance
// Size: 0x60(Inherited: 0x0) 
struct FNetMulticast_RemoveMeshInstance
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UInstancedStaticMeshComponent* Component;  // 0x8(0x8)
	struct FRestorableMeshInstanceId InstanceId;  // 0x10(0x18)
	char pad_40[8];  // 0x28(0x8)
	struct FTransform InstanceTransform;  // 0x30(0x30)

}; 
// Function ConZ.RestorableMeshInstancesManager.NetMulticast_RestoreRemovedMeshInstance
// Size: 0x20(Inherited: 0x0) 
struct FNetMulticast_RestoreRemovedMeshInstance
{
	int32_t dataVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FRestorableMeshInstanceId InstanceId;  // 0x8(0x18)

}; 
// Function ConZ.SearchBox.TextChanged
// Size: 0x18(Inherited: 0x0) 
struct FTextChanged
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function ConZ.Sentry2.NetMulticast_HandleHit
// Size: 0x1(Inherited: 0x0) 
struct FNetMulticast_HandleHit
{
	uint8_t  hitDirectionType;  // 0x0(0x1)

}; 
// Function ConZ.Sentry2.NetMulticast_PlayMeleeAttackMontage
// Size: 0x4(Inherited: 0x0) 
struct FNetMulticast_PlayMeleeAttackMontage
{
	int32_t kickIndex;  // 0x0(0x4)

}; 
// Function ConZ.Sentry2.ObstacleCapsuleBeginOverlap
// Size: 0xA8(Inherited: 0x0) 
struct FObstacleCapsuleBeginOverlap
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0(0x8)
	struct AActor* OtherActor;  // 0x8(0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10(0x8)
	int32_t OtherBodyIndex;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bFromSweep : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FHitResult SweepResult;  // 0x20(0x88)

}; 
// Function ConZ.SentryAIController2.SensingComponent_OnSensePawn
// Size: 0x10(Inherited: 0x0) 
struct FSensingComponent_OnSensePawn
{
	struct TArray<struct AActor*> actorsPercepted;  // 0x0(0x10)

}; 
// Function ConZ.SerializableLayoutWidgetInterface.LoadLayout
// Size: 0x10(Inherited: 0x0) 
struct FLoadLayout
{
	struct TScriptInterface<IAttributeMapInterface> Attributes;  // 0x0(0x10)

}; 
// Function ConZ.ServerBrowser.OnDirectConnectTextBoxTextChanged
// Size: 0x18(Inherited: 0x0) 
struct FOnDirectConnectTextBoxTextChanged
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function ConZ.ServerBrowser.OnDirectConnectTextBoxTextCommitted
// Size: 0x20(Inherited: 0x0) 
struct FOnDirectConnectTextBoxTextCommitted
{
	struct FText Text;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.ServerBrowser.OnPasswordPopupTextBoxTextCommitted
// Size: 0x20(Inherited: 0x0) 
struct FOnPasswordPopupTextBoxTextCommitted
{
	struct FText Text;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.ServerBrowser.OnSearchBoxTextChanged
// Size: 0x18(Inherited: 0x0) 
struct FOnSearchBoxTextChanged
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function ConZ.SingletonStatics.GetDataSingleton
// Size: 0x8(Inherited: 0x0) 
struct FGetDataSingleton
{
	struct UDataSingleton* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.SortByButton.SetType
// Size: 0x1(Inherited: 0x0) 
struct FSetType
{
	char ESortByType sortType;  // 0x0(0x1)

}; 
// Function ConZ.SpawnMenuWidget.GetCurrentCurrencyText
// Size: 0x18(Inherited: 0x0) 
struct FGetCurrentCurrencyText
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function ConZ.SpawnMenuWidget.GetRemainingCurrencyText
// Size: 0x18(Inherited: 0x0) 
struct FGetRemainingCurrencyText
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function ConZ.SpawnMenuWidget.GetRemainingCurrencyTextColorAndOpacity
// Size: 0x28(Inherited: 0x0) 
struct FGetRemainingCurrencyTextColorAndOpacity
{
	struct FSlateColor ReturnValue;  // 0x0(0x28)

}; 
// Function ConZ.SpawnMenuWidget.GetRespawnDisabledLabelText
// Size: 0x18(Inherited: 0x0) 
struct FGetRespawnDisabledLabelText
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function ConZ.SpawnMenuWidget.GetSectorId
// Size: 0x10(Inherited: 0x0) 
struct FGetSectorId
{
	int32_t X;  // 0x0(0x4)
	int32_t Y;  // 0x4(0x4)
	struct FSectorId ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.SpawnMenuWidget.GetSectorSelectorVisibility
// Size: 0x1(Inherited: 0x0) 
struct FGetSectorSelectorVisibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.SpawnMenuWidget.GetTotalPriceText
// Size: 0x18(Inherited: 0x0) 
struct FGetTotalPriceText
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function ConZ.SpawnMenuWidget.SelectLocation
// Size: 0x8(Inherited: 0x0) 
struct FSelectLocation
{
	struct USpawnChoiceWidget* Button;  // 0x0(0x8)

}; 
// Function ConZ.SpawnScreen.GetRespawnButtonVisibility
// Size: 0x1(Inherited: 0x0) 
struct FGetRespawnButtonVisibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.SpawnSectorSelectorWidget.SelectSector
// Size: 0x8(Inherited: 0x0) 
struct FSelectSector
{
	struct UButton* Button;  // 0x0(0x8)

}; 
// Function ConZ.SphereMotionTriggerComponent.SphereComponent_OnComponentBeginOverlap
// Size: 0xA8(Inherited: 0x0) 
struct FSphereComponent_OnComponentBeginOverlap
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0(0x8)
	struct AActor* OtherActor;  // 0x8(0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10(0x8)
	int32_t OtherBodyIndex;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bFromSweep : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FHitResult SweepResult;  // 0x20(0x88)

}; 
// Function ConZ.SphereMotionTriggerComponent.SphereComponent_OnComponentEndOverlap
// Size: 0x20(Inherited: 0x0) 
struct FSphereComponent_OnComponentEndOverlap
{
	struct UPrimitiveComponent* activatedComp;  // 0x0(0x8)
	struct AActor* OtherActor;  // 0x8(0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10(0x8)
	int32_t OtherBodyIndex;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function ConZ.SquadEditor.OnColorClicked
// Size: 0x8(Inherited: 0x0) 
struct FOnColorClicked
{
	struct UDropdownMenuSelectionWidget* Widget;  // 0x0(0x8)

}; 
// Function ConZ.VoiceChatComponent.ServerProcessVoiceChatData
// Size: 0x10(Inherited: 0x0) 
struct FServerProcessVoiceChatData
{
	struct TArray<char> compressedVoiceDataBuffer;  // 0x0(0x10)

}; 
// Function ConZ.SquadEditor.OnSymbolClicked
// Size: 0x8(Inherited: 0x0) 
struct FOnSymbolClicked
{
	struct UDropdownMenuSelectionWidget* Widget;  // 0x0(0x8)

}; 
// Function ConZ.SquadEditor.OnTextChangedInformationTextBox
// Size: 0x18(Inherited: 0x0) 
struct FOnTextChangedInformationTextBox
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function ConZ.SquadEditor.OnTextChangedMessageTextBox
// Size: 0x18(Inherited: 0x0) 
struct FOnTextChangedMessageTextBox
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function ConZ.SquadEditor.OnTextCommittedNameTextBox
// Size: 0x20(Inherited: 0x0) 
struct FOnTextCommittedNameTextBox
{
	struct FText Text;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.SquadEmblemWidget.SetEmblemData
// Size: 0x8(Inherited: 0x0) 
struct FSetEmblemData
{
	struct FConZSquadEmblem Value;  // 0x0(0x8)

}; 
// Function ConZ.StaticDoorReplicator.NetMulticast_OnDoorRepDataChanged
// Size: 0x58(Inherited: 0x0) 
struct FNetMulticast_OnDoorRepDataChanged
{
	int32_t dataVersion;  // 0x0(0x4)
	struct FVector doorLocationZeroOrigin;  // 0x4(0xC)
	struct FDoorRepData RepData;  // 0x10(0x48)

}; 
// Function ConZ.TabElement.Update
// Size: 0xC(Inherited: 0x0) 
struct FUpdate
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Up : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector2D Offset;  // 0x4(0x8)

}; 
// Function ConZ.TeamDeathmatchGameEvent.GetTeamDeathmatchParameters
// Size: 0x14(Inherited: 0x0) 
struct FGetTeamDeathmatchParameters
{
	struct FTeamDeathmatchParameters ReturnValue;  // 0x0(0x14)

}; 
// Function ConZ.TeamInvitationWidget.StartTimer
// Size: 0x4(Inherited: 0x0) 
struct FStartTimer
{
	float Timeout;  // 0x0(0x4)

}; 
// Function ConZ.TrashSliderWidget.GetValue
// Size: 0x4(Inherited: 0x0) 
struct FGetValue
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.TextInputWidget.GetValueInt
// Size: 0x4(Inherited: 0x0) 
struct FGetValueInt
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.ThrowingComponent.OnProjectileBounced
// Size: 0x94(Inherited: 0x0) 
struct FOnProjectileBounced
{
	struct FHitResult ImpactResult;  // 0x0(0x88)
	struct FVector ImpactVelocity;  // 0x88(0xC)

}; 
// Function ConZ.TooltipBase.InitFromCaptionAndDescription
// Size: 0x30(Inherited: 0x0) 
struct FInitFromCaptionAndDescription
{
	struct FText Caption;  // 0x0(0x18)
	struct FText Description;  // 0x18(0x18)

}; 
// Function ConZ.TooltipBase.InitFromItem
// Size: 0x8(Inherited: 0x0) 
struct FInitFromItem
{
	struct AItem* Item;  // 0x0(0x8)

}; 
// Function ConZ.Tournament.HasEnded
// Size: 0x1(Inherited: 0x0) 
struct FHasEnded
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Tournament.Multicast_PlayAnnouncement
// Size: 0x8(Inherited: 0x0) 
struct FMulticast_PlayAnnouncement
{
	struct UAkAudioEvent* AudioEvent;  // 0x0(0x8)

}; 
// Function ConZ.TraderDropdownMenu.OnComboBoXSelectionChanged
// Size: 0x4(Inherited: 0x0) 
struct FOnComboBoXSelectionChanged
{
	int32_t SelectedIndex;  // 0x0(0x4)

}; 
// Function ConZ.UIStatics.CanDropIfDraggingItem
// Size: 0x18(Inherited: 0x0) 
struct FCanDropIfDraggingItem
{
	struct UObject* draggedObject;  // 0x0(0x8)
	struct APawn* draggingPlayerPawn;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.UIStatics.ColorToHex
// Size: 0x40(Inherited: 0x0) 
struct FColorToHex
{
	struct FSlateColor Color;  // 0x0(0x28)
	struct FText Text;  // 0x28(0x18)

}; 
// Function ConZ.UIStatics.GetAgeModifiersFromAge
// Size: 0x20(Inherited: 0x0) 
struct FGetAgeModifiersFromAge
{
	int32_t Age;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FVector4 ReturnValue;  // 0x10(0x10)

}; 
// Function ConZ.UIStatics.GetAttributesFromMuscularAndFatFactors
// Size: 0x20(Inherited: 0x0) 
struct FGetAttributesFromMuscularAndFatFactors
{
	float muscular;  // 0x0(0x4)
	float Fat;  // 0x4(0x4)
	char pad_8[8];  // 0x8(0x8)
	struct FVector4 ReturnValue;  // 0x10(0x10)

}; 
// Function ConZ.UIStatics.GetDataForFieldName
// Size: 0x30(Inherited: 0x0) 
struct FGetDataForFieldName
{
	struct FName Name;  // 0x0(0x8)
	struct UStruct* str;  // 0x8(0x8)
	struct UStruct* Type;  // 0x10(0x8)
	struct FText ReturnValue;  // 0x18(0x18)

}; 
// Function ConZ.UIStatics.GetMuscleLeanFatFactorsFromCoordinates
// Size: 0x14(Inherited: 0x0) 
struct FGetMuscleLeanFatFactorsFromCoordinates
{
	struct FVector2D Coordinates;  // 0x0(0x8)
	struct FVector ReturnValue;  // 0x8(0xC)

}; 
// Function ConZ.UIStatics.GetWidgetParentOfType
// Size: 0x20(Inherited: 0x0) 
struct FGetWidgetParentOfType
{
	struct UWidget* Widget;  // 0x0(0x8)
	UWidget* Type;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool includeUserWidgets : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct UWidget* ReturnValue;  // 0x18(0x8)

}; 
// Function ConZ.VicinityContainer3.OnContainerScrollBoxScrolled
// Size: 0x4(Inherited: 0x0) 
struct FOnContainerScrollBoxScrolled
{
	float CurrentOffset;  // 0x0(0x4)

}; 
// Function ConZ.User.AddFavoriteServer
// Size: 0x28(Inherited: 0x0) 
struct FAddFavoriteServer
{
	struct FUserServerHistoryItem Item;  // 0x0(0x28)

}; 
// Function ConZ.User.CreateDefaultProfile
// Size: 0x10(Inherited: 0x0) 
struct FCreateDefaultProfile
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UUserProfile* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.User.CreateProfileFromTemplate
// Size: 0xF0(Inherited: 0x0) 
struct FCreateProfileFromTemplate
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FCharacterTemplate Value;  // 0x8(0xE0)
	struct UUserProfile* ReturnValue;  // 0xE8(0x8)

}; 
// Function ConZ.User.DeleteProfile
// Size: 0x10(Inherited: 0x0) 
struct FDeleteProfile
{
	struct FDbIntegerId ID;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.User.FindProfiles
// Size: 0x18(Inherited: 0x0) 
struct FFindProfiles
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct UUserProfile*> ReturnValue;  // 0x8(0x10)

}; 
// Function ConZ.User.GetFavoriteServers
// Size: 0x10(Inherited: 0x0) 
struct FGetFavoriteServers
{
	struct TArray<struct FUserServerHistoryItem> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.UserProfile.GetId
// Size: 0x8(Inherited: 0x0) 
struct FGetId
{
	struct FDbIntegerId ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.User.GetIsBanned
// Size: 0x1(Inherited: 0x0) 
struct FGetIsBanned
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.UserProfile.GetLastLoginTime
// Size: 0x8(Inherited: 0x0) 
struct FGetLastLoginTime
{
	struct FDateTime ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.User.HasProfileWithName
// Size: 0x20(Inherited: 0x0) 
struct FHasProfileWithName
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FString Name;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.Vehicle.GetVehicleVelocity
// Size: 0xC(Inherited: 0x0) 
struct FGetVehicleVelocity
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function ConZ.User.RemoveFavoriteServer
// Size: 0x28(Inherited: 0x0) 
struct FRemoveFavoriteServer
{
	struct FUserServerHistoryItem Item;  // 0x0(0x28)

}; 
// Function ConZ.User.RemoveFavoriteServerAt
// Size: 0x4(Inherited: 0x0) 
struct FRemoveFavoriteServerAt
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function ConZ.User.SetIsBanned
// Size: 0x1(Inherited: 0x0) 
struct FSetIsBanned
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.User.SetProvider
// Size: 0x10(Inherited: 0x0) 
struct FSetProvider
{
	struct FString Value;  // 0x0(0x10)

}; 
// Function ConZ.User.SetRecentServers
// Size: 0x10(Inherited: 0x0) 
struct FSetRecentServers
{
	struct TArray<struct FUserServerHistoryItem> Value;  // 0x0(0x10)

}; 
// Function ConZ.UserProfile.GetCreationTemplateXml
// Size: 0x10(Inherited: 0x0) 
struct FGetCreationTemplateXml
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.UserProfile.GetLastLogoutTime
// Size: 0x8(Inherited: 0x0) 
struct FGetLastLogoutTime
{
	struct FDateTime ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.UserProfile.GetUser
// Size: 0x8(Inherited: 0x0) 
struct FGetUser
{
	struct UUser* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.UserProfile.IsProfileMarkedForDeletion
// Size: 0x1(Inherited: 0x0) 
struct FIsProfileMarkedForDeletion
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.UserProfile.LoadCharacterTemplate
// Size: 0xE0(Inherited: 0x0) 
struct FLoadCharacterTemplate
{
	struct FCharacterTemplate ReturnValue;  // 0x0(0xE0)

}; 
// Function ConZ.UserProfile.SetCreationTemplateXml
// Size: 0x10(Inherited: 0x0) 
struct FSetCreationTemplateXml
{
	struct FString Value;  // 0x0(0x10)

}; 
// Function ConZ.UserProfile.SetLastLogoutTime
// Size: 0x8(Inherited: 0x0) 
struct FSetLastLogoutTime
{
	struct FDateTime Value;  // 0x0(0x8)

}; 
// Function ConZ.Vehicle.ApplyImpactDamage
// Size: 0x98(Inherited: 0x0) 
struct FApplyImpactDamage
{
	float Damage;  // 0x0(0x4)
	struct FHitResult HitResult;  // 0x4(0x88)
	char pad_140[4];  // 0x8C(0x4)
	struct AActor* OtherActor;  // 0x90(0x8)

}; 
// Function ConZ.Vehicle.AreVehicleLightsActive
// Size: 0x1(Inherited: 0x0) 
struct FAreVehicleLightsActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Vehicle.GetMass
// Size: 0x4(Inherited: 0x0) 
struct FGetMass
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.GetMaxVehicleFuelAmount
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxVehicleFuelAmount
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.GetNumVehicleForwardGears
// Size: 0x4(Inherited: 0x0) 
struct FGetNumVehicleForwardGears
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.GetVehicleBatteryAmount
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleBatteryAmount
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.GetVehicleBatteryAmountRatio
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleBatteryAmountRatio
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.GetVehicleBatteryResourceType
// Size: 0x8(Inherited: 0x0) 
struct FGetVehicleBatteryResourceType
{
	UGameResourceType* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.WorldStatics.IsWorldStreamed
// Size: 0x10(Inherited: 0x0) 
struct FIsWorldStreamed
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.Vehicle.GetVehicleEngineBlockHealth
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleEngineBlockHealth
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.GetVehicleFuelAmount
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleFuelAmount
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.GetVehicleFuelAmountRatio
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleFuelAmountRatio
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.GetVehicleFuelResourceType
// Size: 0x8(Inherited: 0x0) 
struct FGetVehicleFuelResourceType
{
	UGameResourceType* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.Vehicle.GetVehicleHealthRatio
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleHealthRatio
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.GetVehicleWheelsSteerAmount
// Size: 0x4(Inherited: 0x0) 
struct FGetVehicleWheelsSteerAmount
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.IsVehicleDoorCollisionAttached
// Size: 0x8(Inherited: 0x0) 
struct FIsVehicleDoorCollisionAttached
{
	int32_t doorIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.Vehicle.IsVehicleDoorWindowCollisionAttached
// Size: 0x8(Inherited: 0x0) 
struct FIsVehicleDoorWindowCollisionAttached
{
	int32_t doorIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.Vehicle.IsVehicleHornActive
// Size: 0x1(Inherited: 0x0) 
struct FIsVehicleHornActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Vehicle.IsVehicleInAir
// Size: 0x1(Inherited: 0x0) 
struct FIsVehicleInAir
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Vehicle.IsVehicleUpright
// Size: 0x1(Inherited: 0x0) 
struct FIsVehicleUpright
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Vehicle.IsVehicleWheelTireDeflated
// Size: 0x8(Inherited: 0x0) 
struct FIsVehicleWheelTireDeflated
{
	int32_t WheelIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.Vehicle.LoadState
// Size: 0x8(Inherited: 0x0) 
struct FLoadState
{
	struct FDbIntegerId ID;  // 0x0(0x8)

}; 
// Function ConZ.Vehicle.SaveState
// Size: 0x10(Inherited: 0x0) 
struct FSaveState
{
	struct FDbIntegerId ID;  // 0x0(0x8)
	struct FDbIntegerId ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.Vehicle.SetVehicleBatteryAmount
// Size: 0x4(Inherited: 0x0) 
struct FSetVehicleBatteryAmount
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.SetVehicleBrakeAmount
// Size: 0x4(Inherited: 0x0) 
struct FSetVehicleBrakeAmount
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.SetVehicleDoorCollisionAttached
// Size: 0x8(Inherited: 0x0) 
struct FSetVehicleDoorCollisionAttached
{
	int32_t doorIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool Value : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.Vehicle.SetVehicleEngineBlockHealth
// Size: 0x4(Inherited: 0x0) 
struct FSetVehicleEngineBlockHealth
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.SetVehicleFreeLookEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetVehicleFreeLookEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.Vehicle.SetVehicleFuelAmount
// Size: 0x4(Inherited: 0x0) 
struct FSetVehicleFuelAmount
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.SetVehicleGearUp
// Size: 0x1(Inherited: 0x0) 
struct FSetVehicleGearUp
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.Vehicle.SetVehicleHandbrakeAmount
// Size: 0x4(Inherited: 0x0) 
struct FSetVehicleHandbrakeAmount
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.SetVehicleHealth
// Size: 0x4(Inherited: 0x0) 
struct FSetVehicleHealth
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.VehicleHasBattery
// Size: 0x1(Inherited: 0x0) 
struct FVehicleHasBattery
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.Vehicle.SetVehicleHornActive
// Size: 0x1(Inherited: 0x0) 
struct FSetVehicleHornActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// Function ConZ.Vehicle.SetVehicleSteerAmount
// Size: 0x4(Inherited: 0x0) 
struct FSetVehicleSteerAmount
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.SetVehicleThrottleAmount
// Size: 0x4(Inherited: 0x0) 
struct FSetVehicleThrottleAmount
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.Vehicle.ShouldShowVehicleHud
// Size: 0x1(Inherited: 0x0) 
struct FShouldShowVehicleHud
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ConZ.VehicleCorpse.GetMesh
// Size: 0x8(Inherited: 0x0) 
struct FGetMesh
{
	struct UStaticMeshComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.VehicleCraftedItem.SpawnVehicle
// Size: 0x10(Inherited: 0x0) 
struct FSpawnVehicle
{
	AActor* vehicleClass;  // 0x0(0x8)
	struct AActor* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.VehicleHitZoneManager.GetAirplaneWings
// Size: 0x10(Inherited: 0x0) 
struct FGetAirplaneWings
{
	struct TArray<struct FAirplaneWingHitZoneData> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.VehicleHitZoneManager.GetDoors
// Size: 0x10(Inherited: 0x0) 
struct FGetDoors
{
	struct TArray<struct FVehicleHitZoneData> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.VehicleHitZoneManager.GetDoorWindows
// Size: 0x10(Inherited: 0x0) 
struct FGetDoorWindows
{
	struct TArray<struct FVehicleHitZoneData> ReturnValue;  // 0x0(0x10)

}; 
// Function ConZ.VehicleHitZoneManager.GetVehicleHitMeshName
// Size: 0x8(Inherited: 0x0) 
struct FGetVehicleHitMeshName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.VehicleServiceStation.OnAttachedVehicleDestroyed
// Size: 0x8(Inherited: 0x0) 
struct FOnAttachedVehicleDestroyed
{
	struct AActor* DestroyedActor;  // 0x0(0x8)

}; 
// Function ConZ.VehicleWeaponAimingParameters.CanExecutePrisonerAction
// Size: 0x18(Inherited: 0x0) 
struct FCanExecutePrisonerAction
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	struct UPrisonerActionDescription* desc;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.VehicleWeaponAimingParameters.CanPrisonerEnterCombatModeUsingItem
// Size: 0x18(Inherited: 0x0) 
struct FCanPrisonerEnterCombatModeUsingItem
{
	struct APrisoner* Prisoner;  // 0x0(0x8)
	struct AItem* Item;  // 0x8(0x8)
	uint8_t  stance;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool ReturnValue : 1;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)

}; 
// Function ConZ.VicinityPanel3.OnCheckBoxCheckedChanged
// Size: 0x1(Inherited: 0x0) 
struct FOnCheckBoxCheckedChanged
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool checked : 1;  // 0x0(0x1)

}; 
// Function ConZ.VicinityPanel3.OnVicinityContainerClosed
// Size: 0x8(Inherited: 0x0) 
struct FOnVicinityContainerClosed
{
	struct UItemWidget2* Widget;  // 0x0(0x8)

}; 
// Function ConZ.VoiceChatComponent.ClientReceiveVoiceData
// Size: 0x18(Inherited: 0x0) 
struct FClientReceiveVoiceData
{
	struct UVoiceChatComponent* from;  // 0x0(0x8)
	struct TArray<char> compressedVoiceDataBuffer;  // 0x8(0x10)

}; 
// Function ConZ.VoiceChatComponent.GetCompressedVoiceData
// Size: 0x18(Inherited: 0x0) 
struct FGetCompressedVoiceData
{
	struct TArray<char> OutBuffer;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function ConZ.VoiceDecoder.CreateVoiceDecoder
// Size: 0x10(Inherited: 0x0) 
struct FCreateVoiceDecoder
{
	struct UObject* Owner;  // 0x0(0x8)
	struct UVoiceDecoder* ReturnValue;  // 0x8(0x8)

}; 
// Function ConZ.VoiceDecoder.DecompressVoiceData
// Size: 0x30(Inherited: 0x0) 
struct FDecompressVoiceData
{
	struct TArray<char> InCompressedVoiceData;  // 0x0(0x10)
	int32_t InCompressedVoiceBytes;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct TArray<char> OutDecompressedVoiceData;  // 0x18(0x10)
	int32_t OutDecompressedVoiceBytes;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function ConZ.WarningSignWidget.InitFromWarningType
// Size: 0x1(Inherited: 0x0) 
struct FInitFromWarningType
{
	uint8_t  warningType;  // 0x0(0x1)

}; 
// Function ConZ.WeaponActionWornOutFiringConditions.CanExecuteForWeapon
// Size: 0x10(Inherited: 0x0) 
struct FCanExecuteForWeapon
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.WeaponAttachmentMagazine.GetCapacity
// Size: 0x4(Inherited: 0x0) 
struct FGetCapacity
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.WeaponAttachmentMagazine.GetTopmostAmmunitionData
// Size: 0x20(Inherited: 0x0) 
struct FGetTopmostAmmunitionData
{
	struct FAmmunitionData Data;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ConZ.WeaponAttachmentMagazine.GetTopmostProjectileClass
// Size: 0x8(Inherited: 0x0) 
struct FGetTopmostProjectileClass
{
	AProjectile* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.WeaponAttachmentMagazine.IsAmmoSupported
// Size: 0x10(Inherited: 0x0) 
struct FIsAmmoSupported
{
	struct AAmmunitionItem* ammo;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.WeaponAttachmentMagazine.Multicast_SetLoadedVariables
// Size: 0x10(Inherited: 0x0) 
struct FMulticast_SetLoadedVariables
{
	struct TArray<struct FAmmunitionData> ammo;  // 0x0(0x10)

}; 
// Function ConZ.WeaponAttachmentMagazine.Server_InsertAmmoSingle
// Size: 0x8(Inherited: 0x0) 
struct FServer_InsertAmmoSingle
{
	struct AAmmunitionItem* ammoItem;  // 0x0(0x8)

}; 
// Function ConZ.WeaponAttachmentMagazine.SetAmmo
// Size: 0x10(Inherited: 0x0) 
struct FSetAmmo
{
	struct TArray<struct FAmmunitionData> ammo;  // 0x0(0x10)

}; 
// Function ConZ.WeaponAttachmentAutoCrossbowMagazine.GetFollowerBoneLocationOffset
// Size: 0x4(Inherited: 0x0) 
struct FGetFollowerBoneLocationOffset
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.WeaponBow.CanInsertArrow
// Size: 0x10(Inherited: 0x0) 
struct FCanInsertArrow
{
	struct AAmmunitionArrow* arrowItem;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function ConZ.WeaponBow.GetDrawPercentageDefaultsForParameters
// Size: 0xC(Inherited: 0x0) 
struct FGetDrawPercentageDefaultsForParameters
{
	float characterDrawWeight;  // 0x0(0x4)
	float bowDrawWeight;  // 0x4(0x4)
	float ReturnValue;  // 0x8(0x4)

}; 
// Function ConZ.WeaponBow.GetDrawWeight
// Size: 0x4(Inherited: 0x0) 
struct FGetDrawWeight
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.WeaponBow.GetOwnersDrawWeightByStrength
// Size: 0x4(Inherited: 0x0) 
struct FGetOwnersDrawWeightByStrength
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.WeaponBow.GetOwnersTotalDrawWeight
// Size: 0x4(Inherited: 0x0) 
struct FGetOwnersTotalDrawWeight
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.WeaponBow.GetPendingArrow
// Size: 0x8(Inherited: 0x0) 
struct FGetPendingArrow
{
	struct AAmmunitionArrow* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.WeaponBow.Server_InsertArrow
// Size: 0x8(Inherited: 0x0) 
struct FServer_InsertArrow
{
	struct AAmmunitionArrow* arrow;  // 0x0(0x8)

}; 
// Function ConZ.WeaponBow.Server_SetDrawAmount
// Size: 0x4(Inherited: 0x0) 
struct FServer_SetDrawAmount
{
	float drawAmount;  // 0x0(0x4)

}; 
// Function ConZ.WeaponBow.Server_SetPendingArrow
// Size: 0x8(Inherited: 0x0) 
struct FServer_SetPendingArrow
{
	struct AAmmunitionArrow* arrow;  // 0x0(0x8)

}; 
// Function ConZ.WeaponBow.SetDrawWeight
// Size: 0x4(Inherited: 0x0) 
struct FSetDrawWeight
{
	float drawWeight;  // 0x0(0x4)

}; 
// Function ConZ.WeaponCrossbow.GetDrawCategory
// Size: 0x1(Inherited: 0x0) 
struct FGetDrawCategory
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function ConZ.WeaponRevolver.NetMulticast_SetLoadedVariablesForRevolver
// Size: 0x4(Inherited: 0x0) 
struct FNetMulticast_SetLoadedVariablesForRevolver
{
	int32_t ammoIndex;  // 0x0(0x4)

}; 
// Function ConZ.WeaponRevolver.Server_PlayFiringAnimation
// Size: 0x8(Inherited: 0x0) 
struct FServer_PlayFiringAnimation
{
	int32_t ammoIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool dryFire : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ConZ.WeaponRevolver.Server_RollDrum
// Size: 0x4(Inherited: 0x0) 
struct FServer_RollDrum
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function ConZ.WeaponRevolver.Server_UseAmmoAtIndex
// Size: 0x4(Inherited: 0x0) 
struct FServer_UseAmmoAtIndex
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function ConZ.WeaponScopeItemComponent.Client_SetLoadedVariables
// Size: 0x8(Inherited: 0x0) 
struct FClient_SetLoadedVariables
{
	int32_t Windage;  // 0x0(0x4)
	float displayBrightnessMultiplier;  // 0x4(0x4)

}; 
// Function ConZ.WeatherController2.NetMulticast_ResetStateSnapshots
// Size: 0x34(Inherited: 0x0) 
struct FNetMulticast_ResetStateSnapshots
{
	struct FWeatherReplicatedStateSnapshot Snapshot;  // 0x0(0x34)

}; 
// Function ConZ.Wettable.GetMaxWaterWeight
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxWaterWeight
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ConZ.WheelBarrow.GetDriverPhysicsCapsuleComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetDriverPhysicsCapsuleComponent
{
	struct UWheelBarrowDriverCapsuleComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function ConZ.WorldStatics.GetDistanceToClosestPlayerPawnOrSpectator
// Size: 0x18(Inherited: 0x0) 
struct FGetDistanceToClosestPlayerPawnOrSpectator
{
	struct UWorld* World;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	float ReturnValue;  // 0x14(0x4)

}; 
// Function ConZ.WorldStatics.GetEnvironmentDescriptionAtLocation
// Size: 0x18(Inherited: 0x0) 
struct FGetEnvironmentDescriptionAtLocation
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	struct FEnvironmentDescription ReturnValue;  // 0x14(0x3)
	char pad_23[1];  // 0x17(0x1)

}; 
// Function ConZ.WorldStatics.GetExtraAirTemperatureFromHeatSourcesAtLocation
// Size: 0x18(Inherited: 0x0) 
struct FGetExtraAirTemperatureFromHeatSourcesAtLocation
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	float ReturnValue;  // 0x14(0x4)

}; 
// Function ConZ.WorldStatics.GetRadiationAmountIncreaseRateAtLocation
// Size: 0x18(Inherited: 0x0) 
struct FGetRadiationAmountIncreaseRateAtLocation
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	float ReturnValue;  // 0x14(0x4)

}; 
// Function ConZ.WorldStatics.IsEnvironmentClassOutdoor
// Size: 0x2(Inherited: 0x0) 
struct FIsEnvironmentClassOutdoor
{
	uint8_t  Value;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// Function ConZ.WorldStatics.IsEveryStreamedLevelLoadedAtLocation
// Size: 0x18(Inherited: 0x0) 
struct FIsEveryStreamedLevelLoadedAtLocation
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ReturnValue : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function ConZ.WorldStatics.IsLocationInCustomZone
// Size: 0x18(Inherited: 0x0) 
struct FIsLocationInCustomZone
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ReturnValue : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function ConZ.WorldStatics.IsLocationOverWaterSurface
// Size: 0x18(Inherited: 0x0) 
struct FIsLocationOverWaterSurface
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ReturnValue : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function ConZ.Wristwatch.SetDisplayBrightness
// Size: 0x4(Inherited: 0x0) 
struct FSetDisplayBrightness
{
	float Value;  // 0x0(0x4)

}; 
// Function ConZ.YesNoDialog.SetDialogMessage
// Size: 0x18(Inherited: 0x0) 
struct FSetDialogMessage
{
	struct FText Value;  // 0x0(0x18)

}; 
