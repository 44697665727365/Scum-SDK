#pragma once 
#include <UI_MissionResultWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_MissionResultWidget.UI_MissionResultWidget_C
// Size: 0x2A0(Inherited: 0x280) 
struct UUI_MissionResultWidget_C : public UMissionResult
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x280(0x8)
	struct UWidgetAnimation* MissionResultAnimation;  // 0x288(0x8)
	struct UImage* _resultTitleBackground;  // 0x290(0x8)
	struct UImage* _spaceFillerImage;  // 0x298(0x8)

	void PlayShowMissionResultAnimation(); // Function UI_MissionResultWidget.UI_MissionResultWidget_C.PlayShowMissionResultAnimation
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UI_MissionResultWidget.UI_MissionResultWidget_C.OnAnimationFinished
	void ExecuteUbergraph_UI_MissionResultWidget(int32_t EntryPoint); // Function UI_MissionResultWidget.UI_MissionResultWidget_C.ExecuteUbergraph_UI_MissionResultWidget
}; 



