namespace offsets
{
	namespace AWeaponBow
	{
			constexpr auto InsertArrowAnimations = 0x2f58; // Size: 16, Type: struct FBodyWeaponAnimation
			constexpr auto RemoveArrowAnimations = 0x2f68; // Size: 16, Type: struct FBodyWeaponAnimation
			constexpr auto UnableToDrawAnimations = 0x2f78; // Size: 16, Type: struct FBodyWeaponAnimation
			constexpr auto DrawAnimations2[3] = 0x2f88; // Size: 48, Type: struct FBodyWeaponAnimation
			constexpr auto DrawWhileAnticipatingDrawAnimations2[3] = 0x2fb8; // Size: 48, Type: struct FBodyWeaponAnimation
			constexpr auto CancelDrawAnimations2[3] = 0x2fe8; // Size: 48, Type: struct FBodyWeaponAnimation
			constexpr auto LooseAnimations2[3] = 0x3018; // Size: 48, Type: struct FBodyWeaponAnimation
			constexpr auto LooseLastShotAnimations2[3] = 0x3048; // Size: 48, Type: struct FBodyWeaponAnimation
			constexpr auto AimOffsets[7] = 0x3078; // Size: 168, Type: struct FWeaponBowAimOffsets
			constexpr auto ArmsShakeAnimamtion[4] = 0x3120; // Size: 192, Type: struct FWeaponBowArmsShake
			constexpr auto DrawAnimations = 0x31e0; // Size: 16, Type: struct FBodyWeaponAnimation
			constexpr auto DrawWhileAnticipatingDrawAnimations = 0x31f0; // Size: 16, Type: struct FBodyWeaponAnimation
			constexpr auto CancelDrawAnimations = 0x3200; // Size: 16, Type: struct FBodyWeaponAnimation
			constexpr auto LooseAnimations = 0x3210; // Size: 16, Type: struct FBodyWeaponAnimation
			constexpr auto LooseLastShotAnimations = 0x3220; // Size: 16, Type: struct FBodyWeaponAnimation
			constexpr auto WeaponAimingDownTheSightsAnimationPose = 0x3230; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto WeaponAimingDownTheSightsStillAnimationPose = 0x3238; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto AnticipateDrawState2 = 0x3240; // Size: 8, Type: struct UWeaponState*
			constexpr auto DrawState3 = 0x3248; // Size: 8, Type: struct UWeaponState*
			constexpr auto CancelFiringState = 0x3250; // Size: 8, Type: struct UWeaponState*
			constexpr auto AnticipateFiringState = 0x3258; // Size: 8, Type: struct UWeaponState*
			constexpr auto FireState = 0x3260; // Size: 8, Type: struct UWeaponState*
			constexpr auto FireAndInsertArrowState = 0x3268; // Size: 8, Type: struct UWeaponState*
			constexpr auto _fireNoArrowAudioEvent = 0x3270; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _arrowSocketName = 0x3278; // Size: 8, Type: struct FName
			constexpr auto _muzzleVelocity = 0x3280; // Size: 4, Type: float
			constexpr auto _drawWeight = 0x3284; // Size: 4, Type: float
			constexpr auto _compoundBowFullDrawHoldTime = 0x3288; // Size: 4, Type: float
			constexpr auto _armShakeTimerDecreaseRate = 0x328c; // Size: 4, Type: float
			constexpr auto _damageOnUsage = 0x3290; // Size: 4, Type: float
			constexpr auto _bowActiveState2 = 0x3298; // Size: 8, Type: struct UWeaponState*
			constexpr auto _bowInsertArrowState = 0x32a0; // Size: 8, Type: struct UWeaponState*
			constexpr auto _bowRemoveArrowState = 0x32a8; // Size: 8, Type: struct UWeaponState*
			constexpr auto _bowFiringState2 = 0x32b0; // Size: 8, Type: struct UWeaponStateFiring*
			constexpr auto _bowState = 0x32e8; // Size: 1, Type: uint8_t 
			constexpr auto _weaponBowStateDataReplicated = 0x32ec; // Size: 12, Type: struct FWeaponBowStateDataReplicated
			constexpr auto _arrowMeshComponent = 0x32f8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _projectileArrowData = 0x3300; // Size: 32, Type: struct FProjectileArrowData
			constexpr auto _isCompound = 0x3370; // Size: 1, Type: bool
			constexpr auto _handTriggerMeshComponent = 0x3378; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _ignoreArrowStiffness = 0x3380; // Size: 1, Type: bool
			constexpr auto _letOff = 0x3384; // Size: 4, Type: float
			constexpr auto _handTriggerBoneName = 0x3388; // Size: 8, Type: struct FName
	}
} 
