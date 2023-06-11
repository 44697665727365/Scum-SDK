#pragma once 
#include "SDK.h" 
 
 
// Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc
// Size: 0x10(Inherited: 0x0) 
struct FGetUVLayerNamesFunc
{
	struct TArray<struct FString> ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct MeshModelingTools.PerlinLayerProperties
// Size: 0x8(Inherited: 0x0) 
struct FPerlinLayerProperties
{
	float Frequency;  // 0x0(0x4)
	float Intensity;  // 0x4(0x4)

}; 
// ScriptStruct MeshModelingTools.PhysicsCapsuleData
// Size: 0x70(Inherited: 0x0) 
struct FPhysicsCapsuleData
{
	float Radius;  // 0x0(0x4)
	float Length;  // 0x4(0x4)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Transform;  // 0x10(0x30)
	struct FKShapeElem Element;  // 0x40(0x30)

}; 
// ScriptStruct MeshModelingTools.PhysicsConvexData
// Size: 0x38(Inherited: 0x0) 
struct FPhysicsConvexData
{
	int32_t NumVertices;  // 0x0(0x4)
	int32_t NumFaces;  // 0x4(0x4)
	struct FKShapeElem Element;  // 0x8(0x30)

}; 
// ScriptStruct MeshModelingTools.TransformMeshesTarget
// Size: 0x10(Inherited: 0x0) 
struct FTransformMeshesTarget
{
	struct UTransformProxy* TransformProxy;  // 0x0(0x8)
	struct UTransformGizmo* TransformGizmo;  // 0x8(0x8)

}; 
// ScriptStruct MeshModelingTools.PhysicsSphereData
// Size: 0x70(Inherited: 0x0) 
struct FPhysicsSphereData
{
	float Radius;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FTransform Transform;  // 0x10(0x30)
	struct FKShapeElem Element;  // 0x40(0x30)

}; 
// ScriptStruct MeshModelingTools.PhysicsBoxData
// Size: 0x70(Inherited: 0x0) 
struct FPhysicsBoxData
{
	struct FVector Dimensions;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct FTransform Transform;  // 0x10(0x30)
	struct FKShapeElem Element;  // 0x40(0x30)

}; 
// ScriptStruct MeshModelingTools.EditPivotTarget
// Size: 0x10(Inherited: 0x0) 
struct FEditPivotTarget
{
	struct UTransformProxy* TransformProxy;  // 0x0(0x8)
	struct UTransformGizmo* TransformGizmo;  // 0x8(0x8)

}; 
// Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc
// Size: 0x10(Inherited: 0x0) 
struct FGetWeightMapsFunc
{
	struct TArray<struct FString> ReturnValue;  // 0x0(0x10)

}; 
