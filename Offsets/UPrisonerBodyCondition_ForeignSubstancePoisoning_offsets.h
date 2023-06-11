namespace offsets
{
	namespace UPrisonerBodyCondition_ForeignSubstancePoisoning
	{
			constexpr auto _severityVsForeignSubstanceAmountRatio = 0xc0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _foreignSubstanceAmountRatioToExist = 0x148; // Size: 4, Type: float
			constexpr auto _foreignSubstanceAmountAtRecoveryStart = 0x14c; // Size: 4, Type: float
			constexpr auto _state = 0x150; // Size: 1, Type: uint8_t 
			constexpr auto _affectedBodyBoneGroupsVsSeverity = 0x158; // Size: 16, Type: struct FPrisonerBodyBoneGroupsVsSeverity
			constexpr auto _affectedBodyMuscleGroupsVsSeverity = 0x168; // Size: 16, Type: struct FPrisonerBodyMuscleGroupsVsSeverity
			constexpr auto _affectedBodyOrganGroupsVsSeverity = 0x178; // Size: 16, Type: struct FPrisonerBodyOrganGroupsVsSeverity
			constexpr auto _foreignSubstanceClass = 0x188; // Size: 8, Type: UForeignSubstance*
	}
} 
