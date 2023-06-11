#pragma once 
#include "SDK.h" 
 
 
// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamName
// Size: 0x18(Inherited: 0x0) 
struct FSetTeamName
{
	struct FText Name;  // 0x0(0x18)

}; 
// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamColours
// Size: 0x60(Inherited: 0x0) 
struct FSetTeamColours
{
	struct FGameEventTeamColours colours;  // 0x0(0x60)

}; 
// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamScore
// Size: 0x4(Inherited: 0x0) 
struct FSetTeamScore
{
	float Score;  // 0x0(0x4)

}; 
// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamIndex
// Size: 0x4(Inherited: 0x0) 
struct FSetTeamIndex
{
	int32_t TeamIndex;  // 0x0(0x4)

}; 
