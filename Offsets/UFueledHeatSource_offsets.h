namespace offsets
{
	namespace UFueledHeatSource
	{
			constexpr auto _heatSourceParams = 0x30; // Size: 36, Type: struct FHeatSourceParameters
			constexpr auto _interactionHitComponent = 0x58; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _fireParticlesComponent = 0x68; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _niagaraFireParticlesComponent = 0x70; // Size: 8, Type: struct UNiagaraComponent*
			constexpr auto _particleParametersInt32 = 0x78; // Size: 16, Type: struct TArray<struct FParameterInt32>
			constexpr auto _particleParametersFloat = 0x88; // Size: 16, Type: struct TArray<struct FParameterFloat>
			constexpr auto _particleParametersVector = 0x98; // Size: 16, Type: struct TArray<struct FParameterVector>
			constexpr auto _particleParametersVector4 = 0xa8; // Size: 16, Type: struct TArray<struct FParameterVector4>
			constexpr auto _fireLightComponent = 0xb8; // Size: 8, Type: struct UPointLightComponent*
			constexpr auto _maxFireLightIntensity = 0xc0; // Size: 4, Type: float
			constexpr auto _startBurningAudioEvent = 0xc8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _stopBurningAudioEvent = 0xd0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _fireAudioComponent = 0xd8; // Size: 8, Type: struct UAkComponent*
			constexpr auto _fireTransform = 0xe0; // Size: 48, Type: struct FTransform
			constexpr auto _meshComponent = 0x118; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _swapMeshes = 0x120; // Size: 16, Type: struct TArray<struct UStaticMesh*>
			constexpr auto _materialSwitchIndex = 0x130; // Size: 4, Type: int32_t
			constexpr auto _litMaterial = 0x138; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _unlitMaterial = 0x140; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _meshTransform = 0x150; // Size: 48, Type: struct FTransform
			constexpr auto _fireDamageProcessingPeriod = 0x184; // Size: 4, Type: float
			constexpr auto _fireBaseDamageToItemsPerSecond = 0x18c; // Size: 4, Type: float
			constexpr auto _repTemperature = 0x190; // Size: 2, Type: uint16_t
			constexpr auto _isAvailableForCooking = 0x198; // Size: 1, Type: char
			constexpr auto _temperatureReplicationInterval = 0x1a4; // Size: 4, Type: float
			constexpr auto _temperatureReplicationRadius = 0x1ac; // Size: 4, Type: float
	}
} 
