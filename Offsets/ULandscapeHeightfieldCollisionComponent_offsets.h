namespace offsets
{
	namespace ULandscapeHeightfieldCollisionComponent
	{
			constexpr auto ComponentLayerInfos = 0x450; // Size: 16, Type: struct TArray<struct ULandscapeLayerInfoObject*>
			constexpr auto SectionBaseX = 0x460; // Size: 4, Type: int32_t
			constexpr auto SectionBaseY = 0x464; // Size: 4, Type: int32_t
			constexpr auto CollisionSizeQuads = 0x468; // Size: 4, Type: int32_t
			constexpr auto CollisionScale = 0x46c; // Size: 4, Type: float
			constexpr auto SimpleCollisionSizeQuads = 0x470; // Size: 4, Type: int32_t
			constexpr auto CollisionQuadFlags = 0x478; // Size: 16, Type: struct TArray<char>
			constexpr auto HeightfieldGuid = 0x488; // Size: 16, Type: struct FGuid
			constexpr auto CachedLocalBox = 0x498; // Size: 28, Type: struct FBox
			constexpr auto RenderComponent = 0x4b4; // Size: 28, Type: 
			constexpr auto CookedPhysicalMaterials = 0x4e0; // Size: 16, Type: struct TArray<struct UPhysicalMaterial*>
	}
} 
