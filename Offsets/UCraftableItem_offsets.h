namespace offsets
{
	namespace UCraftableItem
	{
			constexpr auto ItemCategory = 0x30; // Size: 1, Type: uint8_t 
			constexpr auto ItemOrder = 0x34; // Size: 4, Type: int32_t
			constexpr auto CraftedItems = 0x38; // Size: 16, Type: struct TArray<struct FCraftingPair>
			constexpr auto Interaction = 0x48; // Size: 1, Type: uint8_t 
			constexpr auto InteractionCaption = 0x50; // Size: 24, Type: struct FText
			constexpr auto HideItemCaptionInCraftingCaption = 0x68; // Size: 1, Type: bool
			constexpr auto MandatoryItems = 0x70; // Size: 16, Type: struct TArray<struct FCraftingItem>
			constexpr auto OptionalItems = 0x80; // Size: 16, Type: struct TArray<struct FCraftingItem>
			constexpr auto ToolsNeeded = 0x90; // Size: 16, Type: struct TArray<struct FCraftingItem>
			constexpr auto AutoCalculation = 0xa0; // Size: 1, Type: bool
			constexpr auto Skill = 0xa8; // Size: 8, Type: USkill*
			constexpr auto NoSkillLevelData = 0xb0; // Size: 20, Type: struct FCraftingSkillLevelData
			constexpr auto BasicLevelData = 0xc4; // Size: 20, Type: struct FCraftingSkillLevelData
			constexpr auto MediumLevelData = 0xd8; // Size: 20, Type: struct FCraftingSkillLevelData
			constexpr auto AdvancedLevelData = 0xec; // Size: 20, Type: struct FCraftingSkillLevelData
			constexpr auto CustomCraftingMontage = 0x100; // Size: 8, Type: struct UAnimMontage*
			constexpr auto StartCraftingAudioEvent = 0x108; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopCraftingAudioEvent = 0x110; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto OnlyForSupporterPack = 0x118; // Size: 1, Type: bool
			constexpr auto AutoCalculateHealth = 0x119; // Size: 1, Type: bool
			constexpr auto AutoCalculateWeight = 0x11a; // Size: 1, Type: bool
			constexpr auto AutoCalculateFoodParameters = 0x11b; // Size: 1, Type: bool
			constexpr auto AlcoholContentMultiplier = 0x11c; // Size: 4, Type: float
			constexpr auto BulletStackAmount = 0x120; // Size: 4, Type: int32_t
	}
} 
