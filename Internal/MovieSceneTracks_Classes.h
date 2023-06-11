#pragma once 
#include <MovieSceneTracks_Structs.h>
 
 
 
// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0xA8(Inherited: 0x90) 
struct UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
	char pad_144[8];  // 0x90(0x8)
	struct TArray<struct UMovieSceneSection*> AudioSections;  // 0x98(0x10)

}; 



// Class MovieSceneTracks.MovieSceneCameraShakeEvaluator
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneCameraShakeEvaluator : public UObject
{

}; 



// Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x180(Inherited: 0xE8) 
struct UMovieSceneIntegerSection : public UMovieSceneSection
{
	char pad_232[8];  // 0xE8(0x8)
	struct FMovieSceneIntegerChannel IntegerCurve;  // 0xF0(0x90)

}; 



// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0xC0(Inherited: 0x90) 
struct UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
	struct UMovieSceneSection* SectionToKey;  // 0x90(0x8)
	struct FMovieScenePropertyBinding PropertyBinding;  // 0x98(0x14)
	char pad_172[4];  // 0xAC(0x4)
	struct TArray<struct UMovieSceneSection*> Sections;  // 0xB0(0x10)

}; 



// Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x378(Inherited: 0xE8) 
struct UMovieSceneVectorSection : public UMovieSceneSection
{
	char pad_232[8];  // 0xE8(0x8)
	struct FMovieSceneFloatChannel Curves[4];  // 0xF0(0x280)
	int32_t ChannelsUsed;  // 0x370(0x4)
	char pad_884[4];  // 0x374(0x4)

}; 



// Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0xE8(Inherited: 0xE8) 
struct UMovieSceneEventSectionBase : public UMovieSceneSection
{

}; 



// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// Size: 0x40(Inherited: 0x40) 
struct UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{

}; 



// Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneTransformOrigin : public UInterface
{

	struct FTransform BP_GetTransformOrigin(); // Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
}; 



// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x370(Inherited: 0xE8) 
struct UMovieSceneColorSection : public UMovieSceneSection
{
	char pad_232[8];  // 0xE8(0x8)
	struct FMovieSceneFloatChannel RedCurve;  // 0xF0(0xA0)
	struct FMovieSceneFloatChannel GreenCurve;  // 0x190(0xA0)
	struct FMovieSceneFloatChannel BlueCurve;  // 0x230(0xA0)
	struct FMovieSceneFloatChannel AlphaCurve;  // 0x2D0(0xA0)

}; 



// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x148(Inherited: 0xE8) 
struct UMovieSceneParameterSection : public UMovieSceneSection
{
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;  // 0xE8(0x10)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;  // 0xF8(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;  // 0x108(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;  // 0x118(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves;  // 0x128(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;  // 0x138(0x10)

	bool RemoveVectorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
	bool RemoveVector2DParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
	bool RemoveTransformParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
	bool RemoveScalarParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
	bool RemoveColorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
	bool RemoveBoolParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
	void GetParameterNames(struct TSet<struct FName>& ParameterNames); // Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
	void AddVectorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
	void AddVector2DParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector2D InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
	void AddTransformParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FTransform& InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
	void AddScalarParameterKey(struct FName InParameterName, struct FFrameNumber InTime, float InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
	void AddColorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FLinearColor InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
	void AddBoolParameterKey(struct FName InParameterName, struct FFrameNumber InTime, bool InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
}; 



// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x740(Inherited: 0xE8) 
struct UMovieScene3DTransformSection : public UMovieSceneSection
{
	char pad_232[8];  // 0xE8(0x8)
	struct FMovieSceneTransformMask TransformMask;  // 0xF0(0x4)
	char pad_244[4];  // 0xF4(0x4)
	struct FMovieSceneFloatChannel Translation[3];  // 0xF8(0x1E0)
	struct FMovieSceneFloatChannel Rotation[3];  // 0x2D8(0x1E0)
	struct FMovieSceneFloatChannel Scale[3];  // 0x4B8(0x1E0)
	struct FMovieSceneFloatChannel ManualWeight;  // 0x698(0xA0)
	char pad_1848_1 : 7;  // 0x738(0x1)
	bool bUseQuaternionInterpolation : 1;  // 0x738(0x1)
	char pad_1849[7];  // 0x739(0x7)

}; 



// Class MovieSceneTracks.IntegerChannelEvaluatorSystem
// Size: 0x40(Inherited: 0x40) 
struct UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
{

}; 



// Class MovieSceneTracks.FloatChannelEvaluatorSystem
// Size: 0x40(Inherited: 0x40) 
struct UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{

}; 



// Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x178(Inherited: 0xE8) 
struct UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
	char pad_232[8];  // 0xE8(0x8)
	struct FMovieSceneEventChannel EventChannel;  // 0xF0(0x88)

}; 



// Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0xC0(Inherited: 0xC0) 
struct UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{

}; 



// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0xA8(Inherited: 0x90) 
struct UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
	char pad_144[8];  // 0x90(0x8)
	struct TArray<struct UMovieSceneSection*> CameraAnimSections;  // 0x98(0x10)

}; 



// Class MovieSceneTracks.ByteChannelEvaluatorSystem
// Size: 0x40(Inherited: 0x40) 
struct UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
{

}; 



// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0xA8(Inherited: 0x90) 
struct UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
	char pad_144[8];  // 0x90(0x8)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections;  // 0x98(0x10)

}; 



// Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x1B8(Inherited: 0x110) 
struct UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
	struct FMovieSceneFloatChannel TimingCurve;  // 0x110(0xA0)
	uint8_t  FrontAxisEnum;  // 0x1B0(0x1)
	uint8_t  UpAxisEnum;  // 0x1B1(0x1)
	char pad_434[2];  // 0x1B2(0x2)
	char bFollow : 1;  // 0x1B4(0x1)
	char bReverse : 1;  // 0x1B4(0x1)
	char bForceUpright : 1;  // 0x1B4(0x1)
	char pad_436_1 : 5;  // 0x1B4(0x1)
	char pad_437[4];  // 0x1B5(0x4)

}; 



// Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x110(Inherited: 0xE8) 
struct UMovieScene3DConstraintSection : public UMovieSceneSection
{
	struct FGuid ConstraintId;  // 0xE8(0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID;  // 0xF8(0x18)

	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	struct FMovieSceneObjectBindingID GetConstraintBindingID(); // Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
}; 



// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool bIsSlateColor : 1;  // 0xC0(0x1)
	char pad_193[7];  // 0xC1(0x7)

}; 



// Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x130(Inherited: 0x110) 
struct UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
	char pad_272[8];  // 0x110(0x8)
	struct FName AttachSocketName;  // 0x118(0x8)
	struct FName AttachComponentName;  // 0x120(0x8)
	uint8_t  AttachmentLocationRule;  // 0x128(0x1)
	uint8_t  AttachmentRotationRule;  // 0x129(0x1)
	uint8_t  AttachmentScaleRule;  // 0x12A(0x1)
	uint8_t  DetachmentLocationRule;  // 0x12B(0x1)
	uint8_t  DetachmentRotationRule;  // 0x12C(0x1)
	uint8_t  DetachmentScaleRule;  // 0x12D(0x1)
	char pad_302[2];  // 0x12E(0x2)

}; 



// Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
	struct UEnum* Enum;  // 0xC0(0x8)

}; 



// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0xA0(Inherited: 0x90) 
struct UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> ConstraintSections;  // 0x90(0x10)

}; 



// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0xA0(Inherited: 0xA0) 
struct UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{

}; 



// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0xC0(Inherited: 0xC0) 
struct UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{

}; 



// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x338(Inherited: 0xE8) 
struct UMovieSceneAudioSection : public UMovieSceneSection
{
	struct USoundBase* Sound;  // 0xE8(0x8)
	struct FFrameNumber StartFrameOffset;  // 0xF0(0x4)
	float StartOffset;  // 0xF4(0x4)
	float AudioStartTime;  // 0xF8(0x4)
	float AudioDilationFactor;  // 0xFC(0x4)
	float AudioVolume;  // 0x100(0x4)
	char pad_260[4];  // 0x104(0x4)
	struct FMovieSceneFloatChannel SoundVolume;  // 0x108(0xA0)
	struct FMovieSceneFloatChannel PitchMultiplier;  // 0x1A8(0xA0)
	struct FMovieSceneActorReferenceData AttachActorData;  // 0x248(0xB0)
	char pad_760_1 : 7;  // 0x2F8(0x1)
	bool bLooping : 1;  // 0x2F8(0x1)
	char pad_761_1 : 7;  // 0x2F9(0x1)
	bool bSuppressSubtitles : 1;  // 0x2F9(0x1)
	char pad_762_1 : 7;  // 0x2FA(0x1)
	bool bOverrideAttenuation : 1;  // 0x2FA(0x1)
	char pad_763[5];  // 0x2FB(0x5)
	struct USoundAttenuation* AttenuationSettings;  // 0x300(0x8)
	struct FDelegate OnQueueSubtitles;  // 0x308(0x10)
	struct FMulticastInlineDelegate OnAudioFinished;  // 0x318(0x10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent;  // 0x328(0x10)

	void SetStartOffset(struct FFrameNumber InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	void SetSound(struct USoundBase* InSound); // Function MovieSceneTracks.MovieSceneAudioSection.SetSound
	struct FFrameNumber GetStartOffset(); // Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	struct USoundBase* GetSound(); // Function MovieSceneTracks.MovieSceneAudioSection.GetSound
}; 



// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0xA8(Inherited: 0xA0) 
struct UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
	char pad_160[8];  // 0xA0(0x8)

}; 



// Class MovieSceneTracks.MovieScenePropertySystem
// Size: 0x58(Inherited: 0x40) 
struct UMovieScenePropertySystem : public UMovieSceneEntitySystem
{
	char pad_64[8];  // 0x40(0x8)
	struct UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;  // 0x48(0x8)
	char pad_80[8];  // 0x50(0x8)

}; 



// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
// Size: 0x90(Inherited: 0x90) 
struct UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{

}; 



// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
// Size: 0x58(Inherited: 0x58) 
struct UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{

}; 



// Class MovieSceneTracks.MovieScenePostEvalEventSystem
// Size: 0x90(Inherited: 0x90) 
struct UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{

}; 



// Class MovieSceneTracks.MovieSceneComponentTransformSystem
// Size: 0x58(Inherited: 0x58) 
struct UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{

}; 



// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// Size: 0x108(Inherited: 0xE8) 
struct UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{
	struct FMovieSceneCameraShakeSectionData ShakeData;  // 0xE8(0x20)

}; 



// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xC0(Inherited: 0xC0) 
struct UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{

}; 



// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x228(Inherited: 0xE8) 
struct UMovieSceneActorReferenceSection : public UMovieSceneSection
{
	struct FMovieSceneActorReferenceData ActorReferenceData;  // 0xE8(0xB0)
	struct FIntegralCurve ActorGuidIndexCurve;  // 0x198(0x80)
	struct TArray<struct FString> ActorGuidStrings;  // 0x218(0x10)

}; 



// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
	char pad_192[8];  // 0xC0(0x8)

}; 



// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
// Size: 0x40(Inherited: 0x40) 
struct UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{

}; 



// Class MovieSceneTracks.MovieSceneBoolPropertySystem
// Size: 0x58(Inherited: 0x58) 
struct UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
{

}; 



// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
	char pad_192[8];  // 0xC0(0x8)

}; 



// Class MovieSceneTracks.MovieSceneBytePropertySystem
// Size: 0x58(Inherited: 0x58) 
struct UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
{

}; 



// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x188(Inherited: 0xE8) 
struct UMovieSceneByteSection : public UMovieSceneSection
{
	char pad_232[8];  // 0xE8(0x8)
	struct FMovieSceneByteChannel ByteCurve;  // 0xF0(0x98)

}; 



// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0xB8(Inherited: 0x90) 
struct UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
	char pad_144[16];  // 0x90(0x10)
	char bFireEventsWhenForwards : 1;  // 0xA0(0x1)
	char bFireEventsWhenBackwards : 1;  // 0xA0(0x1)
	char pad_160_1 : 6;  // 0xA0(0x1)
	char pad_161[4];  // 0xA1(0x4)
	uint8_t  EventPosition;  // 0xA4(0x1)
	char pad_165[3];  // 0xA5(0x3)
	struct TArray<struct UMovieSceneSection*> Sections;  // 0xA8(0x10)

}; 



// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
	struct UEnum* Enum;  // 0xC0(0x8)

}; 



// Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size: 0x128(Inherited: 0xE8) 
struct UMovieSceneCameraAnimSection : public UMovieSceneSection
{
	struct FMovieSceneCameraAnimSectionData AnimData;  // 0xE8(0x20)
	struct UCameraAnim* CameraAnim;  // 0x108(0x8)
	float PlayRate;  // 0x110(0x4)
	float PlayScale;  // 0x114(0x4)
	float BlendInTime;  // 0x118(0x4)
	float BlendOutTime;  // 0x11C(0x4)
	char pad_288_1 : 7;  // 0x120(0x1)
	bool bLooping : 1;  // 0x120(0x1)
	char pad_289[7];  // 0x121(0x7)

}; 



// Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x188(Inherited: 0xE8) 
struct UMovieSceneEnumSection : public UMovieSceneSection
{
	char pad_232[8];  // 0xE8(0x8)
	struct FMovieSceneByteChannel EnumCurve;  // 0xF0(0x98)

}; 



// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x160(Inherited: 0xE8) 
struct UMovieSceneCameraCutSection : public UMovieSceneSection
{
	char pad_232[8];  // 0xE8(0x8)
	char pad_240_1 : 7;  // 0xF0(0x1)
	bool bLockPreviousCamera : 1;  // 0xF0(0x1)
	char pad_241[3];  // 0xF1(0x3)
	struct FGuid CameraGuid;  // 0xF4(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID;  // 0x104(0x18)
	char pad_284[4];  // 0x11C(0x4)
	struct FTransform InitialCameraCutTransform;  // 0x120(0x30)
	char pad_336_1 : 7;  // 0x150(0x1)
	bool bHasInitialCameraCutTransform : 1;  // 0x150(0x1)
	char pad_337[15];  // 0x151(0xF)

	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	struct FMovieSceneObjectBindingID GetCameraBindingID(); // Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
}; 



// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
// Size: 0x40(Inherited: 0x40) 
struct UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{

}; 



// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0xA8(Inherited: 0x90) 
struct UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
	char pad_144_1 : 7;  // 0x90(0x1)
	bool bCanBlend : 1;  // 0x90(0x1)
	char pad_145[7];  // 0x91(0x7)
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x98(0x10)

}; 



// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
// Size: 0xB8(Inherited: 0x50) 
struct UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{
	char pad_80[104];  // 0x50(0x68)

}; 



// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x128(Inherited: 0xE8) 
struct UMovieSceneCameraShakeSection : public UMovieSceneSection
{
	struct FMovieSceneCameraShakeSectionData ShakeData;  // 0xE8(0x20)
	UCameraShakeBase* ShakeClass;  // 0x108(0x8)
	float PlayScale;  // 0x110(0x4)
	uint8_t  PlaySpace;  // 0x114(0x1)
	char pad_277[3];  // 0x115(0x3)
	struct FRotator UserDefinedPlaySpace;  // 0x118(0xC)
	char pad_292[4];  // 0x124(0x4)

}; 



// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0xA0(Inherited: 0xA0) 
struct UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{

}; 



// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0xC0(Inherited: 0xC0) 
struct UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{

}; 



// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// Size: 0xA8(Inherited: 0x90) 
struct UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{
	char pad_144[8];  // 0x90(0x8)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections;  // 0x98(0x10)

}; 



// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// Size: 0x170(Inherited: 0xE8) 
struct UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{
	struct FMovieSceneCameraShakeSourceTriggerChannel Channel;  // 0xE8(0x88)

}; 



// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0xA8(Inherited: 0x90) 
struct UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
	char pad_144[8];  // 0x90(0x8)
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x98(0x10)

}; 



// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// Size: 0xA8(Inherited: 0x90) 
struct UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{
	char pad_144[8];  // 0x90(0x8)
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x98(0x10)

}; 



// Class MovieSceneTracks.MovieSceneEventSystem
// Size: 0x90(Inherited: 0x40) 
struct UMovieSceneEventSystem : public UMovieSceneEntitySystem
{
	char pad_64[80];  // 0x40(0x50)

}; 



// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x190(Inherited: 0x168) 
struct UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
	struct FString ShotDisplayName;  // 0x168(0x10)
	struct FText DisplayName;  // 0x178(0x18)

	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	struct FString GetShotDisplayName(); // Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
}; 



// Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
// Size: 0x90(Inherited: 0x68) 
struct UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
{
	char pad_104[40];  // 0x68(0x28)

}; 



// Class MovieSceneTracks.MovieSceneColorPropertySystem
// Size: 0x58(Inherited: 0x58) 
struct UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
{

}; 



// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
// Size: 0x1C0(Inherited: 0x40) 
struct UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{
	char pad_64[384];  // 0x40(0x180)

}; 



// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
// Size: 0x220(Inherited: 0x40) 
struct UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{
	char pad_64[480];  // 0x40(0x1E0)

}; 



// Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
// Size: 0x58(Inherited: 0x40) 
struct UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{
	char pad_64[24];  // 0x40(0x18)

}; 



// Class MovieSceneTracks.MovieSceneEnumPropertySystem
// Size: 0x58(Inherited: 0x58) 
struct UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
{

}; 



// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
// Size: 0x58(Inherited: 0x58) 
struct UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{

}; 



// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x118(Inherited: 0xE8) 
struct UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
	char pad_232[8];  // 0xE8(0x8)
	struct FMovieSceneEvent Event;  // 0xF0(0x28)

}; 



// Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x1E8(Inherited: 0xE8) 
struct UMovieSceneEventSection : public UMovieSceneSection
{
	struct FNameCurve Events;  // 0xE8(0x78)
	struct FMovieSceneEventSectionData eventData;  // 0x160(0x88)

}; 



// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
// Size: 0x90(Inherited: 0x90) 
struct UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{

}; 



// Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x1A0(Inherited: 0xE8) 
struct UMovieSceneFadeSection : public UMovieSceneSection
{
	struct FMovieSceneFloatChannel FloatCurve;  // 0xE8(0xA0)
	struct FLinearColor FadeColor;  // 0x188(0x10)
	char bFadeAudio : 1;  // 0x198(0x1)
	char pad_408_1 : 7;  // 0x198(0x1)
	char pad_409[8];  // 0x199(0x8)

}; 



// Class MovieSceneTracks.MovieSceneInitialValueSystem
// Size: 0x40(Inherited: 0x40) 
struct UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
{

}; 



// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
	char pad_192[8];  // 0xC0(0x8)

}; 



// Class MovieSceneTracks.MovieSceneFloatPropertySystem
// Size: 0x58(Inherited: 0x58) 
struct UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{

}; 



// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x190(Inherited: 0xE8) 
struct UMovieSceneFloatSection : public UMovieSceneSection
{
	char pad_232[8];  // 0xE8(0x8)
	struct FMovieSceneFloatChannel FloatCurve;  // 0xF0(0xA0)

}; 



// Class MovieSceneTracks.MovieSceneIntegerPropertySystem
// Size: 0x58(Inherited: 0x58) 
struct UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
{

}; 



// Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0xC0(Inherited: 0xC0) 
struct UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{

}; 



// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// Size: 0x1E8(Inherited: 0x40) 
struct UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
	char pad_64[424];  // 0x40(0x1A8)

}; 



// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0x108(Inherited: 0xE8) 
struct UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
	char pad_232[8];  // 0xE8(0x8)
	uint8_t  Visibility;  // 0xF0(0x1)
	char pad_241[7];  // 0xF1(0x7)
	struct TArray<struct FName> LevelNames;  // 0xF8(0x10)

	void SetVisibility(uint8_t  InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	void SetLevelNames(struct TArray<struct FName>& InLevelNames); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	uint8_t  GetVisibility(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	struct TArray<struct FName> GetLevelNames(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
}; 



// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
// Size: 0x1A8(Inherited: 0x40) 
struct UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{
	char pad_64[360];  // 0x40(0x168)

}; 



// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0xA0(Inherited: 0x90) 
struct UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x90(0x10)

}; 



// Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0xA0(Inherited: 0x90) 
struct UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x90(0x10)

}; 



// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0xB0(Inherited: 0xA0) 
struct UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
	char pad_160[8];  // 0xA0(0x8)
	struct UMaterialParameterCollection* MPC;  // 0xA8(0x8)

}; 



// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0xB0(Inherited: 0xA0) 
struct UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
	char pad_160[8];  // 0xA0(0x8)
	int32_t MaterialIndex;  // 0xA8(0x4)
	char pad_172[4];  // 0xAC(0x4)

}; 



// Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
// Size: 0x98(Inherited: 0x40) 
struct UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{
	char pad_64[88];  // 0x40(0x58)

}; 



// Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x1A8(Inherited: 0xE8) 
struct UMovieSceneObjectPropertySection : public UMovieSceneSection
{
	struct FMovieSceneObjectPathChannel ObjectChannel;  // 0xE8(0xC0)

}; 



// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0xD0(Inherited: 0xC0) 
struct UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
	char pad_192[8];  // 0xC0(0x8)
	UObject* PropertyClass;  // 0xC8(0x8)

}; 



// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x180(Inherited: 0xE8) 
struct UMovieSceneParticleSection : public UMovieSceneSection
{
	struct FMovieSceneParticleChannel ParticleKeys;  // 0xE8(0x98)

}; 



// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0xA8(Inherited: 0x90) 
struct UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
	char pad_144[8];  // 0x90(0x8)
	struct TArray<struct UMovieSceneSection*> ParticleSections;  // 0x98(0x10)

}; 



// Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
// Size: 0x90(Inherited: 0x68) 
struct UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
{
	char pad_104[40];  // 0x68(0x28)

}; 



// Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
// Size: 0x90(Inherited: 0x68) 
struct UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
{
	char pad_104[40];  // 0x68(0x28)

}; 



// Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
// Size: 0x128(Inherited: 0x68) 
struct UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem
{
	char pad_104[192];  // 0x68(0xC0)

}; 



// Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
// Size: 0xB0(Inherited: 0x68) 
struct UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
{
	char pad_104[72];  // 0x68(0x48)

}; 



// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x1A8(Inherited: 0xE8) 
struct UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
	struct FMovieSceneObjectPathChannel MaterialChannel;  // 0xE8(0xC0)

}; 



// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0xD0(Inherited: 0xC0) 
struct UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
	char pad_192[8];  // 0xC0(0x8)
	int32_t MaterialIndex;  // 0xC8(0x4)
	char pad_204[4];  // 0xCC(0x4)

}; 



// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// Size: 0x248(Inherited: 0x40) 
struct UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
	char pad_64[520];  // 0x40(0x208)

}; 



// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
// Size: 0x40(Inherited: 0x40) 
struct UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{

}; 



// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x270(Inherited: 0xE8) 
struct UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
	struct FMovieSceneSkeletalAnimationParams Params;  // 0xE8(0xD8)
	struct UAnimSequence* AnimSequence;  // 0x1C0(0x8)
	struct UAnimSequenceBase* Animation;  // 0x1C8(0x8)
	float StartOffset;  // 0x1D0(0x4)
	float EndOffset;  // 0x1D4(0x4)
	float PlayRate;  // 0x1D8(0x4)
	char bReverse : 1;  // 0x1DC(0x1)
	char pad_476_1 : 7;  // 0x1DC(0x1)
	char pad_477[4];  // 0x1DD(0x4)
	struct FName SlotName;  // 0x1E0(0x8)
	struct FVector StartLocationOffset;  // 0x1E8(0xC)
	struct FRotator StartRotationOffset;  // 0x1F4(0xC)
	char pad_512_1 : 7;  // 0x200(0x1)
	bool bMatchWithPrevious : 1;  // 0x200(0x1)
	char pad_513[3];  // 0x201(0x3)
	struct FName MatchedBoneName;  // 0x204(0x8)
	struct FVector MatchedLocationOffset;  // 0x20C(0xC)
	struct FRotator MatchedRotationOffset;  // 0x218(0xC)
	char pad_548_1 : 7;  // 0x224(0x1)
	bool bMatchTranslation : 1;  // 0x224(0x1)
	char pad_549_1 : 7;  // 0x225(0x1)
	bool bMatchIncludeZHeight : 1;  // 0x225(0x1)
	char pad_550_1 : 7;  // 0x226(0x1)
	bool bMatchRotationYaw : 1;  // 0x226(0x1)
	char pad_551_1 : 7;  // 0x227(0x1)
	bool bMatchRotationPitch : 1;  // 0x227(0x1)
	char pad_552_1 : 7;  // 0x228(0x1)
	bool bMatchRotationRoll : 1;  // 0x228(0x1)
	char pad_553[71];  // 0x229(0x47)

}; 



// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0xE8(Inherited: 0x90) 
struct UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
	char pad_144[8];  // 0x90(0x8)
	struct TArray<struct UMovieSceneSection*> AnimationSections;  // 0x98(0x10)
	char pad_168_1 : 7;  // 0xA8(0x1)
	bool bUseLegacySectionIndexBlend : 1;  // 0xA8(0x1)
	char pad_169[7];  // 0xA9(0x7)
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;  // 0xB0(0x30)
	char pad_224_1 : 7;  // 0xE0(0x1)
	bool bBlendFirstChildOfRoot : 1;  // 0xE0(0x1)
	char pad_225[7];  // 0xE1(0x7)

}; 



// Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x188(Inherited: 0xE8) 
struct UMovieSceneSlomoSection : public UMovieSceneSection
{
	struct FMovieSceneFloatChannel FloatCurve;  // 0xE8(0xA0)

}; 



// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
	char pad_192[8];  // 0xC0(0x8)

}; 



// Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x188(Inherited: 0xE8) 
struct UMovieSceneStringSection : public UMovieSceneSection
{
	struct FMovieSceneStringChannel StringCurve;  // 0xE8(0xA0)

}; 



// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
	char pad_192[8];  // 0xC0(0x8)

}; 



// Class MovieSceneTracks.MovieSceneTransformOriginSystem
// Size: 0x78(Inherited: 0x40) 
struct UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{
	char pad_64[56];  // 0x40(0x38)

}; 



// Class MovieSceneTracks.MovieSceneVectorPropertySystem
// Size: 0x58(Inherited: 0x58) 
struct UMovieSceneVectorPropertySystem : public UMovieScenePropertySystem
{

}; 



// Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
	int32_t NumChannelsUsed;  // 0xC0(0x4)
	char pad_196[4];  // 0xC4(0x4)

}; 



// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0xC8(Inherited: 0xC8) 
struct UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{

}; 



// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// Size: 0x90(Inherited: 0x40) 
struct UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
	char pad_64[80];  // 0x40(0x50)

}; 



// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
// Size: 0x78(Inherited: 0x40) 
struct UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{
	char pad_64[56];  // 0x40(0x38)

}; 



