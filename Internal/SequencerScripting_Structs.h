#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct SequencerScripting.SequencerBindingProxy
// Size: 0x18(Inherited: 0x0) 
struct FSequencerBindingProxy
{
	struct FGuid BindingID;  // 0x0(0x10)
	struct UMovieSceneSequence* Sequence;  // 0x10(0x8)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
// Size: 0x4(Inherited: 0x0) 
struct FGetArriveTangent
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
// Size: 0x18(Inherited: 0x0) 
struct FRemoveChildFolder
{
	struct UMovieSceneFolder* TargetFolder;  // 0x0(0x8)
	struct UMovieSceneFolder* FolderToRemove;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
// Size: 0x14(Inherited: 0x0) 
struct FComputeEffectiveRange
{
	struct FSequencerScriptingRange ReturnValue;  // 0x0(0x14)

}; 
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
// Size: 0x10(Inherited: 0x0) 
struct FGetUniqueTrackName
{
	struct UMovieScenePropertyTrack* Track;  // 0x0(0x8)
	struct FName ReturnValue;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName
// Size: 0x10(Inherited: 0x0) 
struct FGetFolderName
{
	struct UMovieSceneFolder* Folder;  // 0x0(0x8)
	struct FName ReturnValue;  // 0x8(0x8)

}; 
// ScriptStruct SequencerScripting.SequencerScriptingRange
// Size: 0x14(Inherited: 0x0) 
struct FSequencerScriptingRange
{
	char bHasStart : 1;  // 0x0(0x1)
	char bHasEnd : 1;  // 0x0(0x1)
	char pad_0_1 : 6;  // 0x0(0x1)
	char pad_1[4];  // 0x1(0x4)
	int32_t InclusiveStart;  // 0x4(0x4)
	int32_t ExclusiveEnd;  // 0x8(0x4)
	struct FFrameRate InternalRate;  // 0xC(0x8)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
// Size: 0x30(Inherited: 0x0) 
struct FMoveBindingContents
{
	struct FSequencerBindingProxy SourceBindingId;  // 0x0(0x18)
	struct FSequencerBindingProxy DestinationBindingId;  // 0x18(0x18)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.AddTrack
// Size: 0x28(Inherited: 0x0) 
struct FAddTrack
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	UMovieSceneTrack* TrackType;  // 0x18(0x8)
	struct UMovieSceneTrack* ReturnValue;  // 0x20(0x8)

}; 
// Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
// Size: 0x28(Inherited: 0x0) 
struct FAddChildObjectBinding
{
	struct UMovieSceneFolder* Folder;  // 0x0(0x8)
	struct FSequencerBindingProxy InObjectBinding;  // 0x8(0x18)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
// Size: 0x28(Inherited: 0x0) 
struct FGetChildPossessables
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	struct TArray<struct FSequencerBindingProxy> ReturnValue;  // 0x18(0x10)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
// Size: 0x10(Inherited: 0x0) 
struct FSetPlaybackStart
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	int32_t StartFrame;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneScriptingStringKey.GetTime
// Size: 0xC(Inherited: 0x0) 
struct FGetTime
{
	uint8_t  TimeUnit;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FFrameTime ReturnValue;  // 0x4(0x8)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
// Size: 0x30(Inherited: 0x0) 
struct FFindTracksByExactType
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	UMovieSceneTrack* TrackType;  // 0x18(0x8)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x20(0x10)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
// Size: 0x4(Inherited: 0x0) 
struct FGetLeaveTangentWeight
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
// Size: 0x18(Inherited: 0x0) 
struct FAddChildMasterTrack
{
	struct UMovieSceneFolder* Folder;  // 0x0(0x8)
	struct UMovieSceneTrack* InMasterTrack;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.GetParent
// Size: 0x30(Inherited: 0x0) 
struct FGetParent
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	struct FSequencerBindingProxy ReturnValue;  // 0x18(0x18)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
// Size: 0x30(Inherited: 0x0) 
struct FFindTracksByType
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	UMovieSceneTrack* TrackType;  // 0x18(0x8)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x20(0x10)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
// Size: 0x10(Inherited: 0x0) 
struct FSetMarkedFrame
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	int32_t InMarkIndex;  // 0x8(0x4)
	struct FFrameNumber InFrameNumber;  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
// Size: 0x20(Inherited: 0x0) 
struct FGetDisplayName
{
	struct UMovieSceneTrack* Track;  // 0x0(0x8)
	struct FText ReturnValue;  // 0x8(0x18)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.GetId
// Size: 0x28(Inherited: 0x0) 
struct FGetId
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	struct FGuid ReturnValue;  // 0x18(0x10)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
// Size: 0x40(Inherited: 0x0) 
struct FGetPortableBindingID
{
	struct UMovieSceneSequence* MasterSequence;  // 0x0(0x8)
	struct UMovieSceneSequence* DestinationSequence;  // 0x8(0x8)
	struct FSequencerBindingProxy InBinding;  // 0x10(0x18)
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x28(0x18)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
// Size: 0x1(Inherited: 0x0) 
struct FSetInterpolationMode
{
	char ERichCurveInterpMode InNewValue;  // 0x0(0x1)

}; 
// Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
// Size: 0x8(Inherited: 0x0) 
struct FRemoveKey
{
	struct UMovieSceneScriptingKey* Key;  // 0x0(0x8)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
// Size: 0x20(Inherited: 0x0) 
struct FRemoveTrack
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	struct UMovieSceneTrack* TrackToRemove;  // 0x18(0x8)

}; 
// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName
// Size: 0x18(Inherited: 0x0) 
struct FSetFolderName
{
	struct UMovieSceneFolder* Folder;  // 0x0(0x8)
	struct FName InFolderName;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.GetName
// Size: 0x28(Inherited: 0x0) 
struct FGetName
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	struct FString ReturnValue;  // 0x18(0x10)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
// Size: 0x20(Inherited: 0x0) 
struct FGetObjectTemplate
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	struct UObject* ReturnValue;  // 0x18(0x8)

}; 
// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
// Size: 0x10(Inherited: 0x0) 
struct FSetFolderColor
{
	struct UMovieSceneFolder* Folder;  // 0x0(0x8)
	struct FColor InFolderColor;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
// Size: 0x18(Inherited: 0x0) 
struct FGetEndSeconds
{
	struct FSequencerScriptingRange Range;  // 0x0(0x14)
	float ReturnValue;  // 0x14(0x4)

}; 
// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
// Size: 0x20(Inherited: 0x0) 
struct FSetPropertyNameAndPath
{
	struct UMovieScenePropertyTrack* Track;  // 0x0(0x8)
	struct FName InPropertyName;  // 0x8(0x8)
	struct FString InPropertyPath;  // 0x10(0x10)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.IsValid
// Size: 0x20(Inherited: 0x0) 
struct FIsValid
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
// Size: 0x20(Inherited: 0x0) 
struct FGetPossessedObjectClass
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	UObject* ReturnValue;  // 0x18(0x8)

}; 
// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
// Size: 0x14(Inherited: 0x0) 
struct FRemoveStart
{
	struct FSequencerScriptingRange Range;  // 0x0(0x14)

}; 
// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
// Size: 0x10(Inherited: 0x0) 
struct FAddEventRepeaterSection
{
	struct UMovieSceneEventTrack* InTrack;  // 0x0(0x8)
	struct UMovieSceneEventRepeaterSection* ReturnValue;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
// Size: 0x28(Inherited: 0x0) 
struct FRemoveChildObjectBinding
{
	struct UMovieSceneFolder* Folder;  // 0x0(0x8)
	struct FSequencerBindingProxy InObjectBinding;  // 0x8(0x18)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.GetTracks
// Size: 0x28(Inherited: 0x0) 
struct FGetTracks
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x18(0x10)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.Remove
// Size: 0x18(Inherited: 0x0) 
struct FRemove
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
// Size: 0x1(Inherited: 0x0) 
struct FGetInterpolationMode
{
	char ERichCurveInterpMode ReturnValue;  // 0x0(0x1)

}; 
// Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
// Size: 0x20(Inherited: 0x0) 
struct FSetDisplayName
{
	struct UMovieSceneTrack* Track;  // 0x0(0x8)
	struct FText InName;  // 0x8(0x18)

}; 
// Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
// Size: 0x10(Inherited: 0x0) 
struct FGetDefault
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
// Size: 0x18(Inherited: 0x0) 
struct FGetChildFolders
{
	struct UMovieSceneFolder* Folder;  // 0x0(0x8)
	struct TArray<struct UMovieSceneFolder*> ReturnValue;  // 0x8(0x10)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.SetName
// Size: 0x28(Inherited: 0x0) 
struct FSetName
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	struct FString InName;  // 0x18(0x10)

}; 
// Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey
// Size: 0x28(Inherited: 0x0) 
struct FAddKey
{
	struct FFrameNumber InTime;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString NewValue;  // 0x8(0x10)
	float SubFrame;  // 0x18(0x4)
	uint8_t  TimeUnit;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct UMovieSceneScriptingStringKey* ReturnValue;  // 0x20(0x8)

}; 
// Function SequencerScripting.MovieSceneBindingExtensions.SetParent
// Size: 0x30(Inherited: 0x0) 
struct FSetParent
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	struct FSequencerBindingProxy InParentBinding;  // 0x18(0x18)

}; 
// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
// Size: 0x10(Inherited: 0x0) 
struct FAddEventTriggerSection
{
	struct UMovieSceneEventTrack* InTrack;  // 0x0(0x8)
	struct UMovieSceneEventTriggerSection* ReturnValue;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
// Size: 0x18(Inherited: 0x0) 
struct FAddChildFolder
{
	struct UMovieSceneFolder* TargetFolder;  // 0x0(0x8)
	struct UMovieSceneFolder* FolderToAdd;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
// Size: 0x18(Inherited: 0x0) 
struct FGetChildMasterTracks
{
	struct UMovieSceneFolder* Folder;  // 0x0(0x8)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x8(0x10)

}; 
// Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
// Size: 0x18(Inherited: 0x0) 
struct FGetChildObjectBindings
{
	struct UMovieSceneFolder* Folder;  // 0x0(0x8)
	struct TArray<struct FSequencerBindingProxy> ReturnValue;  // 0x8(0x10)

}; 
// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
// Size: 0x14(Inherited: 0x0) 
struct FRemoveEnd
{
	struct FSequencerScriptingRange Range;  // 0x0(0x14)

}; 
// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
// Size: 0x10(Inherited: 0x0) 
struct FGetFolderColor
{
	struct UMovieSceneFolder* Folder;  // 0x0(0x8)
	struct FColor ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneScriptingStringKey.SetTime
// Size: 0xC(Inherited: 0x0) 
struct FSetTime
{
	struct FFrameNumber NewFrameNumber;  // 0x0(0x4)
	float SubFrame;  // 0x4(0x4)
	uint8_t  TimeUnit;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
// Size: 0x18(Inherited: 0x0) 
struct FRemoveChildMasterTrack
{
	struct UMovieSceneFolder* Folder;  // 0x0(0x8)
	struct UMovieSceneTrack* InMasterTrack;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
// Size: 0x10(Inherited: 0x0) 
struct FGetKeys
{
	struct TArray<struct UMovieSceneScriptingKey*> ReturnValue;  // 0x0(0x10)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
// Size: 0x8(Inherited: 0x0) 
struct FSortMarkedFrames
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)

}; 
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
// Size: 0x10(Inherited: 0x0) 
struct FGetObjectPropertyClass
{
	struct UMovieSceneObjectPropertyTrack* Track;  // 0x0(0x8)
	UObject* ReturnValue;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
// Size: 0x10(Inherited: 0x0) 
struct FGetPropertyName
{
	struct UMovieScenePropertyTrack* Track;  // 0x0(0x8)
	struct FName ReturnValue;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
// Size: 0x18(Inherited: 0x0) 
struct FGetPropertyPath
{
	struct UMovieScenePropertyTrack* Track;  // 0x0(0x8)
	struct FString ReturnValue;  // 0x8(0x10)

}; 
// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
// Size: 0x10(Inherited: 0x0) 
struct FSetObjectPropertyClass
{
	struct UMovieSceneObjectPropertyTrack* Track;  // 0x0(0x8)
	UObject* PropertyClass;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneScriptingStringKey.GetValue
// Size: 0x10(Inherited: 0x0) 
struct FGetValue
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function SequencerScripting.MovieSceneScriptingStringKey.SetValue
// Size: 0x10(Inherited: 0x0) 
struct FSetValue
{
	struct FString InNewValue;  // 0x0(0x10)

}; 
// Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
// Size: 0x10(Inherited: 0x0) 
struct FSetDefault
{
	struct FString InDefaultValue;  // 0x0(0x10)

}; 
// Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
// Size: 0x1(Inherited: 0x0) 
struct FHasDefault
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
// Size: 0x30(Inherited: 0x0) 
struct FEvaluateKeys
{
	struct FSequencerScriptingRange Range;  // 0x0(0x14)
	struct FFrameRate FrameRate;  // 0x14(0x8)
	char pad_28[4];  // 0x1C(0x4)
	struct TArray<float> ReturnValue;  // 0x20(0x10)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
// Size: 0x4(Inherited: 0x0) 
struct FSetArriveTangentWeight
{
	float InNewValue;  // 0x0(0x4)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
// Size: 0x4(Inherited: 0x0) 
struct FGetNumKeys
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
// Size: 0x4(Inherited: 0x0) 
struct FGetArriveTangentWeight
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
// Size: 0x1(Inherited: 0x0) 
struct FSetTangentMode
{
	char ERichCurveTangentMode InNewValue;  // 0x0(0x1)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
// Size: 0x4(Inherited: 0x0) 
struct FGetLeaveTangent
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
// Size: 0x1(Inherited: 0x0) 
struct FGetTangentMode
{
	char ERichCurveTangentMode ReturnValue;  // 0x0(0x1)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
// Size: 0x1(Inherited: 0x0) 
struct FGetTangentWeightMode
{
	char ERichCurveTangentWeightMode ReturnValue;  // 0x0(0x1)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
// Size: 0x18(Inherited: 0x0) 
struct FGetMarkedFrames
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct TArray<struct FMovieSceneMarkedFrame> ReturnValue;  // 0x8(0x10)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
// Size: 0x4(Inherited: 0x0) 
struct FSetArriveTangent
{
	float InNewValue;  // 0x0(0x4)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
// Size: 0x4(Inherited: 0x0) 
struct FSetLeaveTangent
{
	float InNewValue;  // 0x0(0x4)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
// Size: 0x4(Inherited: 0x0) 
struct FSetLeaveTangentWeight
{
	float InNewValue;  // 0x0(0x4)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
// Size: 0x1(Inherited: 0x0) 
struct FSetTangentWeightMode
{
	char ERichCurveTangentWeightMode InNewValue;  // 0x0(0x1)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
// Size: 0x1(Inherited: 0x0) 
struct FGetPostInfinityExtrapolation
{
	char ERichCurveExtrapolation ReturnValue;  // 0x0(0x1)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
// Size: 0x1(Inherited: 0x0) 
struct FGetPreInfinityExtrapolation
{
	char ERichCurveExtrapolation ReturnValue;  // 0x0(0x1)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
// Size: 0x1(Inherited: 0x0) 
struct FSetPostInfinityExtrapolation
{
	char ERichCurveExtrapolation InExtrapolation;  // 0x0(0x1)

}; 
// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
// Size: 0x1(Inherited: 0x0) 
struct FSetPreInfinityExtrapolation
{
	char ERichCurveExtrapolation InExtrapolation;  // 0x0(0x1)

}; 
// Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
// Size: 0x20(Inherited: 0x0) 
struct FFindChannelsByType
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	UMovieSceneScriptingChannel* ChannelType;  // 0x8(0x8)
	struct TArray<struct UMovieSceneScriptingChannel*> ReturnValue;  // 0x10(0x10)

}; 
// Function SequencerScripting.MovieSceneSectionExtensions.GetChannels
// Size: 0x18(Inherited: 0x0) 
struct FGetChannels
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	struct TArray<struct UMovieSceneScriptingChannel*> ReturnValue;  // 0x8(0x10)

}; 
// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
// Size: 0x18(Inherited: 0x0) 
struct FGetEndFrame
{
	struct FSequencerScriptingRange Range;  // 0x0(0x14)
	int32_t ReturnValue;  // 0x14(0x4)

}; 
// Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
// Size: 0x10(Inherited: 0x0) 
struct FGetEndFrameSeconds
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
// Size: 0x18(Inherited: 0x0) 
struct FGetSpawnables
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct TArray<struct FSequencerBindingProxy> ReturnValue;  // 0x8(0x10)

}; 
// Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
// Size: 0x20(Inherited: 0x0) 
struct FGetParentSequenceFrame
{
	struct UMovieSceneSubSection* Section;  // 0x0(0x8)
	int32_t InFrame;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct UMovieSceneSequence* ParentSequence;  // 0x10(0x8)
	int32_t ReturnValue;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
// Size: 0x18(Inherited: 0x0) 
struct FGetStartFrame
{
	struct FSequencerScriptingRange Range;  // 0x0(0x14)
	int32_t ReturnValue;  // 0x14(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
// Size: 0x10(Inherited: 0x0) 
struct FGetMovieScene
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct UMovieScene* ReturnValue;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
// Size: 0x10(Inherited: 0x0) 
struct FGetStartFrameSeconds
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
// Size: 0x10(Inherited: 0x0) 
struct FHasEndFrame
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
// Size: 0x10(Inherited: 0x0) 
struct FSetEndFrameBounded
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bIsBounded : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
// Size: 0x10(Inherited: 0x0) 
struct FHasStartFrame
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
// Size: 0x18(Inherited: 0x0) 
struct FSetEndFrame
{
	struct FSequencerScriptingRange Range;  // 0x0(0x14)
	int32_t End;  // 0x14(0x4)

}; 
// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
// Size: 0x10(Inherited: 0x0) 
struct FSetEndFrameSeconds
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	float EndTime;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSectionExtensions.SetRange
// Size: 0x10(Inherited: 0x0) 
struct FSetRange
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	int32_t StartFrame;  // 0x8(0x4)
	int32_t EndFrame;  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
// Size: 0x10(Inherited: 0x0) 
struct FSetRangeSeconds
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	float StartTime;  // 0x8(0x4)
	float EndTime;  // 0xC(0x4)

}; 
// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
// Size: 0x18(Inherited: 0x0) 
struct FSetStartFrame
{
	struct FSequencerScriptingRange Range;  // 0x0(0x14)
	int32_t Start;  // 0x14(0x4)

}; 
// Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint
// Size: 0x10(Inherited: 0x0) 
struct FSetColorTint
{
	struct UMovieSceneTrack* Track;  // 0x0(0x8)
	struct FColor ColorTint;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
// Size: 0x10(Inherited: 0x0) 
struct FSetStartFrameBounded
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bIsBounded : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
// Size: 0x10(Inherited: 0x0) 
struct FSetStartFrameSeconds
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	float StartTime;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
// Size: 0x30(Inherited: 0x0) 
struct FAddMarkedFrame
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FMovieSceneMarkedFrame InMarkedFrame;  // 0x8(0x20)
	int32_t ReturnValue;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
// Size: 0x18(Inherited: 0x0) 
struct FAddMasterTrack
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	UMovieSceneTrack* TrackType;  // 0x8(0x8)
	struct UMovieSceneTrack* ReturnValue;  // 0x10(0x8)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
// Size: 0x28(Inherited: 0x0) 
struct FAddPossessable
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct UObject* ObjectToPossess;  // 0x8(0x8)
	struct FSequencerBindingProxy ReturnValue;  // 0x10(0x18)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
// Size: 0x20(Inherited: 0x0) 
struct FAddRootFolderToSequence
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FString NewFolderName;  // 0x8(0x10)
	struct UMovieSceneFolder* ReturnValue;  // 0x18(0x8)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
// Size: 0x28(Inherited: 0x0) 
struct FAddSpawnableFromClass
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	UObject* ClassToSpawn;  // 0x8(0x8)
	struct FSequencerBindingProxy ReturnValue;  // 0x10(0x18)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
// Size: 0x10(Inherited: 0x0) 
struct FSetPlaybackEndSeconds
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	float EndTime;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
// Size: 0x28(Inherited: 0x0) 
struct FAddSpawnableFromInstance
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct UObject* ObjectToSpawn;  // 0x8(0x8)
	struct FSequencerBindingProxy ReturnValue;  // 0x10(0x18)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
// Size: 0x38(Inherited: 0x0) 
struct FLocateBoundObjects
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FSequencerBindingProxy InBinding;  // 0x8(0x18)
	struct UObject* Context;  // 0x20(0x8)
	struct TArray<struct UObject*> ReturnValue;  // 0x28(0x10)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
// Size: 0x10(Inherited: 0x0) 
struct FDeleteMarkedFrame
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	int32_t DeleteIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
// Size: 0x8(Inherited: 0x0) 
struct FDeleteMarkedFrames
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
// Size: 0x30(Inherited: 0x0) 
struct FFindBindingById
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FGuid BindingID;  // 0x8(0x10)
	struct FSequencerBindingProxy ReturnValue;  // 0x18(0x18)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
// Size: 0x30(Inherited: 0x0) 
struct FFindBindingByName
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FString Name;  // 0x8(0x10)
	struct FSequencerBindingProxy ReturnValue;  // 0x18(0x18)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
// Size: 0x10(Inherited: 0x0) 
struct FFindMarkedFrameByFrameNumber
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FFrameNumber InFrameNumber;  // 0x8(0x4)
	int32_t ReturnValue;  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
// Size: 0x20(Inherited: 0x0) 
struct FFindMarkedFrameByLabel
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FString InLabel;  // 0x8(0x10)
	int32_t ReturnValue;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
// Size: 0x20(Inherited: 0x0) 
struct FFindMasterTracksByExactType
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	UMovieSceneTrack* TrackType;  // 0x8(0x8)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x10(0x10)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
// Size: 0x20(Inherited: 0x0) 
struct FFindMasterTracksByType
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	UMovieSceneTrack* TrackType;  // 0x8(0x8)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x10(0x10)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
// Size: 0x18(Inherited: 0x0) 
struct FFindNextMarkedFrame
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FFrameNumber InFrameNumber;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bForward : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	int32_t ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
// Size: 0x30(Inherited: 0x0) 
struct FGetBindingID
{
	struct FSequencerBindingProxy InBinding;  // 0x0(0x18)
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x18(0x18)

}; 
// Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart
// Size: 0x18(Inherited: 0x0) 
struct FHasStart
{
	struct FSequencerScriptingRange Range;  // 0x0(0x14)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ReturnValue : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings
// Size: 0x18(Inherited: 0x0) 
struct FGetBindings
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct TArray<struct FSequencerBindingProxy> ReturnValue;  // 0x8(0x10)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
// Size: 0x10(Inherited: 0x0) 
struct FGetClockSource
{
	struct UMovieSceneSequence* InSequence;  // 0x0(0x8)
	uint8_t  ReturnValue;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
// Size: 0x10(Inherited: 0x0) 
struct FGetDisplayRate
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FFrameRate ReturnValue;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
// Size: 0x10(Inherited: 0x0) 
struct FGetEvaluationType
{
	struct UMovieSceneSequence* InSequence;  // 0x0(0x8)
	uint8_t  ReturnValue;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
// Size: 0x18(Inherited: 0x0) 
struct FGetMasterTracks
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x8(0x10)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
// Size: 0x10(Inherited: 0x0) 
struct FGetPlaybackEnd
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
// Size: 0x10(Inherited: 0x0) 
struct FGetPlaybackEndSeconds
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
// Size: 0x10(Inherited: 0x0) 
struct FGetPlaybackStartSeconds
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
// Size: 0x20(Inherited: 0x0) 
struct FGetPlaybackRange
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FSequencerScriptingRange ReturnValue;  // 0x8(0x14)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
// Size: 0x10(Inherited: 0x0) 
struct FGetPlaybackStart
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
// Size: 0x18(Inherited: 0x0) 
struct FGetPossessables
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct TArray<struct FSequencerBindingProxy> ReturnValue;  // 0x8(0x10)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
// Size: 0x18(Inherited: 0x0) 
struct FGetRootFoldersInSequence
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct TArray<struct UMovieSceneFolder*> ReturnValue;  // 0x8(0x10)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange
// Size: 0x28(Inherited: 0x0) 
struct FMakeRange
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	int32_t StartFrame;  // 0x8(0x4)
	int32_t Duration;  // 0xC(0x4)
	struct FSequencerScriptingRange ReturnValue;  // 0x10(0x14)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
// Size: 0x10(Inherited: 0x0) 
struct FGetTickResolution
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FFrameRate ReturnValue;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
// Size: 0x20(Inherited: 0x0) 
struct FGetTimecodeSource
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FTimecode ReturnValue;  // 0x8(0x14)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
// Size: 0x10(Inherited: 0x0) 
struct FGetViewRangeEnd
{
	struct UMovieSceneSequence* InSequence;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
// Size: 0x10(Inherited: 0x0) 
struct FGetViewRangeStart
{
	struct UMovieSceneSequence* InSequence;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
// Size: 0x10(Inherited: 0x0) 
struct FGetWorkRangeEnd
{
	struct UMovieSceneSequence* InSequence;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
// Size: 0x10(Inherited: 0x0) 
struct FGetWorkRangeStart
{
	struct UMovieSceneSequence* InSequence;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
// Size: 0x10(Inherited: 0x0) 
struct FIsReadOnly
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
// Size: 0x40(Inherited: 0x0) 
struct FMakeBindingID
{
	struct UMovieSceneSequence* MasterSequence;  // 0x0(0x8)
	struct FSequencerBindingProxy InBinding;  // 0x8(0x18)
	uint8_t  Space;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x24(0x18)
	char pad_60[4];  // 0x3C(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
// Size: 0x28(Inherited: 0x0) 
struct FMakeRangeSeconds
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	float StartTime;  // 0x8(0x4)
	float Duration;  // 0xC(0x4)
	struct FSequencerScriptingRange ReturnValue;  // 0x10(0x14)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
// Size: 0x18(Inherited: 0x0) 
struct FRemoveMasterTrack
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct UMovieSceneTrack* MasterTrack;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
// Size: 0x38(Inherited: 0x0) 
struct FResolveBindingID
{
	struct UMovieSceneSequence* MasterSequence;  // 0x0(0x8)
	struct FMovieSceneObjectBindingID InObjectBindingID;  // 0x8(0x18)
	struct FSequencerBindingProxy ReturnValue;  // 0x20(0x18)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
// Size: 0x10(Inherited: 0x0) 
struct FSetClockSource
{
	struct UMovieSceneSequence* InSequence;  // 0x0(0x8)
	uint8_t  InClockSource;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
// Size: 0x10(Inherited: 0x0) 
struct FSetDisplayRate
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FFrameRate DisplayRate;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
// Size: 0x10(Inherited: 0x0) 
struct FSetEvaluationType
{
	struct UMovieSceneSequence* InSequence;  // 0x0(0x8)
	uint8_t  InEvaluationType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
// Size: 0x10(Inherited: 0x0) 
struct FSetPlaybackStartSeconds
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	float StartTime;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
// Size: 0x10(Inherited: 0x0) 
struct FSetPlaybackEnd
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	int32_t EndFrame;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
// Size: 0x10(Inherited: 0x0) 
struct FSetReadOnly
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bInReadOnly : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
// Size: 0x10(Inherited: 0x0) 
struct FSetTickResolution
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FFrameRate TickResolution;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
// Size: 0x10(Inherited: 0x0) 
struct FSetTickResolutionDirectly
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)
	struct FFrameRate TickResolution;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
// Size: 0x10(Inherited: 0x0) 
struct FSetViewRangeEnd
{
	struct UMovieSceneSequence* InSequence;  // 0x0(0x8)
	float EndTimeInSeconds;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
// Size: 0x10(Inherited: 0x0) 
struct FSetViewRangeStart
{
	struct UMovieSceneSequence* InSequence;  // 0x0(0x8)
	float StartTimeInSeconds;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
// Size: 0x10(Inherited: 0x0) 
struct FSetWorkRangeEnd
{
	struct UMovieSceneSequence* InSequence;  // 0x0(0x8)
	float EndTimeInSeconds;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
// Size: 0x10(Inherited: 0x0) 
struct FSetWorkRangeStart
{
	struct UMovieSceneSequence* InSequence;  // 0x0(0x8)
	float StartTimeInSeconds;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneTrackExtensions.AddSection
// Size: 0x10(Inherited: 0x0) 
struct FAddSection
{
	struct UMovieSceneTrack* Track;  // 0x0(0x8)
	struct UMovieSceneSection* ReturnValue;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint
// Size: 0x10(Inherited: 0x0) 
struct FGetColorTint
{
	struct UMovieSceneTrack* Track;  // 0x0(0x8)
	struct FColor ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneTrackExtensions.GetSections
// Size: 0x18(Inherited: 0x0) 
struct FGetSections
{
	struct UMovieSceneTrack* Track;  // 0x0(0x8)
	struct TArray<struct UMovieSceneSection*> ReturnValue;  // 0x8(0x10)

}; 
// Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
// Size: 0x10(Inherited: 0x0) 
struct FGetSectionToKey
{
	struct UMovieSceneTrack* Track;  // 0x0(0x8)
	struct UMovieSceneSection* ReturnValue;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
// Size: 0x10(Inherited: 0x0) 
struct FGetSortingOrder
{
	struct UMovieSceneTrack* Track;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection
// Size: 0x10(Inherited: 0x0) 
struct FRemoveSection
{
	struct UMovieSceneTrack* Track;  // 0x0(0x8)
	struct UMovieSceneSection* Section;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
// Size: 0x10(Inherited: 0x0) 
struct FSetSectionToKey
{
	struct UMovieSceneTrack* Track;  // 0x0(0x8)
	struct UMovieSceneSection* Section;  // 0x8(0x8)

}; 
// Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
// Size: 0x10(Inherited: 0x0) 
struct FSetSortingOrder
{
	struct UMovieSceneTrack* Track;  // 0x0(0x8)
	int32_t SortingOrder;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneVectorTrackExtensions.GetNumChannelsUsed
// Size: 0x10(Inherited: 0x0) 
struct FGetNumChannelsUsed
{
	struct UMovieSceneVectorTrack* Track;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.MovieSceneVectorTrackExtensions.SetNumChannelsUsed
// Size: 0x10(Inherited: 0x0) 
struct FSetNumChannelsUsed
{
	struct UMovieSceneVectorTrack* Track;  // 0x0(0x8)
	int32_t InNumChannelsUsed;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
// Size: 0x18(Inherited: 0x0) 
struct FGetStartSeconds
{
	struct FSequencerScriptingRange Range;  // 0x0(0x14)
	float ReturnValue;  // 0x14(0x4)

}; 
// Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
// Size: 0x18(Inherited: 0x0) 
struct FHasEnd
{
	struct FSequencerScriptingRange Range;  // 0x0(0x14)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ReturnValue : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
// Size: 0x18(Inherited: 0x0) 
struct FSetEndSeconds
{
	struct FSequencerScriptingRange Range;  // 0x0(0x14)
	float End;  // 0x14(0x4)

}; 
// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
// Size: 0x18(Inherited: 0x0) 
struct FSetStartSeconds
{
	struct FSequencerScriptingRange Range;  // 0x0(0x14)
	float Start;  // 0x14(0x4)

}; 
