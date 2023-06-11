namespace offsets
{
	namespace ADcxBicycle
	{
			constexpr auto _baseStrengthChangeRate = 0xda8; // Size: 4, Type: float
			constexpr auto _strengthChangeRateFactorVsVehicleSpeedKmh = 0xdb0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _strengthChangeRateFactorVsGroundSlope = 0xdb8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _baseConstitutionChangeRate = 0xdc0; // Size: 4, Type: float
			constexpr auto _constitutionChangeRateFactorVsVehicleSpeedKmh = 0xdc8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _constitutionChangeRateFactorVsGroundSlope = 0xdd0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _baseRunningSkillExperienceGainRate = 0xdd8; // Size: 4, Type: float
			constexpr auto _runningSkillExperienceGainRateFactorVsVehicleSpeedKmh = 0xde0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _runningSkillExperienceGainRateFactorVsGroundSlope = 0xde8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _baseEnduranceSkillExperienceGainRate = 0xdf0; // Size: 4, Type: float
			constexpr auto _enduranceSkillExperienceGainRateFactorVsVehicleSpeedKmh = 0xdf8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _enduranceSkillExperienceGainRateFactorVsGroundSlope = 0xe00; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _baseActionDifficulty = 0xe08; // Size: 4, Type: float
			constexpr auto _actionDifficultyFactorVsVehicleSpeedKmh = 0xe10; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _actionDifficultyFactorVsGroundSlope = 0xe18; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _speedThresholdForAINoise = 0xe20; // Size: 4, Type: float
	}
} 
