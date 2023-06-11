#pragma once 
#include "SDK.h" 
 
 
// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
// Size: 0x10(Inherited: 0x0) 
struct FAddCustomMeshTriangles
{
	struct TArray<struct FCustomMeshTriangle> Triangles;  // 0x0(0x10)

}; 
// ScriptStruct CustomMeshComponent.CustomMeshTriangle
// Size: 0x24(Inherited: 0x0) 
struct FCustomMeshTriangle
{
	struct FVector Vertex0;  // 0x0(0xC)
	struct FVector Vertex1;  // 0xC(0xC)
	struct FVector Vertex2;  // 0x18(0xC)

}; 
// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
// Size: 0x18(Inherited: 0x0) 
struct FSetCustomMeshTriangles
{
	struct TArray<struct FCustomMeshTriangle> Triangles;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
