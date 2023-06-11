#pragma once 
#include <ModelingComponents_Structs.h>
 
 
 
// Class ModelingComponents.CollectSurfacePathMechanic
// Size: 0x550(Inherited: 0x30) 
struct UCollectSurfacePathMechanic : public UInteractionMechanic
{
	char pad_48[1312];  // 0x30(0x520)

}; 



// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UBaseCreateFromSelectedToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class ModelingComponents.MultiTransformer
// Size: 0x140(Inherited: 0x28) 
struct UMultiTransformer : public UObject
{
	char pad_40[72];  // 0x28(0x48)
	struct UInteractiveGizmoManager* GizmoManager;  // 0x70(0x8)
	char pad_120[104];  // 0x78(0x68)
	struct UTransformGizmo* TransformGizmo;  // 0xE0(0x8)
	struct UTransformProxy* TransformProxy;  // 0xE8(0x8)
	char pad_240[80];  // 0xF0(0x50)

}; 



// Class ModelingComponents.OnAcceptHandleSourcesProperties
// Size: 0x68(Inherited: 0x60) 
struct UOnAcceptHandleSourcesProperties : public UInteractiveToolPropertySet
{
	uint8_t  OnToolAccept;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 



// Class ModelingComponents.DynamicMeshReplacementChangeTarget
// Size: 0x58(Inherited: 0x28) 
struct UDynamicMeshReplacementChangeTarget : public UObject
{
	char pad_40[48];  // 0x28(0x30)

}; 



// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
// Size: 0x90(Inherited: 0x68) 
struct UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{
	uint8_t  WriteOutputTo;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)
	struct FString OutputName;  // 0x70(0x10)
	struct FString OutputAsset;  // 0x80(0x10)

}; 



// Class ModelingComponents.TransformInputsToolProperties
// Size: 0x68(Inherited: 0x60) 
struct UTransformInputsToolProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bShowTransformUI : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bSnapToWorldGrid : 1;  // 0x61(0x1)
	char pad_98[6];  // 0x62(0x6)

}; 



// Class ModelingComponents.BaseVoxelTool
// Size: 0x108(Inherited: 0xF0) 
struct UBaseVoxelTool : public UBaseCreateFromSelectedTool
{
	struct UVoxelProperties* VoxProperties;  // 0xF0(0x8)
	char pad_248[16];  // 0xF8(0x10)

}; 



// Class ModelingComponents.BaseMeshProcessingTool
// Size: 0x400(Inherited: 0x88) 
struct UBaseMeshProcessingTool : public USingleSelectionTool
{
	char pad_136[40];  // 0x88(0x28)
	struct UMeshOpPreviewWithBackgroundCompute* Preview;  // 0xB0(0x8)
	char pad_184[840];  // 0xB8(0x348)

}; 



// Class ModelingComponents.BaseMeshProcessingToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct UBaseMeshProcessingToolBuilder : public UInteractiveToolBuilder
{

}; 



// Class ModelingComponents.OctreeDynamicMeshComponent
// Size: 0x5D0(Inherited: 0x4C0) 
struct UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{
	char pad_1216[24];  // 0x4C0(0x18)
	char pad_1240_1 : 7;  // 0x4D8(0x1)
	bool bExplicitShowWireframe : 1;  // 0x4D8(0x1)
	char pad_1241[247];  // 0x4D9(0xF7)

}; 



// Class ModelingComponents.BaseCreateFromSelectedTool
// Size: 0xF0(Inherited: 0x90) 
struct UBaseCreateFromSelectedTool : public UMultiSelectionTool
{
	char pad_144[8];  // 0x90(0x8)
	struct UTransformInputsToolProperties* TransformProperties;  // 0x98(0x8)
	struct UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;  // 0xA0(0x8)
	struct UMeshOpPreviewWithBackgroundCompute* Preview;  // 0xA8(0x8)
	struct TArray<struct UTransformProxy*> TransformProxies;  // 0xB0(0x10)
	struct TArray<struct UTransformGizmo*> TransformGizmos;  // 0xC0(0x10)
	struct TArray<struct FVector> TransformInitialScales;  // 0xD0(0x10)
	char pad_224[16];  // 0xE0(0x10)

}; 



// Class ModelingComponents.PlaneDistanceFromHitMechanic
// Size: 0x4A0(Inherited: 0x30) 
struct UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{
	char pad_48[1136];  // 0x30(0x470)

}; 



// Class ModelingComponents.BaseDynamicMeshComponent
// Size: 0x4C0(Inherited: 0x480) 
struct UBaseDynamicMeshComponent : public UMeshComponent
{
	char pad_1152[64];  // 0x480(0x40)

}; 



// Class ModelingComponents.SpaceCurveDeformationMechanic
// Size: 0x2B0(Inherited: 0x30) 
struct USpaceCurveDeformationMechanic : public UInteractionMechanic
{
	char pad_48[16];  // 0x30(0x10)
	struct USingleClickInputBehavior* ClickBehavior;  // 0x40(0x8)
	struct UMouseHoverBehavior* HoverBehavior;  // 0x48(0x8)
	char pad_80[24];  // 0x50(0x18)
	struct USpaceCurveDeformationMechanicPropertySet* TransformProperties;  // 0x68(0x8)
	char pad_112[248];  // 0x70(0xF8)
	struct APreviewGeometryActor* PreviewGeometryActor;  // 0x168(0x8)
	struct UPointSetComponent* RenderPoints;  // 0x170(0x8)
	struct ULineSetComponent* RenderSegments;  // 0x178(0x8)
	char pad_384[56];  // 0x180(0x38)
	struct UTransformProxy* PointTransformProxy;  // 0x1B8(0x8)
	struct UTransformGizmo* PointTransformGizmo;  // 0x1C0(0x8)
	char pad_456[232];  // 0x1C8(0xE8)

}; 



// Class ModelingComponents.ConstructionPlaneMechanic
// Size: 0xF0(Inherited: 0x30) 
struct UConstructionPlaneMechanic : public UInteractionMechanic
{
	char pad_48[152];  // 0x30(0x98)
	struct UTransformGizmo* PlaneTransformGizmo;  // 0xC8(0x8)
	struct UTransformProxy* PlaneTransformProxy;  // 0xD0(0x8)
	char pad_216[16];  // 0xD8(0x10)
	struct USingleClickInputBehavior* ClickToSetPlaneBehavior;  // 0xE8(0x8)

}; 



// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
// Size: 0x70(Inherited: 0x60) 
struct USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{
	uint8_t  TransformMode;  // 0x60(0x4)
	uint8_t  TransformOrigin;  // 0x64(0x4)
	float Softness;  // 0x68(0x4)
	uint8_t  SoftFalloff;  // 0x6C(0x4)

}; 



// Class ModelingComponents.CurveControlPointsMechanic
// Size: 0x650(Inherited: 0x30) 
struct UCurveControlPointsMechanic : public UInteractionMechanic
{
	char pad_48[16];  // 0x30(0x10)
	struct USingleClickInputBehavior* ClickBehavior;  // 0x40(0x8)
	struct UMouseHoverBehavior* HoverBehavior;  // 0x48(0x8)
	char pad_80[1176];  // 0x50(0x498)
	struct APreviewGeometryActor* PreviewGeometryActor;  // 0x4E8(0x8)
	struct UPointSetComponent* DrawnControlPoints;  // 0x4F0(0x8)
	struct ULineSetComponent* DrawnControlSegments;  // 0x4F8(0x8)
	struct UPointSetComponent* PreviewPoint;  // 0x500(0x8)
	struct ULineSetComponent* PreviewSegment;  // 0x508(0x8)
	char pad_1296[120];  // 0x510(0x78)
	struct UTransformProxy* PointTransformProxy;  // 0x588(0x8)
	struct UTransformGizmo* PointTransformGizmo;  // 0x590(0x8)
	char pad_1432[184];  // 0x598(0xB8)

}; 



// Class ModelingComponents.LineSetComponent
// Size: 0x4E0(Inherited: 0x480) 
struct ULineSetComponent : public UMeshComponent
{
	struct UMaterialInterface* LineMaterial;  // 0x478(0x8)
	struct FBoxSphereBounds Bounds;  // 0x480(0x1C)
	char pad_1188_1 : 7;  // 0x4A4(0x1)
	bool bBoundsDirty : 1;  // 0x49C(0x1)
	char pad_1189[59];  // 0x4A5(0x3B)

}; 



// Class ModelingComponents.MeshCommandChangeTarget
// Size: 0x28(Inherited: 0x28) 
struct UMeshCommandChangeTarget : public UInterface
{

}; 



// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
// Size: 0x90(Inherited: 0x28) 
struct UMeshOpPreviewWithBackgroundCompute : public UObject
{
	char pad_40[48];  // 0x28(0x30)
	struct UPreviewMesh* PreviewMesh;  // 0x58(0x8)
	struct TArray<struct UMaterialInterface*> StandardMaterials;  // 0x60(0x10)
	struct UMaterialInterface* OverrideMaterial;  // 0x70(0x8)
	struct UMaterialInterface* WorkingMaterial;  // 0x78(0x8)
	char pad_128[16];  // 0x80(0x10)

}; 



// Class ModelingComponents.VoxelProperties
// Size: 0x78(Inherited: 0x60) 
struct UVoxelProperties : public UInteractiveToolPropertySet
{
	int32_t VoxelCount;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bAutoSimplify : 1;  // 0x64(0x1)
	char pad_101_1 : 7;  // 0x65(0x1)
	bool bRemoveInternalSurfaces : 1;  // 0x65(0x1)
	char pad_102[2];  // 0x66(0x2)
	double SimplifyMaxErrorFactor;  // 0x68(0x8)
	double CubeRootMinComponentVolume;  // 0x70(0x8)

}; 



// Class ModelingComponents.MeshVertexCommandChangeTarget
// Size: 0x28(Inherited: 0x28) 
struct UMeshVertexCommandChangeTarget : public UInterface
{

}; 



// Class ModelingComponents.MeshReplacementCommandChangeTarget
// Size: 0x28(Inherited: 0x28) 
struct UMeshReplacementCommandChangeTarget : public UInterface
{

}; 



// Class ModelingComponents.PointSetComponent
// Size: 0x4E0(Inherited: 0x480) 
struct UPointSetComponent : public UMeshComponent
{
	struct UMaterialInterface* PointMaterial;  // 0x478(0x8)
	struct FBoxSphereBounds Bounds;  // 0x480(0x1C)
	char pad_1188_1 : 7;  // 0x4A4(0x1)
	bool bBoundsDirty : 1;  // 0x49C(0x1)
	char pad_1189[59];  // 0x4A5(0x3B)

}; 



// Class ModelingComponents.WeightMapSetProperties
// Size: 0x80(Inherited: 0x60) 
struct UWeightMapSetProperties : public UInteractiveToolPropertySet
{
	struct FName WeightMap;  // 0x60(0x8)
	struct TArray<struct FString> WeightMapsList;  // 0x68(0x10)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool bInvertWeightMap : 1;  // 0x78(0x1)
	char pad_121[7];  // 0x79(0x7)

	struct TArray<struct FString> GetWeightMapsFunc(); // Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
}; 



// Class ModelingComponents.PreviewMesh
// Size: 0xE0(Inherited: 0x28) 
struct UPreviewMesh : public UObject
{
	char pad_40[24];  // 0x28(0x18)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bBuildSpatialDataStructure : 1;  // 0x40(0x1)
	char pad_65_1 : 7;  // 0x41(0x1)
	bool bDrawOnTop : 1;  // 0x41(0x1)
	char pad_66[14];  // 0x42(0xE)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent;  // 0x50(0x8)
	char pad_88[136];  // 0x58(0x88)

}; 



// Class ModelingComponents.PolyEditPreviewMesh
// Size: 0x4D0(Inherited: 0xE0) 
struct UPolyEditPreviewMesh : public UPreviewMesh
{
	char pad_224[1008];  // 0xE0(0x3F0)

}; 



// Class ModelingComponents.PolygonSelectionMechanic
// Size: 0x830(Inherited: 0x30) 
struct UPolygonSelectionMechanic : public UInteractionMechanic
{
	char pad_48[32];  // 0x30(0x20)
	struct UPolygonSelectionMechanicProperties* Properties;  // 0x50(0x8)
	char pad_88[1224];  // 0x58(0x4C8)
	struct APreviewGeometryActor* PreviewGeometryActor;  // 0x520(0x8)
	struct UTriangleSetComponent* DrawnTriangleSetComponent;  // 0x528(0x8)
	char pad_1328[80];  // 0x530(0x50)
	struct UMaterialInterface* HighlightedFaceMaterial;  // 0x580(0x8)
	char pad_1416[680];  // 0x588(0x2A8)

}; 



// Class ModelingComponents.PolygonSelectionMechanicProperties
// Size: 0x68(Inherited: 0x60) 
struct UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bSelectFaces : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bSelectEdges : 1;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bSelectVertices : 1;  // 0x62(0x1)
	char pad_99_1 : 7;  // 0x63(0x1)
	bool bSelectEdgeLoops : 1;  // 0x63(0x1)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bSelectEdgeRings : 1;  // 0x64(0x1)
	char pad_101_1 : 7;  // 0x65(0x1)
	bool bPreferProjectedElement : 1;  // 0x65(0x1)
	char pad_102_1 : 7;  // 0x66(0x1)
	bool bSelectDownRay : 1;  // 0x66(0x1)
	char pad_103_1 : 7;  // 0x67(0x1)
	bool bIgnoreOcclusion : 1;  // 0x67(0x1)

}; 



// Class ModelingComponents.PreviewGeometryActor
// Size: 0x220(Inherited: 0x220) 
struct APreviewGeometryActor : public AInternalToolFrameworkActor
{

}; 



// Class ModelingComponents.PreviewGeometry
// Size: 0x80(Inherited: 0x28) 
struct UPreviewGeometry : public UObject
{
	struct APreviewGeometryActor* ParentActor;  // 0x28(0x8)
	struct TMap<struct FString, struct ULineSetComponent*> LineSets;  // 0x30(0x50)

	bool SetLineSetVisibility(struct FString LineSetIdentifier, bool bVisible); // Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
	bool SetLineSetMaterial(struct FString LineSetIdentifier, struct UMaterialInterface* NewMaterial); // Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
	void SetAllLineSetsMaterial(struct UMaterialInterface* Material); // Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
	bool RemoveLineSet(struct FString LineSetIdentifier, bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveLineSet
	void RemoveAllLineSets(bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
	struct APreviewGeometryActor* GetActor(); // Function ModelingComponents.PreviewGeometry.GetActor
	struct ULineSetComponent* FindLineSet(struct FString LineSetIdentifier); // Function ModelingComponents.PreviewGeometry.FindLineSet
	void Disconnect(); // Function ModelingComponents.PreviewGeometry.Disconnect
	void CreateInWorld(struct UWorld* World, struct FTransform& WithTransform); // Function ModelingComponents.PreviewGeometry.CreateInWorld
	struct ULineSetComponent* AddLineSet(struct FString LineSetIdentifier); // Function ModelingComponents.PreviewGeometry.AddLineSet
}; 



// Class ModelingComponents.PreviewMeshActor
// Size: 0x220(Inherited: 0x220) 
struct APreviewMeshActor : public AInternalToolFrameworkActor
{

}; 



// Class ModelingComponents.SimpleDynamicMeshComponent
// Size: 0x610(Inherited: 0x4C0) 
struct USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent
{
	uint8_t  TangentsType;  // 0x4C0(0x1)
	char pad_1217_1 : 7;  // 0x4C1(0x1)
	bool bInvalidateProxyOnChange : 1;  // 0x4C1(0x1)
	char pad_1218[54];  // 0x4C2(0x36)
	char pad_1272_1 : 7;  // 0x4F8(0x1)
	bool bExplicitShowWireframe : 1;  // 0x4F8(0x1)
	char pad_1273[71];  // 0x4F9(0x47)
	char pad_1344_1 : 7;  // 0x540(0x1)
	bool bDrawOnTop : 1;  // 0x540(0x1)
	char pad_1345[207];  // 0x541(0xCF)

}; 



// Class ModelingComponents.SpatialCurveDistanceMechanic
// Size: 0x3F0(Inherited: 0x30) 
struct USpatialCurveDistanceMechanic : public UInteractionMechanic
{
	char pad_48[960];  // 0x30(0x3C0)

}; 



// Class ModelingComponents.TriangleSetComponent
// Size: 0x560(Inherited: 0x480) 
struct UTriangleSetComponent : public UMeshComponent
{
	struct FBoxSphereBounds Bounds;  // 0x478(0x1C)
	char pad_1180_1 : 7;  // 0x49C(0x1)
	bool bBoundsDirty : 1;  // 0x494(0x1)
	char pad_1181[195];  // 0x49D(0xC3)

}; 



// Class ModelingComponents.UVLayoutPreviewProperties
// Size: 0x78(Inherited: 0x60) 
struct UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bVisible : 1;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	float ScaleFactor;  // 0x64(0x4)
	uint8_t  WhichSide;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool bShowWireframe : 1;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)
	struct FVector2D Shift;  // 0x70(0x8)

}; 



// Class ModelingComponents.UVLayoutPreview
// Size: 0x140(Inherited: 0x28) 
struct UUVLayoutPreview : public UObject
{
	struct UUVLayoutPreviewProperties* Settings;  // 0x28(0x8)
	struct UPreviewMesh* PreviewMesh;  // 0x30(0x8)
	struct UTriangleSetComponent* TriangleComponent;  // 0x38(0x8)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bShowBackingRectangle : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)
	struct UMaterialInterface* BackingRectangleMaterial;  // 0x48(0x8)
	char pad_80[240];  // 0x50(0xF0)

}; 



