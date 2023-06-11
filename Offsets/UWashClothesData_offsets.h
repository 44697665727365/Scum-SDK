namespace offsets
{
	namespace UWashClothesData
	{
			constexpr auto WashClothes = 0x30; // Size: 80, Type: struct TMap<AItem*, struct FWashItemData>
			constexpr auto SkillToIncrease = 0x80; // Size: 8, Type: USkill*
			constexpr auto SkillIncreaseAmount = 0x88; // Size: 4, Type: float
			constexpr auto SkillIncreaseModifier = 0x8c; // Size: 4, Type: float
	}
} 
