#pragma once 
#include <UI_InspectedItem_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_InspectedItem.UI_InspectedItem_C
// Size: 0x290(Inherited: 0x278) 
struct UUI_InspectedItem_C : public UInspectedItemWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x278(0x8)
	struct UImage* BackgroundImage;  // 0x280(0x8)
	struct UImage* ComponentOrToolImage;  // 0x288(0x8)

	void SetIsToolForSomething(bool IsTool); // Function UI_InspectedItem.UI_InspectedItem_C.SetIsToolForSomething
	void ExecuteUbergraph_UI_InspectedItem(int32_t EntryPoint); // Function UI_InspectedItem.UI_InspectedItem_C.ExecuteUbergraph_UI_InspectedItem
}; 



