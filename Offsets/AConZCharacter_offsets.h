namespace offsets
{
	namespace AConZCharacter
	{
			constexpr auto CorpseClass = 0x4f8; // Size: 8, Type: ACorpse*
			constexpr auto ChoppingRecipeDataAsset = 0x500; // Size: 8, Type: struct UChoppingRecipeDataAsset*
			constexpr auto IterativeChopping = 0x508; // Size: 1, Type: bool
			constexpr auto ItemRepresentation = 0x510; // Size: 8, Type: AItem*
			constexpr auto HeadBoneName = 0x518; // Size: 8, Type: struct FName
			constexpr auto BodyPartByBoneName = 0x520; // Size: 80, Type: struct TMap<struct FName, uint8_t >
			constexpr auto HeadHeight = 0x570; // Size: 4, Type: float
			constexpr auto TorsoHeight = 0x574; // Size: 4, Type: float
			constexpr auto ShouldAutoUpdateEnvironmentDescription = 0x578; // Size: 1, Type: bool
			constexpr auto EnvironmentDescriptionAutoUpdateInterval = 0x57c; // Size: 4, Type: float
			constexpr auto EnteredIndoorEnvironmentAudioEvent = 0x580; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto EnteredOutdoorEnvironmentAudioEvent = 0x588; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto EnteredUndergroundAudioEvent = 0x590; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto LeftUndergroundAudioEvent = 0x598; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto VoiceChatComponent = 0x5b8; // Size: 8, Type: struct UVoiceChatComponent*
			constexpr auto _kockoutChanceModifier = 0x5c8; // Size: 4, Type: float
			constexpr auto SoundComponent = 0x5d0; // Size: 8, Type: struct UCharacterSoundComponent*
			constexpr auto _gender = 0x5f0; // Size: 1, Type: uint8_t 
			constexpr auto _physicsDominanceGroup = 0x610; // Size: 1, Type: uint8_t 
			constexpr auto _activeHitTimeToLive = 0x614; // Size: 4, Type: float
			constexpr auto _hitDamageVsVehicleSpeedInKph = 0x618; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _effectsOnVehicleHit[5] = 0x620; // Size: 280, Type: struct FHitEffects
			constexpr auto _allowMultipleDamageReportsFromProjectile = 0x748; // Size: 1, Type: bool
			constexpr auto _physicsAssetOnServer = 0x750; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto _aiTeam = 0x758; // Size: 1, Type: uint8_t 
			constexpr auto _actionsList = 0x760; // Size: 16, Type: struct TArray<struct UCharacterAction*>
			constexpr auto _characterActionPlayRateMultiplier = 0x790; // Size: 4, Type: float
			constexpr auto _grappleActionComponent = 0x798; // Size: 8, Type: struct UGrappleActionComponent*
	}
} 
