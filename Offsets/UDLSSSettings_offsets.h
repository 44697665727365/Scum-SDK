namespace offsets
{
	namespace UDLSSSettings
	{
			constexpr auto bEnableDLSSD3D12 = 0x28; // Size: 1, Type: bool
			constexpr auto bEnableDLSSD3D11 = 0x29; // Size: 1, Type: bool
			constexpr auto bEnableDLSSVulkan = 0x2a; // Size: 1, Type: bool
			constexpr auto bEnableDLSSInEditorViewports = 0x2b; // Size: 1, Type: bool
			constexpr auto bEnableScreenpercentageManipulationInDLSSEditorViewports = 0x2c; // Size: 1, Type: bool
			constexpr auto bEnableDLSSInPlayInEditorViewports = 0x2d; // Size: 1, Type: bool
			constexpr auto bShowDLSSSDebugOnScreenMessages = 0x2e; // Size: 1, Type: bool
			constexpr auto GenericDLSSBinaryPath = 0x30; // Size: 16, Type: struct FString
			constexpr auto bGenericDLSSBinaryExists = 0x40; // Size: 1, Type: bool
			constexpr auto NVIDIANGXApplicationId = 0x44; // Size: 4, Type: uint32_t
			constexpr auto CustomDLSSBinaryPath = 0x48; // Size: 16, Type: struct FString
			constexpr auto bCustomDLSSBinaryExists = 0x58; // Size: 1, Type: bool
	}
} 
