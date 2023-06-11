namespace offsets
{
	namespace AConZBaseManager
	{
			constexpr auto _damageEventProcessingPeriod = 0x2b0; // Size: 4, Type: float
			constexpr auto _decayProcessingPeriod = 0x2b4; // Size: 4, Type: float
			constexpr auto _flagOvertakePeriod = 0x2b8; // Size: 4, Type: float
			constexpr auto _baseInteractionsPeriod = 0x2bc; // Size: 4, Type: float
			constexpr auto _baseClass = 0x2c0; // Size: 8, Type: AConZBase*
			constexpr auto _baseElementClass = 0x2c8; // Size: 8, Type: AConZBaseElement*
			constexpr auto _flagAreaVisualizerClass = 0x2d0; // Size: 8, Type: AFlagAreaVisualizer*
			constexpr auto _initialBaseSize = 0x2d8; // Size: 8, Type: struct FVector2D
			constexpr auto _flagInfluenceRadius = 0x2e0; // Size: 4, Type: float
			constexpr auto _flagOvertakeDuration = 0x2e4; // Size: 4, Type: int32_t
			constexpr auto _maxElementsPerFlag = 0x2e8; // Size: 4, Type: int32_t
			constexpr auto _extraElementsPerFlagForAdditionalSquadMember = 0x2ec; // Size: 4, Type: int32_t
			constexpr auto _maxNumberOfExpandedElementsPerFlag = 0x2f0; // Size: 4, Type: int32_t
			constexpr auto _allowMultipleFlagsPerPlayer = 0x2f4; // Size: 1, Type: bool
			constexpr auto _maxBaseBuildingHeight = 0x2f8; // Size: 4, Type: float
			constexpr auto _shortRepairDuration = 0x2fc; // Size: 8, Type: struct FConZBaseRepairAreaDuration
			constexpr auto _mediumRepairDuration = 0x304; // Size: 8, Type: struct FConZBaseRepairAreaDuration
			constexpr auto _longRepairDuration = 0x30c; // Size: 8, Type: struct FConZBaseRepairAreaDuration
			constexpr auto _bases = 0x330; // Size: 80, Type: struct TMap<int64_t, struct AConZBase*>
	}
} 
