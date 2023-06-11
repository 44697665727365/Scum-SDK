namespace offsets
{
	namespace ACorpse
	{
			constexpr auto RagdollMeshComponent = 0x238; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto ChoppingRecipeDataAsset = 0x240; // Size: 8, Type: struct UChoppingRecipeDataAsset*
			constexpr auto ItemRepresentation = 0x248; // Size: 8, Type: AItem*
			constexpr auto IterativeChopping = 0x250; // Size: 1, Type: bool
			constexpr auto MainBoneName = 0x254; // Size: 8, Type: struct FName
			constexpr auto RagdollMeshData = 0x260; // Size: 112, Type: struct FCorpseSkeletalMeshRepData
			constexpr auto StaticMeshData = 0x2d0; // Size: 16, Type: struct TArray<struct FCorpseStaticMeshRepData>
			constexpr auto SkeletalMeshData = 0x2e0; // Size: 16, Type: struct TArray<struct FCorpseSkeletalMeshRepData>
			constexpr auto PoseData = 0x2f0; // Size: 64, Type: struct FCorpsePoseData
			constexpr auto inventory = 0x330; // Size: 16, Type: struct TArray<struct AItem*>
			constexpr auto SearchTime = 0x340; // Size: 4, Type: float
			constexpr auto PhysicsPauseDistance = 0x344; // Size: 4, Type: float
			constexpr auto StartSearchAudioEvent = 0x348; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopSearchAudioEvent = 0x350; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto AutoDestructTime = 0x358; // Size: 4, Type: float
			constexpr auto AutoDestructRadius = 0x35c; // Size: 4, Type: float
			constexpr auto Attachements = 0x360; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto AttachementSockets = 0x370; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto _sourceCharacter = 0x398; // Size: 8, Type: struct AConZCharacter*
			constexpr auto _atRest = 0x3a8; // Size: 1, Type: bool
	}
} 
