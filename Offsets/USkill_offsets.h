namespace offsets
{
	namespace USkill
	{
			constexpr auto Caption = 0x30; // Size: 24, Type: struct FText
			constexpr auto ReplicationID = 0x48; // Size: 1, Type: uint8_t 
			constexpr auto ComboBonus = 0x4c; // Size: 4, Type: float
			constexpr auto NoSkillBonus = 0x50; // Size: 4, Type: float
			constexpr auto BasicBonus = 0x54; // Size: 4, Type: float
			constexpr auto MediumBonus = 0x58; // Size: 4, Type: float
			constexpr auto AdvancedBonus = 0x5c; // Size: 4, Type: float
			constexpr auto DisplayActionMessages = 0x60; // Size: 4, Type: float
			constexpr auto IsAvailableInCharacterCreation = 0x64; // Size: 1, Type: bool
			constexpr auto _skillIcon = 0x68; // Size: 8, Type: struct UTexture2D*
			constexpr auto _skillFamePointsMultiplier = 0xa4; // Size: 4, Type: float
			constexpr auto _uiDataClass = 0xa8; // Size: 8, Type: UPrisonerSkillUIData*
	}
} 
