#pragma once 
#include "SDK.h" 
 
 
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
// Size: 0x40(Inherited: 0x0) 
struct FSliceProceduralMesh
{
	struct UProceduralMeshComponent* InProcMesh;  // 0x0(0x8)
	struct FVector PlanePosition;  // 0x8(0xC)
	struct FVector PlaneNormal;  // 0x14(0xC)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bCreateOtherHalf : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)
	struct UProceduralMeshComponent* OutOtherHalfProcMesh;  // 0x28(0x8)
	uint8_t  CapOption;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)
	struct UMaterialInterface* CapMaterial;  // 0x38(0x8)

}; 
// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// Size: 0x40(Inherited: 0x0) 
struct FProcMeshSection
{
	struct TArray<struct FProcMeshVertex> ProcVertexBuffer;  // 0x0(0x10)
	struct TArray<uint32_t> ProcIndexBuffer;  // 0x10(0x10)
	struct FBox SectionLocalBox;  // 0x20(0x1C)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool bEnableCollision : 1;  // 0x3C(0x1)
	char pad_61_1 : 7;  // 0x3D(0x1)
	bool bSectionVisible : 1;  // 0x3D(0x1)
	char pad_62[2];  // 0x3E(0x2)

}; 
// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// Size: 0x4(Inherited: 0x0) 
struct FClearMeshSection
{
	int32_t SectionIndex;  // 0x0(0x4)

}; 
// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// Size: 0x4C(Inherited: 0x0) 
struct FProcMeshVertex
{
	struct FVector position;  // 0x0(0xC)
	struct FVector Normal;  // 0xC(0xC)
	struct FProcMeshTangent Tangent;  // 0x18(0x10)
	struct FColor Color;  // 0x28(0x4)
	struct FVector2D UV0;  // 0x2C(0x8)
	struct FVector2D UV1;  // 0x34(0x8)
	struct FVector2D UV2;  // 0x3C(0x8)
	struct FVector2D UV3;  // 0x44(0x8)

}; 
// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// Size: 0x10(Inherited: 0x0) 
struct FProcMeshTangent
{
	struct FVector TangentX;  // 0x0(0xC)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bFlipTangentY : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
// Size: 0x50(Inherited: 0x0) 
struct FCalculateTangentsForMesh
{
	struct TArray<struct FVector> Vertices;  // 0x0(0x10)
	struct TArray<int32_t> Triangles;  // 0x10(0x10)
	struct TArray<struct FVector2D> UVs;  // 0x20(0x10)
	struct TArray<struct FVector> Normals;  // 0x30(0x10)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x40(0x10)

}; 
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// Size: 0x20(Inherited: 0x0) 
struct FCreateGridMeshTriangles
{
	int32_t NumX;  // 0x0(0x4)
	int32_t NumY;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bWinding : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct TArray<int32_t> Triangles;  // 0x10(0x10)

}; 
// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// Size: 0x70(Inherited: 0x0) 
struct FCreateMeshSection
{
	int32_t SectionIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVector> Vertices;  // 0x8(0x10)
	struct TArray<int32_t> Triangles;  // 0x18(0x10)
	struct TArray<struct FVector> Normals;  // 0x28(0x10)
	struct TArray<struct FVector2D> UV0;  // 0x38(0x10)
	struct TArray<struct FColor> VertexColors;  // 0x48(0x10)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x58(0x10)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bCreateCollision : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

}; 
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// Size: 0x20(Inherited: 0x0) 
struct FConvertQuadToTriangles
{
	struct TArray<int32_t> Triangles;  // 0x0(0x10)
	int32_t Vert0;  // 0x10(0x4)
	int32_t Vert1;  // 0x14(0x4)
	int32_t Vert2;  // 0x18(0x4)
	int32_t Vert3;  // 0x1C(0x4)

}; 
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
// Size: 0x50(Inherited: 0x0) 
struct FCreateGridMeshSplit
{
	int32_t NumX;  // 0x0(0x4)
	int32_t NumY;  // 0x4(0x4)
	struct TArray<int32_t> Triangles;  // 0x8(0x10)
	struct TArray<struct FVector> Vertices;  // 0x18(0x10)
	struct TArray<struct FVector2D> UVs;  // 0x28(0x10)
	struct TArray<struct FVector2D> UV1s;  // 0x38(0x10)
	float GridSpacing;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)

}; 
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
// Size: 0x20(Inherited: 0x0) 
struct FCopyProceduralMeshFromStaticMeshComponent
{
	struct UStaticMeshComponent* StaticMeshComponent;  // 0x0(0x8)
	int32_t LODIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct UProceduralMeshComponent* ProcMeshComponent;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bCreateCollision : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
// Size: 0x40(Inherited: 0x0) 
struct FCreateGridMeshWelded
{
	int32_t NumX;  // 0x0(0x4)
	int32_t NumY;  // 0x4(0x4)
	struct TArray<int32_t> Triangles;  // 0x8(0x10)
	struct TArray<struct FVector> Vertices;  // 0x18(0x10)
	struct TArray<struct FVector2D> UVs;  // 0x28(0x10)
	float GridSpacing;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// Size: 0x60(Inherited: 0x0) 
struct FGenerateBoxMesh
{
	struct FVector BoxRadius;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<struct FVector> Vertices;  // 0x10(0x10)
	struct TArray<int32_t> Triangles;  // 0x20(0x10)
	struct TArray<struct FVector> Normals;  // 0x30(0x10)
	struct TArray<struct FVector2D> UVs;  // 0x40(0x10)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x50(0x10)

}; 
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
// Size: 0x60(Inherited: 0x0) 
struct FGetSectionFromProceduralMesh
{
	struct UProceduralMeshComponent* InProcMesh;  // 0x0(0x8)
	int32_t SectionIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<struct FVector> Vertices;  // 0x10(0x10)
	struct TArray<int32_t> Triangles;  // 0x20(0x10)
	struct TArray<struct FVector> Normals;  // 0x30(0x10)
	struct TArray<struct FVector2D> UVs;  // 0x40(0x10)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x50(0x10)

}; 
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
// Size: 0x60(Inherited: 0x0) 
struct FGetSectionFromStaticMesh
{
	struct UStaticMesh* InMesh;  // 0x0(0x8)
	int32_t LODIndex;  // 0x8(0x4)
	int32_t SectionIndex;  // 0xC(0x4)
	struct TArray<struct FVector> Vertices;  // 0x10(0x10)
	struct TArray<int32_t> Triangles;  // 0x20(0x10)
	struct TArray<struct FVector> Normals;  // 0x30(0x10)
	struct TArray<struct FVector2D> UVs;  // 0x40(0x10)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x50(0x10)

}; 
// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
// Size: 0x10(Inherited: 0x0) 
struct FAddCollisionConvexMesh
{
	struct TArray<struct FVector> ConvexVerts;  // 0x0(0x10)

}; 
// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// Size: 0x58(Inherited: 0x0) 
struct FUpdateMeshSection
{
	int32_t SectionIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVector> Vertices;  // 0x8(0x10)
	struct TArray<struct FVector> Normals;  // 0x18(0x10)
	struct TArray<struct FVector2D> UV0;  // 0x28(0x10)
	struct TArray<struct FColor> VertexColors;  // 0x38(0x10)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x48(0x10)

}; 
// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
// Size: 0xA0(Inherited: 0x0) 
struct FCreateMeshSection_LinearColor
{
	int32_t SectionIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVector> Vertices;  // 0x8(0x10)
	struct TArray<int32_t> Triangles;  // 0x18(0x10)
	struct TArray<struct FVector> Normals;  // 0x28(0x10)
	struct TArray<struct FVector2D> UV0;  // 0x38(0x10)
	struct TArray<struct FVector2D> UV1;  // 0x48(0x10)
	struct TArray<struct FVector2D> UV2;  // 0x58(0x10)
	struct TArray<struct FVector2D> UV3;  // 0x68(0x10)
	struct TArray<struct FLinearColor> VertexColors;  // 0x78(0x10)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x88(0x10)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool bCreateCollision : 1;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)

}; 
// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
// Size: 0x4(Inherited: 0x0) 
struct FGetNumSections
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
// Size: 0x8(Inherited: 0x0) 
struct FIsMeshSectionVisible
{
	int32_t SectionIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// Size: 0x8(Inherited: 0x0) 
struct FSetMeshSectionVisible
{
	int32_t SectionIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bNewVisibility : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
// Size: 0x88(Inherited: 0x0) 
struct FUpdateMeshSection_LinearColor
{
	int32_t SectionIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVector> Vertices;  // 0x8(0x10)
	struct TArray<struct FVector> Normals;  // 0x18(0x10)
	struct TArray<struct FVector2D> UV0;  // 0x28(0x10)
	struct TArray<struct FVector2D> UV1;  // 0x38(0x10)
	struct TArray<struct FVector2D> UV2;  // 0x48(0x10)
	struct TArray<struct FVector2D> UV3;  // 0x58(0x10)
	struct TArray<struct FLinearColor> VertexColors;  // 0x68(0x10)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x78(0x10)

}; 
