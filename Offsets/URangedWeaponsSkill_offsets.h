namespace offsets
{
	namespace URangedWeaponsSkill
	{
			constexpr auto _clearMalfunctionBadRound = 0xc0; // Size: 4, Type: float
			constexpr auto _clearMalfunctionStovePipe = 0xc4; // Size: 4, Type: float
			constexpr auto _clearMalfunctionRoundNotLoaded = 0xc8; // Size: 4, Type: float
			constexpr auto _clearMalfunctionDoubleFeed = 0xcc; // Size: 4, Type: float
			constexpr auto _clearMalfunctionStuckBullet = 0xd0; // Size: 4, Type: float
			constexpr auto _clearMalfunctionClipPartiallyEjected = 0xd4; // Size: 4, Type: float
			constexpr auto NoSkillParameters = 0xd8; // Size: 4, Type: struct FRangedWeaponSkillParametersPerSkillLevel
			constexpr auto BasicSkillParameters = 0xdc; // Size: 4, Type: struct FRangedWeaponSkillParametersPerSkillLevel
			constexpr auto MediumSkillParameters = 0xe0; // Size: 4, Type: struct FRangedWeaponSkillParametersPerSkillLevel
			constexpr auto AdvancedSkillParameters = 0xe4; // Size: 4, Type: struct FRangedWeaponSkillParametersPerSkillLevel
			constexpr auto AboveAdvancedSkillParameters = 0xe8; // Size: 4, Type: struct FRangedWeaponSkillParametersPerSkillLevel
	}
} 
