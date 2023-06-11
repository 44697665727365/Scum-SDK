#pragma once 
#include <DEMO_BodyRegionFade_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass DEMO_BodyRegionFade.DEMO_BodyRegionFade_C
// Size: 0x319(Inherited: 0x260) 
struct UDEMO_BodyRegionFade_C : public UUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x260(0x8)
	struct UImage* BodyGlow_Female;  // 0x268(0x8)
	struct UImage* BodyGlow_Male;  // 0x270(0x8)
	struct UImage* BodyImage_Female;  // 0x278(0x8)
	struct UImage* BodyImage_Male;  // 0x280(0x8)
	struct UButton* btn_all;  // 0x288(0x8)
	struct UButton* btn_Arm_Left;  // 0x290(0x8)
	struct UButton* btn_Arm_Right;  // 0x298(0x8)
	struct UButton* btn_Female;  // 0x2A0(0x8)
	struct UButton* btn_Head;  // 0x2A8(0x8)
	struct UButton* btn_Leg_Left;  // 0x2B0(0x8)
	struct UButton* btn_Leg_Right;  // 0x2B8(0x8)
	struct UButton* btn_Male;  // 0x2C0(0x8)
	struct UButton* btn_Torso;  // 0x2C8(0x8)
	struct UCanvasPanel* Female;  // 0x2D0(0x8)
	struct UCanvasPanel* Male;  // 0x2D8(0x8)
	struct FVector2D TargetOffset;  // 0x2E0(0x8)
	struct FVector2D TargetScale;  // 0x2E8(0x8)
	float TargetHead;  // 0x2F0(0x4)
	float TargetTorso;  // 0x2F4(0x4)
	float TargetArmLeft;  // 0x2F8(0x4)
	float TargetArmRight;  // 0x2FC(0x4)
	float TargetLegLeft;  // 0x300(0x4)
	float TargetLegRight;  // 0x304(0x4)
	struct TArray<struct UImage*> ImageArray;  // 0x308(0x10)
	char pad_792_1 : 7;  // 0x318(0x1)
	bool IsMale : 1;  // 0x318(0x1)

	void GetCanvas(struct UCanvasPanel*& Canvas); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.GetCanvas
	void ResetTargets(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.ResetTargets
	void Construct(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.Tick
	void BndEvt__btn_all_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_all_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__btn_Head_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Head_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void BndEvt__btn_Torso_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Torso_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void BndEvt__btn_Leg_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Leg_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void BndEvt__btn_Leg_Right_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Leg_Right_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void BndEvt__btn_Arm_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Arm_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	void BndEvt__btn_Arm_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Arm_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	void BndEvt__btn_Male_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Male_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	void BndEvt__btn_Female_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Female_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_DEMO_BodyRegionFade(int32_t EntryPoint); // Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.ExecuteUbergraph_DEMO_BodyRegionFade
}; 



