namespace offsets
{
	namespace AFishingAttachmentReel
	{
			constexpr auto SkeletalMesh = 0x930; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto ReelHandIK = 0x938; // Size: 8, Type: struct FName
			constexpr auto _reelHandleAcceleration = 0x940; // Size: 4, Type: float
			constexpr auto _fastReelHandleAcceleration = 0x944; // Size: 4, Type: float
			constexpr auto _reelFriction = 0x948; // Size: 4, Type: float
			constexpr auto _fastReelFriction = 0x94c; // Size: 4, Type: float
			constexpr auto _reelVelocityThreshold = 0x950; // Size: 4, Type: float
			constexpr auto _reelVelocityLimit = 0x954; // Size: 4, Type: float
			constexpr auto _reelAccelerationModifier = 0x958; // Size: 4, Type: float
			constexpr auto _leftHandOffset = 0x960; // Size: 48, Type: struct FTransform
			constexpr auto _lockAfterLongCastAnimMontage = 0x990; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _lockAfterShortCastAnimMontage = 0x998; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _reelCastAnimMontage = 0x9a0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _reelingAnimSequence = 0x9a8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _reelingStartAudioEvent = 0x9b0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _reelingEndAudioEvent = 0x9b8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _leftHandIKLocationCache = 0x9cc; // Size: 12, Type: struct FVector
	}
} 
