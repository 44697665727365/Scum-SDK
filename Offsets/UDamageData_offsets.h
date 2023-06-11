namespace offsets
{
	namespace UDamageData
	{
			constexpr auto DamageResponseTag = 0x30; // Size: 8, Type: struct FGameplayTag
			constexpr auto GameEventTag = 0x38; // Size: 8, Type: struct FGameplayTag
			constexpr auto IgnoreForStatsTag = 0x40; // Size: 8, Type: struct FGameplayTag
			constexpr auto CauseHeadExplosionTag = 0x48; // Size: 8, Type: struct FGameplayTag
			constexpr auto ApplyBleedingOnlyTag = 0x50; // Size: 8, Type: struct FGameplayTag
			constexpr auto WeaponDescTable = 0x58; // Size: 8, Type: struct UDataTable*
			constexpr auto DamageTargetTypeMap = 0x60; // Size: 16, Type: struct TArray<struct FDamageTargetTypeMapping>
	}
} 
