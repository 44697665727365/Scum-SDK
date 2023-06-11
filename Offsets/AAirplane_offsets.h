namespace offsets
{
	namespace AAirplane
	{
			constexpr auto _physicsLiftComponent = 0xaf0; // Size: 8, Type: struct ULiftComponent*
			constexpr auto _aerodynamicSurfaceMap = 0xb20; // Size: 80, Type: struct TMap<uint8_t , struct FAerodynamicSurfaceControlData>
			constexpr auto _airFlowParticlesSpeedKmhThreshold = 0xb80; // Size: 4, Type: float
			constexpr auto _reverseTaxiingForce = 0xb84; // Size: 4, Type: float
			constexpr auto _maxReverseTaxiingVelocity = 0xb88; // Size: 4, Type: float
			constexpr auto _airplaneHeightToStallInMeters = 0xb8c; // Size: 4, Type: float
			constexpr auto _propellerForce = 0xb90; // Size: 4, Type: float
			constexpr auto _maxVelocity = 0xb94; // Size: 4, Type: float
			constexpr auto _throttleLevelRange = 0xb9c; // Size: 16, Type: struct FInt32Range
			constexpr auto _throttlePerLevel = 0xbb0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _throttleLerpAmount = 0xc3c; // Size: 4, Type: float
			constexpr auto _brakeLerpAmount = 0xc48; // Size: 4, Type: float
			constexpr auto _rollLerpAmount = 0xc54; // Size: 4, Type: float
			constexpr auto _yawLerpAmount = 0xc60; // Size: 4, Type: float
			constexpr auto _pitchLerpAmount = 0xc6c; // Size: 4, Type: float
			constexpr auto _controlResetLerp = 0xc78; // Size: 4, Type: float
			constexpr auto _propellerMesh = 0xca8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _propellerMaterial = 0xcb0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _propellerMaterialDynamic = 0xcb8; // Size: 8, Type: struct UMaterialInstanceDynamic*
	}
} 
