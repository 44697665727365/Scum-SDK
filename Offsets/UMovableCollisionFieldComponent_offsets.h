namespace offsets
{
	namespace UMovableCollisionFieldComponent
	{
			constexpr auto _collisionCheckInterval = 0xb0; // Size: 4, Type: float
			constexpr auto _currentState = 0xb4; // Size: 3, Type: struct FMovableCollisionFieldState
			constexpr auto _moveInfo[2] = 0xd0; // Size: 16, Type: struct FMovableCollisionFieldMoveInfo
			constexpr auto _startRelativeLocation = 0xe0; // Size: 12, Type: struct FVector
			constexpr auto _endRelativeLocation = 0xec; // Size: 12, Type: struct FVector
	}
} 
