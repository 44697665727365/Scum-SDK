#pragma once 
#include "SDK.h" 
 
 
// Function UI_MissionResultWidget.UI_MissionResultWidget_C.ExecuteUbergraph_UI_MissionResultWidget
// Size: 0x19(Inherited: 0x0) 
struct FExecuteUbergraph_UI_MissionResultWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue;  // 0x8(0x8)
	struct UWidgetAnimation* K2Node_Event_Animation;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x18(0x1)

}; 
// Function UI_MissionResultWidget.UI_MissionResultWidget_C.OnAnimationFinished
// Size: 0x8(Inherited: 0x8) 
struct FOnAnimationFinished : public FOnAnimationFinished
{
	struct UWidgetAnimation* Animation;  // 0x0(0x8)

}; 
