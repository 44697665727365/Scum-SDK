namespace offsets
{
	namespace UDefaultDamageCustomization
	{
			constexpr auto PrisonerInjuryTypeLikelihoodsPerBodyPart = 0x28; // Size: 16, Type: struct TArray<struct FPrisonerInjuryTypeLikelihoods>
			constexpr auto PrisonerBleedingSeverityEnergyThreshold = 0x38; // Size: 16, Type: struct TArray<float>
			constexpr auto PrisonerDamageMultiplierPerBodyPart[c] = 0x48; // Size: 48, Type: float
			constexpr auto StaminaDrainPerHundredJoules = 0x78; // Size: 4, Type: float
			constexpr auto HeadshotInstantKillEnergyThreshold = 0x7c; // Size: 4, Type: float
	}
} 
