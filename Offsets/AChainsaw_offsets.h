namespace offsets
{
	namespace AChainsaw
	{
			constexpr auto SkeletalMesh = 0x920; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto AnimationsStartEngine = 0x928; // Size: 16, Type: struct FCharacterAndItemAnimation
			constexpr auto AnimationsCheckFuelStatus = 0x938; // Size: 16, Type: struct FCharacterAndItemAnimation
			constexpr auto ChoppingToolItemTag = 0x948; // Size: 8, Type: struct UBaseItemTag*
			constexpr auto TurnOnAudioEvent = 0x950; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto TurnOffAudioEvent = 0x958; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _fuelType = 0x960; // Size: 8, Type: UGameResourceType*
			constexpr auto _inFuelingSocketTypes = 0x968; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto _maxFuelAmount = 0x988; // Size: 4, Type: float
			constexpr auto _initialFuelAmount = 0x98c; // Size: 4, Type: float
			constexpr auto _fuelUsagePerHour = 0x990; // Size: 4, Type: float
			constexpr auto _fuelUsagePerHourMultiplierWhenActive = 0x994; // Size: 4, Type: float
			constexpr auto _fuelFillingDurationPerAmountFilled = 0x998; // Size: 4, Type: float
			constexpr auto _fuelFillingExperiencePerAmount = 0x99c; // Size: 4, Type: float
			constexpr auto _fuelFillingMontage = 0x9a0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _meleeSkillAnimationsPresetWhenTurnedOff = 0x9a8; // Size: 8, Type: struct UMeleeSkillAnimationsPreset*
			constexpr auto _meleeSkillAnimationsPresetWhenTurnedOn = 0x9b0; // Size: 8, Type: struct UMeleeSkillAnimationsPreset*
			constexpr auto _fuelStartFillingAudioEvent = 0x9b8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _fuelStopFillingAudioEvent = 0x9c0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _noiseLoudnessWhileStarting = 0x9c8; // Size: 4, Type: float
			constexpr auto _noiseLoudnessWhileRunning = 0x9cc; // Size: 4, Type: float
			constexpr auto _noiseLoudnessUpdateFrequencyPerHour = 0x9d0; // Size: 4, Type: float
			constexpr auto _runningNoiseTag = 0x9d4; // Size: 8, Type: struct FName
			constexpr auto _currentFuelAmount = 0x9dc; // Size: 4, Type: float
			constexpr auto _turnedOn = 0x9e0; // Size: 1, Type: bool
	}
} 
