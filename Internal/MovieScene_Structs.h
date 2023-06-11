#pragma once 
#include "SDK.h" 
 
 
// Function MovieScene.MovieSceneSection.SetPostRollFrames
// Size: 0x4(Inherited: 0x0) 
struct FSetPostRollFrames
{
	int32_t InPostRollFrames;  // 0x0(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneChannel
// Size: 0x8(Inherited: 0x0) 
struct FMovieSceneChannel
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// Size: 0x60(Inherited: 0x60) 
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{

}; 
// ScriptStruct MovieScene.TrackInstanceInputComponent
// Size: 0x10(Inherited: 0x0) 
struct FTrackInstanceInputComponent
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	int32_t OutputIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneIntegerChannel
// Size: 0x90(Inherited: 0x8) 
struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times;  // 0x8(0x10)
	int32_t DefaultValue;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bHasDefaultValue : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct TArray<int32_t> Values;  // 0x20(0x10)
	char pad_48[96];  // 0x30(0x60)

}; 
// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneEvalTemplateBase
{
	char pad_0[16];  // 0x0(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneFloatChannel
// Size: 0xA0(Inherited: 0x8) 
struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
	char ERichCurveExtrapolation PreInfinityExtrap;  // 0x8(0x1)
	char ERichCurveExtrapolation PostInfinityExtrap;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)
	struct TArray<struct FFrameNumber> Times;  // 0x10(0x10)
	struct TArray<struct FMovieSceneFloatValue> Values;  // 0x20(0x10)
	float DefaultValue;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool bHasDefaultValue : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	struct FMovieSceneKeyHandleMap KeyHandles;  // 0x38(0x60)
	struct FFrameRate TickResolution;  // 0x98(0x8)

}; 
// ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30(Inherited: 0x0) 
struct FMovieSceneBinding
{
	struct FGuid ObjectGuid;  // 0x0(0x10)
	struct FString BindingName;  // 0x10(0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks;  // 0x20(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneFloatValue
// Size: 0x1C(Inherited: 0x0) 
struct FMovieSceneFloatValue
{
	float Value;  // 0x0(0x4)
	struct FMovieSceneTangentData Tangent;  // 0x4(0x14)
	char ERichCurveInterpMode InterpMode;  // 0x18(0x1)
	char ERichCurveTangentMode TangentMode;  // 0x19(0x1)
	char PaddingByte;  // 0x1A(0x1)
	char pad_27[1];  // 0x1B(0x1)

}; 
// ScriptStruct MovieScene.MovieSceneTangentData
// Size: 0x14(Inherited: 0x0) 
struct FMovieSceneTangentData
{
	float ArriveTangent;  // 0x0(0x4)
	float LeaveTangent;  // 0x4(0x4)
	float ArriveTangentWeight;  // 0x8(0x4)
	float LeaveTangentWeight;  // 0xC(0x4)
	char ERichCurveTangentWeightMode TangentWeightMode;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// Size: 0x88(Inherited: 0x0) 
struct FMovieSceneEvalTemplatePtr
{
	char pad_0[136];  // 0x0(0x88)

}; 
// ScriptStruct MovieScene.MovieScenePropertyBinding
// Size: 0x14(Inherited: 0x0) 
struct FMovieScenePropertyBinding
{
	struct FName PropertyName;  // 0x0(0x8)
	struct FName PropertyPath;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bCanUseClassLookup : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// ScriptStruct MovieScene.MovieSceneTrackLabels
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneTrackLabels
{
	struct TArray<struct FString> Strings;  // 0x0(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size: 0x20(Inherited: 0x10) 
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
	uint8_t  CompletionMode;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	struct TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr;  // 0x14(0x8)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
// Size: 0x38(Inherited: 0x0) 
struct FMovieSceneEntitySystemGraphNodes
{
	char pad_0[56];  // 0x0(0x38)

}; 
// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size: 0x38(Inherited: 0x20) 
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData PropertyData;  // 0x20(0x18)

}; 
// ScriptStruct MovieScene.MovieScenePropertySectionData
// Size: 0x18(Inherited: 0x0) 
struct FMovieScenePropertySectionData
{
	struct FName PropertyName;  // 0x0(0x8)
	struct FString PropertyPath;  // 0x8(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneSectionGroup
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneSectionGroup
{
	struct TArray<struct TWeakObjectPtr<UMovieSceneSection>> Sections;  // 0x0(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
// Size: 0x8(Inherited: 0x0) 
struct FMovieSceneFieldEntry_ChildTemplate
{
	uint16_t ChildIndex;  // 0x0(0x2)
	uint8_t  Flags;  // 0x2(0x1)
	char pad_3[1];  // 0x3(0x1)
	struct FFrameNumber ForcedTime;  // 0x4(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneByteChannel
// Size: 0x98(Inherited: 0x8) 
struct FMovieSceneByteChannel : public FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times;  // 0x8(0x10)
	char DefaultValue;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool bHasDefaultValue : 1;  // 0x19(0x1)
	char pad_26[6];  // 0x1A(0x6)
	struct TArray<char> Values;  // 0x20(0x10)
	struct UEnum* Enum;  // 0x30(0x8)
	char pad_56[96];  // 0x38(0x60)

}; 
// ScriptStruct MovieScene.MovieSceneBoolChannel
// Size: 0x90(Inherited: 0x8) 
struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool DefaultValue : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool bHasDefaultValue : 1;  // 0x19(0x1)
	char pad_26[6];  // 0x1A(0x6)
	struct TArray<bool> Values;  // 0x20(0x10)
	char pad_48[96];  // 0x30(0x60)

}; 
// ScriptStruct MovieScene.MovieSceneFrameRange
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneFrameRange
{
	char pad_0[16];  // 0x0(0x10)

}; 
// Function MovieScene.MovieSceneSequencePlayer.IsPaused
// Size: 0x1(Inherited: 0x0) 
struct FIsPaused
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// Size: 0x8(Inherited: 0x0) 
struct FMovieSceneSequenceInstanceData
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct MovieScene.MovieSceneEmptyStruct
// Size: 0x1(Inherited: 0x0) 
struct FMovieSceneEmptyStruct
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0xF0(Inherited: 0x0) 
struct FMovieSceneEditorData
{
	struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates;  // 0x0(0x50)
	struct TArray<struct FString> PinnedNodes;  // 0x50(0x10)
	double ViewStart;  // 0x60(0x8)
	double ViewEnd;  // 0x68(0x8)
	double WorkStart;  // 0x70(0x8)
	double WorkEnd;  // 0x78(0x8)
	struct TSet<struct FFrameNumber> MarkedFrames;  // 0x80(0x50)
	struct FFloatRange WorkingRange;  // 0xD0(0x10)
	struct FFloatRange ViewRange;  // 0xE0(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// Size: 0x14(Inherited: 0x0) 
struct FMovieSceneEvaluationOperand
{
	struct FGuid ObjectBindingID;  // 0x0(0x10)
	struct FMovieSceneSequenceID SequenceID;  // 0x10(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// Size: 0x160(Inherited: 0x0) 
struct FMovieSceneEvaluationTemplate
{
	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;  // 0x0(0x50)
	char pad_80[80];  // 0x50(0x50)
	struct FGuid SequenceSignature;  // 0xA0(0x10)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)
	struct FMovieSceneTemplateGenerationLedger TemplateLedger;  // 0xB8(0xA8)

}; 
// ScriptStruct MovieScene.MovieSceneSequenceID
// Size: 0x4(Inherited: 0x0) 
struct FMovieSceneSequenceID
{
	uint32_t Value;  // 0x0(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneMarkedFrame
// Size: 0x20(Inherited: 0x0) 
struct FMovieSceneMarkedFrame
{
	struct FFrameNumber FrameNumber;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString Label;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bIsDeterminismFence : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// ScriptStruct MovieScene.MovieSceneTrackImplementation
// Size: 0x10(Inherited: 0x10) 
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{

}; 
// ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack
// Size: 0xC(Inherited: 0x0) 
struct FMovieSceneFieldEntry_EvaluationTrack
{
	struct FMovieSceneEvaluationFieldTrackPtr TrackPtr;  // 0x0(0x8)
	uint16_t NumChildren;  // 0x8(0x2)
	char pad_10[2];  // 0xA(0x2)

}; 
// ScriptStruct MovieScene.MovieSceneExpansionState
// Size: 0x1(Inherited: 0x0) 
struct FMovieSceneExpansionState
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bExpanded : 1;  // 0x0(0x1)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationHookComponent
// Size: 0x20(Inherited: 0x0) 
struct FMovieSceneEvaluationHookComponent
{
	struct TScriptInterface<IMovieSceneEvaluationHook> Interface;  // 0x0(0x10)
	char pad_16[16];  // 0x10(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneTrackInstanceComponent
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneTrackInstanceComponent
{
	struct UMovieSceneSection* Owner;  // 0x0(0x8)
	UMovieSceneTrackInstance* TrackInstanceClass;  // 0x8(0x8)

}; 
// ScriptStruct MovieScene.EasingComponentData
// Size: 0x8(Inherited: 0x0) 
struct FEasingComponentData
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)

}; 
// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
// Size: 0x18(Inherited: 0x0) 
struct FGetObjectBindings
{
	struct UObject* InObject;  // 0x0(0x8)
	struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;  // 0x8(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// Size: 0x8(Inherited: 0x0) 
struct FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSequenceID SequenceID;  // 0x0(0x4)
	struct FMovieSceneTrackIdentifier TrackIdentifier;  // 0x4(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneDeterminismData
// Size: 0x18(Inherited: 0x0) 
struct FMovieSceneDeterminismData
{
	struct TArray<struct FFrameTime> Fences;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bParentSequenceRequiresLowerFence : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool bParentSequenceRequiresUpperFence : 1;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData
// Size: 0x20(Inherited: 0x0) 
struct FMovieSceneEvaluationFieldEntityMetaData
{
	struct FString OverrideBoundPropertyPath;  // 0x0(0x10)
	struct FFrameNumber ForcedTime;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	uint8_t  Flags;  // 0x18(0x1)
	char bEvaluateInSequencePreRoll : 1;  // 0x19(0x1)
	char bEvaluateInSequencePostRoll : 1;  // 0x19(0x1)
	char pad_25_1 : 6;  // 0x19(0x1)
	char pad_26[7];  // 0x1A(0x7)

}; 
// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneObjectBindingIDs
{
	struct TArray<struct FMovieSceneObjectBindingID> IDs;  // 0x0(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
// Size: 0x60(Inherited: 0x0) 
struct FMovieSceneEvaluationFieldEntityTree
{
	char pad_0[96];  // 0x0(0x60)

}; 
// ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18(Inherited: 0x0) 
struct FMovieSceneObjectBindingID
{
	struct FGuid Guid;  // 0x0(0x10)
	int32_t SequenceID;  // 0x10(0x4)
	int32_t ResolveParentIndex;  // 0x14(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneTimecodeSource
// Size: 0x18(Inherited: 0x0) 
struct FMovieSceneTimecodeSource
{
	struct FTimecode Timecode;  // 0x0(0x14)
	struct FFrameNumber DeltaFrame;  // 0x14(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x24(Inherited: 0x0) 
struct FMovieSceneBindingOverrideData
{
	struct FMovieSceneObjectBindingID ObjectBindingID;  // 0x0(0x18)
	struct TWeakObjectPtr<UObject> Object;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bOverridesDefault : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)

}; 
// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x4(Inherited: 0x0) 
struct FMovieSceneTrackEvalOptions
{
	char bCanEvaluateNearestSection : 1;  // 0x0(0x1)
	char bEvalNearestSection : 1;  // 0x0(0x1)
	char bEvaluateInPreroll : 1;  // 0x0(0x1)
	char bEvaluateInPostroll : 1;  // 0x0(0x1)
	char bEvaluateNearestSection : 1;  // 0x0(0x1)
	char pad_0_1 : 3;  // 0x0(0x1)
	char pad_1[4];  // 0x1(0x4)

}; 
// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// Size: 0x2(Inherited: 0x0) 
struct FOptionalMovieSceneBlendType
{
	uint8_t  BlendType;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bIsValid : 1;  // 0x1(0x1)

}; 
// ScriptStruct MovieScene.MovieSceneCompiledSequenceFlagStruct
// Size: 0x1(Inherited: 0x0) 
struct FMovieSceneCompiledSequenceFlagStruct
{
	char bParentSequenceRequiresLowerFence : 1;  // 0x0(0x1)
	char bParentSequenceRequiresUpperFence : 1;  // 0x0(0x1)
	char pad_0_1 : 6;  // 0x0(0x1)

}; 
// ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct
// Size: 0x1(Inherited: 0x0) 
struct FMovieSceneSequenceCompilerMaskStruct
{
	char bHierarchy : 1;  // 0x0(0x1)
	char bEvaluationTemplate : 1;  // 0x0(0x1)
	char bEvaluationTemplateField : 1;  // 0x0(0x1)
	char bEntityComponentField : 1;  // 0x0(0x1)
	char pad_0_1 : 4;  // 0x0(0x1)

}; 
// Function MovieScene.MovieSceneSection.SetIsLocked
// Size: 0x1(Inherited: 0x0) 
struct FSetIsLocked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInIsLocked : 1;  // 0x0(0x1)

}; 
// ScriptStruct MovieScene.MovieSceneEntitySystemGraph
// Size: 0x138(Inherited: 0x0) 
struct FMovieSceneEntitySystemGraph
{
	char pad_0[128];  // 0x0(0x80)
	struct FMovieSceneEntitySystemGraphNodes Nodes;  // 0x80(0x38)
	char pad_184[128];  // 0xB8(0x80)

}; 
// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
// Size: 0x28(Inherited: 0x0) 
struct FMovieSceneEntitySystemGraphNode
{
	char pad_0[32];  // 0x0(0x20)
	struct UMovieSceneEntitySystem* System;  // 0x20(0x8)

}; 
// ScriptStruct MovieScene.MovieSceneTrackInstanceEntry
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneTrackInstanceEntry
{
	struct UObject* BoundObject;  // 0x0(0x8)
	struct UMovieSceneTrackInstance* TrackInstance;  // 0x8(0x8)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationField
// Size: 0x30(Inherited: 0x0) 
struct FMovieSceneEvaluationField
{
	struct TArray<struct FMovieSceneFrameRange> Ranges;  // 0x0(0x10)
	struct TArray<struct FMovieSceneEvaluationGroup> Groups;  // 0x10(0x10)
	struct TArray<struct FMovieSceneEvaluationMetaData> MetaData;  // 0x20(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// Size: 0x20(Inherited: 0x0) 
struct FMovieSceneEvaluationMetaData
{
	struct TArray<struct FMovieSceneSequenceID> ActiveSequences;  // 0x0(0x10)
	struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities;  // 0x10(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneOrderedEvaluationKey
{
	struct FMovieSceneEvaluationKey Key;  // 0x0(0xC)
	uint16_t SetupIndex;  // 0xC(0x2)
	uint16_t TearDownIndex;  // 0xE(0x2)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// Size: 0xC(Inherited: 0x8) 
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSegmentIdentifier SegmentID;  // 0x8(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationKey
// Size: 0xC(Inherited: 0x0) 
struct FMovieSceneEvaluationKey
{
	struct FMovieSceneSequenceID SequenceID;  // 0x0(0x4)
	struct FMovieSceneTrackIdentifier TrackIdentifier;  // 0x4(0x4)
	uint32_t SectionIndex;  // 0x8(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// Size: 0x4(Inherited: 0x0) 
struct FMovieSceneTrackIdentifier
{
	uint32_t Value;  // 0x0(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationHookEventContainer
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneEvaluationHookEventContainer
{
	struct TArray<struct FMovieSceneEvaluationHookEvent> Events;  // 0x0(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// Size: 0x30(Inherited: 0x0) 
struct FMovieSceneEvaluationGroup
{
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices;  // 0x0(0x10)
	struct TArray<struct FMovieSceneFieldEntry_EvaluationTrack> TrackLUT;  // 0x10(0x10)
	struct TArray<struct FMovieSceneFieldEntry_ChildTemplate> SectionLUT;  // 0x20(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneEvaluationFieldSharedEntityMetaData
{
	struct FGuid ObjectBindingID;  // 0x0(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// Size: 0x8(Inherited: 0x0) 
struct FMovieSceneEvaluationGroupLUTIndex
{
	int32_t NumInitPtrs;  // 0x0(0x4)
	int32_t NumEvalPtrs;  // 0x4(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// Size: 0x4(Inherited: 0x0) 
struct FMovieSceneSequenceLoopCount
{
	int32_t Value;  // 0x0(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// Size: 0x4(Inherited: 0x0) 
struct FMovieSceneSegmentIdentifier
{
	int32_t IdentifierIndex;  // 0x0(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey
// Size: 0xC(Inherited: 0x0) 
struct FMovieSceneEvaluationFieldEntityKey
{
	struct TWeakObjectPtr<UObject> EntityOwner;  // 0x0(0x8)
	uint32_t EntityId;  // 0x8(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneEntityComponentField
// Size: 0xF0(Inherited: 0x0) 
struct FMovieSceneEntityComponentField
{
	struct FMovieSceneEvaluationFieldEntityTree PersistentEntityTree;  // 0x0(0x60)
	struct FMovieSceneEvaluationFieldEntityTree OneShotEntityTree;  // 0x60(0x60)
	struct TArray<struct FMovieSceneEvaluationFieldEntity> Entities;  // 0xC0(0x10)
	struct TArray<struct FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;  // 0xD0(0x10)
	struct TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;  // 0xE0(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneEvaluationFieldEntity
{
	struct FMovieSceneEvaluationFieldEntityKey Key;  // 0x0(0xC)
	int32_t SharedMetaDataIndex;  // 0xC(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationInstanceKey
// Size: 0x4(Inherited: 0x0) 
struct FMovieSceneEvaluationInstanceKey
{
	char pad_0[4];  // 0x0(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// Size: 0xA8(Inherited: 0x0) 
struct FMovieSceneTemplateGenerationLedger
{
	struct FMovieSceneTrackIdentifier LastTrackIdentifier;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;  // 0x8(0x50)
	struct TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges;  // 0x58(0x50)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationHookEvent
// Size: 0x38(Inherited: 0x0) 
struct FMovieSceneEvaluationHookEvent
{
	struct FMovieSceneEvaluationHookComponent Hook;  // 0x0(0x20)
	char pad_32[24];  // 0x20(0x18)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// Size: 0x4(Inherited: 0x0) 
struct FMovieSceneEvaluationTemplateSerialNumber
{
	uint32_t Value;  // 0x0(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// Size: 0x78(Inherited: 0x0) 
struct FMovieSceneEvaluationTrack
{
	struct FGuid ObjectBindingID;  // 0x0(0x10)
	uint16_t EvaluationPriority;  // 0x10(0x2)
	uint8_t  EvaluationMethod;  // 0x12(0x1)
	char pad_19[1];  // 0x13(0x1)
	struct TWeakObjectPtr<UMovieSceneTrack> SourceTrack;  // 0x14(0x8)
	char pad_28[4];  // 0x1C(0x4)
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates;  // 0x20(0x10)
	struct FMovieSceneTrackImplementationPtr TrackTemplate;  // 0x30(0x38)
	struct FName EvaluationGroup;  // 0x68(0x8)
	char bEvaluateInPreroll : 1;  // 0x70(0x1)
	char bEvaluateInPostroll : 1;  // 0x70(0x1)
	char bTearDownPriority : 1;  // 0x70(0x1)
	char pad_112_1 : 5;  // 0x70(0x1)
	char pad_113[8];  // 0x71(0x8)

}; 
// ScriptStruct MovieScene.MovieSceneTimeTransform
// Size: 0xC(Inherited: 0x0) 
struct FMovieSceneTimeTransform
{
	float TimeScale;  // 0x0(0x4)
	struct FFrameTime Offset;  // 0x4(0x8)

}; 
// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// Size: 0x38(Inherited: 0x0) 
struct FMovieSceneTrackImplementationPtr
{
	char pad_0[56];  // 0x0(0x38)

}; 
// ScriptStruct MovieScene.MovieSceneSubSectionData
// Size: 0x1C(Inherited: 0x0) 
struct FMovieSceneSubSectionData
{
	struct TWeakObjectPtr<UMovieSceneSubSection> Section;  // 0x0(0x8)
	struct FGuid ObjectBindingID;  // 0x8(0x10)
	uint8_t  Flags;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)

}; 
// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// Size: 0xE8(Inherited: 0x0) 
struct FMovieSceneRootEvaluationTemplateInstance
{
	struct TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence;  // 0x0(0x8)
	struct UMovieSceneCompiledDataManager* CompiledDataManager;  // 0x8(0x8)
	char pad_16[8];  // 0x10(0x8)
	struct UMovieSceneEntitySystemLinker* EntitySystemLinker;  // 0x18(0x8)
	char pad_32[112];  // 0x20(0x70)
	struct TMap<struct FMovieSceneSequenceID, struct UObject*> DirectorInstances;  // 0x90(0x50)
	char pad_224[8];  // 0xE0(0x8)

}; 
// ScriptStruct MovieScene.MovieSceneKeyStruct
// Size: 0x8(Inherited: 0x0) 
struct FMovieSceneKeyStruct
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// Size: 0x28(Inherited: 0x8) 
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
	struct FFrameNumber Time;  // 0x8(0x4)
	char pad_12[28];  // 0xC(0x1C)

}; 
// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// Size: 0x50(Inherited: 0x0) 
struct FGeneratedMovieSceneKeyStruct
{
	char pad_0[80];  // 0x0(0x50)

}; 
// ScriptStruct MovieScene.MovieSceneObjectPathChannel
// Size: 0xC0(Inherited: 0x8) 
struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
	UObject* PropertyClass;  // 0x8(0x8)
	struct TArray<struct FFrameNumber> Times;  // 0x10(0x10)
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values;  // 0x20(0x10)
	struct FMovieSceneObjectPathChannelKeyValue DefaultValue;  // 0x30(0x30)
	char pad_96[96];  // 0x60(0x60)

}; 
// ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
// Size: 0x18(Inherited: 0x0) 
struct FMovieSceneSubSequenceTreeEntry
{
	char pad_0[24];  // 0x0(0x18)

}; 
// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// Size: 0x30(Inherited: 0x0) 
struct FMovieSceneObjectPathChannelKeyValue
{
	struct TSoftObjectPtr<UObject> SoftPtr;  // 0x0(0x28)
	struct UObject* HardPtr;  // 0x28(0x8)

}; 
// ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x48(Inherited: 0x0) 
struct FMovieScenePossessable
{
	struct TArray<struct FName> Tags;  // 0x0(0x10)
	struct FGuid Guid;  // 0x10(0x10)
	struct FString Name;  // 0x20(0x10)
	UObject* PossessedObjectClass;  // 0x30(0x8)
	struct FGuid ParentGuid;  // 0x38(0x10)

}; 
// Function MovieScene.MovieSceneCustomClockSource.OnTick
// Size: 0x8(Inherited: 0x0) 
struct FOnTick
{
	float DeltaSeconds;  // 0x0(0x4)
	float InPlayRate;  // 0x4(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneEasingSettings
// Size: 0x38(Inherited: 0x0) 
struct FMovieSceneEasingSettings
{
	int32_t AutoEaseInDuration;  // 0x0(0x4)
	int32_t AutoEaseOutDuration;  // 0x4(0x4)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseIn;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bManualEaseIn : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	int32_t ManualEaseInDuration;  // 0x1C(0x4)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseOut;  // 0x20(0x10)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bManualEaseOut : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	int32_t ManualEaseOutDuration;  // 0x34(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x2(Inherited: 0x0) 
struct FMovieSceneSectionEvalOptions
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bCanEditCompletionMode : 1;  // 0x0(0x1)
	uint8_t  CompletionMode;  // 0x1(0x1)

}; 
// ScriptStruct MovieScene.MovieSceneSectionParameters
// Size: 0x24(Inherited: 0x0) 
struct FMovieSceneSectionParameters
{
	struct FFrameNumber StartFrameOffset;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bCanLoop : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	struct FFrameNumber EndFrameOffset;  // 0x8(0x4)
	struct FFrameNumber FirstLoopStartFrameOffset;  // 0xC(0x4)
	float TimeScale;  // 0x10(0x4)
	int32_t HierarchicalBias;  // 0x14(0x4)
	float StartOffset;  // 0x18(0x4)
	float PrerollTime;  // 0x1C(0x4)
	float PostrollTime;  // 0x20(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneSegment
// Size: 0x58(Inherited: 0x0) 
struct FMovieSceneSegment
{
	char pad_0[88];  // 0x0(0x58)

}; 
// ScriptStruct MovieScene.SectionEvaluationData
// Size: 0xC(Inherited: 0x0) 
struct FSectionEvaluationData
{
	int32_t ImplIndex;  // 0x0(0x4)
	struct FFrameNumber ForcedTime;  // 0x4(0x4)
	uint8_t  Flags;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// Size: 0x118(Inherited: 0x0) 
struct FMovieSceneSequenceHierarchy
{
	struct FMovieSceneSequenceHierarchyNode RootNode;  // 0x0(0x18)
	struct FMovieSceneSubSequenceTree Tree;  // 0x18(0x60)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;  // 0x78(0x50)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;  // 0xC8(0x50)

}; 
// Function MovieScene.MovieSceneSection.GetRowIndex
// Size: 0x4(Inherited: 0x0) 
struct FGetRowIndex
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
// Size: 0x1(Inherited: 0x0) 
struct FGetDisableCameraCuts
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// Size: 0x18(Inherited: 0x0) 
struct FMovieSceneSequenceHierarchyNode
{
	struct FMovieSceneSequenceID ParentID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FMovieSceneSequenceID> Children;  // 0x8(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneSubSequenceData
// Size: 0x108(Inherited: 0x0) 
struct FMovieSceneSubSequenceData
{
	struct FSoftObjectPath Sequence;  // 0x0(0x18)
	struct FMovieSceneSequenceTransform OuterToInnerTransform;  // 0x18(0x20)
	struct FMovieSceneSequenceTransform RootToSequenceTransform;  // 0x38(0x20)
	struct FFrameRate TickResolution;  // 0x58(0x8)
	struct FMovieSceneSequenceID DeterministicSequenceID;  // 0x60(0x4)
	struct FMovieSceneFrameRange ParentPlayRange;  // 0x64(0x10)
	struct FFrameNumber ParentStartFrameOffset;  // 0x74(0x4)
	struct FFrameNumber ParentEndFrameOffset;  // 0x78(0x4)
	struct FFrameNumber ParentFirstLoopStartFrameOffset;  // 0x7C(0x4)
	char pad_128_1 : 7;  // 0x80(0x1)
	bool bCanLoop : 1;  // 0x80(0x1)
	char pad_129[3];  // 0x81(0x3)
	struct FMovieSceneFrameRange PlayRange;  // 0x84(0x10)
	struct FMovieSceneFrameRange FullPlayRange;  // 0x94(0x10)
	struct FMovieSceneFrameRange UnwarpedPlayRange;  // 0xA4(0x10)
	struct FMovieSceneFrameRange PreRollRange;  // 0xB4(0x10)
	struct FMovieSceneFrameRange PostRollRange;  // 0xC4(0x10)
	int16_t HierarchicalBias;  // 0xD4(0x2)
	char pad_214_1 : 7;  // 0xD6(0x1)
	bool bHasHierarchicalEasing : 1;  // 0xD6(0x1)
	char pad_215[1];  // 0xD7(0x1)
	struct FMovieSceneSequenceInstanceDataPtr InstanceData;  // 0xD8(0x18)
	char pad_240[8];  // 0xF0(0x8)
	struct FGuid SubSectionSignature;  // 0xF8(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// Size: 0x18(Inherited: 0x0) 
struct FMovieSceneSequenceInstanceDataPtr
{
	char pad_0[24];  // 0x0(0x18)

}; 
// ScriptStruct MovieScene.MovieSceneSequenceTransform
// Size: 0x20(Inherited: 0x0) 
struct FMovieSceneSequenceTransform
{
	struct FMovieSceneTimeTransform LinearTransform;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms;  // 0x10(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
// Size: 0x14(Inherited: 0x0) 
struct FMovieSceneNestedSequenceTransform
{
	struct FMovieSceneTimeTransform LinearTransform;  // 0x0(0xC)
	struct FMovieSceneTimeWarping Warping;  // 0xC(0x8)

}; 
// Function MovieScene.MovieSceneSection.GetOverlapPriority
// Size: 0x4(Inherited: 0x0) 
struct FGetOverlapPriority
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneTimeWarping
// Size: 0x8(Inherited: 0x0) 
struct FMovieSceneTimeWarping
{
	struct FFrameNumber Start;  // 0x0(0x4)
	struct FFrameNumber End;  // 0x4(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneSubSequenceTree
// Size: 0x60(Inherited: 0x0) 
struct FMovieSceneSubSequenceTree
{
	char pad_0[96];  // 0x0(0x60)

}; 
// ScriptStruct MovieScene.MovieSceneSequencePlaybackParams
// Size: 0x28(Inherited: 0x0) 
struct FMovieSceneSequencePlaybackParams
{
	struct FFrameTime Frame;  // 0x0(0x8)
	float Time;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FString MarkedFrame;  // 0x10(0x10)
	uint8_t  PositionType;  // 0x20(0x1)
	uint8_t  UpdateMethod;  // 0x21(0x1)
	char pad_34[6];  // 0x22(0x6)

}; 
// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// Size: 0x14(Inherited: 0x0) 
struct FMovieSceneSequencePlaybackSettings
{
	char bAutoPlay : 1;  // 0x0(0x1)
	char pad_0_1 : 7;  // 0x0(0x1)
	char pad_1[4];  // 0x1(0x4)
	struct FMovieSceneSequenceLoopCount LoopCount;  // 0x4(0x4)
	float PlayRate;  // 0x8(0x4)
	float StartTime;  // 0xC(0x4)
	char bRandomStartTime : 1;  // 0x10(0x1)
	char bRestoreState : 1;  // 0x10(0x1)
	char bDisableMovementInput : 1;  // 0x10(0x1)
	char bDisableLookAtInput : 1;  // 0x10(0x1)
	char bHidePlayer : 1;  // 0x10(0x1)
	char bHideHud : 1;  // 0x10(0x1)
	char bDisableCameraCuts : 1;  // 0x10(0x1)
	char bPauseAtEnd : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneSequenceReplProperties
{
	struct FFrameTime LastKnownPosition;  // 0x0(0x8)
	char EMovieScenePlayerStatus LastKnownStatus;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	int32_t LastKnownNumLoops;  // 0xC(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneSequenceActorPointers
// Size: 0x18(Inherited: 0x0) 
struct FMovieSceneSequenceActorPointers
{
	struct AActor* SequenceActor;  // 0x0(0x8)
	struct TScriptInterface<IMovieSceneSequenceActor> SequenceActorInterface;  // 0x8(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneWarpCounter
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneWarpCounter
{
	struct TArray<uint32_t> WarpCounts;  // 0x0(0x10)

}; 
// Function MovieScene.MovieSceneSection.GetPostRollFrames
// Size: 0x4(Inherited: 0x0) 
struct FGetPostRollFrames
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneSpawnable
// Size: 0x90(Inherited: 0x0) 
struct FMovieSceneSpawnable
{
	struct FTransform SpawnTransform;  // 0x0(0x30)
	struct TArray<struct FName> Tags;  // 0x30(0x10)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bContinuouslyRespawn : 1;  // 0x40(0x1)
	char pad_65_1 : 7;  // 0x41(0x1)
	bool bNetAddressableName : 1;  // 0x41(0x1)
	char pad_66_1 : 7;  // 0x42(0x1)
	bool bEvaluateTracksWhenNotSpawned : 1;  // 0x42(0x1)
	char pad_67[1];  // 0x43(0x1)
	struct FGuid Guid;  // 0x44(0x10)
	char pad_84[4];  // 0x54(0x4)
	struct FString Name;  // 0x58(0x10)
	struct UObject* ObjectTemplate;  // 0x68(0x8)
	struct TArray<struct FGuid> ChildPossessables;  // 0x70(0x10)
	uint8_t  Ownership;  // 0x80(0x1)
	char pad_129[3];  // 0x81(0x3)
	struct FName LevelName;  // 0x84(0x8)
	char pad_140[4];  // 0x8C(0x4)

}; 
// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// Size: 0x20(Inherited: 0x20) 
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{

}; 
// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// Size: 0x4(Inherited: 0x0) 
struct FMovieSceneTrackDisplayOptions
{
	char bShowVerticalFrames : 1;  // 0x0(0x1)
	char pad_0_1 : 7;  // 0x0(0x1)
	char pad_1[4];  // 0x1(0x4)

}; 
// ScriptStruct MovieScene.MovieSceneTrackEvaluationField
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneTrackEvaluationField
{
	struct TArray<struct FMovieSceneTrackEvaluationFieldEntry> Entries;  // 0x0(0x10)

}; 
// ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry
// Size: 0x20(Inherited: 0x0) 
struct FMovieSceneTrackEvaluationFieldEntry
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	struct FFrameNumberRange Range;  // 0x8(0x10)
	struct FFrameNumber ForcedTime;  // 0x18(0x4)
	uint8_t  Flags;  // 0x1C(0x1)
	char pad_29[1];  // 0x1D(0x1)
	int16_t LegacySortOrder;  // 0x1E(0x2)

}; 
// ScriptStruct MovieScene.MovieSceneTrackInstanceInput
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneTrackInstanceInput
{
	struct UMovieSceneSection* Section;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)

}; 
// Function MovieScene.MovieSceneSequence.FindBindingByTag
// Size: 0x20(Inherited: 0x0) 
struct FFindBindingByTag
{
	struct FName InBindingName;  // 0x0(0x8)
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x8(0x18)

}; 
// Function MovieScene.MovieSceneSequence.FindBindingsByTag
// Size: 0x18(Inherited: 0x0) 
struct FFindBindingsByTag
{
	struct FName InBindingName;  // 0x0(0x8)
	struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;  // 0x8(0x10)

}; 
// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
// Size: 0x28(Inherited: 0x0) 
struct FGetBoundObjects
{
	struct FMovieSceneObjectBindingID ObjectBinding;  // 0x0(0x18)
	struct TArray<struct UObject*> ReturnValue;  // 0x18(0x10)

}; 
// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
// Size: 0x10(Inherited: 0x0) 
struct FGetCurrentTime
{
	struct FQualifiedFrameTime ReturnValue;  // 0x0(0x10)

}; 
// Function MovieScene.MovieSceneSequencePlayer.GetDuration
// Size: 0x10(Inherited: 0x0) 
struct FGetDuration
{
	struct FQualifiedFrameTime ReturnValue;  // 0x0(0x10)

}; 
// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
// Size: 0x10(Inherited: 0x0) 
struct FGetEndTime
{
	struct FQualifiedFrameTime ReturnValue;  // 0x0(0x10)

}; 
// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
// Size: 0x4(Inherited: 0x0) 
struct FGetFrameDuration
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
// Size: 0x8(Inherited: 0x0) 
struct FGetFrameRate
{
	struct FFrameRate ReturnValue;  // 0x0(0x8)

}; 
// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// Size: 0x4(Inherited: 0x0) 
struct FGetPlayRate
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function MovieScene.MovieSceneSubSection.GetSequence
// Size: 0x8(Inherited: 0x0) 
struct FGetSequence
{
	struct UMovieSceneSequence* ReturnValue;  // 0x0(0x8)

}; 
// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
// Size: 0x10(Inherited: 0x0) 
struct FGetStartTime
{
	struct FQualifiedFrameTime ReturnValue;  // 0x0(0x10)

}; 
// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// Size: 0x1(Inherited: 0x0) 
struct FIsPlaying
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MovieScene.MovieSceneSequencePlayer.IsReversed
// Size: 0x1(Inherited: 0x0) 
struct FIsReversed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MovieScene.MovieSceneSection.SetIsActive
// Size: 0x1(Inherited: 0x0) 
struct FSetIsActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInIsActive : 1;  // 0x0(0x1)

}; 
// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
// Size: 0x8(Inherited: 0x0) 
struct FJumpToFrame
{
	struct FFrameTime NewPosition;  // 0x0(0x8)

}; 
// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
// Size: 0x18(Inherited: 0x0) 
struct FJumpToMarkedFrame
{
	struct FString InLabel;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
// Size: 0x4(Inherited: 0x0) 
struct FJumpToSeconds
{
	float TimeInSeconds;  // 0x0(0x4)

}; 
// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// Size: 0x4(Inherited: 0x0) 
struct FPlayLooping
{
	int32_t NumLoops;  // 0x0(0x4)

}; 
// Function MovieScene.MovieSceneSequencePlayer.PlayTo
// Size: 0x28(Inherited: 0x0) 
struct FPlayTo
{
	struct FMovieSceneSequencePlaybackParams PlaybackParams;  // 0x0(0x28)

}; 
// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
// Size: 0x8(Inherited: 0x0) 
struct FPlayToFrame
{
	struct FFrameTime NewPosition;  // 0x0(0x8)

}; 
// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
// Size: 0x18(Inherited: 0x0) 
struct FPlayToMarkedFrame
{
	struct FString InLabel;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
// Size: 0x4(Inherited: 0x0) 
struct FPlayToSeconds
{
	float TimeInSeconds;  // 0x0(0x4)

}; 
// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
// Size: 0xC(Inherited: 0x0) 
struct FRPC_ExplicitServerUpdateEvent
{
	uint8_t  Method;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FFrameTime RelevantTime;  // 0x4(0x8)

}; 
// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
// Size: 0x8(Inherited: 0x0) 
struct FRPC_OnStopEvent
{
	struct FFrameTime StoppedTime;  // 0x0(0x8)

}; 
// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
// Size: 0x8(Inherited: 0x0) 
struct FScrubToFrame
{
	struct FFrameTime NewPosition;  // 0x0(0x8)

}; 
// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
// Size: 0x18(Inherited: 0x0) 
struct FScrubToMarkedFrame
{
	struct FString InLabel;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
// Size: 0x4(Inherited: 0x0) 
struct FScrubToSeconds
{
	float TimeInSeconds;  // 0x0(0x4)

}; 
// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
// Size: 0x1(Inherited: 0x0) 
struct FSetDisableCameraCuts
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInDisableCameraCuts : 1;  // 0x0(0x1)

}; 
// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
// Size: 0xC(Inherited: 0x0) 
struct FSetFrameRange
{
	int32_t StartFrame;  // 0x0(0x4)
	int32_t Duration;  // 0x4(0x4)
	float SubFrames;  // 0x8(0x4)

}; 
// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
// Size: 0x8(Inherited: 0x0) 
struct FSetFrameRate
{
	struct FFrameRate FrameRate;  // 0x0(0x8)

}; 
// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// Size: 0x28(Inherited: 0x0) 
struct FSetPlaybackPosition
{
	struct FMovieSceneSequencePlaybackParams PlaybackParams;  // 0x0(0x28)

}; 
// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// Size: 0x4(Inherited: 0x0) 
struct FSetPlayRate
{
	float PlayRate;  // 0x0(0x4)

}; 
// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
// Size: 0x8(Inherited: 0x0) 
struct FSetTimeRange
{
	float StartTime;  // 0x0(0x4)
	float Duration;  // 0x4(0x4)

}; 
// Function MovieScene.MovieSceneSection.GetBlendType
// Size: 0x2(Inherited: 0x0) 
struct FGetBlendType
{
	struct FOptionalMovieSceneBlendType ReturnValue;  // 0x0(0x2)

}; 
// Function MovieScene.MovieSceneSection.GetCompletionMode
// Size: 0x1(Inherited: 0x0) 
struct FGetCompletionMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function MovieScene.MovieSceneSection.GetPreRollFrames
// Size: 0x4(Inherited: 0x0) 
struct FGetPreRollFrames
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function MovieScene.MovieSceneSection.IsActive
// Size: 0x1(Inherited: 0x0) 
struct FIsActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MovieScene.MovieSceneSection.IsLocked
// Size: 0x1(Inherited: 0x0) 
struct FIsLocked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MovieScene.MovieSceneSection.SetBlendType
// Size: 0x1(Inherited: 0x0) 
struct FSetBlendType
{
	uint8_t  InBlendType;  // 0x0(0x1)

}; 
// Function MovieScene.MovieSceneSection.SetCompletionMode
// Size: 0x1(Inherited: 0x0) 
struct FSetCompletionMode
{
	uint8_t  InCompletionMode;  // 0x0(0x1)

}; 
// Function MovieScene.MovieSceneSection.SetOverlapPriority
// Size: 0x4(Inherited: 0x0) 
struct FSetOverlapPriority
{
	int32_t NewPriority;  // 0x0(0x4)

}; 
// Function MovieScene.MovieSceneSection.SetPreRollFrames
// Size: 0x4(Inherited: 0x0) 
struct FSetPreRollFrames
{
	int32_t InPreRollFrames;  // 0x0(0x4)

}; 
// Function MovieScene.MovieSceneSection.SetRowIndex
// Size: 0x4(Inherited: 0x0) 
struct FSetRowIndex
{
	int32_t NewRowIndex;  // 0x0(0x4)

}; 
// Function MovieScene.MovieSceneSubSection.SetSequence
// Size: 0x8(Inherited: 0x0) 
struct FSetSequence
{
	struct UMovieSceneSequence* Sequence;  // 0x0(0x8)

}; 
// Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
// Size: 0x1C(Inherited: 0x0) 
struct FOnRequestCurrentTime
{
	struct FQualifiedFrameTime InCurrentTime;  // 0x0(0x10)
	float InPlayRate;  // 0x10(0x4)
	struct FFrameTime ReturnValue;  // 0x14(0x8)

}; 
// Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
// Size: 0x10(Inherited: 0x0) 
struct FOnStartPlaying
{
	struct FQualifiedFrameTime InStartTime;  // 0x0(0x10)

}; 
// Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
// Size: 0x10(Inherited: 0x0) 
struct FOnStopPlaying
{
	struct FQualifiedFrameTime InStopTime;  // 0x0(0x10)

}; 
// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
// Size: 0x8(Inherited: 0x0) 
struct FOnEvaluate
{
	float Interp;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
