namespace offsets
{
	namespace UMissionItemWidget
	{
			constexpr auto _missionItemName = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto _missionItemCategory = 0x298; // Size: 8, Type: struct UTextBlock*
			constexpr auto _selectionBorder = 0x2a0; // Size: 8, Type: struct UOverlay*
			constexpr auto _stateImageIcon = 0x2a8; // Size: 8, Type: struct UImage*
			constexpr auto _expandButton = 0x2b0; // Size: 8, Type: struct UButton*
			constexpr auto _objectiveContentOverlay = 0x2b8; // Size: 8, Type: struct UOverlay*
			constexpr auto _objectiveContainer = 0x2c0; // Size: 8, Type: struct UVerticalBox*
			constexpr auto _availableMissionIcon = 0x2c8; // Size: 8, Type: struct UTexture2D*
			constexpr auto _startedMissionIcon = 0x2d0; // Size: 8, Type: struct UTexture2D*
			constexpr auto _completedMissionIcon = 0x2d8; // Size: 8, Type: struct UTexture2D*
			constexpr auto _failedMissionIcon = 0x2e0; // Size: 8, Type: struct UTexture2D*
			constexpr auto _widgetNormalColor = 0x2e8; // Size: 16, Type: struct FLinearColor
			constexpr auto _widgetCompletedColor = 0x2f8; // Size: 16, Type: struct FLinearColor
			constexpr auto _activeTextFontSize = 0x308; // Size: 4, Type: float
			constexpr auto _inactiveTextFontSize = 0x30c; // Size: 4, Type: float
			constexpr auto _expandButtonOpenSound = 0x310; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _expandButtonClosedSound = 0x318; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _menuButtonClickAudioEvent = 0x320; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _objectiveItemWidgets = 0x3f0; // Size: 80, Type: struct TMap<struct FString, struct TWeakObjectPtr<UObjectiveItemWidget>>
	}
} 
