namespace offsets
{
	namespace UVDMeshClothComponent
	{
			constexpr auto HullMesh = 0x688; // Size: 8, Type: struct UStaticMesh*
			constexpr auto StretchStiffness = 0x690; // Size: 4, Type: float
			constexpr auto BendStiffness = 0x694; // Size: 4, Type: float
			constexpr auto Mass = 0x698; // Size: 4, Type: float
			constexpr auto DragCoefficient = 0x69c; // Size: 4, Type: float
			constexpr auto PreserveVolume = 0x6a0; // Size: 1, Type: bool
			constexpr auto CurrentVolume = 0x6a4; // Size: 4, Type: float
			constexpr auto OverrideRestVolume = 0x6a8; // Size: 4, Type: float
			constexpr auto UseVertexColorDataForSetup = 0x6b0; // Size: 1, Type: char
			constexpr auto MaxBendConstraintDistance = 0x6b4; // Size: 4, Type: float
			constexpr auto StretchConstraints = 0x6e0; // Size: 16, Type: struct TArray<struct UVDParticleSpringConstraint*>
			constexpr auto BendConstraints = 0x6f0; // Size: 16, Type: struct TArray<struct UVDParticleSpringConstraint*>
			constexpr auto VolumeConstraint = 0x700; // Size: 8, Type: struct UVDMeshVolumeConstraint*
	}
} 
