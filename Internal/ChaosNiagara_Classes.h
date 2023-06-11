#pragma once 
#include <ChaosNiagara_Structs.h>
 
 
 
// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
// Size: 0x238(Inherited: 0x38) 
struct UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
	struct TSet<struct AChaosSolverActor*> ChaosSolverActorSet;  // 0x38(0x50)
	uint8_t  DataSourceType;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	int32_t DataProcessFrequency;  // 0x8C(0x4)
	int32_t MaxNumberOfDataEntriesToSpawn;  // 0x90(0x4)
	char pad_148_1 : 7;  // 0x94(0x1)
	bool DoSpawn : 1;  // 0x94(0x1)
	char pad_149[3];  // 0x95(0x3)
	struct FVector2D SpawnMultiplierMinMax;  // 0x98(0x8)
	float SpawnChance;  // 0xA0(0x4)
	struct FVector2D ImpulseToSpawnMinMax;  // 0xA4(0x8)
	struct FVector2D SpeedToSpawnMinMax;  // 0xAC(0x8)
	struct FVector2D MassToSpawnMinMax;  // 0xB4(0x8)
	struct FVector2D ExtentMinToSpawnMinMax;  // 0xBC(0x8)
	struct FVector2D ExtentMaxToSpawnMinMax;  // 0xC4(0x8)
	struct FVector2D VolumeToSpawnMinMax;  // 0xCC(0x8)
	struct FVector2D SolverTimeToSpawnMinMax;  // 0xD4(0x8)
	int32_t SurfaceTypeToSpawn;  // 0xDC(0x4)
	uint8_t  LocationFilteringMode;  // 0xE0(0x1)
	uint8_t  LocationXToSpawn;  // 0xE1(0x1)
	char pad_226[2];  // 0xE2(0x2)
	struct FVector2D LocationXToSpawnMinMax;  // 0xE4(0x8)
	uint8_t  LocationYToSpawn;  // 0xEC(0x1)
	char pad_237[3];  // 0xED(0x3)
	struct FVector2D LocationYToSpawnMinMax;  // 0xF0(0x8)
	uint8_t  LocationZToSpawn;  // 0xF8(0x1)
	char pad_249[3];  // 0xF9(0x3)
	struct FVector2D LocationZToSpawnMinMax;  // 0xFC(0x8)
	uint8_t  DataSortingType;  // 0x104(0x1)
	char pad_261_1 : 7;  // 0x105(0x1)
	bool bGetExternalCollisionData : 1;  // 0x105(0x1)
	char pad_262_1 : 7;  // 0x106(0x1)
	bool DoSpatialHash : 1;  // 0x106(0x1)
	char pad_263[1];  // 0x107(0x1)
	struct FVector SpatialHashVolumeMin;  // 0x108(0xC)
	struct FVector SpatialHashVolumeMax;  // 0x114(0xC)
	struct FVector SpatialHashVolumeCellSize;  // 0x120(0xC)
	int32_t MaxDataPerCell;  // 0x12C(0x4)
	char pad_304_1 : 7;  // 0x130(0x1)
	bool bApplyMaterialsFilter : 1;  // 0x130(0x1)
	char pad_305[7];  // 0x131(0x7)
	struct TSet<struct UPhysicalMaterial*> ChaosBreakingMaterialSet;  // 0x138(0x50)
	char pad_392_1 : 7;  // 0x188(0x1)
	bool bGetExternalBreakingData : 1;  // 0x188(0x1)
	char pad_393_1 : 7;  // 0x189(0x1)
	bool bGetExternalTrailingData : 1;  // 0x189(0x1)
	char pad_394[2];  // 0x18A(0x2)
	struct FVector2D RandomPositionMagnitudeMinMax;  // 0x18C(0x8)
	float InheritedVelocityMultiplier;  // 0x194(0x4)
	uint8_t  RandomVelocityGenerationType;  // 0x198(0x1)
	char pad_409[3];  // 0x199(0x3)
	struct FVector2D RandomVelocityMagnitudeMinMax;  // 0x19C(0x8)
	float SpreadAngleMax;  // 0x1A4(0x4)
	struct FVector VelocityOffsetMin;  // 0x1A8(0xC)
	struct FVector VelocityOffsetMax;  // 0x1B4(0xC)
	struct FVector2D FinalVelocityMagnitudeMinMax;  // 0x1C0(0x8)
	float MaxLatency;  // 0x1C8(0x4)
	uint8_t  DebugType;  // 0x1CC(0x1)
	char pad_461[3];  // 0x1CD(0x3)
	int32_t LastSpawnedPointID;  // 0x1D0(0x4)
	float LastSpawnTime;  // 0x1D4(0x4)
	char pad_472[16];  // 0x1D8(0x10)
	float SolverTime;  // 0x1E8(0x4)
	float TimeStampOfLastProcessedData;  // 0x1EC(0x4)
	char pad_496[72];  // 0x1F0(0x48)

}; 



// Class ChaosNiagara.NiagaraDataInterfacePhysicsField
// Size: 0x38(Inherited: 0x38) 
struct UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface
{

}; 



