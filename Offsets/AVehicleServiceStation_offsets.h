namespace offsets
{
	namespace AVehicleServiceStation
	{
			constexpr auto _serviceMode = 0x220; // Size: 8, Type: struct FGameplayTag
			constexpr auto _mesh = 0x228; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto _displayName = 0x230; // Size: 24, Type: struct FText
			constexpr auto _vehicleAttachSocketName = 0x248; // Size: 8, Type: struct FName
			constexpr auto _maxServiceDistanceSquared = 0x250; // Size: 4, Type: float
			constexpr auto _minUpAlignmentAngleDeg = 0x254; // Size: 4, Type: float
			constexpr auto _minForwardAbsAlignmentAngleDeg = 0x258; // Size: 4, Type: float
			constexpr auto _blockCheckBoxExtent = 0x25c; // Size: 12, Type: struct FVector
			constexpr auto _movingStartAudioEvent = 0x268; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _movingStopAudioEvent = 0x270; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _assignedTradePost = 0x278; // Size: 8, Type: struct ATradePost*
			constexpr auto _servicedVehicle = 0x288; // Size: 8, Type: struct AVehicleBase*
			constexpr auto _staticId = 0x290; // Size: 8, Type: int64_t
	}
} 
