#pragma once 
#include <UI_PlacedPlaceableIcon_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C
// Size: 0x280(Inherited: 0x260) 
struct UUI_PlacedPlaceableIcon_C : public UUserWidget
{
	struct UImage* Image_bg_black;  // 0x260(0x8)
	struct UImage* Image_bg_white;  // 0x268(0x8)
	struct UImage* Image_icon;  // 0x270(0x8)
	struct UTexture2D* _icon;  // 0x278(0x8)

	void GetIcon(struct UTexture2D*& Icon); // Function UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C.GetIcon
	void Init(struct UTexture2D* Icon); // Function UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C.Init
}; 



