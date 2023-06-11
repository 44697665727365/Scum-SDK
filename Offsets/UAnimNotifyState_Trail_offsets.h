namespace offsets
{
	namespace UAnimNotifyState_Trail
	{
			constexpr auto PSTemplate = 0x30; // Size: 8, Type: struct UParticleSystem*
			constexpr auto FirstSocketName = 0x38; // Size: 8, Type: struct FName
			constexpr auto SecondSocketName = 0x40; // Size: 8, Type: struct FName
			constexpr auto WidthScaleMode = 0x48; // Size: 1, Type: char ETrailWidthMode
			constexpr auto WidthScaleCurve = 0x4c; // Size: 8, Type: struct FName
			constexpr auto bRecycleSpawnedSystems = 0x54; // Size: 1, Type: char
	}
} 
