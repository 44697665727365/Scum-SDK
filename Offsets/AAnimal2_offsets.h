namespace offsets
{
	namespace AAnimal2
	{
			constexpr auto SpeciesName = 0x7c0; // Size: 24, Type: struct FText
			constexpr auto SpeciesType = 0x7d8; // Size: 1, Type: uint8_t 
			constexpr auto ActivityCycle = 0x7d9; // Size: 1, Type: uint8_t 
			constexpr auto MaxHealth = 0x7dc; // Size: 4, Type: float
			constexpr auto HitReactComponent = 0x7e0; // Size: 8, Type: struct UHitReactComponent*
			constexpr auto HitReactType = 0x7e8; // Size: 8, Type: struct FGameplayTag
			constexpr auto EyesViewPointSocketName = 0x7f0; // Size: 8, Type: struct FName
			constexpr auto TrackingMarker = 0x7f8; // Size: 8, Type: ATrackingMarker2*
			constexpr auto BloodTrailMarker = 0x800; // Size: 8, Type: ATrackingMarker2*
			constexpr auto TrackingMarkerFrequency = 0x808; // Size: 4, Type: float
			constexpr auto TrackingMarkerDistance = 0x80c; // Size: 4, Type: float
			constexpr auto TrackingMarkerRadius = 0x810; // Size: 4, Type: float
			constexpr auto TrackingMarkerDuration = 0x814; // Size: 4, Type: float
			constexpr auto BleedingSpeed = 0x818; // Size: 4, Type: float
			constexpr auto LightWoundDamageAmount = 0x81c; // Size: 4, Type: float
			constexpr auto MeleeBleedingThreshold = 0x820; // Size: 4, Type: float
			constexpr auto StuckCheckDuration = 0x824; // Size: 4, Type: float
			constexpr auto StuckRadius = 0x828; // Size: 4, Type: float
			constexpr auto UnstuckMode = 0x82c; // Size: 1, Type: char
			constexpr auto OnDamageTaken = 0x830; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto HeadBoneRotationSendToServerInterval = 0x840; // Size: 4, Type: float
			constexpr auto SightRange = 0x844; // Size: 4, Type: float
			constexpr auto TiltMeshOnSlopes = 0x848; // Size: 1, Type: bool
			constexpr auto AdjustMeshHeightOnSlopes = 0x849; // Size: 1, Type: bool
			constexpr auto MeshPositionLerpSpeed = 0x84c; // Size: 4, Type: float
			constexpr auto BleedInterval = 0x850; // Size: 4, Type: float
			constexpr auto ShouldGoToRagdolIfTakenDamage = 0x854; // Size: 1, Type: bool
			constexpr auto RagdollDuration = 0x858; // Size: 4, Type: float
			constexpr auto _health = 0x85c; // Size: 4, Type: float
			constexpr auto _woundDamage = 0x860; // Size: 4, Type: float
			constexpr auto _packSizeMin = 0x86c; // Size: 4, Type: int32_t
			constexpr auto _packSizeMax = 0x870; // Size: 4, Type: int32_t
			constexpr auto _animalStance = 0x8a8; // Size: 1, Type: uint8_t 
			constexpr auto _shouldUpdateMovementSpeedRTPCValue = 0x8b0; // Size: 1, Type: bool
			constexpr auto _doNotCrumble = 0x908; // Size: 1, Type: bool
			constexpr auto _collisionDamageMultiplierPerBodyPart[c] = 0x90c; // Size: 48, Type: float
			constexpr auto _delayBetweenTakeDamageSounds = 0x940; // Size: 4, Type: float
			constexpr auto _canDrown = 0x944; // Size: 1, Type: bool
			constexpr auto _drownDamageCycleLength = 0x948; // Size: 4, Type: float
			constexpr auto _drownDamagePerCycle = 0x94c; // Size: 4, Type: float
			constexpr auto _baseEyeForwardDistance = 0x954; // Size: 4, Type: float
			constexpr auto _isSearched = 0x958; // Size: 1, Type: bool
			constexpr auto _corpseSearchDuration = 0x95c; // Size: 4, Type: float
			constexpr auto _corpseMaxLifeTimeInMinutes = 0x960; // Size: 4, Type: float
			constexpr auto _destroyCorpseTimerInterval = 0x964; // Size: 4, Type: float
			constexpr auto _minDistanceToPlayerPawnOrSpectatorToDestroyCorpse = 0x968; // Size: 4, Type: float
	}
} 
