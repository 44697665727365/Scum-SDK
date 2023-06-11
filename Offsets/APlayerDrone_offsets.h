namespace offsets
{
	namespace APlayerDrone
	{
			constexpr auto _movementInertiaPlayer = 0x8b8; // Size: 4, Type: float
			constexpr auto _firstPersonCameraComponent = 0x8c0; // Size: 8, Type: struct UCameraComponent*
			constexpr auto _thirdPersonCameraComponent = 0x8c8; // Size: 8, Type: struct UCameraComponent*
			constexpr auto _springArmComponent = 0x8d0; // Size: 8, Type: struct USpringArmComponent*
			constexpr auto _itemDragComponent = 0x8d8; // Size: 8, Type: struct UCharacterItemDragComponent*
			constexpr auto _nightVisionMaterial = 0x8e0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _interactionDistance = 0x8e8; // Size: 4, Type: float
			constexpr auto _itemPlacingMaterialAllowed = 0x8f0; // Size: 8, Type: struct UMaterialInstance*
			constexpr auto _itemPlacingMaterialDisallowed = 0x8f8; // Size: 8, Type: struct UMaterialInstance*
			constexpr auto _colorTintWhenInvisible = 0x900; // Size: 16, Type: struct FLinearColor
			constexpr auto _colorTintWhenHidden = 0x910; // Size: 16, Type: struct FLinearColor
			constexpr auto _progressWidget = 0xa60; // Size: 8, Type: struct UActionProgressWidget*
			constexpr auto _currentlyDroppingItem = 0xa6c; // Size: 8, Type: struct TWeakObjectPtr<UObject>
			constexpr auto _doorUpgradeWidget = 0xa98; // Size: 8, Type: struct UDoorUpgradeWidget*
			constexpr auto _droneVisibility = 0xaa0; // Size: 1, Type: uint8_t 
	}
} 
