namespace offsets
{
	namespace AWeapon
	{
			constexpr auto AttachmentAdded = 0x918; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AttachmentRemoved = 0x928; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto SkeletalMesh = 0x980; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto WeaponFiringStateType = 0x988; // Size: 1, Type: uint8_t 
			constexpr auto TempWeaponStateFiringAutomatic = 0x990; // Size: 8, Type: struct UWeaponStateFiring*
			constexpr auto TempWeaponStateFiringSemiAutomatic = 0x998; // Size: 8, Type: struct UWeaponStateFiring*
			constexpr auto TempWeaponStateFiringManual = 0x9a0; // Size: 8, Type: struct UWeaponStateFiring*
			constexpr auto TempWeaponStateFiringBurst = 0x9a8; // Size: 8, Type: struct UWeaponStateFiring*
			constexpr auto TempWeaponStateActiveManualFiring = 0x9b0; // Size: 8, Type: struct UWeaponStateActiveManualFiring*
			constexpr auto FiringState = 0x9b8; // Size: 8, Type: struct UWeaponStateFiring*
			constexpr auto SupportedFiringModes = 0x9c0; // Size: 16, Type: struct TArray<uint8_t >
			constexpr auto CartridgeMeshComponents = 0x9d0; // Size: 16, Type: struct TArray<struct UStaticMeshComponent*>
			constexpr auto ReloadActionSequenceClasses = 0x9e0; // Size: 16, Type: struct TArray<UWeaponActionReloadSequence*>
			constexpr auto UnloadAmmoActionSequenceClasses = 0x9f0; // Size: 16, Type: struct TArray<UWeaponActionUnloadAmmoSequence*>
			constexpr auto CheckAmmoActionSequenceClasses = 0xa00; // Size: 16, Type: struct TArray<UWeaponActionCheckAmmoSequence*>
			constexpr auto ReloadActionSequences = 0xa10; // Size: 16, Type: struct TArray<struct UWeaponActionReloadSequence*>
			constexpr auto ClearMalfunctionActionSequences = 0xa20; // Size: 16, Type: struct TArray<struct UWeaponActionClearMalfunctionSequence*>
			constexpr auto UnloadAmmoActionSequences = 0xa30; // Size: 16, Type: struct TArray<struct UWeaponActionUnloadAmmoSequence*>
			constexpr auto CheckAmmoActionSequences = 0xa40; // Size: 16, Type: struct TArray<struct UWeaponActionCheckAmmoSequence*>
			constexpr auto AmmunitionTags = 0xa50; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto DefaultAmmunitionItemClass = 0xa70; // Size: 8, Type: AAmmunitionItem*
			constexpr auto RequiredAmmoForShot = 0xa78; // Size: 4, Type: int32_t
			constexpr auto MaxLoadedAmmo = 0xa7c; // Size: 4, Type: int32_t
			constexpr auto EventMaxAmmo = 0xa80; // Size: 4, Type: int32_t
			constexpr auto InitialAmmo = 0xa84; // Size: 4, Type: int32_t
			constexpr auto InternalMagazineCapacity = 0xa88; // Size: 4, Type: int32_t
			constexpr auto UseChamberAsInternalMagazine = 0xa8c; // Size: 1, Type: bool
			constexpr auto BurstShotsCount = 0xa90; // Size: 4, Type: int32_t
			constexpr auto IgnoreProceduralDownTheSightFiringAnimation = 0xa94; // Size: 1, Type: bool
			constexpr auto FireAnimation = 0xa98; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FireAnimationLastRound = 0xaa0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FireAnimationBody = 0xaa8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FirstPersonFireAnimationBody = 0xab0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FireAutomaticAnimationBody = 0xab8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto BodyWeaponAnimationChamber = 0xac0; // Size: 16, Type: struct FBodyWeaponAnimation
			constexpr auto CheckFiringModeAnimationBody = 0xad0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto ChangeFiringModeAnimationBody = 0xad8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto AttachmentsAnimations = 0xae0; // Size: 80, Type: struct TMap<AWeaponAttachment*, struct FWeaponAttachmentAnimations>
			constexpr auto MuzzleSocketName = 0xb30; // Size: 8, Type: struct FName
			constexpr auto GripCorrectionSocketName = 0xb38; // Size: 8, Type: struct FName
			constexpr auto AimingDownTheSightsCenterSocketName = 0xb40; // Size: 8, Type: struct FName
			constexpr auto EjectCasingSocketName = 0xb48; // Size: 8, Type: struct FName
			constexpr auto IgnoreSupportingHandIK = 0xb50; // Size: 1, Type: bool
			constexpr auto SupportingHandIKSocketName = 0xb54; // Size: 8, Type: struct FName
			constexpr auto SupportingHandIKLocation = 0xb5c; // Size: 12, Type: struct FVector
			constexpr auto AimingDownTheSightsLocationOffset = 0xb68; // Size: 12, Type: struct FVector
			constexpr auto HolsteredOnPrisonerLeftOffset = 0xb80; // Size: 48, Type: struct FTransform
			constexpr auto HolsteredOnPrisonerRightOffset = 0xbb0; // Size: 48, Type: struct FTransform
			constexpr auto UseWeaponFOVWhileScoping = 0xbe0; // Size: 1, Type: bool
			constexpr auto WeaponFOVWhileScoping = 0xbe4; // Size: 4, Type: float
			constexpr auto WeaponCameraOffsetWhileScoping = 0xbe8; // Size: 12, Type: struct FVector
			constexpr auto OffsetPerAspectRatioWhileScoping = 0xbf8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto IgnoreZeroRangeChange = 0xc80; // Size: 1, Type: bool
			constexpr auto ZeroRange = 0xc84; // Size: 4, Type: int32_t
			constexpr auto ZeroRangeStep = 0xc88; // Size: 4, Type: int32_t
			constexpr auto ZeroRangeMax = 0xc8c; // Size: 4, Type: int32_t
			constexpr auto InstantHitImpactEffects = 0xc90; // Size: 8, Type: struct UProjectileImpactEffects*
			constexpr auto FieldOfView = 0xc98; // Size: 4, Type: float
			constexpr auto DepthOfFieldFocalDistance = 0xc9c; // Size: 4, Type: float
			constexpr auto DepthOfFieldFstop = 0xca0; // Size: 4, Type: float
			constexpr auto ObstaclesDetectionOffset = 0xca4; // Size: 4, Type: float
			constexpr auto UseFiringModeBoneRotation = 0xca8; // Size: 1, Type: bool
			constexpr auto FiringModeBoneRotations[3] = 0xcac; // Size: 36, Type: struct FRotator
			constexpr auto PostProcessSettings = 0xcd0; // Size: 1376, Type: struct FPostProcessSettings
			constexpr auto RelaxedGripCorrectionAnimationPose[4] = 0x1230; // Size: 32, Type: struct UAnimSequenceBase*
			constexpr auto AimingHipAnimationPose[4] = 0x1250; // Size: 32, Type: struct UAnimSequenceBase*
			constexpr auto AimingDownTheSightsAnimationPose[4] = 0x1270; // Size: 32, Type: struct UAnimSequenceBase*
			constexpr auto AimingDownTheSightsStillAnimationPose[4] = 0x1290; // Size: 32, Type: struct UAnimSequenceBase*
			constexpr auto AimingDownTheSightsWalkingAnimationPose[4] = 0x12b0; // Size: 32, Type: struct UAnimSequenceBase*
			constexpr auto AimingDownTheSightsLimpingWalkingAnimationPose[4] = 0x12d0; // Size: 32, Type: struct UAnimSequenceBase*
			constexpr auto WeaponAimOffsets[7] = 0x12f0; // Size: 56, Type: struct UBlendSpace*
			constexpr auto AimingDownTheSightsZeroRangeBlendSpace = 0x1328; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto WeaponCategory = 0x1330; // Size: 1, Type: uint8_t 
			constexpr auto IgnoreAimingSpread = 0x1331; // Size: 1, Type: bool
			constexpr auto UseCustomWeaponSpreadData = 0x1332; // Size: 1, Type: bool
			constexpr auto WeaponSpreadData = 0x1334; // Size: 64, Type: struct FWeaponSpreadData
			constexpr auto UseCustomWeaponViewKickData = 0x1374; // Size: 1, Type: bool
			constexpr auto WeaponViewKickData = 0x1378; // Size: 24, Type: struct FWeaponViewKickData
			constexpr auto ViewKickMultiplier = 0x1390; // Size: 4, Type: float
			constexpr auto MaxRecoilOffset = 0x1394; // Size: 4, Type: float
			constexpr auto RecoilRecoverySpeed = 0x1398; // Size: 4, Type: float
			constexpr auto MuzzleEffectsScaleDistanceStart = 0x139c; // Size: 4, Type: float
			constexpr auto MuzzleEffectsScaleDistanceRange = 0x13a0; // Size: 4, Type: float
			constexpr auto MuzzleEffectsScaleByDistanceFactor = 0x13a4; // Size: 4, Type: float
			constexpr auto ChamberBulletDelay = 0x13a8; // Size: 4, Type: float
			constexpr auto ChamberBulletAutomatically = 0x13ac; // Size: 1, Type: bool
			constexpr auto ChamberBulletWhenMagazineIsAttached = 0x13ad; // Size: 1, Type: bool
			constexpr auto DamagePerShot = 0x13b0; // Size: 4, Type: float
			constexpr auto TestWeapon = 0x13b4; // Size: 1, Type: bool
			constexpr auto WornOutFiringAnimations = 0x13b8; // Size: 16, Type: struct TArray<struct FFireAnimationData>
			constexpr auto CanBeInspectedWhenMalfunctioned = 0x13c8; // Size: 1, Type: bool
			constexpr auto InspectModeAnimation = 0x13d0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto UseCustomMalfunctionChances = 0x13d8; // Size: 1, Type: bool
			constexpr auto MalfunctionChances = 0x13dc; // Size: 56, Type: struct FWeaponMalfunctionChances
			constexpr auto StovePipeSocketName = 0x1414; // Size: 8, Type: struct FName
			constexpr auto StovePipeMesh = 0x1420; // Size: 8, Type: struct UStaticMesh*
			constexpr auto DoubleFeedSocketName = 0x1428; // Size: 8, Type: struct FName
			constexpr auto DoubleFeedMesh = 0x1430; // Size: 8, Type: struct UStaticMesh*
			constexpr auto ShouldClearInspectModeWhenClearingMalfunction = 0x1438; // Size: 1, Type: bool
			constexpr auto ClearMalfunctionSequenceClasses = 0x1440; // Size: 16, Type: struct TArray<UWeaponActionClearMalfunctionSequence*>
			constexpr auto MalfunctionsData = 0x1450; // Size: 80, Type: struct TMap<uint8_t , struct FWeaponMalfunctionData>
			constexpr auto DTSModeLerpDurationIn = 0x14a0; // Size: 4, Type: float
			constexpr auto DTSModeLerpDurationOut = 0x14a4; // Size: 4, Type: float
			constexpr auto DownTheSightsModeLerpCurveOverride = 0x14a8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _currentState = 0x14b0; // Size: 8, Type: struct UWeaponState*
			constexpr auto _activeState = 0x14b8; // Size: 8, Type: struct UWeaponState*
			constexpr auto _equippingState = 0x14c0; // Size: 8, Type: struct UWeaponStateEquipping*
			constexpr auto _unequippingStateDefault = 0x14c8; // Size: 8, Type: struct UWeaponState*
			constexpr auto _unequippingState = 0x14d0; // Size: 8, Type: struct UWeaponState*
			constexpr auto _inactiveState = 0x14d8; // Size: 8, Type: struct UWeaponState*
			constexpr auto _chamberBulletState = 0x14e0; // Size: 8, Type: struct UWeaponState*
			constexpr auto _reloadState2 = 0x14e8; // Size: 8, Type: struct UWeaponStateReload*
			constexpr auto _clearMalfunctionState = 0x14f0; // Size: 8, Type: struct UWeaponStateClearMalfunction*
			constexpr auto _unloadAmmoState = 0x14f8; // Size: 8, Type: struct UWeaponStateUnloadAmmo*
			constexpr auto _checkAmmoState = 0x1500; // Size: 8, Type: struct UWeaponStateCheckAmmo*
			constexpr auto _muzzleEffectsSpawnType = 0x1508; // Size: 1, Type: uint8_t 
			constexpr auto _muzzlePS = 0x1510; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _suppressorMuzzlePS = 0x1518; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _muzzlePSC = 0x1520; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _smokeAfterShotFiredPS = 0x1528; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _smokeAfterShotFiredPSC = 0x1530; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _ejectCasingPS = 0x1538; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _ejectLiveRoundPS = 0x1540; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _weaponOwner = 0x1548; // Size: 8, Type: struct APrisoner*
			constexpr auto _loadedAmmoData = 0x1550; // Size: 16, Type: struct TArray<struct FAmmunitionData>
			constexpr auto _shouldOverrideUseMuzzleDirectionForShooting = 0x1562; // Size: 1, Type: bool
			constexpr auto _useMuzzleDirectionForShootingOverride = 0x1563; // Size: 1, Type: bool
			constexpr auto _projectileTargetLocationOverride = 0x1564; // Size: 8, Type: struct TWeakObjectPtr<AActor>
			constexpr auto _firingMode = 0x15ec; // Size: 1, Type: uint8_t 
			constexpr auto _weaponAttachmentsReplicated = 0x1600; // Size: 16, Type: struct TArray<struct AWeaponAttachment*>
			constexpr auto _internalMagazineAmmoData = 0x1638; // Size: 16, Type: struct TArray<struct FAmmunitionData>
			constexpr auto _usedAmmoCount = 0x1648; // Size: 4, Type: int32_t
			constexpr auto _shouldPlayChamberOpenedIdle = 0x164d; // Size: 1, Type: bool
			constexpr auto _isInGameEvent = 0x165d; // Size: 1, Type: bool
			constexpr auto _fireSingleShotAudioEvent = 0x1660; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _startAutoFireAudioEvent = 0x1668; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _stopAutoFireAudioEvent = 0x1670; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _suppressorFireSingleShotAudioEvent = 0x1678; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _suppressorStartAutoFireAudioEvent = 0x1680; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _suppressorStopAutoFireAudioEvent = 0x1688; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _improvisedSuppressorFireSingleShotAudioEvent = 0x1690; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _improvisedSuppressorStartAutoFireAudioEvent = 0x1698; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _improvisedSuppressorStopAutoFireAudioEvent = 0x16a0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _noAmmoAudioEvent = 0x16a8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _dryFireUncockedAudioEvent = 0x16b0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _zeroRangeClickAudioEvent = 0x16b8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _changeFiringModeAudioEvent = 0x16c0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _onMalfunctionAudioEvent = 0x16c8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _switchADSStateAudioEvent = 0x16d0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _indoorSmallHearingDamageAudioEvent = 0x16d8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _indoorMediumHearingDamageAudioEvent = 0x16e0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _indoorLargeHearingDamageAudioEvent = 0x16e8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _outdoorLargeHearingDamageAudioEvent = 0x16f0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _makeNoiseLoudness = 0x16f8; // Size: 4, Type: float
			constexpr auto _staminaDrainMultiplier = 0x170c; // Size: 4, Type: float
			constexpr auto _malfunction = 0x171c; // Size: 1, Type: uint8_t 
			constexpr auto _behaviourMode = 0x171d; // Size: 1, Type: uint8_t 
			constexpr auto _loadedAmmunitionItemClass = 0x1740; // Size: 8, Type: UObject*
			constexpr auto _loadedProjectileClass = 0x1750; // Size: 8, Type: AProjectile*
			constexpr auto _defaultProjectileClass = 0x1758; // Size: 8, Type: AProjectile*
			constexpr auto _totalControllerPitchAmountToAdd = 0x176c; // Size: 4, Type: float
			constexpr auto _controllerPitchAddTimeFrame = 0x1770; // Size: 4, Type: float
			constexpr auto _ownerWeaponStateSyncData = 0x2ef8; // Size: 72, Type: struct FWeaponStateSyncData
	}
} 
