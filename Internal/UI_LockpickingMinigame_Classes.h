#pragma once 
#include <UI_LockpickingMinigame_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_LockpickingMinigame.UI_LockpickingMinigame_C
// Size: 0x340(Inherited: 0x280) 
struct UUI_LockpickingMinigame_C : public ULockpickingWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x280(0x8)
	struct UWidgetAnimation* ShowFailure;  // 0x288(0x8)
	struct UWidgetAnimation* BlurWaitingForPlayer;  // 0x290(0x8)
	struct UWidgetAnimation* ShowSuccess;  // 0x298(0x8)
	struct UWidgetAnimation* InfoFade;  // 0x2A0(0x8)
	struct UImage* _infiniteLockpicks;  // 0x2A8(0x8)
	struct UImage* _infiniteScrewdrivers;  // 0x2B0(0x8)
	struct UImage* _lockDifficultyHardImage;  // 0x2B8(0x8)
	struct UImage* _lockDifficultyMediumImage;  // 0x2C0(0x8)
	struct UImage* _lockDifficultyNormalImage;  // 0x2C8(0x8)
	struct UImage* _lockDifficultyWarning;  // 0x2D0(0x8)
	struct UImage* BlackOverlay;  // 0x2D8(0x8)
	struct UTextBlock* FamePointsText;  // 0x2E0(0x8)
	struct UImage* Image_1;  // 0x2E8(0x8)
	struct UImage* Image_2;  // 0x2F0(0x8)
	struct UImage* Image_3;  // 0x2F8(0x8)
	struct UImage* Image_11;  // 0x300(0x8)
	struct UImage* Image_21;  // 0x308(0x8)
	struct UTextBlock* LockpicksCountText;  // 0x310(0x8)
	struct UImage* progress;  // 0x318(0x8)
	struct UTextBlock* RemainingTimeText;  // 0x320(0x8)
	struct UTextBlock* TensionToolCountText;  // 0x328(0x8)
	struct UImage* TextBackground;  // 0x330(0x8)
	struct UTextBlock* TextBlock_1;  // 0x338(0x8)

	void SetDifficultyVisuals(uint8_t  Difficulty); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.SetDifficultyVisuals
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.Tick
	void ShowInfo(); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ShowInfo
	void HideInfo(); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.HideInfo
	void OnSuccess(); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnSuccess
	void OnFailure(); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnFailure
	void SetLockPickingDifficulty(uint8_t  Value); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.SetLockPickingDifficulty
	void ExecuteUbergraph_UI_LockpickingMinigame(int32_t EntryPoint); // Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ExecuteUbergraph_UI_LockpickingMinigame
}; 



