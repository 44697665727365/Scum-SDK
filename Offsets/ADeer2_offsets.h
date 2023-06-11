namespace offsets
{
	namespace ADeer2
	{
			constexpr auto _hartBaseScale = 0xaf8; // Size: 4, Type: float
			constexpr auto _hartScaleVariance = 0xafc; // Size: 4, Type: float
			constexpr auto _hindBaseScale = 0xb00; // Size: 4, Type: float
			constexpr auto _hindScaleVariance = 0xb04; // Size: 4, Type: float
			constexpr auto _maleChance = 0xb08; // Size: 4, Type: float
			constexpr auto _isMale = 0xb0c; // Size: 1, Type: bool
			constexpr auto _maleSkeletalMesh = 0xb10; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto _antlerMeshes = 0xb18; // Size: 16, Type: struct TArray<struct UStaticMesh*>
			constexpr auto _antlers = 0xb28; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _hartHind = 0xb30; // Size: 4, Type: uint32_t
			constexpr auto _maleChoppingRecipeDataAsset = 0xb38; // Size: 8, Type: struct UChoppingRecipeDataAsset*
	}
} 
