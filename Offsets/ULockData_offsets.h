namespace offsets
{
	namespace ULockData
	{
			constexpr auto LockMinigameClass = 0x28; // Size: 8, Type: AMinigame*
			constexpr auto LockMinigameConfigurationClass = 0x30; // Size: 8, Type: ULockpickingMinigameConfiguration*
			constexpr auto FailurePenaltyClass = 0x38; // Size: 8, Type: UFailurePenalty*
			constexpr auto AreFamePointsRequired = 0x40; // Size: 1, Type: bool
			constexpr auto IgnoreLockProtection = 0x41; // Size: 1, Type: bool
			constexpr auto CanBeForceUnlocked = 0x42; // Size: 1, Type: bool
			constexpr auto ForceUnlockTime = 0x44; // Size: 4, Type: float
			constexpr auto TotalCrowbarDamage = 0x48; // Size: 4, Type: float
			constexpr auto LockDifficulty = 0x4c; // Size: 1, Type: uint8_t 
			constexpr auto ExperienceOnSuccess = 0x50; // Size: 4, Type: float
			constexpr auto ExperienceOnFailure = 0x54; // Size: 4, Type: float
			constexpr auto LockedMessage = 0x58; // Size: 24, Type: struct FText
			constexpr auto LockpickMessage = 0x70; // Size: 24, Type: struct FText
			constexpr auto NumberOfNeutralizationAttempts = 0x88; // Size: 4, Type: int32_t
			constexpr auto NumRemainingNeutralizationAttempts = 0x8c; // Size: 4, Type: int32_t
			constexpr auto lockHP = 0x90; // Size: 4, Type: float
	}
} 
