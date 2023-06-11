#pragma once 
#include <LiveLinkInterface_Structs.h>
 
 
 
// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkFrameInterpolationProcessor : public UObject
{

}; 



// Class LiveLinkInterface.LiveLinkFrameTranslator
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkFrameTranslator : public UObject
{

}; 



// Class LiveLinkInterface.LiveLinkSourceFactory
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkSourceFactory : public UObject
{

}; 



// Class LiveLinkInterface.LiveLinkVirtualSubject
// Size: 0x160(Inherited: 0x28) 
struct ULiveLinkVirtualSubject : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	ULiveLinkRole* Role;  // 0x30(0x8)
	struct TArray<struct FLiveLinkSubjectName> Subjects;  // 0x38(0x10)
	struct TArray<struct ULiveLinkFrameTranslator*> FrameTranslators;  // 0x48(0x10)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool bRebroadcastSubject : 1;  // 0x58(0x1)
	char pad_89[263];  // 0x59(0x107)

}; 



// Class LiveLinkInterface.LiveLinkCameraRole
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkCameraRole : public ULiveLinkTransformRole
{

}; 



// Class LiveLinkInterface.LiveLinkFramePreProcessor
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkFramePreProcessor : public UObject
{

}; 



// Class LiveLinkInterface.LiveLinkSourceSettings
// Size: 0xA0(Inherited: 0x28) 
struct ULiveLinkSourceSettings : public UObject
{
	uint8_t  mode;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct FLiveLinkSourceBufferManagementSettings BufferSettings;  // 0x30(0x58)
	struct FString ConnectionString;  // 0x88(0x10)
	ULiveLinkSourceFactory* Factory;  // 0x98(0x8)

}; 



// Class LiveLinkInterface.LiveLinkRole
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkRole : public UObject
{

}; 



// Class LiveLinkInterface.LiveLinkBasicRole
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkBasicRole : public ULiveLinkRole
{

}; 



// Class LiveLinkInterface.LiveLinkLightRole
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkLightRole : public ULiveLinkTransformRole
{

}; 



// Class LiveLinkInterface.LiveLinkAnimationRole
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkAnimationRole : public ULiveLinkBasicRole
{

}; 



// Class LiveLinkInterface.LiveLinkTransformRole
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkTransformRole : public ULiveLinkBasicRole
{

}; 



// Class LiveLinkInterface.LiveLinkController
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkController : public UObject
{

}; 



// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// Size: 0xF0(Inherited: 0xA0) 
struct ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
	struct FLiveLinkCurveConversionSettings CurveConversionSettings;  // 0xA0(0x50)

}; 



// Class LiveLinkInterface.LiveLinkSubjectSettings
// Size: 0x68(Inherited: 0x28) 
struct ULiveLinkSubjectSettings : public UObject
{
	struct TArray<struct ULiveLinkFramePreProcessor*> PreProcessors;  // 0x28(0x10)
	struct ULiveLinkFrameInterpolationProcessor* InterpolationProcessor;  // 0x38(0x8)
	struct TArray<struct ULiveLinkFrameTranslator*> Translators;  // 0x40(0x10)
	ULiveLinkRole* Role;  // 0x50(0x8)
	struct FFrameRate FrameRate;  // 0x58(0x8)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bRebroadcastSubject : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 



