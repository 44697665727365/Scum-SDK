namespace offsets
{
	namespace UPBCTIIT_ApplyBandagesOrDisinfect_ApplyBandages
	{
			constexpr auto TreatmentDurationPerSeverityLevel = 0x50; // Size: 16, Type: struct TArray<float>
			constexpr auto TreatmentDurationPerUsePerSeverityLevel = 0x60; // Size: 16, Type: struct TArray<float>
			constexpr auto StabilizationDurationReduction = 0x70; // Size: 4, Type: float
			constexpr auto SkillData[5] = 0x78; // Size: 80, Type: struct FPBCTIIT_ApplyBandagesOrDisinfect_ApplyBandages_PerSkillData
	}
} 
