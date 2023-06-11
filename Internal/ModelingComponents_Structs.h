#pragma once 
#include "SDK.h" 
 
 
// Function ModelingComponents.PreviewGeometry.RemoveLineSet
// Size: 0x18(Inherited: 0x0) 
struct FRemoveLineSet
{
	struct FString LineSetIdentifier;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bDestroy : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool ReturnValue : 1;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)

}; 
// ScriptStruct ModelingComponents.RenderableTriangle
// Size: 0x78(Inherited: 0x0) 
struct FRenderableTriangle
{
	struct UMaterialInterface* Material;  // 0x0(0x8)
	struct FRenderableTriangleVertex Vertex0;  // 0x8(0x24)
	struct FRenderableTriangleVertex Vertex1;  // 0x2C(0x24)
	struct FRenderableTriangleVertex Vertex2;  // 0x50(0x24)
	char pad_116[4];  // 0x74(0x4)

}; 
// ScriptStruct ModelingComponents.RenderableTriangleVertex
// Size: 0x24(Inherited: 0x0) 
struct FRenderableTriangleVertex
{
	struct FVector position;  // 0x0(0xC)
	struct FVector2D UV;  // 0xC(0x8)
	struct FVector Normal;  // 0x14(0xC)
	struct FColor Color;  // 0x20(0x4)

}; 
// Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
// Size: 0x1(Inherited: 0x0) 
struct FRemoveAllLineSets
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bDestroy : 1;  // 0x0(0x1)

}; 
// Function ModelingComponents.PreviewGeometry.AddLineSet
// Size: 0x18(Inherited: 0x0) 
struct FAddLineSet
{
	struct FString LineSetIdentifier;  // 0x0(0x10)
	struct ULineSetComponent* ReturnValue;  // 0x10(0x8)

}; 
// Function ModelingComponents.PreviewGeometry.CreateInWorld
// Size: 0x40(Inherited: 0x0) 
struct FCreateInWorld
{
	struct UWorld* World;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform WithTransform;  // 0x10(0x30)

}; 
// Function ModelingComponents.PreviewGeometry.FindLineSet
// Size: 0x18(Inherited: 0x0) 
struct FFindLineSet
{
	struct FString LineSetIdentifier;  // 0x0(0x10)
	struct ULineSetComponent* ReturnValue;  // 0x10(0x8)

}; 
// Function ModelingComponents.PreviewGeometry.GetActor
// Size: 0x8(Inherited: 0x0) 
struct FGetActor
{
	struct APreviewGeometryActor* ReturnValue;  // 0x0(0x8)

}; 
// Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
// Size: 0x8(Inherited: 0x0) 
struct FSetAllLineSetsMaterial
{
	struct UMaterialInterface* Material;  // 0x0(0x8)

}; 
// Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
// Size: 0x20(Inherited: 0x0) 
struct FSetLineSetMaterial
{
	struct FString LineSetIdentifier;  // 0x0(0x10)
	struct UMaterialInterface* NewMaterial;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
// Size: 0x18(Inherited: 0x0) 
struct FSetLineSetVisibility
{
	struct FString LineSetIdentifier;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bVisible : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool ReturnValue : 1;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)

}; 
// Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
// Size: 0x10(Inherited: 0x0) 
struct FGetWeightMapsFunc
{
	struct TArray<struct FString> ReturnValue;  // 0x0(0x10)

}; 
