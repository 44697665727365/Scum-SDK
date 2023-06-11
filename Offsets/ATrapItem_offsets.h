namespace offsets
{
	namespace ATrapItem
	{
			constexpr auto _buriableTrapItemComponent = 0x940; // Size: 8, Type: struct UBuriableTrapItemComponent*
			constexpr auto _trapType = 0x948; // Size: 1, Type: uint8_t 
			constexpr auto _autoDestroyTimeWhenArmed = 0x94c; // Size: 4, Type: float
			constexpr auto _autoDestroyTimeWhenOwnerless = 0x950; // Size: 4, Type: float
			constexpr auto _destroyAfterTriggered = 0x954; // Size: 1, Type: bool
			constexpr auto _destroyDelay = 0x958; // Size: 4, Type: float
			constexpr auto _canEverBeRefueled = 0x95c; // Size: 1, Type: bool
			constexpr auto _refuelItemTag = 0x960; // Size: 8, Type: struct UTrapRefuelItemTag*
			constexpr auto _triggerForwardVector = 0x968; // Size: 12, Type: struct FVector
			constexpr auto _ragdollDuration = 0x974; // Size: 4, Type: float
			constexpr auto _isArmedByDefault = 0x978; // Size: 1, Type: bool
			constexpr auto _shouldApplyPhysicalDamage = 0x979; // Size: 1, Type: bool
			constexpr auto _physicalDamageBoundsBox = 0x97c; // Size: 28, Type: struct FBox
			constexpr auto _actorDestructionDelay = 0x998; // Size: 4, Type: float
			constexpr auto _numRemainingDefuseAttempts = 0x99c; // Size: 4, Type: int32_t
			constexpr auto _numRemainingDefuseAttemptsDependsOnSkill = 0x9a0; // Size: 1, Type: bool
			constexpr auto _logTrapTriggered = 0x9a1; // Size: 1, Type: bool
			constexpr auto _hasFixedTrigger = 0x9a2; // Size: 1, Type: bool
			constexpr auto _minDamageForTrigger = 0x9a4; // Size: 4, Type: float
			constexpr auto _triggeredByRadialDamage = 0x9a8; // Size: 1, Type: bool
			constexpr auto _triggerableWhenBuried = 0x9a9; // Size: 1, Type: bool
			constexpr auto _maxTriggerAngle = 0x9ac; // Size: 4, Type: float
			constexpr auto _canEverShowTriggerVisuals = 0x9b0; // Size: 1, Type: bool
			constexpr auto _triggerVisualTransform = 0x9c0; // Size: 48, Type: struct FTransform
			constexpr auto _minigameClass = 0x9f0; // Size: 8, Type: AMinigame*
			constexpr auto _minigameToolTag = 0x9f8; // Size: 8, Type: UBaseItemTag*
			constexpr auto _isDestroyed = 0xa01; // Size: 1, Type: bool
			constexpr auto _isArmed = 0xa20; // Size: 1, Type: bool
			constexpr auto _wasTriggered = 0xa21; // Size: 1, Type: bool
			constexpr auto _canBeTriggered = 0xa22; // Size: 1, Type: bool
			constexpr auto _currentTrigger = 0xa34; // Size: 1, Type: uint8_t 
			constexpr auto _lastTriggerOwner = 0xa38; // Size: 8, Type: struct FDbIntegerId
			constexpr auto _quality = 0xa40; // Size: 4, Type: float
	}
} 
