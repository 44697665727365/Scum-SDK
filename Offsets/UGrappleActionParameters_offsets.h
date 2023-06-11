namespace offsets
{
	namespace UGrappleActionParameters
	{
			constexpr auto IsGrappleAttackInWater = 0x30; // Size: 1, Type: bool
			constexpr auto GrapplerInitialGrabMontage = 0x38; // Size: 8, Type: struct UAnimMontage*
			constexpr auto StartGrappleAudioEvent = 0x40; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopGrappleAudioEvent = 0x48; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto AttackerAttachSocketName = 0x50; // Size: 8, Type: struct FName
			constexpr auto DefenderAttachBoneName = 0x58; // Size: 8, Type: struct FName
			constexpr auto DefenderReleaseOffset = 0x60; // Size: 4, Type: float
			constexpr auto DefensePercentageIncreasePerInput = 0x64; // Size: 4, Type: float
			constexpr auto DefensePercentageDecreasePerSecond = 0x68; // Size: 4, Type: float
			constexpr auto DefenseBarSweetSpotSizePercentage = 0x6c; // Size: 4, Type: float
			constexpr auto ReleaseBarPercentageIncreasePerSecond = 0x70; // Size: 4, Type: float
			constexpr auto ReleaseBarPercentageDecreasePerSecond = 0x74; // Size: 4, Type: float
			constexpr auto CameraSpringArmOffset = 0x80; // Size: 48, Type: struct FTransform
	}
} 
