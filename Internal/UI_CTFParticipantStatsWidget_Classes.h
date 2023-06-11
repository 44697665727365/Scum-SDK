#pragma once 
#include <UI_CTFParticipantStatsWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C
// Size: 0x3A8(Inherited: 0x2FC) 
struct UUI_CTFParticipantStatsWidget_C : public UUI_GameEventParticipantStatsWidget_C
{
	char pad_764[4];  // 0x2FC(0x4)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x300(0x8)
	struct UTextBlock* Assists;  // 0x308(0x8)
	struct UHorizontalBox* BgRow;  // 0x310(0x8)
	struct UBorder* Border_1;  // 0x318(0x8)
	struct UBorder* Border_2;  // 0x320(0x8)
	struct UBorder* Border_384;  // 0x328(0x8)
	struct UBorder* Border_386;  // 0x330(0x8)
	struct UBorder* Border_387;  // 0x338(0x8)
	struct UBorder* Border_388;  // 0x340(0x8)
	struct UBorder* Border_389;  // 0x348(0x8)
	struct UTextBlock* Captures;  // 0x350(0x8)
	struct UTextBlock* Deaths;  // 0x358(0x8)
	struct UTextBlock* Headshots;  // 0x360(0x8)
	struct UBorder* InactiveOverlay;  // 0x368(0x8)
	struct UTextBlock* Kills;  // 0x370(0x8)
	struct UTextBlock* Number;  // 0x378(0x8)
	struct UBorder* NumberBorder;  // 0x380(0x8)
	struct UTextBlock* PlayerName;  // 0x388(0x8)
	struct UTextBlock* Score;  // 0x390(0x8)
	struct UBorder* SelectedOverlay;  // 0x398(0x8)
	struct UHorizontalBox* StatRow;  // 0x3A0(0x8)

	void FillLabels(); // Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.FillLabels
	void UpdateStats(); // Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.UpdateStats
	void ExecuteUbergraph_UI_CTFParticipantStatsWidget(int32_t EntryPoint); // Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.ExecuteUbergraph_UI_CTFParticipantStatsWidget
}; 



