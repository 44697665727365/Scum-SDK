namespace offsets
{
	namespace UFishSpeciesData
	{
			constexpr auto FishSpecies = 0x30; // Size: 1, Type: uint8_t 
			constexpr auto SingleFishStaticMesh = 0x38; // Size: 8, Type: struct UStaticMesh*
			constexpr auto SingleFishSkeletalMesh = 0x40; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto MaterialOverride = 0x48; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto CaughtFishAnimSequence = 0x50; // Size: 8, Type: struct UAnimSequence*
			constexpr auto SchoolClass = 0x58; // Size: 8, Type: AFishSchoolActor*
			constexpr auto caughtFishClass = 0x60; // Size: 8, Type: AActor*
			constexpr auto Predator = 0x68; // Size: 1, Type: bool
			constexpr auto MinDepth = 0x6c; // Size: 4, Type: float
			constexpr auto MaxDepth = 0x70; // Size: 4, Type: float
			constexpr auto MinMass = 0x74; // Size: 4, Type: float
			constexpr auto MaxMass = 0x78; // Size: 4, Type: float
			constexpr auto MaxLength = 0x7c; // Size: 4, Type: float
			constexpr auto TimeOfDayPercentageCurve = 0x80; // Size: 8, Type: struct UCurveFloat*
	}
} 
