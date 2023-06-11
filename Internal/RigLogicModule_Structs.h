#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct RigLogicModule.RigUnit_RigLogic_Data
// Size: 0x80(Inherited: 0x0) 
struct FRigUnit_RigLogic_Data
{
	struct TWeakObjectPtr<USkeletalMeshComponent> SkelMeshComponent;  // 0x0(0x8)
	char pad_8[16];  // 0x8(0x10)
	struct TArray<int32_t> InputCurveIndices;  // 0x18(0x10)
	struct TArray<int32_t> HierarchyBoneIndices;  // 0x28(0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> MorphTargetCurveIndices;  // 0x38(0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> BlendShapeIndices;  // 0x48(0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> CurveContainerIndicesForAnimMaps;  // 0x58(0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> RigLogicIndicesForAnimMaps;  // 0x68(0x10)
	uint32_t CurrentLOD;  // 0x78(0x4)
	char pad_124[4];  // 0x7C(0x4)

}; 
// ScriptStruct RigLogicModule.VertexLayout
// Size: 0xC(Inherited: 0x0) 
struct FVertexLayout
{
	int32_t position;  // 0x0(0x4)
	int32_t TextureCoordinate;  // 0x4(0x4)
	int32_t Normal;  // 0x8(0x4)

}; 
// ScriptStruct RigLogicModule.CoordinateSystem
// Size: 0x3(Inherited: 0x0) 
struct FCoordinateSystem
{
	uint8_t  XAxis;  // 0x0(0x1)
	uint8_t  YAxis;  // 0x1(0x1)
	uint8_t  ZAxis;  // 0x2(0x1)

}; 
// ScriptStruct RigLogicModule.TextureCoordinate
// Size: 0x8(Inherited: 0x0) 
struct FTextureCoordinate
{
	float U;  // 0x0(0x4)
	float V;  // 0x4(0x4)

}; 
// ScriptStruct RigLogicModule.RigUnit_RigLogic_IntArray
// Size: 0x10(Inherited: 0x0) 
struct FRigUnit_RigLogic_IntArray
{
	struct TArray<int32_t> Values;  // 0x0(0x10)

}; 
// ScriptStruct RigLogicModule.RigUnit_RigLogic
// Size: 0xE8(Inherited: 0x68) 
struct FRigUnit_RigLogic : public FRigUnitMutable
{
	struct FRigUnit_RigLogic_Data Data;  // 0x68(0x80)

}; 
// ScriptStruct RigLogicModule.MeshBlendShapeChannelMapping
// Size: 0x8(Inherited: 0x0) 
struct FMeshBlendShapeChannelMapping
{
	int32_t MeshIndex;  // 0x0(0x4)
	int32_t BlendShapeChannelIndex;  // 0x4(0x4)

}; 
