#pragma once 
#include <UI_CTFTeamHeaderWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C
// Size: 0x2D0(Inherited: 0x264) 
struct UUI_CTFTeamHeaderWidget_C : public UUI_GameEventTeamHeaderWidget_C
{
	char pad_612[4];  // 0x264(0x4)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x268(0x8)
	struct UImage* BackgroundImage;  // 0x270(0x8)
	struct UHorizontalBox* LeftSideLayoutBox;  // 0x278(0x8)
	struct UHorizontalBox* LeftStarBox;  // 0x280(0x8)
	struct UTextBlock* LeftTeamScore;  // 0x288(0x8)
	struct UTextBlock* PlayerTextLeft;  // 0x290(0x8)
	struct UTextBlock* PlayerTextRight;  // 0x298(0x8)
	struct UHorizontalBox* RightSideLayoutBox;  // 0x2A0(0x8)
	struct UHorizontalBox* RightStarBox;  // 0x2A8(0x8)
	struct UTextBlock* RightTeamScore;  // 0x2B0(0x8)
	struct UTextBlock* TeamNameLeft;  // 0x2B8(0x8)
	struct UTextBlock* TeamNameRight;  // 0x2C0(0x8)
	struct ABP_CTFGameEvent_C* gameEvent;  // 0x2C8(0x8)

	struct FText GetPlayerText(); // Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.GetPlayerText
	void SetTeamName(struct FText Name); // Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamName
	void SetLeftSide(); // Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetLeftSide
	void SetRightSide(); // Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetRightSide
	void SetGameEvent(struct AGameEventBase* gameEvent); // Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetGameEvent
	void ClearWinCounters(); // Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ClearWinCounters
	void AddWinCounter(); // Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.AddWinCounter
	void SetTeamScore(float Score); // Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamScore
	void SetTeamColours(struct FGameEventTeamColours colours); // Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamColours
	void ExecuteUbergraph_UI_CTFTeamHeaderWidget(int32_t EntryPoint); // Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ExecuteUbergraph_UI_CTFTeamHeaderWidget
}; 



