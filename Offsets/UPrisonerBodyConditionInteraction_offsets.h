namespace offsets
{
	namespace UPrisonerBodyConditionInteraction
	{
			constexpr auto _name = 0x28; // Size: 24, Type: struct FText
			constexpr auto _actionDurationVsPhysicianSkillLevel[5] = 0x40; // Size: 20, Type: float
			constexpr auto _experiencePointsToGainVsPhysicianSkillLevel[5] = 0x54; // Size: 20, Type: float
			constexpr auto _beginInteractionMontage = 0x68; // Size: 1, Type: uint8_t 
			constexpr auto _endInteractionMontage = 0x69; // Size: 1, Type: uint8_t 
			constexpr auto _beginInteractionPatientAudioEvent = 0x70; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _endInteractionPatientAudioEvent = 0x78; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
