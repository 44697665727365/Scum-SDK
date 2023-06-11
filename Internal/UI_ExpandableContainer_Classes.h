#pragma once 
#include <UI_ExpandableContainer_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_ExpandableContainer.UI_ExpandableContainer_C
// Size: 0x339(Inherited: 0x280) 
struct UUI_ExpandableContainer_C : public UExpandableContainer
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x280(0x8)
	struct UImage* ContentBackgroundImage;  // 0x288(0x8)
	struct UHorizontalBox* ContentHorizontalBox;  // 0x290(0x8)
	struct UOverlay* ContentOverlay;  // 0x298(0x8)
	struct UButton* ExpandButton;  // 0x2A0(0x8)
	struct UImage* ExpandedSpacingLine;  // 0x2A8(0x8)
	struct UImage* TitleBackgroundImage;  // 0x2B0(0x8)
	int32_t FontSize;  // 0x2B8(0x4)
	char pad_700_1 : 7;  // 0x2BC(0x1)
	bool EnableExpandedSpacingLine : 1;  // 0x2BC(0x1)
	char pad_701[3];  // 0x2BD(0x3)
	struct FMargin TitlePadding;  // 0x2C0(0x10)
	char pad_720_1 : 7;  // 0x2D0(0x1)
	bool _isMinimized : 1;  // 0x2D0(0x1)
	char pad_721[7];  // 0x2D1(0x7)
	struct FText Title;  // 0x2D8(0x18)
	struct FMargin ContentPadding;  // 0x2F0(0x10)
	char pad_768_1 : 7;  // 0x300(0x1)
	bool IsContentBackgroundImageVisible : 1;  // 0x300(0x1)
	char pad_769[3];  // 0x301(0x3)
	int32_t _alarmsCount;  // 0x304(0x4)
	char pad_776_1 : 7;  // 0x308(0x1)
	bool _isUnderAlarm : 1;  // 0x308(0x1)
	char pad_777[7];  // 0x309(0x7)
	struct UUI_ExpandableContainer_C* ParentContainer;  // 0x310(0x8)
	struct FMulticastInlineDelegate OnExpandChanged;  // 0x318(0x10)
	struct FMargin ContentMargins;  // 0x328(0x10)
	char pad_824_1 : 7;  // 0x338(0x1)
	bool OnlySettableByChildren : 1;  // 0x338(0x1)

	void SetParentContainer(struct UUI_ExpandableContainer_C* container); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.SetParentContainer
	void DisableAlarm(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.DisableAlarm
	void EnableAlarm(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.EnableAlarm
	void CheckAlarm(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.CheckAlarm
	void DecrementAlarmsCount(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.DecrementAlarmsCount
	void IncrementAlarmsCount(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.IncrementAlarmsCount
	void Minimize(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.Minimize
	void Maximize(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.Maximize
	void Construct(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.Construct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	void OnSynchronizeProperties_2(); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnSynchronizeProperties_2
	void ExecuteUbergraph_UI_ExpandableContainer(int32_t EntryPoint); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.ExecuteUbergraph_UI_ExpandableContainer
	void OnExpandChanged__DelegateSignature(struct UUI_ExpandableContainer_C* container, bool isMinimized); // Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnExpandChanged__DelegateSignature
}; 



