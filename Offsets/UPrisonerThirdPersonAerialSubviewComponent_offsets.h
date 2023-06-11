namespace offsets
{
	namespace UPrisonerThirdPersonAerialSubviewComponent
	{
			constexpr auto FieldOfView = 0x200; // Size: 4, Type: float
			constexpr auto UseFieldOfViewForLOD = 0x204; // Size: 1, Type: bool
			constexpr auto ConstrainAspectRatio = 0x205; // Size: 1, Type: bool
			constexpr auto AspectRatio = 0x208; // Size: 4, Type: float
			constexpr auto MinViewYaw = 0x20c; // Size: 4, Type: float
			constexpr auto MaxViewYaw = 0x210; // Size: 4, Type: float
			constexpr auto MinViewPitch = 0x214; // Size: 4, Type: float
			constexpr auto MaxViewPitch = 0x218; // Size: 4, Type: float
			constexpr auto PostProcessBlendWeight = 0x21c; // Size: 4, Type: float
			constexpr auto PostProcessSettings = 0x220; // Size: 1376, Type: struct FPostProcessSettings
			constexpr auto BlendInDuration = 0x780; // Size: 4, Type: float
			constexpr auto BlendOutDuration = 0x784; // Size: 4, Type: float
			constexpr auto BaseOrbitDistance = 0x788; // Size: 4, Type: float
			constexpr auto SpeedOrbitDistanceIncreaseFactor = 0x78c; // Size: 4, Type: float
	}
} 
