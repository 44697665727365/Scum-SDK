namespace offsets
{
	namespace ADoor
	{
			constexpr auto ControlName = 0x240; // Size: 8, Type: struct FName
			constexpr auto Mesh = 0x248; // Size: 8, Type: struct UMeshComponent*
			constexpr auto OnOpened = 0x250; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto _doorType = 0x2d0; // Size: 1, Type: uint8_t 
			constexpr auto _rootComponent = 0x2d8; // Size: 8, Type: struct USceneComponent*
			constexpr auto _maxNumberOfLocks = 0x2e4; // Size: 4, Type: int32_t
			constexpr auto _maxNumberOfZappers = 0x2e8; // Size: 4, Type: int32_t
			constexpr auto _supportsRemoteSensor = 0x2ec; // Size: 1, Type: bool
			constexpr auto CanOpenOnBothSides = 0x2ed; // Size: 1, Type: bool
			constexpr auto _canOpen = 0x2ee; // Size: 1, Type: bool
			constexpr auto _openingDuration = 0x2f0; // Size: 4, Type: float
			constexpr auto _closingDuration = 0x2f4; // Size: 4, Type: float
			constexpr auto _canInteractWhileInTransition = 0x2f8; // Size: 1, Type: bool
			constexpr auto _shouldSelfClose = 0x2f9; // Size: 1, Type: bool
			constexpr auto _openedDurationBeforeSelfClosing = 0x2fc; // Size: 4, Type: float
			constexpr auto _selfCloseDuration = 0x300; // Size: 4, Type: float
			constexpr auto _openingSoundCue = 0x308; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _openedSoundCue = 0x310; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _closingSoundCue = 0x318; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _closedSoundCue = 0x320; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _noiseLoudness = 0x328; // Size: 4, Type: float
			constexpr auto _doorUnlockData = 0x330; // Size: 8, Type: UDoorUnlockData*
			constexpr auto _stateFlags = 0x358; // Size: 1, Type: uint8_t 
			constexpr auto _canEverBeOpened = 0x35a; // Size: 1, Type: bool
			constexpr auto _canEverBeClosed = 0x35b; // Size: 1, Type: bool
			constexpr auto _priceCategory = 0x368; // Size: 8, Type: struct UPriceCategory*
			constexpr auto _unlockTransformInside = 0x370; // Size: 48, Type: struct FTransform
			constexpr auto _unlockTransformOutside = 0x3a0; // Size: 48, Type: struct FTransform
			constexpr auto _forceUnlockMovementAcceptanceRadius = 0x3d0; // Size: 4, Type: float
			constexpr auto _upgradeItemsClasses = 0x3d8; // Size: 16, Type: struct TArray<UObject*>
			constexpr auto _lockData = 0x3e8; // Size: 16, Type: struct TArray<struct ULockData*>
			constexpr auto _originalUpgradeItemsClasses = 0x408; // Size: 16, Type: struct TArray<UObject*>
			constexpr auto _originalLockData = 0x418; // Size: 16, Type: struct TArray<struct ULockData*>
			constexpr auto _owningUserProfileId = 0x438; // Size: 8, Type: struct FDbIntegerId
			constexpr auto _upgradeWidget = 0x450; // Size: 8, Type: struct UDoorUpgradeWidget*
			constexpr auto _doorRepData = 0x460; // Size: 72, Type: struct FDoorRepData
			constexpr auto _disableSerialization = 0x4b9; // Size: 1, Type: bool
			constexpr auto _attachedItems = 0x4d8; // Size: 16, Type: struct TArray<struct AItem*>
	}
} 
