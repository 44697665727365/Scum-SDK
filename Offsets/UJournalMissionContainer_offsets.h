namespace offsets
{
	namespace UJournalMissionContainer
	{
			constexpr auto _missionItemWidgetsContainer = 0x260; // Size: 8, Type: struct UVerticalBox*
			constexpr auto _completedMissionItemWidgetsContainer = 0x268; // Size: 8, Type: struct UVerticalBox*
			constexpr auto _completedMissionsOverlay = 0x270; // Size: 8, Type: struct UOverlay*
			constexpr auto _noContentText = 0x278; // Size: 8, Type: struct UTextBlock*
			constexpr auto _missionItemWidgets = 0x288; // Size: 80, Type: struct TMap<AMission*, struct TWeakObjectPtr<UMissionItemWidget>>
			constexpr auto _completedMissionItemWidgets = 0x2d8; // Size: 80, Type: struct TMap<AMission*, struct TWeakObjectPtr<UMissionItemWidget>>
	}
} 
