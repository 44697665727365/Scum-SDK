namespace offsets
{
	namespace APrisonerCorpse
	{
			constexpr auto StrippedStaticMeshData = 0x3b8; // Size: 16, Type: struct TArray<struct FCorpseStaticMeshRepData>
			constexpr auto StrippedSkeletalMeshData = 0x3c8; // Size: 16, Type: struct TArray<struct FCorpseSkeletalMeshRepData>
			constexpr auto HeadlessChoppingRecipeDataAsset = 0x3d8; // Size: 8, Type: struct UChoppingRecipeDataAsset*
			constexpr auto LivingClass = 0x3e0; // Size: 8, Type: APrisoner*
			constexpr auto GibClass = 0x3e8; // Size: 8, Type: AGib*
			constexpr auto HeadExplosionParticles = 0x3f0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto HeadExplodedMesh = 0x3f8; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto HeadExplosionGibMeshes = 0x400; // Size: 16, Type: struct TArray<struct UStaticMesh*>
			constexpr auto PenisMeshData = 0x410; // Size: 112, Type: struct FCorpseSkeletalMeshRepData
			constexpr auto StrippedPenisMeshData = 0x480; // Size: 112, Type: struct FCorpseSkeletalMeshRepData
			constexpr auto CensorMesh = 0x4f0; // Size: 8, Type: struct UStaticMesh*
			constexpr auto CensorMaterial = 0x4f8; // Size: 8, Type: struct UMaterialInstance*
			constexpr auto GenitalsCensorComponent = 0x500; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto LeftBreastCensorComponent = 0x508; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto RightBreastCensorComponent = 0x510; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Headless = 0x518; // Size: 1, Type: bool
			constexpr auto _gender = 0x519; // Size: 1, Type: uint8_t 
			constexpr auto _fatness = 0x51c; // Size: 4, Type: float
			constexpr auto _muscliness = 0x520; // Size: 4, Type: float
			constexpr auto _skinniness = 0x524; // Size: 4, Type: float
			constexpr auto _breastSize = 0x528; // Size: 4, Type: float
			constexpr auto _penisSize = 0x52c; // Size: 4, Type: float
			constexpr auto _appearanceIndex = 0x530; // Size: 4, Type: int32_t
			constexpr auto _penisLocationSkinny = 0x534; // Size: 12, Type: struct FVector
			constexpr auto _penisLocationFat = 0x540; // Size: 12, Type: struct FVector
			constexpr auto _penisShowing = 0x54c; // Size: 1, Type: bool
			constexpr auto _breastsShowing = 0x54d; // Size: 1, Type: bool
			constexpr auto _hairLength = 0x550; // Size: 4, Type: float
			constexpr auto _facialHairLength = 0x554; // Size: 4, Type: float
			constexpr auto _userProfileName = 0x558; // Size: 16, Type: struct FString
			constexpr auto _serverUserProfileId = 0x570; // Size: 8, Type: struct FDbIntegerId
			constexpr auto _killerServerUserProfileId = 0x578; // Size: 8, Type: struct FDbIntegerId
			constexpr auto _killClaimFamePointsReward = 0x580; // Size: 4, Type: float
			constexpr auto _killClaimed = 0x584; // Size: 1, Type: bool
			constexpr auto _shortHairCurve = 0x588; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _mediumHairCurve = 0x590; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _mediumHairCurvePDO = 0x598; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _mediumHairCurveTopOpacity = 0x5a0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _longHairCurve = 0x5a8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _longHairCurvePDO = 0x5b0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _longHairCurveTopOpacity = 0x5b8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _afroMediumHairCurve = 0x5c0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _shortFacialHairCurve = 0x5c8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _mediumFacialHairCurve = 0x5d0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _mediumFacialHairCurvePDO = 0x5d8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _mediumFacialHairCurveTopOpacity = 0x5e0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _longFacialHairCurve = 0x5e8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _longFacialHairCurvePDO = 0x5f0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _longFacialHairCurveTopOpacity = 0x5f8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _censorClass = 0x600; // Size: 8, Type: UCharacterMesh*
			constexpr auto _appearanceRepData1 = 0x618; // Size: 8, Type: uint64_t
			constexpr auto _appearanceRepData2 = 0x620; // Size: 8, Type: uint64_t
			constexpr auto _prisonerCommonData = 0x628; // Size: 40, Type: struct TSoftObjectPtr<UPrisonerCommonData>
	}
} 
