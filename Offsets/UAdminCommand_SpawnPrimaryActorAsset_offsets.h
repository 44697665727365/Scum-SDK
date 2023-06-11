namespace offsets
{
	namespace UAdminCommand_SpawnPrimaryActorAsset
	{
			constexpr auto _primaryAssetType = 0x88; // Size: 8, Type: struct FPrimaryAssetType
			constexpr auto _primaryAssetsToExclude = 0x90; // Size: 80, Type: struct TSet<struct FPrimaryAssetId>
			constexpr auto _countArgumentMinValue = 0xe0; // Size: 4, Type: int32_t
			constexpr auto _countArgumentMaxValue = 0xe4; // Size: 4, Type: int32_t
			constexpr auto _spawnOffset = 0xe8; // Size: 12, Type: struct FVector
	}
} 
