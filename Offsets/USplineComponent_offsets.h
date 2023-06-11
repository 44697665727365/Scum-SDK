namespace offsets
{
	namespace USplineComponent
	{
			constexpr auto SplineCurves = 0x450; // Size: 112, Type: struct FSplineCurves
			constexpr auto SplineInfo = 0x4c0; // Size: 24, Type: struct FInterpCurveVector
			constexpr auto SplineRotInfo = 0x4d8; // Size: 24, Type: struct FInterpCurveQuat
			constexpr auto SplineScaleInfo = 0x4f0; // Size: 24, Type: struct FInterpCurveVector
			constexpr auto SplineReparamTable = 0x508; // Size: 24, Type: struct FInterpCurveFloat
			constexpr auto bAllowSplineEditingPerInstance = 0x520; // Size: 1, Type: bool
			constexpr auto ReparamStepsPerSegment = 0x524; // Size: 4, Type: int32_t
			constexpr auto Duration = 0x528; // Size: 4, Type: float
			constexpr auto bStationaryEndpoints = 0x52c; // Size: 1, Type: bool
			constexpr auto bSplineHasBeenEdited = 0x52d; // Size: 1, Type: bool
			constexpr auto bModifiedByConstructionScript = 0x52e; // Size: 1, Type: bool
			constexpr auto bInputSplinePointsToConstructionScript = 0x52f; // Size: 1, Type: bool
			constexpr auto bDrawDebug = 0x530; // Size: 1, Type: bool
			constexpr auto bClosedLoop = 0x531; // Size: 1, Type: bool
			constexpr auto bLoopPositionOverride = 0x532; // Size: 1, Type: bool
			constexpr auto LoopPosition = 0x534; // Size: 4, Type: float
			constexpr auto DefaultUpVector = 0x538; // Size: 12, Type: struct FVector
	}
} 
