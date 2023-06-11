namespace offsets
{
	namespace AWeaponAutoCrossbow
	{
			constexpr auto FireState = 0x2f60; // Size: 8, Type: struct UWeaponStateFiring*
			constexpr auto _muzzleVelocity = 0x2f68; // Size: 4, Type: float
			constexpr auto _probabilityForLaughingSoundEffect = 0x2f6c; // Size: 4, Type: float
			constexpr auto _autoCrossbowFireAnimation = 0x2f70; // Size: 16, Type: struct FCharacterAndItemAnimation
			constexpr auto _autoCrossbowLaughingAudioEvent = 0x2f80; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _autoCrossbowActiveState = 0x2f88; // Size: 8, Type: struct UWeaponState*
			constexpr auto _fuelType = 0x4330; // Size: 8, Type: UGameResourceType*
			constexpr auto _inFuelingSocketTypes = 0x4338; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto _maxFuelAmount = 0x4358; // Size: 4, Type: float
			constexpr auto _fuelUsagePerHour = 0x435c; // Size: 4, Type: float
			constexpr auto _fuelUsagePerHourWhenDamaged = 0x4360; // Size: 4, Type: float
			constexpr auto _fuelFillingDurationPerAmountFilled = 0x4364; // Size: 4, Type: float
			constexpr auto _fuelFillingDurationPerAmountFilledWhenDamaged = 0x4368; // Size: 4, Type: float
			constexpr auto _fuelFillingExperiencePerAmount = 0x436c; // Size: 4, Type: float
			constexpr auto _currentFuelAmount = 0x4370; // Size: 4, Type: float
	}
} 
