namespace offsets
{
	namespace AMissionManager
	{
			constexpr auto _mainStoryMissions = 0x240; // Size: 80, Type: struct TMap<AMission*, struct FMissionData>
			constexpr auto _sideStoryMissions = 0x290; // Size: 80, Type: struct TMap<AMission*, struct FMissionData>
			constexpr auto _tutorialMissions = 0x2e0; // Size: 80, Type: struct TMap<AMission*, struct FMissionData>
			constexpr auto _tutorialEnabled = 0x343; // Size: 1, Type: bool
			constexpr auto _tutorialDelay = 0x344; // Size: 4, Type: float
			constexpr auto _activeMainStoryMission = 0x350; // Size: 8, Type: struct AMission*
			constexpr auto _activeSideStoryMission = 0x358; // Size: 8, Type: struct AMission*
			constexpr auto _activeTutorialMission = 0x360; // Size: 8, Type: struct AMission*
			constexpr auto _availableMission = 0x368; // Size: 8, Type: struct AMission*
			constexpr auto _missionManagerState = 0x370; // Size: 1, Type: uint8_t 
	}
} 
