namespace offsets
{
	namespace ULaserTriggerComponent
	{
			constexpr auto BoxCollisionComponent = 0x4d0; // Size: 8, Type: struct UBoxComponent*
			constexpr auto VisualizationMeshComponent = 0x4d8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _laserDirection = 0x4e0; // Size: 12, Type: struct FVector
			constexpr auto _maxLaserLength = 0x4ec; // Size: 4, Type: float
			constexpr auto _laserThickness = 0x4f0; // Size: 4, Type: float
			constexpr auto _laserHeight = 0x4f4; // Size: 4, Type: float
			constexpr auto _visualizationMesh = 0x4f8; // Size: 8, Type: struct UStaticMesh*
			constexpr auto _laserMeshTransform = 0x500; // Size: 48, Type: struct FTransform
	}
} 
