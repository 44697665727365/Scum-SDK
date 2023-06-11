namespace offsets
{
	namespace UInfiniteResourceAssetData
	{
			constexpr auto ResourceType = 0x30; // Size: 8, Type: UGameResourceType*
			constexpr auto InSocketTypes = 0x38; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto OutSocketTypes = 0x58; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto RequiredItemTagsForFilling = 0x78; // Size: 16, Type: struct TArray<struct UBaseItemTag*>
			constexpr auto FillBaseActionDuration = 0x88; // Size: 4, Type: float
			constexpr auto FillActionDurationPerAmountFilled = 0x8c; // Size: 4, Type: float
			constexpr auto FillResourceFillingExperiencePerAmount = 0x90; // Size: 4, Type: float
			constexpr auto FillMontage = 0x98; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FillStartAudioEvent = 0xa0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto FillStopAudioEvent = 0xa8; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
