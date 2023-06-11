#pragma once 
#include "SDK.h" 
 
 
// Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.ExecuteUbergraph_UI_WeaponAmmoDisplayContainer
// Size: 0x40(Inherited: 0x0) 
struct FExecuteUbergraph_UI_WeaponAmmoDisplayContainer
{
	int32_t EntryPoint;  // 0x0(0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4(0x10)
	char pad_20[4];  // 0x14(0x4)
	struct UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue;  // 0x18(0x8)
	struct UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2;  // 0x20(0x8)
	struct AWeapon* K2Node_Event_weapon;  // 0x28(0x8)
	float K2Node_Event_onScreenDuration;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool K2Node_Event_displayOnCenter : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	struct UTexture2D* K2Node_Event_iconOverride;  // 0x38(0x8)

}; 
// Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.Init
// Size: 0x18(Inherited: 0x18) 
struct FInit : public FInit
{
	struct AWeapon* Weapon;  // 0x0(0x8)
	float onScreenDuration;  // 0x8(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool displayOnCenter : 1;  // 0xC(0x1)
	struct UTexture2D* iconOverride;  // 0x10(0x8)

}; 
