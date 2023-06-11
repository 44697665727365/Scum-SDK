namespace offsets
{
	namespace UVDProceduralClothComponent
	{
			constexpr auto StretchStiffness = 0x688; // Size: 4, Type: float
			constexpr auto BendStiffness = 0x68c; // Size: 4, Type: float
			constexpr auto Mass = 0x690; // Size: 4, Type: float
			constexpr auto DragCoefficient = 0x694; // Size: 4, Type: float
			constexpr auto Width = 0x698; // Size: 4, Type: float
			constexpr auto Height = 0x69c; // Size: 4, Type: float
			constexpr auto NumParticlesWide = 0x6a0; // Size: 4, Type: int32_t
			constexpr auto NumParticlesHigh = 0x6a4; // Size: 4, Type: int32_t
			constexpr auto TileMaterialAlongWidth = 0x6a8; // Size: 4, Type: float
			constexpr auto TileMaterialAlongHeight = 0x6ac; // Size: 4, Type: float
			constexpr auto StretchConstraints = 0x6d0; // Size: 16, Type: struct TArray<struct UVDParticleSpringConstraint*>
			constexpr auto BendConstraints = 0x6e0; // Size: 16, Type: struct TArray<struct UVDParticleSpringConstraint*>
	}
} 
