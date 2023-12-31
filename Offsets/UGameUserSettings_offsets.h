namespace offsets
{
	namespace UGameUserSettings
	{
			constexpr auto bUseVSync = 0x28; // Size: 1, Type: bool
			constexpr auto bUseDynamicResolution = 0x29; // Size: 1, Type: bool
			constexpr auto ResolutionSizeX = 0x80; // Size: 4, Type: uint32_t
			constexpr auto ResolutionSizeY = 0x84; // Size: 4, Type: uint32_t
			constexpr auto LastUserConfirmedResolutionSizeX = 0x88; // Size: 4, Type: uint32_t
			constexpr auto LastUserConfirmedResolutionSizeY = 0x8c; // Size: 4, Type: uint32_t
			constexpr auto WindowPosX = 0x90; // Size: 4, Type: int32_t
			constexpr auto WindowPosY = 0x94; // Size: 4, Type: int32_t
			constexpr auto FullscreenMode = 0x98; // Size: 4, Type: int32_t
			constexpr auto LastConfirmedFullscreenMode = 0x9c; // Size: 4, Type: int32_t
			constexpr auto PreferredFullscreenMode = 0xa0; // Size: 4, Type: int32_t
			constexpr auto Version = 0xa4; // Size: 4, Type: uint32_t
			constexpr auto AudioQualityLevel = 0xa8; // Size: 4, Type: int32_t
			constexpr auto LastConfirmedAudioQualityLevel = 0xac; // Size: 4, Type: int32_t
			constexpr auto FrameRateLimit = 0xb0; // Size: 4, Type: float
			constexpr auto DesiredScreenWidth = 0xb8; // Size: 4, Type: int32_t
			constexpr auto bUseDesiredScreenHeight = 0xbc; // Size: 1, Type: bool
			constexpr auto DesiredScreenHeight = 0xc0; // Size: 4, Type: int32_t
			constexpr auto LastUserConfirmedDesiredScreenWidth = 0xc4; // Size: 4, Type: int32_t
			constexpr auto LastUserConfirmedDesiredScreenHeight = 0xc8; // Size: 4, Type: int32_t
			constexpr auto LastRecommendedScreenWidth = 0xcc; // Size: 4, Type: float
			constexpr auto LastRecommendedScreenHeight = 0xd0; // Size: 4, Type: float
			constexpr auto LastCPUBenchmarkResult = 0xd4; // Size: 4, Type: float
			constexpr auto LastGPUBenchmarkResult = 0xd8; // Size: 4, Type: float
			constexpr auto LastCPUBenchmarkSteps = 0xe0; // Size: 16, Type: struct TArray<float>
			constexpr auto LastGPUBenchmarkSteps = 0xf0; // Size: 16, Type: struct TArray<float>
			constexpr auto LastGPUBenchmarkMultiplier = 0x100; // Size: 4, Type: float
			constexpr auto bUseHDRDisplayOutput = 0x104; // Size: 1, Type: bool
			constexpr auto HDRDisplayOutputNits = 0x108; // Size: 4, Type: int32_t
			constexpr auto OnGameUserSettingsUINeedsUpdate = 0x110; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
