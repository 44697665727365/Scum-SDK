#pragma once 
#include "SDK.h" 
 
 
// Function LevelSequence.LevelSequence.FindMetaDataByClass
// Size: 0x10(Inherited: 0x0) 
struct FFindMetaDataByClass
{
	UObject* InClass;  // 0x0(0x8)
	struct UObject* ReturnValue;  // 0x8(0x8)

}; 
// Function LevelSequence.LevelSequenceActor.RemoveBinding
// Size: 0x20(Inherited: 0x0) 
struct FRemoveBinding
{
	struct FMovieSceneObjectBindingID Binding;  // 0x0(0x18)
	struct AActor* Actor;  // 0x18(0x8)

}; 
// DelegateFunction LevelSequence.OnLevelSequencePlayerCameraCutEvent__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnLevelSequencePlayerCameraCutEvent__DelegateSignature
{
	struct UCameraComponent* CameraComponent;  // 0x0(0x8)

}; 
// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// Size: 0x38(Inherited: 0x0) 
struct FCreateLevelSequencePlayer
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct ULevelSequence* LevelSequence;  // 0x8(0x8)
	struct FMovieSceneSequencePlaybackSettings Settings;  // 0x10(0x14)
	char pad_36[4];  // 0x24(0x4)
	struct ALevelSequenceActor* OutActor;  // 0x28(0x8)
	struct ULevelSequencePlayer* ReturnValue;  // 0x30(0x8)

}; 
// Function LevelSequence.LevelSequenceActor.AddBinding
// Size: 0x28(Inherited: 0x0) 
struct FAddBinding
{
	struct FMovieSceneObjectBindingID Binding;  // 0x0(0x18)
	struct AActor* Actor;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bAllowBindingsFromAsset : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetMediaComponent
{
	struct UMediaComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function LevelSequence.LevelSequenceActor.LoadSequence
// Size: 0x8(Inherited: 0x0) 
struct FLoadSequence
{
	struct ULevelSequence* ReturnValue;  // 0x0(0x8)

}; 
// Function LevelSequence.LevelSequenceActor.SetBinding
// Size: 0x30(Inherited: 0x0) 
struct FSetBinding
{
	struct FMovieSceneObjectBindingID Binding;  // 0x0(0x18)
	struct TArray<struct AActor*> Actors;  // 0x18(0x10)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bAllowBindingsFromAsset : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)

}; 
// Function LevelSequence.LevelSequenceActor.AddBindingByTag
// Size: 0x18(Inherited: 0x0) 
struct FAddBindingByTag
{
	struct FName BindingTag;  // 0x0(0x8)
	struct AActor* Actor;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bAllowBindingsFromAsset : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function LevelSequence.LevelSequenceActor.FindNamedBinding
// Size: 0x20(Inherited: 0x0) 
struct FFindNamedBinding
{
	struct FName Tag;  // 0x0(0x8)
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x8(0x18)

}; 
// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
// Size: 0x10(Inherited: 0x0) 
struct FRemoveBindingByTag
{
	struct FName Tag;  // 0x0(0x8)
	struct AActor* Actor;  // 0x8(0x8)

}; 
// Function LevelSequence.LevelSequenceActor.FindNamedBindings
// Size: 0x18(Inherited: 0x0) 
struct FFindNamedBindings
{
	struct FName Tag;  // 0x0(0x8)
	struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;  // 0x8(0x10)

}; 
// ScriptStruct LevelSequence.LevelSequenceBindingReference
// Size: 0x38(Inherited: 0x0) 
struct FLevelSequenceBindingReference
{
	struct FString PackageName;  // 0x0(0x10)
	struct FSoftObjectPath ExternalObjectPath;  // 0x10(0x18)
	struct FString ObjectPath;  // 0x28(0x10)

}; 
// Function LevelSequence.LevelSequenceMediaController.GetSequence
// Size: 0x8(Inherited: 0x0) 
struct FGetSequence
{
	struct ALevelSequenceActor* ReturnValue;  // 0x0(0x8)

}; 
// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
// Size: 0x8(Inherited: 0x0) 
struct FGetSequencePlayer
{
	struct ULevelSequencePlayer* ReturnValue;  // 0x0(0x8)

}; 
// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetActiveCameraComponent
{
	struct UCameraComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function LevelSequence.LevelSequenceActor.ResetBinding
// Size: 0x18(Inherited: 0x0) 
struct FResetBinding
{
	struct FMovieSceneObjectBindingID Binding;  // 0x0(0x18)

}; 
// ScriptStruct LevelSequence.LevelSequenceObject
// Size: 0x38(Inherited: 0x0) 
struct FLevelSequenceObject
{
	 ObjectOrOwner;  // 0x0(0x1C)
	char pad_28[4];  // 0x1C(0x4)
	struct FString ComponentName;  // 0x20(0x10)
	struct TWeakObjectPtr<UObject> CachedComponent;  // 0x30(0x8)

}; 
// Function LevelSequence.LevelSequenceActor.SetBindingByTag
// Size: 0x20(Inherited: 0x0) 
struct FSetBindingByTag
{
	struct FName BindingTag;  // 0x0(0x8)
	struct TArray<struct AActor*> Actors;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bAllowBindingsFromAsset : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
// Size: 0x1(Inherited: 0x0) 
struct FSetReplicatePlayback
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReplicatePlayback : 1;  // 0x0(0x1)

}; 
// ScriptStruct LevelSequence.LevelSequenceCameraSettings
// Size: 0x2(Inherited: 0x0) 
struct FLevelSequenceCameraSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bOverrideAspectRatioAxisConstraint : 1;  // 0x0(0x1)
	char EAspectRatioAxisConstraint AspectRatioAxisConstraint;  // 0x1(0x1)

}; 
// Function LevelSequence.LevelSequenceActor.SetSequence
// Size: 0x8(Inherited: 0x0) 
struct FSetSequence
{
	struct ULevelSequence* InSequence;  // 0x0(0x8)

}; 
// ScriptStruct LevelSequence.BoundActorProxy
// Size: 0x1(Inherited: 0x0) 
struct FBoundActorProxy
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
// Size: 0x30(Inherited: 0x0) 
struct FLevelSequenceAnimSequenceLinkItem
{
	struct FGuid SkelTrackGuid;  // 0x0(0x10)
	struct FSoftObjectPath PathToAnimSequence;  // 0x10(0x18)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bExportTransforms : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool bExportCurves : 1;  // 0x29(0x1)
	char pad_42_1 : 7;  // 0x2A(0x1)
	bool bRecordInWorldSpace : 1;  // 0x2A(0x1)
	char pad_43[5];  // 0x2B(0x5)

}; 
// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// Size: 0xA0(Inherited: 0x0) 
struct FLevelSequenceBindingReferences
{
	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;  // 0x0(0x50)
	struct TSet<struct FGuid> AnimSequenceInstances;  // 0x50(0x50)

}; 
// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// Size: 0x10(Inherited: 0x0) 
struct FLevelSequenceBindingReferenceArray
{
	struct TArray<struct FLevelSequenceBindingReference> References;  // 0x0(0x10)

}; 
// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// Size: 0x8(Inherited: 0x0) 
struct FGetSettingsClass
{
	ULevelSequenceBurnInInitSettings* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// Size: 0x50(Inherited: 0x0) 
struct FLevelSequenceObjectReferenceMap
{
	char pad_0[80];  // 0x0(0x50)

}; 
// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// Size: 0x20(Inherited: 0x0) 
struct FLevelSequenceLegacyObjectReference
{
	char pad_0[32];  // 0x0(0x20)

}; 
// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// Size: 0xB8(Inherited: 0x0) 
struct FLevelSequencePlayerSnapshot
{
	struct FString MasterName;  // 0x0(0x10)
	struct FQualifiedFrameTime MasterTime;  // 0x10(0x10)
	struct FQualifiedFrameTime SourceTime;  // 0x20(0x10)
	struct FString CurrentShotName;  // 0x30(0x10)
	struct FQualifiedFrameTime CurrentShotLocalTime;  // 0x40(0x10)
	struct FQualifiedFrameTime CurrentShotSourceTime;  // 0x50(0x10)
	struct FString SourceTimecode;  // 0x60(0x10)
	struct TSoftObjectPtr<UCameraComponent> CameraComponent;  // 0x70(0x28)
	struct FLevelSequenceSnapshotSettings Settings;  // 0x98(0xC)
	char pad_164[4];  // 0xA4(0x4)
	struct ULevelSequence* ActiveShot;  // 0xA8(0x8)
	struct FMovieSceneSequenceID ShotID;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)

}; 
// Function LevelSequence.LevelSequence.CopyMetaData
// Size: 0x10(Inherited: 0x0) 
struct FCopyMetaData
{
	struct UObject* InMetaData;  // 0x0(0x8)
	struct UObject* ReturnValue;  // 0x8(0x8)

}; 
// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// Size: 0xC(Inherited: 0x0) 
struct FLevelSequenceSnapshotSettings
{
	char ZeroPadAmount;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FFrameRate FrameRate;  // 0x4(0x8)

}; 
// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
// Size: 0x10(Inherited: 0x0) 
struct FFindOrAddMetaDataByClass
{
	UObject* InClass;  // 0x0(0x8)
	struct UObject* ReturnValue;  // 0x8(0x8)

}; 
// Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
// Size: 0x4(Inherited: 0x0) 
struct FSynchronizeToServer
{
	float DesyncThresholdSeconds;  // 0x0(0x4)

}; 
// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
// Size: 0x8(Inherited: 0x0) 
struct FRemoveMetaDataByClass
{
	UObject* InClass;  // 0x0(0x8)

}; 
// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
// Size: 0x18(Inherited: 0x0) 
struct FSetBurnIn
{
	struct FSoftClassPath InBurnInClass;  // 0x0(0x18)

}; 
// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// Size: 0x8(Inherited: 0x0) 
struct FSetSettings
{
	struct UObject* InSettings;  // 0x0(0x8)

}; 
// Function LevelSequence.LevelSequenceDirector.GetBoundActor
// Size: 0x20(Inherited: 0x0) 
struct FGetBoundActor
{
	struct FMovieSceneObjectBindingID ObjectBinding;  // 0x0(0x18)
	struct AActor* ReturnValue;  // 0x18(0x8)

}; 
// Function LevelSequence.LevelSequenceDirector.GetBoundActors
// Size: 0x28(Inherited: 0x0) 
struct FGetBoundActors
{
	struct FMovieSceneObjectBindingID ObjectBinding;  // 0x0(0x18)
	struct TArray<struct AActor*> ReturnValue;  // 0x18(0x10)

}; 
// Function LevelSequence.LevelSequenceDirector.GetBoundObject
// Size: 0x20(Inherited: 0x0) 
struct FGetBoundObject
{
	struct FMovieSceneObjectBindingID ObjectBinding;  // 0x0(0x18)
	struct UObject* ReturnValue;  // 0x18(0x8)

}; 
// Function LevelSequence.LevelSequenceDirector.GetBoundObjects
// Size: 0x28(Inherited: 0x0) 
struct FGetBoundObjects
{
	struct FMovieSceneObjectBindingID ObjectBinding;  // 0x0(0x18)
	struct TArray<struct UObject*> ReturnValue;  // 0x18(0x10)

}; 
