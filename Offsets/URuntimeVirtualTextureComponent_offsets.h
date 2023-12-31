namespace offsets
{
	namespace URuntimeVirtualTextureComponent
	{
			constexpr auto BoundsAlignActor = 0x1f8; // Size: 40, Type: struct TSoftObjectPtr<AActor>
			constexpr auto bSetBoundsButton = 0x220; // Size: 1, Type: bool
			constexpr auto bSnapBoundsToLandscape = 0x221; // Size: 1, Type: bool
			constexpr auto VirtualTexture = 0x228; // Size: 8, Type: struct URuntimeVirtualTexture*
			constexpr auto bEnableScalability = 0x230; // Size: 1, Type: bool
			constexpr auto ScalabilityGroup = 0x234; // Size: 4, Type: uint32_t
			constexpr auto bHidePrimitives = 0x238; // Size: 1, Type: bool
			constexpr auto StreamingTexture = 0x240; // Size: 8, Type: struct UVirtualTextureBuilder*
			constexpr auto StreamLowMips = 0x248; // Size: 4, Type: int32_t
			constexpr auto bBuildStreamingMipsButton = 0x24c; // Size: 1, Type: bool
			constexpr auto bEnableCompressCrunch = 0x24d; // Size: 1, Type: bool
			constexpr auto bUseStreamingLowMipsInEditor = 0x24e; // Size: 1, Type: bool
			constexpr auto bBuildDebugStreamingMips = 0x24f; // Size: 1, Type: bool
	}
} 
