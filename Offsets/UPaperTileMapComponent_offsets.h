namespace offsets
{
	namespace UPaperTileMapComponent
	{
			constexpr auto MapWidth = 0x478; // Size: 4, Type: int32_t
			constexpr auto MapHeight = 0x47c; // Size: 4, Type: int32_t
			constexpr auto TileWidth = 0x480; // Size: 4, Type: int32_t
			constexpr auto TileHeight = 0x484; // Size: 4, Type: int32_t
			constexpr auto DefaultLayerTileSet = 0x488; // Size: 8, Type: struct UPaperTileSet*
			constexpr auto Material = 0x490; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto TileLayers = 0x498; // Size: 16, Type: struct TArray<struct UPaperTileLayer*>
			constexpr auto TileMapColor = 0x4a8; // Size: 16, Type: struct FLinearColor
			constexpr auto UseSingleLayerIndex = 0x4b8; // Size: 4, Type: int32_t
			constexpr auto bUseSingleLayer = 0x4bc; // Size: 1, Type: bool
			constexpr auto TileMap = 0x4c0; // Size: 8, Type: struct UPaperTileMap*
	}
} 
