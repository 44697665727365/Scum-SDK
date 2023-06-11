namespace offsets
{
	namespace UAkXboxOneInitializationSettings
	{
			constexpr auto CommonSettings = 0x30; // Size: 96, Type: struct FAkCommonInitializationSettings
			constexpr auto ApuHeapSettings = 0x90; // Size: 8, Type: struct FAkXboxOneApuHeapInitializationSettings
			constexpr auto CommunicationSettings = 0x98; // Size: 40, Type: struct FAkCommunicationSettingsWithSystemInitialization
			constexpr auto AdvancedSettings = 0xc0; // Size: 52, Type: struct FAkXboxOneAdvancedInitializationSettings
	}
} 
