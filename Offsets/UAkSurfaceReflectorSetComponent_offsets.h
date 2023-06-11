namespace offsets
{
	namespace UAkSurfaceReflectorSetComponent
	{
			constexpr auto bEnableSurfaceReflectors = 0x210; // Size: 1, Type: char
			constexpr auto AcousticPolys = 0x218; // Size: 16, Type: struct TArray<struct FAkSurfacePoly>
			constexpr auto bEnableDiffraction = 0x228; // Size: 1, Type: char
			constexpr auto bEnableDiffractionOnBoundaryEdges = 0x228; // Size: 1, Type: char
			constexpr auto AssociatedRoom = 0x230; // Size: 8, Type: struct AActor*
	}
} 
