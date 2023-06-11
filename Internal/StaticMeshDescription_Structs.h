#pragma once 
#include "SDK.h" 
 
 
// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
// Size: 0x10(Inherited: 0x0) 
struct FSetVertexInstanceUV
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	struct FVector2D UV;  // 0x4(0x8)
	int32_t UVIndex;  // 0xC(0x4)

}; 
// ScriptStruct StaticMeshDescription.UVMapSettings
// Size: 0x38(Inherited: 0x0) 
struct FUVMapSettings
{
	struct FVector Size;  // 0x0(0xC)
	struct FVector2D UVTile;  // 0xC(0x8)
	struct FVector position;  // 0x14(0xC)
	struct FRotator Rotation;  // 0x20(0xC)
	struct FVector Scale;  // 0x2C(0xC)

}; 
// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
// Size: 0xC(Inherited: 0x0) 
struct FSetPolygonGroupMaterialSlotName
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)
	struct FName SlotName;  // 0x4(0x8)

}; 
// Function StaticMeshDescription.StaticMeshDescription.CreateCube
// Size: 0x34(Inherited: 0x0) 
struct FCreateCube
{
	struct FVector Center;  // 0x0(0xC)
	struct FVector HalfExtents;  // 0xC(0xC)
	struct FPolygonGroupID PolygonGroup;  // 0x18(0x4)
	struct FPolygonID PolygonID_PlusX;  // 0x1C(0x4)
	struct FPolygonID PolygonID_MinusX;  // 0x20(0x4)
	struct FPolygonID PolygonID_PlusY;  // 0x24(0x4)
	struct FPolygonID PolygonID_MinusY;  // 0x28(0x4)
	struct FPolygonID PolygonID_PlusZ;  // 0x2C(0x4)
	struct FPolygonID PolygonID_MinusZ;  // 0x30(0x4)

}; 
// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
// Size: 0x10(Inherited: 0x0) 
struct FGetVertexInstanceUV
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	int32_t UVIndex;  // 0x4(0x4)
	struct FVector2D ReturnValue;  // 0x8(0x8)

}; 
