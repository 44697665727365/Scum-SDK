namespace offsets
{
	namespace APrisonerHUD
	{
			constexpr auto HudWidget = 0x320; // Size: 8, Type: struct UHudWidget*
			constexpr auto DamageDirectionIndicator = 0x328; // Size: 8, Type: struct UDamageDirectionIndicator*
			constexpr auto ShouldDrawCrosshair = 0x330; // Size: 1, Type: bool
			constexpr auto ShouldDrawScreenCenterDot = 0x331; // Size: 1, Type: bool
			constexpr auto TacticsMaterial = 0x338; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto LoadingIconWidget = 0x340; // Size: 8, Type: struct ULoadingIconWidget*
			constexpr auto SpawnScreenWidget = 0x348; // Size: 8, Type: struct USpawnScreen*
			constexpr auto WaypointScreenWidget = 0x350; // Size: 8, Type: struct UWaypointScreenWidget*
			constexpr auto OnShouldShowExtendedWidgetTooltipChanged = 0x358; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto _HUDFont = 0x368; // Size: 8, Type: struct UFont*
			constexpr auto _HUDFontScope = 0x370; // Size: 8, Type: struct UFont*
			constexpr auto _customMapBorderWidth = 0x3a8; // Size: 4, Type: float
			constexpr auto _customMapBorderColor = 0x3ac; // Size: 16, Type: struct FLinearColor
			constexpr auto _pauseMenuUIControllerClass = 0x3f8; // Size: 8, Type: UPauseMenuUIController*
			constexpr auto _traderCategories = 0x400; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto _plantingPanelWidgetClass = 0x428; // Size: 8, Type: UPlantingPanel*
			constexpr auto _adminPlantPanelWidgetClass = 0x430; // Size: 8, Type: UAdminPlantPanel*
			constexpr auto _plantStatusIndicatorWidgetClass = 0x440; // Size: 8, Type: UPlantStatusIndicatorWidget*
			constexpr auto _cookingUIControllerClass = 0x460; // Size: 8, Type: UCookingUIController*
			constexpr auto _chatUIControllerClass = 0x470; // Size: 8, Type: UChatUIController*
			constexpr auto _shouldDrawOtherPlayerInfo = 0x4f2; // Size: 1, Type: bool
			constexpr auto _isLeftMouseButtonPressed = 0x4f3; // Size: 1, Type: bool
			constexpr auto _prisonerMapHUDObject = 0x528; // Size: 64, Type: struct FMapHUDPrisonerObject
			constexpr auto _homeLocationMapHUDObject = 0x568; // Size: 72, Type: struct FMapHUDHomeLocationObject
			constexpr auto _worldEventsMapHUDObject = 0x5b0; // Size: 24, Type: struct FMapHUDWorldEventsObject
			constexpr auto _otherPlayersMapHUDObjects = 0x5c8; // Size: 192, Type: struct FMapHUDOtherPlayersObject
			constexpr auto _droneMapHUDObject = 0x688; // Size: 56, Type: struct FMapHUDDroneObject
			constexpr auto _vehicleMapHUDObjects = 0x6c0; // Size: 192, Type: struct FMapHUDVehiclesObject
			constexpr auto _flagMapHUDObjects = 0x7a0; // Size: 192, Type: struct FMapHUDFlagsObject
			constexpr auto _itemSplitWidget = 0x890; // Size: 8, Type: struct UItemSplitWidget*
	}
} 
