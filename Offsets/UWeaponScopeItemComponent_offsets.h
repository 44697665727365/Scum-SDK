namespace offsets
{
	namespace UWeaponScopeItemComponent
	{
			constexpr auto ScopeViewOffset = 0x120; // Size: 12, Type: struct FVector
			constexpr auto ScopeLensPostProcess = 0x130; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto LensZoomParameterName = 0x138; // Size: 8, Type: struct FName
			constexpr auto FrontFocalPlane = 0x140; // Size: 1, Type: bool
			constexpr auto HasCrosshairParallax = 0x141; // Size: 1, Type: bool
			constexpr auto ScopeViewMesh = 0x148; // Size: 8, Type: struct UStaticMesh*
			constexpr auto ScopeViewLensMesh = 0x150; // Size: 8, Type: struct UStaticMesh*
			constexpr auto _canToggleDownTheSightsMode = 0x158; // Size: 1, Type: bool
			constexpr auto TextRenderTarget = 0x160; // Size: 8, Type: struct UTextureRenderTarget2D*
			constexpr auto WindageInitialOffset = 0x168; // Size: 4, Type: int32_t
			constexpr auto WindageClickAudioEvent = 0x170; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _scopeViewMesh = 0x178; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _scopeViewLensMesh = 0x180; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _fakeGlassMinOpacity = 0x188; // Size: 4, Type: float
			constexpr auto _displayBrightnessMultiplier = 0x1ec; // Size: 4, Type: float
	}
} 
