namespace offsets
{
	namespace UItemWeaponState
	{
			constexpr auto ZeroRange = 0x100; // Size: 4, Type: int32_t
			constexpr auto FiringMode = 0x104; // Size: 1, Type: uint8_t 
			constexpr auto malfunction = 0x105; // Size: 1, Type: uint8_t 
			constexpr auto LoadedAmmoData = 0x108; // Size: 16, Type: struct TArray<struct FAmmunitionData>
			constexpr auto InternalMagazineAmmoData = 0x118; // Size: 16, Type: struct TArray<struct FAmmunitionData>
			constexpr auto LoadedAmmunitionItemClass = 0x128; // Size: 8, Type: UObject*
			constexpr auto WeaponAttachments = 0x130; // Size: 16, Type: struct TArray<struct FEntityId>
	}
} 
