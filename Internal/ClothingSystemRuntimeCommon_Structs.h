#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
// Size: 0x10(Inherited: 0x0) 
struct FPointWeightMap
{
	struct TArray<float> Values;  // 0x0(0x10)

}; 
// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
// Size: 0xD4(Inherited: 0x0) 
struct FClothConfig_Legacy
{
	uint8_t  WindMethod;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig;  // 0x4(0x10)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig;  // 0x14(0x10)
	struct FClothConstraintSetup_Legacy BendConstraintConfig;  // 0x24(0x10)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig;  // 0x34(0x10)
	float SelfCollisionRadius;  // 0x44(0x4)
	float SelfCollisionStiffness;  // 0x48(0x4)
	float SelfCollisionCullScale;  // 0x4C(0x4)
	struct FVector Damping;  // 0x50(0xC)
	float Friction;  // 0x5C(0x4)
	float WindDragCoefficient;  // 0x60(0x4)
	float WindLiftCoefficient;  // 0x64(0x4)
	struct FVector LinearDrag;  // 0x68(0xC)
	struct FVector AngularDrag;  // 0x74(0xC)
	struct FVector LinearInertiaScale;  // 0x80(0xC)
	struct FVector AngularInertiaScale;  // 0x8C(0xC)
	struct FVector CentrifugalInertiaScale;  // 0x98(0xC)
	float SolverFrequency;  // 0xA4(0x4)
	float StiffnessFrequency;  // 0xA8(0x4)
	float GravityScale;  // 0xAC(0x4)
	struct FVector GravityOverride;  // 0xB0(0xC)
	char pad_188_1 : 7;  // 0xBC(0x1)
	bool bUseGravityOverride : 1;  // 0xBC(0x1)
	char pad_189[3];  // 0xBD(0x3)
	float TetherStiffness;  // 0xC0(0x4)
	float TetherLimit;  // 0xC4(0x4)
	float CollisionThickness;  // 0xC8(0x4)
	float AnimDriveSpringStiffness;  // 0xCC(0x4)
	float AnimDriveDamperStiffness;  // 0xD0(0x4)

}; 
// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
// Size: 0x10(Inherited: 0x0) 
struct FClothConstraintSetup_Legacy
{
	float Stiffness;  // 0x0(0x4)
	float StiffnessMultiplier;  // 0x4(0x4)
	float StretchLimit;  // 0x8(0x4)
	float CompressionLimit;  // 0xC(0x4)

}; 
// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
// Size: 0xF8(Inherited: 0x0) 
struct FClothPhysicalMeshData
{
	struct TArray<struct FVector> Vertices;  // 0x0(0x10)
	struct TArray<struct FVector> Normals;  // 0x10(0x10)
	struct TArray<uint32_t> Indices;  // 0x20(0x10)
	struct TMap<uint32_t, struct FPointWeightMap> WeightMaps;  // 0x30(0x50)
	struct TArray<float> InverseMasses;  // 0x80(0x10)
	struct TArray<struct FClothVertBoneData> BoneData;  // 0x90(0x10)
	int32_t MaxBoneWeights;  // 0xA0(0x4)
	int32_t NumFixedVerts;  // 0xA4(0x4)
	struct TArray<uint32_t> SelfCollisionIndices;  // 0xA8(0x10)
	struct TArray<float> MaxDistances;  // 0xB8(0x10)
	struct TArray<float> BackstopDistances;  // 0xC8(0x10)
	struct TArray<float> BackstopRadiuses;  // 0xD8(0x10)
	struct TArray<float> AnimDriveMultipliers;  // 0xE8(0x10)

}; 
// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
// Size: 0x160(Inherited: 0x0) 
struct FClothLODDataCommon
{
	struct FClothPhysicalMeshData PhysicalMeshData;  // 0x0(0xF8)
	struct FClothCollisionData CollisionData;  // 0xF8(0x40)
	char pad_312_1 : 7;  // 0x138(0x1)
	bool bUseMultipleInfluences : 1;  // 0x138(0x1)
	char pad_313[3];  // 0x139(0x3)
	float SkinningKernelRadius;  // 0x13C(0x4)
	char pad_320[32];  // 0x140(0x20)

}; 
// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
// Size: 0x30(Inherited: 0x0) 
struct FClothParameterMask_Legacy
{
	struct FName MaskName;  // 0x0(0x8)
	uint8_t  CurrentTarget;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float MaxValue;  // 0xC(0x4)
	float MinValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct TArray<float> Values;  // 0x18(0x10)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bEnabled : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)

}; 
