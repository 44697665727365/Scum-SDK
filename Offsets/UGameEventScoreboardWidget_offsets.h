namespace offsets
{
	namespace UGameEventScoreboardWidget
	{
			constexpr auto RoundInfoWidgetClass = 0x260; // Size: 8, Type: UGameEventRoundInfoWidget*
			constexpr auto TeamHeaderWidgetClass = 0x268; // Size: 8, Type: UGameEventTeamHeaderWidget*
			constexpr auto StatWidgetClass = 0x270; // Size: 8, Type: UGameEventParticipantStatsWidget*
			constexpr auto StatWidgets = 0x278; // Size: 16, Type: struct TArray<struct UGameEventParticipantStatsWidget*>
			constexpr auto _gameEvent = 0x288; // Size: 8, Type: struct AGameEventBase*
			constexpr auto _selected = 0x290; // Size: 4, Type: int32_t
	}
} 
