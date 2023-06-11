namespace offsets
{
	namespace UHandsCorrectionsData
	{
			constexpr auto Corrections[4] = 0x30; // Size: 256, Type: struct FHandsPoseCorrections
			constexpr auto FirstPersonCorrections[4] = 0x130; // Size: 256, Type: struct FHandsPoseCorrections
			constexpr auto OverrideFingersOnlyInProne = 0x230; // Size: 1, Type: bool
	}
} 
