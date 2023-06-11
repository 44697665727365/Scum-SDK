namespace offsets
{
	namespace AObjective
	{
			constexpr auto _objectivesIntroDialogues = 0x2b0; // Size: 16, Type: struct TArray<struct FDialogueInfo>
			constexpr auto _objectivesOutroSuccessDialogues = 0x2c0; // Size: 16, Type: struct TArray<struct FDialogueInfo>
			constexpr auto _objectivesOutroFailDialogues = 0x2d0; // Size: 16, Type: struct TArray<struct FDialogueInfo>
			constexpr auto _objectiveState = 0x2e0; // Size: 1, Type: uint8_t 
			constexpr auto _parentMission = 0x2e4; // Size: 8, Type: struct TWeakObjectPtr<AMission>
			constexpr auto _description = 0x2f0; // Size: 24, Type: struct FText
			constexpr auto _canInterruptDialogue = 0x319; // Size: 1, Type: bool
			constexpr auto _playUISounds = 0x31a; // Size: 1, Type: bool
	}
} 
