#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Size: 0x28(Inherited: 0x20) 
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
	struct UMovieSceneAudioSection* AudioSection;  // 0x20(0x8)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Size: 0xA0(Inherited: 0x8) 
struct FMovieSceneStringChannel : public FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times;  // 0x8(0x10)
	struct TArray<struct FString> Values;  // 0x18(0x10)
	struct FString DefaultValue;  // 0x28(0x10)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bHasDefaultValue : 1;  // 0x38(0x1)
	char pad_57[103];  // 0x39(0x67)

}; 
// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
// Size: 0x8(Inherited: 0x0) 
struct FGetSound
{
	struct USoundBase* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x80(Inherited: 0x20) 
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	struct TArray<struct FScalarParameterNameAndCurve> Scalars;  // 0x20(0x10)
	struct TArray<struct FBoolParameterNameAndCurve> Bools;  // 0x30(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds;  // 0x40(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors;  // 0x50(0x10)
	struct TArray<struct FColorParameterNameAndCurves> Colors;  // 0x60(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms;  // 0x70(0x10)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// Size: 0x88(Inherited: 0x80) 
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
	struct UMaterialParameterCollection* MPC;  // 0x80(0x8)

}; 
// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
// Size: 0x10(Inherited: 0x0) 
struct FAddScalarParameterKey
{
	struct FName InParameterName;  // 0x0(0x8)
	struct FFrameNumber InTime;  // 0x8(0x4)
	float InValue;  // 0xC(0x4)

}; 
// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// Size: 0x5A8(Inherited: 0x0) 
struct FTransformParameterNameAndCurves
{
	struct FName ParameterName;  // 0x0(0x8)
	struct FMovieSceneFloatChannel Translation[3];  // 0x8(0x1E0)
	struct FMovieSceneFloatChannel Rotation[3];  // 0x1E8(0x1E0)
	struct FMovieSceneFloatChannel Scale[3];  // 0x3C8(0x1E0)

}; 
// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size: 0x288(Inherited: 0x0) 
struct FColorParameterNameAndCurves
{
	struct FName ParameterName;  // 0x0(0x8)
	struct FMovieSceneFloatChannel RedCurve;  // 0x8(0xA0)
	struct FMovieSceneFloatChannel GreenCurve;  // 0xA8(0xA0)
	struct FMovieSceneFloatChannel BlueCurve;  // 0x148(0xA0)
	struct FMovieSceneFloatChannel AlphaCurve;  // 0x1E8(0xA0)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size: 0xD8(Inherited: 0x38) 
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneStringChannel StringCurve;  // 0x38(0xA0)

}; 
// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size: 0x30(Inherited: 0x8) 
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector Scale;  // 0x8(0xC)
	struct FFrameNumber Time;  // 0x14(0x4)
	char pad_24[24];  // 0x18(0x18)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// Size: 0x4(Inherited: 0x0) 
struct FMovieSceneTransformMask
{
	uint32_t Mask;  // 0x0(0x4)

}; 
// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
// Size: 0x98(Inherited: 0x0) 
struct FBoolParameterNameAndCurve
{
	struct FName ParameterName;  // 0x0(0x8)
	struct FMovieSceneBoolChannel ParameterCurve;  // 0x8(0x90)

}; 
// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size: 0xA8(Inherited: 0x0) 
struct FScalarParameterNameAndCurve
{
	struct FName ParameterName;  // 0x0(0x8)
	struct FMovieSceneFloatChannel ParameterCurve;  // 0x8(0xA0)

}; 
// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
// Size: 0x14(Inherited: 0x0) 
struct FAddVector2DParameterKey
{
	struct FName InParameterName;  // 0x0(0x8)
	struct FFrameNumber InTime;  // 0x8(0x4)
	struct FVector2D InValue;  // 0xC(0x8)

}; 
// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size: 0x1E8(Inherited: 0x0) 
struct FVectorParameterNameAndCurves
{
	struct FName ParameterName;  // 0x0(0x8)
	struct FMovieSceneFloatChannel XCurve;  // 0x8(0xA0)
	struct FMovieSceneFloatChannel YCurve;  // 0xA8(0xA0)
	struct FMovieSceneFloatChannel ZCurve;  // 0x148(0xA0)

}; 
// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
// Size: 0x18(Inherited: 0x0) 
struct FAddVectorParameterKey
{
	struct FName InParameterName;  // 0x0(0x8)
	struct FFrameNumber InTime;  // 0x8(0x4)
	struct FVector InValue;  // 0xC(0xC)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0xE8(Inherited: 0x20) 
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData PropertyData;  // 0x20(0x18)
	struct FMovieSceneActorReferenceData ActorReferenceData;  // 0x38(0xB0)

}; 
// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
// Size: 0x148(Inherited: 0x0) 
struct FVector2DParameterNameAndCurves
{
	struct FName ParameterName;  // 0x0(0x8)
	struct FMovieSceneFloatChannel XCurve;  // 0x8(0xA0)
	struct FMovieSceneFloatChannel YCurve;  // 0xA8(0xA0)

}; 
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
// Size: 0xC(Inherited: 0x0) 
struct FRemoveVector2DParameter
{
	struct FName InParameterName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0xE0(Inherited: 0x20) 
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID PathBindingID;  // 0x20(0x18)
	struct FMovieSceneFloatChannel TimingCurve;  // 0x38(0xA0)
	uint8_t  FrontAxisEnum;  // 0xD8(0x1)
	uint8_t  UpAxisEnum;  // 0xD9(0x1)
	char pad_218[2];  // 0xDA(0x2)
	char bFollow : 1;  // 0xDC(0x1)
	char bReverse : 1;  // 0xDC(0x1)
	char bForceUpright : 1;  // 0xDC(0x1)
	char pad_220_1 : 5;  // 0xDC(0x1)
	char pad_221[4];  // 0xDD(0x4)

}; 
// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x48(Inherited: 0x8) 
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector Location;  // 0x8(0xC)
	struct FRotator Rotation;  // 0x14(0xC)
	struct FVector Scale;  // 0x20(0xC)
	struct FFrameNumber Time;  // 0x2C(0x4)
	char pad_48[24];  // 0x30(0x18)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size: 0x20(Inherited: 0x0) 
struct FMovieSceneCameraShakeSectionData
{
	UCameraShakeBase* ShakeClass;  // 0x0(0x8)
	float PlayScale;  // 0x8(0x4)
	uint8_t  PlaySpace;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct FRotator UserDefinedPlaySpace;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size: 0x30(Inherited: 0x8) 
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
	struct FRotator Rotation;  // 0x8(0xC)
	struct FFrameNumber Time;  // 0x14(0x4)
	char pad_24[24];  // 0x18(0x18)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size: 0x28(Inherited: 0x8) 
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
	struct FFrameNumber Time;  // 0x8(0x4)
	char pad_12[28];  // 0xC(0x1C)

}; 
// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
// Size: 0x10(Inherited: 0x0) 
struct FSetShotDisplayName
{
	struct FString InShotDisplayName;  // 0x0(0x10)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// Size: 0x28(Inherited: 0x0) 
struct FMovieSceneEventPtrs
{
	struct UFunction* Function;  // 0x0(0x8)
	struct TFieldPath<FNone> BoundObjectProperty;  // 0x8(0x20)

}; 
// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size: 0x30(Inherited: 0x8) 
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector Location;  // 0x8(0xC)
	struct FFrameNumber Time;  // 0x14(0x4)
	char pad_24[24];  // 0x18(0x18)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size: 0x30(Inherited: 0x28) 
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector2D Vector;  // 0x28(0x8)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Size: 0xB0(Inherited: 0x8) 
struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes;  // 0x8(0x10)
	struct FMovieSceneActorReferenceKey DefaultValue;  // 0x18(0x28)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues;  // 0x40(0x10)
	char pad_80[96];  // 0x50(0x60)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// Size: 0x28(Inherited: 0x0) 
struct FMovieSceneActorReferenceKey
{
	struct FMovieSceneObjectBindingID Object;  // 0x0(0x18)
	struct FName ComponentName;  // 0x18(0x8)
	struct FName SocketName;  // 0x20(0x8)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
// Size: 0x30(Inherited: 0x0) 
struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
	char pad_0[48];  // 0x0(0x30)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0x88(Inherited: 0x8) 
struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times;  // 0x8(0x10)
	struct TArray<struct FEventPayload> KeyValues;  // 0x18(0x10)
	char pad_40[96];  // 0x28(0x60)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// Size: 0x20(Inherited: 0x0) 
struct FMovieSceneCameraAnimSectionData
{
	struct UCameraAnim* CameraAnim;  // 0x0(0x8)
	float PlayRate;  // 0x8(0x4)
	float PlayScale;  // 0xC(0x4)
	float BlendInTime;  // 0x10(0x4)
	float BlendOutTime;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bLooping : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size: 0xB8(Inherited: 0x20) 
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneParticleChannel ParticleKeys;  // 0x20(0x98)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// Size: 0x48(Inherited: 0x20) 
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneCameraAnimSectionData SourceData;  // 0x20(0x20)
	struct FFrameNumber SectionStartTime;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Size: 0x88(Inherited: 0x80) 
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	int32_t MaterialIndex;  // 0x80(0x4)
	char pad_132[4];  // 0x84(0x4)

}; 
// ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x30(Inherited: 0x0) 
struct FEventPayload
{
	struct FName EventName;  // 0x0(0x8)
	struct FMovieSceneEventParameters parameters;  // 0x8(0x28)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
// Size: 0x48(Inherited: 0x20) 
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneCameraShakeSectionData SourceData;  // 0x20(0x20)
	struct FFrameNumber SectionStartTime;  // 0x40(0x4)
	struct FFrameNumber SectionEndTime;  // 0x44(0x4)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneEvent
// Size: 0x28(Inherited: 0x0) 
struct FMovieSceneEvent
{
	struct FMovieSceneEventPtrs Ptrs;  // 0x0(0x28)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
// Size: 0x88(Inherited: 0x8) 
struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes;  // 0x8(0x10)
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues;  // 0x18(0x10)
	char pad_40[96];  // 0x28(0x60)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
// Size: 0x20(Inherited: 0x0) 
struct FMovieSceneCameraShakeSourceTrigger
{
	UCameraShakeBase* ShakeClass;  // 0x0(0x8)
	float PlayScale;  // 0x8(0x4)
	uint8_t  PlaySpace;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct FRotator UserDefinedPlaySpace;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// Size: 0x10(Inherited: 0x0) 
struct FMovieSceneEventPayloadVariable
{
	struct FString Value;  // 0x0(0x10)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
// Size: 0x40(Inherited: 0x20) 
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate
{
	struct TArray<struct FFrameNumber> TriggerTimes;  // 0x20(0x10)
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> TriggerValues;  // 0x30(0x10)

}; 
// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
// Size: 0x40(Inherited: 0x0) 
struct FAddTransformParameterKey
{
	struct FName InParameterName;  // 0x0(0x8)
	struct FFrameNumber InTime;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FTransform InValue;  // 0x10(0x30)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size: 0x48(Inherited: 0x20) 
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneCameraShakeSectionData SourceData;  // 0x20(0x20)
	struct FFrameNumber SectionStartTime;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size: 0x38(Inherited: 0x8) 
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
	struct FLinearColor Color;  // 0x8(0x10)
	struct FFrameNumber Time;  // 0x18(0x4)
	char pad_28[28];  // 0x1C(0x1C)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Size: 0x2C0(Inherited: 0x38) 
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel Curves[4];  // 0x38(0x280)
	uint8_t  BlendType;  // 0x2B8(0x1)
	char pad_697[7];  // 0x2B9(0x7)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size: 0xD8(Inherited: 0x0) 
struct FMovieSceneSkeletalAnimationParams
{
	struct UAnimSequenceBase* Animation;  // 0x0(0x8)
	struct FFrameNumber FirstLoopStartFrameOffset;  // 0x8(0x4)
	struct FFrameNumber StartFrameOffset;  // 0xC(0x4)
	struct FFrameNumber EndFrameOffset;  // 0x10(0x4)
	float PlayRate;  // 0x14(0x4)
	char bReverse : 1;  // 0x18(0x1)
	char pad_24_1 : 7;  // 0x18(0x1)
	char pad_25[4];  // 0x19(0x4)
	struct FName SlotName;  // 0x1C(0x8)
	char pad_36[4];  // 0x24(0x4)
	struct FMovieSceneFloatChannel Weight;  // 0x28(0xA0)
	char pad_200_1 : 7;  // 0xC8(0x1)
	bool bSkipAnimNotifiers : 1;  // 0xC8(0x1)
	char pad_201_1 : 7;  // 0xC9(0x1)
	bool bForceCustomMode : 1;  // 0xC9(0x1)
	char pad_202[2];  // 0xCA(0x2)
	float StartOffset;  // 0xCC(0x4)
	float EndOffset;  // 0xD0(0x4)
	char pad_212[4];  // 0xD4(0x4)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// Size: 0x88(Inherited: 0x8) 
struct FMovieSceneEventChannel : public FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes;  // 0x8(0x10)
	struct TArray<struct FMovieSceneEvent> KeyValues;  // 0x18(0x10)
	char pad_40[96];  // 0x28(0x60)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x28(Inherited: 0x0) 
struct FMovieSceneEventParameters
{
	char pad_0[40];  // 0x0(0x28)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData
// Size: 0x48(Inherited: 0x0) 
struct FMovieSceneEventTriggerData
{
	struct FMovieSceneEventPtrs Ptrs;  // 0x0(0x28)
	struct FGuid ObjectBindingID;  // 0x28(0x10)
	char pad_56[16];  // 0x38(0x10)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0xB0(Inherited: 0x20) 
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneEventSectionData eventData;  // 0x20(0x88)
	char bFireEventsWhenForwards : 1;  // 0xA8(0x1)
	char bFireEventsWhenBackwards : 1;  // 0xA8(0x1)
	char pad_168_1 : 6;  // 0xA8(0x1)
	char pad_169[8];  // 0xA9(0x8)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Size: 0xD8(Inherited: 0x20) 
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel FadeCurve;  // 0x20(0xA0)
	struct FLinearColor FadeColor;  // 0xC0(0x10)
	char bFadeAudio : 1;  // 0xD0(0x1)
	char pad_208_1 : 7;  // 0xD0(0x1)
	char pad_209[8];  // 0xD1(0x8)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0xC8(Inherited: 0x38) 
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneBoolChannel BoolCurve;  // 0x38(0x90)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Size: 0xF8(Inherited: 0x38) 
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneObjectPathChannel ObjectChannel;  // 0x38(0xC0)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size: 0x80(Inherited: 0x80) 
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

}; 
// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
// Size: 0x18(Inherited: 0x0) 
struct FSetCameraBindingID
{
	struct FMovieSceneObjectBindingID InCameraBindingID;  // 0x0(0x18)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// Size: 0x98(Inherited: 0x98) 
struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{

}; 
// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
// Size: 0x10(Inherited: 0x0) 
struct FAddBoolParameterKey
{
	struct FName InParameterName;  // 0x0(0x8)
	struct FFrameNumber InTime;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool InValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// Size: 0xE8(Inherited: 0x20) 
struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate
{
	int32_t MaterialIndex;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct FMovieSceneObjectPathChannel MaterialChannel;  // 0x28(0xC0)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Size: 0x100(Inherited: 0x20) 
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;  // 0x20(0xE0)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Size: 0xE0(Inherited: 0xD8) 
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
	struct FFrameNumber SectionStartTime;  // 0xD8(0x4)
	struct FFrameNumber SectionEndTime;  // 0xDC(0x4)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0xC0(Inherited: 0x20) 
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel SlomoCurve;  // 0x20(0xA0)

}; 
// ScriptStruct MovieSceneTracks.LevelVisibilityComponentData
// Size: 0x8(Inherited: 0x0) 
struct FLevelVisibilityComponentData
{
	struct UMovieSceneLevelVisibilitySection* Section;  // 0x0(0x8)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// Size: 0x40(Inherited: 0x28) 
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
	char pad_40[8];  // 0x28(0x8)
	struct FVector4 Vector;  // 0x30(0x10)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// Size: 0x38(Inherited: 0x28) 
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector Vector;  // 0x28(0xC)
	char pad_52[4];  // 0x34(0x4)

}; 
// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size: 0xC8(Inherited: 0xC8) 
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{

}; 
// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
// Size: 0x1C(Inherited: 0x0) 
struct FAddColorParameterKey
{
	struct FName InParameterName;  // 0x0(0x8)
	struct FFrameNumber InTime;  // 0x8(0x4)
	struct FLinearColor InValue;  // 0xC(0x10)

}; 
// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
// Size: 0x50(Inherited: 0x0) 
struct FGetParameterNames
{
	struct TSet<struct FName> ParameterNames;  // 0x0(0x50)

}; 
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
// Size: 0xC(Inherited: 0x0) 
struct FRemoveBoolParameter
{
	struct FName InParameterName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
// Size: 0xC(Inherited: 0x0) 
struct FRemoveColorParameter
{
	struct FName InParameterName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
// Size: 0xC(Inherited: 0x0) 
struct FRemoveScalarParameter
{
	struct FName InParameterName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
// Size: 0xC(Inherited: 0x0) 
struct FRemoveTransformParameter
{
	struct FName InParameterName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
// Size: 0xC(Inherited: 0x0) 
struct FRemoveVectorParameter
{
	struct FName InParameterName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
// Size: 0x30(Inherited: 0x0) 
struct FBP_GetTransformOrigin
{
	struct FTransform ReturnValue;  // 0x0(0x30)

}; 
// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
// Size: 0x18(Inherited: 0x0) 
struct FGetConstraintBindingID
{
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x0(0x18)

}; 
// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
// Size: 0x18(Inherited: 0x0) 
struct FSetConstraintBindingID
{
	struct FMovieSceneObjectBindingID InConstraintBindingID;  // 0x0(0x18)

}; 
// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
// Size: 0x4(Inherited: 0x0) 
struct FGetStartOffset
{
	struct FFrameNumber ReturnValue;  // 0x0(0x4)

}; 
// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
// Size: 0x8(Inherited: 0x0) 
struct FSetSound
{
	struct USoundBase* InSound;  // 0x0(0x8)

}; 
// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
// Size: 0x4(Inherited: 0x0) 
struct FSetStartOffset
{
	struct FFrameNumber InStartOffset;  // 0x0(0x4)

}; 
// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
// Size: 0x18(Inherited: 0x0) 
struct FGetCameraBindingID
{
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x0(0x18)

}; 
// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
// Size: 0x10(Inherited: 0x0) 
struct FGetShotDisplayName
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
// Size: 0x10(Inherited: 0x0) 
struct FGetLevelNames
{
	struct TArray<struct FName> ReturnValue;  // 0x0(0x10)

}; 
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
// Size: 0x1(Inherited: 0x0) 
struct FGetVisibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
// Size: 0x10(Inherited: 0x0) 
struct FSetLevelNames
{
	struct TArray<struct FName> InLevelNames;  // 0x0(0x10)

}; 
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
// Size: 0x1(Inherited: 0x0) 
struct FSetVisibility
{
	uint8_t  InVisibility;  // 0x0(0x1)

}; 
