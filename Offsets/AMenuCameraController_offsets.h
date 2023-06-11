namespace offsets
{
	namespace AMenuCameraController
	{
			constexpr auto _camera = 0x220; // Size: 8, Type: struct ACineCameraActor*
			constexpr auto _positionSpline = 0x228; // Size: 8, Type: struct USplineComponent*
			constexpr auto _viewTargetSpline = 0x230; // Size: 8, Type: struct USplineComponent*
			constexpr auto _mouseBasedRotationIntensity = 0x238; // Size: 8, Type: struct FVector2D
			constexpr auto _positionWeightCurve = 0x240; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _viewTargetWeightCurve = 0x2c8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _interpolationSpeed = 0x350; // Size: 4, Type: float
			constexpr auto _mouseTrackingSpeed = 0x354; // Size: 4, Type: float
	}
} 
