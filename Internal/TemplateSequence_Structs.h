#pragma once 
#include "SDK.h" 
 
 
// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
// Size: 0x8(Inherited: 0x0) 
struct FGetSequencePlayer
{
	struct UTemplateSequencePlayer* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
// Size: 0xC(Inherited: 0x0) 
struct FTemplateSequenceBindingOverrideData
{
	struct TWeakObjectPtr<UObject> Object;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bOverridesDefault : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
// Size: 0x38(Inherited: 0x0) 
struct FCreateTemplateSequencePlayer
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UTemplateSequence* TemplateSequence;  // 0x8(0x8)
	struct FMovieSceneSequencePlaybackSettings Settings;  // 0x10(0x14)
	char pad_36[4];  // 0x24(0x4)
	struct ATemplateSequenceActor* OutActor;  // 0x28(0x8)
	struct UTemplateSequencePlayer* ReturnValue;  // 0x30(0x8)

}; 
// ScriptStruct TemplateSequence.TemplateSectionPropertyScale
// Size: 0xC8(Inherited: 0x0) 
struct FTemplateSectionPropertyScale
{
	struct FGuid ObjectBinding;  // 0x0(0x10)
	struct FMovieScenePropertyBinding PropertyBinding;  // 0x10(0x14)
	uint8_t  PropertyScaleType;  // 0x24(0x4)
	struct FMovieSceneFloatChannel FloatChannel;  // 0x28(0xA0)

}; 
// Function TemplateSequence.TemplateSequenceActor.GetSequence
// Size: 0x8(Inherited: 0x0) 
struct FGetSequence
{
	struct UTemplateSequence* ReturnValue;  // 0x0(0x8)

}; 
// Function TemplateSequence.TemplateSequenceActor.SetBinding
// Size: 0x10(Inherited: 0x0) 
struct FSetBinding
{
	struct AActor* Actor;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bOverridesDefault : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function TemplateSequence.TemplateSequenceActor.LoadSequence
// Size: 0x8(Inherited: 0x0) 
struct FLoadSequence
{
	struct UTemplateSequence* ReturnValue;  // 0x0(0x8)

}; 
// Function TemplateSequence.TemplateSequenceActor.SetSequence
// Size: 0x8(Inherited: 0x0) 
struct FSetSequence
{
	struct UTemplateSequence* InSequence;  // 0x0(0x8)

}; 
