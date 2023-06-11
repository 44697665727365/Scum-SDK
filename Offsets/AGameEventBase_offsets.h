namespace offsets
{
	namespace AGameEventBase
	{
			constexpr auto EventName = 0x220; // Size: 24, Type: struct FText
			constexpr auto ParticipantStatsClass = 0x238; // Size: 8, Type: UGameEventParticipantStats*
			constexpr auto RoundInfoWidgetClass = 0x240; // Size: 8, Type: UGameEventRoundInfoWidget*
			constexpr auto TeamHeaderWidgetClass = 0x248; // Size: 8, Type: UGameEventTeamHeaderWidget*
			constexpr auto StatWidgetClass = 0x250; // Size: 8, Type: UGameEventParticipantStatsWidget*
			constexpr auto MiniStatWidgetClass = 0x258; // Size: 8, Type: UGameEventParticipantStatsWidget*
			constexpr auto TransportClass = 0x260; // Size: 8, Type: AGameEventTransport*
			constexpr auto TimesUpAnnouncement = 0x268; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto BlueTeamWonRoundAnnouncement = 0x270; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RedTeamWonRoundAnnouncement = 0x278; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RoundDrawAnnouncement = 0x280; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto BlueTeamWonEventAnnouncement = 0x288; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RedTeamWonEventAnnouncement = 0x290; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto EventDrawAnnouncement = 0x298; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto Time30sAnnouncement = 0x2a0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto Time15sAnnouncement = 0x2a8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto Time10sCountdownAnnouncement = 0x2b0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto TensionMusicStart = 0x2b8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto TensionMusicStop = 0x2c0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _state = 0x2c8; // Size: 1, Type: uint8_t 
			constexpr auto _activeParticipantCount = 0x2cc; // Size: 4, Type: int32_t
			constexpr auto _numberOfTeams = 0x2d0; // Size: 4, Type: int32_t
			constexpr auto _teamMemberCount = 0x2d8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto _teamScores = 0x2e8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto _roundWinningTeam = 0x2f8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto _round = 0x308; // Size: 4, Type: int32_t
			constexpr auto _roundTimeLeft = 0x30c; // Size: 4, Type: float
			constexpr auto _cancelTimeLeft = 0x310; // Size: 4, Type: float
			constexpr auto _marker = 0x330; // Size: 8, Type: struct AGameEventLocationMarker*
			constexpr auto _border = 0x338; // Size: 8, Type: struct AGameEventBorder*
			constexpr auto _manager = 0x340; // Size: 8, Type: struct AGameEventManager*
			constexpr auto _participantInfo = 0x348; // Size: 16, Type: struct TArray<struct FGameEventParticipantInfo>
			constexpr auto _parameters = 0x358; // Size: 392, Type: struct FGameEventParameters
			constexpr auto _cardWidget = 0x4e0; // Size: 8, Type: struct UGameEventCardWidget*
			constexpr auto _scoreboardWidget = 0x4e8; // Size: 8, Type: struct UGameEventScoreboardWidget*
			constexpr auto _miniScoreboardWidget = 0x4f0; // Size: 8, Type: struct UGameEventScoreboardWidget*
			constexpr auto _rankings = 0x4f8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto _lastAnnouncement = 0x528; // Size: 8, Type: struct UAkComponent*
			constexpr auto _lastCountdownAnnouncement = 0x530; // Size: 8, Type: struct UAkComponent*
	}
} 
