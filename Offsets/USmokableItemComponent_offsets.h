namespace offsets
{
	namespace USmokableItemComponent
	{
			constexpr auto _typeOfInhalationPoisoning = 0x1b0; // Size: 8, Type: UPrisonerBodyCondition_InhalationPoisoning*
			constexpr auto _inhalableSubstanceAmount = 0x1b8; // Size: 4, Type: float
			constexpr auto _exhaustionRecoveryAmount = 0x1bc; // Size: 4, Type: float
			constexpr auto _burningIcon = 0x1c0; // Size: 8, Type: struct UTexture2D*
			constexpr auto _minEmissivity = 0x1c8; // Size: 4, Type: float
			constexpr auto _maxEmissivity = 0x1cc; // Size: 4, Type: float
			constexpr auto _burningMaterial = 0x1d0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _timeBetweenExhalation = 0x1d8; // Size: 4, Type: float
			constexpr auto _itemInHandsSocketName = 0x1dc; // Size: 8, Type: struct FName
			constexpr auto _itemEquippedSocketName = 0x1e4; // Size: 8, Type: struct FName
			constexpr auto _offsetWhenEquipped = 0x200; // Size: 48, Type: struct FTransform
	}
} 
