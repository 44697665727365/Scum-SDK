#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct Niagara.NiagaraID
// Size: 0x8(Inherited: 0x0) 
struct FNiagaraID
{
	int32_t Index;  // 0x0(0x4)
	int32_t AcquireTag;  // 0x4(0x4)

}; 
// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// Size: 0x40(Inherited: 0x20) 
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FNiagaraVariable Parameter;  // 0x20(0x20)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
// Size: 0x20(Inherited: 0x0) 
struct FGetNiagaraArrayVectorValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	struct FVector ReturnValue;  // 0x14(0xC)

}; 
// ScriptStruct Niagara.NiagaraMaterialOverride
// Size: 0x18(Inherited: 0x0) 
struct FNiagaraMaterialOverride
{
	struct UMaterialInterface* Material;  // 0x0(0x8)
	uint32_t MaterialSubIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct UNiagaraRendererProperties* EmitterRendererProperty;  // 0x10(0x8)

}; 
// ScriptStruct Niagara.NiagaraMatrix
// Size: 0x40(Inherited: 0x0) 
struct FNiagaraMatrix
{
	struct FVector4 Row0;  // 0x0(0x10)
	struct FVector4 Row1;  // 0x10(0x10)
	struct FVector4 Row2;  // 0x20(0x10)
	struct FVector4 Row3;  // 0x30(0x10)

}; 
// DelegateFunction Niagara.OnNiagaraSystemFinished__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnNiagaraSystemFinished__DelegateSignature
{
	struct UNiagaraComponent* PSystem;  // 0x0(0x8)

}; 
// ScriptStruct Niagara.NiagaraBakerTextureSettings
// Size: 0x30(Inherited: 0x0) 
struct FNiagaraBakerTextureSettings
{
	struct FName OutputName;  // 0x0(0x8)
	struct FNiagaraBakerTextureSource SourceBinding;  // 0x8(0x8)
	char bUseFrameSize : 1;  // 0x10(0x1)
	char pad_16_1 : 7;  // 0x10(0x1)
	char pad_17[4];  // 0x11(0x4)
	struct FIntPoint FrameSize;  // 0x14(0x8)
	struct FIntPoint TextureSize;  // 0x1C(0x8)
	char pad_36[4];  // 0x24(0x4)
	struct UTexture2D* GeneratedTexture;  // 0x28(0x8)

}; 
// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
// Size: 0x10(Inherited: 0x0) 
struct FNiagaraSystemScalabilityOverrides
{
	struct TArray<struct FNiagaraSystemScalabilityOverride> Overrides;  // 0x0(0x10)

}; 
// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// Size: 0x2C0(Inherited: 0x40) 
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel RedChannel;  // 0x40(0xA0)
	struct FMovieSceneFloatChannel GreenChannel;  // 0xE0(0xA0)
	struct FMovieSceneFloatChannel BlueChannel;  // 0x180(0xA0)
	struct FMovieSceneFloatChannel AlphaChannel;  // 0x220(0xA0)

}; 
// ScriptStruct Niagara.NiagaraOutlinerEmitterInstanceData
// Size: 0x20(Inherited: 0x0) 
struct FNiagaraOutlinerEmitterInstanceData
{
	struct FString EmitterName;  // 0x0(0x10)
	uint8_t  SimTarget;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	uint8_t  ExecState;  // 0x14(0x4)
	int32_t NumParticles;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct Niagara.NiagaraVariableBase
// Size: 0xC(Inherited: 0x0) 
struct FNiagaraVariableBase
{
	struct FName Name;  // 0x0(0x8)
	struct FNiagaraTypeDefinitionHandle TypeDefHandle;  // 0x8(0x4)

}; 
// ScriptStruct Niagara.NiagaraSimpleClientInfo
// Size: 0x40(Inherited: 0x0) 
struct FNiagaraSimpleClientInfo
{
	struct TArray<struct FString> Systems;  // 0x0(0x10)
	struct TArray<struct FString> Actors;  // 0x10(0x10)
	struct TArray<struct FString> Components;  // 0x20(0x10)
	struct TArray<struct FString> Emitters;  // 0x30(0x10)

}; 
// ScriptStruct Niagara.NiagaraDataSetCompiledData
// Size: 0x40(Inherited: 0x0) 
struct FNiagaraDataSetCompiledData
{
	struct TArray<struct FNiagaraVariable> Variables;  // 0x0(0x10)
	struct TArray<struct FNiagaraVariableLayoutInfo> VariableLayouts;  // 0x10(0x10)
	struct FNiagaraDataSetID ID;  // 0x20(0xC)
	uint32_t TotalFloatComponents;  // 0x2C(0x4)
	uint32_t TotalInt32Components;  // 0x30(0x4)
	uint32_t TotalHalfComponents;  // 0x34(0x4)
	char bRequiresPersistentIDs : 1;  // 0x38(0x1)
	char pad_56_1 : 7;  // 0x38(0x1)
	char pad_57[4];  // 0x39(0x4)
	uint8_t  SimTarget;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)

}; 
// ScriptStruct Niagara.NiagaraSystemUpdateContext
// Size: 0x68(Inherited: 0x0) 
struct FNiagaraSystemUpdateContext
{
	struct TArray<struct UNiagaraComponent*> ComponentsToReset;  // 0x0(0x10)
	struct TArray<struct UNiagaraComponent*> ComponentsToReInit;  // 0x10(0x10)
	struct TArray<struct UNiagaraComponent*> ComponentsToNotifySimDestroy;  // 0x20(0x10)
	struct TArray<struct UNiagaraSystem*> SystemSimsToDestroy;  // 0x30(0x10)
	char pad_64[40];  // 0x40(0x28)

}; 
// ScriptStruct Niagara.NiagaraTypeDefinitionHandle
// Size: 0x4(Inherited: 0x0) 
struct FNiagaraTypeDefinitionHandle
{
	int32_t RegisteredTypeIndex;  // 0x0(0x4)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
// Size: 0x20(Inherited: 0x0) 
struct FGetColorParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FLinearColor ReturnValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
// Size: 0x40(Inherited: 0x0) 
struct FSpawnSystemAttached
{
	struct UNiagaraSystem* SystemTemplate;  // 0x0(0x8)
	struct USceneComponent* AttachToComponent;  // 0x8(0x8)
	struct FName AttachPointName;  // 0x10(0x8)
	struct FVector Location;  // 0x18(0xC)
	struct FRotator Rotation;  // 0x24(0xC)
	char EAttachLocation LocationType;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool bAutoDestroy : 1;  // 0x31(0x1)
	char pad_50_1 : 7;  // 0x32(0x1)
	bool bAutoActivate : 1;  // 0x32(0x1)
	uint8_t  PoolingMethod;  // 0x33(0x1)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool bPreCullCheck : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	struct UNiagaraComponent* ReturnValue;  // 0x38(0x8)

}; 
// ScriptStruct Niagara.NiagaraVariable
// Size: 0x20(Inherited: 0xC) 
struct FNiagaraVariable : public FNiagaraVariableBase
{
	char pad_12[4];  // 0xC(0x4)
	struct TArray<char> VarData;  // 0x10(0x10)

}; 
// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// Size: 0xD0(Inherited: 0x40) 
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneBoolChannel BoolChannel;  // 0x40(0x90)

}; 
// Function Niagara.NiagaraComponent.GetRandomSeedOffset
// Size: 0x4(Inherited: 0x0) 
struct FGetRandomSeedOffset
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct Niagara.NiagaraDebuggerExecuteConsoleCommand
// Size: 0x18(Inherited: 0x0) 
struct FNiagaraDebuggerExecuteConsoleCommand
{
	struct FString Command;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bRequiresWorld : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
// Size: 0x20(Inherited: 0x0) 
struct FNiagaraVariableDataInterfaceBinding
{
	struct FNiagaraVariable BoundVariable;  // 0x0(0x20)

}; 
// ScriptStruct Niagara.NiagaraScalabilityState
// Size: 0x8(Inherited: 0x0) 
struct FNiagaraScalabilityState
{
	float Significance;  // 0x0(0x4)
	char bCulled : 1;  // 0x4(0x1)
	char bPreviousCulled : 1;  // 0x4(0x1)
	char bCulledByDistance : 1;  // 0x4(0x1)
	char bCulledByInstanceCount : 1;  // 0x4(0x1)
	char bCulledByVisibility : 1;  // 0x4(0x1)
	char bCulledByGlobalBudget : 1;  // 0x4(0x1)
	char pad_4_1 : 2;  // 0x4(0x1)
	char pad_5[4];  // 0x5(0x4)

}; 
// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// Size: 0xE0(Inherited: 0x40) 
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel FloatChannel;  // 0x40(0xA0)

}; 
// Function Niagara.NiagaraComponent.AdvanceSimulation
// Size: 0x8(Inherited: 0x0) 
struct FAdvanceSimulation
{
	int32_t TickCount;  // 0x0(0x4)
	float TickDeltaSeconds;  // 0x4(0x4)

}; 
// ScriptStruct Niagara.NiagaraEventScriptProperties
// Size: 0x58(Inherited: 0x28) 
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
	uint8_t  ExecutionMode;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	uint32_t SpawnNumber;  // 0x2C(0x4)
	uint32_t MaxEventsPerFrame;  // 0x30(0x4)
	struct FGuid SourceEmitterID;  // 0x34(0x10)
	struct FName SourceEventName;  // 0x44(0x8)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool bRandomSpawnNumber : 1;  // 0x4C(0x1)
	char pad_77[3];  // 0x4D(0x3)
	uint32_t MinSpawnNumber;  // 0x50(0x4)
	char pad_84[4];  // 0x54(0x4)

}; 
// ScriptStruct Niagara.NiagaraCompileDependency
// Size: 0x50(Inherited: 0x0) 
struct FNiagaraCompileDependency
{
	struct FString LinkerErrorMessage;  // 0x0(0x10)
	struct FGuid NodeGuid;  // 0x10(0x10)
	struct FGuid PinGuid;  // 0x20(0x10)
	struct TArray<struct FGuid> StackGuids;  // 0x30(0x10)
	struct FNiagaraVariableBase DependentVariable;  // 0x40(0xC)
	char pad_76[4];  // 0x4C(0x4)

}; 
// ScriptStruct Niagara.NiagaraOutlinerWorldData
// Size: 0x68(Inherited: 0x0) 
struct FNiagaraOutlinerWorldData
{
	struct TMap<struct FString, struct FNiagaraOutlinerSystemData> Systems;  // 0x0(0x50)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool bHasBegunPlay : 1;  // 0x50(0x1)
	char WorldType;  // 0x51(0x1)
	char NetMode;  // 0x52(0x1)
	char pad_83[1];  // 0x53(0x1)
	struct FNiagaraOutlinerTimingData AveragePerFrameTime;  // 0x54(0x8)
	struct FNiagaraOutlinerTimingData MaxPerFrameTime;  // 0x5C(0x8)
	char pad_100[4];  // 0x64(0x4)

}; 
// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// Size: 0xD0(Inherited: 0x40) 
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneIntegerChannel IntegerChannel;  // 0x40(0x90)

}; 
// ScriptStruct Niagara.NiagaraGraphViewSettings
// Size: 0x10(Inherited: 0x0) 
struct FNiagaraGraphViewSettings
{
	struct FVector2D Location;  // 0x0(0x8)
	float Zoom;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bIsValid : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// Size: 0x28(Inherited: 0x10) 
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
	struct FFrameNumber SpawnSectionStartFrame;  // 0x10(0x4)
	struct FFrameNumber SpawnSectionEndFrame;  // 0x14(0x4)
	uint8_t  SpawnSectionStartBehavior;  // 0x18(0x4)
	uint8_t  SpawnSectionEvaluateBehavior;  // 0x1C(0x4)
	uint8_t  SpawnSectionEndBehavior;  // 0x20(0x4)
	uint8_t  AgeUpdateMode;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)

}; 
// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
// Size: 0x38(Inherited: 0x0) 
struct FNiagaraScriptDataInterfaceCompileInfo
{
	struct FName Name;  // 0x0(0x8)
	int32_t UserPtrIdx;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FNiagaraTypeDefinition Type;  // 0x10(0x10)
	struct FName RegisteredParameterMapRead;  // 0x20(0x8)
	struct FName RegisteredParameterMapWrite;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bIsPlaceholder : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// ScriptStruct Niagara.NiagaraUserParameterBinding
// Size: 0x20(Inherited: 0x0) 
struct FNiagaraUserParameterBinding
{
	struct FNiagaraVariable Parameter;  // 0x0(0x20)

}; 
// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// Size: 0x20(Inherited: 0x20) 
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{

}; 
// Function Niagara.NiagaraComponent.GetMaxSimTime
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxSimTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// Size: 0x2C8(Inherited: 0x40) 
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel VectorChannels[4];  // 0x40(0x280)
	int32_t ChannelsUsed;  // 0x2C0(0x4)
	char pad_708[4];  // 0x2C4(0x4)

}; 
// ScriptStruct Niagara.BasicParticleData
// Size: 0x1C(Inherited: 0x0) 
struct FBasicParticleData
{
	struct FVector position;  // 0x0(0xC)
	float Size;  // 0xC(0x4)
	struct FVector Velocity;  // 0x10(0xC)

}; 
// ScriptStruct Niagara.NiagaraDataSetProperties
// Size: 0x20(Inherited: 0x0) 
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID ID;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<struct FNiagaraVariable> Variables;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraPreviewAxis.Num
// Size: 0x4(Inherited: 0x0) 
struct FNum
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct Niagara.NiagaraTypeDefinition
// Size: 0x10(Inherited: 0x0) 
struct FNiagaraTypeDefinition
{
	struct UObject* ClassStructOrEnum;  // 0x0(0x8)
	uint16_t UnderlyingType;  // 0x8(0x2)
	char pad_10[6];  // 0xA(0x6)

}; 
// ScriptStruct Niagara.NiagaraBakerTextureSource
// Size: 0x8(Inherited: 0x0) 
struct FNiagaraBakerTextureSource
{
	struct FName SourceName;  // 0x0(0x8)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
// Size: 0x20(Inherited: 0x0) 
struct FGetNiagaraArrayFloat
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<float> ReturnValue;  // 0x10(0x10)

}; 
// ScriptStruct Niagara.NiagaraRandInfo
// Size: 0xC(Inherited: 0x0) 
struct FNiagaraRandInfo
{
	int32_t Seed1;  // 0x0(0x4)
	int32_t Seed2;  // 0x4(0x4)
	int32_t Seed3;  // 0x8(0x4)

}; 
// ScriptStruct Niagara.NiagaraScriptVariableBinding
// Size: 0x8(Inherited: 0x0) 
struct FNiagaraScriptVariableBinding
{
	struct FName Name;  // 0x0(0x8)

}; 
// ScriptStruct Niagara.NiagaraDebuggerRequestConnection
// Size: 0x20(Inherited: 0x0) 
struct FNiagaraDebuggerRequestConnection
{
	struct FGuid SessionId;  // 0x0(0x10)
	struct FGuid InstanceId;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
// Size: 0x18(Inherited: 0x0) 
struct FGetBoolParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct Niagara.NiagaraMaterialAttributeBinding
// Size: 0x2C(Inherited: 0x0) 
struct FNiagaraMaterialAttributeBinding
{
	struct FName MaterialParameterName;  // 0x0(0x8)
	struct FNiagaraVariableBase NiagaraVariable;  // 0x8(0xC)
	struct FNiagaraVariableBase ResolvedNiagaraVariable;  // 0x14(0xC)
	struct FNiagaraVariableBase NiagaraChildVariable;  // 0x20(0xC)

}; 
// ScriptStruct Niagara.NiagaraVariableAttributeBinding
// Size: 0x58(Inherited: 0x0) 
struct FNiagaraVariableAttributeBinding
{
	struct FNiagaraVariableBase ParamMapVariable;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct FNiagaraVariable DataSetVariable;  // 0x10(0x20)
	struct FNiagaraVariable RootVariable;  // 0x30(0x20)
	char ENiagaraBindingSource BindingSourceMode;  // 0x50(0x1)
	char pad_81[3];  // 0x51(0x3)
	char bBindingExistsOnSource : 1;  // 0x54(0x1)
	char bIsCachedParticleValue : 1;  // 0x54(0x1)
	char pad_84_1 : 6;  // 0x54(0x1)
	char pad_85[4];  // 0x55(0x4)

}; 
// ScriptStruct Niagara.NiagaraVariableInfo
// Size: 0x40(Inherited: 0x0) 
struct FNiagaraVariableInfo
{
	struct FNiagaraVariable Variable;  // 0x0(0x20)
	struct FText Definition;  // 0x20(0x18)
	struct UNiagaraDataInterface* DataInterface;  // 0x38(0x8)

}; 
// ScriptStruct Niagara.VMExternalFunctionBindingInfo
// Size: 0x38(Inherited: 0x0) 
struct FVMExternalFunctionBindingInfo
{
	struct FName Name;  // 0x0(0x8)
	struct FName OwnerName;  // 0x8(0x8)
	struct TArray<bool> InputParamLocations;  // 0x10(0x10)
	int32_t NumOutputs;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct TArray<struct FVMFunctionSpecifier> FunctionSpecifiers;  // 0x28(0x10)

}; 
// ScriptStruct Niagara.NiagaraDebuggerOutlinerUpdate
// Size: 0x50(Inherited: 0x0) 
struct FNiagaraDebuggerOutlinerUpdate
{
	struct FNiagaraOutlinerData OutlinerData;  // 0x0(0x50)

}; 
// ScriptStruct Niagara.VMFunctionSpecifier
// Size: 0x10(Inherited: 0x0) 
struct FVMFunctionSpecifier
{
	struct FName Key;  // 0x0(0x8)
	struct FName Value;  // 0x8(0x8)

}; 
// ScriptStruct Niagara.NiagaraStatScope
// Size: 0x10(Inherited: 0x0) 
struct FNiagaraStatScope
{
	struct FName FullName;  // 0x0(0x8)
	struct FName FriendlyName;  // 0x8(0x8)

}; 
// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
// Size: 0x10(Inherited: 0x0) 
struct FNiagaraEmitterScalabilityOverrides
{
	struct TArray<struct FNiagaraEmitterScalabilityOverride> Overrides;  // 0x0(0x10)

}; 
// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraVariableLinearColor
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FLinearColor InValue;  // 0x10(0x10)

}; 
// ScriptStruct Niagara.NiagaraOutlinerTimingData
// Size: 0x8(Inherited: 0x0) 
struct FNiagaraOutlinerTimingData
{
	float GameThread;  // 0x0(0x4)
	float RenderThread;  // 0x4(0x4)

}; 
// ScriptStruct Niagara.NCPool
// Size: 0x10(Inherited: 0x0) 
struct FNCPool
{
	struct TArray<struct FNCPoolElement> FreeElements;  // 0x0(0x10)

}; 
// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// Size: 0x38(Inherited: 0x0) 
struct FNiagaraScriptDataInterfaceInfo
{
	struct UNiagaraDataInterface* DataInterface;  // 0x0(0x8)
	struct FName Name;  // 0x8(0x8)
	int32_t UserPtrIdx;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct FNiagaraTypeDefinition Type;  // 0x18(0x10)
	struct FName RegisteredParameterMapRead;  // 0x28(0x8)
	struct FName RegisteredParameterMapWrite;  // 0x30(0x8)

}; 
// ScriptStruct Niagara.NiagaraFunctionSignature
// Size: 0x90(Inherited: 0x0) 
struct FNiagaraFunctionSignature
{
	struct FName Name;  // 0x0(0x8)
	struct TArray<struct FNiagaraVariable> Inputs;  // 0x8(0x10)
	struct TArray<struct FNiagaraVariable> Outputs;  // 0x18(0x10)
	struct FName OwnerName;  // 0x28(0x8)
	char bRequiresContext : 1;  // 0x30(0x1)
	char bRequiresExecPin : 1;  // 0x30(0x1)
	char bMemberFunction : 1;  // 0x30(0x1)
	char bExperimental : 1;  // 0x30(0x1)
	char bSupportsCPU : 1;  // 0x30(0x1)
	char bSupportsGPU : 1;  // 0x30(0x1)
	char bWriteFunction : 1;  // 0x30(0x1)
	char bSoftDeprecatedFunction : 1;  // 0x30(0x1)
	char bIsCompileTagGenerator : 1;  // 0x31(0x1)
	char bHidden : 1;  // 0x31(0x1)
	char pad_49_1 : 6;  // 0x31(0x1)
	char pad_50[3];  // 0x32(0x3)
	int32_t ModuleUsageBitmask;  // 0x34(0x4)
	int32_t ContextStageMinIndex;  // 0x38(0x4)
	int32_t ContextStageMaxIndex;  // 0x3C(0x4)
	struct TMap<struct FName, struct FName> FunctionSpecifiers;  // 0x40(0x50)

}; 
// ScriptStruct Niagara.NiagaraScalabilityManager
// Size: 0x70(Inherited: 0x0) 
struct FNiagaraScalabilityManager
{
	struct UNiagaraEffectType* EffectType;  // 0x0(0x8)
	struct TArray<struct UNiagaraComponent*> ManagedComponents;  // 0x8(0x10)
	char pad_24[88];  // 0x18(0x58)

}; 
// ScriptStruct Niagara.NiagaraOutlinerSystemInstanceData
// Size: 0x48(Inherited: 0x0) 
struct FNiagaraOutlinerSystemInstanceData
{
	struct FString ComponentName;  // 0x0(0x10)
	struct TArray<struct FNiagaraOutlinerEmitterInstanceData> Emitters;  // 0x10(0x10)
	uint8_t  ActualExecutionState;  // 0x20(0x4)
	uint8_t  RequestedExecutionState;  // 0x24(0x4)
	struct FNiagaraScalabilityState ScalabilityState;  // 0x28(0x8)
	char bPendingKill : 1;  // 0x30(0x1)
	char pad_48_1 : 7;  // 0x30(0x1)
	char pad_49[4];  // 0x31(0x4)
	uint8_t  PoolMethod;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	struct FNiagaraOutlinerTimingData AverageTime;  // 0x38(0x8)
	struct FNiagaraOutlinerTimingData MaxTime;  // 0x40(0x8)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
// Size: 0x20(Inherited: 0x0) 
struct FGetNiagaraArrayVector2D
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<struct FVector2D> ReturnValue;  // 0x10(0x10)

}; 
// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// Size: 0x1(Inherited: 0x0) 
struct FNiagaraScriptDataUsageInfo
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bReadsAttributeData : 1;  // 0x0(0x1)

}; 
// ScriptStruct Niagara.NiagaraDataSetID
// Size: 0xC(Inherited: 0x0) 
struct FNiagaraDataSetID
{
	struct FName Name;  // 0x0(0x8)
	uint8_t  Type;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// ScriptStruct Niagara.NCPoolElement
// Size: 0x10(Inherited: 0x0) 
struct FNCPoolElement
{
	struct UNiagaraComponent* Component;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)

}; 
// Function Niagara.NiagaraPreviewGrid.SetPaused
// Size: 0x1(Inherited: 0x0) 
struct FSetPaused
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bPaused : 1;  // 0x0(0x1)

}; 
// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
// Size: 0x40(Inherited: 0x38) 
struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
	char bOverrideSpawnCountScale : 1;  // 0x38(0x1)
	char pad_56_1 : 7;  // 0x38(0x1)
	char pad_57[8];  // 0x39(0x8)

}; 
// ScriptStruct Niagara.NiagaraComponentPropertyBinding
// Size: 0xE8(Inherited: 0x0) 
struct FNiagaraComponentPropertyBinding
{
	struct FNiagaraVariableAttributeBinding AttributeBinding;  // 0x0(0x58)
	struct FName PropertyName;  // 0x58(0x8)
	struct FNiagaraTypeDefinition PropertyType;  // 0x60(0x10)
	struct FName MetadataSetterName;  // 0x70(0x8)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults;  // 0x78(0x50)
	struct FNiagaraVariable WritableValue;  // 0xC8(0x20)

}; 
// ScriptStruct Niagara.NiagaraDebugHudTextOptions
// Size: 0x10(Inherited: 0x0) 
struct FNiagaraDebugHudTextOptions
{
	uint8_t  Font;  // 0x0(0x4)
	uint8_t  HorizontalAlignment;  // 0x4(0x1)
	uint8_t  VerticalAlignment;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)
	struct FVector2D ScreenOffset;  // 0x8(0x8)

}; 
// ScriptStruct Niagara.NiagaraEmitterNameSettingsRef
// Size: 0x18(Inherited: 0x0) 
struct FNiagaraEmitterNameSettingsRef
{
	struct FName SystemName;  // 0x0(0x8)
	struct FString EmitterName;  // 0x8(0x10)

}; 
// Function Niagara.NiagaraComponent.GetSeekDelta
// Size: 0x4(Inherited: 0x0) 
struct FGetSeekDelta
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct Niagara.MeshTriCoordinate
// Size: 0x10(Inherited: 0x0) 
struct FMeshTriCoordinate
{
	int32_t Tri;  // 0x0(0x4)
	struct FVector BaryCoord;  // 0x4(0xC)

}; 
// ScriptStruct Niagara.NDIStaticMeshSectionFilter
// Size: 0x10(Inherited: 0x0) 
struct FNDIStaticMeshSectionFilter
{
	struct TArray<int32_t> AllowedMaterialSlots;  // 0x0(0x10)

}; 
// ScriptStruct Niagara.NiagaraVariableLayoutInfo
// Size: 0x70(Inherited: 0x0) 
struct FNiagaraVariableLayoutInfo
{
	uint32_t FloatComponentStart;  // 0x0(0x4)
	uint32_t Int32ComponentStart;  // 0x4(0x4)
	uint32_t HalfComponentStart;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FNiagaraTypeLayoutInfo LayoutInfo;  // 0x10(0x60)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
// Size: 0x18(Inherited: 0x0) 
struct FGetNiagaraArrayInt32Value
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	int32_t ReturnValue;  // 0x14(0x4)

}; 
// ScriptStruct Niagara.NiagaraTypeLayoutInfo
// Size: 0x60(Inherited: 0x0) 
struct FNiagaraTypeLayoutInfo
{
	struct TArray<uint32_t> FloatComponentByteOffsets;  // 0x0(0x10)
	struct TArray<uint32_t> FloatComponentRegisterOffsets;  // 0x10(0x10)
	struct TArray<uint32_t> Int32ComponentByteOffsets;  // 0x20(0x10)
	struct TArray<uint32_t> Int32ComponentRegisterOffsets;  // 0x30(0x10)
	struct TArray<uint32_t> HalfComponentByteOffsets;  // 0x40(0x10)
	struct TArray<uint32_t> HalfComponentRegisterOffsets;  // 0x50(0x10)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
// Size: 0x20(Inherited: 0x0) 
struct FSetColorParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FLinearColor InValue;  // 0x10(0x10)

}; 
// ScriptStruct Niagara.NiagaraRequestSimpleClientInfoMessage
// Size: 0x1(Inherited: 0x0) 
struct FNiagaraRequestSimpleClientInfoMessage
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct Niagara.NiagaraOutlinerCaptureSettings
// Size: 0xC(Inherited: 0x0) 
struct FNiagaraOutlinerCaptureSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bTriggerCapture : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	uint32_t CaptureDelayFrames;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bGatherPerfData : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// ScriptStruct Niagara.NiagaraOutlinerSystemData
// Size: 0x30(Inherited: 0x0) 
struct FNiagaraOutlinerSystemData
{
	struct TArray<struct FNiagaraOutlinerSystemInstanceData> SystemInstances;  // 0x0(0x10)
	struct FNiagaraOutlinerTimingData AveragePerFrameTime;  // 0x10(0x8)
	struct FNiagaraOutlinerTimingData MaxPerFrameTime;  // 0x18(0x8)
	struct FNiagaraOutlinerTimingData AveragePerInstanceTime;  // 0x20(0x8)
	struct FNiagaraOutlinerTimingData MaxPerInstanceTime;  // 0x28(0x8)

}; 
// Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
// Size: 0x20(Inherited: 0x0) 
struct FSetVolumeTextureObject
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FString OverrideName;  // 0x8(0x10)
	struct UVolumeTexture* Texture;  // 0x18(0x8)

}; 
// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// Size: 0x98(Inherited: 0x78) 
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
	int32_t ParameterSize;  // 0x78(0x4)
	uint32_t PaddedParameterSize;  // 0x7C(0x4)
	struct TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo;  // 0x80(0x10)
	char bInitialized : 1;  // 0x90(0x1)
	char pad_144_1 : 7;  // 0x90(0x1)
	char pad_145[8];  // 0x91(0x8)

}; 
// ScriptStruct Niagara.NiagaraDebugHUDSettingsData
// Size: 0xE0(Inherited: 0x0) 
struct FNiagaraDebugHUDSettingsData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bValidateSystemSimulationDataBuffers : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool bValidateParticleDataBuffers : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool bOverviewEnabled : 1;  // 0x3(0x1)
	uint8_t  OverviewFont;  // 0x4(0x4)
	struct FVector2D OverviewLocation;  // 0x8(0x8)
	struct FString ActorFilter;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bComponentFilterEnabled : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)
	struct FString ComponentFilter;  // 0x28(0x10)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bSystemFilterEnabled : 1;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)
	struct FString SystemFilter;  // 0x40(0x10)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool bEmitterFilterEnabled : 1;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)
	struct FString EmitterFilter;  // 0x58(0x10)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bActorFilterEnabled : 1;  // 0x68(0x1)
	char pad_105[3];  // 0x69(0x3)
	uint8_t  SystemDebugVerbosity;  // 0x6C(0x4)
	uint8_t  SystemEmitterVerbosity;  // 0x70(0x4)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool bSystemShowBounds : 1;  // 0x74(0x1)
	char pad_117_1 : 7;  // 0x75(0x1)
	bool bSystemShowActiveOnlyInWorld : 1;  // 0x75(0x1)
	char pad_118_1 : 7;  // 0x76(0x1)
	bool bShowSystemVariables : 1;  // 0x76(0x1)
	char pad_119[1];  // 0x77(0x1)
	struct TArray<struct FNiagaraDebugHUDVariable> SystemVariables;  // 0x78(0x10)
	struct FNiagaraDebugHudTextOptions SystemTextOptions;  // 0x88(0x10)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool bShowParticleVariables : 1;  // 0x98(0x1)
	char pad_153_1 : 7;  // 0x99(0x1)
	bool bEnableGpuParticleReadback : 1;  // 0x99(0x1)
	char pad_154[6];  // 0x9A(0x6)
	struct TArray<struct FNiagaraDebugHUDVariable> ParticlesVariables;  // 0xA0(0x10)
	struct FNiagaraDebugHudTextOptions ParticleTextOptions;  // 0xB0(0x10)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool bShowParticlesVariablesWithSystem : 1;  // 0xC0(0x1)
	char pad_193_1 : 7;  // 0xC1(0x1)
	bool bUseMaxParticlesToDisplay : 1;  // 0xC1(0x1)
	char pad_194[2];  // 0xC2(0x2)
	int32_t MaxParticlesToDisplay;  // 0xC4(0x4)
	uint8_t  PlaybackMode;  // 0xC8(0x1)
	char pad_201_1 : 7;  // 0xC9(0x1)
	bool bPlaybackRateEnabled : 1;  // 0xC9(0x1)
	char pad_202[2];  // 0xCA(0x2)
	float PlaybackRate;  // 0xCC(0x4)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool bLoopTimeEnabled : 1;  // 0xD0(0x1)
	char pad_209[3];  // 0xD1(0x3)
	float LoopTime;  // 0xD4(0x4)
	char pad_216_1 : 7;  // 0xD8(0x1)
	bool bShowGlobalBudgetInfo : 1;  // 0xD8(0x1)
	char pad_217[7];  // 0xD9(0x7)

}; 
// ScriptStruct Niagara.NiagaraOutlinerData
// Size: 0x50(Inherited: 0x0) 
struct FNiagaraOutlinerData
{
	struct TMap<struct FString, struct FNiagaraOutlinerWorldData> WorldData;  // 0x0(0x50)

}; 
// ScriptStruct Niagara.NiagaraDebugHUDVariable
// Size: 0x18(Inherited: 0x0) 
struct FNiagaraDebugHUDVariable
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FString Name;  // 0x8(0x10)

}; 
// ScriptStruct Niagara.NiagaraDebuggerConnectionClosed
// Size: 0x20(Inherited: 0x0) 
struct FNiagaraDebuggerConnectionClosed
{
	struct FGuid SessionId;  // 0x0(0x10)
	struct FGuid InstanceId;  // 0x10(0x10)

}; 
// ScriptStruct Niagara.NiagaraDebuggerAcceptConnection
// Size: 0x20(Inherited: 0x0) 
struct FNiagaraDebuggerAcceptConnection
{
	struct FGuid SessionId;  // 0x0(0x10)
	struct FGuid InstanceId;  // 0x10(0x10)

}; 
// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
// Size: 0x38(Inherited: 0x0) 
struct FNiagaraEmitterScalabilitySettings
{
	struct FNiagaraPlatformSet Platforms;  // 0x0(0x30)
	char bScaleSpawnCount : 1;  // 0x30(0x1)
	char pad_48_1 : 7;  // 0x30(0x1)
	char pad_49[4];  // 0x31(0x4)
	float SpawnCountScale;  // 0x34(0x4)

}; 
// ScriptStruct Niagara.NiagaraPlatformSet
// Size: 0x30(Inherited: 0x0) 
struct FNiagaraPlatformSet
{
	int32_t QualityLevelMask;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates;  // 0x8(0x10)
	struct TArray<struct FNiagaraPlatformSetCVarCondition> CVarConditions;  // 0x18(0x10)
	char pad_40[8];  // 0x28(0x8)

}; 
// ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
// Size: 0x28(Inherited: 0x0) 
struct FNiagaraPlatformSetCVarCondition
{
	struct FName CVarName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool Value : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	int32_t MinInt;  // 0xC(0x4)
	int32_t MaxInt;  // 0x10(0x4)
	float MinFloat;  // 0x14(0x4)
	float MaxFloat;  // 0x18(0x4)
	char bUseMinInt : 1;  // 0x1C(0x1)
	char bUseMaxInt : 1;  // 0x1C(0x1)
	char bUseMinFloat : 1;  // 0x1C(0x1)
	char bUseMaxFloat : 1;  // 0x1C(0x1)
	char pad_28_1 : 4;  // 0x1C(0x1)
	char pad_29[12];  // 0x1D(0xC)

}; 
// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
// Size: 0x10(Inherited: 0x0) 
struct FNiagaraDeviceProfileStateEntry
{
	struct FName ProfileName;  // 0x0(0x8)
	uint32_t QualityLevelMask;  // 0x8(0x4)
	uint32_t SetQualityLevelMask;  // 0xC(0x4)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
// Size: 0x20(Inherited: 0x0) 
struct FSetQuatParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FQuat InValue;  // 0x10(0x10)

}; 
// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
// Size: 0x10(Inherited: 0x0) 
struct FNiagaraEmitterScalabilitySettingsArray
{
	struct TArray<struct FNiagaraEmitterScalabilitySettings> Settings;  // 0x0(0x10)

}; 
// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
// Size: 0x48(Inherited: 0x0) 
struct FNiagaraSystemScalabilitySettings
{
	struct FNiagaraPlatformSet Platforms;  // 0x0(0x30)
	char bCullByDistance : 1;  // 0x30(0x1)
	char bCullMaxInstanceCount : 1;  // 0x30(0x1)
	char bCullPerSystemMaxInstanceCount : 1;  // 0x30(0x1)
	char bCullByMaxTimeWithoutRender : 1;  // 0x30(0x1)
	char bCullByGlobalBudget : 1;  // 0x30(0x1)
	char pad_48_1 : 3;  // 0x30(0x1)
	char pad_49[4];  // 0x31(0x4)
	float MaxDistance;  // 0x34(0x4)
	int32_t MaxInstances;  // 0x38(0x4)
	int32_t MaxSystemInstances;  // 0x3C(0x4)
	float MaxTimeWithoutRender;  // 0x40(0x4)
	float MaxGlobalBudgetUsage;  // 0x44(0x4)

}; 
// Function Niagara.NiagaraBaselineController.OnEndTest
// Size: 0x10(Inherited: 0x0) 
struct FOnEndTest
{
	struct FNiagaraPerfBaselineStats stats;  // 0x0(0x10)

}; 
// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
// Size: 0x50(Inherited: 0x48) 
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
	char bOverrideDistanceSettings : 1;  // 0x48(0x1)
	char bOverrideInstanceCountSettings : 1;  // 0x48(0x1)
	char bOverridePerSystemInstanceCountSettings : 1;  // 0x48(0x1)
	char bOverrideTimeSinceRendererSettings : 1;  // 0x48(0x1)
	char bOverrideGlobalBudgetCullingSettings : 1;  // 0x48(0x1)
	char pad_72_1 : 3;  // 0x48(0x1)
	char pad_73[8];  // 0x49(0x8)

}; 
// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
// Size: 0x10(Inherited: 0x0) 
struct FNiagaraSystemScalabilitySettingsArray
{
	struct TArray<struct FNiagaraSystemScalabilitySettings> Settings;  // 0x0(0x10)

}; 
// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
// Size: 0x14(Inherited: 0x0) 
struct FNiagaraDetailsLevelScaleOverrides
{
	float Low;  // 0x0(0x4)
	float Medium;  // 0x4(0x4)
	float High;  // 0x8(0x4)
	float Epic;  // 0xC(0x4)
	float Cine;  // 0x10(0x4)

}; 
// Function Niagara.NiagaraComponent.SetRenderingEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetRenderingEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInRenderingEnabled : 1;  // 0x0(0x1)

}; 
// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// Size: 0x28(Inherited: 0x0) 
struct FNiagaraEmitterScriptProperties
{
	struct UNiagaraScript* Script;  // 0x0(0x8)
	struct TArray<struct FNiagaraEventReceiverProperties> EventReceivers;  // 0x8(0x10)
	struct TArray<struct FNiagaraEventGeneratorProperties> EventGenerators;  // 0x18(0x10)

}; 
// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// Size: 0x50(Inherited: 0x0) 
struct FNiagaraEventGeneratorProperties
{
	int32_t MaxEventsPerFrame;  // 0x0(0x4)
	struct FName ID;  // 0x4(0x8)
	char pad_12[4];  // 0xC(0x4)
	struct FNiagaraDataSetCompiledData DataSetCompiledData;  // 0x10(0x40)

}; 
// ScriptStruct Niagara.NiagaraEventReceiverProperties
// Size: 0x18(Inherited: 0x0) 
struct FNiagaraEventReceiverProperties
{
	struct FName Name;  // 0x0(0x8)
	struct FName SourceEventGenerator;  // 0x8(0x8)
	struct FName SourceEmitter;  // 0x10(0x8)

}; 
// ScriptStruct Niagara.NiagaraEmitterHandle
// Size: 0x30(Inherited: 0x0) 
struct FNiagaraEmitterHandle
{
	struct FGuid ID;  // 0x0(0x10)
	struct FName IdName;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bIsEnabled : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	struct FName Name;  // 0x1C(0x8)
	char pad_36[4];  // 0x24(0x4)
	struct UNiagaraEmitter* Instance;  // 0x28(0x8)

}; 
// ScriptStruct Niagara.NiagaraParameterDataSetBinding
// Size: 0x8(Inherited: 0x0) 
struct FNiagaraParameterDataSetBinding
{
	int32_t ParameterOffset;  // 0x0(0x4)
	int32_t DataSetComponentOffset;  // 0x4(0x4)

}; 
// ScriptStruct Niagara.NiagaraCollisionEventPayload
// Size: 0x2C(Inherited: 0x0) 
struct FNiagaraCollisionEventPayload
{
	struct FVector CollisionPos;  // 0x0(0xC)
	struct FVector CollisionNormal;  // 0xC(0xC)
	struct FVector CollisionVelocity;  // 0x18(0xC)
	int32_t ParticleIndex;  // 0x24(0x4)
	int32_t PhysicalMaterialIndex;  // 0x28(0x4)

}; 
// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
// Size: 0x20(Inherited: 0x0) 
struct FOverrideSystemUserVariableStaticMesh
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FString OverrideName;  // 0x8(0x10)
	struct UStaticMesh* StaticMesh;  // 0x18(0x8)

}; 
// ScriptStruct Niagara.NiagaraMeshRendererMeshProperties
// Size: 0x28(Inherited: 0x0) 
struct FNiagaraMeshRendererMeshProperties
{
	struct UStaticMesh* Mesh;  // 0x0(0x8)
	struct FVector Scale;  // 0x8(0xC)
	struct FVector PivotOffset;  // 0x14(0xC)
	uint8_t  PivotOffsetSpace;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// ScriptStruct Niagara.NiagaraMeshMaterialOverride
// Size: 0x28(Inherited: 0x0) 
struct FNiagaraMeshMaterialOverride
{
	struct UMaterialInterface* ExplicitMat;  // 0x0(0x8)
	struct FNiagaraUserParameterBinding UserParamBinding;  // 0x8(0x20)

}; 
// ScriptStruct Niagara.ParameterDefinitionsSubscription
// Size: 0x1(Inherited: 0x0) 
struct FParameterDefinitionsSubscription
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct Niagara.NiagaraParameters
// Size: 0x10(Inherited: 0x0) 
struct FNiagaraParameters
{
	struct TArray<struct FNiagaraVariable> parameters;  // 0x0(0x10)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
// Size: 0x18(Inherited: 0x0) 
struct FSetBoolParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool InValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct Niagara.NiagaraParameterStore
// Size: 0x78(Inherited: 0x0) 
struct FNiagaraParameterStore
{
	char pad_0[8];  // 0x0(0x8)
	struct UObject* Owner;  // 0x8(0x8)
	struct TArray<struct FNiagaraVariableWithOffset> SortedParameterOffsets;  // 0x10(0x10)
	struct TArray<char> ParameterData;  // 0x20(0x10)
	struct TArray<struct UNiagaraDataInterface*> DataInterfaces;  // 0x30(0x10)
	struct TArray<struct UObject*> UObjects;  // 0x40(0x10)
	char pad_80[40];  // 0x50(0x28)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
// Size: 0x18(Inherited: 0x0) 
struct FSetNiagaraArrayBoolValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool Value : 1;  // 0x14(0x1)
	char pad_21_1 : 7;  // 0x15(0x1)
	bool bSizeToFit : 1;  // 0x15(0x1)
	char pad_22[2];  // 0x16(0x2)

}; 
// ScriptStruct Niagara.NiagaraVariableWithOffset
// Size: 0x10(Inherited: 0xC) 
struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
	int32_t Offset;  // 0xC(0x4)

}; 
// Function Niagara.NiagaraComponent.GetForceSolo
// Size: 0x1(Inherited: 0x0) 
struct FGetForceSolo
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct Niagara.NiagaraBoundParameter
// Size: 0x28(Inherited: 0x0) 
struct FNiagaraBoundParameter
{
	struct FNiagaraVariable Parameter;  // 0x0(0x20)
	int32_t SrcOffset;  // 0x20(0x4)
	int32_t DestOffset;  // 0x24(0x4)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
// Size: 0x20(Inherited: 0x0) 
struct FGetNiagaraArrayVector2DValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	struct FVector2D ReturnValue;  // 0x14(0x8)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct Niagara.NiagaraPerfBaselineStats
// Size: 0x10(Inherited: 0x0) 
struct FNiagaraPerfBaselineStats
{
	float PerInstanceAvg_GT;  // 0x0(0x4)
	float PerInstanceAvg_RT;  // 0x4(0x4)
	float PerInstanceMax_GT;  // 0x8(0x4)
	float PerInstanceMax_RT;  // 0xC(0x4)

}; 
// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
// Size: 0x18(Inherited: 0x0) 
struct FNiagaraPlatformSetConflictInfo
{
	int32_t SetAIndex;  // 0x0(0x4)
	int32_t SetBIndex;  // 0x4(0x4)
	struct TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts;  // 0x8(0x10)

}; 
// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
// Size: 0xC(Inherited: 0x0) 
struct FNiagaraPlatformSetConflictEntry
{
	struct FName ProfileName;  // 0x0(0x8)
	int32_t QualityLevelMask;  // 0x8(0x4)

}; 
// ScriptStruct Niagara.VersionedNiagaraScriptData
// Size: 0x1(Inherited: 0x0) 
struct FVersionedNiagaraScriptData
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct Niagara.NiagaraRibbonUVSettings
// Size: 0x24(Inherited: 0x0) 
struct FNiagaraRibbonUVSettings
{
	uint8_t  DistributionMode;  // 0x0(0x4)
	uint8_t  LeadingEdgeMode;  // 0x4(0x4)
	uint8_t  TrailingEdgeMode;  // 0x8(0x4)
	float TilingLength;  // 0xC(0x4)
	struct FVector2D Offset;  // 0x10(0x8)
	struct FVector2D Scale;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bEnablePerParticleUOverride : 1;  // 0x20(0x1)
	char pad_33_1 : 7;  // 0x21(0x1)
	bool bEnablePerParticleVRangeOverride : 1;  // 0x21(0x1)
	char pad_34[2];  // 0x22(0x2)

}; 
// ScriptStruct Niagara.NiagaraRibbonShapeCustomVertex
// Size: 0x14(Inherited: 0x0) 
struct FNiagaraRibbonShapeCustomVertex
{
	struct FVector2D position;  // 0x0(0x8)
	struct FVector2D Normal;  // 0x8(0x8)
	float TextureV;  // 0x10(0x4)

}; 
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
// Size: 0x40(Inherited: 0x0) 
struct FSpawnSystemAtLocation
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UNiagaraSystem* SystemTemplate;  // 0x8(0x8)
	struct FVector Location;  // 0x10(0xC)
	struct FRotator Rotation;  // 0x1C(0xC)
	struct FVector Scale;  // 0x28(0xC)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool bAutoDestroy : 1;  // 0x34(0x1)
	char pad_53_1 : 7;  // 0x35(0x1)
	bool bAutoActivate : 1;  // 0x35(0x1)
	uint8_t  PoolingMethod;  // 0x36(0x1)
	char pad_55_1 : 7;  // 0x37(0x1)
	bool bPreCullCheck : 1;  // 0x37(0x1)
	struct UNiagaraComponent* ReturnValue;  // 0x38(0x8)

}; 
// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
// Size: 0x18(Inherited: 0x0) 
struct FGetNiagaraParameterCollection
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UNiagaraParameterCollection* Collection;  // 0x8(0x8)
	struct UNiagaraParameterCollectionInstance* ReturnValue;  // 0x10(0x8)

}; 
// ScriptStruct Niagara.NiagaraVMExecutableData
// Size: 0xF0(Inherited: 0x0) 
struct FNiagaraVMExecutableData
{
	struct TArray<char> ByteCode;  // 0x0(0x10)
	struct TArray<char> OptimizedByteCode;  // 0x10(0x10)
	int32_t NumTempRegisters;  // 0x20(0x4)
	int32_t NumUserPtrs;  // 0x24(0x4)
	struct TArray<struct FNiagaraCompilerTag> CompileTags;  // 0x28(0x10)
	struct TArray<char> ScriptLiterals;  // 0x38(0x10)
	struct TArray<struct FNiagaraVariable> Attributes;  // 0x48(0x10)
	struct FNiagaraScriptDataUsageInfo DataUsage;  // 0x58(0x1)
	char pad_89[7];  // 0x59(0x7)
	struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;  // 0x60(0x10)
	struct TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;  // 0x70(0x10)
	char pad_128[16];  // 0x80(0x10)
	struct TArray<struct FNiagaraDataSetID> ReadDataSets;  // 0x90(0x10)
	struct TArray<struct FNiagaraDataSetProperties> WriteDataSets;  // 0xA0(0x10)
	struct TArray<struct FNiagaraStatScope> StatScopes;  // 0xB0(0x10)
	struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> DIParamInfo;  // 0xC0(0x10)
	uint8_t  LastCompileStatus;  // 0xD0(0x1)
	char pad_209[7];  // 0xD1(0x7)
	struct TArray<struct FSimulationStageMetaData> SimulationStageMetaData;  // 0xD8(0x10)
	char bReadsSignificanceIndex : 1;  // 0xE8(0x1)
	char bNeedsGPUContextInit : 1;  // 0xE8(0x1)
	char pad_232_1 : 6;  // 0xE8(0x1)
	char pad_233[8];  // 0xE9(0x8)

}; 
// Function Niagara.NiagaraComponent.SetForceSolo
// Size: 0x1(Inherited: 0x0) 
struct FSetForceSolo
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInForceSolo : 1;  // 0x0(0x1)

}; 
// ScriptStruct Niagara.NiagaraCompilerTag
// Size: 0x30(Inherited: 0x0) 
struct FNiagaraCompilerTag
{
	struct FNiagaraVariable Variable;  // 0x0(0x20)
	struct FString StringValue;  // 0x20(0x10)

}; 
// ScriptStruct Niagara.NiagaraVMExecutableDataId
// Size: 0x58(Inherited: 0x0) 
struct FNiagaraVMExecutableDataId
{
	struct FGuid CompilerVersionID;  // 0x0(0x10)
	uint8_t  ScriptUsageType;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	struct FGuid ScriptUsageTypeID;  // 0x14(0x10)
	char bUsesRapidIterationParams : 1;  // 0x24(0x1)
	char bInterpolatedSpawn : 1;  // 0x24(0x1)
	char bRequiresPersistentIDs : 1;  // 0x24(0x1)
	char pad_36_1 : 5;  // 0x24(0x1)
	char pad_37[4];  // 0x25(0x4)
	struct FGuid BaseScriptID;  // 0x28(0x10)
	struct FNiagaraCompileHash BaseScriptCompileHash;  // 0x38(0x10)
	struct FGuid ScriptVersionID;  // 0x48(0x10)

}; 
// ScriptStruct Niagara.NiagaraScriptHighlight
// Size: 0x28(Inherited: 0x0) 
struct FNiagaraScriptHighlight
{
	struct FLinearColor Color;  // 0x0(0x10)
	struct FText DisplayName;  // 0x10(0x18)

}; 
// ScriptStruct Niagara.NiagaraModuleDependency
// Size: 0x28(Inherited: 0x0) 
struct FNiagaraModuleDependency
{
	struct FName ID;  // 0x0(0x8)
	uint8_t  Type;  // 0x8(0x1)
	uint8_t  ScriptConstraint;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)
	struct FText Description;  // 0x10(0x18)

}; 
// ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
// Size: 0x88(Inherited: 0x78) 
struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{
	char pad_120[16];  // 0x78(0x10)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
// Size: 0x18(Inherited: 0x0) 
struct FGetFloatParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	float ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// Size: 0x18(Inherited: 0x0) 
struct FSetNiagaraVariableFloat
{
	struct FString InVariableName;  // 0x0(0x10)
	float InValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
// Size: 0x8(Inherited: 0x0) 
struct FNiagaraScriptExecutionPaddingInfo
{
	uint16_t SrcOffset;  // 0x0(0x2)
	uint16_t DestOffset;  // 0x2(0x2)
	uint16_t SrcSize;  // 0x4(0x2)
	uint16_t DestSize;  // 0x6(0x2)

}; 
// ScriptStruct Niagara.NiagaraSystemCompileRequest
// Size: 0x80(Inherited: 0x0) 
struct FNiagaraSystemCompileRequest
{
	char pad_0[8];  // 0x0(0x8)
	struct TArray<struct UObject*> RootObjects;  // 0x8(0x10)
	char pad_24[104];  // 0x18(0x68)

}; 
// ScriptStruct Niagara.EmitterCompiledScriptPair
// Size: 0x90(Inherited: 0x0) 
struct FEmitterCompiledScriptPair
{
	char pad_0[144];  // 0x0(0x90)

}; 
// ScriptStruct Niagara.NiagaraSystemCompiledData
// Size: 0x218(Inherited: 0x0) 
struct FNiagaraSystemCompiledData
{
	struct FNiagaraParameterStore InstanceParamStore;  // 0x0(0x78)
	struct FNiagaraDataSetCompiledData DataSetCompiledData;  // 0x78(0x40)
	struct FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;  // 0xB8(0x40)
	struct FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;  // 0xF8(0x40)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;  // 0x138(0x20)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;  // 0x158(0x20)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;  // 0x178(0x20)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;  // 0x198(0x10)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;  // 0x1A8(0x20)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;  // 0x1C8(0x20)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;  // 0x1E8(0x20)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;  // 0x208(0x10)

}; 
// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
// Size: 0x20(Inherited: 0x0) 
struct FNiagaraParameterDataSetBindingCollection
{
	struct TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets;  // 0x0(0x10)
	struct TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
// Size: 0x20(Inherited: 0x0) 
struct FGetNiagaraArrayInt32
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<int32_t> ReturnValue;  // 0x10(0x10)

}; 
// ScriptStruct Niagara.NiagaraEmitterCompiledData
// Size: 0x130(Inherited: 0x0) 
struct FNiagaraEmitterCompiledData
{
	struct TArray<struct FName> SpawnAttributes;  // 0x0(0x10)
	struct FNiagaraVariable EmitterSpawnIntervalVar;  // 0x10(0x20)
	struct FNiagaraVariable EmitterInterpSpawnStartDTVar;  // 0x30(0x20)
	struct FNiagaraVariable EmitterSpawnGroupVar;  // 0x50(0x20)
	struct FNiagaraVariable EmitterAgeVar;  // 0x70(0x20)
	struct FNiagaraVariable EmitterRandomSeedVar;  // 0x90(0x20)
	struct FNiagaraVariable EmitterInstanceSeedVar;  // 0xB0(0x20)
	struct FNiagaraVariable EmitterTotalSpawnedParticlesVar;  // 0xD0(0x20)
	struct FNiagaraDataSetCompiledData DataSetCompiledData;  // 0xF0(0x40)

}; 
// ScriptStruct Niagara.NiagaraVariableMetaData
// Size: 0xE0(Inherited: 0x0) 
struct FNiagaraVariableMetaData
{
	struct FText Description;  // 0x0(0x18)
	struct FText CategoryName;  // 0x18(0x18)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bAdvancedDisplay : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	int32_t EditorSortPriority;  // 0x34(0x4)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bInlineEditConditionToggle : 1;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)
	struct FNiagaraInputConditionMetadata EditCondition;  // 0x40(0x18)
	struct FNiagaraInputConditionMetadata VisibleCondition;  // 0x58(0x18)
	struct TMap<struct FName, struct FString> PropertyMetaData;  // 0x70(0x50)
	struct FName ParentAttribute;  // 0xC0(0x8)
	struct FGuid VariableGuid;  // 0xC8(0x10)
	char pad_216_1 : 7;  // 0xD8(0x1)
	bool bIsStaticSwitch : 1;  // 0xD8(0x1)
	char pad_217[3];  // 0xD9(0x3)
	int32_t StaticSwitchDefaultValue;  // 0xDC(0x4)

}; 
// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
// Size: 0x30(Inherited: 0x0) 
struct FGetNiagaraParticleValues_DebugOnly
{
	struct FString InEmitterName;  // 0x0(0x10)
	struct FString InValueName;  // 0x10(0x10)
	struct TArray<float> ReturnValue;  // 0x20(0x10)

}; 
// ScriptStruct Niagara.NiagaraInputConditionMetadata
// Size: 0x18(Inherited: 0x0) 
struct FNiagaraInputConditionMetadata
{
	struct FName InputName;  // 0x0(0x8)
	struct TArray<struct FString> TargetValues;  // 0x8(0x10)

}; 
// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
// Size: 0x30(Inherited: 0x0) 
struct FNiagaraCompileHashVisitorDebugInfo
{
	struct FString Object;  // 0x0(0x10)
	struct TArray<struct FString> PropertyKeys;  // 0x10(0x10)
	struct TArray<struct FString> PropertyValues;  // 0x20(0x10)

}; 
// ScriptStruct Niagara.NiagaraSpawnInfo
// Size: 0x10(Inherited: 0x0) 
struct FNiagaraSpawnInfo
{
	int32_t Count;  // 0x0(0x4)
	float InterpStartDt;  // 0x4(0x4)
	float IntervalDt;  // 0x8(0x4)
	int32_t SpawnGroup;  // 0xC(0x4)

}; 
// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
// Size: 0x20(Inherited: 0x0) 
struct FApplyToPreview
{
	struct UNiagaraComponent* PreviewComponent;  // 0x0(0x8)
	int32_t PreviewIndex;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bIsXAxis : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct FString OutLabelText;  // 0x10(0x10)

}; 
// ScriptStruct Niagara.NiagaraAssetVersion
// Size: 0x1C(Inherited: 0x0) 
struct FNiagaraAssetVersion
{
	int32_t MajorVersion;  // 0x0(0x4)
	int32_t MinorVersion;  // 0x4(0x4)
	struct FGuid VersionGuid;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bIsVisibleInVersionSelector : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)

}; 
// ScriptStruct Niagara.NiagaraParameterMap
// Size: 0x1(Inherited: 0x0) 
struct FNiagaraParameterMap
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct Niagara.NiagaraNumeric
// Size: 0x1(Inherited: 0x0) 
struct FNiagaraNumeric
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct Niagara.NiagaraHalfVector4
// Size: 0x8(Inherited: 0x0) 
struct FNiagaraHalfVector4
{
	uint16_t X;  // 0x0(0x2)
	uint16_t Y;  // 0x2(0x2)
	uint16_t Z;  // 0x4(0x2)
	uint16_t W;  // 0x6(0x2)

}; 
// ScriptStruct Niagara.NiagaraHalfVector3
// Size: 0x6(Inherited: 0x0) 
struct FNiagaraHalfVector3
{
	uint16_t X;  // 0x0(0x2)
	uint16_t Y;  // 0x2(0x2)
	uint16_t Z;  // 0x4(0x2)

}; 
// ScriptStruct Niagara.NiagaraHalfVector2
// Size: 0x4(Inherited: 0x0) 
struct FNiagaraHalfVector2
{
	uint16_t X;  // 0x0(0x2)
	uint16_t Y;  // 0x2(0x2)

}; 
// ScriptStruct Niagara.NiagaraHalf
// Size: 0x2(Inherited: 0x0) 
struct FNiagaraHalf
{
	uint16_t Value;  // 0x0(0x2)

}; 
// ScriptStruct Niagara.NiagaraBool
// Size: 0x4(Inherited: 0x0) 
struct FNiagaraBool
{
	int32_t Value;  // 0x0(0x4)

}; 
// ScriptStruct Niagara.NiagaraInt32
// Size: 0x4(Inherited: 0x0) 
struct FNiagaraInt32
{
	int32_t Value;  // 0x0(0x4)

}; 
// ScriptStruct Niagara.NiagaraFloat
// Size: 0x4(Inherited: 0x0) 
struct FNiagaraFloat
{
	float Value;  // 0x0(0x4)

}; 
// ScriptStruct Niagara.NiagaraWildcard
// Size: 0x1(Inherited: 0x0) 
struct FNiagaraWildcard
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// Size: 0xC8(Inherited: 0x78) 
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
	struct TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;  // 0x78(0x50)

}; 
// ScriptStruct Niagara.NiagaraVariant
// Size: 0x28(Inherited: 0x0) 
struct FNiagaraVariant
{
	struct UObject* Object;  // 0x0(0x8)
	struct UNiagaraDataInterface* DataInterface;  // 0x8(0x8)
	struct TArray<char> bytes;  // 0x10(0x10)
	uint8_t  CurrentMode;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
// Size: 0x30(Inherited: 0x28) 
struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
	char pad_40[8];  // 0x28(0x8)

}; 
// Function Niagara.NiagaraBaselineController.OnOwnerTick
// Size: 0x4(Inherited: 0x0) 
struct FOnOwnerTick
{
	float DeltaTime;  // 0x0(0x4)

}; 
// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
// Size: 0x8(Inherited: 0x0) 
struct FAdvanceSimulationByTime
{
	float SimulateTime;  // 0x0(0x4)
	float TickDeltaSeconds;  // 0x4(0x4)

}; 
// Function Niagara.NiagaraActor.OnNiagaraSystemFinished
// Size: 0x8(Inherited: 0x0) 
struct FOnNiagaraSystemFinished
{
	struct UNiagaraComponent* FinishedComponent;  // 0x0(0x8)

}; 
// Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
// Size: 0x1(Inherited: 0x0) 
struct FSetDestroyOnSystemFinish
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bShouldDestroyOnSystemFinish : 1;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraComponent.GetAgeUpdateMode
// Size: 0x1(Inherited: 0x0) 
struct FGetAgeUpdateMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraComponent.GetAsset
// Size: 0x8(Inherited: 0x0) 
struct FGetAsset
{
	struct UNiagaraSystem* ReturnValue;  // 0x0(0x8)

}; 
// Function Niagara.NiagaraComponent.GetDataInterface
// Size: 0x18(Inherited: 0x0) 
struct FGetDataInterface
{
	struct FString Name;  // 0x0(0x10)
	struct UNiagaraDataInterface* ReturnValue;  // 0x10(0x8)

}; 
// Function Niagara.NiagaraComponent.GetDesiredAge
// Size: 0x4(Inherited: 0x0) 
struct FGetDesiredAge
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
// Size: 0x1(Inherited: 0x0) 
struct FGetLockDesiredAgeDeltaTimeToSeekDelta
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
// Size: 0x20(Inherited: 0x0) 
struct FGetNiagaraParticlePositions_DebugOnly
{
	struct FString InEmitterName;  // 0x0(0x10)
	struct TArray<struct FVector> ReturnValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
// Size: 0x30(Inherited: 0x0) 
struct FGetNiagaraParticleValueVec3_DebugOnly
{
	struct FString InEmitterName;  // 0x0(0x10)
	struct FString InValueName;  // 0x10(0x10)
	struct TArray<struct FVector> ReturnValue;  // 0x20(0x10)

}; 
// Function Niagara.NiagaraComponent.GetPreviewLODDistance
// Size: 0x4(Inherited: 0x0) 
struct FGetPreviewLODDistance
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
// Size: 0x1(Inherited: 0x0) 
struct FGetPreviewLODDistanceEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraComponent.GetTickBehavior
// Size: 0x1(Inherited: 0x0) 
struct FGetTickBehavior
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraComponent.IsPaused
// Size: 0x1(Inherited: 0x0) 
struct FIsPaused
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraComponent.SeekToDesiredAge
// Size: 0x4(Inherited: 0x0) 
struct FSeekToDesiredAge
{
	float InDesiredAge;  // 0x0(0x4)

}; 
// Function Niagara.NiagaraComponent.SetVariableObject
// Size: 0x10(Inherited: 0x0) 
struct FSetVariableObject
{
	struct FName InVariableName;  // 0x0(0x8)
	struct UObject* Object;  // 0x8(0x8)

}; 
// Function Niagara.NiagaraComponent.SetVariableActor
// Size: 0x10(Inherited: 0x0) 
struct FSetVariableActor
{
	struct FName InVariableName;  // 0x0(0x8)
	struct AActor* Actor;  // 0x8(0x8)

}; 
// Function Niagara.NiagaraComponent.SetAgeUpdateMode
// Size: 0x1(Inherited: 0x0) 
struct FSetAgeUpdateMode
{
	uint8_t  InAgeUpdateMode;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraComponent.SetAllowScalability
// Size: 0x1(Inherited: 0x0) 
struct FSetAllowScalability
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bAllow : 1;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraComponent.SetAsset
// Size: 0x10(Inherited: 0x0) 
struct FSetAsset
{
	struct UNiagaraSystem* InAsset;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bResetExistingOverrideParameters : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function Niagara.NiagaraComponent.SetAutoDestroy
// Size: 0x1(Inherited: 0x0) 
struct FSetAutoDestroy
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInAutoDestroy : 1;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
// Size: 0x1(Inherited: 0x0) 
struct FSetCanRenderWhileSeeking
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInCanRenderWhileSeeking : 1;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraComponent.SetDesiredAge
// Size: 0x4(Inherited: 0x0) 
struct FSetDesiredAge
{
	float InDesiredAge;  // 0x0(0x4)

}; 
// Function Niagara.NiagaraComponent.SetGpuComputeDebug
// Size: 0x1(Inherited: 0x0) 
struct FSetGpuComputeDebug
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnableDebug : 1;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
// Size: 0x18(Inherited: 0x0) 
struct FGetVector2DParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FVector2D ReturnValue;  // 0x10(0x8)

}; 
// Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
// Size: 0x1(Inherited: 0x0) 
struct FSetLockDesiredAgeDeltaTimeToSeekDelta
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bLock : 1;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraComponent.SetMaxSimTime
// Size: 0x4(Inherited: 0x0) 
struct FSetMaxSimTime
{
	float InMaxTime;  // 0x0(0x4)

}; 
// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
// Size: 0x18(Inherited: 0x0) 
struct FSetNiagaraVariableActor
{
	struct FString InVariableName;  // 0x0(0x10)
	struct AActor* Actor;  // 0x10(0x8)

}; 
// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// Size: 0x18(Inherited: 0x0) 
struct FSetNiagaraVariableBool
{
	struct FString InVariableName;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool InValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
// Size: 0x18(Inherited: 0x0) 
struct FSetNiagaraVariableInt
{
	struct FString InVariableName;  // 0x0(0x10)
	int32_t InValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
// Size: 0x18(Inherited: 0x0) 
struct FSetNiagaraVariableObject
{
	struct FString InVariableName;  // 0x0(0x10)
	struct UObject* Object;  // 0x10(0x8)

}; 
// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraVariableQuat
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FQuat InValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// Size: 0x18(Inherited: 0x0) 
struct FSetNiagaraVariableVec2
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FVector2D InValue;  // 0x10(0x8)

}; 
// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraVariableVec3
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FVector InValue;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraVariableVec4
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FVector4 InValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraComponent.SetPreviewLODDistance
// Size: 0x8(Inherited: 0x0) 
struct FSetPreviewLODDistance
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnablePreviewLODDistance : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float PreviewLODDistance;  // 0x4(0x4)

}; 
// Function Niagara.NiagaraComponent.SetRandomSeedOffset
// Size: 0x4(Inherited: 0x0) 
struct FSetRandomSeedOffset
{
	int32_t NewRandomSeedOffset;  // 0x0(0x4)

}; 
// Function Niagara.NiagaraComponent.SetSeekDelta
// Size: 0x4(Inherited: 0x0) 
struct FSetSeekDelta
{
	float InSeekDelta;  // 0x0(0x4)

}; 
// Function Niagara.NiagaraComponent.SetTickBehavior
// Size: 0x1(Inherited: 0x0) 
struct FSetTickBehavior
{
	uint8_t  NewTickBehavior;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraComponent.SetVariableBool
// Size: 0xC(Inherited: 0x0) 
struct FSetVariableBool
{
	struct FName InVariableName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool InValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function Niagara.NiagaraComponent.SetVariableFloat
// Size: 0xC(Inherited: 0x0) 
struct FSetVariableFloat
{
	struct FName InVariableName;  // 0x0(0x8)
	float InValue;  // 0x8(0x4)

}; 
// Function Niagara.NiagaraComponent.SetVariableInt
// Size: 0xC(Inherited: 0x0) 
struct FSetVariableInt
{
	struct FName InVariableName;  // 0x0(0x8)
	int32_t InValue;  // 0x8(0x4)

}; 
// Function Niagara.NiagaraComponent.SetVariableLinearColor
// Size: 0x18(Inherited: 0x0) 
struct FSetVariableLinearColor
{
	struct FName InVariableName;  // 0x0(0x8)
	struct FLinearColor InValue;  // 0x8(0x10)

}; 
// Function Niagara.NiagaraComponent.SetVariableMaterial
// Size: 0x10(Inherited: 0x0) 
struct FSetVariableMaterial
{
	struct FName InVariableName;  // 0x0(0x8)
	struct UMaterialInterface* Object;  // 0x8(0x8)

}; 
// Function Niagara.NiagaraComponent.SetVariableQuat
// Size: 0x20(Inherited: 0x0) 
struct FSetVariableQuat
{
	struct FName InVariableName;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FQuat InValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
// Size: 0x10(Inherited: 0x0) 
struct FSetVariableTextureRenderTarget
{
	struct FName InVariableName;  // 0x0(0x8)
	struct UTextureRenderTarget* TextureRenderTarget;  // 0x8(0x8)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
// Size: 0x18(Inherited: 0x0) 
struct FSetIntParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	int32_t InValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function Niagara.NiagaraComponent.SetVariableVec2
// Size: 0x10(Inherited: 0x0) 
struct FSetVariableVec2
{
	struct FName InVariableName;  // 0x0(0x8)
	struct FVector2D InValue;  // 0x8(0x8)

}; 
// Function Niagara.NiagaraComponent.SetVariableVec3
// Size: 0x14(Inherited: 0x0) 
struct FSetVariableVec3
{
	struct FName InVariableName;  // 0x0(0x8)
	struct FVector InValue;  // 0x8(0xC)

}; 
// Function Niagara.NiagaraComponent.SetVariableVec4
// Size: 0x20(Inherited: 0x0) 
struct FSetVariableVec4
{
	struct FName InVariableName;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FVector4 InValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
// Size: 0x20(Inherited: 0x0) 
struct FGetNiagaraArrayBool
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<bool> ReturnValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
// Size: 0x18(Inherited: 0x0) 
struct FGetNiagaraArrayBoolValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ReturnValue : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
// Size: 0x20(Inherited: 0x0) 
struct FGetNiagaraArrayColor
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<struct FLinearColor> ReturnValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
// Size: 0x28(Inherited: 0x0) 
struct FGetNiagaraArrayColorValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	struct FLinearColor ReturnValue;  // 0x14(0x10)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
// Size: 0x18(Inherited: 0x0) 
struct FGetNiagaraArrayFloatValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	float ReturnValue;  // 0x14(0x4)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
// Size: 0x20(Inherited: 0x0) 
struct FGetNiagaraArrayQuat
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<struct FQuat> ReturnValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
// Size: 0x30(Inherited: 0x0) 
struct FGetNiagaraArrayQuatValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	char pad_20[12];  // 0x14(0xC)
	struct FQuat ReturnValue;  // 0x20(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
// Size: 0x20(Inherited: 0x0) 
struct FGetNiagaraArrayVector
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<struct FVector> ReturnValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
// Size: 0x20(Inherited: 0x0) 
struct FGetNiagaraArrayVector4
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<struct FVector4> ReturnValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
// Size: 0x30(Inherited: 0x0) 
struct FGetNiagaraArrayVector4Value
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	char pad_20[12];  // 0x14(0xC)
	struct FVector4 ReturnValue;  // 0x20(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraArrayBool
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<bool> ArrayData;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraArrayColor
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<struct FLinearColor> ArrayData;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
// Size: 0x28(Inherited: 0x0) 
struct FSetNiagaraArrayColorValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	struct FLinearColor Value;  // 0x14(0x10)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool bSizeToFit : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraArrayFloat
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<float> ArrayData;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraArrayFloatValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	float Value;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bSizeToFit : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraArrayInt32
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<int32_t> ArrayData;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraArrayInt32Value
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	int32_t Value;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bSizeToFit : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraArrayQuat
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<struct FQuat> ArrayData;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
// Size: 0x18(Inherited: 0x0) 
struct FGetIntParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	int32_t ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
// Size: 0x40(Inherited: 0x0) 
struct FSetNiagaraArrayQuatValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	char pad_20[12];  // 0x14(0xC)
	struct FQuat Value;  // 0x20(0x10)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bSizeToFit : 1;  // 0x30(0x1)
	char pad_49[15];  // 0x31(0xF)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraArrayVector
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<struct FVector> ArrayData;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraArrayVector2D
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<struct FVector2D> ArrayData;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraArrayVector2DValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	struct FVector2D Value;  // 0x14(0x8)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bSizeToFit : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
// Size: 0x20(Inherited: 0x0) 
struct FSetNiagaraArrayVector4
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	struct TArray<struct FVector4> ArrayData;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
// Size: 0x40(Inherited: 0x0) 
struct FSetNiagaraArrayVector4Value
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	char pad_20[12];  // 0x14(0xC)
	struct FVector4 Value;  // 0x20(0x10)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bSizeToFit : 1;  // 0x30(0x1)
	char pad_49[15];  // 0x31(0xF)

}; 
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
// Size: 0x28(Inherited: 0x0) 
struct FSetNiagaraArrayVectorValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FName OverrideName;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	struct FVector Value;  // 0x14(0xC)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bSizeToFit : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
// Size: 0x18(Inherited: 0x0) 
struct FReceiveParticleData
{
	struct TArray<struct FBasicParticleData> Data;  // 0x0(0x10)
	struct UNiagaraSystem* NiagaraSystem;  // 0x10(0x8)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
// Size: 0x20(Inherited: 0x0) 
struct FGetVector4Parameter
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FVector4 ReturnValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
// Size: 0x20(Inherited: 0x0) 
struct FFillRawTexture2D
{
	struct UNiagaraComponent* Component;  // 0x0(0x8)
	struct UTextureRenderTarget2D* Dest;  // 0x8(0x8)
	int32_t TilesX;  // 0x10(0x4)
	int32_t TilesY;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
// Size: 0x18(Inherited: 0x0) 
struct FFillTexture2D
{
	struct UNiagaraComponent* Component;  // 0x0(0x8)
	struct UTextureRenderTarget2D* Dest;  // 0x8(0x8)
	int32_t AttributeIndex;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ReturnValue : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
// Size: 0x18(Inherited: 0x0) 
struct FGetRawTextureSize
{
	struct UNiagaraComponent* Component;  // 0x0(0x8)
	int32_t SizeX;  // 0x8(0x4)
	int32_t SizeY;  // 0xC(0x4)
	int32_t SizeZ;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
// Size: 0x20(Inherited: 0x0) 
struct FOverrideSystemUserVariableStaticMeshComponent
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FString OverrideName;  // 0x8(0x10)
	struct UStaticMeshComponent* StaticMeshComponent;  // 0x18(0x8)

}; 
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
// Size: 0x18(Inherited: 0x0) 
struct FGetTextureSize
{
	struct UNiagaraComponent* Component;  // 0x0(0x8)
	int32_t SizeX;  // 0x8(0x4)
	int32_t SizeY;  // 0xC(0x4)
	int32_t SizeZ;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
// Size: 0x20(Inherited: 0x0) 
struct FFillRawVolumeTexture
{
	struct UNiagaraComponent* Component;  // 0x0(0x8)
	struct UVolumeTexture* Dest;  // 0x8(0x8)
	int32_t TilesX;  // 0x10(0x4)
	int32_t TilesY;  // 0x14(0x4)
	int32_t TileZ;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool ReturnValue : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
// Size: 0x18(Inherited: 0x0) 
struct FFillVolumeTexture
{
	struct UNiagaraComponent* Component;  // 0x0(0x8)
	struct UVolumeTexture* Dest;  // 0x8(0x8)
	int32_t AttributeIndex;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ReturnValue : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
// Size: 0x20(Inherited: 0x0) 
struct FOverrideSystemUserVariableSkeletalMeshComponent
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FString OverrideName;  // 0x8(0x10)
	struct USkeletalMeshComponent* SkeletalMeshComponent;  // 0x18(0x8)

}; 
// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
// Size: 0x28(Inherited: 0x0) 
struct FSetSkeletalMeshDataInterfaceSamplingRegions
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FString OverrideName;  // 0x8(0x10)
	struct TArray<struct FName> SamplingRegions;  // 0x18(0x10)

}; 
// Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
// Size: 0x20(Inherited: 0x0) 
struct FSetTexture2DArrayObject
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FString OverrideName;  // 0x8(0x10)
	struct UTexture2DArray* Texture;  // 0x18(0x8)

}; 
// Function Niagara.NiagaraFunctionLibrary.SetTextureObject
// Size: 0x20(Inherited: 0x0) 
struct FSetTextureObject
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0(0x8)
	struct FString OverrideName;  // 0x8(0x10)
	struct UTexture* Texture;  // 0x18(0x8)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
// Size: 0x20(Inherited: 0x0) 
struct FGetQuatParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FQuat ReturnValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
// Size: 0x20(Inherited: 0x0) 
struct FGetVectorParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FVector ReturnValue;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
// Size: 0x18(Inherited: 0x0) 
struct FSetFloatParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	float InValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
// Size: 0x18(Inherited: 0x0) 
struct FSetVector2DParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FVector2D InValue;  // 0x10(0x8)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
// Size: 0x20(Inherited: 0x0) 
struct FSetVector4Parameter
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FVector4 InValue;  // 0x10(0x10)

}; 
// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
// Size: 0x20(Inherited: 0x0) 
struct FSetVectorParameter
{
	struct FString InVariableName;  // 0x0(0x10)
	struct FVector InValue;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function Niagara.NiagaraBaselineController.GetSystem
// Size: 0x8(Inherited: 0x0) 
struct FGetSystem
{
	struct UNiagaraSystem* ReturnValue;  // 0x0(0x8)

}; 
// Function Niagara.NiagaraBaselineController.OnTickTest
// Size: 0x1(Inherited: 0x0) 
struct FOnTickTest
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraPreviewBase.SetLabelText
// Size: 0x30(Inherited: 0x0) 
struct FSetLabelText
{
	struct FText InXAxisText;  // 0x0(0x18)
	struct FText InYAxisText;  // 0x18(0x18)

}; 
// Function Niagara.NiagaraPreviewBase.SetSystem
// Size: 0x8(Inherited: 0x0) 
struct FSetSystem
{
	struct UNiagaraSystem* InSystem;  // 0x0(0x8)

}; 
// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
// Size: 0x1(Inherited: 0x0) 
struct FActivatePreviews
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bReset : 1;  // 0x0(0x1)

}; 
// Function Niagara.NiagaraPreviewGrid.GetPreviews
// Size: 0x10(Inherited: 0x0) 
struct FGetPreviews
{
	struct TArray<struct UNiagaraComponent*> OutPreviews;  // 0x0(0x10)

}; 
