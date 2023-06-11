#pragma once 
#include "SDK.h" 
 
 
// Function UI_CharacterCreationMenu.UI_CharacterCreationMenu_C.ExecuteUbergraph_UI_CharacterCreationMenu
// Size: 0x4(Inherited: 0x0) 
struct FExecuteUbergraph_UI_CharacterCreationMenu
{
	int32_t EntryPoint;  // 0x0(0x4)

}; 
// Function UI_CharacterCreationMenu.UI_CharacterCreationMenu_C.PlayPrisonerEnteringSequence
// Size: 0x28(Inherited: 0x0) 
struct FPlayPrisonerEnteringSequence
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool backwards : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct ABP_Menu_Design_C*> CallFunc_GetAllActorsOfClass_OutActors;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool CallFunc_Array_IsValidIndex_ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct ABP_Menu_Design_C* CallFunc_Array_Get_Item;  // 0x20(0x8)

}; 
