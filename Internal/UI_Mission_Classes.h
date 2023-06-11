#pragma once 
#include <UI_Mission_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_Mission.UI_Mission_C
// Size: 0x2A8(Inherited: 0x288) 
struct UUI_Mission_C : public UMissionContainerWidget
{
	struct UWidgetAnimation* CompleteObjectiveAnim;  // 0x288(0x8)
	struct UWidgetAnimation* StartObjectiveAnim;  // 0x290(0x8)
	struct UImage* _background;  // 0x298(0x8)
	struct UUI_Objective_C* UI_Objective;  // 0x2A0(0x8)

	struct UWidgetAnimation* GetCompleteObjectiveAnimation(); // Function UI_Mission.UI_Mission_C.GetCompleteObjectiveAnimation
	struct UWidgetAnimation* GetStartObjectiveAnimation(); // Function UI_Mission.UI_Mission_C.GetStartObjectiveAnimation
}; 



