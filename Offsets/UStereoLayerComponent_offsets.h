namespace offsets
{
	namespace UStereoLayerComponent
	{
			constexpr auto bLiveTexture = 0x1f8; // Size: 1, Type: char
			constexpr auto bSupportsDepth = 0x1f8; // Size: 1, Type: char
			constexpr auto bNoAlphaChannel = 0x1f8; // Size: 1, Type: char
			constexpr auto Texture = 0x200; // Size: 8, Type: struct UTexture*
			constexpr auto LeftTexture = 0x208; // Size: 8, Type: struct UTexture*
			constexpr auto bQuadPreserveTextureRatio = 0x210; // Size: 1, Type: char
			constexpr auto QuadSize = 0x214; // Size: 8, Type: struct FVector2D
			constexpr auto UVRect = 0x21c; // Size: 20, Type: struct FBox2D
			constexpr auto CylinderRadius = 0x230; // Size: 4, Type: float
			constexpr auto CylinderOverlayArc = 0x234; // Size: 4, Type: float
			constexpr auto CylinderHeight = 0x238; // Size: 4, Type: int32_t
			constexpr auto EquirectProps = 0x23c; // Size: 72, Type: struct FEquirectProps
			constexpr auto StereoLayerType = 0x284; // Size: 1, Type: char EStereoLayerType
			constexpr auto StereoLayerShape = 0x285; // Size: 1, Type: char EStereoLayerShape
			constexpr auto Shape = 0x288; // Size: 8, Type: struct UStereoLayerShape*
			constexpr auto Priority = 0x290; // Size: 4, Type: int32_t
	}
} 
