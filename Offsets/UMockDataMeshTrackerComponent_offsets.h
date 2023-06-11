namespace offsets
{
	namespace UMockDataMeshTrackerComponent
	{
			constexpr auto OnMeshTrackerUpdated = 0x1f8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ScanWorld = 0x208; // Size: 1, Type: bool
			constexpr auto RequestNormals = 0x209; // Size: 1, Type: bool
			constexpr auto RequestVertexConfidence = 0x20a; // Size: 1, Type: bool
			constexpr auto VertexColorMode = 0x20b; // Size: 1, Type: uint8_t 
			constexpr auto BlockVertexColors = 0x210; // Size: 16, Type: struct TArray<struct FColor>
			constexpr auto VertexColorFromConfidenceZero = 0x220; // Size: 16, Type: struct FLinearColor
			constexpr auto VertexColorFromConfidenceOne = 0x230; // Size: 16, Type: struct FLinearColor
			constexpr auto UpdateInterval = 0x240; // Size: 4, Type: float
			constexpr auto MRMesh = 0x248; // Size: 8, Type: struct UMRMeshComponent*
	}
} 
