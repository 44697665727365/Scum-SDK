namespace offsets
{
	namespace UPortableVehicleServiceStationSaveObject
	{
			constexpr auto AssetId = 0x28; // Size: 16, Type: struct FPrimaryAssetId
			constexpr auto ServiceMode = 0x38; // Size: 8, Type: struct FGameplayTag
			constexpr auto Location = 0x40; // Size: 12, Type: struct FVector
			constexpr auto Rotation = 0x4c; // Size: 12, Type: struct FRotator
			constexpr auto OriginalItemClass = 0x58; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto HealthRatio = 0x80; // Size: 4, Type: float
	}
} 
