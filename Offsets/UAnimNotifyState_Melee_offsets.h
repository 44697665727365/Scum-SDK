namespace offsets
{
	namespace UAnimNotifyState_Melee
	{
			constexpr auto _attackCapsuleAttachment = 0x30; // Size: 8, Type: struct FGameplayTag
			constexpr auto _damageMultiplier = 0x38; // Size: 4, Type: float
			constexpr auto _hitSeverity = 0x3c; // Size: 1, Type: uint8_t 
			constexpr auto _stopOnHit = 0x3d; // Size: 1, Type: bool
			constexpr auto _ignoreLandscape = 0x3e; // Size: 1, Type: bool
			constexpr auto _attackType = 0x3f; // Size: 1, Type: uint8_t 
			constexpr auto _hitDetectionMarkersRootBoneParentName = 0x40; // Size: 8, Type: struct FName
			constexpr auto _hitDetectionMarkers = 0x48; // Size: 16, Type: struct TArray<struct FMeleeHitDetectionMarker>
			constexpr auto _hitDetectionSamplingRate = 0x58; // Size: 4, Type: int32_t
	}
} 
