#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct NiagaraShader.SimulationStageMetaData
// Size: 0x30(Inherited: 0x0) 
struct FSimulationStageMetaData
{
	struct FName SimulationStageName;  // 0x0(0x8)
	struct FName IterationSource;  // 0x8(0x8)
	char bSpawnOnly : 1;  // 0x10(0x1)
	char bWritesParticles : 1;  // 0x10(0x1)
	char bPartialParticleUpdate : 1;  // 0x10(0x1)
	char pad_16_1 : 5;  // 0x10(0x1)
	char pad_17[8];  // 0x11(0x8)
	struct TArray<struct FName> OutputDestinations;  // 0x18(0x10)
	int32_t MinStage;  // 0x28(0x4)
	int32_t MaxStage;  // 0x2C(0x4)

}; 
// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// Size: 0x30(Inherited: 0x0) 
struct FNiagaraDataInterfaceGPUParamInfo
{
	struct FString DataInterfaceHLSLSymbol;  // 0x0(0x10)
	struct FString DIClassName;  // 0x10(0x10)
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;  // 0x20(0x10)

}; 
// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// Size: 0x28(Inherited: 0x0) 
struct FNiagaraDataInterfaceGeneratedFunction
{
	char pad_0[40];  // 0x0(0x28)

}; 
// ScriptStruct NiagaraShader.NiagaraCompileEvent
// Size: 0x60(Inherited: 0x0) 
struct FNiagaraCompileEvent
{
	uint8_t  Severity;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FString Message;  // 0x8(0x10)
	struct FString ShortDescription;  // 0x18(0x10)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bDismissable : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	struct FGuid NodeGuid;  // 0x2C(0x10)
	struct FGuid PinGuid;  // 0x3C(0x10)
	char pad_76[4];  // 0x4C(0x4)
	struct TArray<struct FGuid> StackGuids;  // 0x50(0x10)

}; 
