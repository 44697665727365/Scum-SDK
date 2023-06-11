namespace offsets
{
	namespace AMissionScheduler
	{
			constexpr auto _missionSchedulerEnabled = 0x220; // Size: 1, Type: bool
			constexpr auto _availableMainStoryMissions = 0x228; // Size: 80, Type: struct TMap<AMission*, struct FMissionData>
			constexpr auto _availableSideStoryMissions = 0x278; // Size: 80, Type: struct TMap<AMission*, struct FMissionData>
			constexpr auto _availableTutorialMissions = 0x2c8; // Size: 80, Type: struct TMap<AMission*, struct FMissionData>
			constexpr auto _missionQueuingInterval = 0x318; // Size: 4, Type: float
	}
} 
