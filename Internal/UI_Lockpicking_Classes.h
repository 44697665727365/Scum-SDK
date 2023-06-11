#pragma once 
#include <UI_Lockpicking_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_Lockpicking.UI_Lockpicking_C
// Size: 0x2D0(Inherited: 0x280) 
struct UUI_Lockpicking_C : public ULockpickingWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x280(0x8)
	struct UImage* Image_1;  // 0x288(0x8)
	struct UImage* Image_2;  // 0x290(0x8)
	struct UImage* Image_3;  // 0x298(0x8)
	struct UImage* Image_11;  // 0x2A0(0x8)
	struct UImage* Image_21;  // 0x2A8(0x8)
	struct UTextBlock* LockpicksCountText;  // 0x2B0(0x8)
	struct UImage* progress;  // 0x2B8(0x8)
	struct UTextBlock* RemainingTimeText;  // 0x2C0(0x8)
	struct UTextBlock* TensionToolCountText;  // 0x2C8(0x8)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_Lockpicking.UI_Lockpicking_C.Tick
	void ExecuteUbergraph_UI_Lockpicking(int32_t EntryPoint); // Function UI_Lockpicking.UI_Lockpicking_C.ExecuteUbergraph_UI_Lockpicking
}; 



