namespace offsets
{
	namespace UDrivingSkill
	{
			constexpr auto NoSkillExperienceAwards = 0xb0; // Size: 8, Type: struct FVehicleHandlingExperienceAwards
			constexpr auto BasicSkillExperienceAwards = 0xb8; // Size: 8, Type: struct FVehicleHandlingExperienceAwards
			constexpr auto MediumSkillExperienceAwards = 0xc0; // Size: 8, Type: struct FVehicleHandlingExperienceAwards
			constexpr auto AdvancedSkillExperienceAwards = 0xc8; // Size: 8, Type: struct FVehicleHandlingExperienceAwards
			constexpr auto AboveAdvancedSkillExperienceAwards = 0xd0; // Size: 8, Type: struct FVehicleHandlingExperienceAwards
			constexpr auto NoSkillParameters = 0xd8; // Size: 256, Type: struct FDrivingSkillParametersPerSkillLevel
			constexpr auto BasicSkillParameters = 0x1d8; // Size: 256, Type: struct FDrivingSkillParametersPerSkillLevel
			constexpr auto MediumSkillParameters = 0x2d8; // Size: 256, Type: struct FDrivingSkillParametersPerSkillLevel
			constexpr auto AdvancedSkillParameters = 0x3d8; // Size: 256, Type: struct FDrivingSkillParametersPerSkillLevel
			constexpr auto AboveAdvancedSkillParameters = 0x4d8; // Size: 256, Type: struct FDrivingSkillParametersPerSkillLevel
	}
} 
