namespace offsets
{
	namespace UMissionDataGroup
	{
			constexpr auto MissionRootPath = 0x30; // Size: 16, Type: struct FString
			constexpr auto MissionStartedSound = 0x40; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto MissionCompletedSound = 0x48; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto MissionFailedSound = 0x50; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto ObjectiveStartedSound = 0x58; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto ObjectiveCompletedSound = 0x60; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto ObjectiveFailedSound = 0x68; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto MainStoryMissions = 0x70; // Size: 80, Type: struct TMap<AMission*, struct FMissionData>
			constexpr auto SideStoryMissions = 0xc0; // Size: 80, Type: struct TMap<AMission*, struct FMissionData>
			constexpr auto TutorialMissions = 0x110; // Size: 80, Type: struct TMap<AMission*, struct FMissionData>
	}
} 
