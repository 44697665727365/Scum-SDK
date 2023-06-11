namespace offsets
{
	namespace UPrisonerBodySimulationData
	{
			constexpr auto MaxStrengthGainRateVsStrength = 0x30; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto StrengthLossPerMissingProtein = 0xb8; // Size: 4, Type: float
			constexpr auto MaxConstitutionGainRate = 0xbc; // Size: 4, Type: float
			constexpr auto MaxConstitutionLossRate = 0xc0; // Size: 4, Type: float
			constexpr auto DexterityChangePerStorageFatEnergy = 0xc4; // Size: 4, Type: float
			constexpr auto MaxBleedingSeverity = 0xc8; // Size: 4, Type: float
			constexpr auto BleedOutDurationVsBleedingSeverity = 0xcc; // Size: 8, Type: struct FFloatInterval
			constexpr auto BleedOutDurationMultiplierVsConstitution = 0xd4; // Size: 8, Type: struct FFloatInterval
			constexpr auto DamageRatioVsBloodLossRatio = 0xe0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto HealingSpeedMultiplierVsConstitution = 0x168; // Size: 8, Type: struct FFloatInterval
			constexpr auto HealingSpeedMultiplierVsActionDifficultyRatio = 0x170; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto ImmuneSystemEfficiencyMultiplierVsConstitution = 0x1f8; // Size: 8, Type: struct FFloatInterval
			constexpr auto ImmuneSystemEfficiencyMultiplierVsActionDifficultyRatio = 0x200; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto StaminaChangeRateVsActionDifficulty = 0x288; // Size: 24, Type: struct FPrisonerActionDifficultyCurve
			constexpr auto ExhaustionIncrement = 0x2a0; // Size: 4, Type: float
			constexpr auto ExhaustionFallRate = 0x2a4; // Size: 4, Type: float
			constexpr auto ExhaustionFallRateMultiplierWhenLyingOnFurniture = 0x2a8; // Size: 4, Type: float
			constexpr auto ExhaustionBonusModifierPerConsumedItem = 0x2ac; // Size: 4, Type: float
			constexpr auto ExhaustionBonusMaxModifier = 0x2b0; // Size: 4, Type: float
			constexpr auto MaxStaminaReductionIncreaseMultiplier = 0x2b4; // Size: 4, Type: float
			constexpr auto HeartRateRatioVsActionDifficulty = 0x2b8; // Size: 24, Type: struct FPrisonerActionDifficultyCurve
			constexpr auto HeartRateRaiseInterpSpeed = 0x2d0; // Size: 4, Type: float
			constexpr auto HeartRateFallRate = 0x2d4; // Size: 4, Type: float
			constexpr auto BreathingRateInterpSpeed = 0x2d8; // Size: 4, Type: float
			constexpr auto OxygenSaturationRaiseRateVsActionDifficulty = 0x2dc; // Size: 24, Type: struct FPrisonerActionDifficultyCurve
			constexpr auto OxygenSaturationFallRateVsActionDifficulty = 0x2f4; // Size: 24, Type: struct FPrisonerActionDifficultyCurve
			constexpr auto PreferredEnvironmentTemperatureWhenNaked = 0x30c; // Size: 4, Type: float
			constexpr auto PhoenixTearsDiscardRateVsAmount = 0x310; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto HealingSpeedMultiplierVsPhoenixTearsAmount = 0x398; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto ImmuneSystemEfficiencyMultiplierVsPhoenixTearsAmount = 0x420; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto MetabolismClass = 0x4a8; // Size: 8, Type: UMetabolism*
			constexpr auto MetabolismUpdateInterval = 0x4b0; // Size: 4, Type: float
			constexpr auto CaloriesConsumptionMultiplierVsHeartRateRatio = 0x4b8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto WaterConsumptionMultiplierVsHeartRateRatio = 0x540; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto NutrientsConsumptionFactorVsConstitutionRatio = 0x5c8; // Size: 8, Type: struct FFloatInterval
			constexpr auto StomachFullnessToBeAbleToVomit = 0x5d0; // Size: 4, Type: float
			constexpr auto BladderFullnessToBeAbleToUrinate = 0x5d4; // Size: 4, Type: float
			constexpr auto ColonFullnessToBeAbleToDefecate = 0x5d8; // Size: 4, Type: float
			constexpr auto ColonWaterContentRatioToHaveDiarrhea = 0x5dc; // Size: 4, Type: float
			constexpr auto ConsumptionDurationMultiplierVsEatingSpeed = 0x5e0; // Size: 8, Type: struct FFloatInterval
			constexpr auto ConsumptionDurations = 0x5e8; // Size: 80, Type: struct TMap<struct FGameplayTag, float>
			constexpr auto DigestionHandlersPerConsumableHealthRatios = 0x638; // Size: 16, Type: struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRanges
			constexpr auto DigestionHandlersPerConsumableFatsContentRatios = 0x648; // Size: 16, Type: struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRanges
			constexpr auto DigestionHandlersPerConsumableNutrientContentRatios = 0x658; // Size: 80, Type: struct TMap<uint8_t , struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRanges>
			constexpr auto Effects = 0x6a8; // Size: 80, Type: struct FPrisonerBodySimulationData_Effects
	}
} 
