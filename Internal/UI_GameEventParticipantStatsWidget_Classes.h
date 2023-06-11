#pragma once 
#include <UI_GameEventParticipantStatsWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C
// Size: 0x2FC(Inherited: 0x280) 
struct UUI_GameEventParticipantStatsWidget_C : public UGameEventParticipantStatsWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x280(0x8)
	struct FLinearColor TextColor;  // 0x288(0x10)
	int32_t _lastTeamIndex;  // 0x298(0x4)
	struct FGameEventTeamColours TeamColours;  // 0x29C(0x60)

	void UpdateTeamColor(int32_t TeamIndex); // Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateTeamColor
	struct FText UpdateNumber(); // Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateNumber
	bool IsOwning(); // Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.IsOwning
	uint8_t  GetSelectedOverlayVisiblity(); // Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetSelectedOverlayVisiblity
	uint8_t  GetInactiveOverlayVisibility(); // Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetInactiveOverlayVisibility
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseLeave
	void UpdateColours(); // Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateColours
	void SetColours(struct FGameEventTeamColours colours); // Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.SetColours
	void UpdateStats(); // Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateStats
	void ExecuteUbergraph_UI_GameEventParticipantStatsWidget(int32_t EntryPoint); // Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.ExecuteUbergraph_UI_GameEventParticipantStatsWidget
}; 



