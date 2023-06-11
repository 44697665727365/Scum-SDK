#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// Size: 0x40(Inherited: 0x0) 
struct FClothCollisionData
{
	struct TArray<struct FClothCollisionPrim_Sphere> Spheres;  // 0x0(0x10)
	struct TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;  // 0x10(0x10)
	struct TArray<struct FClothCollisionPrim_Convex> Convexes;  // 0x20(0x10)
	struct TArray<struct FClothCollisionPrim_Box> Boxes;  // 0x30(0x10)

}; 
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// Size: 0x14(Inherited: 0x0) 
struct FClothCollisionPrim_Sphere
{
	int32_t BoneIndex;  // 0x0(0x4)
	float Radius;  // 0x4(0x4)
	struct FVector LocalPosition;  // 0x8(0xC)

}; 
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// Size: 0x8(Inherited: 0x0) 
struct FClothCollisionPrim_SphereConnection
{
	int32_t SphereIndices[2];  // 0x0(0x8)

}; 
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
// Size: 0x30(Inherited: 0x0) 
struct FClothCollisionPrim_Box
{
	struct FVector LocalPosition;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct FQuat LocalRotation;  // 0x10(0x10)
	struct FVector HalfExtents;  // 0x20(0xC)
	int32_t BoneIndex;  // 0x2C(0x4)

}; 
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
// Size: 0x4(Inherited: 0x0) 
struct FGetNumKinematicParticles
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// Size: 0x28(Inherited: 0x0) 
struct FClothCollisionPrim_Convex
{
	struct TArray<struct FClothCollisionPrim_ConvexFace> Faces;  // 0x0(0x10)
	struct TArray<struct FVector> SurfacePoints;  // 0x10(0x10)
	int32_t BoneIndex;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
// Size: 0x4(Inherited: 0x0) 
struct FGetNumCloths
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
// Size: 0x20(Inherited: 0x0) 
struct FClothCollisionPrim_ConvexFace
{
	struct FPlane Plane;  // 0x0(0x10)
	struct TArray<int32_t> Indices;  // 0x10(0x10)

}; 
// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
// Size: 0x4C(Inherited: 0x0) 
struct FClothVertBoneData
{
	int32_t NumInfluences;  // 0x0(0x4)
	uint16_t BoneIndices[c];  // 0x4(0x18)
	float BoneWeights[c];  // 0x1C(0x30)

}; 
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
// Size: 0xC(Inherited: 0x0) 
struct FEnableGravityOverride
{
	struct FVector InVector;  // 0x0(0xC)

}; 
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
// Size: 0x18(Inherited: 0x0) 
struct FGetClothingInteractor
{
	struct FString ClothingAssetName;  // 0x0(0x10)
	struct UClothingInteractor* ReturnValue;  // 0x10(0x8)

}; 
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
// Size: 0x4(Inherited: 0x0) 
struct FGetNumDynamicParticles
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
// Size: 0x4(Inherited: 0x0) 
struct FGetNumIterations
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
// Size: 0x4(Inherited: 0x0) 
struct FGetNumSubsteps
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
// Size: 0x4(Inherited: 0x0) 
struct FGetSimulationTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
// Size: 0x4(Inherited: 0x0) 
struct FSetAnimDriveSpringStiffness
{
	float InStiffness;  // 0x0(0x4)

}; 
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
// Size: 0x4(Inherited: 0x0) 
struct FSetNumIterations
{
	int32_t NumIterations;  // 0x0(0x4)

}; 
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
// Size: 0x4(Inherited: 0x0) 
struct FSetNumSubsteps
{
	int32_t NumSubsteps;  // 0x0(0x4)

}; 
