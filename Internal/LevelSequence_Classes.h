#pragma once 
#include <LevelSequence_Structs.h>
 
 
 
// Class LevelSequence.LevelSequenceMediaController
// Size: 0x248(Inherited: 0x220) 
struct ALevelSequenceMediaController : public AActor
{
	char pad_544[8];  // 0x220(0x8)
	struct ALevelSequenceActor* Sequence;  // 0x228(0x8)
	struct UMediaComponent* MediaComponent;  // 0x230(0x8)
	float ServerStartTimeSeconds;  // 0x238(0x4)
	char pad_572[12];  // 0x23C(0xC)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	struct ALevelSequenceActor* GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence
	struct UMediaComponent* GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
}; 



// Class LevelSequence.LevelSequence
// Size: 0x1C8(Inherited: 0x60) 
struct ULevelSequence : public UMovieSceneSequence
{
	char pad_96[8];  // 0x60(0x8)
	struct UMovieScene* MovieScene;  // 0x68(0x8)
	struct FLevelSequenceObjectReferenceMap ObjectReferences;  // 0x70(0x50)
	struct FLevelSequenceBindingReferences BindingReferences;  // 0xC0(0xA0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects;  // 0x160(0x50)
	UObject* DirectorClass;  // 0x1B0(0x8)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x1B8(0x10)

	void RemoveMetaDataByClass(UObject* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass
	struct UObject* FindOrAddMetaDataByClass(UObject* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	struct UObject* FindMetaDataByClass(UObject* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass
	struct UObject* CopyMetaData(struct UObject* InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData
}; 



// Class LevelSequence.AnimSequenceLevelSequenceLink
// Size: 0x50(Inherited: 0x28) 
struct UAnimSequenceLevelSequenceLink : public UAssetUserData
{
	struct FGuid SkelTrackGuid;  // 0x28(0x10)
	struct FSoftObjectPath PathToLevelSequence;  // 0x38(0x18)

}; 



// Class LevelSequence.LevelSequenceAnimSequenceLink
// Size: 0x38(Inherited: 0x28) 
struct ULevelSequenceAnimSequenceLink : public UAssetUserData
{
	struct TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;  // 0x28(0x10)

}; 



// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50(Inherited: 0x28) 
struct ULevelSequenceBurnInOptions : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bUseBurnIn : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct FSoftClassPath BurnInClass;  // 0x30(0x18)
	struct ULevelSequenceBurnInInitSettings* Settings;  // 0x48(0x8)

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
}; 



// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x70(Inherited: 0x28) 
struct UDefaultLevelSequenceInstanceData : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct AActor* TransformOriginActor;  // 0x30(0x8)
	char pad_56[8];  // 0x38(0x8)
	struct FTransform TransformOrigin;  // 0x40(0x30)

}; 



// Class LevelSequence.LevelSequenceMetaData
// Size: 0x28(Inherited: 0x28) 
struct ULevelSequenceMetaData : public UInterface
{

}; 



// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28(Inherited: 0x28) 
struct ULevelSequenceBurnInInitSettings : public UObject
{

}; 



// Class LevelSequence.LevelSequenceActor
// Size: 0x2A8(Inherited: 0x220) 
struct ALevelSequenceActor : public AActor
{
	char pad_544[24];  // 0x220(0x18)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;  // 0x238(0x14)
	char pad_588[4];  // 0x24C(0x4)
	struct ULevelSequencePlayer* SequencePlayer;  // 0x250(0x8)
	struct FSoftObjectPath LevelSequence;  // 0x258(0x18)
	struct FLevelSequenceCameraSettings CameraSettings;  // 0x270(0x2)
	char pad_626[6];  // 0x272(0x6)
	struct ULevelSequenceBurnInOptions* BurnInOptions;  // 0x278(0x8)
	struct UMovieSceneBindingOverrides* BindingOverrides;  // 0x280(0x8)
	char bAutoPlay : 1;  // 0x288(0x1)
	char bOverrideInstanceData : 1;  // 0x288(0x1)
	char bReplicatePlayback : 1;  // 0x288(0x1)
	char pad_648_1 : 5;  // 0x288(0x1)
	char pad_649[8];  // 0x289(0x8)
	struct UObject* DefaultInstanceData;  // 0x290(0x8)
	struct ULevelSequenceBurnIn* BurnInInstance;  // 0x298(0x8)
	char pad_672_1 : 7;  // 0x2A0(0x1)
	bool bShowBurnin : 1;  // 0x2A0(0x1)
	char pad_673[7];  // 0x2A1(0x7)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin
	void SetSequence(struct ULevelSequence* InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence
	void SetReplicatePlayback(bool ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	struct ULevelSequence* LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin
	struct ULevelSequencePlayer* GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer
	struct ULevelSequence* GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding
}; 



// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x320(Inherited: 0x260) 
struct ULevelSequenceBurnIn : public UUserWidget
{
	struct FLevelSequencePlayerSnapshot FrameInformation;  // 0x260(0xB8)
	struct ALevelSequenceActor* LevelSequenceActor;  // 0x318(0x8)

	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings
	ULevelSequenceBurnInInitSettings* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
}; 



// Class LevelSequence.LevelSequenceDirector
// Size: 0x38(Inherited: 0x28) 
struct ULevelSequenceDirector : public UObject
{
	struct ULevelSequencePlayer* Player;  // 0x28(0x8)
	int32_t SubSequenceID;  // 0x30(0x4)
	int32_t MovieScenePlayerIndex;  // 0x34(0x4)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated
	struct UMovieSceneSequence* GetSequence(); // Function LevelSequence.LevelSequenceDirector.GetSequence
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundObjects
	struct UObject* GetBoundObject(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundObject
	struct TArray<struct AActor*> GetBoundActors(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundActors
	struct AActor* GetBoundActor(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundActor
}; 



// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xA0(Inherited: 0xA0) 
struct ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{

}; 



// Class LevelSequence.LevelSequencePlayer
// Size: 0x600(Inherited: 0x4E8) 
struct ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
	struct FMulticastInlineDelegate OnCameraCut;  // 0x4E8(0x10)
	char pad_1272[264];  // 0x4F8(0x108)

	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
}; 



// Class LevelSequence.LevelSequenceProjectSettings
// Size: 0x68(Inherited: 0x38) 
struct ULevelSequenceProjectSettings : public UDeveloperSettings
{
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bDefaultLockEngineToDisplayRate : 1;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)
	struct FString DefaultDisplayRate;  // 0x40(0x10)
	struct FString DefaultTickResolution;  // 0x50(0x10)
	uint8_t  DefaultClockSource;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 



