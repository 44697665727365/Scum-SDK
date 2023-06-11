namespace offsets
{
	namespace UPrisonerFirstPersonSubviewComponent
	{
			constexpr auto SubviewID = 0x7d8; // Size: 1, Type: uint8_t 
			constexpr auto WeaponFOV = 0x7dc; // Size: 4, Type: float
			constexpr auto WeaponFoveationOffset = 0x7e0; // Size: 12, Type: struct FVector
			constexpr auto MinViewPitch = 0x7ec; // Size: 4, Type: float
			constexpr auto MaxViewPitch = 0x7f0; // Size: 4, Type: float
			constexpr auto MinViewYaw = 0x7f4; // Size: 4, Type: float
			constexpr auto MaxViewYaw = 0x7f8; // Size: 4, Type: float
			constexpr auto MinMaxViewPitchByYawAndSpeed = 0x800; // Size: 8, Type: struct UCurveLinearColor*
			constexpr auto LocalSpaceOffsetByYaw = 0x808; // Size: 8, Type: struct UCurveVector*
			constexpr auto LocalSpaceOffsetByPitch = 0x810; // Size: 8, Type: struct UCurveVector*
			constexpr auto ActorSpaceOffsetByYaw = 0x818; // Size: 8, Type: struct UCurveVector*
			constexpr auto ActorSpaceOffsetByPitch = 0x820; // Size: 8, Type: struct UCurveVector*
			constexpr auto LockRotationToSocketAnimationCurveName = 0x828; // Size: 8, Type: struct FName
			constexpr auto LockRotationToSocketSocketName = 0x830; // Size: 8, Type: struct FName
			constexpr auto ProbeSize = 0x838; // Size: 4, Type: float
			constexpr auto ProbeChannel = 0x83c; // Size: 1, Type: char ECollisionChannel
			constexpr auto DoCollisionTest = 0x83d; // Size: 1, Type: bool
			constexpr auto AnimationBobbingTXCurveName = 0x840; // Size: 8, Type: struct FName
			constexpr auto AnimationBobbingTYCurveName = 0x848; // Size: 8, Type: struct FName
			constexpr auto AnimationBobbingTZCurveName = 0x850; // Size: 8, Type: struct FName
			constexpr auto AnimationBobbingRYCurveName = 0x858; // Size: 8, Type: struct FName
			constexpr auto AnimationBobbingRPCurveName = 0x860; // Size: 8, Type: struct FName
			constexpr auto AnimationBobbingRRCurveName = 0x868; // Size: 8, Type: struct FName
			constexpr auto AnimationBobbingTScale = 0x870; // Size: 4, Type: float
			constexpr auto AnimationBobbingRScale = 0x874; // Size: 4, Type: float
			constexpr auto AnimationCameraOffsetTXCurveName = 0x878; // Size: 8, Type: struct FName
			constexpr auto AnimationCameraOffsetTYCurveName = 0x880; // Size: 8, Type: struct FName
			constexpr auto AnimationCameraOffsetTZCurveName = 0x888; // Size: 8, Type: struct FName
			constexpr auto AnimationCameraOffsetRYCurveName = 0x890; // Size: 8, Type: struct FName
			constexpr auto AnimationCameraOffsetRPCurveName = 0x898; // Size: 8, Type: struct FName
			constexpr auto AnimationCameraOffsetRRCurveName = 0x8a0; // Size: 8, Type: struct FName
			constexpr auto AnimationCameraOffsetTScale = 0x8a8; // Size: 4, Type: float
			constexpr auto AnimationCameraOffsetRScale = 0x8ac; // Size: 4, Type: float
			constexpr auto BlendInDuration = 0x8b0; // Size: 4, Type: float
			constexpr auto BlendOutDuration = 0x8b4; // Size: 4, Type: float
			constexpr auto _minFactorForPrisonerHiding = 0x8b8; // Size: 4, Type: float
	}
} 
