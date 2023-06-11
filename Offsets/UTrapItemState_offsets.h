namespace offsets
{
	namespace UTrapItemState
	{
			constexpr auto IsArmed = 0x100; // Size: 1, Type: bool
			constexpr auto CanBeTriggered = 0x101; // Size: 1, Type: bool
			constexpr auto CurrentTrigger = 0x102; // Size: 1, Type: uint8_t 
			constexpr auto LastTriggerOwner = 0x108; // Size: 8, Type: struct FDbIntegerId
			constexpr auto LastArmerId = 0x110; // Size: 8, Type: struct FDbIntegerId
			constexpr auto Quality = 0x118; // Size: 4, Type: float
			constexpr auto WasTriggered = 0x11c; // Size: 1, Type: bool
			constexpr auto NumRemainingDefuseAttempts = 0x120; // Size: 4, Type: int32_t
			constexpr auto OwnerlessElapsedTime = 0x124; // Size: 4, Type: float
			constexpr auto PendingDestroy = 0x128; // Size: 1, Type: bool
			constexpr auto Trigger = 0x130; // Size: 8, Type: struct UTriggerComponentState*
			constexpr auto TriggerData = 0x138; // Size: 16, Type: struct TArray<char>
	}
} 
