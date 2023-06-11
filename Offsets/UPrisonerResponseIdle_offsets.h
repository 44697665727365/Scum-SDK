namespace offsets
{
	namespace UPrisonerResponseIdle
	{
			constexpr auto Montages = 0x28; // Size: 16, Type: struct TArray<struct UAnimMontage*>
			constexpr auto PreMontageDelay = 0x38; // Size: 4, Type: float
			constexpr auto PostMontageDelay = 0x3c; // Size: 4, Type: float
			constexpr auto CooldownDuration = 0x40; // Size: 4, Type: float
			constexpr auto CanBeUsedWhenItemIsInHands = 0x44; // Size: 1, Type: bool
			constexpr auto CombatibleAnimationsSets = 0x48; // Size: 80, Type: struct TSet<uint8_t >
	}
} 
