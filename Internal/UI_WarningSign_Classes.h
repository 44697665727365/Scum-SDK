#pragma once 
#include <UI_WarningSign_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_WarningSign.UI_WarningSign_C
// Size: 0x28C(Inherited: 0x268) 
struct UUI_WarningSign_C : public UWarningSignWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x268(0x8)
	struct UImage* MainImage;  // 0x270(0x8)
	struct URetainerBox* MainRetainerBox;  // 0x278(0x8)
	float ShowDuration;  // 0x280(0x4)
	float Duration;  // 0x284(0x4)
	float TimeScale;  // 0x288(0x4)

	void Construct(); // Function UI_WarningSign.UI_WarningSign_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_WarningSign.UI_WarningSign_C.Tick
	void InitFromWarningType(uint8_t  warningType); // Function UI_WarningSign.UI_WarningSign_C.InitFromWarningType
	void ExecuteUbergraph_UI_WarningSign(int32_t EntryPoint); // Function UI_WarningSign.UI_WarningSign_C.ExecuteUbergraph_UI_WarningSign
}; 



