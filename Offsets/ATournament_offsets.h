namespace offsets
{
	namespace ATournament
	{
			constexpr auto StartAnnouncement = 0x230; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto SuddenDeathAnnouncement = 0x238; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto EndAnnouncement = 0x240; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _inProgress = 0x248; // Size: 1, Type: bool
			constexpr auto _inSuddenDeath = 0x249; // Size: 1, Type: bool
			constexpr auto _hasEnded = 0x24a; // Size: 1, Type: bool
			constexpr auto _stats = 0x250; // Size: 16, Type: struct TArray<struct FTournamentStats>
			constexpr auto _scoreboardWidget = 0x260; // Size: 8, Type: struct UTournamentScoreboardWidget*
	}
} 
