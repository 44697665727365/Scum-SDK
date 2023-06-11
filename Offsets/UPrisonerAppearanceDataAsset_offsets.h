namespace offsets
{
	namespace UPrisonerAppearanceDataAsset
	{
			constexpr auto RequiresGameUpgrade = 0x30; // Size: 1, Type: bool
			constexpr auto GameUpgradeRequired = 0x31; // Size: 1, Type: uint8_t 
			constexpr auto CharacterMeshes = 0x38; // Size: 16, Type: struct TArray<struct UCharacterMesh*>
			constexpr auto SkinMaterials = 0x48; // Size: 80, Type: struct TMap<struct FName, struct TSoftObjectPtr<UMaterialInstance>>
			constexpr auto TypeTag = 0x98; // Size: 8, Type: struct FGameplayTag
			constexpr auto RaceTag = 0xa0; // Size: 8, Type: struct FGameplayTag
			constexpr auto CharacterAkSwitchValue = 0xa8; // Size: 8, Type: struct FName
			constexpr auto LeftEyeSocketName = 0xb0; // Size: 8, Type: struct FName
			constexpr auto RightEyeSocketName = 0xb8; // Size: 8, Type: struct FName
			constexpr auto DefaultHairStyleIndex = 0xc0; // Size: 4, Type: int32_t
	}
} 
