namespace offsets
{
	namespace AComplexAnimal2
	{
			constexpr auto EnergyDepletionRate = 0x978; // Size: 4, Type: float
			constexpr auto HungerDepletionRate = 0x97c; // Size: 4, Type: float
			constexpr auto HungerDepletionRateWhenResting = 0x980; // Size: 4, Type: float
			constexpr auto EnergyRefillRate = 0x984; // Size: 4, Type: float
			constexpr auto HungerRefillRate = 0x988; // Size: 4, Type: float
			constexpr auto HealthRegenerationRate = 0x98c; // Size: 4, Type: float
			constexpr auto HealthDepletionRate = 0x990; // Size: 4, Type: float
			constexpr auto MovementPaceSettings = 0x994; // Size: 16, Type: struct FAnimalPaceSettings
			constexpr auto RotationRateSettings = 0x9a4; // Size: 60, Type: struct FAnimalStationaryRotationRateSettings
			constexpr auto OnActionChanged = 0x9e0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ChargeAttacks = 0x9f0; // Size: 16, Type: struct TArray<struct FChargeAttackData>
			constexpr auto CloseRangeAttacks = 0xa00; // Size: 16, Type: struct TArray<struct FCloseRangeAttackData>
			constexpr auto TurnMonatges = 0xa10; // Size: 16, Type: struct FTurnMontages
			constexpr auto AnimalActions = 0xa20; // Size: 24, Type: struct FAnimalActionMontageData
			constexpr auto AttackRotationRate = 0xa38; // Size: 4, Type: float
			constexpr auto MinActionTime = 0xa3c; // Size: 4, Type: float
			constexpr auto HitReactTypeResting = 0xa40; // Size: 8, Type: struct FGameplayTag
			constexpr auto HitReactTypeIntimidate = 0xa48; // Size: 8, Type: struct FGameplayTag
			constexpr auto _hungerAndEnergyReplicated = 0xa58; // Size: 2, Type: uint16_t
			constexpr auto _lookAtPoint = 0xa60; // Size: 12, Type: struct FVector
			constexpr auto _maxLookUpAngle = 0xabc; // Size: 4, Type: float
			constexpr auto _maxLookRightAngle = 0xac0; // Size: 4, Type: float
			constexpr auto _headMovementLerpSpeed = 0xac4; // Size: 4, Type: float
	}
} 
