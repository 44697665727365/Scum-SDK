namespace offsets
{
	namespace AKillBoxSpawnPoint
	{
			constexpr auto _openDelay = 0x220; // Size: 4, Type: float
			constexpr auto _closeDelay = 0x224; // Size: 4, Type: float
			constexpr auto _zombieList = 0x228; // Size: 16, Type: struct TArray<AZombie2*>
			constexpr auto _door = 0x238; // Size: 8, Type: struct ADoor*
			constexpr auto _stableZombieProbability = 0x258; // Size: 4, Type: float
	}
} 
