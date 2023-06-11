namespace offsets
{
	namespace UWidgetComponent
	{
			constexpr auto Space = 0x478; // Size: 1, Type: uint8_t 
			constexpr auto TimingPolicy = 0x479; // Size: 1, Type: uint8_t 
			constexpr auto WidgetClass = 0x480; // Size: 8, Type: UUserWidget*
			constexpr auto DrawSize = 0x488; // Size: 8, Type: struct FIntPoint
			constexpr auto bManuallyRedraw = 0x490; // Size: 1, Type: bool
			constexpr auto bRedrawRequested = 0x491; // Size: 1, Type: bool
			constexpr auto RedrawTime = 0x494; // Size: 4, Type: float
			constexpr auto CurrentDrawSize = 0x4a0; // Size: 8, Type: struct FIntPoint
			constexpr auto bDrawAtDesiredSize = 0x4a8; // Size: 1, Type: bool
			constexpr auto Pivot = 0x4ac; // Size: 8, Type: struct FVector2D
			constexpr auto bReceiveHardwareInput = 0x4b4; // Size: 1, Type: bool
			constexpr auto bWindowFocusable = 0x4b5; // Size: 1, Type: bool
			constexpr auto WindowVisibility = 0x4b6; // Size: 1, Type: uint8_t 
			constexpr auto bApplyGammaCorrection = 0x4b7; // Size: 1, Type: bool
			constexpr auto OwnerPlayer = 0x4b8; // Size: 8, Type: struct ULocalPlayer*
			constexpr auto BackgroundColor = 0x4c0; // Size: 16, Type: struct FLinearColor
			constexpr auto TintColorAndOpacity = 0x4d0; // Size: 16, Type: struct FLinearColor
			constexpr auto OpacityFromTexture = 0x4e0; // Size: 4, Type: float
			constexpr auto BlendMode = 0x4e4; // Size: 1, Type: uint8_t 
			constexpr auto bIsTwoSided = 0x4e5; // Size: 1, Type: bool
			constexpr auto TickWhenOffscreen = 0x4e6; // Size: 1, Type: bool
			constexpr auto BodySetup = 0x4e8; // Size: 8, Type: struct UBodySetup*
			constexpr auto TranslucentMaterial = 0x4f0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto TranslucentMaterial_OneSided = 0x4f8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto OpaqueMaterial = 0x500; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto OpaqueMaterial_OneSided = 0x508; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaskedMaterial = 0x510; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaskedMaterial_OneSided = 0x518; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto RenderTarget = 0x520; // Size: 8, Type: struct UTextureRenderTarget2D*
			constexpr auto MaterialInstance = 0x528; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto bAddedToScreen = 0x530; // Size: 1, Type: bool
			constexpr auto bEditTimeUsable = 0x531; // Size: 1, Type: bool
			constexpr auto SharedLayerName = 0x534; // Size: 8, Type: struct FName
			constexpr auto LayerZOrder = 0x53c; // Size: 4, Type: int32_t
			constexpr auto GeometryMode = 0x540; // Size: 1, Type: uint8_t 
			constexpr auto CylinderArcAngle = 0x544; // Size: 4, Type: float
			constexpr auto TickMode = 0x548; // Size: 1, Type: uint8_t 
			constexpr auto Widget = 0x570; // Size: 8, Type: struct UUserWidget*
	}
} 
