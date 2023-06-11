#pragma once 
#include <UI_MicInputIndicator_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_MicInputIndicator.UI_MicInputIndicator_C
// Size: 0x2E0(Inherited: 0x260) 
struct UUI_MicInputIndicator_C : public UMicInputIndicator
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x260(0x8)
	struct UImage* Image_1;  // 0x268(0x8)
	struct UImage* Image_5;  // 0x270(0x8)
	struct UImage* Image_6;  // 0x278(0x8)
	struct UImage* Image_7;  // 0x280(0x8)
	struct UImage* Image_8;  // 0x288(0x8)
	struct UImage* Image_33;  // 0x290(0x8)
	struct UOverlay* Overlay_28;  // 0x298(0x8)
	struct UImage* Ring;  // 0x2A0(0x8)
	struct UOverlay* RingsOverlay;  // 0x2A8(0x8)
	struct TArray<struct UWidget*> _rings;  // 0x2B0(0x10)
	struct TArray<float> _scales;  // 0x2C0(0x10)
	struct UVoiceChatComponent* VoiceChatComponent;  // 0x2D0(0x8)
	struct APawn* OwningActor;  // 0x2D8(0x8)

	uint8_t  GetMicVisibility(); // Function UI_MicInputIndicator.UI_MicInputIndicator_C.GetMicVisibility
	void UpdateVoiceChat(); // Function UI_MicInputIndicator.UI_MicInputIndicator_C.UpdateVoiceChat
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_MicInputIndicator.UI_MicInputIndicator_C.Tick
	void Construct(); // Function UI_MicInputIndicator.UI_MicInputIndicator_C.Construct
	void ExecuteUbergraph_UI_MicInputIndicator(int32_t EntryPoint); // Function UI_MicInputIndicator.UI_MicInputIndicator_C.ExecuteUbergraph_UI_MicInputIndicator
}; 



