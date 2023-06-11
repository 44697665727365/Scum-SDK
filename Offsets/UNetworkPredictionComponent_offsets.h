namespace offsets
{
	namespace UNetworkPredictionComponent
	{
			constexpr auto _interpolationBackTime = 0xf0; // Size: 4, Type: float
			constexpr auto _timeSmoothing = 0xf4; // Size: 4, Type: float
			constexpr auto _positionLerpSpeed = 0xf8; // Size: 4, Type: float
			constexpr auto _rotationLerpSpeed = 0xfc; // Size: 4, Type: float
			constexpr auto _syncPosition = 0x100; // Size: 1, Type: uint8_t 
			constexpr auto _syncRotation = 0x101; // Size: 1, Type: uint8_t 
			constexpr auto _syncVelocity = 0x102; // Size: 1, Type: uint8_t 
			constexpr auto _syncAngularVelocity = 0x103; // Size: 1, Type: uint8_t 
			constexpr auto _isPositionCompressed = 0x104; // Size: 1, Type: bool
			constexpr auto _isRotationCompressed = 0x105; // Size: 1, Type: bool
			constexpr auto _isVelocityCompressed = 0x106; // Size: 1, Type: bool
			constexpr auto _isAngularVelocityCompressed = 0x107; // Size: 1, Type: bool
			constexpr auto _sendRate = 0x108; // Size: 4, Type: float
			constexpr auto _restSendRate = 0x10c; // Size: 4, Type: float
			constexpr auto _atRestPositionThreshold = 0x174; // Size: 4, Type: float
			constexpr auto _atRestRotationThreshold = 0x178; // Size: 4, Type: float
			constexpr auto _atRestDeltaTimeThreshold = 0x17c; // Size: 4, Type: float
			constexpr auto _distanceThresholdToSnap = 0x180; // Size: 4, Type: float
			constexpr auto _minTimeToCoverPosition = 0x1d0; // Size: 4, Type: float
			constexpr auto _maxTimeToCoverPosition = 0x1d4; // Size: 4, Type: float
			constexpr auto _minTimeToCoverRotation = 0x1d8; // Size: 4, Type: float
			constexpr auto _maxTimeToCoverRotation = 0x1dc; // Size: 4, Type: float
	}
} 
