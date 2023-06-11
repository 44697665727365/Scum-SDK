#pragma once 
#include <BP_WeaponScopeWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass BP_WeaponScopeWidget.BP_WeaponScopeWidget_C
// Size: 0x2E5(Inherited: 0x278) 
struct UBP_WeaponScopeWidget_C : public UWeaponScopeWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x278(0x8)
	struct UWidgetAnimation* FadeOut;  // 0x280(0x8)
	struct UWidgetAnimation* FadeIn;  // 0x288(0x8)
	struct UBorder* BlackBG;  // 0x290(0x8)
	struct UBorder* BorderLeft;  // 0x298(0x8)
	struct UBorder* BorderRight;  // 0x2A0(0x8)
	struct UImage* Reticle;  // 0x2A8(0x8)
	struct UScaleBox* ScaleBox_1;  // 0x2B0(0x8)
	struct USizeBox* SizeBox_1;  // 0x2B8(0x8)
	struct USizeBox* SizeBox_2;  // 0x2C0(0x8)
	struct FVector2D GeometrySize;  // 0x2C8(0x8)
	struct FVector2D GeometrySizeHalf;  // 0x2D0(0x8)
	float FadeInSpeed;  // 0x2D8(0x4)
	float FadeOutSpeed;  // 0x2DC(0x4)
	float OnShowDelay;  // 0x2E0(0x4)
	char pad_740_1 : 7;  // 0x2E4(0x1)
	bool ShouldBeHidden : 1;  // 0x2E4(0x1)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.Tick
	void OnShowElements(); // Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnShowElements
	void OnHideElements(); // Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnHideElements
	void OnConstructFinished(); // Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnConstructFinished
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1(); // Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
	void ExecuteUbergraph_BP_WeaponScopeWidget(int32_t EntryPoint); // Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.ExecuteUbergraph_BP_WeaponScopeWidget
}; 



