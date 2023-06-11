#pragma once 
#include <MovieScene_Structs.h>
 
 
 
// Class MovieScene.TestMovieSceneSubSection
// Size: 0x168(Inherited: 0x168) 
struct UTestMovieSceneSubSection : public UMovieSceneSubSection
{

}; 



// Class MovieScene.MovieSceneTrack
// Size: 0x90(Inherited: 0x50) 
struct UMovieSceneTrack : public UMovieSceneSignedObject
{
	struct FMovieSceneTrackEvalOptions EvalOptions;  // 0x50(0x4)
	char pad_84[1];  // 0x54(0x1)
	char pad_85_1 : 7;  // 0x55(0x1)
	bool bIsEvalDisabled : 1;  // 0x55(0x1)
	char pad_86[2];  // 0x56(0x2)
	struct TArray<int32_t> RowsDisabled;  // 0x58(0x10)
	char pad_104[4];  // 0x68(0x4)
	struct FGuid EvaluationFieldGuid;  // 0x6C(0x10)
	char pad_124[4];  // 0x7C(0x4)
	struct FMovieSceneTrackEvaluationField EvaluationField;  // 0x80(0x10)

}; 



// Class MovieScene.TestMovieSceneSequence
// Size: 0x68(Inherited: 0x60) 
struct UTestMovieSceneSequence : public UMovieSceneSequence
{
	struct UMovieScene* MovieScene;  // 0x60(0x8)

}; 



// Class MovieScene.MovieSceneSubSection
// Size: 0x168(Inherited: 0xE8) 
struct UMovieSceneSubSection : public UMovieSceneSection
{
	struct FMovieSceneSectionParameters parameters;  // 0xE8(0x24)
	float StartOffset;  // 0x10C(0x4)
	float TimeScale;  // 0x110(0x4)
	float PrerollTime;  // 0x114(0x4)
	char NetworkMask;  // 0x118(0x1)
	char pad_281[7];  // 0x119(0x7)
	struct UMovieSceneSequence* SubSequence;  // 0x120(0x8)
	 ActorToRecord;  // 0x128(0x1C)
	char pad_324[4];  // 0x144(0x4)
	struct FString TargetSequenceName;  // 0x148(0x10)
	struct FDirectoryPath TargetPathToRecordTo;  // 0x158(0x10)

	void SetSequence(struct UMovieSceneSequence* Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence
}; 



// Class MovieScene.MovieSceneEvaluationHookSystem
// Size: 0x90(Inherited: 0x40) 
struct UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{
	struct TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;  // 0x40(0x50)

}; 



// Class MovieScene.MovieSceneSignedObject
// Size: 0x50(Inherited: 0x28) 
struct UMovieSceneSignedObject : public UObject
{
	struct FGuid Signature;  // 0x28(0x10)
	char pad_56[24];  // 0x38(0x18)

}; 



// Class MovieScene.MovieSceneSection
// Size: 0xE8(Inherited: 0x50) 
struct UMovieSceneSection : public UMovieSceneSignedObject
{
	struct FMovieSceneSectionEvalOptions EvalOptions;  // 0x50(0x2)
	char pad_82[6];  // 0x52(0x6)
	struct FMovieSceneEasingSettings Easing;  // 0x58(0x38)
	struct FMovieSceneFrameRange SectionRange;  // 0x90(0x10)
	struct FFrameNumber PreRollFrames;  // 0xA0(0x4)
	struct FFrameNumber PostRollFrames;  // 0xA4(0x4)
	int32_t RowIndex;  // 0xA8(0x4)
	int32_t OverlapPriority;  // 0xAC(0x4)
	char bIsActive : 1;  // 0xB0(0x1)
	char bIsLocked : 1;  // 0xB0(0x1)
	char pad_176_1 : 6;  // 0xB0(0x1)
	char pad_177[4];  // 0xB1(0x4)
	float StartTime;  // 0xB4(0x4)
	float EndTime;  // 0xB8(0x4)
	float PrerollTime;  // 0xBC(0x4)
	float PostrollTime;  // 0xC0(0x4)
	char bIsInfinite : 1;  // 0xC4(0x1)
	char pad_196_1 : 7;  // 0xC4(0x1)
	char pad_197[4];  // 0xC5(0x4)
	char pad_200_1 : 7;  // 0xC8(0x1)
	bool bSupportsInfiniteRange : 1;  // 0xC8(0x1)
	struct FOptionalMovieSceneBlendType BlendType;  // 0xC9(0x2)
	char pad_203[29];  // 0xCB(0x1D)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority
	void SetIsLocked(bool bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked
	void SetIsActive(bool bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive
	void SetCompletionMode(uint8_t  InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode
	void SetBlendType(uint8_t  InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType
	bool IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked
	bool IsActive(); // Function MovieScene.MovieSceneSection.IsActive
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority
	uint8_t  GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode
	struct FOptionalMovieSceneBlendType GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType
}; 



// Class MovieScene.NodeAndChannelMappings
// Size: 0x28(Inherited: 0x28) 
struct UNodeAndChannelMappings : public UInterface
{

}; 



// Class MovieScene.MovieSceneSequence
// Size: 0x60(Inherited: 0x50) 
struct UMovieSceneSequence : public UMovieSceneSignedObject
{
	struct UMovieSceneCompiledData* CompiledData;  // 0x50(0x8)
	uint8_t  DefaultCompletionMode;  // 0x58(0x1)
	char pad_89_1 : 7;  // 0x59(0x1)
	bool bParentContextsAreSignificant : 1;  // 0x59(0x1)
	char pad_90_1 : 7;  // 0x5A(0x1)
	bool bPlayableDirectly : 1;  // 0x5A(0x1)
	uint8_t  SequenceFlags;  // 0x5B(0x1)
	char pad_92[4];  // 0x5C(0x4)

	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag
}; 



// Class MovieScene.MovieSceneSequencePlayer
// Size: 0x4E8(Inherited: 0x28) 
struct UMovieSceneSequencePlayer : public UObject
{
	char pad_40[568];  // 0x28(0x238)
	struct FMulticastInlineDelegate OnPlay;  // 0x260(0x10)
	struct FMulticastInlineDelegate OnPlayReverse;  // 0x270(0x10)
	struct FMulticastInlineDelegate OnStop;  // 0x280(0x10)
	struct FMulticastInlineDelegate OnPause;  // 0x290(0x10)
	struct FMulticastInlineDelegate OnFinished;  // 0x2A0(0x10)
	char EMovieScenePlayerStatus Status;  // 0x2B0(0x1)
	char pad_689[3];  // 0x2B1(0x3)
	char bReversePlayback : 1;  // 0x2B4(0x1)
	char pad_692_1 : 7;  // 0x2B4(0x1)
	char pad_693[4];  // 0x2B5(0x4)
	struct UMovieSceneSequence* Sequence;  // 0x2B8(0x8)
	struct FFrameNumber StartTime;  // 0x2C0(0x4)
	int32_t DurationFrames;  // 0x2C4(0x4)
	float DurationSubFrames;  // 0x2C8(0x4)
	int32_t CurrentNumLoops;  // 0x2CC(0x4)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;  // 0x2D0(0x14)
	char pad_740[4];  // 0x2E4(0x4)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // 0x2E8(0xE8)
	char pad_976[104];  // 0x3D0(0x68)
	struct FMovieSceneSequenceReplProperties NetSyncProps;  // 0x438(0x10)
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient;  // 0x448(0x10)
	struct UMovieSceneSequenceTickManager* TickManager;  // 0x458(0x8)
	char pad_1120[136];  // 0x460(0x88)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop
	void SetTimeRange(float StartTime, float Duration); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
	void SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams PlaybackParams); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	void SetFrameRate(struct FFrameRate FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
	void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
	void SetDisableCameraCuts(bool bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	void ScrubToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
	bool ScrubToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
	void ScrubToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub
	void RPC_OnStopEvent(struct FFrameTime StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
	void RPC_ExplicitServerUpdateEvent(uint8_t  Method, struct FFrameTime RelevantTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
	void RestoreState(); // Function MovieScene.MovieSceneSequencePlayer.RestoreState
	void PlayToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
	bool PlayToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
	void PlayToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
	void PlayTo(struct FMovieSceneSequencePlaybackParams PlaybackParams); // Function MovieScene.MovieSceneSequencePlayer.PlayTo
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse
	void PlayLooping(int32_t NumLoops); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause
	void JumpToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
	bool JumpToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
	void JumpToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
	bool IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed
	bool IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying
	bool IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	struct FQualifiedFrameTime GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSequencePlayer.GetSequence
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
	struct FFrameRate GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
	struct FQualifiedFrameTime GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime
	struct FQualifiedFrameTime GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration
	bool GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	struct FQualifiedFrameTime GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
}; 



// Class MovieScene.MovieSceneCompiledDataManager
// Size: 0x230(Inherited: 0x28) 
struct UMovieSceneCompiledDataManager : public UObject
{
	char pad_40[176];  // 0x28(0xB0)
	struct TMap<int32_t, struct FMovieSceneSequenceHierarchy> Hierarchies;  // 0xD8(0x50)
	struct TMap<int32_t, struct FMovieSceneEvaluationTemplate> TrackTemplates;  // 0x128(0x50)
	struct TMap<int32_t, struct FMovieSceneEvaluationField> TrackTemplateFields;  // 0x178(0x50)
	struct TMap<int32_t, struct FMovieSceneEntityComponentField> EntityComponentFields;  // 0x1C8(0x50)
	char pad_536[24];  // 0x218(0x18)

}; 



// Class MovieScene.MovieSceneEntitySystem
// Size: 0x40(Inherited: 0x28) 
struct UMovieSceneEntitySystem : public UObject
{
	struct UMovieSceneEntitySystemLinker* Linker;  // 0x28(0x8)
	char pad_48[16];  // 0x30(0x10)

}; 



// Class MovieScene.MovieSceneSpawnTrack
// Size: 0xB0(Inherited: 0x90) 
struct UMovieSceneSpawnTrack : public UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x90(0x10)
	struct FGuid ObjectGuid;  // 0xA0(0x10)

}; 



// Class MovieScene.MovieSceneNameableTrack
// Size: 0x90(Inherited: 0x90) 
struct UMovieSceneNameableTrack : public UMovieSceneTrack
{

}; 



// Class MovieScene.MovieSceneDeterminismSource
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneDeterminismSource : public UInterface
{

}; 



// Class MovieScene.MovieSceneSubTrack
// Size: 0xA0(Inherited: 0x90) 
struct UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x90(0x10)

}; 



// Class MovieScene.MovieSceneTrackInstanceSystem
// Size: 0x48(Inherited: 0x40) 
struct UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
	struct UMovieSceneTrackInstanceInstantiator* Instantiator;  // 0x40(0x8)

}; 



// Class MovieScene.MovieSceneCustomClockSource
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneCustomClockSource : public UInterface
{

	void OnTick(float DeltaSeconds, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnTick
	void OnStopPlaying(struct FQualifiedFrameTime& InStopTime); // Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
	void OnStartPlaying(struct FQualifiedFrameTime& InStartTime); // Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
}; 



// Class MovieScene.MovieSceneEntityProvider
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneEntityProvider : public UInterface
{

}; 



// Class MovieScene.TestMovieSceneSubTrack
// Size: 0xB0(Inherited: 0xA0) 
struct UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
	struct TArray<struct UMovieSceneSection*> SectionArray;  // 0xA0(0x10)

}; 



// Class MovieScene.MovieSceneEvaluationHook
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneEvaluationHook : public UInterface
{

}; 



// Class MovieScene.MovieScenePlaybackClient
// Size: 0x28(Inherited: 0x28) 
struct UMovieScenePlaybackClient : public UInterface
{

}; 



// Class MovieScene.TestMovieSceneSection
// Size: 0xE8(Inherited: 0xE8) 
struct UTestMovieSceneSection : public UMovieSceneSection
{

}; 



// Class MovieScene.MovieSceneEntitySystemLinker
// Size: 0x4F0(Inherited: 0x28) 
struct UMovieSceneEntitySystemLinker : public UObject
{
	char pad_40[624];  // 0x28(0x270)
	struct FMovieSceneEntitySystemGraph SystemGraph;  // 0x298(0x138)
	char pad_976[288];  // 0x3D0(0x120)

}; 



// Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 0x40(Inherited: 0x40) 
struct UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{

}; 



// Class MovieScene.MovieSceneTrackTemplateProducer
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneTrackTemplateProducer : public UInterface
{

}; 



// Class MovieScene.MovieSceneNodeGroup
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneNodeGroup : public UObject
{

}; 



// Class MovieScene.TestMovieSceneEvalHookSection
// Size: 0x118(Inherited: 0x100) 
struct UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{
	char pad_256[24];  // 0x100(0x18)

}; 



// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// Size: 0x40(Inherited: 0x40) 
struct UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{

}; 



// Class MovieScene.MovieSceneNodeGroupCollection
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneNodeGroupCollection : public UObject
{

}; 



// Class MovieScene.MovieScene
// Size: 0x148(Inherited: 0x50) 
struct UMovieScene : public UMovieSceneSignedObject
{
	struct TArray<struct FMovieSceneSpawnable> Spawnables;  // 0x50(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables;  // 0x60(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings;  // 0x70(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups;  // 0x80(0x50)
	struct TArray<struct UMovieSceneTrack*> MasterTracks;  // 0xD0(0x10)
	struct UMovieSceneTrack* CameraCutTrack;  // 0xE0(0x8)
	struct FMovieSceneFrameRange SelectionRange;  // 0xE8(0x10)
	struct FMovieSceneFrameRange PlaybackRange;  // 0xF8(0x10)
	struct FFrameRate TickResolution;  // 0x108(0x8)
	struct FFrameRate DisplayRate;  // 0x110(0x8)
	uint8_t  EvaluationType;  // 0x118(0x1)
	uint8_t  ClockSource;  // 0x119(0x1)
	char pad_282[6];  // 0x11A(0x6)
	struct FSoftObjectPath CustomClockSourcePath;  // 0x120(0x18)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames;  // 0x138(0x10)

}; 



// Class MovieScene.MovieSceneBindingOverrides
// Size: 0x90(Inherited: 0x28) 
struct UMovieSceneBindingOverrides : public UObject
{
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData;  // 0x28(0x10)
	char pad_56[88];  // 0x38(0x58)

}; 



// Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneBindingOwnerInterface : public UInterface
{

}; 



// Class MovieScene.MovieSceneBlenderSystem
// Size: 0x68(Inherited: 0x40) 
struct UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
	char pad_64[40];  // 0x40(0x28)

}; 



// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// Size: 0x60(Inherited: 0x40) 
struct UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
	char pad_64[32];  // 0x40(0x20)

}; 



// Class MovieScene.MovieSceneBoolSection
// Size: 0x180(Inherited: 0xE8) 
struct UMovieSceneBoolSection : public UMovieSceneSection
{
	char pad_232_1 : 7;  // 0xE8(0x1)
	bool DefaultValue : 1;  // 0xE8(0x1)
	char pad_233[7];  // 0xE9(0x7)
	struct FMovieSceneBoolChannel BoolCurve;  // 0xF0(0x90)

}; 



// Class MovieScene.MovieSceneFolder
// Size: 0x70(Inherited: 0x28) 
struct UMovieSceneFolder : public UObject
{
	struct FName FolderName;  // 0x28(0x8)
	struct TArray<struct UMovieSceneFolder*> ChildFolders;  // 0x30(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks;  // 0x40(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings;  // 0x50(0x10)
	char pad_96[16];  // 0x60(0x10)

}; 



// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
// Size: 0x40(Inherited: 0x40) 
struct UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{

}; 



// Class MovieScene.MovieSceneSceneComponentImpersonator
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneSceneComponentImpersonator : public UInterface
{

}; 



// Class MovieScene.MovieSceneTrackInstanceInstantiator
// Size: 0xF0(Inherited: 0x40) 
struct UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
	char pad_64[176];  // 0x40(0xB0)

}; 



// Class MovieScene.MovieSceneCompiledData
// Size: 0x3F8(Inherited: 0x28) 
struct UMovieSceneCompiledData : public UObject
{
	struct FMovieSceneEvaluationTemplate EvaluationTemplate;  // 0x28(0x160)
	struct FMovieSceneSequenceHierarchy Hierarchy;  // 0x188(0x118)
	struct FMovieSceneEntityComponentField EntityComponentField;  // 0x2A0(0xF0)
	struct FMovieSceneEvaluationField TrackTemplateField;  // 0x390(0x30)
	struct TArray<struct FFrameTime> DeterminismFences;  // 0x3C0(0x10)
	struct FGuid CompiledSignature;  // 0x3D0(0x10)
	struct FGuid CompilerVersion;  // 0x3E0(0x10)
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask;  // 0x3F0(0x1)
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask;  // 0x3F1(0x1)
	uint8_t  AccumulatedFlags;  // 0x3F2(0x1)
	char pad_1011[5];  // 0x3F3(0x5)

}; 



// Class MovieScene.MovieSceneFloatDecomposer
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneFloatDecomposer : public UInterface
{

}; 



// Class MovieScene.MovieSceneSpawnSection
// Size: 0x188(Inherited: 0x180) 
struct UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
	char pad_384[8];  // 0x180(0x8)

}; 



// Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x38(Inherited: 0x28) 
struct UMovieSceneBuiltInEasingFunction : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	uint8_t  Type;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 



// Class MovieScene.TestMovieSceneTrack
// Size: 0xB0(Inherited: 0x90) 
struct UTestMovieSceneTrack : public UMovieSceneTrack
{
	char pad_144[8];  // 0x90(0x8)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool bHighPassFilter : 1;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)
	struct TArray<struct UMovieSceneSection*> SectionArray;  // 0xA0(0x10)

}; 



// Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x38(Inherited: 0x28) 
struct UMovieSceneEasingExternalCurve : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UCurveFloat* Curve;  // 0x30(0x8)

}; 



// Class MovieScene.MovieSceneEasingFunction
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneEasingFunction : public UInterface
{

	float OnEvaluate(float Interp); // Function MovieScene.MovieSceneEasingFunction.OnEvaluate
}; 



// Class MovieScene.MovieSceneEvalTimeSystem
// Size: 0x50(Inherited: 0x40) 
struct UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
	char pad_64[16];  // 0x40(0x10)

}; 



// Class MovieScene.MovieSceneHookSection
// Size: 0x100(Inherited: 0xE8) 
struct UMovieSceneHookSection : public UMovieSceneSection
{
	char pad_232[16];  // 0xE8(0x10)
	char bRequiresRangedHook : 1;  // 0xF8(0x1)
	char bRequiresTriggerHooks : 1;  // 0xF8(0x1)
	char pad_248_1 : 6;  // 0xF8(0x1)
	char pad_249[8];  // 0xF9(0x8)

}; 



// Class MovieScene.MovieSceneKeyProxy
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneKeyProxy : public UInterface
{

}; 



// Class MovieScene.MovieSceneMasterInstantiatorSystem
// Size: 0x40(Inherited: 0x40) 
struct UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{

}; 



// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// Size: 0x28(Inherited: 0x28) 
struct UMovieScenePreAnimatedStateSystemInterface : public UInterface
{

}; 



// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// Size: 0x50(Inherited: 0x40) 
struct UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
	char pad_64[16];  // 0x40(0x10)

}; 



// Class MovieScene.MovieSceneSequenceActor
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneSequenceActor : public UInterface
{

}; 



// Class MovieScene.MovieSceneSequenceTickManager
// Size: 0xD0(Inherited: 0x28) 
struct UMovieSceneSequenceTickManager : public UObject
{
	struct TArray<struct FMovieSceneSequenceActorPointers> SequenceActors;  // 0x28(0x10)
	struct UMovieSceneEntitySystemLinker* Linker;  // 0x38(0x8)
	char pad_64[144];  // 0x40(0x90)

}; 



// Class MovieScene.MovieSceneSpawnablesSystem
// Size: 0x40(Inherited: 0x40) 
struct UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{

}; 



// Class MovieScene.TestMovieSceneEvalHookTrack
// Size: 0xA0(Inherited: 0x90) 
struct UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> SectionArray;  // 0x90(0x10)

}; 



// Class MovieScene.MovieSceneTrackInstance
// Size: 0x50(Inherited: 0x28) 
struct UMovieSceneTrackInstance : public UObject
{
	struct UObject* AnimatedObject;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bIsMasterTrackInstance : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)
	struct UMovieSceneEntitySystemLinker* Linker;  // 0x38(0x8)
	struct TArray<struct FMovieSceneTrackInstanceInput> Inputs;  // 0x40(0x10)

}; 



