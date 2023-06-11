#pragma once 
#include <UI_WeaponAmmoDisplayContainer_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C
// Size: 0x2A0(Inherited: 0x288) 
struct UUI_WeaponAmmoDisplayContainer_C : public UWeaponAmmoDisplayContainerWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x288(0x8)
	struct UWidgetAnimation* FadeOut;  // 0x290(0x8)
	struct UWidgetAnimation* FadeIn;  // 0x298(0x8)

	void Init(struct AWeapon* Weapon, float onScreenDuration, bool displayOnCenter, struct UTexture2D* iconOverride); // Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.Init
	void OnFadedOut(); // Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.OnFadedOut
	void ExecuteUbergraph_UI_WeaponAmmoDisplayContainer(int32_t EntryPoint); // Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.ExecuteUbergraph_UI_WeaponAmmoDisplayContainer
}; 



