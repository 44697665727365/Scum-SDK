#pragma once 
#include <UI_HealthWidget2_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_HealthWidget2.UI_HealthWidget2_C
// Size: 0x350(Inherited: 0x2F8) 
struct UUI_HealthWidget2_C : public UHealthWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2F8(0x8)
	struct UImage* Background;  // 0x300(0x8)
	struct UImage* DisabledBar;  // 0x308(0x8)
	struct UImage* HealthBar;  // 0x310(0x8)
	struct FLinearColor ColorMaxHP;  // 0x318(0x10)
	struct FLinearColor ColorMinHP;  // 0x328(0x10)
	struct UCurveFloat* ColorCurve;  // 0x338(0x8)
	struct UMaterialInstanceDynamic* _healthBarMat;  // 0x340(0x8)
	struct UMaterialInstanceDynamic* _disabledBarMat;  // 0x348(0x8)

	void Construct(); // Function UI_HealthWidget2.UI_HealthWidget2_C.Construct
	void SetHealthPercentage(float Value); // Function UI_HealthWidget2.UI_HealthWidget2_C.SetHealthPercentage
	void SetMaxHealthPercentage(float Value); // Function UI_HealthWidget2.UI_HealthWidget2_C.SetMaxHealthPercentage
	void ExecuteUbergraph_UI_HealthWidget2(int32_t EntryPoint); // Function UI_HealthWidget2.UI_HealthWidget2_C.ExecuteUbergraph_UI_HealthWidget2
}; 



