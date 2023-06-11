namespace offsets
{
	namespace UCineCameraComponent
	{
			constexpr auto FilmbackSettings = 0x7d0; // Size: 12, Type: struct FCameraFilmbackSettings
			constexpr auto Filmback = 0x7dc; // Size: 12, Type: struct FCameraFilmbackSettings
			constexpr auto LensSettings = 0x7e8; // Size: 24, Type: struct FCameraLensSettings
			constexpr auto FocusSettings = 0x800; // Size: 88, Type: struct FCameraFocusSettings
			constexpr auto CurrentFocalLength = 0x858; // Size: 4, Type: float
			constexpr auto CurrentAperture = 0x85c; // Size: 4, Type: float
			constexpr auto CurrentFocusDistance = 0x860; // Size: 4, Type: float
			constexpr auto FilmbackPresets = 0x870; // Size: 16, Type: struct TArray<struct FNamedFilmbackPreset>
			constexpr auto LensPresets = 0x880; // Size: 16, Type: struct TArray<struct FNamedLensPreset>
			constexpr auto DefaultFilmbackPresetName = 0x890; // Size: 16, Type: struct FString
			constexpr auto DefaultFilmbackPreset = 0x8a0; // Size: 16, Type: struct FString
			constexpr auto DefaultLensPresetName = 0x8b0; // Size: 16, Type: struct FString
			constexpr auto DefaultLensFocalLength = 0x8c0; // Size: 4, Type: float
			constexpr auto DefaultLensFStop = 0x8c4; // Size: 4, Type: float
	}
} 
