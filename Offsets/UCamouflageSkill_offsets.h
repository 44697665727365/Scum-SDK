namespace offsets
{
	namespace UCamouflageSkill
	{
			constexpr auto _activationTime = 0xb0; // Size: 4, Type: float
			constexpr auto _standingPenalty = 0xb4; // Size: 4, Type: float
			constexpr auto _crouchingPenalty = 0xb8; // Size: 4, Type: float
			constexpr auto _pronePenalty = 0xbc; // Size: 4, Type: float
			constexpr auto _slowMovingStandingPenalty = 0xc0; // Size: 4, Type: float
			constexpr auto _slowMovingCrouchingPenalty = 0xc4; // Size: 4, Type: float
			constexpr auto _slowMovingPronePenalty = 0xc8; // Size: 4, Type: float
			constexpr auto _mediumMovingStandingPenalty = 0xcc; // Size: 4, Type: float
			constexpr auto _mediumMovingCrouchingPenalty = 0xd0; // Size: 4, Type: float
			constexpr auto _fastMovingStandingPenalty = 0xd4; // Size: 4, Type: float
			constexpr auto _standingAIPerceptionMultiplier = 0xd8; // Size: 4, Type: float
			constexpr auto _crouchingAIPerceptionMultiplier = 0xdc; // Size: 4, Type: float
			constexpr auto _proneAIPerceptionMultiplier = 0xe0; // Size: 4, Type: float
			constexpr auto _maxRelevantAIPerceptionRadius = 0xe4; // Size: 4, Type: float
			constexpr auto NoSkillExperienceAwards = 0x154; // Size: 4, Type: struct FCamouflageSkillExperienceAwards
			constexpr auto BasicSkillExperienceAwards = 0x158; // Size: 4, Type: struct FCamouflageSkillExperienceAwards
			constexpr auto MediumSkillExperienceAwards = 0x15c; // Size: 4, Type: struct FCamouflageSkillExperienceAwards
			constexpr auto AdvancedSkillExperienceAwards = 0x160; // Size: 4, Type: struct FCamouflageSkillExperienceAwards
			constexpr auto AboveAdvancedSkillExperienceAwards = 0x164; // Size: 4, Type: struct FCamouflageSkillExperienceAwards
			constexpr auto NoSkillParameters = 0x168; // Size: 16, Type: struct FCamouflageSkillParametersPerSkillLevel
			constexpr auto BasicSkillParameters = 0x178; // Size: 16, Type: struct FCamouflageSkillParametersPerSkillLevel
			constexpr auto MediumSkillParameters = 0x188; // Size: 16, Type: struct FCamouflageSkillParametersPerSkillLevel
			constexpr auto AdvancedSkillParameters = 0x198; // Size: 16, Type: struct FCamouflageSkillParametersPerSkillLevel
			constexpr auto AboveAdvancedSkillParameters = 0x1a8; // Size: 16, Type: struct FCamouflageSkillParametersPerSkillLevel
	}
} 
