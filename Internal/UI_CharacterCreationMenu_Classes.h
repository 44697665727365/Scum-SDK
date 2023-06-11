#pragma once 
#include <UI_CharacterCreationMenu_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_CharacterCreationMenu.UI_CharacterCreationMenu_C
// Size: 0x568(Inherited: 0x4E0) 
struct UUI_CharacterCreationMenu_C : public UCharacterCreationMenu
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4E0(0x8)
	struct UImage* BackgroundTint;  // 0x4E8(0x8)
	struct UImage* Image;  // 0x4F0(0x8)
	struct UImage* Image_1;  // 0x4F8(0x8)
	struct UImage* Image_2;  // 0x500(0x8)
	struct UImage* Image_3;  // 0x508(0x8)
	struct UImage* Image_4;  // 0x510(0x8)
	struct UImage* Image_5;  // 0x518(0x8)
	struct UImage* Image_6;  // 0x520(0x8)
	struct UImage* Image_7;  // 0x528(0x8)
	struct UImage* Image_8;  // 0x530(0x8)
	struct UImage* Image_10;  // 0x538(0x8)
	struct UImage* Image_91;  // 0x540(0x8)
	struct UImage* Image_93;  // 0x548(0x8)
	struct UUI_CC_NonSelectableText_C* SkillPointDisplayBonus;  // 0x550(0x8)
	struct UTextBlock* T_AttributeConfirmation;  // 0x558(0x8)
	struct UTextBlock* T_SkillConfirmation;  // 0x560(0x8)

	void PlayPrisonerEnteringSequence(bool backwards); // Function UI_CharacterCreationMenu.UI_CharacterCreationMenu_C.PlayPrisonerEnteringSequence
	void OnUserProfileCreated(); // Function UI_CharacterCreationMenu.UI_CharacterCreationMenu_C.OnUserProfileCreated
	void ExecuteUbergraph_UI_CharacterCreationMenu(int32_t EntryPoint); // Function UI_CharacterCreationMenu.UI_CharacterCreationMenu_C.ExecuteUbergraph_UI_CharacterCreationMenu
}; 



