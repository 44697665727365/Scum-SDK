namespace offsets
{
	namespace ASentrySpawner2
	{
			constexpr auto ActivationDistance = 0x220; // Size: 4, Type: float
			constexpr auto SentryClass = 0x228; // Size: 8, Type: ASentry2*
			constexpr auto PatrolPoints = 0x230; // Size: 16, Type: struct TArray<struct FSentryPatrolPoint>
			constexpr auto Sprite = 0x240; // Size: 8, Type: struct UBillboardComponent*
			constexpr auto SentryOperatingRange = 0x248; // Size: 4, Type: float
			constexpr auto ForceUndergroundSentry = 0x24c; // Size: 1, Type: bool
			constexpr auto _shouldSaveAndLoadSentry = 0x274; // Size: 1, Type: bool
			constexpr auto _autoSaveTime = 0x278; // Size: 4, Type: float
	}
} 
