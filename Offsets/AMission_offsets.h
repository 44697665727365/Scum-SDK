namespace offsets
{
	namespace AMission
	{
			constexpr auto _activeObjective = 0x2b0; // Size: 8, Type: struct AObjective*
			constexpr auto _missionObjectiveClasses = 0x2b8; // Size: 16, Type: struct TArray<AObjective*>
			constexpr auto _missionObjectiveAssets = 0x2c8; // Size: 80, Type: struct TMap<struct FString, struct AObjective*>
			constexpr auto _missionObjectives = 0x318; // Size: 16, Type: struct TArray<struct AObjective*>
			constexpr auto _missionName = 0x328; // Size: 24, Type: struct FText
			constexpr auto _missionCategory = 0x340; // Size: 24, Type: struct FText
			constexpr auto _missionDescription = 0x358; // Size: 24, Type: struct FText
			constexpr auto _missionType = 0x370; // Size: 1, Type: uint8_t 
			constexpr auto _missionOrdinalNumber = 0x374; // Size: 4, Type: int32_t
			constexpr auto _missionState = 0x378; // Size: 1, Type: uint8_t 
			constexpr auto _missionFaction = 0x379; // Size: 1, Type: uint8_t 
			constexpr auto _missionLevel = 0x380; // Size: 40, Type: struct TSoftObjectPtr<UWorld>
			constexpr auto _missionRewards = 0x3a8; // Size: 24, Type: struct FMissionReward
			constexpr auto _missionBannerImage = 0x3c0; // Size: 8, Type: struct UTexture2D*
			constexpr auto _missionStartingLocations = 0x3c8; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<ALocationTrigger>>
			constexpr auto _intendedNumberOfPlayers = 0x3d8; // Size: 4, Type: int32_t
			constexpr auto _missionCooldownTime = 0x3dc; // Size: 4, Type: float
			constexpr auto _missionItemSpawnerClass = 0x3e8; // Size: 8, Type: AMissionItemSpawner*
			constexpr auto _missionIntroDialogues = 0x3f0; // Size: 16, Type: struct TArray<struct FDialogueInfo>
			constexpr auto _missionOutroSuccessDialogues = 0x400; // Size: 16, Type: struct TArray<struct FDialogueInfo>
			constexpr auto _missionOutroFailDialogues = 0x410; // Size: 16, Type: struct TArray<struct FDialogueInfo>
			constexpr auto _missionOutroBelatedDialogues = 0x420; // Size: 16, Type: struct TArray<struct FDialogueInfo>
			constexpr auto _canInterruptDialogue = 0x430; // Size: 1, Type: bool
	}
} 
