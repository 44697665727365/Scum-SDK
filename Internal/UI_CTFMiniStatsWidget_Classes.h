#pragma once 
#include <UI_CTFMiniStatsWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C
// Size: 0x358(Inherited: 0x2FC) 
struct UUI_CTFMiniStatsWidget_C : public UUI_GameEventParticipantStatsWidget_C
{
	char pad_764[4];  // 0x2FC(0x4)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x300(0x8)
	struct UBorder* Border_87;  // 0x308(0x8)
	struct UTextBlock* Captures;  // 0x310(0x8)
	struct UTextBlock* Deaths;  // 0x318(0x8)
	struct UTextBlock* Kills;  // 0x320(0x8)
	struct UTextBlock* Number;  // 0x328(0x8)
	struct UTextBlock* PlayerName;  // 0x330(0x8)
	struct UTextBlock* Score;  // 0x338(0x8)
	struct UHorizontalBox* StatRow;  // 0x340(0x8)
	struct FLinearColor TeamColor;  // 0x348(0x10)

	struct FLinearColor GetColor(); // Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.GetColor
	void UpdateStats(); // Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.UpdateStats
	void FillLabels(); // Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.FillLabels
	void ExecuteUbergraph_UI_CTFMiniStatsWidget(int32_t EntryPoint); // Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.ExecuteUbergraph_UI_CTFMiniStatsWidget
}; 



