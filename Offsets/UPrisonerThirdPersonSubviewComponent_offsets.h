namespace offsets
{
	namespace UPrisonerThirdPersonSubviewComponent
	{
			constexpr auto SubviewID = 0x298; // Size: 1, Type: uint8_t 
			constexpr auto FieldOfView = 0x29c; // Size: 4, Type: float
			constexpr auto UseFieldOfViewForLOD = 0x2a0; // Size: 1, Type: bool
			constexpr auto ConstrainAspectRatio = 0x2a1; // Size: 1, Type: bool
			constexpr auto AspectRatio = 0x2a4; // Size: 4, Type: float
			constexpr auto MinViewYaw = 0x2a8; // Size: 4, Type: float
			constexpr auto MaxViewYaw = 0x2ac; // Size: 4, Type: float
			constexpr auto MinViewPitch = 0x2b0; // Size: 4, Type: float
			constexpr auto MaxViewPitch = 0x2b4; // Size: 4, Type: float
			constexpr auto LeanOffsetLeft = 0x2b8; // Size: 4, Type: float
			constexpr auto LeanOffsetRight = 0x2bc; // Size: 4, Type: float
			constexpr auto GlobalOffset = 0x2c0; // Size: 12, Type: struct FVector
			constexpr auto MirrorAroundXZPlane = 0x2cc; // Size: 1, Type: bool
			constexpr auto MaxLocalOffsetWhenColliding = 0x2d0; // Size: 12, Type: struct FVector
			constexpr auto ShouldConstrainTraceOriginToOwnerCapsule = 0x2dc; // Size: 1, Type: bool
			constexpr auto OwnerCapsuleContrainBuffer = 0x2e0; // Size: 4, Type: float
			constexpr auto TraceOriginGlobalOffset = 0x2e4; // Size: 12, Type: struct FVector
			constexpr auto TraceOriginRelativeOffset = 0x2f0; // Size: 12, Type: struct FVector
			constexpr auto LocalOffsetCurvesBlendSpeed = 0x2fc; // Size: 4, Type: float
			constexpr auto LocalOffsetCurves[2] = 0x300; // Size: 64, Type: struct FLocalOffsetCurves
			constexpr auto AnimationOffsetTZCurveName = 0x340; // Size: 8, Type: struct FName
			constexpr auto PostProcessBlendWeight = 0x348; // Size: 4, Type: float
			constexpr auto PostProcessSettings = 0x350; // Size: 1376, Type: struct FPostProcessSettings
			constexpr auto BlendInDuration = 0x8b0; // Size: 4, Type: float
			constexpr auto BlendOutDuration = 0x8b4; // Size: 4, Type: float
			constexpr auto ShouldScaleProbeWithFOV = 0x8b8; // Size: 1, Type: bool
			constexpr auto _clippingPreventionOffset = 0x8d4; // Size: 12, Type: struct FVector
			constexpr auto _clippingPreventionSweepLength = 0x8e0; // Size: 4, Type: float
			constexpr auto _clippingPreventionAmount = 0x8e4; // Size: 4, Type: float
			constexpr auto _clippingPreventionTraceOffset = 0x8e8; // Size: 12, Type: struct FVector
			constexpr auto _minFactorForPrisonerHiding = 0x8f4; // Size: 4, Type: float
	}
} 
