namespace offsets
{
	namespace AHuntingClue
	{
			constexpr auto _rootComponent = 0x228; // Size: 8, Type: struct USceneComponent*
			constexpr auto _focusModeParticles = 0x230; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _clueDecalComponent = 0x238; // Size: 8, Type: struct UDecalComponent*
			constexpr auto _clueStaticMeshComponent = 0x240; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _debugArrowComponent = 0x248; // Size: 8, Type: struct UArrowComponent*
			constexpr auto _firstClueVisuals = 0x250; // Size: 16, Type: struct TArray<struct FHuntingClueVisuals>
			constexpr auto _visuals = 0x260; // Size: 16, Type: struct TArray<struct FHuntingClueVisuals>
			constexpr auto _firstClueSoundVariations = 0x270; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<UAkAudioEvent>>
			constexpr auto _secondClueSoundVariations = 0x280; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<UAkAudioEvent>>
			constexpr auto _thirdPlusClueSoundVariations = 0x290; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<UAkAudioEvent>>
			constexpr auto _hearingDistance = 0x2a0; // Size: 4, Type: float
			constexpr auto _minApparentDistance = 0x2a4; // Size: 4, Type: float
			constexpr auto _fadeTime = 0x2a8; // Size: 4, Type: float
			constexpr auto _lifetimeAfterFadeOut = 0x2ac; // Size: 4, Type: float
			constexpr auto _directionalConeHalfAngle = 0x2b0; // Size: 4, Type: float
			constexpr auto _packedClueIndexData = 0x2b4; // Size: 1, Type: char
	}
} 
