namespace offsets
{
	namespace UJournalObjectiveContainer
	{
			constexpr auto _objectiveContainer = 0x260; // Size: 8, Type: struct UVerticalBox*
			constexpr auto _rewardContainer = 0x268; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto _headerNameText = 0x270; // Size: 8, Type: struct UTextBlock*
			constexpr auto _missionDescriptionText = 0x278; // Size: 8, Type: struct UTextBlock*
			constexpr auto _missionBanner = 0x280; // Size: 8, Type: struct UImage*
			constexpr auto _noDescriptionText = 0x288; // Size: 8, Type: struct UTextBlock*
			constexpr auto _noRewardsText = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto _activateMissionButton = 0x298; // Size: 8, Type: struct UButton*
			constexpr auto _untrackMissionButton = 0x2a0; // Size: 8, Type: struct UButton*
			constexpr auto _resetMissionButton = 0x2a8; // Size: 8, Type: struct UButton*
			constexpr auto _restartMissionButton = 0x2b0; // Size: 8, Type: struct UButton*
			constexpr auto _activateButtonOverlay = 0x2b8; // Size: 8, Type: struct UOverlay*
			constexpr auto _untrackButtonOverlay = 0x2c0; // Size: 8, Type: struct UOverlay*
			constexpr auto _resetButtonOverlay = 0x2c8; // Size: 8, Type: struct UOverlay*
			constexpr auto _restartButtonOverlay = 0x2d0; // Size: 8, Type: struct UOverlay*
			constexpr auto _objectiveItemBottomPadding = 0x2d8; // Size: 4, Type: float
			constexpr auto _objectiveItemFontSize = 0x2dc; // Size: 4, Type: float
			constexpr auto _objectiveItemWidgets = 0x2f0; // Size: 80, Type: struct TMap<struct FString, struct TWeakObjectPtr<UObjectiveItemWidget>>
	}
} 
