namespace offsets
{
	namespace UCameraComponent
	{
			constexpr auto FieldOfView = 0x1f8; // Size: 4, Type: float
			constexpr auto OrthoWidth = 0x1fc; // Size: 4, Type: float
			constexpr auto OrthoNearClipPlane = 0x200; // Size: 4, Type: float
			constexpr auto OrthoFarClipPlane = 0x204; // Size: 4, Type: float
			constexpr auto AspectRatio = 0x208; // Size: 4, Type: float
			constexpr auto bConstrainAspectRatio = 0x20c; // Size: 1, Type: char
			constexpr auto bUseFieldOfViewForLOD = 0x20c; // Size: 1, Type: char
			constexpr auto bLockToHmd = 0x20c; // Size: 1, Type: char
			constexpr auto bUsePawnControlRotation = 0x20c; // Size: 1, Type: char
			constexpr auto ProjectionMode = 0x20d; // Size: 1, Type: char ECameraProjectionMode
			constexpr auto PostProcessBlendWeight = 0x240; // Size: 4, Type: float
			constexpr auto PostProcessSettings = 0x270; // Size: 1376, Type: struct FPostProcessSettings
	}
} 
