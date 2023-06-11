namespace offsets
{
	namespace UStandardLockData
	{
			constexpr auto LockMeshOuter = 0x98; // Size: 8, Type: struct UStaticMesh*
			constexpr auto LockMeshInner = 0xa0; // Size: 8, Type: struct UStaticMesh*
			constexpr auto RotatingTresholdAngle = 0xa8; // Size: 4, Type: float
			constexpr auto Duration = 0xac; // Size: 4, Type: float
			constexpr auto AngleTolerance = 0xb0; // Size: 4, Type: float
			constexpr auto PickBreakingMultiplier = 0xb4; // Size: 4, Type: float
			constexpr auto PickBreakingAtNumberOfFailedPushAttempts = 0xb8; // Size: 4, Type: int32_t
	}
} 
