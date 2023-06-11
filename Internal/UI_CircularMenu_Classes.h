#pragma once 
#include <UI_CircularMenu_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_CircularMenu.UI_CircularMenu_C
// Size: 0x2B8(Inherited: 0x2A8) 
struct UUI_CircularMenu_C : public UCircularMenuWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2A8(0x8)
	struct UImage* CenterImage;  // 0x2B0(0x8)

	void CenterMouseToWidget(); // Function UI_CircularMenu.UI_CircularMenu_C.CenterMouseToWidget
	void Construct(); // Function UI_CircularMenu.UI_CircularMenu_C.Construct
	void OnWidgetVisibilityChanged(uint8_t  InVisibility); // Function UI_CircularMenu.UI_CircularMenu_C.OnWidgetVisibilityChanged
	void ExecuteUbergraph_UI_CircularMenu(int32_t EntryPoint); // Function UI_CircularMenu.UI_CircularMenu_C.ExecuteUbergraph_UI_CircularMenu
}; 



