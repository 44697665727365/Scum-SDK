namespace offsets
{
	namespace UFieldSystemComponent
	{
			constexpr auto FieldSystem = 0x450; // Size: 8, Type: struct UFieldSystem*
			constexpr auto bIsWorldField = 0x458; // Size: 1, Type: bool
			constexpr auto bIsChaosField = 0x459; // Size: 1, Type: bool
			constexpr auto SupportedSolvers = 0x460; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<AChaosSolverActor>>
			constexpr auto ConstructionCommands = 0x470; // Size: 48, Type: struct FFieldObjectCommands
			constexpr auto BufferCommands = 0x4a0; // Size: 48, Type: struct FFieldObjectCommands
	}
} 
