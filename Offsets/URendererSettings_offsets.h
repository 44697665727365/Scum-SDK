namespace offsets
{
	namespace URendererSettings
	{
			constexpr auto bMobileDisableVertexFog = 0x38; // Size: 1, Type: char
			constexpr auto MaxMobileCascades = 0x3c; // Size: 4, Type: int32_t
			constexpr auto MobileMSAASampleCount = 0x40; // Size: 1, Type: char EMobileMSAASampleCount
			constexpr auto bMobileAllowDitheredLODTransition = 0x44; // Size: 1, Type: char
			constexpr auto bMobileAllowSoftwareOcclusionCulling = 0x44; // Size: 1, Type: char
			constexpr auto bMobileVirtualTextures = 0x44; // Size: 1, Type: char
			constexpr auto bDiscardUnusedQualityLevels = 0x44; // Size: 1, Type: char
			constexpr auto bOcclusionCulling = 0x44; // Size: 1, Type: char
			constexpr auto MinScreenRadiusForLights = 0x48; // Size: 4, Type: float
			constexpr auto MinScreenRadiusForEarlyZPass = 0x4c; // Size: 4, Type: float
			constexpr auto MinScreenRadiusForCSMdepth = 0x50; // Size: 4, Type: float
			constexpr auto bPrecomputedVisibilityWarning = 0x54; // Size: 1, Type: char
			constexpr auto bTextureStreaming = 0x54; // Size: 1, Type: char
			constexpr auto bUseDXT5NormalMaps = 0x54; // Size: 1, Type: char
			constexpr auto bVirtualTextures = 0x54; // Size: 1, Type: char
			constexpr auto bVirtualTextureEnableAutoImport = 0x54; // Size: 1, Type: char
			constexpr auto bVirtualTexturedLightmaps = 0x54; // Size: 1, Type: char
			constexpr auto VirtualTextureTileSize = 0x58; // Size: 4, Type: uint32_t
			constexpr auto VirtualTextureTileBorderSize = 0x5c; // Size: 4, Type: uint32_t
			constexpr auto VirtualTextureFeedbackFactor = 0x60; // Size: 4, Type: uint32_t
			constexpr auto bVirtualTextureEnableCompressZlib = 0x64; // Size: 1, Type: char
			constexpr auto bVirtualTextureEnableCompressCrunch = 0x64; // Size: 1, Type: char
			constexpr auto bClearCoatEnableSecondNormal = 0x64; // Size: 1, Type: char
			constexpr auto ReflectionCaptureResolution = 0x68; // Size: 4, Type: int32_t
			constexpr auto bReflectionCaptureCompression = 0x6c; // Size: 1, Type: char
			constexpr auto ReflectionEnvironmentLightmapMixBasedOnRoughness = 0x6c; // Size: 1, Type: char
			constexpr auto bForwardShading = 0x6c; // Size: 1, Type: char
			constexpr auto bVertexFoggingForOpaque = 0x6c; // Size: 1, Type: char
			constexpr auto bAllowStaticLighting = 0x6c; // Size: 1, Type: char
			constexpr auto bUseNormalMapsForStaticLighting = 0x6c; // Size: 1, Type: char
			constexpr auto bGenerateMeshDistanceFields = 0x6c; // Size: 1, Type: char
			constexpr auto bEightBitMeshDistanceFields = 0x6c; // Size: 1, Type: char
			constexpr auto bGenerateLandscapeGIData = 0x6d; // Size: 1, Type: char
			constexpr auto bCompressMeshDistanceFields = 0x6d; // Size: 1, Type: char
			constexpr auto TessellationAdaptivePixelsPerTriangle = 0x70; // Size: 4, Type: float
			constexpr auto bSeparateTranslucency = 0x74; // Size: 1, Type: char
			constexpr auto TranslucentSortPolicy = 0x78; // Size: 1, Type: char ETranslucentSortPolicy
			constexpr auto TranslucentSortAxis = 0x7c; // Size: 12, Type: struct FVector
			constexpr auto HMDFixedFoveationLevel = 0x88; // Size: 1, Type: char EFixedFoveationLevels
			constexpr auto CustomDepthStencil = 0x89; // Size: 1, Type: char ECustomDepthStencil
			constexpr auto bCustomDepthTaaJitter = 0x8c; // Size: 1, Type: char
			constexpr auto bEnableAlphaChannelInPostProcessing = 0x90; // Size: 1, Type: char EAlphaChannelMode
			constexpr auto bDefaultFeatureBloom = 0x94; // Size: 1, Type: char
			constexpr auto bDefaultFeatureAmbientOcclusion = 0x94; // Size: 1, Type: char
			constexpr auto bDefaultFeatureAmbientOcclusionStaticFraction = 0x94; // Size: 1, Type: char
			constexpr auto bDefaultFeatureAutoExposure = 0x94; // Size: 1, Type: char
			constexpr auto DefaultFeatureAutoExposure = 0x98; // Size: 1, Type: char EAutoExposureMethodUI
			constexpr auto DefaultFeatureAutoExposureBias = 0x9c; // Size: 4, Type: float
			constexpr auto bExtendDefaultLuminanceRangeInAutoExposureSettings = 0xa0; // Size: 1, Type: char
			constexpr auto bUsePreExposure = 0xa0; // Size: 1, Type: char
			constexpr auto bEnablePreExposureOnlyInTheEditor = 0xa0; // Size: 1, Type: char
			constexpr auto bDefaultFeatureMotionBlur = 0xa0; // Size: 1, Type: char
			constexpr auto bDefaultFeatureLensFlare = 0xa0; // Size: 1, Type: char
			constexpr auto bTemporalUpsampling = 0xa0; // Size: 1, Type: char
			constexpr auto bSSGI = 0xa0; // Size: 1, Type: char
			constexpr auto DefaultFeatureAntiAliasing = 0xa4; // Size: 1, Type: char EAntiAliasingMethod
			constexpr auto DefaultLightUnits = 0xa5; // Size: 1, Type: uint8_t 
			constexpr auto DefaultBackBufferPixelFormat = 0xa6; // Size: 1, Type: char EDefaultBackBufferPixelFormat
			constexpr auto bRenderUnbuiltPreviewShadowsInGame = 0xa8; // Size: 1, Type: char
			constexpr auto bStencilForLODDither = 0xa8; // Size: 1, Type: char
			constexpr auto EarlyZPass = 0xac; // Size: 1, Type: char EEarlyZPass
			constexpr auto bEarlyZPassOnlyMaterialMasking = 0xb0; // Size: 1, Type: char
			constexpr auto bDBuffer = 0xb0; // Size: 1, Type: char
			constexpr auto ClearSceneMethod = 0xb4; // Size: 1, Type: char EClearSceneOptions
			constexpr auto bBasePassOutputsVelocity = 0xb8; // Size: 1, Type: char
			constexpr auto bVertexDeformationOutputsVelocity = 0xb8; // Size: 1, Type: char
			constexpr auto bSelectiveBasePassOutputs = 0xb8; // Size: 1, Type: char
			constexpr auto bDefaultParticleCutouts = 0xb8; // Size: 1, Type: char
			constexpr auto GPUSimulationTextureSizeX = 0xbc; // Size: 4, Type: int32_t
			constexpr auto GPUSimulationTextureSizeY = 0xc0; // Size: 4, Type: int32_t
			constexpr auto bGlobalClipPlane = 0xc4; // Size: 1, Type: char
			constexpr auto GBufferFormat = 0xc8; // Size: 1, Type: char EGBufferFormat
			constexpr auto bUseGPUMorphTargets = 0xcc; // Size: 1, Type: char
			constexpr auto bNvidiaAftermathEnabled = 0xcc; // Size: 1, Type: char
			constexpr auto bMultiView = 0xcc; // Size: 1, Type: char
			constexpr auto bMobilePostProcessing = 0xcc; // Size: 1, Type: char
			constexpr auto bMobileMultiView = 0xcc; // Size: 1, Type: char
			constexpr auto bMobileUseHWsRGBEncoding = 0xcc; // Size: 1, Type: char
			constexpr auto bRoundRobinOcclusion = 0xcc; // Size: 1, Type: char
			constexpr auto bODSCapture = 0xcc; // Size: 1, Type: char
			constexpr auto bMeshStreaming = 0xcd; // Size: 1, Type: char
			constexpr auto WireframeCullThreshold = 0xd0; // Size: 4, Type: float
			constexpr auto bEnableRayTracing = 0xd4; // Size: 1, Type: char
			constexpr auto bEnableRayTracingTextureLOD = 0xd4; // Size: 1, Type: char
			constexpr auto bSupportStationarySkylight = 0xd4; // Size: 1, Type: char
			constexpr auto bSupportLowQualityLightmaps = 0xd4; // Size: 1, Type: char
			constexpr auto bSupportPointLightWholeSceneShadows = 0xd4; // Size: 1, Type: char
			constexpr auto bSupportAtmosphericFog = 0xd4; // Size: 1, Type: char
			constexpr auto bSupportSkyAtmosphere = 0xd4; // Size: 1, Type: char
			constexpr auto bSupportSkyAtmosphereAffectsHeightFog = 0xd4; // Size: 1, Type: char
			constexpr auto bSupportSkinCacheShaders = 0xd5; // Size: 1, Type: char
			constexpr auto DefaultSkinCacheBehavior = 0xd8; // Size: 1, Type: uint8_t 
			constexpr auto SkinCacheSceneMemoryLimitInMB = 0xdc; // Size: 4, Type: float
			constexpr auto bMobileEnableStaticAndCSMShadowReceivers = 0xe0; // Size: 1, Type: char
			constexpr auto bMobileEnableMovableLightCSMShaderCulling = 0xe0; // Size: 1, Type: char
			constexpr auto bMobileAllowDistanceFieldShadows = 0xe0; // Size: 1, Type: char
			constexpr auto bMobileAllowMovableDirectionalLights = 0xe0; // Size: 1, Type: char
			constexpr auto MobileNumDynamicPointLights = 0xe4; // Size: 4, Type: uint32_t
			constexpr auto bMobileDynamicPointLightsUseStaticBranch = 0xe8; // Size: 1, Type: char
			constexpr auto bMobileAllowMovableSpotlights = 0xe8; // Size: 1, Type: char
			constexpr auto bMobileAllowMovableSpotlightShadows = 0xe8; // Size: 1, Type: char
			constexpr auto bSupport16BitBoneIndex = 0xe8; // Size: 1, Type: char
			constexpr auto bGPUSkinLimit2BoneInfluences = 0xe8; // Size: 1, Type: char
			constexpr auto bSupportDepthOnlyIndexBuffers = 0xe8; // Size: 1, Type: char
			constexpr auto bSupportReversedIndexBuffers = 0xe8; // Size: 1, Type: char
			constexpr auto bLPV = 0xe8; // Size: 1, Type: char
			constexpr auto bMobileAmbientOcclusion = 0xe9; // Size: 1, Type: char
			constexpr auto bUseUnlimitedBoneInfluences = 0xe9; // Size: 1, Type: char
			constexpr auto UnlimitedBonInfluencesThreshold = 0xec; // Size: 4, Type: int32_t
			constexpr auto MaxSkinBones = 0xf0; // Size: 4, Type: struct FPerPlatformInt
			constexpr auto MobilePlanarReflectionMode = 0xf4; // Size: 1, Type: char EMobilePlanarReflectionMode
			constexpr auto bMobileSupportsGen4TAA = 0xf8; // Size: 1, Type: char
			constexpr auto bStreamSkeletalMeshLODs = 0xfc; // Size: 1, Type: struct FPerPlatformBool
			constexpr auto bDiscardSkeletalMeshOptionalLODs = 0xfd; // Size: 1, Type: struct FPerPlatformBool
			constexpr auto VisualizeCalibrationColorMaterialPath = 0x100; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto VisualizeCalibrationCustomMaterialPath = 0x118; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto VisualizeCalibrationGrayscaleMaterialPath = 0x130; // Size: 24, Type: struct FSoftObjectPath
	}
} 
