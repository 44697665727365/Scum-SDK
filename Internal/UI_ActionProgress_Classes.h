#pragma once 
#include <UI_ActionProgress_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_ActionProgress.UI_ActionProgress_C
// Size: 0x2E8(Inherited: 0x2B0) 
struct UUI_ActionProgress_C : public UActionProgressWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2B0(0x8)
	struct UImage* Background;  // 0x2B8(0x8)
	struct UImage* Cancel;  // 0x2C0(0x8)
	struct UTextBlock* percent;  // 0x2C8(0x8)
	struct UTextBlock* PercentageText;  // 0x2D0(0x8)
	struct UImage* progress;  // 0x2D8(0x8)
	struct UMaterialInstanceDynamic* _progressMaterial;  // 0x2E0(0x8)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_ActionProgress.UI_ActionProgress_C.OnMouseButtonDown
	struct FText Get_PercentageText_Text_1(); // Function UI_ActionProgress.UI_ActionProgress_C.Get_PercentageText_Text_1
	void Construct(); // Function UI_ActionProgress.UI_ActionProgress_C.Construct
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_ActionProgress.UI_ActionProgress_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UI_ActionProgress.UI_ActionProgress_C.OnMouseLeave
	void ExecuteUbergraph_UI_ActionProgress(int32_t EntryPoint); // Function UI_ActionProgress.UI_ActionProgress_C.ExecuteUbergraph_UI_ActionProgress
}; 



