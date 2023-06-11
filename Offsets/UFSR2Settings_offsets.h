namespace offsets
{
	namespace UFSR2Settings
	{
			constexpr auto bEnabled = 0x38; // Size: 1, Type: bool
			constexpr auto AutoExposure = 0x39; // Size: 1, Type: bool
			constexpr auto EnabledInEditorViewport = 0x3a; // Size: 1, Type: bool
			constexpr auto UseSSRExperimentalDenoiser = 0x3b; // Size: 1, Type: bool
			constexpr auto UseNativeDX12 = 0x3c; // Size: 1, Type: bool
			constexpr auto UseNativeVulkan = 0x3d; // Size: 1, Type: bool
			constexpr auto QualityMode = 0x40; // Size: 4, Type: uint8_t 
			constexpr auto HistoryFormat = 0x44; // Size: 4, Type: uint8_t 
			constexpr auto DeDither = 0x48; // Size: 4, Type: uint8_t 
			constexpr auto Sharpness = 0x4c; // Size: 4, Type: float
			constexpr auto AdjustMipBias = 0x50; // Size: 1, Type: bool
			constexpr auto ReactiveMask = 0x51; // Size: 1, Type: bool
			constexpr auto ForceVertexDeformationOutputsVelocity = 0x52; // Size: 1, Type: bool
			constexpr auto ForceLandscapeHISMMobility = 0x54; // Size: 4, Type: uint8_t 
			constexpr auto ReflectionScale = 0x58; // Size: 4, Type: float
			constexpr auto ReflectionLuminanceBias = 0x5c; // Size: 4, Type: float
			constexpr auto RoughnessScale = 0x60; // Size: 4, Type: float
			constexpr auto RoughnessBias = 0x64; // Size: 4, Type: float
			constexpr auto RoughnessMaxDistance = 0x68; // Size: 4, Type: float
			constexpr auto ReactiveMaskRoughnessForceMaxDistance = 0x6c; // Size: 1, Type: bool
			constexpr auto TranslucencyBias = 0x70; // Size: 4, Type: float
			constexpr auto TranslucencyLuminanceBias = 0x74; // Size: 4, Type: float
			constexpr auto TranslucencyMaxDistance = 0x78; // Size: 4, Type: float
			constexpr auto PreDOFTranslucencyScale = 0x7c; // Size: 4, Type: float
			constexpr auto PreDOFTranslucencyMax = 0x80; // Size: 1, Type: bool
			constexpr auto ReactiveShadingModelID = 0x81; // Size: 1, Type: char EMaterialShadingModel
			constexpr auto ForceReactiveMaterialValue = 0x84; // Size: 4, Type: float
	}
} 
