#pragma once 
#include <UI_NightVisionResourceIndicatorWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_NightVisionResourceIndicatorWidget.UI_NightVisionResourceIndicatorWidget_C
// Size: 0x280(Inherited: 0x270) 
struct UUI_NightVisionResourceIndicatorWidget_C : public UResourceIndicatorWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x270(0x8)
	struct UImage* BatteryImage;  // 0x278(0x8)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_NightVisionResourceIndicatorWidget.UI_NightVisionResourceIndicatorWidget_C.Tick
	void ExecuteUbergraph_UI_NightVisionResourceIndicatorWidget(int32_t EntryPoint); // Function UI_NightVisionResourceIndicatorWidget.UI_NightVisionResourceIndicatorWidget_C.ExecuteUbergraph_UI_NightVisionResourceIndicatorWidget
}; 



