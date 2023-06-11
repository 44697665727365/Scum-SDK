namespace offsets
{
	namespace AAmmunitionItem
	{
			constexpr auto AmmunitionTag = 0x910; // Size: 8, Type: struct FGameplayTag
			constexpr auto AmmunitionTypeString = 0x918; // Size: 16, Type: struct FString
			constexpr auto projectileClass = 0x928; // Size: 8, Type: AProjectile*
			constexpr auto CartridgeMesh = 0x930; // Size: 8, Type: struct UStaticMesh*
			constexpr auto CasingMesh = 0x938; // Size: 8, Type: struct UStaticMesh*
			constexpr auto UsedBadRoundMesh = 0x940; // Size: 8, Type: struct UStaticMesh*
			constexpr auto WeaponSpreadMultiplier = 0x948; // Size: 4, Type: float
			constexpr auto MaxAmmoCount = 0x94c; // Size: 4, Type: int32_t
			constexpr auto _ammoCount = 0x950; // Size: 4, Type: int32_t
			constexpr auto _ammoCountOwnerHelper = 0x954; // Size: 4, Type: int32_t
	}
} 
