#pragma once 
#include <TemplateSequence_Structs.h>
 
 
 
// Class TemplateSequence.TemplateSequence
// Size: 0x108(Inherited: 0x60) 
struct UTemplateSequence : public UMovieSceneSequence
{
	struct UMovieScene* MovieScene;  // 0x60(0x8)
	struct TSoftClassPtr<UObject> BoundActorClass;  // 0x68(0x28)
	struct TSoftObjectPtr<AActor> BoundPreviewActor;  // 0x90(0x28)
	struct TMap<struct FGuid, struct FName> BoundActorComponents;  // 0xB8(0x50)

}; 



// Class TemplateSequence.SequenceCameraShakePattern
// Size: 0x58(Inherited: 0x28) 
struct USequenceCameraShakePattern : public UCameraShakePattern
{
	struct UCameraAnimationSequence* Sequence;  // 0x28(0x8)
	float PlayRate;  // 0x30(0x4)
	float Scale;  // 0x34(0x4)
	float BlendInTime;  // 0x38(0x4)
	float BlendOutTime;  // 0x3C(0x4)
	float RandomSegmentDuration;  // 0x40(0x4)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool bRandomSegment : 1;  // 0x44(0x1)
	char pad_69[3];  // 0x45(0x3)
	struct USequenceCameraShakeSequencePlayer* Player;  // 0x48(0x8)
	struct USequenceCameraShakeCameraStandIn* CameraStandIn;  // 0x50(0x8)

}; 



// Class TemplateSequence.CameraAnimationSequence
// Size: 0x108(Inherited: 0x108) 
struct UCameraAnimationSequence : public UTemplateSequence
{

}; 



// Class TemplateSequence.TemplateSequenceActor
// Size: 0x278(Inherited: 0x220) 
struct ATemplateSequenceActor : public AActor
{
	char pad_544[16];  // 0x220(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;  // 0x230(0x14)
	char pad_580[4];  // 0x244(0x4)
	struct UTemplateSequencePlayer* SequencePlayer;  // 0x248(0x8)
	struct FSoftObjectPath TemplateSequence;  // 0x250(0x18)
	struct FTemplateSequenceBindingOverrideData BindingOverride;  // 0x268(0xC)
	char pad_628[4];  // 0x274(0x4)

	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence
	void SetBinding(struct AActor* Actor, bool bOverridesDefault); // Function TemplateSequence.TemplateSequenceActor.SetBinding
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence
}; 



// Class TemplateSequence.SequenceCameraShakeCameraStandIn
// Size: 0x670(Inherited: 0x28) 
struct USequenceCameraShakeCameraStandIn : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	float FieldOfView;  // 0x30(0x4)
	char bConstrainAspectRatio : 1;  // 0x34(0x1)
	char pad_52_1 : 7;  // 0x34(0x1)
	char pad_53[4];  // 0x35(0x4)
	float AspectRatio;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)
	struct FPostProcessSettings PostProcessSettings;  // 0x40(0x560)
	float PostProcessBlendWeight;  // 0x5A0(0x4)
	struct FCameraFilmbackSettings Filmback;  // 0x5A4(0xC)
	struct FCameraLensSettings LensSettings;  // 0x5B0(0x18)
	struct FCameraFocusSettings FocusSettings;  // 0x5C8(0x58)
	float CurrentFocalLength;  // 0x620(0x4)
	float CurrentAperture;  // 0x624(0x4)
	float CurrentFocusDistance;  // 0x628(0x4)
	char pad_1580[68];  // 0x62C(0x44)

}; 



// Class TemplateSequence.SequenceCameraShakeSequencePlayer
// Size: 0x428(Inherited: 0x28) 
struct USequenceCameraShakeSequencePlayer : public UObject
{
	char pad_40[680];  // 0x28(0x2A8)
	struct UObject* BoundObjectOverride;  // 0x2D0(0x8)
	struct UMovieSceneSequence* Sequence;  // 0x2D8(0x8)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // 0x2E0(0xE8)
	char pad_968[96];  // 0x3C8(0x60)

}; 



// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x4F0(Inherited: 0x4E8) 
struct UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
	char pad_1256[8];  // 0x4E8(0x8)

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
}; 



// Class TemplateSequence.TemplateSequenceSection
// Size: 0x180(Inherited: 0x168) 
struct UTemplateSequenceSection : public UMovieSceneSubSection
{
	char pad_360[8];  // 0x168(0x8)
	struct TArray<struct FTemplateSectionPropertyScale> PropertyScales;  // 0x170(0x10)

}; 



// Class TemplateSequence.TemplateSequenceSystem
// Size: 0xB0(Inherited: 0x40) 
struct UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
	char pad_64[112];  // 0x40(0x70)

}; 



// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
// Size: 0x98(Inherited: 0x40) 
struct UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{
	char pad_64[88];  // 0x40(0x58)

}; 



// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
// Size: 0x90(Inherited: 0x40) 
struct UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{
	char pad_64[80];  // 0x40(0x50)

}; 



// Class TemplateSequence.TemplateSequenceTrack
// Size: 0xA0(Inherited: 0xA0) 
struct UTemplateSequenceTrack : public UMovieSceneSubTrack
{

}; 



