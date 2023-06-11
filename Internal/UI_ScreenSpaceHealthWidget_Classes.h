#pragma once 
#include <UI_ScreenSpaceHealthWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C
// Size: 0x2B8(Inherited: 0x260) 
struct UUI_ScreenSpaceHealthWidget_C : public UScreenSpaceHealthWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x260(0x8)
	struct UImage* Background;  // 0x268(0x8)
	struct UImage* DisabledBar;  // 0x270(0x8)
	struct UImage* HealthBar;  // 0x278(0x8)
	struct UMaterialInstanceDynamic* _healthBarMat;  // 0x280(0x8)
	struct UMaterialInstanceDynamic* _disabledBarMat;  // 0x288(0x8)
	struct UCurveFloat* ColorCurve;  // 0x290(0x8)
	struct FLinearColor ColorMaxHP;  // 0x298(0x10)
	struct FLinearColor ColorMinHP;  // 0x2A8(0x10)

	void Construct(); // Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.Construct
	void SetMaxHealthPercentage(float Value); // Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetMaxHealthPercentage
	void SetHealthPercentage(float Value); // Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetHealthPercentage
	void ExecuteUbergraph_UI_ScreenSpaceHealthWidget(int32_t EntryPoint); // Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.ExecuteUbergraph_UI_ScreenSpaceHealthWidget
}; 



