namespace offsets
{
	namespace ACharacter
	{
			constexpr auto Mesh = 0x280; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto CharacterMovement = 0x288; // Size: 8, Type: struct UCharacterMovementComponent*
			constexpr auto CapsuleComponent = 0x290; // Size: 8, Type: struct UCapsuleComponent*
			constexpr auto BasedMovement = 0x298; // Size: 48, Type: struct FBasedMovementInfo
			constexpr auto ReplicatedBasedMovement = 0x2c8; // Size: 48, Type: struct FBasedMovementInfo
			constexpr auto AnimRootMotionTranslationScale = 0x2f8; // Size: 4, Type: float
			constexpr auto BaseTranslationOffset = 0x2fc; // Size: 12, Type: struct FVector
			constexpr auto BaseRotationOffset = 0x310; // Size: 16, Type: struct FQuat
			constexpr auto ReplicatedServerLastTransformUpdateTimeStamp = 0x320; // Size: 4, Type: float
			constexpr auto ReplayLastTransformUpdateTimeStamp = 0x324; // Size: 4, Type: float
			constexpr auto ReplicatedMovementMode = 0x328; // Size: 1, Type: char
			constexpr auto bInBaseReplication = 0x329; // Size: 1, Type: bool
			constexpr auto CrouchedEyeHeight = 0x32c; // Size: 4, Type: float
			constexpr auto bIsCrouched = 0x330; // Size: 1, Type: char
			constexpr auto ReplicatedCrouchedStateAndCapsuleHalfHeight = 0x334; // Size: 4, Type: uint32_t
			constexpr auto bProxyIsJumpForceApplied = 0x338; // Size: 1, Type: char
			constexpr auto bPressedJump = 0x338; // Size: 1, Type: char
			constexpr auto bClientUpdating = 0x338; // Size: 1, Type: char
			constexpr auto bClientWasFalling = 0x338; // Size: 1, Type: char
			constexpr auto bClientResimulateRootMotion = 0x338; // Size: 1, Type: char
			constexpr auto bClientResimulateRootMotionSources = 0x338; // Size: 1, Type: char
			constexpr auto bSimGravityDisabled = 0x338; // Size: 1, Type: char
			constexpr auto bClientCheckEncroachmentOnNetUpdate = 0x338; // Size: 1, Type: char
			constexpr auto bServerMoveIgnoreRootMotion = 0x339; // Size: 1, Type: char
			constexpr auto bWasJumping = 0x339; // Size: 1, Type: char
			constexpr auto JumpKeyHoldTime = 0x33c; // Size: 4, Type: float
			constexpr auto JumpForceTimeRemaining = 0x340; // Size: 4, Type: float
			constexpr auto ProxyJumpForceStartedTime = 0x344; // Size: 4, Type: float
			constexpr auto JumpMaxHoldTime = 0x348; // Size: 4, Type: float
			constexpr auto JumpMaxCount = 0x34c; // Size: 4, Type: int32_t
			constexpr auto JumpCurrentCount = 0x350; // Size: 4, Type: int32_t
			constexpr auto JumpCurrentCountPreJump = 0x354; // Size: 4, Type: int32_t
			constexpr auto OnReachedJumpApex = 0x360; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto MovementModeChangedDelegate = 0x380; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnCharacterMovementUpdated = 0x390; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto SavedRootMotion = 0x3a0; // Size: 56, Type: struct FRootMotionSourceGroup
			constexpr auto ClientRootMotionParams = 0x3e0; // Size: 64, Type: struct FRootMotionMovementParams
			constexpr auto RootMotionRepMoves = 0x420; // Size: 16, Type: struct TArray<struct FSimulatedRootMotionReplicatedMove>
			constexpr auto RepRootMotion = 0x430; // Size: 152, Type: struct FRepRootMotionMontage
	}
} 
