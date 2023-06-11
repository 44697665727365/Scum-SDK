namespace offsets
{
	namespace UAudioComponent
	{
			constexpr auto Sound = 0x1f8; // Size: 8, Type: struct USoundBase*
			constexpr auto InstanceParameters = 0x200; // Size: 16, Type: struct TArray<struct FAudioComponentParam>
			constexpr auto SoundClassOverride = 0x210; // Size: 8, Type: struct USoundClass*
			constexpr auto bAutoDestroy = 0x218; // Size: 1, Type: char
			constexpr auto bStopWhenOwnerDestroyed = 0x218; // Size: 1, Type: char
			constexpr auto bShouldRemainActiveIfDropped = 0x218; // Size: 1, Type: char
			constexpr auto bAllowSpatialization = 0x218; // Size: 1, Type: char
			constexpr auto bOverrideAttenuation = 0x218; // Size: 1, Type: char
			constexpr auto bOverrideSubtitlePriority = 0x218; // Size: 1, Type: char
			constexpr auto bIsUISound = 0x218; // Size: 1, Type: char
			constexpr auto bEnableLowPassFilter = 0x218; // Size: 1, Type: char
			constexpr auto bOverridePriority = 0x219; // Size: 1, Type: char
			constexpr auto bSuppressSubtitles = 0x219; // Size: 1, Type: char
			constexpr auto bAutoManageAttachment = 0x21a; // Size: 1, Type: char
			constexpr auto AudioComponentUserID = 0x220; // Size: 8, Type: struct FName
			constexpr auto PitchModulationMin = 0x228; // Size: 4, Type: float
			constexpr auto PitchModulationMax = 0x22c; // Size: 4, Type: float
			constexpr auto VolumeModulationMin = 0x230; // Size: 4, Type: float
			constexpr auto VolumeModulationMax = 0x234; // Size: 4, Type: float
			constexpr auto VolumeMultiplier = 0x238; // Size: 4, Type: float
			constexpr auto EnvelopeFollowerAttackTime = 0x23c; // Size: 4, Type: int32_t
			constexpr auto EnvelopeFollowerReleaseTime = 0x240; // Size: 4, Type: int32_t
			constexpr auto Priority = 0x244; // Size: 4, Type: float
			constexpr auto SubtitlePriority = 0x248; // Size: 4, Type: float
			constexpr auto SourceEffectChain = 0x250; // Size: 8, Type: struct USoundEffectSourcePresetChain*
			constexpr auto PitchMultiplier = 0x258; // Size: 4, Type: float
			constexpr auto LowPassFilterFrequency = 0x25c; // Size: 4, Type: float
			constexpr auto AttenuationSettings = 0x268; // Size: 8, Type: struct USoundAttenuation*
			constexpr auto AttenuationOverrides = 0x270; // Size: 928, Type: struct FSoundAttenuationSettings
			constexpr auto ConcurrencySettings = 0x610; // Size: 8, Type: struct USoundConcurrency*
			constexpr auto ConcurrencySet = 0x618; // Size: 80, Type: struct TSet<struct USoundConcurrency*>
			constexpr auto AutoAttachLocationRule = 0x674; // Size: 1, Type: uint8_t 
			constexpr auto AutoAttachRotationRule = 0x675; // Size: 1, Type: uint8_t 
			constexpr auto AutoAttachScaleRule = 0x676; // Size: 1, Type: uint8_t 
			constexpr auto ModulationRouting = 0x678; // Size: 72, Type: struct FSoundModulationDefaultRoutingSettings
			constexpr auto OnAudioPlayStateChanged = 0x6c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioVirtualizationChanged = 0x6e8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioFinished = 0x710; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioPlaybackPercent = 0x738; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioSingleEnvelopeValue = 0x760; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioMultiEnvelopeValue = 0x788; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnQueueSubtitles = 0x7b0; // Size: 16, Type: struct FDelegate
			constexpr auto AutoAttachParent = 0x7c0; // Size: 8, Type: struct TWeakObjectPtr<USceneComponent>
			constexpr auto AutoAttachSocketName = 0x7c8; // Size: 8, Type: struct FName
	}
} 
