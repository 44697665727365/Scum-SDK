namespace offsets
{
	namespace AWeaponAttachmentMagazine
	{
			constexpr auto AmmunitionTags = 0x930; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto RequiresFullCapacityOnLoad = 0x950; // Size: 1, Type: bool
			constexpr auto DefaultFillAmmo = 0x958; // Size: 8, Type: AAmmunitionItem*
			constexpr auto InitialAmmo = 0x960; // Size: 4, Type: int32_t
			constexpr auto _ammoData = 0x968; // Size: 16, Type: struct TArray<struct FAmmunitionData>
			constexpr auto _ammoOwnerHelper = 0x978; // Size: 16, Type: struct TArray<struct FAmmunitionData>
			constexpr auto _capacity = 0x98c; // Size: 4, Type: int32_t
			constexpr auto _cartridgeMeshComponents = 0x998; // Size: 16, Type: struct TArray<struct UStaticMeshComponent*>
			constexpr auto _skeletalMesh = 0x9a8; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto _loadAmmoSequences = 0x9b0; // Size: 16, Type: struct TArray<UItemActionSequenceLoadMagazine*>
			constexpr auto _rangedWeaponsSkillClass = 0x9c0; // Size: 8, Type: URangedWeaponsSkill*
			constexpr auto _loadMagazineActionSpeedMultiplier = 0x9c8; // Size: 4, Type: float
			constexpr auto _inventoryIconFull = 0x9d0; // Size: 8, Type: struct UTexture2D*
	}
} 
