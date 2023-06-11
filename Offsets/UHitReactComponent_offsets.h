namespace offsets
{
	namespace UHitReactComponent
	{
			constexpr auto HitReactMappings = 0xc8; // Size: 16, Type: struct TArray<struct UHitReactMapping*>
			constexpr auto PhysicalHitReactData = 0xd8; // Size: 24, Type: struct FPhysicalHitReactData
			constexpr auto RagdollConstraintProfileName = 0xf0; // Size: 8, Type: struct FName
			constexpr auto RagdollRestThresholdSingleBodyMax = 0xf8; // Size: 4, Type: float
			constexpr auto RagdollRestThresholdAverageBodyMax = 0xfc; // Size: 4, Type: float
			constexpr auto _pelvisBoneName = 0x128; // Size: 8, Type: struct FName
			constexpr auto _rootBoneName = 0x130; // Size: 8, Type: struct FName
			constexpr auto _getUpFromFaceMontage = 0x138; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _getUpFromBackMontage = 0x140; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _shouldSnapToServerLocation = 0x148; // Size: 1, Type: bool
			constexpr auto _ragdollTransitionState = 0x1ba; // Size: 1, Type: uint8_t 
			constexpr auto _serverRagdollLocation = 0x1bc; // Size: 12, Type: struct FVector
	}
} 
