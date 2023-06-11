namespace offsets
{
	namespace UAkSettingsPerUser
	{
			constexpr auto WwiseWindowsInstallationPath = 0x28; // Size: 16, Type: struct FDirectoryPath
			constexpr auto WwiseMacInstallationPath = 0x38; // Size: 16, Type: struct FFilePath
			constexpr auto EnableAutomaticAssetSynchronization = 0x48; // Size: 1, Type: bool
			constexpr auto WaapiIPAddress = 0x50; // Size: 16, Type: struct FString
			constexpr auto WaapiPort = 0x60; // Size: 4, Type: uint32_t
			constexpr auto bAutoConnectToWAAPI = 0x64; // Size: 1, Type: bool
			constexpr auto AutoSyncSelection = 0x65; // Size: 1, Type: bool
			constexpr auto SuppressWwiseProjectPathWarnings = 0x66; // Size: 1, Type: bool
			constexpr auto SoundDataGenerationSkipLanguage = 0x67; // Size: 1, Type: bool
	}
} 
