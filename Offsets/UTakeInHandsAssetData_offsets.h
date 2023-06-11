namespace offsets
{
	namespace UTakeInHandsAssetData
	{
			constexpr auto AttachmentSocketMountType = 0x30; // Size: 8, Type: UAttachmentSocketMountType*
			constexpr auto GripSocketName = 0x38; // Size: 8, Type: struct FName
			constexpr auto SupportingHandIKSocketName = 0x40; // Size: 8, Type: struct FName
			constexpr auto TakeInHandsMontage = 0x48; // Size: 8, Type: struct UAnimMontage*
			constexpr auto RemoveFromHandsMontage = 0x50; // Size: 8, Type: struct UAnimMontage*
			constexpr auto MeleeSkillAnimationsPreset = 0x58; // Size: 8, Type: struct UMeleeSkillAnimationsPreset*
			constexpr auto HandsCorrectionssData = 0x60; // Size: 8, Type: struct UHandsCorrectionsData*
			constexpr auto FirstPersonAnimationsData = 0x68; // Size: 8, Type: struct UItemFirstPersonAnimationsDataAsset*
			constexpr auto MaxPace = 0x70; // Size: 1, Type: uint8_t 
			constexpr auto MovementSpeedModifier = 0x74; // Size: 4, Type: float
			constexpr auto SwimmingMovementSpeedModifier = 0x78; // Size: 4, Type: float
			constexpr auto DivingMovementSpeedModifier = 0x7c; // Size: 4, Type: float
			constexpr auto BuoyancyMultiplier = 0x80; // Size: 4, Type: float
			constexpr auto ShouldDropWhenEnteringCombatMode = 0x84; // Size: 1, Type: bool
			constexpr auto ShouldActionConstrainStance = 0x85; // Size: 1, Type: bool
			constexpr auto ShouldActionConstrainMove = 0x86; // Size: 1, Type: bool
			constexpr auto ShouldActionConstrainTurn = 0x87; // Size: 1, Type: bool
			constexpr auto ShouldActionForceStance = 0x88; // Size: 1, Type: bool
			constexpr auto ActionStance = 0x89; // Size: 1, Type: uint8_t 
			constexpr auto ActionStanceFlag = 0x8a; // Size: 1, Type: uint8_t 
			constexpr auto IsCarried = 0x8b; // Size: 1, Type: bool
			constexpr auto StanceWhileCarrying = 0x8c; // Size: 1, Type: uint8_t 
			constexpr auto CarryStanceFlag = 0x8d; // Size: 1, Type: uint8_t 
			constexpr auto ShouldDropWhenEnteringCombatModeWhileCarrying = 0x8e; // Size: 1, Type: bool
			constexpr auto MaxPaceWhileCarrying = 0x8f; // Size: 1, Type: uint8_t 
			constexpr auto CarryItemIdleAnimationFP = 0x90; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto CarryItemIdleAnimationTP = 0x98; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto PlayerLongThrowMontage = 0xa0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto PlayerLongThrowLoopMontage = 0xa8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto PlayerShortThrowMontage = 0xb0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto PlayerThrowbackMontage = 0xb8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto ThrowingItemToWeaponMontage = 0xc0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto WeaponToThrowingItemMontage = 0xc8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto ThrowingAnimationSets = 0xd0; // Size: 80, Type: struct TMap<uint8_t , struct FThrowingAnimationSet>
			constexpr auto MaxObstructedDepenetrationDepth = 0x120; // Size: 4, Type: float
			constexpr auto MaxObstructedDepenetrationDepthProne = 0x124; // Size: 4, Type: float
			constexpr auto LeftObstructedIdleAnimationFP = 0x128; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto RightObstructedIdleAnimationFP = 0x130; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto ObstructedIdleAnimationTP = 0x138; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto ObstructedIdleAnimationProneTP = 0x140; // Size: 8, Type: struct UAnimSequenceBase*
	}
} 
