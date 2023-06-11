#pragma once 
#include <UI_DialogueContainerWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_DialogueContainerWidget.UI_DialogueContainerWidget_C
// Size: 0x2B4(Inherited: 0x280) 
struct UUI_DialogueContainerWidget_C : public UDialogueContainerWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x280(0x8)
	struct UWidgetAnimation* HideAvatarAnimation;  // 0x288(0x8)
	struct UWidgetAnimation* ShowAvatarAnimation;  // 0x290(0x8)
	struct UImage* _avatarImage;  // 0x298(0x8)
	struct URetainerBox* _avatarRetainer;  // 0x2A0(0x8)
	struct UImage* _whiteLine;  // 0x2A8(0x8)
	float _time;  // 0x2B0(0x4)

	struct UWidgetAnimation* GetHideAvatarAnimation(); // Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetHideAvatarAnimation
	struct UWidgetAnimation* GetShowAvatarAnimation(); // Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetShowAvatarAnimation
	void Construct(); // Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Tick
	void ExecuteUbergraph_UI_DialogueContainerWidget(int32_t EntryPoint); // Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ExecuteUbergraph_UI_DialogueContainerWidget
}; 



