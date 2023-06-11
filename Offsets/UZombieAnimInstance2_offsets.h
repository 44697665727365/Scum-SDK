namespace offsets
{
	namespace UZombieAnimInstance2
	{
			constexpr auto HasOwnerBegunPlay = 0x2b8; // Size: 1, Type: bool
			constexpr auto IsAlive = 0x2b9; // Size: 1, Type: bool
			constexpr auto IsInRagdoll = 0x2ba; // Size: 1, Type: bool
			constexpr auto IsDeadAndCompletelyInRagdoll = 0x2bb; // Size: 1, Type: bool
			constexpr auto stance = 0x2bc; // Size: 1, Type: uint8_t 
			constexpr auto IsStanceRelaxed = 0x2bd; // Size: 1, Type: bool
			constexpr auto IsStanceLying = 0x2be; // Size: 1, Type: bool
			constexpr auto IsStanceAlerted = 0x2bf; // Size: 1, Type: bool
			constexpr auto IsStanceCombat = 0x2c0; // Size: 1, Type: bool
			constexpr auto NumRelaxedIdleVariations = 0x2c4; // Size: 4, Type: int32_t
			constexpr auto RelaxedIdleVariationIndex = 0x2c8; // Size: 4, Type: int32_t
			constexpr auto Acceleration = 0x2cc; // Size: 12, Type: struct FVector
			constexpr auto WantsToMove = 0x2d8; // Size: 1, Type: bool
			constexpr auto Velocity = 0x2dc; // Size: 12, Type: struct FVector
			constexpr auto Speed = 0x2e8; // Size: 4, Type: float
			constexpr auto SpeedXY = 0x2ec; // Size: 4, Type: float
			constexpr auto WalkStoppingDistance = 0x2f0; // Size: 4, Type: float
			constexpr auto WalkStoppingTime = 0x2f4; // Size: 4, Type: float
			constexpr auto IsFalling = 0x2f8; // Size: 1, Type: bool
			constexpr auto IsJumping = 0x2f9; // Size: 1, Type: bool
			constexpr auto JumpApex = 0x2fc; // Size: 4, Type: float
			constexpr auto JumpDuration = 0x300; // Size: 4, Type: float
			constexpr auto AimOffset = 0x304; // Size: 12, Type: struct FRotator
			constexpr auto CanStartGoToLoop = 0x310; // Size: 1, Type: bool
			constexpr auto RelaxedWalkLoopAnimation = 0x318; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto RelaxedWalkLoopAnimationPlayRate = 0x320; // Size: 4, Type: float
			constexpr auto CombatRunStartAnimation = 0x328; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto CombatRunStartAnimationPlayRate = 0x330; // Size: 4, Type: float
			constexpr auto CombatRunLoopAnimation = 0x338; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto CombatRunLoopAnimationPlayRate = 0x340; // Size: 4, Type: float
			constexpr auto CombatRunStopAnimation = 0x348; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto CombatRunStopAnimationStartTime = 0x350; // Size: 4, Type: float
			constexpr auto CombatRunStopAnimationPlayRate = 0x354; // Size: 4, Type: float
			constexpr auto MinUpperBodyBlendWeight = 0x358; // Size: 4, Type: float
			constexpr auto UpperBodyBlendMaxSpeedXY = 0x35c; // Size: 4, Type: float
			constexpr auto UpperBodyBlendWeight = 0x360; // Size: 4, Type: float
	}
} 
