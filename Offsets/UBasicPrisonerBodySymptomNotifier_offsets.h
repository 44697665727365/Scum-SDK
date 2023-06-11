namespace offsets
{
	namespace UBasicPrisonerBodySymptomNotifier
	{
			constexpr auto _triggerDelay = 0x30; // Size: 8, Type: struct FFloatInterval
			constexpr auto _shouldDisplayNotificationOnChangeForWorse = 0x38; // Size: 1, Type: bool
			constexpr auto _shouldResetNotificationTimerOnSeverityChange = 0x39; // Size: 1, Type: bool
			constexpr auto _notificationParameters = 0x40; // Size: 16, Type: struct TArray<struct FBasicPrisonerBodySymptomNotificationParameters>
	}
} 
