#pragma once 
#include <UI_GameEventTeamHeaderWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C
// Size: 0x264(Inherited: 0x260) 
struct UUI_GameEventTeamHeaderWidget_C : public UGameEventTeamHeaderWidget
{
	int32_t TeamIndex;  // 0x260(0x4)

	void SetTeamIndex(int32_t TeamIndex); // Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamIndex
	void SetTeamScore(float Score); // Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamScore
	void SetRightSide(); // Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetRightSide
	void SetLeftSide(); // Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetLeftSide
	void SetTeamColours(struct FGameEventTeamColours colours); // Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamColours
	void SetTeamName(struct FText Name); // Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamName
}; 



