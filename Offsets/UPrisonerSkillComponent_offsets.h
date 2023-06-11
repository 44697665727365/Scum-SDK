namespace offsets
{
	namespace UPrisonerSkillComponent
	{
			constexpr auto InitialSkills = 0xb0; // Size: 16, Type: struct TArray<struct FPrisonerInitialSkillInfo>
			constexpr auto TickFrequency = 0xc0; // Size: 4, Type: float
			constexpr auto _skills = 0xd0; // Size: 16, Type: struct TArray<struct USkill*>
			constexpr auto _actions = 0xe0; // Size: 16, Type: struct TArray<struct USkillAction*>
			constexpr auto _skillClasses = 0x198; // Size: 8, Type: struct USkillClasses*
			constexpr auto _lastSurroundingItems = 0x1a0; // Size: 16, Type: struct TArray<struct AItem*>
			constexpr auto _replicatedSkills = 0x238; // Size: 16, Type: struct TArray<struct FSkillRecord>
			constexpr auto _replicatedNoiseLevel = 0x24c; // Size: 4, Type: uint32_t
			constexpr auto _skillReplicationPeriod = 0x254; // Size: 4, Type: float
	}
} 
