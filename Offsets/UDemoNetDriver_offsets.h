namespace offsets
{
	namespace UDemoNetDriver
	{
			constexpr auto RollbackNetStartupActors = 0x868; // Size: 80, Type: struct TMap<struct FString, struct FRollbackNetStartupActorInfo>
			constexpr auto CheckpointSaveMaxMSPerFrame = 0xa14; // Size: 4, Type: float
			constexpr auto MulticastRecordOptions = 0xa38; // Size: 16, Type: struct TArray<struct FMulticastRecordOptions>
			constexpr auto bIsLocalReplay = 0xa48; // Size: 1, Type: bool
			constexpr auto SpectatorControllers = 0xa50; // Size: 16, Type: struct TArray<struct APlayerController*>
	}
} 
