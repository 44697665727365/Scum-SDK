namespace offsets
{
	namespace USceneCaptureComponent
	{
			constexpr auto PrimitiveRenderMode = 0x1f8; // Size: 1, Type: uint8_t 
			constexpr auto CaptureSource = 0x1f9; // Size: 1, Type: char ESceneCaptureSource
			constexpr auto bCaptureEveryFrame = 0x1fa; // Size: 1, Type: char
			constexpr auto bCaptureOnMovement = 0x1fa; // Size: 1, Type: char
			constexpr auto bAlwaysPersistRenderingState = 0x1fb; // Size: 1, Type: bool
			constexpr auto HiddenComponents = 0x200; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>>
			constexpr auto HiddenActors = 0x210; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto ShowOnlyComponents = 0x220; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>>
			constexpr auto ShowOnlyActors = 0x230; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto LODDistanceFactor = 0x240; // Size: 4, Type: float
			constexpr auto MaxViewDistanceOverride = 0x244; // Size: 4, Type: float
			constexpr auto CaptureSortPriority = 0x248; // Size: 4, Type: int32_t
			constexpr auto bUseRayTracingIfEnabled = 0x24c; // Size: 1, Type: bool
			constexpr auto ShowFlagSettings = 0x250; // Size: 16, Type: struct TArray<struct FEngineShowFlagsSetting>
			constexpr auto ProfilingEventName = 0x290; // Size: 16, Type: struct FString
	}
} 
