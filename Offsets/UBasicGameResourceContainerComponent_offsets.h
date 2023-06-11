namespace offsets
{
	namespace UBasicGameResourceContainerComponent
	{
			constexpr auto _repResourceType = 0xe8; // Size: 8, Type: UGameResourceType*
			constexpr auto _repResourceAmount = 0xf0; // Size: 4, Type: float
			constexpr auto _acceptedResourceType = 0xf8; // Size: 8, Type: UGameResourceType*
			constexpr auto _resourceFillingInSocketTypes = 0x100; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto _resourceFillingOutSocketTypes = 0x120; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto _requiredItemTagsForFilling = 0x140; // Size: 16, Type: struct TArray<struct UBaseItemTag*>
			constexpr auto _shouldUpdateOwningItemUses = 0x150; // Size: 1, Type: bool
			constexpr auto _canDrink = 0x151; // Size: 1, Type: bool
			constexpr auto _canSpill = 0x152; // Size: 1, Type: bool
			constexpr auto _canCheck = 0x153; // Size: 1, Type: bool
			constexpr auto _showResourcePercentageOnCheck = 0x154; // Size: 1, Type: bool
			constexpr auto _shouldUncraftWhenEmpty = 0x155; // Size: 1, Type: bool
			constexpr auto _shouldSpillWhenPickedUp = 0x156; // Size: 1, Type: bool
			constexpr auto _shouldSpillWhenAddedToContainer = 0x157; // Size: 1, Type: bool
			constexpr auto _shouldTakeInHandsWhenDrinking = 0x158; // Size: 1, Type: bool
			constexpr auto _interactionText = 0x160; // Size: 24, Type: struct FText
			constexpr auto _resourceFillingMontage = 0x178; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _resourceStartFillingAudioEvent = 0x180; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _resourceStopFillingAudioEvent = 0x188; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _resourceFillingDurationPerAmountFilled = 0x190; // Size: 4, Type: float
			constexpr auto _resourceFillingExperiencePerAmount = 0x194; // Size: 4, Type: float
			constexpr auto _targetStanceWhenFilling = 0x198; // Size: 1, Type: uint8_t 
			constexpr auto _shouldTakeInHandsWhenFilling = 0x199; // Size: 1, Type: bool
			constexpr auto _spillStartAudioEvent = 0x1a0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _spillStopAudioEvent = 0x1a8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _spillMontage = 0x1b0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _spillMontageEnd = 0x1b8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _particles = 0x1c0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _minSpillTime = 0x1c8; // Size: 4, Type: float
			constexpr auto _maxSpillTime = 0x1cc; // Size: 4, Type: float
			constexpr auto _spillTimePerKg = 0x1d0; // Size: 4, Type: float
			constexpr auto _drinkStartAudioEvent = 0x1d8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _drinkStopAudioEvent = 0x1e0; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
