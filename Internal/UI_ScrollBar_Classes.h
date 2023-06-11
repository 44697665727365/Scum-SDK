#pragma once 
#include <UI_ScrollBar_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_ScrollBar.UI_ScrollBar_C
// Size: 0x2B4(Inherited: 0x288) 
struct UUI_ScrollBar_C : public UCursedScrollBar
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x288(0x8)
	struct UImage* SliderImage;  // 0x290(0x8)
	struct FVector2D Size;  // 0x298(0x8)
	float _currentValue;  // 0x2A0(0x4)
	float _currentMaxCountOnScreen;  // 0x2A4(0x4)
	float _currentMaxValue;  // 0x2A8(0x4)
	char pad_684_1 : 7;  // 0x2AC(0x1)
	bool _shouldUpdate : 1;  // 0x2AC(0x1)
	char pad_685[3];  // 0x2AD(0x3)
	float _scrollBarHeight;  // 0x2B0(0x4)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_ScrollBar.UI_ScrollBar_C.OnMouseButtonUp
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_ScrollBar.UI_ScrollBar_C.OnMouseMove
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_ScrollBar.UI_ScrollBar_C.OnMouseButtonDown
	void SetToUpdateFromValue(float Value, float MaxCountOnScreen, float MaxValue); // Function UI_ScrollBar.UI_ScrollBar_C.SetToUpdateFromValue
	void UpdateFromValueInternal(float Value, float MaxCountOnScreen, float MaxValue); // Function UI_ScrollBar.UI_ScrollBar_C.UpdateFromValueInternal
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_ScrollBar.UI_ScrollBar_C.Tick
	void UpdateFromValueInternal2(float Value, float MaxCountOnScreen, float MaxValue); // Function UI_ScrollBar.UI_ScrollBar_C.UpdateFromValueInternal2
	void CallSetToUpdateFromValue(float Value, float MaxCountOnScreen, float MaxValue); // Function UI_ScrollBar.UI_ScrollBar_C.CallSetToUpdateFromValue
	void ExecuteUbergraph_UI_ScrollBar(int32_t EntryPoint); // Function UI_ScrollBar.UI_ScrollBar_C.ExecuteUbergraph_UI_ScrollBar
}; 



