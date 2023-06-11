#pragma once 
#include <UI_Chat_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_Chat.UI_Chat_C
// Size: 0x3B3(Inherited: 0x380) 
struct UUI_Chat_C : public UChatWidget
{
	struct UImage* Image_1;  // 0x380(0x8)
	struct TArray<struct FString> ActiveSuggestions;  // 0x388(0x10)
	int32_t CurrentSuggestion;  // 0x398(0x4)
	char pad_924[4];  // 0x39C(0x4)
	struct TArray<struct UUI_ChatSuggestion_C*> ActiveSuggestionWidgets;  // 0x3A0(0x10)
	char pad_944_1 : 7;  // 0x3B0(0x1)
	bool SuggestionsUpdated : 1;  // 0x3B0(0x1)
	char pad_945_1 : 7;  // 0x3B1(0x1)
	bool SuggestionSelected : 1;  // 0x3B1(0x1)
	char pad_946_1 : 7;  // 0x3B2(0x1)
	bool IsInHistoryMode : 1;  // 0x3B2(0x1)

}; 



