namespace offsets
{
	namespace USynthComponent
	{
			constexpr auto bAutoDestroy = 0x1f8; // Size: 1, Type: char
			constexpr auto bStopWhenOwnerDestroyed = 0x1f8; // Size: 1, Type: char
			constexpr auto bAllowSpatialization = 0x1f8; // Size: 1, Type: char
			constexpr auto bOverrideAttenuation = 0x1f8; // Size: 1, Type: char
			constexpr auto bEnableBusSends = 0x1fc; // Size: 1, Type: char
			constexpr auto bEnableBaseSubmix = 0x1fc; // Size: 1, Type: char
			constexpr auto bEnableSubmixSends = 0x1fc; // Size: 1, Type: char
			constexpr auto AttenuationSettings = 0x200; // Size: 8, Type: struct USoundAttenuation*
			constexpr auto AttenuationOverrides = 0x208; // Size: 928, Type: struct FSoundAttenuationSettings
			constexpr auto ConcurrencySettings = 0x5a8; // Size: 8, Type: struct USoundConcurrency*
			constexpr auto ConcurrencySet = 0x5b0; // Size: 80, Type: struct TSet<struct USoundConcurrency*>
			constexpr auto SoundClass = 0x600; // Size: 8, Type: struct USoundClass*
			constexpr auto SourceEffectChain = 0x608; // Size: 8, Type: struct USoundEffectSourcePresetChain*
			constexpr auto SoundSubmix = 0x610; // Size: 8, Type: struct USoundSubmixBase*
			constexpr auto SoundSubmixSends = 0x618; // Size: 16, Type: struct TArray<struct FSoundSubmixSendInfo>
			constexpr auto BusSends = 0x628; // Size: 16, Type: struct TArray<struct FSoundSourceBusSendInfo>
			constexpr auto PreEffectBusSends = 0x638; // Size: 16, Type: struct TArray<struct FSoundSourceBusSendInfo>
			constexpr auto bIsUISound = 0x648; // Size: 1, Type: char
			constexpr auto bIsPreviewSound = 0x648; // Size: 1, Type: char
			constexpr auto EnvelopeFollowerAttackTime = 0x64c; // Size: 4, Type: int32_t
			constexpr auto EnvelopeFollowerReleaseTime = 0x650; // Size: 4, Type: int32_t
			constexpr auto OnAudioEnvelopeValue = 0x658; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto Synth = 0x688; // Size: 8, Type: struct USynthSound*
			constexpr auto AudioComponent = 0x690; // Size: 8, Type: struct UAudioComponent*
	}
} 
