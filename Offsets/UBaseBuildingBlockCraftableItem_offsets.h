namespace offsets
{
	namespace UBaseBuildingBlockCraftableItem
	{
			constexpr auto BaseBlockClass = 0x1f0; // Size: 8, Type: UObject*
			constexpr auto Icon = 0x1f8; // Size: 8, Type: struct UTexture2D*
			constexpr auto Caption = 0x200; // Size: 24, Type: struct FText
			constexpr auto Description = 0x218; // Size: 24, Type: struct FText
			constexpr auto PlacementMeshOffset = 0x230; // Size: 12, Type: struct FVector
			constexpr auto PlacementMeshScale = 0x23c; // Size: 12, Type: struct FVector
			constexpr auto IsUpgrade = 0x248; // Size: 1, Type: bool
	}
} 
