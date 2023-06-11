namespace offsets
{
	namespace USequenceCameraShakeCameraStandIn
	{
			constexpr auto FieldOfView = 0x30; // Size: 4, Type: float
			constexpr auto bConstrainAspectRatio = 0x34; // Size: 1, Type: char
			constexpr auto AspectRatio = 0x38; // Size: 4, Type: float
			constexpr auto PostProcessSettings = 0x40; // Size: 1376, Type: struct FPostProcessSettings
			constexpr auto PostProcessBlendWeight = 0x5a0; // Size: 4, Type: float
			constexpr auto Filmback = 0x5a4; // Size: 12, Type: struct FCameraFilmbackSettings
			constexpr auto LensSettings = 0x5b0; // Size: 24, Type: struct FCameraLensSettings
			constexpr auto FocusSettings = 0x5c8; // Size: 88, Type: struct FCameraFocusSettings
			constexpr auto CurrentFocalLength = 0x620; // Size: 4, Type: float
			constexpr auto CurrentAperture = 0x624; // Size: 4, Type: float
			constexpr auto CurrentFocusDistance = 0x628; // Size: 4, Type: float
	}
} 
