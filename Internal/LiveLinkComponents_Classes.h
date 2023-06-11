#pragma once 
#include <LiveLinkComponents_Structs.h>
 
 
 
// Class LiveLinkComponents.LiveLinkComponentController
// Size: 0x158(Inherited: 0xB0) 
struct ULiveLinkComponentController : public UActorComponent
{
	struct FLiveLinkSubjectRepresentation SubjectRepresentation;  // 0xB0(0x10)
	struct TMap<ULiveLinkRole*, struct ULiveLinkControllerBase*> ControllerMap;  // 0xC0(0x50)
	char pad_272_1 : 7;  // 0x110(0x1)
	bool bUpdateInEditor : 1;  // 0x110(0x1)
	char pad_273[7];  // 0x111(0x7)
	struct FMulticastInlineDelegate OnLiveLinkUpdated;  // 0x118(0x10)
	struct FComponentReference ComponentToControl;  // 0x128(0x28)
	char pad_336_1 : 7;  // 0x150(0x1)
	bool bDisableEvaluateLiveLinkWhenSpawnable : 1;  // 0x150(0x1)
	char pad_337_1 : 7;  // 0x151(0x1)
	bool bEvaluateLiveLink : 1;  // 0x151(0x1)
	char pad_338[6];  // 0x152(0x6)

}; 



// Class LiveLinkComponents.LiveLinkComponentSettings
// Size: 0x78(Inherited: 0x28) 
struct ULiveLinkComponentSettings : public UObject
{
	struct TMap<ULiveLinkRole*, ULiveLinkControllerBase*> DefaultControllerForRole;  // 0x28(0x50)

}; 



// Class LiveLinkComponents.LiveLinkControllerBase
// Size: 0x40(Inherited: 0x28) 
struct ULiveLinkControllerBase : public UObject
{
	char pad_40[24];  // 0x28(0x18)

}; 



// Class LiveLinkComponents.LiveLinkLightController
// Size: 0x40(Inherited: 0x40) 
struct ULiveLinkLightController : public ULiveLinkControllerBase
{

}; 



// Class LiveLinkComponents.LiveLinkTransformController
// Size: 0x48(Inherited: 0x40) 
struct ULiveLinkTransformController : public ULiveLinkControllerBase
{
	struct FLiveLinkTransformControllerData TransformData;  // 0x40(0x6)
	char pad_70[2];  // 0x46(0x2)

}; 



