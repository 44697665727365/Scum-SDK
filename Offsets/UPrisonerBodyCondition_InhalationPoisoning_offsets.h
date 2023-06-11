namespace offsets
{
	namespace UPrisonerBodyCondition_InhalationPoisoning
	{
			constexpr auto _severityVsInhalableSubstanceAmountRatio = 0xc0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _inhalableSubstanceAmountAtRecoveryStart = 0x148; // Size: 4, Type: float
			constexpr auto _state = 0x14c; // Size: 1, Type: uint8_t 
			constexpr auto _inhalableSubstanceAmount = 0x154; // Size: 4, Type: float
			constexpr auto _inhalableSubstanceMaxAmountVsConstitutionRatio = 0x158; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _baseInhalableSubstanceDiscardRate = 0x1e0; // Size: 4, Type: float
			constexpr auto _affectedBodyBoneGroupsVsSeverity = 0x1e8; // Size: 16, Type: struct FPrisonerBodyBoneGroupsVsSeverity
			constexpr auto _affectedBodyMuscleGroupsVsSeverity = 0x1f8; // Size: 16, Type: struct FPrisonerBodyMuscleGroupsVsSeverity
			constexpr auto _affectedBodyOrganGroupsVsSeverity = 0x208; // Size: 16, Type: struct FPrisonerBodyOrganGroupsVsSeverity
	}
} 
