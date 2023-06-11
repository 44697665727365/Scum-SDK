#pragma once 
#include <Niagara_Structs.h>
 
 
 
// Class Niagara.NiagaraDataInterfaceArrayColor
// Size: 0x60(Inherited: 0x50) 
struct UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{
	struct TArray<struct FLinearColor> ColorData;  // 0x50(0x10)

}; 



// Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
	char pad_192[8];  // 0xC0(0x8)

}; 



// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x898(Inherited: 0x78) 
struct UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
	struct TArray<struct FNiagaraMeshRendererMeshProperties> Meshes;  // 0x78(0x10)
	uint8_t  SourceMode;  // 0x88(0x1)
	uint8_t  SortMode;  // 0x89(0x1)
	char pad_138[2];  // 0x8A(0x2)
	char bOverrideMaterials : 1;  // 0x8C(0x1)
	char bSortOnlyWhenTranslucent : 1;  // 0x8C(0x1)
	char bGpuLowLatencyTranslucency : 1;  // 0x8C(0x1)
	char bSubImageBlend : 1;  // 0x8C(0x1)
	char bEnableFrustumCulling : 1;  // 0x8C(0x1)
	char bEnableCameraDistanceCulling : 1;  // 0x8C(0x1)
	char bEnableMeshFlipbook : 1;  // 0x8C(0x1)
	char pad_140_1 : 1;  // 0x8C(0x1)
	char pad_141[4];  // 0x8D(0x4)
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials;  // 0x90(0x10)
	struct FVector2D SubImageSize;  // 0xA0(0x8)
	uint8_t  FacingMode;  // 0xA8(0x1)
	char pad_169[3];  // 0xA9(0x3)
	char bLockedAxisEnable : 1;  // 0xAC(0x1)
	char pad_172_1 : 7;  // 0xAC(0x1)
	char pad_173[4];  // 0xAD(0x4)
	struct FVector LockedAxis;  // 0xB0(0xC)
	uint8_t  LockedAxisSpace;  // 0xBC(0x1)
	char pad_189[3];  // 0xBD(0x3)
	float MinCameraDistance;  // 0xC0(0x4)
	float MaxCameraDistance;  // 0xC4(0x4)
	uint32_t RendererVisibility;  // 0xC8(0x4)
	char pad_204[4];  // 0xCC(0x4)
	struct FNiagaraVariableAttributeBinding PositionBinding;  // 0xD0(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding;  // 0x128(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding;  // 0x180(0x58)
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding;  // 0x1D8(0x58)
	struct FNiagaraVariableAttributeBinding ScaleBinding;  // 0x230(0x58)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding;  // 0x288(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding;  // 0x2E0(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding;  // 0x338(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding;  // 0x390(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding;  // 0x3E8(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding;  // 0x440(0x58)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding;  // 0x498(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding;  // 0x4F0(0x58)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding;  // 0x548(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // 0x5A0(0x58)
	struct FNiagaraVariableAttributeBinding MeshIndexBinding;  // 0x5F8(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings;  // 0x650(0x10)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding;  // 0x660(0x58)
	struct FNiagaraVariableAttributeBinding PrevScaleBinding;  // 0x6B8(0x58)
	struct FNiagaraVariableAttributeBinding PrevMeshOrientationBinding;  // 0x710(0x58)
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;  // 0x768(0x58)
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding;  // 0x7C0(0x58)
	char pad_2072[104];  // 0x818(0x68)
	struct UStaticMesh* ParticleMesh;  // 0x880(0x8)
	struct FVector PivotOffset;  // 0x888(0xC)
	uint8_t  PivotOffsetSpace;  // 0x894(0x1)
	char pad_2197[3];  // 0x895(0x3)

}; 



// Class Niagara.NiagaraDataInterface
// Size: 0x38(Inherited: 0x28) 
struct UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
	char pad_40[16];  // 0x28(0x10)

}; 



// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
// Size: 0x158(Inherited: 0xD8) 
struct UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
	struct FIntVector Size;  // 0xD8(0xC)
	char ETextureRenderTargetFormat OverrideRenderTargetFormat;  // 0xE4(0x1)
	char bInheritUserParameterSettings : 1;  // 0xE5(0x1)
	char bOverrideFormat : 1;  // 0xE5(0x1)
	char pad_229_1 : 6;  // 0xE5(0x1)
	char pad_230[3];  // 0xE6(0x3)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0xE8(0x20)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets;  // 0x108(0x50)

}; 



// Class Niagara.NiagaraDataInterfaceExport
// Size: 0x68(Inherited: 0x38) 
struct UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
	struct FNiagaraUserParameterBinding CallbackHandlerParameter;  // 0x38(0x20)
	uint8_t  GPUAllocationMode;  // 0x58(0x1)
	char pad_89[3];  // 0x59(0x3)
	int32_t GPUAllocationFixedSize;  // 0x5C(0x4)
	float GPUAllocationPerParticleSize;  // 0x60(0x4)
	char pad_100[4];  // 0x64(0x4)

}; 



// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
// Size: 0x50(Inherited: 0x38) 
struct UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{
	struct UNiagaraMeshRendererProperties* MeshRenderer;  // 0x38(0x8)
	char pad_64[16];  // 0x40(0x10)

}; 



// Class Niagara.NiagaraBakerSettings
// Size: 0x118(Inherited: 0x28) 
struct UNiagaraBakerSettings : public UObject
{
	float StartSeconds;  // 0x28(0x4)
	float DurationSeconds;  // 0x2C(0x4)
	int32_t FramesPerSecond;  // 0x30(0x4)
	char bPreviewLooping : 1;  // 0x34(0x1)
	char pad_52_1 : 7;  // 0x34(0x1)
	char pad_53[4];  // 0x35(0x4)
	struct FIntPoint FramesPerDimension;  // 0x38(0x8)
	struct TArray<struct FNiagaraBakerTextureSettings> OutputTextures;  // 0x40(0x10)
	uint8_t  CameraViewportMode;  // 0x50(0x4)
	struct FVector CameraViewportLocation[7];  // 0x54(0x54)
	struct FRotator CameraViewportRotation[7];  // 0xA8(0x54)
	float CameraOrbitDistance;  // 0xFC(0x4)
	float CameraFOV;  // 0x100(0x4)
	float CameraOrthoWidth;  // 0x104(0x4)
	char bUseCameraAspectRatio : 1;  // 0x108(0x1)
	char pad_264_1 : 7;  // 0x108(0x1)
	char pad_265[4];  // 0x109(0x4)
	float CameraAspectRatio;  // 0x10C(0x4)
	char bRenderComponentOnly : 1;  // 0x110(0x1)
	char pad_272_1 : 7;  // 0x110(0x1)
	char pad_273[8];  // 0x111(0x8)

}; 



// Class Niagara.NiagaraDataInterfaceArrayFloat4
// Size: 0x60(Inherited: 0x50) 
struct UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{
	struct TArray<struct FVector4> FloatData;  // 0x50(0x10)

}; 



// Class Niagara.NiagaraDataInterfaceRWBase
// Size: 0xD8(Inherited: 0x38) 
struct UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
	struct TSet<int32_t> OutputShaderStages;  // 0x38(0x50)
	struct TSet<int32_t> IterationShaderStages;  // 0x88(0x50)

}; 



// Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size: 0x38(Inherited: 0x38) 
struct UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{

}; 



// Class Niagara.NiagaraDataInterfaceArrayInt32
// Size: 0x60(Inherited: 0x50) 
struct UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{
	struct TArray<int32_t> IntData;  // 0x50(0x10)

}; 



// Class Niagara.MovieSceneNiagaraTrack
// Size: 0xA0(Inherited: 0x90) 
struct UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x90(0x10)

}; 



// Class Niagara.MovieSceneNiagaraParameterTrack
// Size: 0xC0(Inherited: 0xA0) 
struct UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
	struct FNiagaraVariable Parameter;  // 0xA0(0x20)

}; 



// Class Niagara.NiagaraDataInterfaceCurlNoise
// Size: 0x48(Inherited: 0x38) 
struct UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
	uint32_t Seed;  // 0x38(0x4)
	char pad_60[12];  // 0x3C(0xC)

}; 



// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// Size: 0x1C0(Inherited: 0xF8) 
struct UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0xF8(0x20)
	uint8_t  OverrideBufferFormat;  // 0x118(0x1)
	char bOverrideFormat : 1;  // 0x119(0x1)
	char pad_281_1 : 7;  // 0x119(0x1)
	char pad_282[87];  // 0x11A(0x57)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets;  // 0x170(0x50)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	bool FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	bool FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
}; 



// Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size: 0x48(Inherited: 0x38) 
struct UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
	char pad_56[16];  // 0x38(0x10)

}; 



// Class Niagara.NiagaraDataInterfaceArrayBool
// Size: 0x60(Inherited: 0x50) 
struct UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{
	struct TArray<bool> BoolData;  // 0x50(0x10)

}; 



// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
	char pad_192[8];  // 0xC0(0x8)

}; 



// Class Niagara.NiagaraDataInterfaceArrayFloat2
// Size: 0x60(Inherited: 0x50) 
struct UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{
	struct TArray<struct FVector2D> FloatData;  // 0x50(0x10)

}; 



// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
	char pad_192[8];  // 0xC0(0x8)

}; 



// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
	char pad_192[8];  // 0xC0(0x8)

}; 



// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0xF8(Inherited: 0xE8) 
struct UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
	uint8_t  SectionStartBehavior;  // 0xE8(0x4)
	uint8_t  SectionEvaluateBehavior;  // 0xEC(0x4)
	uint8_t  SectionEndBehavior;  // 0xF0(0x4)
	uint8_t  AgeUpdateMode;  // 0xF4(0x1)
	char pad_245[3];  // 0xF5(0x3)

}; 



// Class Niagara.NiagaraComponentRendererProperties
// Size: 0x1B0(Inherited: 0x78) 
struct UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
	USceneComponent* ComponentType;  // 0x78(0x8)
	uint32_t ComponentCountLimit;  // 0x80(0x4)
	char pad_132[4];  // 0x84(0x4)
	struct FNiagaraVariableAttributeBinding EnabledBinding;  // 0x88(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // 0xE0(0x58)
	char pad_312_1 : 7;  // 0x138(0x1)
	bool bAssignComponentsOnParticleID : 1;  // 0x138(0x1)
	char pad_313_1 : 7;  // 0x139(0x1)
	bool bOnlyCreateComponentsOnParticleSpawn : 1;  // 0x139(0x1)
	char pad_314[2];  // 0x13A(0x2)
	int32_t RendererVisibility;  // 0x13C(0x4)
	struct USceneComponent* TemplateComponent;  // 0x140(0x8)
	struct TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings;  // 0x148(0x10)
	char pad_344[88];  // 0x158(0x58)

}; 



// Class Niagara.NiagaraEventReceiverEmitterAction
// Size: 0x28(Inherited: 0x28) 
struct UNiagaraEventReceiverEmitterAction : public UObject
{

}; 



// Class Niagara.MovieSceneNiagaraSystemTrack
// Size: 0xA8(Inherited: 0xA0) 
struct UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
	char pad_160[8];  // 0xA0(0x8)

}; 



// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size: 0xD0(Inherited: 0xC0) 
struct UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
	char pad_192[8];  // 0xC0(0x8)
	int32_t ChannelsUsed;  // 0xC8(0x4)
	char pad_204[4];  // 0xCC(0x4)

}; 



// Class Niagara.NiagaraPreviewBase
// Size: 0x220(Inherited: 0x220) 
struct ANiagaraPreviewBase : public AActor
{

	void SetSystem(struct UNiagaraSystem* InSystem); // Function Niagara.NiagaraPreviewBase.SetSystem
	void SetLabelText(struct FText& InXAxisText, struct FText& InYAxisText); // Function Niagara.NiagaraPreviewBase.SetLabelText
}; 



// Class Niagara.NiagaraActor
// Size: 0x230(Inherited: 0x220) 
struct ANiagaraActor : public AActor
{
	struct UNiagaraComponent* NiagaraComponent;  // 0x220(0x8)
	char bDestroyOnSystemFinish : 1;  // 0x228(0x1)
	char pad_552_1 : 7;  // 0x228(0x1)
	char pad_553[8];  // 0x229(0x8)

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
	void OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent); // Function Niagara.NiagaraActor.OnNiagaraSystemFinished
}; 



// Class Niagara.NiagaraComponent
// Size: 0x600(Inherited: 0x450) 
struct UNiagaraComponent : public UFXSystemComponent
{
	struct UNiagaraSystem* Asset;  // 0x450(0x8)
	uint8_t  TickBehavior;  // 0x458(0x1)
	char pad_1113[3];  // 0x459(0x3)
	int32_t RandomSeedOffset;  // 0x45C(0x4)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters;  // 0x460(0xC8)
	char bForceSolo : 1;  // 0x528(0x1)
	char bEnableGpuComputeDebug : 1;  // 0x528(0x1)
	char pad_1320_1 : 6;  // 0x528(0x1)
	char pad_1321[48];  // 0x529(0x30)
	char bAutoDestroy : 1;  // 0x558(0x1)
	char bRenderingEnabled : 1;  // 0x558(0x1)
	char bAutoManageAttachment : 1;  // 0x558(0x1)
	char bAutoAttachWeldSimulatedBodies : 1;  // 0x558(0x1)
	char pad_1368_1 : 4;  // 0x558(0x1)
	char pad_1369[4];  // 0x559(0x4)
	float MaxTimeBeforeForceUpdateTransform;  // 0x55C(0x4)
	struct TArray<struct FNiagaraMaterialOverride> EmitterMaterials;  // 0x560(0x10)
	char pad_1392[8];  // 0x570(0x8)
	struct FMulticastInlineDelegate OnSystemFinished;  // 0x578(0x10)
	struct TWeakObjectPtr<USceneComponent> AutoAttachParent;  // 0x588(0x8)
	struct FName AutoAttachSocketName;  // 0x590(0x8)
	uint8_t  AutoAttachLocationRule;  // 0x598(0x1)
	uint8_t  AutoAttachRotationRule;  // 0x599(0x1)
	uint8_t  AutoAttachScaleRule;  // 0x59A(0x1)
	char pad_1435[101];  // 0x59B(0x65)

	void SetVariableVec4(struct FName InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetVariableVec4
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariableVec3
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetVariableVec2
	void SetVariableTextureRenderTarget(struct FName InVariableName, struct UTextureRenderTarget* TextureRenderTarget); // Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	void SetVariableQuat(struct FName InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetVariableQuat
	void SetVariableObject(struct FName InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetVariableObject
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object); // Function Niagara.NiagaraComponent.SetVariableMaterial
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetVariableLinearColor
	void SetVariableInt(struct FName InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetVariableInt
	void SetVariableFloat(struct FName InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetVariableFloat
	void SetVariableBool(struct FName InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetVariableBool
	void SetVariableActor(struct FName InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetVariableActor
	void SetTickBehavior(uint8_t  NewTickBehavior); // Function Niagara.NiagaraComponent.SetTickBehavior
	void SetSeekDelta(float InSeekDelta); // Function Niagara.NiagaraComponent.SetSeekDelta
	void SetRenderingEnabled(bool bInRenderingEnabled); // Function Niagara.NiagaraComponent.SetRenderingEnabled
	void SetRandomSeedOffset(int32_t NewRandomSeedOffset); // Function Niagara.NiagaraComponent.SetRandomSeedOffset
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance); // Function Niagara.NiagaraComponent.SetPreviewLODDistance
	void SetPaused(bool bInPaused); // Function Niagara.NiagaraComponent.SetPaused
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
	void SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetNiagaraVariableObject
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableInt
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableBool
	void SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetNiagaraVariableActor
	void SetMaxSimTime(float InMaxTime); // Function Niagara.NiagaraComponent.SetMaxSimTime
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock); // Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
	void SetGpuComputeDebug(bool bEnableDebug); // Function Niagara.NiagaraComponent.SetGpuComputeDebug
	void SetForceSolo(bool bInForceSolo); // Function Niagara.NiagaraComponent.SetForceSolo
	void SetDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SetDesiredAge
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	void SetAutoDestroy(bool bInAutoDestroy); // Function Niagara.NiagaraComponent.SetAutoDestroy
	void SetAsset(struct UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters); // Function Niagara.NiagaraComponent.SetAsset
	void SetAllowScalability(bool bAllow); // Function Niagara.NiagaraComponent.SetAllowScalability
	void SetAgeUpdateMode(uint8_t  InAgeUpdateMode); // Function Niagara.NiagaraComponent.SetAgeUpdateMode
	void SeekToDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SeekToDesiredAge
	void ResetSystem(); // Function Niagara.NiagaraComponent.ResetSystem
	void ReinitializeSystem(); // Function Niagara.NiagaraComponent.ReinitializeSystem
	bool IsPaused(); // Function Niagara.NiagaraComponent.IsPaused
	void InitForPerformanceBaseline(); // Function Niagara.NiagaraComponent.InitForPerformanceBaseline
	uint8_t  GetTickBehavior(); // Function Niagara.NiagaraComponent.GetTickBehavior
	float GetSeekDelta(); // Function Niagara.NiagaraComponent.GetSeekDelta
	int32_t GetRandomSeedOffset(); // Function Niagara.NiagaraComponent.GetRandomSeedOffset
	bool GetPreviewLODDistanceEnabled(); // Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	float GetPreviewLODDistance(); // Function Niagara.NiagaraComponent.GetPreviewLODDistance
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName); // Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	float GetMaxSimTime(); // Function Niagara.NiagaraComponent.GetMaxSimTime
	bool GetLockDesiredAgeDeltaTimeToSeekDelta(); // Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
	bool GetForceSolo(); // Function Niagara.NiagaraComponent.GetForceSolo
	float GetDesiredAge(); // Function Niagara.NiagaraComponent.GetDesiredAge
	struct UNiagaraDataInterface* GetDataInterface(struct FString Name); // Function Niagara.NiagaraComponent.GetDataInterface
	struct UNiagaraSystem* GetAsset(); // Function Niagara.NiagaraComponent.GetAsset
	uint8_t  GetAgeUpdateMode(); // Function Niagara.NiagaraComponent.GetAgeUpdateMode
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulationByTime
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulation
}; 



// Class Niagara.NiagaraDataInterfaceGBuffer
// Size: 0x38(Inherited: 0x38) 
struct UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{

}; 



// Class Niagara.NiagaraEditorParametersAdapterBase
// Size: 0x28(Inherited: 0x28) 
struct UNiagaraEditorParametersAdapterBase : public UObject
{

}; 



// Class Niagara.NiagaraComponentPool
// Size: 0x80(Inherited: 0x28) 
struct UNiagaraComponentPool : public UObject
{
	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools;  // 0x28(0x50)
	char pad_120[8];  // 0x78(0x8)

}; 



// Class Niagara.NiagaraRendererProperties
// Size: 0x78(Inherited: 0x28) 
struct UNiagaraRendererProperties : public UNiagaraMergeable
{
	struct FNiagaraPlatformSet Platforms;  // 0x28(0x30)
	int32_t SortOrderHint;  // 0x58(0x4)
	uint8_t  MotionVectorSetting;  // 0x5C(0x4)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bIsEnabled : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bMotionBlurEnabled : 1;  // 0x61(0x1)
	char pad_98[22];  // 0x62(0x16)

}; 



// Class Niagara.NiagaraDataInterfaceArrayFloat
// Size: 0x60(Inherited: 0x50) 
struct UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{
	struct TArray<float> FloatData;  // 0x50(0x10)

}; 



// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// Size: 0x108(Inherited: 0x100) 
struct UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
	uint32_t MaxNeighborsPerCell;  // 0x100(0x4)
	char pad_260[4];  // 0x104(0x4)

}; 



// Class Niagara.NiagaraComponentSettings
// Size: 0x118(Inherited: 0x28) 
struct UNiagaraComponentSettings : public UObject
{
	struct TSet<struct FName> SuppressActivationList;  // 0x28(0x50)
	struct TSet<struct FName> ForceAutoPooolingList;  // 0x78(0x50)
	struct TSet<struct FNiagaraEmitterNameSettingsRef> SuppressEmitterList;  // 0xC8(0x50)

}; 



// Class Niagara.NiagaraConvertInPlaceUtilityBase
// Size: 0x28(Inherited: 0x28) 
struct UNiagaraConvertInPlaceUtilityBase : public UObject
{

}; 



// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0xC8(Inherited: 0x38) 
struct UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
	uint8_t  SourceMode;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)
	struct AActor* Source;  // 0x40(0x8)
	struct FNiagaraUserParameterBinding MeshUserParameter;  // 0x48(0x20)
	struct USkeletalMeshComponent* SourceComponent;  // 0x68(0x8)
	uint8_t  SkinningMode;  // 0x70(0x1)
	char pad_113[7];  // 0x71(0x7)
	struct TArray<struct FName> SamplingRegions;  // 0x78(0x10)
	int32_t WholeMeshLOD;  // 0x88(0x4)
	char pad_140[4];  // 0x8C(0x4)
	struct TArray<struct FName> FilteredBones;  // 0x90(0x10)
	struct TArray<struct FName> FilteredSockets;  // 0xA0(0x10)
	struct FName ExcludeBoneName;  // 0xB0(0x8)
	char bExcludeBone : 1;  // 0xB8(0x1)
	char pad_184_1 : 7;  // 0xB8(0x1)
	char pad_185[4];  // 0xB9(0x4)
	int32_t UvSetIndex;  // 0xBC(0x4)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool bRequireCurrentFrameData : 1;  // 0xC0(0x1)
	char pad_193[7];  // 0xC1(0x7)

}; 



// Class Niagara.NiagaraDataInterface2DArrayTexture
// Size: 0x50(Inherited: 0x38) 
struct UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
	struct UTexture2DArray* Texture;  // 0x38(0x8)
	char pad_64[16];  // 0x40(0x10)

}; 



// Class Niagara.NiagaraDataInterfaceArray
// Size: 0x50(Inherited: 0x38) 
struct UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{
	char pad_56[8];  // 0x38(0x8)
	int32_t MaxElements;  // 0x40(0x4)
	char pad_68[12];  // 0x44(0xC)

}; 



// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// Size: 0x50(Inherited: 0x40) 
struct UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
	int32_t Resolution;  // 0x40(0x4)
	float MinimumFrequency;  // 0x44(0x4)
	float MaximumFrequency;  // 0x48(0x4)
	float NoiseFloorDb;  // 0x4C(0x4)

}; 



// Class Niagara.NiagaraDebugHUDSettings
// Size: 0x128(Inherited: 0x28) 
struct UNiagaraDebugHUDSettings : public UObject
{
	char pad_40[32];  // 0x28(0x20)
	struct FNiagaraDebugHUDSettingsData Data;  // 0x48(0xE0)

}; 



// Class Niagara.NiagaraDataInterfaceDebugDraw
// Size: 0x38(Inherited: 0x38) 
struct UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{

}; 



// Class Niagara.NiagaraDataInterfaceArrayFloat3
// Size: 0x60(Inherited: 0x50) 
struct UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
	struct TArray<struct FVector> FloatData;  // 0x50(0x10)

}; 



// Class Niagara.NiagaraDataInterfaceArrayQuat
// Size: 0x60(Inherited: 0x50) 
struct UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
	struct TArray<struct FQuat> QuatData;  // 0x50(0x10)

}; 



// Class Niagara.NiagaraDataInterfaceGrid3DCollection
// Size: 0x180(Inherited: 0x100) 
struct UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
	int32_t NumAttributes;  // 0x100(0x4)
	char pad_260[4];  // 0x104(0x4)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x108(0x20)
	uint8_t  OverrideBufferFormat;  // 0x128(0x1)
	char bOverrideFormat : 1;  // 0x129(0x1)
	char pad_297_1 : 7;  // 0x129(0x1)
	char pad_298[87];  // 0x12A(0x57)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	bool FillVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	bool FillRawVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
}; 



// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{

	void SetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
	void SetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector4& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
	void SetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector4>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	void SetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector2D& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
	void SetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector2D>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	void SetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	void SetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FQuat& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
	void SetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FQuat>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	void SetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
	void SetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<int32_t>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	void SetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
	void SetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<float>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	void SetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FLinearColor& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
	void SetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FLinearColor>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	void SetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
	void SetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<bool>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	struct FVector GetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
	struct FVector4 GetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
	struct TArray<struct FVector4> GetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	struct FVector2D GetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
	struct TArray<struct FVector2D> GetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	struct TArray<struct FVector> GetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	struct FQuat GetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
	struct TArray<struct FQuat> GetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	int32_t GetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
	struct TArray<int32_t> GetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	float GetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
	struct TArray<float> GetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	struct FLinearColor GetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
	struct TArray<struct FLinearColor> GetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	bool GetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
	struct TArray<bool> GetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
}; 



// Class Niagara.NiagaraDataInterfaceAudioSubmix
// Size: 0x40(Inherited: 0x38) 
struct UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
	struct USoundSubmix* Submix;  // 0x38(0x8)

}; 



// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// Size: 0x48(Inherited: 0x38) 
struct UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
	struct USoundSubmix* Submix;  // 0x38(0x8)
	int32_t Resolution;  // 0x40(0x4)
	float ScopeInMilliseconds;  // 0x44(0x4)

}; 



// Class Niagara.NiagaraDataInterfaceAudioPlayer
// Size: 0x70(Inherited: 0x38) 
struct UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
	struct USoundBase* SoundToPlay;  // 0x38(0x8)
	struct USoundAttenuation* Attenuation;  // 0x40(0x8)
	struct USoundConcurrency* Concurrency;  // 0x48(0x8)
	struct TArray<struct FName> ParameterNames;  // 0x50(0x10)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bLimitPlaysPerTick : 1;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	int32_t MaxPlaysPerTick;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bStopWhenComponentIsDestroyed : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

}; 



// Class Niagara.NiagaraDataInterfaceCurve
// Size: 0xF0(Inherited: 0x70) 
struct UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
	struct FRichCurve Curve;  // 0x70(0x80)

}; 



// Class Niagara.NiagaraDataInterfaceCamera
// Size: 0x40(Inherited: 0x38) 
struct UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
	int32_t PlayerControllerIndex;  // 0x38(0x4)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool bRequireCurrentFrameData : 1;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)

}; 



// Class Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x70(Inherited: 0x38) 
struct UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
	struct TArray<float> ShaderLUT;  // 0x38(0x10)
	float LUTMinTime;  // 0x48(0x4)
	float LUTMaxTime;  // 0x4C(0x4)
	float LUTInvTimeRange;  // 0x50(0x4)
	float LUTNumSamplesMinusOne;  // 0x54(0x4)
	char bUseLUT : 1;  // 0x58(0x1)
	char bExposeCurve : 1;  // 0x58(0x1)
	char pad_88_1 : 6;  // 0x58(0x1)
	char pad_89[4];  // 0x59(0x4)
	struct FName ExposedName;  // 0x5C(0x8)
	char pad_100[4];  // 0x64(0x4)
	struct UTexture2D* ExposedTexture;  // 0x68(0x8)

}; 



// Class Niagara.NiagaraDataInterfaceColorCurve
// Size: 0x270(Inherited: 0x70) 
struct UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
	struct FRichCurve RedCurve;  // 0x70(0x80)
	struct FRichCurve GreenCurve;  // 0xF0(0x80)
	struct FRichCurve BlueCurve;  // 0x170(0x80)
	struct FRichCurve AlphaCurve;  // 0x1F0(0x80)

}; 



// Class Niagara.NiagaraDataInterfaceParticleRead
// Size: 0xE8(Inherited: 0xD8) 
struct UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{
	struct FString EmitterName;  // 0xD8(0x10)

}; 



// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
// Size: 0x150(Inherited: 0xD8) 
struct UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
	struct FIntPoint Size;  // 0xD8(0x8)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0xE0(0x20)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets;  // 0x100(0x50)

}; 



// Class Niagara.NiagaraEmitter
// Size: 0x2A0(Inherited: 0x28) 
struct UNiagaraEmitter : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bLocalSpace : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool bDeterminism : 1;  // 0x29(0x1)
	char pad_42[2];  // 0x2A(0x2)
	int32_t randomSeed;  // 0x2C(0x4)
	uint8_t  AllocationMode;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	int32_t PreAllocationCount;  // 0x34(0x4)
	struct FNiagaraEmitterScriptProperties UpdateScriptProps;  // 0x38(0x28)
	struct FNiagaraEmitterScriptProperties SpawnScriptProps;  // 0x60(0x28)
	uint8_t  SimTarget;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	struct FBox FixedBounds;  // 0x8C(0x1C)
	int32_t MinDetailLevel;  // 0xA8(0x4)
	int32_t MaxDetailLevel;  // 0xAC(0x4)
	struct FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides;  // 0xB0(0x14)
	char pad_196[4];  // 0xC4(0x4)
	struct FNiagaraPlatformSet Platforms;  // 0xC8(0x30)
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;  // 0xF8(0x10)
	char bInterpolatedSpawning : 1;  // 0x108(0x1)
	char bFixedBounds : 1;  // 0x108(0x1)
	char bUseMinDetailLevel : 1;  // 0x108(0x1)
	char bUseMaxDetailLevel : 1;  // 0x108(0x1)
	char bOverrideGlobalSpawnCountScale : 1;  // 0x108(0x1)
	char bRequiresPersistentIDs : 1;  // 0x108(0x1)
	char bCombineEventSpawn : 1;  // 0x108(0x1)
	char pad_264_1 : 1;  // 0x108(0x1)
	char pad_265[4];  // 0x109(0x4)
	float MaxDeltaTimePerTick;  // 0x10C(0x4)
	uint32_t DefaultShaderStageIndex;  // 0x110(0x4)
	uint32_t MaxUpdateIterations;  // 0x114(0x4)
	struct TSet<uint32_t> SpawnStages;  // 0x118(0x50)
	char bSimulationStagesEnabled : 1;  // 0x168(0x1)
	char bDeprecatedShaderStagesEnabled : 1;  // 0x168(0x1)
	char bLimitDeltaTime : 1;  // 0x168(0x1)
	char pad_360_1 : 5;  // 0x168(0x1)
	char pad_361[8];  // 0x169(0x8)
	struct FString UniqueEmitterName;  // 0x170(0x10)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties;  // 0x180(0x10)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps;  // 0x190(0x10)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages;  // 0x1A0(0x10)
	struct UNiagaraScript* GPUComputeScript;  // 0x1B0(0x8)
	struct TArray<struct FName> SharedEventGeneratorIds;  // 0x1B8(0x10)
	char pad_456[216];  // 0x1C8(0xD8)

}; 



// Class Niagara.NiagaraDataInterfaceCubeTexture
// Size: 0x48(Inherited: 0x38) 
struct UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{
	struct UTextureCube* Texture;  // 0x38(0x8)
	char pad_64[8];  // 0x40(0x8)

}; 



// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0x60(Inherited: 0x38) 
struct UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
	struct AActor* Source;  // 0x38(0x8)
	struct FNiagaraUserParameterBinding SplineUserParameter;  // 0x40(0x20)

}; 



// Class Niagara.NiagaraDataInterfaceVectorField
// Size: 0x48(Inherited: 0x38) 
struct UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
	struct UVectorField* Field;  // 0x38(0x8)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bTileX : 1;  // 0x40(0x1)
	char pad_65_1 : 7;  // 0x41(0x1)
	bool bTileY : 1;  // 0x41(0x1)
	char pad_66_1 : 7;  // 0x42(0x1)
	bool bTileZ : 1;  // 0x42(0x1)
	char pad_67[5];  // 0x43(0x5)

}; 



// Class Niagara.NiagaraDataInterfaceOcclusion
// Size: 0x38(Inherited: 0x38) 
struct UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{

}; 



// Class Niagara.NiagaraDataInterfaceGrid3D
// Size: 0x100(Inherited: 0xD8) 
struct UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
	struct FIntVector NumCells;  // 0xD8(0xC)
	float CellSize;  // 0xE4(0x4)
	int32_t NumCellsMaxAxis;  // 0xE8(0x4)
	uint8_t  SetResolutionMethod;  // 0xEC(0x4)
	struct FVector WorldBBoxSize;  // 0xF0(0xC)
	char pad_252[4];  // 0xFC(0x4)

}; 



// Class Niagara.NiagaraParticleCallbackHandler
// Size: 0x28(Inherited: 0x28) 
struct UNiagaraParticleCallbackHandler : public UInterface
{

	void ReceiveParticleData(struct TArray<struct FBasicParticleData>& Data, struct UNiagaraSystem* NiagaraSystem); // Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
}; 



// Class Niagara.NiagaraDataInterfaceGrid2D
// Size: 0xF8(Inherited: 0xD8) 
struct UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
	int32_t NumCellsX;  // 0xD8(0x4)
	int32_t NumCellsY;  // 0xDC(0x4)
	int32_t NumCellsMaxAxis;  // 0xE0(0x4)
	int32_t NumAttributes;  // 0xE4(0x4)
	char pad_232_1 : 7;  // 0xE8(0x1)
	bool SetGridFromMaxAxis : 1;  // 0xE8(0x1)
	char pad_233[3];  // 0xE9(0x3)
	struct FVector2D WorldBBoxSize;  // 0xEC(0x8)
	char pad_244[4];  // 0xF4(0x4)

}; 



// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// Size: 0x168(Inherited: 0xF8) 
struct UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{
	struct FString EmitterName;  // 0xF8(0x10)
	struct FString DIName;  // 0x108(0x10)
	char pad_280[80];  // 0x118(0x50)

}; 



// Class Niagara.NiagaraDataInterfaceLandscape
// Size: 0x58(Inherited: 0x38) 
struct UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
	struct AActor* SourceLandscape;  // 0x38(0x8)
	uint8_t  SourceMode;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials;  // 0x48(0x10)

}; 



// Class Niagara.NiagaraDataInterfacePlatformSet
// Size: 0x68(Inherited: 0x38) 
struct UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
	struct FNiagaraPlatformSet Platforms;  // 0x38(0x30)

}; 



// Class Niagara.NiagaraDataInterfaceRenderTarget2D
// Size: 0x1A8(Inherited: 0xD8) 
struct UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
	struct FIntPoint Size;  // 0xD8(0x8)
	uint8_t  MipMapGeneration;  // 0xE0(0x1)
	char ETextureRenderTargetFormat OverrideRenderTargetFormat;  // 0xE1(0x1)
	char bInheritUserParameterSettings : 1;  // 0xE2(0x1)
	char bOverrideFormat : 1;  // 0xE2(0x1)
	char pad_226_1 : 6;  // 0xE2(0x1)
	char pad_227[6];  // 0xE3(0x6)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0xE8(0x20)
	char pad_264[80];  // 0x108(0x50)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets;  // 0x158(0x50)

}; 



// Class Niagara.NiagaraDataInterfaceRenderTargetCube
// Size: 0x150(Inherited: 0xD8) 
struct UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{
	int32_t Size;  // 0xD8(0x4)
	char ETextureRenderTargetFormat OverrideRenderTargetFormat;  // 0xDC(0x1)
	char bInheritUserParameterSettings : 1;  // 0xDD(0x1)
	char bOverrideFormat : 1;  // 0xDD(0x1)
	char pad_221_1 : 6;  // 0xDD(0x1)
	char pad_222[3];  // 0xDE(0x3)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0xE0(0x20)
	struct TMap<uint64_t, struct UTextureRenderTargetCube*> ManagedRenderTargets;  // 0x100(0x50)

}; 



// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
// Size: 0x158(Inherited: 0xD8) 
struct UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
	struct FIntVector Size;  // 0xD8(0xC)
	char ETextureRenderTargetFormat OverrideRenderTargetFormat;  // 0xE4(0x1)
	char bInheritUserParameterSettings : 1;  // 0xE5(0x1)
	char bOverrideFormat : 1;  // 0xE5(0x1)
	char pad_229_1 : 6;  // 0xE5(0x1)
	char pad_230[3];  // 0xE6(0x3)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0xE8(0x20)
	struct TMap<uint64_t, struct UTextureRenderTargetVolume*> ManagedRenderTargets;  // 0x108(0x50)

}; 



// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x88(Inherited: 0x38) 
struct UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
	uint8_t  SourceMode;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)
	struct UStaticMesh* DefaultMesh;  // 0x40(0x8)
	struct AActor* Source;  // 0x48(0x8)
	struct UStaticMeshComponent* SourceComponent;  // 0x50(0x8)
	struct FNDIStaticMeshSectionFilter SectionFilter;  // 0x58(0x10)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bUsePhysicsBodyVelocity : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)
	struct TArray<struct FName> FilteredSockets;  // 0x70(0x10)
	char pad_128[8];  // 0x80(0x8)

}; 



// Class Niagara.NiagaraDataInterfaceTexture
// Size: 0x48(Inherited: 0x38) 
struct UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
	struct UTexture* Texture;  // 0x38(0x8)
	char pad_64[8];  // 0x40(0x8)

}; 



// Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size: 0x170(Inherited: 0x70) 
struct UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
	struct FRichCurve XCurve;  // 0x70(0x80)
	struct FRichCurve YCurve;  // 0xF0(0x80)

}; 



// Class Niagara.NiagaraFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{

	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, char EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, uint8_t  PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, uint8_t  PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	void SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	void SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTextureObject
	void SetTexture2DArrayObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture2DArray* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
	void SetSkeletalMeshDataInterfaceSamplingRegions(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& SamplingRegions); // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection); // Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
}; 



// Class Niagara.NiagaraDataInterfaceVector4Curve
// Size: 0x270(Inherited: 0x70) 
struct UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
	struct FRichCurve XCurve;  // 0x70(0x80)
	struct FRichCurve YCurve;  // 0xF0(0x80)
	struct FRichCurve ZCurve;  // 0x170(0x80)
	struct FRichCurve WCurve;  // 0x1F0(0x80)

}; 



// Class Niagara.NiagaraDataInterfaceVectorCurve
// Size: 0x1F0(Inherited: 0x70) 
struct UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
	struct FRichCurve XCurve;  // 0x70(0x80)
	struct FRichCurve YCurve;  // 0xF0(0x80)
	struct FRichCurve ZCurve;  // 0x170(0x80)

}; 



// Class Niagara.NiagaraDataInterfaceVolumeTexture
// Size: 0x50(Inherited: 0x38) 
struct UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
	struct UVolumeTexture* Texture;  // 0x38(0x8)
	char pad_64[16];  // 0x40(0x10)

}; 



// Class Niagara.NiagaraEditorDataBase
// Size: 0x28(Inherited: 0x28) 
struct UNiagaraEditorDataBase : public UObject
{

}; 



// Class Niagara.NiagaraSignificanceHandler
// Size: 0x28(Inherited: 0x28) 
struct UNiagaraSignificanceHandler : public UObject
{

}; 



// Class Niagara.NiagaraSignificanceHandlerDistance
// Size: 0x28(Inherited: 0x28) 
struct UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{

}; 



// Class Niagara.NiagaraSignificanceHandlerAge
// Size: 0x28(Inherited: 0x28) 
struct UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{

}; 



// Class Niagara.NiagaraEffectType
// Size: 0x98(Inherited: 0x28) 
struct UNiagaraEffectType : public UObject
{
	uint8_t  UpdateFrequency;  // 0x28(0x4)
	uint8_t  CullReaction;  // 0x2C(0x4)
	struct UNiagaraSignificanceHandler* SignificanceHandler;  // 0x30(0x8)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;  // 0x38(0x10)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;  // 0x48(0x10)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;  // 0x58(0x10)
	char pad_104[8];  // 0x68(0x8)
	struct UNiagaraBaselineController* PerformanceBaselineController;  // 0x70(0x8)
	struct FNiagaraPerfBaselineStats PerfBaselineStats;  // 0x78(0x10)
	struct FGuid PerfBaselineVersion;  // 0x88(0x10)

}; 



// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size: 0x30(Inherited: 0x28) 
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
	uint32_t NumParticles;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 



// Class Niagara.NiagaraLightRendererProperties
// Size: 0x330(Inherited: 0x78) 
struct UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
	char bUseInverseSquaredFalloff : 1;  // 0x78(0x1)
	char bAffectsTranslucency : 1;  // 0x78(0x1)
	char bAlphaScalesBrightness : 1;  // 0x78(0x1)
	char pad_120_1 : 5;  // 0x78(0x1)
	char pad_121[4];  // 0x79(0x4)
	float RadiusScale;  // 0x7C(0x4)
	float DefaultExponent;  // 0x80(0x4)
	struct FVector ColorAdd;  // 0x84(0xC)
	int32_t RendererVisibility;  // 0x90(0x4)
	char pad_148[4];  // 0x94(0x4)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;  // 0x98(0x58)
	struct FNiagaraVariableAttributeBinding LightExponentBinding;  // 0xF0(0x58)
	struct FNiagaraVariableAttributeBinding PositionBinding;  // 0x148(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding;  // 0x1A0(0x58)
	struct FNiagaraVariableAttributeBinding RadiusBinding;  // 0x1F8(0x58)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding;  // 0x250(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // 0x2A8(0x58)
	char pad_768[48];  // 0x300(0x30)

}; 



// Class Niagara.NiagaraMessageDataBase
// Size: 0x28(Inherited: 0x28) 
struct UNiagaraMessageDataBase : public UObject
{

}; 



// Class Niagara.NiagaraParameterCollectionInstance
// Size: 0xE0(Inherited: 0x28) 
struct UNiagaraParameterCollectionInstance : public UObject
{
	struct UNiagaraParameterCollection* Collection;  // 0x28(0x8)
	struct TArray<struct FNiagaraVariable> OverridenParameters;  // 0x30(0x10)
	struct FNiagaraParameterStore ParameterStorage;  // 0x40(0x78)
	char pad_184[40];  // 0xB8(0x28)

	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	void SetVector4Parameter(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	void SetQuatParameter(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	void SetIntParameter(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	void SetFloatParameter(struct FString InVariableName, float InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	void SetBoolParameter(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	struct FVector GetVectorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	struct FVector4 GetVector4Parameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	struct FVector2D GetVector2DParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	struct FQuat GetQuatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	int32_t GetIntParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	float GetFloatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	struct FLinearColor GetColorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	bool GetBoolParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
}; 



// Class Niagara.NiagaraParameterCollection
// Size: 0x60(Inherited: 0x28) 
struct UNiagaraParameterCollection : public UObject
{
	struct FName Namespace;  // 0x28(0x8)
	struct TArray<struct FNiagaraVariable> parameters;  // 0x30(0x10)
	struct UMaterialParameterCollection* SourceMaterialCollection;  // 0x40(0x8)
	struct UNiagaraParameterCollectionInstance* DefaultInstance;  // 0x48(0x8)
	struct FGuid CompileId;  // 0x50(0x10)

}; 



// Class Niagara.NiagaraParameterDefinitionsBase
// Size: 0x28(Inherited: 0x28) 
struct UNiagaraParameterDefinitionsBase : public UObject
{

}; 



// Class Niagara.NiagaraBaselineController
// Size: 0x68(Inherited: 0x28) 
struct UNiagaraBaselineController : public UObject
{
	float TestDuration;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct UNiagaraEffectType* EffectType;  // 0x30(0x8)
	struct ANiagaraPerfBaselineActor* Owner;  // 0x38(0x8)
	struct TSoftObjectPtr<UNiagaraSystem> System;  // 0x40(0x28)

	bool OnTickTest(); // Function Niagara.NiagaraBaselineController.OnTickTest
	void OnOwnerTick(float DeltaTime); // Function Niagara.NiagaraBaselineController.OnOwnerTick
	void OnEndTest(struct FNiagaraPerfBaselineStats stats); // Function Niagara.NiagaraBaselineController.OnEndTest
	void OnBeginTest(); // Function Niagara.NiagaraBaselineController.OnBeginTest
	struct UNiagaraSystem* GetSystem(); // Function Niagara.NiagaraBaselineController.GetSystem
}; 



// Class Niagara.NiagaraBaselineController_Basic
// Size: 0x80(Inherited: 0x68) 
struct UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{
	int32_t NumInstances;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)
	struct TArray<struct UNiagaraComponent*> SpawnedComponents;  // 0x70(0x10)

}; 



// Class Niagara.NiagaraPerfBaselineActor
// Size: 0x230(Inherited: 0x220) 
struct ANiagaraPerfBaselineActor : public AActor
{
	struct UNiagaraBaselineController* Controller;  // 0x220(0x8)
	struct UTextRenderComponent* Label;  // 0x228(0x8)

}; 



// Class Niagara.NiagaraPrecompileContainer
// Size: 0x40(Inherited: 0x28) 
struct UNiagaraPrecompileContainer : public UObject
{
	struct TArray<struct UNiagaraScript*> Scripts;  // 0x28(0x10)
	struct UNiagaraSystem* System;  // 0x38(0x8)

}; 



// Class Niagara.NiagaraPreviewAxis
// Size: 0x28(Inherited: 0x28) 
struct UNiagaraPreviewAxis : public UObject
{

	int32_t Num(); // Function Niagara.NiagaraPreviewAxis.Num
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString& OutLabelText); // Function Niagara.NiagaraPreviewAxis.ApplyToPreview
}; 



// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size: 0x38(Inherited: 0x28) 
struct UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
	struct FName Param;  // 0x28(0x8)
	int32_t Count;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 



// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size: 0x40(Inherited: 0x38) 
struct UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
	int32_t Min;  // 0x38(0x4)
	int32_t Max;  // 0x3C(0x4)

}; 



// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size: 0x40(Inherited: 0x38) 
struct UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
	float Min;  // 0x38(0x4)
	float Max;  // 0x3C(0x4)

}; 



// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size: 0x48(Inherited: 0x38) 
struct UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
	struct FVector2D Min;  // 0x38(0x8)
	struct FVector2D Max;  // 0x40(0x8)

}; 



// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size: 0x50(Inherited: 0x38) 
struct UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
	struct FVector Min;  // 0x38(0xC)
	struct FVector Max;  // 0x44(0xC)

}; 



// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size: 0x60(Inherited: 0x38) 
struct UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
	char pad_56[8];  // 0x38(0x8)
	struct FVector4 Min;  // 0x40(0x10)
	struct FVector4 Max;  // 0x50(0x10)

}; 



// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size: 0x58(Inherited: 0x38) 
struct UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
	struct FLinearColor Min;  // 0x38(0x10)
	struct FLinearColor Max;  // 0x48(0x10)

}; 



// Class Niagara.NiagaraPreviewGrid
// Size: 0x270(Inherited: 0x220) 
struct ANiagaraPreviewGrid : public AActor
{
	struct UNiagaraSystem* System;  // 0x220(0x8)
	uint8_t  ResetMode;  // 0x228(0x1)
	char pad_553[7];  // 0x229(0x7)
	struct UNiagaraPreviewAxis* PreviewAxisX;  // 0x230(0x8)
	struct UNiagaraPreviewAxis* PreviewAxisY;  // 0x238(0x8)
	ANiagaraPreviewBase* PreviewClass;  // 0x240(0x8)
	float SpacingX;  // 0x248(0x4)
	float SpacingY;  // 0x24C(0x4)
	int32_t NumX;  // 0x250(0x4)
	int32_t NumY;  // 0x254(0x4)
	struct TArray<struct UChildActorComponent*> PreviewComponents;  // 0x258(0x10)
	char pad_616[8];  // 0x268(0x8)

	void SetPaused(bool bPaused); // Function Niagara.NiagaraPreviewGrid.SetPaused
	void GetPreviews(struct TArray<struct UNiagaraComponent*>& OutPreviews); // Function Niagara.NiagaraPreviewGrid.GetPreviews
	void DeactivatePreviews(); // Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
	void ActivatePreviews(bool bReset); // Function Niagara.NiagaraPreviewGrid.ActivatePreviews
}; 



// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x860(Inherited: 0x78) 
struct UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
	struct UMaterialInterface* Material;  // 0x78(0x8)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding;  // 0x80(0x20)
	uint8_t  FacingMode;  // 0xA0(0x1)
	char pad_161[3];  // 0xA1(0x3)
	struct FNiagaraRibbonUVSettings UV0Settings;  // 0xA4(0x24)
	struct FNiagaraRibbonUVSettings UV1Settings;  // 0xC8(0x24)
	uint8_t  DrawDirection;  // 0xEC(0x1)
	uint8_t  Shape;  // 0xED(0x1)
	char pad_238_1 : 7;  // 0xEE(0x1)
	bool bEnableAccurateGeometry : 1;  // 0xEE(0x1)
	char pad_239[1];  // 0xEF(0x1)
	int32_t WidthSegmentationCount;  // 0xF0(0x4)
	int32_t MultiPlaneCount;  // 0xF4(0x4)
	int32_t TubeSubdivisions;  // 0xF8(0x4)
	char pad_252[4];  // 0xFC(0x4)
	struct TArray<struct FNiagaraRibbonShapeCustomVertex> CustomVertices;  // 0x100(0x10)
	float CurveTension;  // 0x110(0x4)
	uint8_t  TessellationMode;  // 0x114(0x1)
	char pad_277[3];  // 0x115(0x3)
	int32_t TessellationFactor;  // 0x118(0x4)
	char pad_284_1 : 7;  // 0x11C(0x1)
	bool bUseConstantFactor : 1;  // 0x11C(0x1)
	char pad_285[3];  // 0x11D(0x3)
	float TessellationAngle;  // 0x120(0x4)
	char pad_292_1 : 7;  // 0x124(0x1)
	bool bScreenSpaceTessellation : 1;  // 0x124(0x1)
	char pad_293[3];  // 0x125(0x3)
	struct FNiagaraVariableAttributeBinding PositionBinding;  // 0x128(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding;  // 0x180(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding;  // 0x1D8(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding;  // 0x230(0x58)
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding;  // 0x288(0x58)
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding;  // 0x2E0(0x58)
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding;  // 0x338(0x58)
	struct FNiagaraVariableAttributeBinding RibbonIdBinding;  // 0x390(0x58)
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding;  // 0x3E8(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding;  // 0x440(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding;  // 0x498(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding;  // 0x4F0(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding;  // 0x548(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding;  // 0x5A0(0x58)
	struct FNiagaraVariableAttributeBinding RibbonUVDistance;  // 0x5F8(0x58)
	struct FNiagaraVariableAttributeBinding U0OverrideBinding;  // 0x650(0x58)
	struct FNiagaraVariableAttributeBinding V0RangeOverrideBinding;  // 0x6A8(0x58)
	struct FNiagaraVariableAttributeBinding U1OverrideBinding;  // 0x700(0x58)
	struct FNiagaraVariableAttributeBinding V1RangeOverrideBinding;  // 0x758(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings;  // 0x7B0(0x10)
	char pad_1984[160];  // 0x7C0(0xA0)

}; 



// Class Niagara.NiagaraScript
// Size: 0x2E0(Inherited: 0x28) 
struct UNiagaraScript : public UNiagaraScriptBase
{
	uint8_t  Usage;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	struct FGuid UsageId;  // 0x2C(0x10)
	char pad_60[4];  // 0x3C(0x4)
	struct FNiagaraParameterStore RapidIterationParameters;  // 0x40(0x78)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;  // 0xB8(0x98)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters;  // 0x150(0x10)
	struct FNiagaraVMExecutableDataId CachedScriptVMId;  // 0x160(0x58)
	char pad_440[16];  // 0x1B8(0x10)
	struct FNiagaraVMExecutableData CachedScriptVM;  // 0x1C8(0xF0)
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences;  // 0x2B8(0x10)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;  // 0x2C8(0x10)
	char pad_728[8];  // 0x2D8(0x8)

	void RaiseOnGPUCompilationComplete(); // Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
}; 



// Class Niagara.NiagaraScriptSourceBase
// Size: 0x48(Inherited: 0x28) 
struct UNiagaraScriptSourceBase : public UObject
{
	char pad_40[32];  // 0x28(0x20)

}; 



// Class Niagara.NiagaraSettings
// Size: 0xC8(Inherited: 0x38) 
struct UNiagaraSettings : public UDeveloperSettings
{
	struct FSoftObjectPath DefaultEffectType;  // 0x38(0x18)
	struct TArray<struct FText> QualityLevels;  // 0x50(0x10)
	struct TMap<struct FString, struct FText> ComponentRendererWarningsPerClass;  // 0x60(0x50)
	char ETextureRenderTargetFormat DefaultRenderTargetFormat;  // 0xB0(0x1)
	uint8_t  DefaultGridFormat;  // 0xB1(0x1)
	char pad_178[2];  // 0xB2(0x2)
	uint8_t  DefaultRendererMotionVectorSetting;  // 0xB4(0x4)
	char ENDISkelMesh_GpuMaxInfluences NDISkelMesh_GpuMaxInfluences;  // 0xB8(0x1)
	char ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat;  // 0xB9(0x1)
	char ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat;  // 0xBA(0x1)
	char pad_187[5];  // 0xBB(0x5)
	struct UNiagaraEffectType* DefaultEffectTypePtr;  // 0xC0(0x8)

}; 



// Class Niagara.NiagaraSimulationStageBase
// Size: 0x40(Inherited: 0x28) 
struct UNiagaraSimulationStageBase : public UNiagaraMergeable
{
	struct UNiagaraScript* Script;  // 0x28(0x8)
	struct FName SimulationStageName;  // 0x30(0x8)
	char bEnabled : 1;  // 0x38(0x1)
	char pad_56_1 : 7;  // 0x38(0x1)
	char pad_57[8];  // 0x39(0x8)

}; 



// Class Niagara.NiagaraSimulationStageGeneric
// Size: 0x70(Inherited: 0x40) 
struct UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
	uint8_t  IterationSource;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	int32_t Iterations;  // 0x44(0x4)
	char bSpawnOnly : 1;  // 0x48(0x1)
	char bDisablePartialParticleUpdate : 1;  // 0x48(0x1)
	char pad_72_1 : 6;  // 0x48(0x1)
	char pad_73[8];  // 0x49(0x8)
	struct FNiagaraVariableDataInterfaceBinding DataInterface;  // 0x50(0x20)

}; 



// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0xAB0(Inherited: 0x78) 
struct UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
	struct UMaterialInterface* Material;  // 0x78(0x8)
	uint8_t  SourceMode;  // 0x80(0x1)
	char pad_129[7];  // 0x81(0x7)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding;  // 0x88(0x20)
	uint8_t  Alignment;  // 0xA8(0x1)
	uint8_t  FacingMode;  // 0xA9(0x1)
	char pad_170[2];  // 0xAA(0x2)
	struct FVector2D PivotInUVSpace;  // 0xAC(0x8)
	uint8_t  SortMode;  // 0xB4(0x1)
	char pad_181[3];  // 0xB5(0x3)
	struct FVector2D SubImageSize;  // 0xB8(0x8)
	char bSubImageBlend : 1;  // 0xC0(0x1)
	char bRemoveHMDRollInVR : 1;  // 0xC0(0x1)
	char bSortOnlyWhenTranslucent : 1;  // 0xC0(0x1)
	char bGpuLowLatencyTranslucency : 1;  // 0xC0(0x1)
	char pad_192_1 : 4;  // 0xC0(0x1)
	char pad_193[4];  // 0xC1(0x4)
	float MinFacingCameraBlendDistance;  // 0xC4(0x4)
	float MaxFacingCameraBlendDistance;  // 0xC8(0x4)
	char bEnableCameraDistanceCulling : 1;  // 0xCC(0x1)
	char pad_204_1 : 7;  // 0xCC(0x1)
	char pad_205[4];  // 0xCD(0x4)
	float MinCameraDistance;  // 0xD0(0x4)
	float MaxCameraDistance;  // 0xD4(0x4)
	uint32_t RendererVisibility;  // 0xD8(0x4)
	char pad_220[4];  // 0xDC(0x4)
	struct FNiagaraVariableAttributeBinding PositionBinding;  // 0xE0(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding;  // 0x138(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding;  // 0x190(0x58)
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding;  // 0x1E8(0x58)
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding;  // 0x240(0x58)
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding;  // 0x298(0x58)
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding;  // 0x2F0(0x58)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding;  // 0x348(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding;  // 0x3A0(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding;  // 0x3F8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding;  // 0x450(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding;  // 0x4A8(0x58)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding;  // 0x500(0x58)
	struct FNiagaraVariableAttributeBinding UVScaleBinding;  // 0x558(0x58)
	struct FNiagaraVariableAttributeBinding PivotOffsetBinding;  // 0x5B0(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding;  // 0x608(0x58)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding;  // 0x660(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding;  // 0x6B8(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // 0x710(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings;  // 0x768(0x10)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding;  // 0x778(0x58)
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding;  // 0x7D0(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteRotationBinding;  // 0x828(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteSizeBinding;  // 0x880(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteFacingBinding;  // 0x8D8(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding;  // 0x930(0x58)
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;  // 0x988(0x58)
	struct FNiagaraVariableAttributeBinding PrevPivotOffsetBinding;  // 0x9E0(0x58)
	char pad_2616[120];  // 0xA38(0x78)

}; 



// Class Niagara.NiagaraSystem
// Size: 0x498(Inherited: 0x30) 
struct UNiagaraSystem : public UFXSystemAsset
{
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bDumpDebugSystemInfo : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool bDumpDebugEmitterInfo : 1;  // 0x31(0x1)
	char pad_50[1];  // 0x32(0x1)
	char pad_51_1 : 7;  // 0x33(0x1)
	bool bRequireCurrentFrameData : 1;  // 0x33(0x1)
	char bFixedBounds : 1;  // 0x34(0x1)
	char pad_52_1 : 7;  // 0x34(0x1)
	char pad_53[4];  // 0x35(0x4)
	struct UNiagaraEffectType* EffectType;  // 0x38(0x8)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bOverrideScalabilitySettings : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides;  // 0x48(0x10)
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides;  // 0x58(0x10)
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles;  // 0x68(0x10)
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;  // 0x78(0x10)
	struct UNiagaraScript* SystemSpawnScript;  // 0x88(0x8)
	struct UNiagaraScript* SystemUpdateScript;  // 0x90(0x8)
	char pad_152[16];  // 0x98(0x10)
	struct FNiagaraSystemCompiledData SystemCompiledData;  // 0xA8(0x218)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters;  // 0x2C0(0xC8)
	struct FBox FixedBounds;  // 0x388(0x1C)
	char pad_932_1 : 7;  // 0x3A4(0x1)
	bool bAutoDeactivate : 1;  // 0x3A4(0x1)
	char pad_933[3];  // 0x3A5(0x3)
	float WarmupTime;  // 0x3A8(0x4)
	int32_t WarmupTickCount;  // 0x3AC(0x4)
	float WarmupTickDelta;  // 0x3B0(0x4)
	char pad_948_1 : 7;  // 0x3B4(0x1)
	bool bHasSystemScriptDIsWithPerInstanceData : 1;  // 0x3B4(0x1)
	char pad_949_1 : 7;  // 0x3B5(0x1)
	bool bNeedsGPUContextInitForDataInterfaces : 1;  // 0x3B5(0x1)
	char pad_950[2];  // 0x3B6(0x2)
	struct TArray<struct FName> UserDINamesReadInSystemScripts;  // 0x3B8(0x10)
	char pad_968[208];  // 0x3C8(0xD0)

}; 



