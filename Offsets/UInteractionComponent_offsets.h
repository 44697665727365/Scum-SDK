namespace offsets
{
	namespace UInteractionComponent
	{
			constexpr auto ExamineActionDuration = 0xb8; // Size: 4, Type: float
			constexpr auto ExamineReplicationDelay = 0xbc; // Size: 4, Type: float
			constexpr auto PickupItemActionDuration = 0xc0; // Size: 4, Type: float
			constexpr auto PickupItemReplicationDelay = 0xc4; // Size: 4, Type: float
			constexpr auto StoreItemActionDuration = 0xc8; // Size: 4, Type: float
			constexpr auto TickFrequency = 0xcc; // Size: 4, Type: float
			constexpr auto MinLandscapeInteractionDistanceSquared = 0xd0; // Size: 4, Type: float
			constexpr auto SavedGroundSearchLocationsCount = 0xd4; // Size: 4, Type: int32_t
			constexpr auto GhostActorToSpawnAfterExamine = 0xd8; // Size: 8, Type: AActor*
			constexpr auto InitialMinNumEmptyContainersToSearchToSpawnGhostActor = 0xe8; // Size: 4, Type: int32_t
			constexpr auto InitialMaxNumEmptyContainersToSearchToSpawnGhostActor = 0xec; // Size: 4, Type: int32_t
			constexpr auto MinNumEmptyContainersToSearchToSpawnGhostActor = 0xf0; // Size: 4, Type: int32_t
			constexpr auto MaxNumEmptyContainersToSearchToSpawnGhostActor = 0xf4; // Size: 4, Type: int32_t
			constexpr auto ShouldSpawnGhostActorRelativeToExaminer = 0xf8; // Size: 1, Type: bool
			constexpr auto GhostActorSpawnDistanceToExaminer = 0xfc; // Size: 4, Type: float
			constexpr auto ExamineGhostSpawnEndTime = 0x100; // Size: 8, Type: int64_t
			constexpr auto _actions = 0x110; // Size: 16, Type: struct TArray<struct UInteractionAction*>
			constexpr auto _replicatedExamineSpawnedItems = 0x210; // Size: 24, Type: struct FSpawnedItems
			constexpr auto _replicatedPickupSpawnedItem = 0x228; // Size: 24, Type: struct FSpawnedItems
			constexpr auto _drinkAllowedThreshold = 0x26c; // Size: 4, Type: float
			constexpr auto _reexamineFrequency = 0x270; // Size: 4, Type: float
	}
} 
