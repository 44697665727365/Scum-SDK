#pragma once 
#include "SDK.h" 
 
 
// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
// Size: 0x8(Inherited: 0x0) 
struct FConnectMRMesh
{
	struct UMRMeshComponent* Mesh;  // 0x0(0x8)

}; 
// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
// Size: 0x1(Inherited: 0x0) 
struct FIsReconstructionPaused
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
// Size: 0x48(Inherited: 0x0) 
struct FOnMockDataMeshTrackerUpdated__DelegateSignature
{
	int32_t Index;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVector> Vertices;  // 0x8(0x10)
	struct TArray<int32_t> Triangles;  // 0x18(0x10)
	struct TArray<struct FVector> Normals;  // 0x28(0x10)
	struct TArray<float> Confidence;  // 0x38(0x10)

}; 
// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
// Size: 0x8(Inherited: 0x0) 
struct FDisconnectMRMesh
{
	struct UMRMeshComponent* InMRMeshPtr;  // 0x0(0x8)

}; 
// ScriptStruct MRMesh.MRMeshConfiguration
// Size: 0x1(Inherited: 0x0) 
struct FMRMeshConfiguration
{
	char pad_0[1];  // 0x0(0x1)

}; 
// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
// Size: 0x1(Inherited: 0x0) 
struct FIsReconstructionStarted
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
// Size: 0x1(Inherited: 0x0) 
struct FGetEnableMeshOcclusion
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MRMesh.MRMeshComponent.GetUseWireframe
// Size: 0x1(Inherited: 0x0) 
struct FGetUseWireframe
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MRMesh.MRMeshComponent.GetWireframeColor
// Size: 0x10(Inherited: 0x0) 
struct FGetWireframeColor
{
	struct FLinearColor ReturnValue;  // 0x0(0x10)

}; 
// Function MRMesh.MRMeshComponent.IsConnected
// Size: 0x1(Inherited: 0x0) 
struct FIsConnected
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MRMesh.MRMeshComponent.SetWireframeMaterial
// Size: 0x8(Inherited: 0x0) 
struct FSetWireframeMaterial
{
	struct UMaterialInterface* InMaterial;  // 0x0(0x8)

}; 
// Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
// Size: 0x1(Inherited: 0x0) 
struct FSetEnableMeshOcclusion
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnable : 1;  // 0x0(0x1)

}; 
// Function MRMesh.MRMeshComponent.SetUseWireframe
// Size: 0x1(Inherited: 0x0) 
struct FSetUseWireframe
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bUseWireframe : 1;  // 0x0(0x1)

}; 
// Function MRMesh.MRMeshComponent.SetWireframeColor
// Size: 0x10(Inherited: 0x0) 
struct FSetWireframeColor
{
	struct FLinearColor InColor;  // 0x0(0x10)

}; 
