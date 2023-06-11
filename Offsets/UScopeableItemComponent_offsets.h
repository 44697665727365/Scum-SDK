namespace offsets
{
	namespace UScopeableItemComponent
	{
			constexpr auto _zoomLevelSettings = 0xc8; // Size: 16, Type: struct TArray<struct FScopeZoomLevelSettings>
			constexpr auto _scopingOverlayTexture = 0xd8; // Size: 8, Type: struct UTexture2D*
			constexpr auto _scopingStartDelay = 0xe0; // Size: 4, Type: float
			constexpr auto _scopingStopDelay = 0xe4; // Size: 4, Type: float
			constexpr auto _montageStandingFP = 0xe8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _montageCrouchingFP = 0xf0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _montageProneFP = 0xf8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _montageStandingTP = 0x100; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _montageCrouchingTP = 0x108; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _montageProneTP = 0x110; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _currentZoomLevel = 0x118; // Size: 4, Type: int32_t
	}
} 
