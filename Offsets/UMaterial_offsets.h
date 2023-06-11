namespace offsets
{
	namespace UMaterial
	{
			constexpr auto PhysMaterial = 0x88; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto PhysMaterialMask = 0x90; // Size: 8, Type: struct UPhysicalMaterialMask*
			constexpr auto PhysicalMaterialMap[8] = 0x98; // Size: 64, Type: struct UPhysicalMaterial*
			constexpr auto Metallic = 0xd8; // Size: 20, Type: struct FScalarMaterialInput
			constexpr auto Specular = 0xec; // Size: 20, Type: struct FScalarMaterialInput
			constexpr auto Anisotropy = 0x100; // Size: 20, Type: struct FScalarMaterialInput
			constexpr auto Normal = 0x114; // Size: 20, Type: struct FVectorMaterialInput
			constexpr auto Tangent = 0x128; // Size: 20, Type: struct FVectorMaterialInput
			constexpr auto EmissiveColor = 0x13c; // Size: 20, Type: struct FColorMaterialInput
			constexpr auto MaterialDomain = 0x150; // Size: 1, Type: char EMaterialDomain
			constexpr auto BlendMode = 0x151; // Size: 1, Type: char EBlendMode
			constexpr auto DecalBlendMode = 0x152; // Size: 1, Type: char EDecalBlendMode
			constexpr auto MaterialDecalResponse = 0x153; // Size: 1, Type: char EMaterialDecalResponse
			constexpr auto ShadingModel = 0x154; // Size: 1, Type: char EMaterialShadingModel
			constexpr auto bCastDynamicShadowAsMasked = 0x155; // Size: 1, Type: char
			constexpr auto ShadingModels = 0x156; // Size: 2, Type: struct FMaterialShadingModelField
			constexpr auto OpacityMaskClipValue = 0x158; // Size: 4, Type: float
			constexpr auto WorldPositionOffset = 0x15c; // Size: 20, Type: struct FVectorMaterialInput
			constexpr auto Refraction = 0x170; // Size: 20, Type: struct FScalarMaterialInput
			constexpr auto MaterialAttributes = 0x184; // Size: 24, Type: struct FMaterialAttributesInput
			constexpr auto PixelDepthOffset = 0x19c; // Size: 20, Type: struct FScalarMaterialInput
			constexpr auto ShadingModelFromMaterialExpression = 0x1b0; // Size: 20, Type: struct FShadingModelMaterialInput
			constexpr auto bEnableSeparateTranslucency = 0x1c4; // Size: 1, Type: char
			constexpr auto bEnableResponsiveAA = 0x1c4; // Size: 1, Type: char
			constexpr auto bScreenSpaceReflections = 0x1c4; // Size: 1, Type: char
			constexpr auto bContactShadows = 0x1c4; // Size: 1, Type: char
			constexpr auto TwoSided = 0x1c4; // Size: 1, Type: char
			constexpr auto DitheredLODTransition = 0x1c4; // Size: 1, Type: char
			constexpr auto DitherOpacityMask = 0x1c4; // Size: 1, Type: char
			constexpr auto bAllowNegativeEmissiveColor = 0x1c4; // Size: 1, Type: char
			constexpr auto TranslucencyLightingMode = 0x1c5; // Size: 1, Type: char ETranslucencyLightingMode
			constexpr auto bEnableMobileSeparateTranslucency = 0x1c6; // Size: 1, Type: char
			constexpr auto NumCustomizedUVs = 0x1c8; // Size: 4, Type: int32_t
			constexpr auto TranslucencyDirectionalLightingIntensity = 0x1cc; // Size: 4, Type: float
			constexpr auto TranslucentShadowDensityScale = 0x1d0; // Size: 4, Type: float
			constexpr auto TranslucentSelfShadowDensityScale = 0x1d4; // Size: 4, Type: float
			constexpr auto TranslucentSelfShadowSecondDensityScale = 0x1d8; // Size: 4, Type: float
			constexpr auto TranslucentSelfShadowSecondOpacity = 0x1dc; // Size: 4, Type: float
			constexpr auto TranslucentBackscatteringExponent = 0x1e0; // Size: 4, Type: float
			constexpr auto TranslucentMultipleScatteringExtinction = 0x1e4; // Size: 16, Type: struct FLinearColor
			constexpr auto TranslucentShadowStartOffset = 0x1f4; // Size: 4, Type: float
			constexpr auto bDisableDepthTest = 0x1f8; // Size: 1, Type: char
			constexpr auto bWriteOnlyAlpha = 0x1f8; // Size: 1, Type: char
			constexpr auto bGenerateSphericalParticleNormals = 0x1f8; // Size: 1, Type: char
			constexpr auto bTangentSpaceNormal = 0x1f8; // Size: 1, Type: char
			constexpr auto bUseEmissiveForDynamicAreaLighting = 0x1f8; // Size: 1, Type: char
			constexpr auto bBlockGI = 0x1f8; // Size: 1, Type: char
			constexpr auto bUsedAsSpecialEngineMaterial = 0x1f8; // Size: 1, Type: char
			constexpr auto bUsedWithSkeletalMesh = 0x1f8; // Size: 1, Type: char
			constexpr auto bUsedWithEditorCompositing = 0x1f9; // Size: 1, Type: char
			constexpr auto bUsedWithParticleSprites = 0x1f9; // Size: 1, Type: char
			constexpr auto bUsedWithBeamTrails = 0x1f9; // Size: 1, Type: char
			constexpr auto bUsedWithMeshParticles = 0x1f9; // Size: 1, Type: char
			constexpr auto bUsedWithNiagaraSprites = 0x1f9; // Size: 1, Type: char
			constexpr auto bUsedWithNiagaraRibbons = 0x1f9; // Size: 1, Type: char
			constexpr auto bUsedWithNiagaraMeshParticles = 0x1f9; // Size: 1, Type: char
			constexpr auto bUsedWithGeometryCache = 0x1f9; // Size: 1, Type: char
			constexpr auto bUsedWithStaticLighting = 0x1fa; // Size: 1, Type: char
			constexpr auto bUsedWithMorphTargets = 0x1fa; // Size: 1, Type: char
			constexpr auto bUsedWithSplineMeshes = 0x1fa; // Size: 1, Type: char
			constexpr auto bUsedWithInstancedStaticMeshes = 0x1fa; // Size: 1, Type: char
			constexpr auto bUsedWithGeometryCollections = 0x1fa; // Size: 1, Type: char
			constexpr auto bUsesDistortion = 0x1fa; // Size: 1, Type: char
			constexpr auto bUsedWithClothing = 0x1fa; // Size: 1, Type: char
			constexpr auto bUsedWithWater = 0x1fc; // Size: 1, Type: char
			constexpr auto bUsedWithHairStrands = 0x1fc; // Size: 1, Type: char
			constexpr auto bUsedWithLidarPointCloud = 0x1fc; // Size: 1, Type: char
			constexpr auto bUsedWithVirtualHeightfieldMesh = 0x1fc; // Size: 1, Type: char
			constexpr auto bUsedWithUI = 0x200; // Size: 1, Type: char
			constexpr auto bAutomaticallySetUsageInEditor = 0x200; // Size: 1, Type: char
			constexpr auto bFullyRough = 0x200; // Size: 1, Type: char
			constexpr auto bUseFullPrecision = 0x200; // Size: 1, Type: char
			constexpr auto bUseLightmapDirectionality = 0x200; // Size: 1, Type: char
			constexpr auto bUseAlphaToCoverage = 0x200; // Size: 1, Type: char
			constexpr auto bForwardRenderUsePreintegratedGFForSimpleIBL = 0x204; // Size: 1, Type: char
			constexpr auto bUseHQForwardReflections = 0x208; // Size: 1, Type: char
			constexpr auto bForwardBlendsSkyLightCubemaps = 0x208; // Size: 1, Type: char
			constexpr auto bUsePlanarForwardReflections = 0x208; // Size: 1, Type: char
			constexpr auto bNormalCurvatureToRoughness = 0x208; // Size: 1, Type: char
			constexpr auto D3D11TessellationMode = 0x209; // Size: 1, Type: char EMaterialTessellationMode
			constexpr auto bEnableCrackFreeDisplacement = 0x20a; // Size: 1, Type: char
			constexpr auto bEnableAdaptiveTessellation = 0x20a; // Size: 1, Type: char
			constexpr auto AllowTranslucentCustomDepthWrites = 0x20a; // Size: 1, Type: char
			constexpr auto Wireframe = 0x20a; // Size: 1, Type: char
			constexpr auto WriteDepthToTranslucentMaterial = 0x20a; // Size: 1, Type: char
			constexpr auto ShadingRate = 0x20b; // Size: 1, Type: char EMaterialShadingRate
			constexpr auto bCanMaskedBeAssumedOpaque = 0x20c; // Size: 1, Type: char
			constexpr auto bIsMasked = 0x20c; // Size: 1, Type: char
			constexpr auto bIsPreviewMaterial = 0x20c; // Size: 1, Type: char
			constexpr auto bIsFunctionPreviewMaterial = 0x20c; // Size: 1, Type: char
			constexpr auto bUseMaterialAttributes = 0x20c; // Size: 1, Type: char
			constexpr auto bCastRayTracedShadows = 0x20c; // Size: 1, Type: char
			constexpr auto bUseTranslucencyVertexFog = 0x20c; // Size: 1, Type: char
			constexpr auto bApplyCloudFogging = 0x20c; // Size: 1, Type: char
			constexpr auto bIsSky = 0x20d; // Size: 1, Type: char
			constexpr auto bComputeFogPerPixel = 0x20d; // Size: 1, Type: char
			constexpr auto bOutputTranslucentVelocity = 0x20d; // Size: 1, Type: char
			constexpr auto bAllowDevelopmentShaderCompile = 0x20d; // Size: 1, Type: char
			constexpr auto bIsMaterialEditorStatsMaterial = 0x20d; // Size: 1, Type: char
			constexpr auto BlendableLocation = 0x20e; // Size: 1, Type: char EBlendableLocation
			constexpr auto BlendableOutputAlpha = 0x20f; // Size: 1, Type: char
			constexpr auto bEnableStencilTest = 0x20f; // Size: 1, Type: char
			constexpr auto StencilCompare = 0x210; // Size: 1, Type: char EMaterialStencilCompare
			constexpr auto StencilRefValue = 0x211; // Size: 1, Type: char
			constexpr auto RefractionMode = 0x212; // Size: 1, Type: char ERefractionMode
			constexpr auto BlendablePriority = 0x214; // Size: 4, Type: int32_t
			constexpr auto bIsBlendable = 0x218; // Size: 1, Type: char
			constexpr auto UsageFlagWarnings = 0x21c; // Size: 4, Type: uint32_t
			constexpr auto RefractionDepthBias = 0x220; // Size: 4, Type: float
			constexpr auto StateId = 0x224; // Size: 16, Type: struct FGuid
			constexpr auto MaxDisplacement = 0x234; // Size: 4, Type: float
			constexpr auto CachedExpressionData = 0x268; // Size: 472, Type: struct FMaterialCachedExpressionData
	}
} 
