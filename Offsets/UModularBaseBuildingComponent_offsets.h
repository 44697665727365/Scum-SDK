namespace offsets
{
	namespace UModularBaseBuildingComponent
	{
			constexpr auto _availableOrientations = 0x6f0; // Size: 16, Type: struct TArray<struct FRotator>
			constexpr auto MinStabilityForPlacement = 0x700; // Size: 4, Type: float
			constexpr auto _elementStabilityMarkers = 0x708; // Size: 16, Type: struct TArray<struct FElementQueryMarker>
			constexpr auto _modularElementSnapMarkers = 0x718; // Size: 16, Type: struct TArray<struct FModularElementSnapMarker>
			constexpr auto _elementMorphQueries = 0x728; // Size: 16, Type: struct TArray<struct FElementMorphQuery>
	}
} 
