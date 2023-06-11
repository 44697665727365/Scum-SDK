#pragma once 
#include <MRMesh_Structs.h>
 
 
 
// Class MRMesh.MeshReconstructorBase
// Size: 0x28(Inherited: 0x28) 
struct UMeshReconstructorBase : public UObject
{

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh
}; 



// Class MRMesh.MRMeshComponent
// Size: 0x510(Inherited: 0x450) 
struct UMRMeshComponent : public UPrimitiveComponent
{
	char pad_1104[16];  // 0x450(0x10)
	struct UMaterialInterface* Material;  // 0x460(0x8)
	struct UMaterialInterface* WireframeMaterial;  // 0x468(0x8)
	char pad_1136_1 : 7;  // 0x470(0x1)
	bool bCreateMeshProxySections : 1;  // 0x470(0x1)
	char pad_1137_1 : 7;  // 0x471(0x1)
	bool bUpdateNavMeshOnMeshUpdate : 1;  // 0x471(0x1)
	char pad_1138_1 : 7;  // 0x472(0x1)
	bool bNeverCreateCollisionMesh : 1;  // 0x472(0x1)
	char pad_1139[5];  // 0x473(0x5)
	struct UBodySetup* CachedBodySetup;  // 0x478(0x8)
	struct TArray<struct UBodySetup*> BodySetups;  // 0x480(0x10)
	char pad_1168[128];  // 0x490(0x80)

	void SetWireframeMaterial(struct UMaterialInterface* InMaterial); // Function MRMesh.MRMeshComponent.SetWireframeMaterial
	void SetWireframeColor(struct FLinearColor& InColor); // Function MRMesh.MRMeshComponent.SetWireframeColor
	void SetUseWireframe(bool bUseWireframe); // Function MRMesh.MRMeshComponent.SetUseWireframe
	void SetEnableMeshOcclusion(bool bEnable); // Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected
	struct FLinearColor GetWireframeColor(); // Function MRMesh.MRMeshComponent.GetWireframeColor
	bool GetUseWireframe(); // Function MRMesh.MRMeshComponent.GetUseWireframe
	bool GetEnableMeshOcclusion(); // Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
	void Clear(); // Function MRMesh.MRMeshComponent.Clear
}; 



// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x270(Inherited: 0x200) 
struct UMockDataMeshTrackerComponent : public USceneComponent
{
	struct FMulticastInlineDelegate OnMeshTrackerUpdated;  // 0x1F8(0x10)
	char pad_528_1 : 7;  // 0x210(0x1)
	bool ScanWorld : 1;  // 0x208(0x1)
	char pad_529_1 : 7;  // 0x211(0x1)
	bool RequestNormals : 1;  // 0x209(0x1)
	char pad_530_1 : 7;  // 0x212(0x1)
	bool RequestVertexConfidence : 1;  // 0x20A(0x1)
	uint8_t  VertexColorMode;  // 0x20B(0x1)
	struct TArray<struct FColor> BlockVertexColors;  // 0x210(0x10)
	struct FLinearColor VertexColorFromConfidenceZero;  // 0x220(0x10)
	struct FLinearColor VertexColorFromConfidenceOne;  // 0x230(0x10)
	float UpdateInterval;  // 0x240(0x4)
	struct UMRMeshComponent* MRMesh;  // 0x248(0x8)
	char pad_592[32];  // 0x250(0x20)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
}; 



