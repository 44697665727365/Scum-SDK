#pragma once 
#include <CustomMeshComponent_Structs.h>
 
 
 
// Class CustomMeshComponent.CustomMeshComponent
// Size: 0x490(Inherited: 0x480) 
struct UCustomMeshComponent : public UMeshComponent
{
	char pad_1152[16];  // 0x480(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
}; 



