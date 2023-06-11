#pragma once 
#include <MenuPlayAsDroneOverlayWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C
// Size: 0x278(Inherited: 0x260) 
struct UMenuPlayAsDroneOverlayWidget_C : public UUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x260(0x8)
	struct UImage* DroneIcon;  // 0x268(0x8)
	char pad_624_1 : 7;  // 0x270(0x1)
	bool _isVisible : 1;  // 0x270(0x1)
	char pad_625[3];  // 0x271(0x3)
	float BlinkPeriod;  // 0x274(0x4)

	void ToggleVisibility(); // Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ToggleVisibility
	void Construct(); // Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.Construct
	void ExecuteUbergraph_MenuPlayAsDroneOverlayWidget(int32_t EntryPoint); // Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ExecuteUbergraph_MenuPlayAsDroneOverlayWidget
}; 



