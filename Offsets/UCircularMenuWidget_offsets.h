namespace offsets
{
	namespace UCircularMenuWidget
	{
			constexpr auto _layerData = 0x260; // Size: 16, Type: struct TArray<struct FCircularLayerData>
			constexpr auto _centerSize = 0x270; // Size: 4, Type: float
			constexpr auto _constrainMouseToWidget = 0x274; // Size: 1, Type: bool
			constexpr auto _unboundOuterRadiusOnFirstInteractionLayer = 0x275; // Size: 1, Type: bool
			constexpr auto _segmentsByLayer = 0x278; // Size: 16, Type: struct TArray<struct FCircularSegmentContainer>
			constexpr auto _mainOverlay = 0x288; // Size: 8, Type: struct UOverlay*
			constexpr auto _actionText = 0x290; // Size: 8, Type: struct UTextBlock*
	}
} 
