#pragma once 
#include <MeshModelingTools_Structs.h>
 
 
 
// Class MeshModelingTools.AcceptOutputProperties
// Size: 0x68(Inherited: 0x60) 
struct UAcceptOutputProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bExportSeparatedPiecesAsNewMeshAssets : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 



// Class MeshModelingTools.AddPatchToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UAddPatchToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.EdgeLoopInsertionOperatorFactory
// Size: 0x38(Inherited: 0x28) 
struct UEdgeLoopInsertionOperatorFactory : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UEdgeLoopInsertionTool* Tool;  // 0x30(0x8)

}; 



// Class MeshModelingTools.ProceduralRoundedRectangleToolProperties
// Size: 0x88(Inherited: 0x80) 
struct UProceduralRoundedRectangleToolProperties : public UProceduralRectangleToolProperties
{
	float CornerRadius;  // 0x80(0x4)
	int32_t CornerSlices;  // 0x84(0x4)

}; 



// Class MeshModelingTools.BakeTransformToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UBakeTransformToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.OffsetMeshTool
// Size: 0x420(Inherited: 0x400) 
struct UOffsetMeshTool : public UBaseMeshProcessingTool
{
	struct UOffsetMeshToolProperties* OffsetProperties;  // 0x400(0x8)
	struct UIterativeOffsetProperties* IterativeProperties;  // 0x408(0x8)
	struct UImplicitOffsetProperties* ImplicitProperties;  // 0x410(0x8)
	struct UOffsetWeightMapSetProperties* WeightMapProperties;  // 0x418(0x8)

}; 



// Class MeshModelingTools.MeshAttributePaintEditActions
// Size: 0x68(Inherited: 0x60) 
struct UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{
	char pad_96[8];  // 0x60(0x8)

}; 



// Class MeshModelingTools.AddPatchToolProperties
// Size: 0x70(Inherited: 0x60) 
struct UAddPatchToolProperties : public UInteractiveToolPropertySet
{
	float Width;  // 0x60(0x4)
	float Rotation;  // 0x64(0x4)
	int32_t Subdivisions;  // 0x68(0x4)
	float Shift;  // 0x6C(0x4)

}; 



// Class MeshModelingTools.AddTorusPrimitiveTool
// Size: 0xF0(Inherited: 0xF0) 
struct UAddTorusPrimitiveTool : public UAddPrimitiveTool
{

}; 



// Class MeshModelingTools.DrawPolyPathToolBuilder
// Size: 0x38(Inherited: 0x30) 
struct UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{
	char pad_48[8];  // 0x30(0x8)

}; 



// Class MeshModelingTools.AddPatchTool
// Size: 0x100(Inherited: 0x88) 
struct UAddPatchTool : public USingleClickTool
{
	char pad_136[8];  // 0x88(0x8)
	struct UAddPatchToolProperties* ShapeSettings;  // 0x90(0x8)
	struct UNewMeshMaterialProperties* MaterialProperties;  // 0x98(0x8)
	struct UPreviewMesh* PreviewMesh;  // 0xA0(0x8)
	char pad_168[88];  // 0xA8(0x58)

}; 



// Class MeshModelingTools.ProceduralPuncturedDiscToolProperties
// Size: 0x88(Inherited: 0x80) 
struct UProceduralPuncturedDiscToolProperties : public UProceduralDiscToolProperties
{
	float HoleRadius;  // 0x80(0x4)
	char pad_132[4];  // 0x84(0x4)

}; 



// Class MeshModelingTools.AddPrimitiveToolBuilder
// Size: 0x38(Inherited: 0x28) 
struct UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[16];  // 0x28(0x10)

}; 



// Class MeshModelingTools.ProceduralShapeToolProperties
// Size: 0x70(Inherited: 0x60) 
struct UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bInstanceIfPossible : 1;  // 0x60(0x1)
	uint8_t  PolygroupMode;  // 0x61(0x1)
	uint8_t  PlaceMode;  // 0x62(0x1)
	char pad_99_1 : 7;  // 0x63(0x1)
	bool bSnapToGrid : 1;  // 0x63(0x1)
	uint8_t  PivotLocation;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)
	float Rotation;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool bAlignShapeToPlacementSurface : 1;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)

}; 



// Class MeshModelingTools.EditNormalsAdvancedProperties
// Size: 0x60(Inherited: 0x60) 
struct UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{

}; 



// Class MeshModelingTools.BakedOcclusionMapVisualizationProperties
// Size: 0x68(Inherited: 0x60) 
struct UBakedOcclusionMapVisualizationProperties : public UInteractiveToolPropertySet
{
	float BaseGrayLevel;  // 0x60(0x4)
	float OcclusionMultiplier;  // 0x64(0x4)

}; 



// Class MeshModelingTools.ProceduralBoxToolProperties
// Size: 0x88(Inherited: 0x80) 
struct UProceduralBoxToolProperties : public UProceduralRectangleToolProperties
{
	float Height;  // 0x80(0x4)
	int32_t HeightSubdivisions;  // 0x84(0x4)

}; 



// Class MeshModelingTools.MeshInspectorProperties
// Size: 0x78(Inherited: 0x60) 
struct UMeshInspectorProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bWireframe : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bBoundaryEdges : 1;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bBowtieVertices : 1;  // 0x62(0x1)
	char pad_99_1 : 7;  // 0x63(0x1)
	bool bPolygonBorders : 1;  // 0x63(0x1)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bUVSeams : 1;  // 0x64(0x1)
	char pad_101_1 : 7;  // 0x65(0x1)
	bool bUVBowties : 1;  // 0x65(0x1)
	char pad_102_1 : 7;  // 0x66(0x1)
	bool bNormalSeams : 1;  // 0x66(0x1)
	char pad_103_1 : 7;  // 0x67(0x1)
	bool bNormalVectors : 1;  // 0x67(0x1)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bTangentVectors : 1;  // 0x68(0x1)
	char pad_105[3];  // 0x69(0x3)
	float NormalLength;  // 0x6C(0x4)
	float TangentLength;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)

}; 



// Class MeshModelingTools.DrawAndRevolveToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.BakeTransformTool
// Size: 0xB8(Inherited: 0x90) 
struct UBakeTransformTool : public UMultiSelectionTool
{
	struct UBakeTransformToolProperties* BasicProperties;  // 0x90(0x8)
	char pad_152[32];  // 0x98(0x20)

}; 



// Class MeshModelingTools.LastActorInfo
// Size: 0x58(Inherited: 0x28) 
struct ULastActorInfo : public UObject
{
	char pad_40[16];  // 0x28(0x10)
	struct AActor* Actor;  // 0x38(0x8)
	struct UStaticMesh* StaticMesh;  // 0x40(0x8)
	struct UProceduralShapeToolProperties* ShapeSettings;  // 0x48(0x8)
	struct UNewMeshMaterialProperties* MaterialProperties;  // 0x50(0x8)

}; 



// Class MeshModelingTools.ProceduralRectangleToolProperties
// Size: 0x80(Inherited: 0x70) 
struct UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{
	float Width;  // 0x70(0x4)
	float Depth;  // 0x74(0x4)
	int32_t WidthSubdivisions;  // 0x78(0x4)
	int32_t DepthSubdivisions;  // 0x7C(0x4)

}; 



// Class MeshModelingTools.CSGMeshesTool
// Size: 0x120(Inherited: 0xF0) 
struct UCSGMeshesTool : public UBaseCreateFromSelectedTool
{
	struct UCSGMeshesToolProperties* CSGProperties;  // 0xF0(0x8)
	char pad_248[16];  // 0xF8(0x10)
	struct ULineSetComponent* DrawnLineSet;  // 0x108(0x8)
	char pad_272[16];  // 0x110(0x10)

}; 



// Class MeshModelingTools.ProceduralDiscToolProperties
// Size: 0x80(Inherited: 0x70) 
struct UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{
	float Radius;  // 0x70(0x4)
	int32_t RadialSlices;  // 0x74(0x4)
	int32_t RadialSubdivisions;  // 0x78(0x4)
	char pad_124[4];  // 0x7C(0x4)

}; 



// Class MeshModelingTools.DisplaceMeshPerlinNoiseProperties
// Size: 0x70(Inherited: 0x60) 
struct UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{
	struct TArray<struct FPerlinLayerProperties> PerlinLayerProperties;  // 0x60(0x10)

}; 



// Class MeshModelingTools.AddPrimitiveTool
// Size: 0xF0(Inherited: 0x88) 
struct UAddPrimitiveTool : public USingleClickTool
{
	char pad_136[8];  // 0x88(0x8)
	struct UProceduralShapeToolProperties* ShapeSettings;  // 0x90(0x8)
	struct UNewMeshMaterialProperties* MaterialProperties;  // 0x98(0x8)
	struct UPreviewMesh* PreviewMesh;  // 0xA0(0x8)
	struct ULastActorInfo* LastGenerated;  // 0xA8(0x8)
	struct FString AssetName;  // 0xB0(0x10)
	char pad_192[48];  // 0xC0(0x30)

}; 



// Class MeshModelingTools.ProceduralTorusToolProperties
// Size: 0x80(Inherited: 0x70) 
struct UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{
	float MajorRadius;  // 0x70(0x4)
	float MinorRadius;  // 0x74(0x4)
	int32_t TubeSlices;  // 0x78(0x4)
	int32_t CrossSectionSlices;  // 0x7C(0x4)

}; 



// Class MeshModelingTools.ProceduralCylinderToolProperties
// Size: 0x80(Inherited: 0x70) 
struct UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{
	float Radius;  // 0x70(0x4)
	float Height;  // 0x74(0x4)
	int32_t RadialSlices;  // 0x78(0x4)
	int32_t HeightSubdivisions;  // 0x7C(0x4)

}; 



// Class MeshModelingTools.BakeTransformToolProperties
// Size: 0x68(Inherited: 0x60) 
struct UBakeTransformToolProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bBakeRotation : 1;  // 0x60(0x1)
	uint8_t  BakeScale;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bRecenterPivot : 1;  // 0x62(0x1)
	char pad_99[5];  // 0x63(0x5)

}; 



// Class MeshModelingTools.PhysicsObjectToolPropertySet
// Size: 0xB8(Inherited: 0x60) 
struct UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{
	struct FString ObjectName;  // 0x60(0x10)
	uint8_t  CollisionType;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)
	struct TArray<struct FPhysicsSphereData> Spheres;  // 0x78(0x10)
	struct TArray<struct FPhysicsBoxData> Boxes;  // 0x88(0x10)
	struct TArray<struct FPhysicsCapsuleData> capsules;  // 0x98(0x10)
	struct TArray<struct FPhysicsConvexData> Convexes;  // 0xA8(0x10)

}; 



// Class MeshModelingTools.ProceduralConeToolProperties
// Size: 0x80(Inherited: 0x70) 
struct UProceduralConeToolProperties : public UProceduralShapeToolProperties
{
	float Radius;  // 0x70(0x4)
	float Height;  // 0x74(0x4)
	int32_t RadialSlices;  // 0x78(0x4)
	int32_t HeightSubdivisions;  // 0x7C(0x4)

}; 



// Class MeshModelingTools.ProceduralArrowToolProperties
// Size: 0x88(Inherited: 0x70) 
struct UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{
	float ShaftRadius;  // 0x70(0x4)
	float ShaftHeight;  // 0x74(0x4)
	float HeadRadius;  // 0x78(0x4)
	float HeadHeight;  // 0x7C(0x4)
	int32_t RadialSlices;  // 0x80(0x4)
	int32_t TotalSubdivisions;  // 0x84(0x4)

}; 



// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
// Size: 0x68(Inherited: 0x60) 
struct UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{
	char pad_96[8];  // 0x60(0x8)

}; 



// Class MeshModelingTools.ProceduralSphereToolProperties
// Size: 0x80(Inherited: 0x70) 
struct UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{
	float Radius;  // 0x70(0x4)
	int32_t LatitudeSlices;  // 0x74(0x4)
	int32_t LongitudeSlices;  // 0x78(0x4)
	char pad_124[4];  // 0x7C(0x4)

}; 



// Class MeshModelingTools.ProceduralSphericalBoxToolProperties
// Size: 0x78(Inherited: 0x70) 
struct UProceduralSphericalBoxToolProperties : public UProceduralShapeToolProperties
{
	float Radius;  // 0x70(0x4)
	int32_t Subdivisions;  // 0x74(0x4)

}; 



// Class MeshModelingTools.PositionPlaneGizmoBuilder
// Size: 0x28(Inherited: 0x28) 
struct UPositionPlaneGizmoBuilder : public UInteractiveGizmoBuilder
{

}; 



// Class MeshModelingTools.AddBoxPrimitiveTool
// Size: 0xF0(Inherited: 0xF0) 
struct UAddBoxPrimitiveTool : public UAddPrimitiveTool
{

}; 



// Class MeshModelingTools.AddCylinderPrimitiveTool
// Size: 0xF0(Inherited: 0xF0) 
struct UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{

}; 



// Class MeshModelingTools.CSGMeshesToolBuilder
// Size: 0x30(Inherited: 0x30) 
struct UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{

}; 



// Class MeshModelingTools.MeshSelectionToolProperties
// Size: 0x70(Inherited: 0x60) 
struct UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  SelectionMode;  // 0x60(0x4)
	float AngleTolerance;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bHitBackFaces : 1;  // 0x68(0x1)
	char pad_105_1 : 7;  // 0x69(0x1)
	bool bShowWireframe : 1;  // 0x69(0x1)
	char pad_106[2];  // 0x6A(0x2)
	uint8_t  FaceColorMode;  // 0x6C(0x4)

}; 



// Class MeshModelingTools.AddConePrimitiveTool
// Size: 0xF0(Inherited: 0xF0) 
struct UAddConePrimitiveTool : public UAddPrimitiveTool
{

}; 



// Class MeshModelingTools.DeformMeshPolygonsTool
// Size: 0x13C0(Inherited: 0xC0) 
struct UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{
	char pad_192[8];  // 0xC0(0x8)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent;  // 0xC8(0x8)
	struct UDeformMeshPolygonsTransformProperties* TransformProps;  // 0xD0(0x8)
	char pad_216[4840];  // 0xD8(0x12E8)

}; 



// Class MeshModelingTools.DeformMeshPolygonsToolBuilder
// Size: 0x30(Inherited: 0x30) 
struct UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{

}; 



// Class MeshModelingTools.AddRectanglePrimitiveTool
// Size: 0xF0(Inherited: 0xF0) 
struct UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{

}; 



// Class MeshModelingTools.CollisionGeometryVisualizationProperties
// Size: 0x70(Inherited: 0x60) 
struct UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{
	float LineThickness;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bShowHidden : 1;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)
	struct FColor Color;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 



// Class MeshModelingTools.AddRoundedRectanglePrimitiveTool
// Size: 0xF0(Inherited: 0xF0) 
struct UAddRoundedRectanglePrimitiveTool : public UAddPrimitiveTool
{

}; 



// Class MeshModelingTools.AddDiscPrimitiveTool
// Size: 0xF0(Inherited: 0xF0) 
struct UAddDiscPrimitiveTool : public UAddPrimitiveTool
{

}; 



// Class MeshModelingTools.GroupEdgeInsertionToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UGroupEdgeInsertionToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.AddPuncturedDiscPrimitiveTool
// Size: 0xF0(Inherited: 0xF0) 
struct UAddPuncturedDiscPrimitiveTool : public UAddPrimitiveTool
{

}; 



// Class MeshModelingTools.AddArrowPrimitiveTool
// Size: 0xF0(Inherited: 0xF0) 
struct UAddArrowPrimitiveTool : public UAddPrimitiveTool
{

}; 



// Class MeshModelingTools.ConvertToPolygonsTool
// Size: 0x3E0(Inherited: 0x88) 
struct UConvertToPolygonsTool : public USingleSelectionTool
{
	struct UConvertToPolygonsToolProperties* Settings;  // 0x88(0x8)
	struct UPreviewMesh* PreviewMesh;  // 0x90(0x8)
	char pad_152[840];  // 0x98(0x348)

}; 



// Class MeshModelingTools.AddSpherePrimitiveTool
// Size: 0xF0(Inherited: 0xF0) 
struct UAddSpherePrimitiveTool : public UAddPrimitiveTool
{

}; 



// Class MeshModelingTools.CombineMeshesToolProperties
// Size: 0x88(Inherited: 0x60) 
struct UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bIsDuplicateMode : 1;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	uint8_t  WriteOutputTo;  // 0x64(0x4)
	struct FString OutputName;  // 0x68(0x10)
	struct FString OutputAsset;  // 0x78(0x10)

}; 



// Class MeshModelingTools.AlignObjectsTool
// Size: 0x140(Inherited: 0x90) 
struct UAlignObjectsTool : public UMultiSelectionTool
{
	char pad_144[8];  // 0x90(0x8)
	struct UAlignObjectsToolProperties* AlignProps;  // 0x98(0x8)
	char pad_160[160];  // 0xA0(0xA0)

}; 



// Class MeshModelingTools.AddSphericalBoxPrimitiveTool
// Size: 0xF0(Inherited: 0xF0) 
struct UAddSphericalBoxPrimitiveTool : public UAddPrimitiveTool
{

}; 



// Class MeshModelingTools.DisplaceMeshTextureMapProperties
// Size: 0x68(Inherited: 0x60) 
struct UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{
	struct UTexture2D* DisplacementMap;  // 0x60(0x8)

}; 



// Class MeshModelingTools.SculptMaxBrushOpProps
// Size: 0x78(Inherited: 0x60) 
struct USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)
	float MaxHeight;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool bUseFixedHeight : 1;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)
	float FixedHeight;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)

}; 



// Class MeshModelingTools.DeformMeshPolygonsTransformProperties
// Size: 0x80(Inherited: 0x60) 
struct UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{
	uint8_t  DeformationStrategy;  // 0x60(0x1)
	uint8_t  TransformMode;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bSelectFaces : 1;  // 0x62(0x1)
	char pad_99_1 : 7;  // 0x63(0x1)
	bool bSelectEdges : 1;  // 0x63(0x1)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bSelectVertices : 1;  // 0x64(0x1)
	char pad_101_1 : 7;  // 0x65(0x1)
	bool bSnapToWorldGrid : 1;  // 0x65(0x1)
	char pad_102_1 : 7;  // 0x66(0x1)
	bool bShowWireframe : 1;  // 0x66(0x1)
	char pad_103[1];  // 0x67(0x1)
	uint8_t  SelectedWeightScheme;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)
	double HandleWeight;  // 0x70(0x8)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool bPostFixHandles : 1;  // 0x78(0x1)
	char pad_121[7];  // 0x79(0x7)

}; 



// Class MeshModelingTools.AlignObjectsToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct UAlignObjectsToolBuilder : public UInteractiveToolBuilder
{

}; 



// Class MeshModelingTools.SpaceDeformerOperatorFactory
// Size: 0x38(Inherited: 0x28) 
struct USpaceDeformerOperatorFactory : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UMeshSpaceDeformerTool* SpaceDeformerTool;  // 0x30(0x8)

}; 



// Class MeshModelingTools.AlignObjectsToolProperties
// Size: 0x70(Inherited: 0x60) 
struct UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  AlignType;  // 0x60(0x4)
	uint8_t  AlignTo;  // 0x64(0x4)
	uint8_t  BoxPosition;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool bAlignX : 1;  // 0x6C(0x1)
	char pad_109_1 : 7;  // 0x6D(0x1)
	bool bAlignY : 1;  // 0x6D(0x1)
	char pad_110_1 : 7;  // 0x6E(0x1)
	bool bAlignZ : 1;  // 0x6E(0x1)
	char pad_111[1];  // 0x6F(0x1)

}; 



// Class MeshModelingTools.BakeMeshAttributeMapsToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UBakeMeshAttributeMapsToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.CombineMeshesTool
// Size: 0xB8(Inherited: 0x90) 
struct UCombineMeshesTool : public UMultiSelectionTool
{
	struct UCombineMeshesToolProperties* BasicProperties;  // 0x90(0x8)
	struct UOnAcceptHandleSourcesProperties* HandleSourceProperties;  // 0x98(0x8)
	char pad_160[24];  // 0xA0(0x18)

}; 



// Class MeshModelingTools.BakeMeshAttributeMapsToolProperties
// Size: 0xA0(Inherited: 0x60) 
struct UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  MapType;  // 0x60(0x4)
	uint8_t  Resolution;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bUseWorldSpace : 1;  // 0x68(0x1)
	char pad_105[3];  // 0x69(0x3)
	float Thickness;  // 0x6C(0x4)
	struct FString UVLayer;  // 0x70(0x10)
	struct TArray<struct FString> UVLayerNamesList;  // 0x80(0x10)
	struct TArray<struct UTexture2D*> Result;  // 0x90(0x10)

	struct TArray<struct FString> GetUVLayerNamesFunc(); // Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc
}; 



// Class MeshModelingTools.BakedCurvatureMapToolProperties
// Size: 0x80(Inherited: 0x60) 
struct UBakedCurvatureMapToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  CurvatureType;  // 0x60(0x4)
	uint8_t  ColorMode;  // 0x64(0x4)
	float RangeMultiplier;  // 0x68(0x4)
	float MinRangeMultiplier;  // 0x6C(0x4)
	uint8_t  Clamping;  // 0x70(0x4)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool bGaussianBlur : 1;  // 0x74(0x1)
	char pad_117[3];  // 0x75(0x3)
	float BlurRadius;  // 0x78(0x4)
	char pad_124[4];  // 0x7C(0x4)

}; 



// Class MeshModelingTools.ImplicitOffsetProperties
// Size: 0x68(Inherited: 0x60) 
struct UImplicitOffsetProperties : public UInteractiveToolPropertySet
{
	float Smoothness;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bPreserveUVs : 1;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)

}; 



// Class MeshModelingTools.EdgeLoopInsertionTool
// Size: 0x500(Inherited: 0x88) 
struct UEdgeLoopInsertionTool : public USingleSelectionTool
{
	char pad_136[16];  // 0x88(0x10)
	struct UEdgeLoopInsertionProperties* Settings;  // 0x98(0x8)
	char pad_160[608];  // 0xA0(0x260)
	struct UMeshOpPreviewWithBackgroundCompute* Preview;  // 0x300(0x8)
	char pad_776[504];  // 0x308(0x1F8)

}; 



// Class MeshModelingTools.BakedNormalMapToolProperties
// Size: 0x60(Inherited: 0x60) 
struct UBakedNormalMapToolProperties : public UInteractiveToolPropertySet
{

}; 



// Class MeshModelingTools.BrushRemeshProperties
// Size: 0x80(Inherited: 0x70) 
struct UBrushRemeshProperties : public URemeshProperties
{
	char pad_112_1 : 7;  // 0x70(0x1)
	bool bEnableRemeshing : 1;  // 0x70(0x1)
	char pad_113[3];  // 0x71(0x3)
	int32_t TriangleSize;  // 0x74(0x4)
	int32_t PreserveDetail;  // 0x78(0x4)
	int32_t Iterations;  // 0x7C(0x4)

}; 



// Class MeshModelingTools.CombineMeshesToolBuilder
// Size: 0x38(Inherited: 0x28) 
struct UCombineMeshesToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[16];  // 0x28(0x10)

}; 



// Class MeshModelingTools.BakedOcclusionMapToolProperties
// Size: 0x88(Inherited: 0x60) 
struct UBakedOcclusionMapToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  Preview;  // 0x60(0x4)
	int32_t OcclusionRays;  // 0x64(0x4)
	float MaxDistance;  // 0x68(0x4)
	float SpreadAngle;  // 0x6C(0x4)
	uint8_t  Distribution;  // 0x70(0x4)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool bGaussianBlur : 1;  // 0x74(0x1)
	char pad_117[3];  // 0x75(0x3)
	float BlurRadius;  // 0x78(0x4)
	float BiasAngle;  // 0x7C(0x4)
	uint8_t  NormalSpace;  // 0x80(0x4)
	char pad_132[4];  // 0x84(0x4)

}; 



// Class MeshModelingTools.SetCollisionGeometryTool
// Size: 0x1C0(Inherited: 0x90) 
struct USetCollisionGeometryTool : public UMultiSelectionTool
{
	struct USetCollisionGeometryToolProperties* Settings;  // 0x90(0x8)
	struct UCollisionGeometryVisualizationProperties* VizSettings;  // 0x98(0x8)
	struct UPhysicsObjectToolPropertySet* CollisionProps;  // 0xA0(0x8)
	struct UMaterialInterface* LineMaterial;  // 0xA8(0x8)
	struct UPreviewGeometry* PreviewGeom;  // 0xB0(0x8)
	char pad_184[264];  // 0xB8(0x108)

}; 



// Class MeshModelingTools.MirrorToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UMirrorToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.BakedTexture2DImageProperties
// Size: 0x70(Inherited: 0x60) 
struct UBakedTexture2DImageProperties : public UInteractiveToolPropertySet
{
	struct UTexture2D* SourceTexture;  // 0x60(0x8)
	int32_t UVLayer;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 



// Class MeshModelingTools.PhysicsInspectorToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct UPhysicsInspectorToolBuilder : public UInteractiveToolBuilder
{

}; 



// Class MeshModelingTools.BakeMeshAttributeMapsTool
// Size: 0x4F8(Inherited: 0x90) 
struct UBakeMeshAttributeMapsTool : public UMultiSelectionTool
{
	struct UBakeMeshAttributeMapsToolProperties* Settings;  // 0x90(0x8)
	struct UBakedNormalMapToolProperties* NormalMapProps;  // 0x98(0x8)
	struct UBakedOcclusionMapToolProperties* OcclusionMapProps;  // 0xA0(0x8)
	struct UBakedCurvatureMapToolProperties* CurvatureMapProps;  // 0xA8(0x8)
	struct UBakedTexture2DImageProperties* Texture2DProps;  // 0xB0(0x8)
	struct UBakedOcclusionMapVisualizationProperties* VisualizationProps;  // 0xB8(0x8)
	char pad_192[16];  // 0xC0(0x10)
	struct UMaterialInstanceDynamic* PreviewMaterial;  // 0xD0(0x8)
	struct UMaterialInstanceDynamic* BentNormalPreviewMaterial;  // 0xD8(0x8)
	char pad_224[864];  // 0xE0(0x360)
	struct UTexture2D* CachedNormalMap;  // 0x440(0x8)
	char pad_1096[40];  // 0x448(0x28)
	struct UTexture2D* CachedOcclusionMap;  // 0x470(0x8)
	struct UTexture2D* CachedBentNormalMap;  // 0x478(0x8)
	char pad_1152[40];  // 0x480(0x28)
	struct UTexture2D* CachedCurvatureMap;  // 0x4A8(0x8)
	char pad_1200[16];  // 0x4B0(0x10)
	struct UTexture2D* CachedMeshPropertyMap;  // 0x4C0(0x8)
	char pad_1224[16];  // 0x4C8(0x10)
	struct UTexture2D* CachedTexture2DImageMap;  // 0x4D8(0x8)
	struct UTexture2D* EmptyNormalMap;  // 0x4E0(0x8)
	struct UTexture2D* EmptyColorMapBlack;  // 0x4E8(0x8)
	struct UTexture2D* EmptyColorMapWhite;  // 0x4F0(0x8)

}; 



// Class MeshModelingTools.ConvertToPolygonsToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct UConvertToPolygonsToolBuilder : public UInteractiveToolBuilder
{

}; 



// Class MeshModelingTools.ConvertToPolygonsToolProperties
// Size: 0x70(Inherited: 0x60) 
struct UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  ConversionMode;  // 0x60(0x4)
	float AngleTolerance;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bCalculateNormals : 1;  // 0x68(0x1)
	char pad_105_1 : 7;  // 0x69(0x1)
	bool bShowGroupColors : 1;  // 0x69(0x1)
	char pad_106[6];  // 0x6A(0x6)

}; 



// Class MeshModelingTools.CSGMeshesToolProperties
// Size: 0x68(Inherited: 0x60) 
struct UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  Operation;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bShowNewBoundaryEdges : 1;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bAttemptFixHoles : 1;  // 0x62(0x1)
	char pad_99_1 : 7;  // 0x63(0x1)
	bool bOnlyUseFirstMeshMaterials : 1;  // 0x63(0x1)
	char pad_100[4];  // 0x64(0x4)

}; 



// Class MeshModelingTools.DisplaceMeshCommonProperties
// Size: 0x90(Inherited: 0x60) 
struct UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{
	uint8_t  DisplacementType;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	float DisplaceIntensity;  // 0x64(0x4)
	int32_t randomSeed;  // 0x68(0x4)
	int32_t Subdivisions;  // 0x6C(0x4)
	struct FName WeightMap;  // 0x70(0x8)
	struct TArray<struct FString> WeightMapsList;  // 0x78(0x10)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bInvertWeightMap : 1;  // 0x88(0x1)
	char pad_137_1 : 7;  // 0x89(0x1)
	bool bDisableSizeWarning : 1;  // 0x89(0x1)
	char pad_138[6];  // 0x8A(0x6)

	struct TArray<struct FString> GetWeightMapsFunc(); // Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc
}; 



// Class MeshModelingTools.DisplaceMeshDirectionalFilterProperties
// Size: 0x78(Inherited: 0x60) 
struct UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bEnableFilter : 1;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	struct FVector FilterDirection;  // 0x64(0xC)
	float FilterWidth;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)

}; 



// Class MeshModelingTools.DisplaceMeshToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct UDisplaceMeshToolBuilder : public UInteractiveToolBuilder
{

}; 



// Class MeshModelingTools.DisplaceMeshSineWaveProperties
// Size: 0x78(Inherited: 0x60) 
struct UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{
	float SineWaveFrequency;  // 0x60(0x4)
	float SineWavePhaseShift;  // 0x64(0x4)
	struct FVector SineWaveDirection;  // 0x68(0xC)
	char pad_116[4];  // 0x74(0x4)

}; 



// Class MeshModelingTools.DisplaceMeshTool
// Size: 0x3F0(Inherited: 0x88) 
struct UDisplaceMeshTool : public USingleSelectionTool
{
	struct UDisplaceMeshCommonProperties* CommonProperties;  // 0x88(0x8)
	struct UDisplaceMeshDirectionalFilterProperties* DirectionalFilterProperties;  // 0x90(0x8)
	struct UDisplaceMeshTextureMapProperties* TextureMapProperties;  // 0x98(0x8)
	struct UDisplaceMeshPerlinNoiseProperties* NoiseProperties;  // 0xA0(0x8)
	struct UDisplaceMeshSineWaveProperties* SineWaveProperties;  // 0xA8(0x8)
	char pad_176[832];  // 0xB0(0x340)

}; 



// Class MeshModelingTools.RemeshMeshToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct URemeshMeshToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.RevolveProperties
// Size: 0xB0(Inherited: 0x60) 
struct URevolveProperties : public UInteractiveToolPropertySet
{
	double RevolutionDegrees;  // 0x60(0x8)
	double RevolutionDegreesOffset;  // 0x68(0x8)
	int32_t Steps;  // 0x70(0x4)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool bReverseRevolutionDirection : 1;  // 0x74(0x1)
	char pad_117_1 : 7;  // 0x75(0x1)
	bool bFlipMesh : 1;  // 0x75(0x1)
	char pad_118_1 : 7;  // 0x76(0x1)
	bool bProfileIsCrossSectionOfSide : 1;  // 0x76(0x1)
	uint8_t  PolygroupMode;  // 0x77(0x1)
	uint8_t  QuadSplitMode;  // 0x78(0x1)
	char pad_121[7];  // 0x79(0x7)
	double DiagonalProportionTolerance;  // 0x80(0x8)
	uint8_t  CapFillMode;  // 0x88(0x1)
	char pad_137_1 : 7;  // 0x89(0x1)
	bool bWeldFullRevolution : 1;  // 0x89(0x1)
	char pad_138_1 : 7;  // 0x8A(0x1)
	bool bWeldVertsOnAxis : 1;  // 0x8A(0x1)
	char pad_139[5];  // 0x8B(0x5)
	double AxisWeldTolerance;  // 0x90(0x8)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool bSharpNormals : 1;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)
	double SharpNormalAngleTolerance;  // 0xA0(0x8)
	char pad_168_1 : 7;  // 0xA8(0x1)
	bool bFlipVs : 1;  // 0xA8(0x1)
	char pad_169_1 : 7;  // 0xA9(0x1)
	bool bUVsSkipFullyWeldedEdges : 1;  // 0xA9(0x1)
	char pad_170[6];  // 0xAA(0x6)

}; 



// Class MeshModelingTools.VoxelSolidifyMeshesToolBuilder
// Size: 0x30(Inherited: 0x30) 
struct UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{

}; 



// Class MeshModelingTools.RevolveToolProperties
// Size: 0xD0(Inherited: 0xB0) 
struct URevolveToolProperties : public URevolveProperties
{
	char pad_176_1 : 7;  // 0xB0(0x1)
	bool bConnectOpenProfileToAxis : 1;  // 0xB0(0x1)
	char pad_177_1 : 7;  // 0xB1(0x1)
	bool bSnapToWorldGrid : 1;  // 0xB1(0x1)
	char pad_178[2];  // 0xB2(0x2)
	struct FVector DrawPlaneOrigin;  // 0xB4(0xC)
	struct FRotator DrawPlaneOrientation;  // 0xC0(0xC)
	char pad_204_1 : 7;  // 0xCC(0x1)
	bool bEnableSnapping : 1;  // 0xCC(0x1)
	char pad_205_1 : 7;  // 0xCD(0x1)
	bool bAllowedToEditDrawPlane : 1;  // 0xCD(0x1)
	char pad_206[2];  // 0xCE(0x2)

}; 



// Class MeshModelingTools.RevolveOperatorFactory
// Size: 0x38(Inherited: 0x28) 
struct URevolveOperatorFactory : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UDrawAndRevolveTool* RevolveTool;  // 0x30(0x8)

}; 



// Class MeshModelingTools.MirrorOperatorFactory
// Size: 0x40(Inherited: 0x28) 
struct UMirrorOperatorFactory : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UMirrorTool* MirrorTool;  // 0x30(0x8)
	char pad_56[8];  // 0x38(0x8)

}; 



// Class MeshModelingTools.MeshVertexSculptToolBuilder
// Size: 0x30(Inherited: 0x30) 
struct UMeshVertexSculptToolBuilder : public UMeshSurfacePointToolBuilder
{

}; 



// Class MeshModelingTools.EdgeLoopInsertionToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UEdgeLoopInsertionToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.DrawAndRevolveTool
// Size: 0x120(Inherited: 0x80) 
struct UDrawAndRevolveTool : public UInteractiveTool
{
	char pad_128[120];  // 0x80(0x78)
	struct UCurveControlPointsMechanic* ControlPointsMechanic;  // 0xF8(0x8)
	struct UConstructionPlaneMechanic* PlaneMechanic;  // 0x100(0x8)
	struct URevolveToolProperties* Settings;  // 0x108(0x8)
	struct UNewMeshMaterialProperties* MaterialProperties;  // 0x110(0x8)
	struct UMeshOpPreviewWithBackgroundCompute* Preview;  // 0x118(0x8)

}; 



// Class MeshModelingTools.DrawPolygonToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.UVProjectionTool
// Size: 0x220(Inherited: 0x90) 
struct UUVProjectionTool : public UMultiSelectionTool
{
	struct UUVProjectionToolProperties* BasicProperties;  // 0x90(0x8)
	struct UUVProjectionAdvancedProperties* AdvancedProperties;  // 0x98(0x8)
	struct UExistingMeshMaterialProperties* MaterialSettings;  // 0xA0(0x8)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews;  // 0xA8(0x10)
	struct UMaterialInstanceDynamic* CheckerMaterial;  // 0xB8(0x8)
	struct TArray<struct UTransformGizmo*> TransformGizmos;  // 0xC0(0x10)
	struct TArray<struct UTransformProxy*> TransformProxies;  // 0xD0(0x10)
	char pad_224[320];  // 0xE0(0x140)

}; 



// Class MeshModelingTools.BasePlaneBrushOpProps
// Size: 0x60(Inherited: 0x60) 
struct UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{

}; 



// Class MeshModelingTools.EditUVIslandsTool
// Size: 0x380(Inherited: 0xC0) 
struct UEditUVIslandsTool : public UMeshSurfacePointTool
{
	char pad_192[8];  // 0xC0(0x8)
	struct UExistingMeshMaterialProperties* MaterialSettings;  // 0xC8(0x8)
	struct UMaterialInstanceDynamic* CheckerMaterial;  // 0xD0(0x8)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent;  // 0xD8(0x8)
	struct UPolygonSelectionMechanic* SelectionMechanic;  // 0xE0(0x8)
	char pad_232[8];  // 0xE8(0x8)
	struct UMultiTransformer* MultiTransformer;  // 0xF0(0x8)
	char pad_248[648];  // 0xF8(0x288)

}; 



// Class MeshModelingTools.DrawPolygonToolStandardProperties
// Size: 0x78(Inherited: 0x60) 
struct UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{
	uint8_t  PolygonType;  // 0x60(0x1)
	uint8_t  OutputMode;  // 0x61(0x1)
	char pad_98[2];  // 0x62(0x2)
	float FeatureSizeRatio;  // 0x64(0x4)
	float ExtrudeHeight;  // 0x68(0x4)
	int32_t Steps;  // 0x6C(0x4)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool bAllowSelfIntersections : 1;  // 0x70(0x1)
	char pad_113_1 : 7;  // 0x71(0x1)
	bool bShowGizmo : 1;  // 0x71(0x1)
	char pad_114[6];  // 0x72(0x6)

}; 



// Class MeshModelingTools.DrawPolygonToolSnapProperties
// Size: 0x78(Inherited: 0x60) 
struct UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bEnableSnapping : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bSnapToWorldGrid : 1;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bSnapToVertices : 1;  // 0x62(0x1)
	char pad_99_1 : 7;  // 0x63(0x1)
	bool bSnapToEdges : 1;  // 0x63(0x1)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bSnapToAngles : 1;  // 0x64(0x1)
	char pad_101_1 : 7;  // 0x65(0x1)
	bool bSnapToLengths : 1;  // 0x65(0x1)
	char pad_102[2];  // 0x66(0x2)
	float SegmentLength;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool bHitSceneObjects : 1;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)
	float HitNormalOffset;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)

}; 



// Class MeshModelingTools.DrawPolygonTool
// Size: 0x570(Inherited: 0x80) 
struct UDrawPolygonTool : public UInteractiveTool
{
	char pad_128[8];  // 0x80(0x8)
	struct UDrawPolygonToolStandardProperties* PolygonProperties;  // 0x88(0x8)
	struct UDrawPolygonToolSnapProperties* SnapProperties;  // 0x90(0x8)
	struct UNewMeshMaterialProperties* MaterialProperties;  // 0x98(0x8)
	char pad_160[176];  // 0xA0(0xB0)
	struct UPreviewMesh* PreviewMesh;  // 0x150(0x8)
	struct UTransformGizmo* PlaneTransformGizmo;  // 0x158(0x8)
	struct UTransformProxy* PlaneTransformProxy;  // 0x160(0x8)
	char pad_360[984];  // 0x168(0x3D8)
	struct UPlaneDistanceFromHitMechanic* HeightMechanic;  // 0x540(0x8)
	char pad_1352[40];  // 0x548(0x28)

}; 



// Class MeshModelingTools.BrushSculptProperties
// Size: 0x78(Inherited: 0x60) 
struct UBrushSculptProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bIsRemeshingEnabled : 1;  // 0x60(0x1)
	uint8_t  PrimaryBrushType;  // 0x61(0x1)
	char pad_98[2];  // 0x62(0x2)
	float PrimaryBrushSpeed;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bPreserveUVFlow : 1;  // 0x68(0x1)
	char pad_105_1 : 7;  // 0x69(0x1)
	bool bFreezeTarget : 1;  // 0x69(0x1)
	char pad_106[2];  // 0x6A(0x2)
	float SmoothBrushSpeed;  // 0x6C(0x4)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool bDetailPreservingSmooth : 1;  // 0x70(0x1)
	char pad_113[7];  // 0x71(0x7)

}; 



// Class MeshModelingTools.DrawPolyPathProperties
// Size: 0x80(Inherited: 0x60) 
struct UDrawPolyPathProperties : public UInteractiveToolPropertySet
{
	uint8_t  OutputType;  // 0x60(0x4)
	uint8_t  WidthMode;  // 0x64(0x4)
	float Width;  // 0x68(0x4)
	uint8_t  HeightMode;  // 0x6C(0x4)
	float Height;  // 0x70(0x4)
	float RampStartRatio;  // 0x74(0x4)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool bSnapToWorldGrid : 1;  // 0x78(0x1)
	char pad_121[7];  // 0x79(0x7)

}; 



// Class MeshModelingTools.FlattenBrushOpProps
// Size: 0x70(Inherited: 0x60) 
struct UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)
	float Depth;  // 0x68(0x4)
	uint8_t  WhichSide;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)

}; 



// Class MeshModelingTools.DrawPolyPathExtrudeProperties
// Size: 0x68(Inherited: 0x60) 
struct UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{
	uint8_t  Direction;  // 0x60(0x4)
	char pad_100[4];  // 0x64(0x4)

}; 



// Class MeshModelingTools.MeshSelectionTool
// Size: 0x490(Inherited: 0x1F8) 
struct UMeshSelectionTool : public UDynamicMeshBrushTool
{
	struct UMeshSelectionToolProperties* SelectionProps;  // 0x1F8(0x8)
	struct UMeshSelectionEditActions* SelectionActions;  // 0x200(0x8)
	struct UMeshSelectionToolActionPropertySet* EditActions;  // 0x208(0x8)
	struct UMeshSelectionSet* Selection;  // 0x210(0x8)
	struct TArray<struct AActor*> SpawnedActors;  // 0x218(0x10)
	char pad_552[616];  // 0x228(0x268)

}; 



// Class MeshModelingTools.DrawPolyPathTool
// Size: 0x210(Inherited: 0x80) 
struct UDrawPolyPathTool : public UInteractiveTool
{
	char pad_128[32];  // 0x80(0x20)
	struct UDrawPolyPathProperties* TransformProps;  // 0xA0(0x8)
	struct UDrawPolyPathExtrudeProperties* ExtrudeProperties;  // 0xA8(0x8)
	struct UNewMeshMaterialProperties* MaterialProperties;  // 0xB0(0x8)
	char pad_184[136];  // 0xB8(0x88)
	struct UConstructionPlaneMechanic* PlaneMechanic;  // 0x140(0x8)
	char pad_328[160];  // 0x148(0xA0)
	struct UPolyEditPreviewMesh* EditPreview;  // 0x1E8(0x8)
	struct UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;  // 0x1F0(0x8)
	struct USpatialCurveDistanceMechanic* CurveDistMechanic;  // 0x1F8(0x8)
	struct UCollectSurfacePathMechanic* SurfacePathMechanic;  // 0x200(0x8)
	char pad_520[8];  // 0x208(0x8)

}; 



// Class MeshModelingTools.PlaneBrushOpProps
// Size: 0x70(Inherited: 0x60) 
struct UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)
	float Depth;  // 0x68(0x4)
	uint8_t  WhichSide;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)

}; 



// Class MeshModelingTools.DynamicMeshBrushTool
// Size: 0x1F8(Inherited: 0x1B8) 
struct UDynamicMeshBrushTool : public UBaseBrushTool
{
	struct UPreviewMesh* PreviewMesh;  // 0x1B8(0x8)
	char pad_448[56];  // 0x1C0(0x38)

}; 



// Class MeshModelingTools.SeamSculptToolProperties
// Size: 0x68(Inherited: 0x60) 
struct USeamSculptToolProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bShowWireframe : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bHitBackFaces : 1;  // 0x61(0x1)
	char pad_98[6];  // 0x62(0x6)

}; 



// Class MeshModelingTools.DynamicMeshSculptToolBuilder
// Size: 0x38(Inherited: 0x30) 
struct UDynamicMeshSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
	char pad_48[8];  // 0x30(0x8)

}; 



// Class MeshModelingTools.DynamicSculptToolActions
// Size: 0x68(Inherited: 0x60) 
struct UDynamicSculptToolActions : public UInteractiveToolPropertySet
{
	char pad_96[8];  // 0x60(0x8)

	void DiscardAttributes(); // Function MeshModelingTools.DynamicSculptToolActions.DiscardAttributes
}; 



// Class MeshModelingTools.MeshConstraintProperties
// Size: 0x68(Inherited: 0x60) 
struct UMeshConstraintProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bPreserveSharpEdges : 1;  // 0x60(0x1)
	uint8_t  MeshBoundaryConstraint;  // 0x61(0x1)
	uint8_t  GroupBoundaryConstraint;  // 0x62(0x1)
	uint8_t  MaterialBoundaryConstraint;  // 0x63(0x1)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bPreventNormalFlips : 1;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)

}; 



// Class MeshModelingTools.RemeshProperties
// Size: 0x70(Inherited: 0x68) 
struct URemeshProperties : public UMeshConstraintProperties
{
	float SmoothingStrength;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool bFlips : 1;  // 0x6C(0x1)
	char pad_109_1 : 7;  // 0x6D(0x1)
	bool bSplits : 1;  // 0x6D(0x1)
	char pad_110_1 : 7;  // 0x6E(0x1)
	bool bCollapses : 1;  // 0x6E(0x1)
	char pad_111[1];  // 0x6F(0x1)

}; 



// Class MeshModelingTools.FixedPlaneBrushProperties
// Size: 0x80(Inherited: 0x60) 
struct UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bPropertySetEnabled : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bShowGizmo : 1;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bSnapToGrid : 1;  // 0x62(0x1)
	char pad_99[1];  // 0x63(0x1)
	struct FVector position;  // 0x64(0xC)
	struct FQuat Rotation;  // 0x70(0x10)

}; 



// Class MeshModelingTools.RevolveBoundaryToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct URevolveBoundaryToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.PolyEditCommonProperties
// Size: 0x70(Inherited: 0x60) 
struct UPolyEditCommonProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bShowWireframe : 1;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	uint8_t  LocalFrameMode;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bLockRotation : 1;  // 0x68(0x1)
	char pad_105_1 : 7;  // 0x69(0x1)
	bool bSnapToWorldGrid : 1;  // 0x69(0x1)
	char pad_106[6];  // 0x6A(0x6)

}; 



// Class MeshModelingTools.DynamicMeshSculptTool
// Size: 0xD20(Inherited: 0xC0) 
struct UDynamicMeshSculptTool : public UMeshSurfacePointTool
{
	struct USculptBrushProperties* BrushProperties;  // 0xC0(0x8)
	struct UBrushSculptProperties* SculptProperties;  // 0xC8(0x8)
	struct USculptMaxBrushProperties* SculptMaxBrushProperties;  // 0xD0(0x8)
	struct UKelvinBrushProperties* KelvinBrushProperties;  // 0xD8(0x8)
	struct UBrushRemeshProperties* RemeshProperties;  // 0xE0(0x8)
	struct UFixedPlaneBrushProperties* GizmoProperties;  // 0xE8(0x8)
	struct UMeshEditingViewProperties* ViewProperties;  // 0xF0(0x8)
	struct UDynamicSculptToolActions* SculptToolActions;  // 0xF8(0x8)
	char pad_256[64];  // 0x100(0x40)
	struct UBrushStampIndicator* BrushIndicator;  // 0x140(0x8)
	struct UMaterialInstanceDynamic* BrushIndicatorMaterial;  // 0x148(0x8)
	struct UPreviewMesh* BrushIndicatorMesh;  // 0x150(0x8)
	struct UOctreeDynamicMeshComponent* DynamicMeshComponent;  // 0x158(0x8)
	struct UMaterialInstanceDynamic* ActiveOverrideMaterial;  // 0x160(0x8)
	char pad_360[2976];  // 0x168(0xBA0)
	struct UTransformGizmo* PlaneTransformGizmo;  // 0xD08(0x8)
	struct UTransformProxy* PlaneTransformProxy;  // 0xD10(0x8)
	char pad_3352[8];  // 0xD18(0x8)

}; 



// Class MeshModelingTools.IterativeOffsetProperties
// Size: 0x70(Inherited: 0x60) 
struct UIterativeOffsetProperties : public UInteractiveToolPropertySet
{
	int32_t Steps;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bOffsetBoundaries : 1;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)
	float SmoothingPerStep;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool bReprojectSmooth : 1;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)

}; 



// Class MeshModelingTools.PullKelvinletBrushOpProps
// Size: 0x78(Inherited: 0x70) 
struct UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
	float Falloff;  // 0x70(0x4)
	float Depth;  // 0x74(0x4)

}; 



// Class MeshModelingTools.EdgeLoopInsertionProperties
// Size: 0x90(Inherited: 0x60) 
struct UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{
	uint8_t  PositionMode;  // 0x60(0x4)
	uint8_t  InsertionMode;  // 0x64(0x4)
	int32_t NumLoops;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)
	double ProportionOffset;  // 0x70(0x8)
	double DistanceOffset;  // 0x78(0x8)
	char pad_128_1 : 7;  // 0x80(0x1)
	bool bInteractive : 1;  // 0x80(0x1)
	char pad_129_1 : 7;  // 0x81(0x1)
	bool bFlipOffsetDirection : 1;  // 0x81(0x1)
	char pad_130_1 : 7;  // 0x82(0x1)
	bool bWireframe : 1;  // 0x82(0x1)
	char pad_131[5];  // 0x83(0x5)
	double VertexTolerance;  // 0x88(0x8)

}; 



// Class MeshModelingTools.EditMeshPolygonsToolBuilder
// Size: 0x38(Inherited: 0x30) 
struct UEditMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
	char pad_48[8];  // 0x30(0x8)

}; 



// Class MeshModelingTools.VoxelBlendMeshesToolBuilder
// Size: 0x30(Inherited: 0x30) 
struct UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{

}; 



// Class MeshModelingTools.EditMeshPolygonsToolActions
// Size: 0x68(Inherited: 0x68) 
struct UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{

	void Retriangulate(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate
	void RecalcNormals(); // Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals
	void Outset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Outset
	void Offset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Offset
	void Merge(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Merge
	void Inset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Inset
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Flip
	void Extrude(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude
	void Disconnect(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect
	void Delete(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Delete
	void Decompose(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose
	void CutFaces(); // Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces
}; 



// Class MeshModelingTools.EditPivotToolProperties
// Size: 0x68(Inherited: 0x60) 
struct UEditPivotToolProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bEnableSnapDragging : 1;  // 0x60(0x1)
	uint8_t  RotationMode;  // 0x61(0x1)
	char pad_98[6];  // 0x62(0x6)

}; 



// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
// Size: 0x68(Inherited: 0x68) 
struct UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{

	void RecalcNormals(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals
	void Poke(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke
	void Outset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset
	void Offset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset
	void Inset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip
	void Extrude(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude
	void Disconnect(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect
	void Delete(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete
	void CutFaces(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces
}; 



// Class MeshModelingTools.EditMeshPolygonsToolUVActions
// Size: 0x68(Inherited: 0x68) 
struct UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{

	void PlanarProjection(); // Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection
}; 



// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
// Size: 0x68(Inherited: 0x68) 
struct UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{

	void Weld(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld
	void Straighten(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten
	void FillHole(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole
}; 



// Class MeshModelingTools.PlaneCutTool
// Size: 0x160(Inherited: 0x90) 
struct UPlaneCutTool : public UMultiSelectionTool
{
	char pad_144[8];  // 0x90(0x8)
	struct UPlaneCutToolProperties* BasicProperties;  // 0x98(0x8)
	struct UAcceptOutputProperties* AcceptProperties;  // 0xA0(0x8)
	struct FVector CutPlaneOrigin;  // 0xA8(0xC)
	char pad_180[12];  // 0xB4(0xC)
	struct FQuat CutPlaneOrientation;  // 0xC0(0x10)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews;  // 0xD0(0x10)
	struct TArray<struct UDynamicMeshReplacementChangeTarget*> MeshesToCut;  // 0xE0(0x10)
	char pad_240[88];  // 0xF0(0x58)
	struct UTransformGizmo* PlaneTransformGizmo;  // 0x148(0x8)
	struct UTransformProxy* PlaneTransformProxy;  // 0x150(0x8)
	char pad_344[8];  // 0x158(0x8)

	void Cut(); // Function MeshModelingTools.PlaneCutTool.Cut
}; 



// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
// Size: 0x68(Inherited: 0x68) 
struct UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{

	void Weld(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld
	void Split(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip
	void FillHole(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole
	void Collapse(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse
}; 



// Class MeshModelingTools.PolyEditExtrudeProperties
// Size: 0x68(Inherited: 0x60) 
struct UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{
	uint8_t  Direction;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bShellsToSolids : 1;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)

}; 



// Class MeshModelingTools.HoleFillToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct UHoleFillToolBuilder : public UInteractiveToolBuilder
{

}; 



// Class MeshModelingTools.PolyEditOffsetProperties
// Size: 0x68(Inherited: 0x60) 
struct UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bUseFaceNormals : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 



// Class MeshModelingTools.PolyEditInsetProperties
// Size: 0x70(Inherited: 0x60) 
struct UPolyEditInsetProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bReproject : 1;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	float Softness;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bBoundaryOnly : 1;  // 0x68(0x1)
	char pad_105[3];  // 0x69(0x3)
	float AreaScale;  // 0x6C(0x4)

}; 



// Class MeshModelingTools.PolyEditOutsetProperties
// Size: 0x70(Inherited: 0x60) 
struct UPolyEditOutsetProperties : public UInteractiveToolPropertySet
{
	float Softness;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bBoundaryOnly : 1;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)
	float AreaScale;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 



// Class MeshModelingTools.PolyEditCutProperties
// Size: 0x68(Inherited: 0x60) 
struct UPolyEditCutProperties : public UInteractiveToolPropertySet
{
	uint8_t  Orientation;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bSnapToVertices : 1;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)

}; 



// Class MeshModelingTools.PolyEditSetUVProperties
// Size: 0x68(Inherited: 0x60) 
struct UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bShowMaterial : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 



// Class MeshModelingTools.EditMeshPolygonsTool
// Size: 0x7D0(Inherited: 0xC0) 
struct UEditMeshPolygonsTool : public UMeshSurfacePointTool
{
	char pad_192[16];  // 0xC0(0x10)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent;  // 0xD0(0x8)
	struct UPolyEditCommonProperties* CommonProps;  // 0xD8(0x8)
	struct UEditMeshPolygonsToolActions* EditActions;  // 0xE0(0x8)
	struct UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles;  // 0xE8(0x8)
	struct UEditMeshPolygonsToolEdgeActions* EditEdgeActions;  // 0xF0(0x8)
	struct UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles;  // 0xF8(0x8)
	struct UEditMeshPolygonsToolUVActions* EditUVActions;  // 0x100(0x8)
	struct UPolyEditExtrudeProperties* ExtrudeProperties;  // 0x108(0x8)
	struct UPolyEditOffsetProperties* OffsetProperties;  // 0x110(0x8)
	struct UPolyEditInsetProperties* InsetProperties;  // 0x118(0x8)
	struct UPolyEditOutsetProperties* OutsetProperties;  // 0x120(0x8)
	struct UPolyEditCutProperties* CutProperties;  // 0x128(0x8)
	struct UPolyEditSetUVProperties* SetUVProperties;  // 0x130(0x8)
	struct UPolygonSelectionMechanic* SelectionMechanic;  // 0x138(0x8)
	char pad_320[8];  // 0x140(0x8)
	struct UMultiTransformer* MultiTransformer;  // 0x148(0x8)
	char pad_336[848];  // 0x150(0x350)
	struct UPolyEditPreviewMesh* EditPreview;  // 0x4A0(0x8)
	char pad_1192[8];  // 0x4A8(0x8)
	struct UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;  // 0x4B0(0x8)
	struct USpatialCurveDistanceMechanic* CurveDistMechanic;  // 0x4B8(0x8)
	struct UCollectSurfacePathMechanic* SurfacePathMechanic;  // 0x4C0(0x8)
	char pad_1224[776];  // 0x4C8(0x308)

}; 



// Class MeshModelingTools.EditNormalsToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UEditNormalsToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.EditNormalsToolProperties
// Size: 0x70(Inherited: 0x60) 
struct UEditNormalsToolProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bRecomputeNormals : 1;  // 0x60(0x1)
	uint8_t  NormalCalculationMethod;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bFixInconsistentNormals : 1;  // 0x62(0x1)
	char pad_99_1 : 7;  // 0x63(0x1)
	bool bInvertNormals : 1;  // 0x63(0x1)
	uint8_t  SplitNormalMethod;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)
	float SharpEdgeAngleThreshold;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool bAllowSharpVertices : 1;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)

}; 



// Class MeshModelingTools.MeshSelectionToolActionPropertySet
// Size: 0x68(Inherited: 0x60) 
struct UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{
	char pad_96[8];  // 0x60(0x8)

}; 



// Class MeshModelingTools.EditNormalsOperatorFactory
// Size: 0x40(Inherited: 0x28) 
struct UEditNormalsOperatorFactory : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UEditNormalsTool* Tool;  // 0x30(0x8)
	char pad_56[8];  // 0x38(0x8)

}; 



// Class MeshModelingTools.EditNormalsTool
// Size: 0x100(Inherited: 0x90) 
struct UEditNormalsTool : public UMultiSelectionTool
{
	struct UEditNormalsToolProperties* BasicProperties;  // 0x90(0x8)
	struct UEditNormalsAdvancedProperties* AdvancedProperties;  // 0x98(0x8)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews;  // 0xA0(0x10)
	char pad_176[80];  // 0xB0(0x50)

}; 



// Class MeshModelingTools.EditPivotToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct UEditPivotToolBuilder : public UInteractiveToolBuilder
{

}; 



// Class MeshModelingTools.EditPivotToolActionPropertySet
// Size: 0x70(Inherited: 0x60) 
struct UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{
	char pad_96[8];  // 0x60(0x8)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bUseWorldBox : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

	void Top(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Top
	void Right(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Right
	void Left(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Left
	void Front(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Front
	void Center(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Center
	void Bottom(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Bottom
	void Back(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Back
}; 



// Class MeshModelingTools.EditPivotTool
// Size: 0x200(Inherited: 0x90) 
struct UEditPivotTool : public UMultiSelectionTool
{
	char pad_144[8];  // 0x90(0x8)
	struct UEditPivotToolProperties* TransformProps;  // 0x98(0x8)
	struct UEditPivotToolActionPropertySet* EditPivotActions;  // 0xA0(0x8)
	char pad_168[208];  // 0xA8(0xD0)
	struct TArray<struct FEditPivotTarget> ActiveGizmos;  // 0x178(0x10)
	char pad_392[120];  // 0x188(0x78)

}; 



// Class MeshModelingTools.WeldMeshEdgesToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct UWeldMeshEdgesToolBuilder : public UInteractiveToolBuilder
{

}; 



// Class MeshModelingTools.EditUVIslandsToolBuilder
// Size: 0x30(Inherited: 0x30) 
struct UEditUVIslandsToolBuilder : public UMeshSurfacePointToolBuilder
{

}; 



// Class MeshModelingTools.ExtractCollisionGeometryToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UExtractCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.MeshSelectionToolBuilder
// Size: 0x38(Inherited: 0x30) 
struct UMeshSelectionToolBuilder : public UMeshSurfacePointToolBuilder
{
	char pad_48[8];  // 0x30(0x8)

}; 



// Class MeshModelingTools.ExtractCollisionGeometryTool
// Size: 0x330(Inherited: 0x88) 
struct UExtractCollisionGeometryTool : public USingleSelectionTool
{
	struct UCollisionGeometryVisualizationProperties* VizSettings;  // 0x88(0x8)
	struct UPhysicsObjectToolPropertySet* ObjectProps;  // 0x90(0x8)
	struct UPreviewGeometry* PreviewElements;  // 0x98(0x8)
	struct UPreviewMesh* PreviewMesh;  // 0xA0(0x8)
	char pad_168[648];  // 0xA8(0x288)

}; 



// Class MeshModelingTools.GroupEdgeInsertionProperties
// Size: 0x70(Inherited: 0x60) 
struct UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{
	uint8_t  InsertionMode;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bWireframe : 1;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)
	double VertexTolerance;  // 0x68(0x8)

}; 



// Class MeshModelingTools.HoleFillStatisticsProperties
// Size: 0xB0(Inherited: 0x60) 
struct UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{
	struct FString InitialHoles;  // 0x60(0x10)
	struct FString SelectedHoles;  // 0x70(0x10)
	struct FString SuccessfulFills;  // 0x80(0x10)
	struct FString FailedFills;  // 0x90(0x10)
	struct FString RemainingHoles;  // 0xA0(0x10)

}; 



// Class MeshModelingTools.GroupEdgeInsertionOperatorFactory
// Size: 0x38(Inherited: 0x28) 
struct UGroupEdgeInsertionOperatorFactory : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UGroupEdgeInsertionTool* Tool;  // 0x30(0x8)

}; 



// Class MeshModelingTools.HoleFillToolProperties
// Size: 0x68(Inherited: 0x60) 
struct UHoleFillToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  FillType;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bRemoveIsolatedTriangles : 1;  // 0x61(0x1)
	char pad_98[6];  // 0x62(0x6)

}; 



// Class MeshModelingTools.GroupEdgeInsertionTool
// Size: 0x550(Inherited: 0x88) 
struct UGroupEdgeInsertionTool : public USingleSelectionTool
{
	char pad_136[16];  // 0x88(0x10)
	struct UGroupEdgeInsertionProperties* Settings;  // 0x98(0x8)
	struct UMeshOpPreviewWithBackgroundCompute* Preview;  // 0xA0(0x8)
	char pad_168[1192];  // 0xA8(0x4A8)

}; 



// Class MeshModelingTools.SmoothHoleFillProperties
// Size: 0x88(Inherited: 0x60) 
struct USmoothHoleFillProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bConstrainToHoleInterior : 1;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	int32_t RemeshingExteriorRegionWidth;  // 0x64(0x4)
	int32_t SmoothingExteriorRegionWidth;  // 0x68(0x4)
	int32_t SmoothingInteriorRegionWidth;  // 0x6C(0x4)
	float InteriorSmoothness;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)
	double FillDensityScalar;  // 0x78(0x8)
	char pad_128_1 : 7;  // 0x80(0x1)
	bool bProjectDuringRemesh : 1;  // 0x80(0x1)
	char pad_129[7];  // 0x81(0x7)

}; 



// Class MeshModelingTools.HoleFillToolActions
// Size: 0x68(Inherited: 0x60) 
struct UHoleFillToolActions : public UInteractiveToolPropertySet
{
	char pad_96[8];  // 0x60(0x8)

	void SelectAll(); // Function MeshModelingTools.HoleFillToolActions.SelectAll
	void Clear(); // Function MeshModelingTools.HoleFillToolActions.Clear
}; 



// Class MeshModelingTools.HoleFillOperatorFactory
// Size: 0x38(Inherited: 0x28) 
struct UHoleFillOperatorFactory : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UHoleFillTool* FillTool;  // 0x30(0x8)

}; 



// Class MeshModelingTools.HoleFillTool
// Size: 0x1E0(Inherited: 0x88) 
struct UHoleFillTool : public USingleSelectionTool
{
	char pad_136[16];  // 0x88(0x10)
	struct USmoothHoleFillProperties* SmoothHoleFillProperties;  // 0x98(0x8)
	struct UHoleFillToolProperties* Properties;  // 0xA0(0x8)
	struct UHoleFillToolActions* Actions;  // 0xA8(0x8)
	struct UHoleFillStatisticsProperties* Statistics;  // 0xB0(0x8)
	struct UMeshOpPreviewWithBackgroundCompute* Preview;  // 0xB8(0x8)
	struct UPolygonSelectionMechanic* SelectionMechanic;  // 0xC0(0x8)
	char pad_200[280];  // 0xC8(0x118)

}; 



// Class MeshModelingTools.MeshSculptBrushOpProps
// Size: 0x60(Inherited: 0x60) 
struct UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{

}; 



// Class MeshModelingTools.RemeshMeshToolProperties
// Size: 0x90(Inherited: 0x70) 
struct URemeshMeshToolProperties : public URemeshProperties
{
	int32_t TargetTriangleCount;  // 0x70(0x4)
	uint8_t  SmoothingType;  // 0x74(0x1)
	char pad_117_1 : 7;  // 0x75(0x1)
	bool bDiscardAttributes : 1;  // 0x75(0x1)
	char pad_118_1 : 7;  // 0x76(0x1)
	bool bShowWireframe : 1;  // 0x76(0x1)
	char pad_119_1 : 7;  // 0x77(0x1)
	bool bShowGroupColors : 1;  // 0x77(0x1)
	uint8_t  RemeshType;  // 0x78(0x1)
	char pad_121[3];  // 0x79(0x3)
	int32_t RemeshIterations;  // 0x7C(0x4)
	char pad_128_1 : 7;  // 0x80(0x1)
	bool bUseTargetEdgeLength : 1;  // 0x80(0x1)
	char pad_129[3];  // 0x81(0x3)
	float TargetEdgeLength;  // 0x84(0x4)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bReproject : 1;  // 0x88(0x1)
	char pad_137[7];  // 0x89(0x7)

}; 



// Class MeshModelingTools.BaseKelvinletBrushOpProps
// Size: 0x70(Inherited: 0x60) 
struct UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{
	float Stiffness;  // 0x60(0x4)
	float Incompressiblity;  // 0x64(0x4)
	int32_t BrushSteps;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 



// Class MeshModelingTools.ScaleKelvinletBrushOpProps
// Size: 0x78(Inherited: 0x70) 
struct UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
	float Strength;  // 0x70(0x4)
	float Falloff;  // 0x74(0x4)

}; 



// Class MeshModelingTools.SharpPullKelvinletBrushOpProps
// Size: 0x78(Inherited: 0x70) 
struct USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
	float Falloff;  // 0x70(0x4)
	float Depth;  // 0x74(0x4)

}; 



// Class MeshModelingTools.TwistKelvinletBrushOpProps
// Size: 0x78(Inherited: 0x70) 
struct UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
	float Strength;  // 0x70(0x4)
	float Falloff;  // 0x74(0x4)

}; 



// Class MeshModelingTools.MeshAnalysisProperties
// Size: 0x80(Inherited: 0x60) 
struct UMeshAnalysisProperties : public UInteractiveToolPropertySet
{
	struct FString SurfaceArea;  // 0x60(0x10)
	struct FString Volume;  // 0x70(0x10)

}; 



// Class MeshModelingTools.MeshAttributePaintToolBuilder
// Size: 0x80(Inherited: 0x30) 
struct UMeshAttributePaintToolBuilder : public UMeshSurfacePointToolBuilder
{
	char pad_48[80];  // 0x30(0x50)

}; 



// Class MeshModelingTools.UVProjectionOperatorFactory
// Size: 0x40(Inherited: 0x28) 
struct UUVProjectionOperatorFactory : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UUVProjectionTool* Tool;  // 0x30(0x8)
	char pad_56[8];  // 0x38(0x8)

}; 



// Class MeshModelingTools.ProjectToTargetToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UProjectToTargetToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.MeshAttributePaintToolProperties
// Size: 0x88(Inherited: 0x60) 
struct UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{
	struct TArray<struct FName> Attributes;  // 0x60(0x10)
	int32_t SelectedAttribute;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)
	struct FString AttributeName;  // 0x78(0x10)

}; 



// Class MeshModelingTools.PositionPlaneGizmo
// Size: 0x520(Inherited: 0x38) 
struct UPositionPlaneGizmo : public UInteractiveGizmo
{
	char pad_56[80];  // 0x38(0x50)
	struct UPreviewMesh* CenterBallShape;  // 0x88(0x8)
	struct UMaterialInstance* CenterBallMaterial;  // 0x90(0x8)
	char pad_152[1160];  // 0x98(0x488)

}; 



// Class MeshModelingTools.MeshAttributePaintTool
// Size: 0x610(Inherited: 0x1F8) 
struct UMeshAttributePaintTool : public UDynamicMeshBrushTool
{
	struct UMeshAttributePaintToolProperties* AttribProps;  // 0x1F8(0x8)
	char pad_512[1040];  // 0x200(0x410)

}; 



// Class MeshModelingTools.MeshBoundaryToolBase
// Size: 0x150(Inherited: 0x88) 
struct UMeshBoundaryToolBase : public USingleSelectionTool
{
	char pad_136[176];  // 0x88(0xB0)
	struct UPolygonSelectionMechanic* SelectionMechanic;  // 0x138(0x8)
	struct USingleClickInputBehavior* LoopSelectClickBehavior;  // 0x140(0x8)
	char pad_328[8];  // 0x148(0x8)

}; 



// Class MeshModelingTools.ImplicitSmoothProperties
// Size: 0x70(Inherited: 0x60) 
struct UImplicitSmoothProperties : public UInteractiveToolPropertySet
{
	float SmoothSpeed;  // 0x60(0x4)
	float Smoothness;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bPreserveUVs : 1;  // 0x68(0x1)
	char pad_105[3];  // 0x69(0x3)
	float VolumeCorrection;  // 0x6C(0x4)

}; 



// Class MeshModelingTools.InflateBrushOpProps
// Size: 0x68(Inherited: 0x60) 
struct UInflateBrushOpProps : public UMeshSculptBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)

}; 



// Class MeshModelingTools.MeshInspectorToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct UMeshInspectorToolBuilder : public UInteractiveToolBuilder
{

}; 



// Class MeshModelingTools.MeshInspectorTool
// Size: 0x128(Inherited: 0x88) 
struct UMeshInspectorTool : public USingleSelectionTool
{
	struct UMeshInspectorProperties* Settings;  // 0x88(0x8)
	struct UExistingMeshMaterialProperties* MaterialSettings;  // 0x90(0x8)
	char pad_152[8];  // 0x98(0x8)
	struct UPreviewMesh* PreviewMesh;  // 0xA0(0x8)
	struct ULineSetComponent* DrawnLineSet;  // 0xA8(0x8)
	struct UMaterialInterface* DefaultMaterial;  // 0xB0(0x8)
	char pad_184[112];  // 0xB8(0x70)

}; 



// Class MeshModelingTools.NewMeshMaterialProperties
// Size: 0x70(Inherited: 0x60) 
struct UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{
	struct TWeakObjectPtr<UMaterialInterface> Material;  // 0x60(0x8)
	float UVScale;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool bWorldSpaceUVScale : 1;  // 0x6C(0x1)
	char pad_109_1 : 7;  // 0x6D(0x1)
	bool bWireframe : 1;  // 0x6D(0x1)
	char pad_110_1 : 7;  // 0x6E(0x1)
	bool bShowExtendedOptions : 1;  // 0x6E(0x1)
	char pad_111[1];  // 0x6F(0x1)

}; 



// Class MeshModelingTools.ExistingMeshMaterialProperties
// Size: 0x78(Inherited: 0x60) 
struct UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{
	uint8_t  MaterialMode;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	float CheckerDensity;  // 0x64(0x4)
	struct UMaterialInterface* OverrideMaterial;  // 0x68(0x8)
	struct UMaterialInstanceDynamic* CheckerMaterial;  // 0x70(0x8)

}; 



// Class MeshModelingTools.MeshSelectionEditActions
// Size: 0x68(Inherited: 0x68) 
struct UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{

	void Shrink(); // Function MeshModelingTools.MeshSelectionEditActions.Shrink
	void SelectLargestComponentByTriCount(); // Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount
	void SelectLargestComponentByArea(); // Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea
	void SelectAll(); // Function MeshModelingTools.MeshSelectionEditActions.SelectAll
	void OptimizeSelection(); // Function MeshModelingTools.MeshSelectionEditActions.OptimizeSelection
	void Invert(); // Function MeshModelingTools.MeshSelectionEditActions.Invert
	void Grow(); // Function MeshModelingTools.MeshSelectionEditActions.Grow
	void ExpandToConnected(); // Function MeshModelingTools.MeshSelectionEditActions.ExpandToConnected
	void Clear(); // Function MeshModelingTools.MeshSelectionEditActions.Clear
}; 



// Class MeshModelingTools.MeshEditingViewProperties
// Size: 0x88(Inherited: 0x60) 
struct UMeshEditingViewProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bShowWireframe : 1;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	uint8_t  MaterialMode;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bFlatShading : 1;  // 0x68(0x1)
	char pad_105[3];  // 0x69(0x3)
	struct FLinearColor Color;  // 0x6C(0x10)
	char pad_124[4];  // 0x7C(0x4)
	struct UTexture2D* Image;  // 0x80(0x8)

}; 



// Class MeshModelingTools.MoveBrushOpProps
// Size: 0x70(Inherited: 0x60) 
struct UMoveBrushOpProps : public UMeshSculptBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)
	float Depth;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 



// Class MeshModelingTools.PinchBrushOpProps
// Size: 0x70(Inherited: 0x60) 
struct UPinchBrushOpProps : public UMeshSculptBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)
	float Depth;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool bPerpDamping : 1;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)

}; 



// Class MeshModelingTools.ViewAlignedPlaneBrushOpProps
// Size: 0x70(Inherited: 0x60) 
struct UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)
	float Depth;  // 0x68(0x4)
	uint8_t  WhichSide;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)

}; 



// Class MeshModelingTools.FixedPlaneBrushOpProps
// Size: 0x70(Inherited: 0x60) 
struct UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)
	float Depth;  // 0x68(0x4)
	uint8_t  WhichSide;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)

}; 



// Class MeshModelingTools.StandardSculptBrushOpProps
// Size: 0x68(Inherited: 0x60) 
struct UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)

}; 



// Class MeshModelingTools.ViewAlignedSculptBrushOpProps
// Size: 0x68(Inherited: 0x60) 
struct UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)

}; 



// Class MeshModelingTools.SculptBrushProperties
// Size: 0x88(Inherited: 0x78) 
struct USculptBrushProperties : public UBrushBaseProperties
{
	float Depth;  // 0x78(0x4)
	char pad_124_1 : 7;  // 0x7C(0x1)
	bool bHitBackFaces : 1;  // 0x7C(0x1)
	char pad_125[3];  // 0x7D(0x3)
	float Lazyness;  // 0x80(0x4)
	char pad_132_1 : 7;  // 0x84(0x1)
	bool bShowPerBrushProps : 1;  // 0x84(0x1)
	char pad_133[3];  // 0x85(0x3)

}; 



// Class MeshModelingTools.KelvinBrushProperties
// Size: 0x70(Inherited: 0x60) 
struct UKelvinBrushProperties : public UInteractiveToolPropertySet
{
	float FalloffDistance;  // 0x60(0x4)
	float Stiffness;  // 0x64(0x4)
	float Incompressiblity;  // 0x68(0x4)
	int32_t BrushSteps;  // 0x6C(0x4)

}; 



// Class MeshModelingTools.WorkPlaneProperties
// Size: 0x80(Inherited: 0x60) 
struct UWorkPlaneProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bPropertySetEnabled : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bShowGizmo : 1;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bSnapToGrid : 1;  // 0x62(0x1)
	char pad_99[1];  // 0x63(0x1)
	struct FVector position;  // 0x64(0xC)
	struct FQuat Rotation;  // 0x70(0x10)

}; 



// Class MeshModelingTools.SculptMaxBrushProperties
// Size: 0x68(Inherited: 0x60) 
struct USculptMaxBrushProperties : public UInteractiveToolPropertySet
{
	float MaxHeight;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bFreezeCurrentHeight : 1;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)

}; 



// Class MeshModelingTools.SeamSculptTool
// Size: 0x2D8(Inherited: 0x1F8) 
struct USeamSculptTool : public UDynamicMeshBrushTool
{
	struct USeamSculptToolProperties* Settings;  // 0x1F8(0x8)
	struct UPreviewGeometry* PreviewGeom;  // 0x200(0x8)
	char pad_520[208];  // 0x208(0xD0)

}; 



// Class MeshModelingTools.MeshSculptToolBase
// Size: 0x9E0(Inherited: 0xC0) 
struct UMeshSculptToolBase : public UMeshSurfacePointTool
{
	struct USculptBrushProperties* BrushProperties;  // 0xC0(0x8)
	struct UWorkPlaneProperties* GizmoProperties;  // 0xC8(0x8)
	char pad_208[224];  // 0xD0(0xE0)
	struct TMap<int32_t, struct UMeshSculptBrushOpProps*> BrushOpPropSets;  // 0x1B0(0x50)
	char pad_512[80];  // 0x200(0x50)
	struct TMap<int32_t, struct UMeshSculptBrushOpProps*> SecondaryBrushOpPropSets;  // 0x250(0x50)
	char pad_672[1488];  // 0x2A0(0x5D0)
	struct UMeshEditingViewProperties* ViewProperties;  // 0x870(0x8)
	struct UMaterialInstanceDynamic* ActiveOverrideMaterial;  // 0x878(0x8)
	struct UBrushStampIndicator* BrushIndicator;  // 0x880(0x8)
	struct UMaterialInstanceDynamic* BrushIndicatorMaterial;  // 0x888(0x8)
	struct UPreviewMesh* BrushIndicatorMesh;  // 0x890(0x8)
	struct UTransformGizmo* PlaneTransformGizmo;  // 0x898(0x8)
	struct UTransformProxy* PlaneTransformProxy;  // 0x8A0(0x8)
	char pad_2216[312];  // 0x8A8(0x138)

}; 



// Class MeshModelingTools.MeshSelectionMeshEditActions
// Size: 0x68(Inherited: 0x68) 
struct UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{

	void SeparateTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles
	void FlipNormals(); // Function MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals
	void DisconnectTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles
	void DeleteTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles
	void CreatePolygroup(); // Function MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup
}; 



// Class MeshModelingTools.BaseSmoothBrushOpProps
// Size: 0x60(Inherited: 0x60) 
struct UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{

}; 



// Class MeshModelingTools.RemoveOccludedTrianglesTool
// Size: 0x150(Inherited: 0x90) 
struct URemoveOccludedTrianglesTool : public UMultiSelectionTool
{
	struct URemoveOccludedTrianglesToolProperties* BasicProperties;  // 0x90(0x8)
	struct URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties;  // 0x98(0x8)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews;  // 0xA0(0x10)
	struct TArray<struct UPreviewMesh*> PreviewCopies;  // 0xB0(0x10)
	char pad_192[144];  // 0xC0(0x90)

}; 



// Class MeshModelingTools.SmoothBrushOpProps
// Size: 0x70(Inherited: 0x60) 
struct USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bPreserveUVFlow : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

}; 



// Class MeshModelingTools.SecondarySmoothBrushOpProps
// Size: 0x70(Inherited: 0x60) 
struct USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bPreserveUVFlow : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

}; 



// Class MeshModelingTools.SmoothFillBrushOpProps
// Size: 0x70(Inherited: 0x60) 
struct USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bPreserveUVFlow : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

}; 



// Class MeshModelingTools.VoxelBlendMeshesToolProperties
// Size: 0x80(Inherited: 0x60) 
struct UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{
	double BlendPower;  // 0x60(0x8)
	double BlendFalloff;  // 0x68(0x8)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool bSolidifyInput : 1;  // 0x70(0x1)
	char pad_113_1 : 7;  // 0x71(0x1)
	bool bRemoveInternalsAfterSolidify : 1;  // 0x71(0x1)
	char pad_114[6];  // 0x72(0x6)
	double OffsetSolidifySurface;  // 0x78(0x8)

}; 



// Class MeshModelingTools.EraseBrushOpProps
// Size: 0x68(Inherited: 0x60) 
struct UEraseBrushOpProps : public UMeshSculptBrushOpProps
{
	float Strength;  // 0x60(0x4)
	float Falloff;  // 0x64(0x4)

}; 



// Class MeshModelingTools.MeshSpaceDeformerToolBuilder
// Size: 0x30(Inherited: 0x30) 
struct UMeshSpaceDeformerToolBuilder : public UMeshSurfacePointToolBuilder
{

}; 



// Class MeshModelingTools.MeshSpaceDeformerTool
// Size: 0x1C0(Inherited: 0xC0) 
struct UMeshSpaceDeformerTool : public UMeshSurfacePointTool
{
	uint8_t  SelectedOperationType;  // 0xC0(0x1)
	char pad_193[3];  // 0xC1(0x3)
	float UpperBoundsInterval;  // 0xC4(0x4)
	float LowerBoundsInterval;  // 0xC8(0x4)
	float ModifierPercent;  // 0xCC(0x4)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool bSnapToWorldGrid : 1;  // 0xD0(0x1)
	char pad_209[7];  // 0xD1(0x7)
	struct UGizmoTransformChangeStateTarget* StateTarget;  // 0xD8(0x8)
	char pad_224[8];  // 0xE0(0x8)
	struct UMeshOpPreviewWithBackgroundCompute* Preview;  // 0xE8(0x8)
	char pad_240[32];  // 0xF0(0x20)
	struct FVector GizmoCenter;  // 0x110(0xC)
	char pad_284[4];  // 0x11C(0x4)
	struct FQuat GizmoOrientation;  // 0x120(0x10)
	struct UIntervalGizmo* IntervalGizmo;  // 0x130(0x8)
	struct UTransformGizmo* TransformGizmo;  // 0x138(0x8)
	struct UTransformProxy* TransformProxy;  // 0x140(0x8)
	struct UGizmoLocalFloatParameterSource* UpIntervalSource;  // 0x148(0x8)
	struct UGizmoLocalFloatParameterSource* DownIntervalSource;  // 0x150(0x8)
	struct UGizmoLocalFloatParameterSource* ForwardIntervalSource;  // 0x158(0x8)
	char pad_352[96];  // 0x160(0x60)

}; 



// Class MeshModelingTools.MeshStatisticsProperties
// Size: 0x90(Inherited: 0x60) 
struct UMeshStatisticsProperties : public UInteractiveToolPropertySet
{
	struct FString Mesh;  // 0x60(0x10)
	struct FString UV;  // 0x70(0x10)
	struct FString Attributes;  // 0x80(0x10)

}; 



// Class MeshModelingTools.VertexBrushSculptProperties
// Size: 0x68(Inherited: 0x60) 
struct UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{
	uint8_t  PrimaryBrushType;  // 0x60(0x1)
	uint8_t  PrimaryFalloffType;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bFreezeTarget : 1;  // 0x62(0x1)
	char pad_99_1 : 7;  // 0x63(0x1)
	bool bSmoothErases : 1;  // 0x63(0x1)
	char pad_100[4];  // 0x64(0x4)

}; 



// Class MeshModelingTools.MeshVertexSculptTool
// Size: 0x1230(Inherited: 0x9E0) 
struct UMeshVertexSculptTool : public UMeshSculptToolBase
{
	struct UVertexBrushSculptProperties* SculptProperties;  // 0x9D8(0x8)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent;  // 0x9E0(0x8)
	char pad_2544[2112];  // 0x9F0(0x840)

}; 



// Class MeshModelingTools.MirrorToolProperties
// Size: 0x70(Inherited: 0x60) 
struct UMirrorToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  OperationMode;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bCropAlongMirrorPlaneFirst : 1;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bWeldVerticesOnMirrorPlane : 1;  // 0x62(0x1)
	char pad_99_1 : 7;  // 0x63(0x1)
	bool bAllowBowtieVertexCreation : 1;  // 0x63(0x1)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bSnapToWorldGrid : 1;  // 0x64(0x1)
	uint8_t  CtrlClickBehavior;  // 0x65(0x1)
	char pad_102_1 : 7;  // 0x66(0x1)
	bool bButtonsOnlyChangeOrientation : 1;  // 0x66(0x1)
	char pad_103_1 : 7;  // 0x67(0x1)
	bool bShowPreview : 1;  // 0x67(0x1)
	uint8_t  SaveMode;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

}; 



// Class MeshModelingTools.MirrorToolActionPropertySet
// Size: 0x68(Inherited: 0x60) 
struct UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{
	char pad_96[8];  // 0x60(0x8)

	void Up(); // Function MeshModelingTools.MirrorToolActionPropertySet.Up
	void ShiftToCenter(); // Function MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter
	void Right(); // Function MeshModelingTools.MirrorToolActionPropertySet.Right
	void Left(); // Function MeshModelingTools.MirrorToolActionPropertySet.Left
	void Forward(); // Function MeshModelingTools.MirrorToolActionPropertySet.Forward
	void Down(); // Function MeshModelingTools.MirrorToolActionPropertySet.Down
	void Backward(); // Function MeshModelingTools.MirrorToolActionPropertySet.Backward
}; 



// Class MeshModelingTools.MirrorTool
// Size: 0x138(Inherited: 0x90) 
struct UMirrorTool : public UMultiSelectionTool
{
	char pad_144[8];  // 0x90(0x8)
	struct UMirrorToolProperties* Settings;  // 0x98(0x8)
	struct UMirrorToolActionPropertySet* ToolActions;  // 0xA0(0x8)
	struct TArray<struct UDynamicMeshReplacementChangeTarget*> MeshesToMirror;  // 0xA8(0x10)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews;  // 0xB8(0x10)
	char pad_200[72];  // 0xC8(0x48)
	struct UConstructionPlaneMechanic* PlaneMechanic;  // 0x110(0x8)
	char pad_280[32];  // 0x118(0x20)

}; 



// Class MeshModelingTools.OffsetMeshToolProperties
// Size: 0x70(Inherited: 0x60) 
struct UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  OffsetType;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	float Distance;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bCreateShell : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

}; 



// Class MeshModelingTools.OffsetWeightMapSetProperties
// Size: 0x88(Inherited: 0x80) 
struct UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{
	float MinDistance;  // 0x80(0x4)
	char pad_132[4];  // 0x84(0x4)

}; 



// Class MeshModelingTools.OffsetMeshToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{

}; 



// Class MeshModelingTools.PhysicsInspectorTool
// Size: 0xD8(Inherited: 0x90) 
struct UPhysicsInspectorTool : public UMultiSelectionTool
{
	struct UCollisionGeometryVisualizationProperties* VizSettings;  // 0x90(0x8)
	struct TArray<struct UPhysicsObjectToolPropertySet*> ObjectData;  // 0x98(0x10)
	struct UMaterialInterface* LineMaterial;  // 0xA8(0x8)
	struct TArray<struct UPreviewGeometry*> PreviewElements;  // 0xB0(0x10)
	char pad_192[24];  // 0xC0(0x18)

}; 



// Class MeshModelingTools.PlaneCutToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UPlaneCutToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.PlaneCutToolProperties
// Size: 0x70(Inherited: 0x60) 
struct UPlaneCutToolProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bSnapToWorldGrid : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bKeepBothHalves : 1;  // 0x61(0x1)
	char pad_98[2];  // 0x62(0x2)
	float SpacingBetweenHalves;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bFillCutHole : 1;  // 0x68(0x1)
	char pad_105_1 : 7;  // 0x69(0x1)
	bool bShowPreview : 1;  // 0x69(0x1)
	char pad_106_1 : 7;  // 0x6A(0x1)
	bool bFillSpans : 1;  // 0x6A(0x1)
	char pad_107[5];  // 0x6B(0x5)

}; 



// Class MeshModelingTools.PlaneCutOperatorFactory
// Size: 0x40(Inherited: 0x28) 
struct UPlaneCutOperatorFactory : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UPlaneCutTool* CutTool;  // 0x30(0x8)
	char pad_56[8];  // 0x38(0x8)

}; 



// Class MeshModelingTools.PositionPlaneOnSceneInputBehavior
// Size: 0xB0(Inherited: 0x80) 
struct UPositionPlaneOnSceneInputBehavior : public UAnyButtonInputBehavior
{
	char pad_128[48];  // 0x80(0x30)

}; 



// Class MeshModelingTools.ProjectToTargetToolProperties
// Size: 0x90(Inherited: 0x90) 
struct UProjectToTargetToolProperties : public URemeshMeshToolProperties
{

}; 



// Class MeshModelingTools.RemeshMeshTool
// Size: 0xE8(Inherited: 0x90) 
struct URemeshMeshTool : public UMultiSelectionTool
{
	char pad_144[8];  // 0x90(0x8)
	struct URemeshMeshToolProperties* BasicProperties;  // 0x98(0x8)
	struct UMeshStatisticsProperties* MeshStatisticsProperties;  // 0xA0(0x8)
	struct UMeshOpPreviewWithBackgroundCompute* Preview;  // 0xA8(0x8)
	char pad_176[56];  // 0xB0(0x38)

}; 



// Class MeshModelingTools.ProjectToTargetTool
// Size: 0xF8(Inherited: 0xE8) 
struct UProjectToTargetTool : public URemeshMeshTool
{
	char pad_232[16];  // 0xE8(0x10)

}; 



// Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct URemoveOccludedTrianglesToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.RemoveOccludedTrianglesToolProperties
// Size: 0x80(Inherited: 0x60) 
struct URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  OcclusionTestMethod;  // 0x60(0x1)
	uint8_t  TriangleSampling;  // 0x61(0x1)
	char pad_98[6];  // 0x62(0x6)
	double WindingIsoValue;  // 0x68(0x8)
	int32_t AddRandomRays;  // 0x70(0x4)
	int32_t AddTriangleSamples;  // 0x74(0x4)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool bOnlySelfOcclude : 1;  // 0x78(0x1)
	char pad_121[7];  // 0x79(0x7)

}; 



// Class MeshModelingTools.VoxelSolidifyMeshesToolProperties
// Size: 0x80(Inherited: 0x60) 
struct UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{
	double WindingThreshold;  // 0x60(0x8)
	double ExtendBounds;  // 0x68(0x8)
	int32_t SurfaceSearchSteps;  // 0x70(0x4)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool bSolidAtBoundaries : 1;  // 0x74(0x1)
	char pad_117_1 : 7;  // 0x75(0x1)
	bool bMakeOffsetSurfaces : 1;  // 0x75(0x1)
	char pad_118[2];  // 0x76(0x2)
	double OffsetThickness;  // 0x78(0x8)

}; 



// Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
// Size: 0x68(Inherited: 0x60) 
struct URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{
	char pad_96[8];  // 0x60(0x8)

}; 



// Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
// Size: 0x40(Inherited: 0x28) 
struct URemoveOccludedTrianglesOperatorFactory : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct URemoveOccludedTrianglesTool* Tool;  // 0x30(0x8)
	char pad_56[8];  // 0x38(0x8)

}; 



// Class MeshModelingTools.RevolveBoundaryOperatorFactory
// Size: 0x38(Inherited: 0x28) 
struct URevolveBoundaryOperatorFactory : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct URevolveBoundaryTool* RevolveBoundaryTool;  // 0x30(0x8)

}; 



// Class MeshModelingTools.RevolveBoundaryToolProperties
// Size: 0xD0(Inherited: 0xB0) 
struct URevolveBoundaryToolProperties : public URevolveProperties
{
	char pad_176_1 : 7;  // 0xB0(0x1)
	bool bDisplayOriginalMesh : 1;  // 0xB0(0x1)
	char pad_177[3];  // 0xB1(0x3)
	struct FVector AxisOrigin;  // 0xB4(0xC)
	float AxisYaw;  // 0xC0(0x4)
	float AxisPitch;  // 0xC4(0x4)
	char pad_200_1 : 7;  // 0xC8(0x1)
	bool bSnapToWorldGrid : 1;  // 0xC8(0x1)
	char pad_201[7];  // 0xC9(0x7)

}; 



// Class MeshModelingTools.RevolveBoundaryTool
// Size: 0x1B0(Inherited: 0x150) 
struct URevolveBoundaryTool : public UMeshBoundaryToolBase
{
	char pad_336[16];  // 0x150(0x10)
	struct URevolveBoundaryToolProperties* Settings;  // 0x160(0x8)
	struct UNewMeshMaterialProperties* MaterialProperties;  // 0x168(0x8)
	struct UConstructionPlaneMechanic* PlaneMechanic;  // 0x170(0x8)
	struct UMeshOpPreviewWithBackgroundCompute* Preview;  // 0x178(0x8)
	char pad_384[48];  // 0x180(0x30)

}; 



// Class MeshModelingTools.SeamSculptToolBuilder
// Size: 0x30(Inherited: 0x30) 
struct USeamSculptToolBuilder : public UMeshSurfacePointToolBuilder
{

}; 



// Class MeshModelingTools.SelfUnionMeshesToolProperties
// Size: 0x78(Inherited: 0x60) 
struct USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bAttemptFixHoles : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bShowNewBoundaryEdges : 1;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bTrimFlaps : 1;  // 0x62(0x1)
	char pad_99[5];  // 0x63(0x5)
	double WindingNumberThreshold;  // 0x68(0x8)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool bOnlyUseFirstMeshMaterials : 1;  // 0x70(0x1)
	char pad_113[7];  // 0x71(0x7)

}; 



// Class MeshModelingTools.SelfUnionMeshesTool
// Size: 0x120(Inherited: 0xF0) 
struct USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{
	struct USelfUnionMeshesToolProperties* Properties;  // 0xF0(0x8)
	struct ULineSetComponent* DrawnLineSet;  // 0xF8(0x8)
	char pad_256[32];  // 0x100(0x20)

}; 



// Class MeshModelingTools.SelfUnionMeshesToolBuilder
// Size: 0x30(Inherited: 0x30) 
struct USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{

}; 



// Class MeshModelingTools.SetCollisionGeometryToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct USetCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{

}; 



// Class MeshModelingTools.SetCollisionGeometryToolProperties
// Size: 0x90(Inherited: 0x60) 
struct USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  GeometryType;  // 0x60(0x4)
	uint8_t  InputMode;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bUseWorldSpace : 1;  // 0x68(0x1)
	char pad_105_1 : 7;  // 0x69(0x1)
	bool bRemoveContained : 1;  // 0x69(0x1)
	char pad_106_1 : 7;  // 0x6A(0x1)
	bool bEnableMaxCount : 1;  // 0x6A(0x1)
	char pad_107[1];  // 0x6B(0x1)
	int32_t MaxCount;  // 0x6C(0x4)
	float MinThickness;  // 0x70(0x4)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool bDetectBoxes : 1;  // 0x74(0x1)
	char pad_117_1 : 7;  // 0x75(0x1)
	bool bDetectSpheres : 1;  // 0x75(0x1)
	char pad_118_1 : 7;  // 0x76(0x1)
	bool bDetectCapsules : 1;  // 0x76(0x1)
	char pad_119_1 : 7;  // 0x77(0x1)
	bool bSimplifyHulls : 1;  // 0x77(0x1)
	int32_t HullTargetFaceCount;  // 0x78(0x4)
	char pad_124_1 : 7;  // 0x7C(0x1)
	bool bSimplifyPolygons : 1;  // 0x7C(0x1)
	char pad_125[3];  // 0x7D(0x3)
	float HullTolerance;  // 0x80(0x4)
	uint8_t  SweepAxis;  // 0x84(0x4)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bAppendToExisting : 1;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	uint8_t  SetCollisionType;  // 0x8C(0x4)

}; 



// Class MeshModelingTools.SmoothMeshToolProperties
// Size: 0x68(Inherited: 0x60) 
struct USmoothMeshToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  SmoothingType;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 



// Class MeshModelingTools.IterativeSmoothProperties
// Size: 0x70(Inherited: 0x60) 
struct UIterativeSmoothProperties : public UInteractiveToolPropertySet
{
	float SmoothingPerStep;  // 0x60(0x4)
	int32_t Steps;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bSmoothBoundary : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

}; 



// Class MeshModelingTools.DiffusionSmoothProperties
// Size: 0x70(Inherited: 0x60) 
struct UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{
	float SmoothingPerStep;  // 0x60(0x4)
	int32_t Steps;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bPreserveUVs : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

}; 



// Class MeshModelingTools.SmoothWeightMapSetProperties
// Size: 0x88(Inherited: 0x80) 
struct USmoothWeightMapSetProperties : public UWeightMapSetProperties
{
	float MinSmoothMultiplier;  // 0x80(0x4)
	char pad_132[4];  // 0x84(0x4)

}; 



// Class MeshModelingTools.SmoothMeshTool
// Size: 0x430(Inherited: 0x400) 
struct USmoothMeshTool : public UBaseMeshProcessingTool
{
	struct USmoothMeshToolProperties* SmoothProperties;  // 0x400(0x8)
	struct UIterativeSmoothProperties* IterativeProperties;  // 0x408(0x8)
	struct UDiffusionSmoothProperties* DiffusionProperties;  // 0x410(0x8)
	struct UImplicitSmoothProperties* ImplicitProperties;  // 0x418(0x8)
	struct USmoothWeightMapSetProperties* WeightMapProperties;  // 0x420(0x8)
	char pad_1064[8];  // 0x428(0x8)

}; 



// Class MeshModelingTools.SmoothMeshToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{

}; 



// Class MeshModelingTools.TransformMeshesToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct UTransformMeshesToolBuilder : public UInteractiveToolBuilder
{

}; 



// Class MeshModelingTools.TransformMeshesToolProperties
// Size: 0x68(Inherited: 0x60) 
struct UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  TransformMode;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bSetPivot : 1;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bEnableSnapDragging : 1;  // 0x62(0x1)
	uint8_t  SnapDragSource;  // 0x63(0x1)
	uint8_t  RotationMode;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)

}; 



// Class MeshModelingTools.TransformMeshesTool
// Size: 0x140(Inherited: 0x90) 
struct UTransformMeshesTool : public UMultiSelectionTool
{
	char pad_144[8];  // 0x90(0x8)
	struct UTransformMeshesToolProperties* TransformProps;  // 0x98(0x8)
	char pad_160[16];  // 0xA0(0x10)
	struct TArray<struct FTransformMeshesTarget> ActiveGizmos;  // 0xB0(0x10)
	char pad_192[128];  // 0xC0(0x80)

}; 



// Class MeshModelingTools.UVProjectionToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UUVProjectionToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class MeshModelingTools.UVProjectionToolProperties
// Size: 0x88(Inherited: 0x60) 
struct UUVProjectionToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  UVProjectionMethod;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	struct FVector ProjectionPrimitiveScale;  // 0x64(0xC)
	float CylinderProjectToTopOrBottomAngleThreshold;  // 0x70(0x4)
	struct FVector2D UVScale;  // 0x74(0x8)
	struct FVector2D UVOffset;  // 0x7C(0x8)
	char pad_132_1 : 7;  // 0x84(0x1)
	bool bWorldSpaceUVScale : 1;  // 0x84(0x1)
	char pad_133[3];  // 0x85(0x3)

}; 



// Class MeshModelingTools.UVProjectionAdvancedProperties
// Size: 0x60(Inherited: 0x60) 
struct UUVProjectionAdvancedProperties : public UInteractiveToolPropertySet
{

}; 



// Class MeshModelingTools.VoxelMorphologyMeshesToolProperties
// Size: 0x80(Inherited: 0x60) 
struct UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{
	uint8_t  Operation;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)
	double Distance;  // 0x68(0x8)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool bSolidifyInput : 1;  // 0x70(0x1)
	char pad_113_1 : 7;  // 0x71(0x1)
	bool bRemoveInternalsAfterSolidify : 1;  // 0x71(0x1)
	char pad_114[6];  // 0x72(0x6)
	double OffsetSolidifySurface;  // 0x78(0x8)

}; 



// Class MeshModelingTools.VoxelBlendMeshesTool
// Size: 0x110(Inherited: 0x108) 
struct UVoxelBlendMeshesTool : public UBaseVoxelTool
{
	struct UVoxelBlendMeshesToolProperties* BlendProperties;  // 0x108(0x8)

}; 



// Class MeshModelingTools.VoxelMorphologyMeshesTool
// Size: 0x110(Inherited: 0x108) 
struct UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{
	struct UVoxelMorphologyMeshesToolProperties* MorphologyProperties;  // 0x108(0x8)

}; 



// Class MeshModelingTools.VoxelMorphologyMeshesToolBuilder
// Size: 0x30(Inherited: 0x30) 
struct UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{

}; 



// Class MeshModelingTools.VoxelSolidifyMeshesTool
// Size: 0x110(Inherited: 0x108) 
struct UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{
	struct UVoxelSolidifyMeshesToolProperties* SolidifyProperties;  // 0x108(0x8)

}; 



// Class MeshModelingTools.WeldMeshEdgesTool
// Size: 0x300(Inherited: 0x88) 
struct UWeldMeshEdgesTool : public USingleSelectionTool
{
	float Tolerance;  // 0x88(0x4)
	char pad_140_1 : 7;  // 0x8C(0x1)
	bool bOnlyUnique : 1;  // 0x8C(0x1)
	char pad_141[627];  // 0x8D(0x273)

}; 



