namespace offsets
{
	namespace ABankATMMinigame
	{
			constexpr auto _uiController = 0x2f8; // Size: 8, Type: struct UBankATMUIController*
			constexpr auto _bankATMMesh = 0x300; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _bankATMWidget = 0x308; // Size: 8, Type: struct UWidgetComponent*
			constexpr auto _zoomStartLocation = 0x310; // Size: 12, Type: struct FVector
			constexpr auto _zoomEndLocation = 0x31c; // Size: 12, Type: struct FVector
			constexpr auto _zoomCurve = 0x328; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _virtualMouseMinSensitivityModifier = 0x330; // Size: 4, Type: float
			constexpr auto _virtualMouseMaxSensitivityModifier = 0x334; // Size: 4, Type: float
			constexpr auto _atmMesh = 0x348; // Size: 8, Type: struct UStaticMesh*
			constexpr auto _tabletMesh = 0x350; // Size: 8, Type: struct UStaticMesh*
	}
} 
