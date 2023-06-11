#pragma once 
#include "SDK.h" 
 
 
// DelegateFunction LiveLinkComponents.LiveLinkTickDelegate__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FLiveLinkTickDelegate__DelegateSignature
{
	float DeltaTime;  // 0x0(0x4)

}; 
// ScriptStruct LiveLinkComponents.LiveLinkTransformControllerData
// Size: 0x6(Inherited: 0x0) 
struct FLiveLinkTransformControllerData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bWorldTransform : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bUseLocation : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool bUseRotation : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool bUseScale : 1;  // 0x3(0x1)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bSweep : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool bTeleport : 1;  // 0x5(0x1)

}; 
