namespace offsets
{
	namespace UExternalMountPath
	{
			constexpr auto DestinationTransform = 0x40; // Size: 48, Type: struct FTransform
			constexpr auto OverrideDestinationAcceptanceRadius = 0x70; // Size: 1, Type: bool
			constexpr auto DestinationAcceptanceRadius = 0x74; // Size: 4, Type: float
			constexpr auto AccesibilityCheck_MountSocketVerticalCorrection = 0x78; // Size: 4, Type: float
			constexpr auto AccesibilityCheck_CapsuleRadius = 0x7c; // Size: 4, Type: float
			constexpr auto AccesibilityCheck_SweepCapsuleHalfHeight = 0x80; // Size: 4, Type: float
			constexpr auto AccesibilityCheck_OverlapCapsuleHalfHeight = 0x84; // Size: 4, Type: float
			constexpr auto UnmountingMontage = 0x88; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FallbackUnmountTime = 0x90; // Size: 4, Type: float
			constexpr auto UnmountingMotionIntensity = 0x94; // Size: 1, Type: uint8_t 
	}
} 
