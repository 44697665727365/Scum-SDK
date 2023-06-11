#pragma once 
#include "SDK.h" 
 
 
// Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
// Size: 0x1(Inherited: 0x0) 
struct FSetAllowSpatialDatabase
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInAllowSpatialDatabase : 1;  // 0x0(0x1)

}; 
// Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
// Size: 0x1C(Inherited: 0x0) 
struct FComputeBoundingBoxAndSphere
{
	struct FBoxSphereBounds ReturnValue;  // 0x0(0x1C)

}; 
// ScriptStruct EditableMesh.PolygonGroupToCreate
// Size: 0x18(Inherited: 0x0) 
struct FPolygonGroupToCreate
{
	struct FMeshElementAttributeList PolygonGroupAttributes;  // 0x0(0x10)
	struct FPolygonGroupID OriginalPolygonGroupID;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct EditableMesh.AdaptorTriangleID
// Size: 0x4(Inherited: 0x4) 
struct FAdaptorTriangleID : public FElementID
{

}; 
// Function EditableMesh.EditableMesh.FlipPolygons
// Size: 0x10(Inherited: 0x0) 
struct FFlipPolygons
{
	struct TArray<struct FPolygonID> PolygonIDs;  // 0x0(0x10)

}; 
// Function EditableMesh.EditableMesh.InsetPolygons
// Size: 0x40(Inherited: 0x0) 
struct FInsetPolygons
{
	struct TArray<struct FPolygonID> PolygonIDs;  // 0x0(0x10)
	float InsetFixedDistance;  // 0x10(0x4)
	float InsetProgressTowardCenter;  // 0x14(0x4)
	uint8_t  mode;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct TArray<struct FPolygonID> OutNewCenterPolygonIDs;  // 0x20(0x10)
	struct TArray<struct FPolygonID> OutNewSidePolygonIDs;  // 0x30(0x10)

}; 
// ScriptStruct EditableMesh.AdaptorPolygon2Group
// Size: 0x48(Inherited: 0x0) 
struct FAdaptorPolygon2Group
{
	uint32_t RenderingSectionIndex;  // 0x0(0x4)
	int32_t MaterialIndex;  // 0x4(0x4)
	int32_t MaxTriangles;  // 0x8(0x4)
	char pad_12[60];  // 0xC(0x3C)

}; 
// Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
// Size: 0x8(Inherited: 0x0) 
struct FGetVertexConnectedEdgeCount
{
	struct FVertexID VertexID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
// Size: 0xC(Inherited: 0x0) 
struct FGetPolygonPerimeterVertex
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	int32_t PolygonVertexNumber;  // 0x4(0x4)
	struct FVertexID ReturnValue;  // 0x8(0x4)

}; 
// Function EditableMesh.EditableMesh.DeleteVertexInstances
// Size: 0x18(Inherited: 0x0) 
struct FDeleteVertexInstances
{
	struct TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bDeleteOrphanedVertices : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct EditableMesh.AdaptorPolygon
// Size: 0x18(Inherited: 0x0) 
struct FAdaptorPolygon
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FAdaptorTriangleID> TriangulatedPolygonTriangleIndices;  // 0x8(0x10)

}; 
// ScriptStruct EditableMesh.PolygonGroupForPolygon
// Size: 0x8(Inherited: 0x0) 
struct FPolygonGroupForPolygon
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	struct FPolygonGroupID PolygonGroupID;  // 0x4(0x4)

}; 
// ScriptStruct EditableMesh.MeshElementAttributeList
// Size: 0x10(Inherited: 0x0) 
struct FMeshElementAttributeList
{
	struct TArray<struct FMeshElementAttributeData> Attributes;  // 0x0(0x10)

}; 
// Function EditableMesh.EditableMesh.MakeVertexID
// Size: 0x8(Inherited: 0x0) 
struct FMakeVertexID
{
	int32_t VertexIndex;  // 0x0(0x4)
	struct FVertexID ReturnValue;  // 0x4(0x4)

}; 
// ScriptStruct EditableMesh.MeshElementAttributeData
// Size: 0x60(Inherited: 0x0) 
struct FMeshElementAttributeData
{
	struct FName AttributeName;  // 0x0(0x8)
	int32_t AttributeIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FMeshElementAttributeValue AttributeValue;  // 0x10(0x50)

}; 
// Function EditableMesh.EditableMesh.DeletePolygons
// Size: 0x18(Inherited: 0x0) 
struct FDeletePolygons
{
	struct TArray<struct FPolygonID> PolygonIDsToDelete;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bDeleteOrphanedEdges : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool bDeleteOrphanedVertices : 1;  // 0x11(0x1)
	char pad_18_1 : 7;  // 0x12(0x1)
	bool bDeleteOrphanedVertexInstances : 1;  // 0x12(0x1)
	char pad_19_1 : 7;  // 0x13(0x1)
	bool bDeleteEmptyPolygonGroups : 1;  // 0x13(0x1)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function EditableMesh.EditableMesh.CreateEdges
// Size: 0x20(Inherited: 0x0) 
struct FCreateEdges
{
	struct TArray<struct FEdgeToCreate> EdgesToCreate;  // 0x0(0x10)
	struct TArray<struct FEdgeID> OutNewEdgeIDs;  // 0x10(0x10)

}; 
// ScriptStruct EditableMesh.EdgeToCreate
// Size: 0x20(Inherited: 0x0) 
struct FEdgeToCreate
{
	struct FVertexID VertexID0;  // 0x0(0x4)
	struct FVertexID VertexID1;  // 0x4(0x4)
	struct FMeshElementAttributeList EdgeAttributes;  // 0x8(0x10)
	struct FEdgeID OriginalEdgeID;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct EditableMesh.MeshElementAttributeValue
// Size: 0x50(Inherited: 0x0) 
struct FMeshElementAttributeValue
{
	char pad_0[80];  // 0x0(0x50)

}; 
// ScriptStruct EditableMesh.VertexToMove
// Size: 0x10(Inherited: 0x0) 
struct FVertexToMove
{
	struct FVertexID VertexID;  // 0x0(0x4)
	struct FVector NewVertexPosition;  // 0x4(0xC)

}; 
// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// Size: 0x28(Inherited: 0x0) 
struct FChangeVertexInstancesForPolygon
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs;  // 0x8(0x10)
	struct TArray<struct FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole;  // 0x18(0x10)

}; 
// Function EditableMesh.EditableMesh.DeletePolygonGroups
// Size: 0x10(Inherited: 0x0) 
struct FDeletePolygonGroups
{
	struct TArray<struct FPolygonGroupID> PolygonGroupIDs;  // 0x0(0x10)

}; 
// Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
// Size: 0x10(Inherited: 0x0) 
struct FChangePolygonsVertexInstances
{
	struct TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons;  // 0x0(0x10)

}; 
// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// Size: 0x10(Inherited: 0x0) 
struct FVertexInstancesForPolygonHole
{
	struct TArray<struct FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs;  // 0x0(0x10)

}; 
// Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
// Size: 0x18(Inherited: 0x0) 
struct FGetVertexAdjacentVertices
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexID> OutAdjacentVertexIDs;  // 0x8(0x10)

}; 
// ScriptStruct EditableMesh.VertexIndexAndInstanceID
// Size: 0x8(Inherited: 0x0) 
struct FVertexIndexAndInstanceID
{
	int32_t ContourIndex;  // 0x0(0x4)
	struct FVertexInstanceID VertexInstanceID;  // 0x4(0x4)

}; 
// ScriptStruct EditableMesh.VertexInstanceToCreate
// Size: 0x20(Inherited: 0x0) 
struct FVertexInstanceToCreate
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FMeshElementAttributeList VertexInstanceAttributes;  // 0x8(0x10)
	struct FVertexInstanceID OriginalVertexInstanceID;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct EditableMesh.VertexAttributesForPolygon
// Size: 0x28(Inherited: 0x0) 
struct FVertexAttributesForPolygon
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FMeshElementAttributeList> PerimeterVertexAttributeLists;  // 0x8(0x10)
	struct TArray<struct FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole;  // 0x18(0x10)

}; 
// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// Size: 0x10(Inherited: 0x0) 
struct FVertexAttributesForPolygonHole
{
	struct TArray<struct FMeshElementAttributeList> VertexAttributeList;  // 0x0(0x10)

}; 
// ScriptStruct EditableMesh.AttributesForEdge
// Size: 0x18(Inherited: 0x0) 
struct FAttributesForEdge
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FMeshElementAttributeList EdgeAttributes;  // 0x8(0x10)

}; 
// ScriptStruct EditableMesh.AttributesForVertexInstance
// Size: 0x18(Inherited: 0x0) 
struct FAttributesForVertexInstance
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FMeshElementAttributeList VertexInstanceAttributes;  // 0x8(0x10)

}; 
// Function EditableMesh.EditableMesh.ExtrudePolygons
// Size: 0x28(Inherited: 0x0) 
struct FExtrudePolygons
{
	struct TArray<struct FPolygonID> Polygons;  // 0x0(0x10)
	float ExtrudeDistance;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bKeepNeighborsTogether : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct TArray<struct FPolygonID> OutNewExtrudedFrontPolygons;  // 0x18(0x10)

}; 
// ScriptStruct EditableMesh.AttributesForVertex
// Size: 0x18(Inherited: 0x0) 
struct FAttributesForVertex
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FMeshElementAttributeList VertexAttributes;  // 0x8(0x10)

}; 
// ScriptStruct EditableMesh.PolygonToSplit
// Size: 0x18(Inherited: 0x0) 
struct FPolygonToSplit
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexPair> VertexPairsToSplitAt;  // 0x8(0x10)

}; 
// ScriptStruct EditableMesh.VertexPair
// Size: 0x8(Inherited: 0x0) 
struct FVertexPair
{
	struct FVertexID VertexID0;  // 0x0(0x4)
	struct FVertexID VertexID1;  // 0x4(0x4)

}; 
// ScriptStruct EditableMesh.PolygonToCreate
// Size: 0x20(Inherited: 0x0) 
struct FPolygonToCreate
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexAndAttributes> PerimeterVertices;  // 0x8(0x10)
	struct FPolygonID OriginalPolygonID;  // 0x18(0x4)
	uint8_t  PolygonEdgeHardness;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// ScriptStruct EditableMesh.VertexAndAttributes
// Size: 0x18(Inherited: 0x0) 
struct FVertexAndAttributes
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	struct FVertexID VertexID;  // 0x4(0x4)
	struct FMeshElementAttributeList PolygonVertexAttributes;  // 0x8(0x10)

}; 
// ScriptStruct EditableMesh.VertexToCreate
// Size: 0x18(Inherited: 0x0) 
struct FVertexToCreate
{
	struct FMeshElementAttributeList VertexAttributes;  // 0x0(0x10)
	struct FVertexID OriginalVertexID;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct EditableMesh.SubdividedQuadVertex
// Size: 0x34(Inherited: 0x0) 
struct FSubdividedQuadVertex
{
	int32_t VertexPositionIndex;  // 0x0(0x4)
	struct FVector2D TextureCoordinate0;  // 0x4(0x8)
	struct FVector2D TextureCoordinate1;  // 0xC(0x8)
	struct FColor VertexColor;  // 0x14(0x4)
	struct FVector VertexNormal;  // 0x18(0xC)
	struct FVector VertexTangent;  // 0x24(0xC)
	float VertexBinormalSign;  // 0x30(0x4)

}; 
// ScriptStruct EditableMesh.SubdivisionLimitData
// Size: 0x30(Inherited: 0x0) 
struct FSubdivisionLimitData
{
	struct TArray<struct FVector> VertexPositions;  // 0x0(0x10)
	struct TArray<struct FSubdivisionLimitSection> Sections;  // 0x10(0x10)
	struct TArray<struct FSubdividedWireEdge> SubdividedWireEdges;  // 0x20(0x10)

}; 
// Function EditableMesh.EditableMesh.DeleteEdges
// Size: 0x18(Inherited: 0x0) 
struct FDeleteEdges
{
	struct TArray<struct FEdgeID> EdgeIDsToDelete;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bDeleteOrphanedVertices : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct EditableMesh.SubdividedWireEdge
// Size: 0xC(Inherited: 0x0) 
struct FSubdividedWireEdge
{
	int32_t EdgeVertex0PositionIndex;  // 0x0(0x4)
	int32_t EdgeVertex1PositionIndex;  // 0x4(0x4)
	char pad_8[4];  // 0x8(0x4)

}; 
// ScriptStruct EditableMesh.SubdivisionLimitSection
// Size: 0x10(Inherited: 0x0) 
struct FSubdivisionLimitSection
{
	struct TArray<struct FSubdividedQuad> SubdividedQuads;  // 0x0(0x10)

}; 
// Function EditableMesh.EditableMesh.MoveVertices
// Size: 0x10(Inherited: 0x0) 
struct FMoveVertices
{
	struct TArray<struct FVertexToMove> VerticesToMove;  // 0x0(0x10)

}; 
// ScriptStruct EditableMesh.SubdividedQuad
// Size: 0xD0(Inherited: 0x0) 
struct FSubdividedQuad
{
	struct FSubdividedQuadVertex QuadVertex0;  // 0x0(0x34)
	struct FSubdividedQuadVertex QuadVertex1;  // 0x34(0x34)
	struct FSubdividedQuadVertex QuadVertex2;  // 0x68(0x34)
	struct FSubdividedQuadVertex QuadVertex3;  // 0x9C(0x34)

}; 
// ScriptStruct EditableMesh.RenderingPolygonGroup
// Size: 0x48(Inherited: 0x0) 
struct FRenderingPolygonGroup
{
	uint32_t RenderingSectionIndex;  // 0x0(0x4)
	int32_t MaterialIndex;  // 0x4(0x4)
	int32_t MaxTriangles;  // 0x8(0x4)
	char pad_12[60];  // 0xC(0x3C)

}; 
// ScriptStruct EditableMesh.RenderingPolygon
// Size: 0x18(Inherited: 0x0) 
struct FRenderingPolygon
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FTriangleID> TriangulatedPolygonTriangleIndices;  // 0x8(0x10)

}; 
// Function EditableMesh.EditableMesh.SetEdgesHardness
// Size: 0x20(Inherited: 0x0) 
struct FSetEdgesHardness
{
	struct TArray<struct FEdgeID> EdgeIDs;  // 0x0(0x10)
	struct TArray<bool> EdgesNewIsHard;  // 0x10(0x10)

}; 
// Function EditableMesh.EditableMesh.AnyChangesToUndo
// Size: 0x1(Inherited: 0x0) 
struct FAnyChangesToUndo
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
// Size: 0x18(Inherited: 0x0) 
struct FAssignPolygonsToPolygonGroups
{
	struct TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bDeleteOrphanedPolygonGroups : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function EditableMesh.EditableMesh.IsOrphanedVertex
// Size: 0x8(Inherited: 0x0) 
struct FIsOrphanedVertex
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function EditableMesh.EditableMesh.BevelPolygons
// Size: 0x38(Inherited: 0x0) 
struct FBevelPolygons
{
	struct TArray<struct FPolygonID> PolygonIDs;  // 0x0(0x10)
	float BevelFixedDistance;  // 0x10(0x4)
	float BevelProgressTowardCenter;  // 0x14(0x4)
	struct TArray<struct FPolygonID> OutNewCenterPolygonIDs;  // 0x18(0x10)
	struct TArray<struct FPolygonID> OutNewSidePolygonIDs;  // 0x28(0x10)

}; 
// Function EditableMesh.EditableMesh.IsBeingModified
// Size: 0x1(Inherited: 0x0) 
struct FIsBeingModified
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function EditableMesh.EditableMesh.CommitInstance
// Size: 0x10(Inherited: 0x0) 
struct FCommitInstance
{
	struct UPrimitiveComponent* ComponentToInstanceTo;  // 0x0(0x8)
	struct UEditableMesh* ReturnValue;  // 0x8(0x8)

}; 
// Function EditableMesh.EditableMesh.MakePolygonGroupID
// Size: 0x8(Inherited: 0x0) 
struct FMakePolygonGroupID
{
	int32_t PolygonGroupIndex;  // 0x0(0x4)
	struct FPolygonGroupID ReturnValue;  // 0x4(0x4)

}; 
// Function EditableMesh.EditableMesh.DeleteOrphanVertices
// Size: 0x10(Inherited: 0x0) 
struct FDeleteOrphanVertices
{
	struct TArray<struct FVertexID> VertexIDsToDelete;  // 0x0(0x10)

}; 
// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
// Size: 0x28(Inherited: 0x0) 
struct FSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
{
	struct FVector LineSegmentStart;  // 0x0(0xC)
	struct FVector LineSegmentEnd;  // 0xC(0xC)
	struct TArray<struct FPolygonID> OutPolygons;  // 0x18(0x10)

}; 
// Function EditableMesh.EditableMesh.ComputeBoundingBox
// Size: 0x1C(Inherited: 0x0) 
struct FComputeBoundingBox
{
	struct FBox ReturnValue;  // 0x0(0x1C)

}; 
// Function EditableMesh.EditableMesh.ComputePolygonCenter
// Size: 0x10(Inherited: 0x0) 
struct FComputePolygonCenter
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	struct FVector ReturnValue;  // 0x4(0xC)

}; 
// Function EditableMesh.EditableMesh.ComputePolygonNormal
// Size: 0x10(Inherited: 0x0) 
struct FComputePolygonNormal
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	struct FVector ReturnValue;  // 0x4(0xC)

}; 
// Function EditableMesh.EditableMesh.ComputePolygonPlane
// Size: 0x20(Inherited: 0x0) 
struct FComputePolygonPlane
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FPlane ReturnValue;  // 0x10(0x10)

}; 
// Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
// Size: 0x20(Inherited: 0x0) 
struct FComputePolygonsSharedEdges
{
	struct TArray<struct FPolygonID> PolygonIDs;  // 0x0(0x10)
	struct TArray<struct FEdgeID> OutSharedEdgeIDs;  // 0x10(0x10)

}; 
// Function EditableMesh.EditableMesh.CreateEmptyVertexRange
// Size: 0x18(Inherited: 0x0) 
struct FCreateEmptyVertexRange
{
	int32_t NumVerticesToCreate;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexID> OutNewVertexIDs;  // 0x8(0x10)

}; 
// Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
// Size: 0x8(Inherited: 0x0) 
struct FDeleteEdgeAndConnectedPolygons
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bDeleteOrphanedEdges : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool bDeleteOrphanedVertices : 1;  // 0x5(0x1)
	char pad_6_1 : 7;  // 0x6(0x1)
	bool bDeleteOrphanedVertexInstances : 1;  // 0x6(0x1)
	char pad_7_1 : 7;  // 0x7(0x1)
	bool bDeleteEmptyPolygonGroups : 1;  // 0x7(0x1)

}; 
// Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
// Size: 0x18(Inherited: 0x0) 
struct FCreateMissingPolygonPerimeterEdges
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FEdgeID> OutNewEdgeIDs;  // 0x8(0x10)

}; 
// Function EditableMesh.EditableMesh.CreatePolygonGroups
// Size: 0x20(Inherited: 0x0) 
struct FCreatePolygonGroups
{
	struct TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate;  // 0x0(0x10)
	struct TArray<struct FPolygonGroupID> OutNewPolygonGroupIDs;  // 0x10(0x10)

}; 
// Function EditableMesh.EditableMesh.CreatePolygons
// Size: 0x30(Inherited: 0x0) 
struct FCreatePolygons
{
	struct TArray<struct FPolygonToCreate> PolygonsToCreate;  // 0x0(0x10)
	struct TArray<struct FPolygonID> OutNewPolygonIDs;  // 0x10(0x10)
	struct TArray<struct FEdgeID> OutNewEdgeIDs;  // 0x20(0x10)

}; 
// Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
// Size: 0xC(Inherited: 0x0) 
struct FFindPolygonPerimeterVertexNumberForVertex
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	struct FVertexID VertexID;  // 0x4(0x4)
	int32_t ReturnValue;  // 0x8(0x4)

}; 
// Function EditableMesh.EditableMesh.CreateVertexInstances
// Size: 0x20(Inherited: 0x0) 
struct FCreateVertexInstances
{
	struct TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate;  // 0x0(0x10)
	struct TArray<struct FVertexInstanceID> OutNewVertexInstanceIDs;  // 0x10(0x10)

}; 
// Function EditableMesh.EditableMesh.CreateVertices
// Size: 0x20(Inherited: 0x0) 
struct FCreateVertices
{
	struct TArray<struct FVertexToCreate> VerticesToCreate;  // 0x0(0x10)
	struct TArray<struct FVertexID> OutNewVertexIDs;  // 0x10(0x10)

}; 
// Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
// Size: 0x8(Inherited: 0x0) 
struct FDeleteVertexAndConnectedEdgesAndPolygons
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bDeleteOrphanedEdges : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool bDeleteOrphanedVertices : 1;  // 0x5(0x1)
	char pad_6_1 : 7;  // 0x6(0x1)
	bool bDeleteOrphanedVertexInstances : 1;  // 0x6(0x1)
	char pad_7_1 : 7;  // 0x7(0x1)
	bool bDeleteEmptyPolygonGroups : 1;  // 0x7(0x1)

}; 
// Function EditableMesh.EditableMesh.EndModification
// Size: 0x1(Inherited: 0x0) 
struct FEndModification
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bFromUndo : 1;  // 0x0(0x1)

}; 
// Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
// Size: 0x10(Inherited: 0x0) 
struct FFindPolygonPerimeterEdgeNumberForVertices
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	struct FVertexID EdgeVertexID0;  // 0x4(0x4)
	struct FVertexID EdgeVertexID1;  // 0x8(0x4)
	int32_t ReturnValue;  // 0xC(0x4)

}; 
// Function EditableMesh.EditableMesh.ExtendEdges
// Size: 0x28(Inherited: 0x0) 
struct FExtendEdges
{
	struct TArray<struct FEdgeID> EdgeIDs;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bWeldNeighbors : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct TArray<struct FEdgeID> OutNewExtendedEdgeIDs;  // 0x18(0x10)

}; 
// Function EditableMesh.EditableMesh.ExtendVertices
// Size: 0x30(Inherited: 0x0) 
struct FExtendVertices
{
	struct TArray<struct FVertexID> VertexIDs;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bOnlyExtendClosestEdge : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	struct FVector ReferencePosition;  // 0x14(0xC)
	struct TArray<struct FVertexID> OutNewExtendedVertexIDs;  // 0x20(0x10)

}; 
// Function EditableMesh.EditableMesh.FindPolygonLoop
// Size: 0x48(Inherited: 0x0) 
struct FFindPolygonLoop
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FEdgeID> OutEdgeLoopEdgeIDs;  // 0x8(0x10)
	struct TArray<struct FEdgeID> OutFlippedEdgeIDs;  // 0x18(0x10)
	struct TArray<struct FEdgeID> OutReversedEdgeIDPathToTake;  // 0x28(0x10)
	struct TArray<struct FPolygonID> OutPolygonIDsToSplit;  // 0x38(0x10)

}; 
// Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
// Size: 0x10(Inherited: 0x0) 
struct FGeneratePolygonTangentsAndNormals
{
	struct TArray<struct FPolygonID> PolygonIDs;  // 0x0(0x10)

}; 
// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
// Size: 0xC(Inherited: 0x0) 
struct FGetEdgeConnectedPolygon
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	int32_t ConnectedPolygonNumber;  // 0x4(0x4)
	struct FPolygonID ReturnValue;  // 0x8(0x4)

}; 
// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
// Size: 0x8(Inherited: 0x0) 
struct FGetEdgeConnectedPolygonCount
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
// Size: 0x18(Inherited: 0x0) 
struct FGetEdgeConnectedPolygons
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // 0x8(0x10)

}; 
// Function EditableMesh.EditableMesh.GetEdgeCount
// Size: 0x4(Inherited: 0x0) 
struct FGetEdgeCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.GetEdgeLoopElements
// Size: 0x18(Inherited: 0x0) 
struct FGetEdgeLoopElements
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FEdgeID> EdgeLoopIDs;  // 0x8(0x10)

}; 
// Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
// Size: 0xC(Inherited: 0x0) 
struct FGetEdgeThatConnectsVertices
{
	struct FVertexID VertexID0;  // 0x0(0x4)
	struct FVertexID VertexID1;  // 0x4(0x4)
	struct FEdgeID ReturnValue;  // 0x8(0x4)

}; 
// Function EditableMesh.EditableMesh.GetEdgeVertex
// Size: 0xC(Inherited: 0x0) 
struct FGetEdgeVertex
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	int32_t EdgeVertexNumber;  // 0x4(0x4)
	struct FVertexID ReturnValue;  // 0x8(0x4)

}; 
// Function EditableMesh.EditableMesh.GetEdgeVertices
// Size: 0xC(Inherited: 0x0) 
struct FGetEdgeVertices
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	struct FVertexID OutEdgeVertexID0;  // 0x4(0x4)
	struct FVertexID OutEdgeVertexID1;  // 0x8(0x4)

}; 
// Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
// Size: 0x4(Inherited: 0x0) 
struct FGetFirstValidPolygonGroup
{
	struct FPolygonGroupID ReturnValue;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.GetGroupForPolygon
// Size: 0x8(Inherited: 0x0) 
struct FGetGroupForPolygon
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	struct FPolygonGroupID ReturnValue;  // 0x4(0x4)

}; 
// Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
// Size: 0x18(Inherited: 0x0) 
struct FGetPolygonAdjacentPolygons
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FPolygonID> OutAdjacentPolygons;  // 0x8(0x10)

}; 
// Function EditableMesh.EditableMesh.GetPolygonCount
// Size: 0x4(Inherited: 0x0) 
struct FGetPolygonCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.GetPolygonCountInGroup
// Size: 0x8(Inherited: 0x0) 
struct FGetPolygonCountInGroup
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function EditableMesh.EditableMesh.GetPolygonGroupCount
// Size: 0x4(Inherited: 0x0) 
struct FGetPolygonGroupCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.GetPolygonInGroup
// Size: 0xC(Inherited: 0x0) 
struct FGetPolygonInGroup
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)
	int32_t PolygonNumber;  // 0x4(0x4)
	struct FPolygonID ReturnValue;  // 0x8(0x4)

}; 
// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
// Size: 0x10(Inherited: 0x0) 
struct FGetPolygonPerimeterEdge
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	int32_t PerimeterEdgeNumber;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bOutEdgeWindingIsReversedForPolygon : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	struct FEdgeID ReturnValue;  // 0xC(0x4)

}; 
// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
// Size: 0x8(Inherited: 0x0) 
struct FGetPolygonPerimeterEdgeCount
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
// Size: 0x18(Inherited: 0x0) 
struct FGetPolygonPerimeterEdges
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FEdgeID> OutPolygonPerimeterEdgeIDs;  // 0x8(0x10)

}; 
// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
// Size: 0x8(Inherited: 0x0) 
struct FGetPolygonPerimeterVertexCount
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
// Size: 0xC(Inherited: 0x0) 
struct FGetPolygonPerimeterVertexInstance
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	int32_t PolygonVertexNumber;  // 0x4(0x4)
	struct FVertexInstanceID ReturnValue;  // 0x8(0x4)

}; 
// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
// Size: 0x18(Inherited: 0x0) 
struct FGetPolygonPerimeterVertexInstances
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexInstanceID> OutPolygonPerimeterVertexInstanceIDs;  // 0x8(0x10)

}; 
// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
// Size: 0x18(Inherited: 0x0) 
struct FGetPolygonPerimeterVertices
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexID> OutPolygonPerimeterVertexIDs;  // 0x8(0x10)

}; 
// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
// Size: 0xC(Inherited: 0x0) 
struct FGetPolygonTriangulatedTriangle
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	int32_t PolygonTriangleNumber;  // 0x4(0x4)
	struct FTriangleID ReturnValue;  // 0x8(0x4)

}; 
// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
// Size: 0x8(Inherited: 0x0) 
struct FGetPolygonTriangulatedTriangleCount
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function EditableMesh.EditableMesh.GetSubdivisionCount
// Size: 0x4(Inherited: 0x0) 
struct FGetSubdivisionCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.GetSubdivisionLimitData
// Size: 0x30(Inherited: 0x0) 
struct FGetSubdivisionLimitData
{
	struct FSubdivisionLimitData ReturnValue;  // 0x0(0x30)

}; 
// Function EditableMesh.EditableMesh.GetTextureCoordinateCount
// Size: 0x4(Inherited: 0x0) 
struct FGetTextureCoordinateCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.GetVertexConnectedEdge
// Size: 0xC(Inherited: 0x0) 
struct FGetVertexConnectedEdge
{
	struct FVertexID VertexID;  // 0x0(0x4)
	int32_t ConnectedEdgeNumber;  // 0x4(0x4)
	struct FEdgeID ReturnValue;  // 0x8(0x4)

}; 
// Function EditableMesh.EditableMesh.GetVertexConnectedEdges
// Size: 0x18(Inherited: 0x0) 
struct FGetVertexConnectedEdges
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FEdgeID> OutConnectedEdgeIDs;  // 0x8(0x10)

}; 
// Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
// Size: 0x18(Inherited: 0x0) 
struct FGetVertexConnectedPolygons
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // 0x8(0x10)

}; 
// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
// Size: 0x8(Inherited: 0x0) 
struct FGetVertexInstanceConnectedPolygonCount
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function EditableMesh.EditableMesh.GetVertexCount
// Size: 0x4(Inherited: 0x0) 
struct FGetVertexCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
// Size: 0xC(Inherited: 0x0) 
struct FGetVertexInstanceConnectedPolygon
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	int32_t ConnectedPolygonNumber;  // 0x4(0x4)
	struct FPolygonID ReturnValue;  // 0x8(0x4)

}; 
// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
// Size: 0x18(Inherited: 0x0) 
struct FGetVertexInstanceConnectedPolygons
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // 0x8(0x10)

}; 
// Function EditableMesh.EditableMesh.GetVertexInstanceCount
// Size: 0x4(Inherited: 0x0) 
struct FGetVertexInstanceCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.GetVertexInstanceVertex
// Size: 0x8(Inherited: 0x0) 
struct FGetVertexInstanceVertex
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	struct FVertexID ReturnValue;  // 0x4(0x4)

}; 
// Function EditableMesh.EditableMesh.GetVertexPairEdge
// Size: 0x10(Inherited: 0x0) 
struct FGetVertexPairEdge
{
	struct FVertexID VertexID;  // 0x0(0x4)
	struct FVertexID NextVertexID;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bOutEdgeWindingIsReversed : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	struct FEdgeID ReturnValue;  // 0xC(0x4)

}; 
// Function EditableMesh.EditableMesh.InsertEdgeLoop
// Size: 0x28(Inherited: 0x0) 
struct FInsertEdgeLoop
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<float> Splits;  // 0x8(0x10)
	struct TArray<struct FEdgeID> OutNewEdgeIDs;  // 0x18(0x10)

}; 
// Function EditableMesh.EditableMesh.InvalidEdgeID
// Size: 0x4(Inherited: 0x0) 
struct FInvalidEdgeID
{
	struct FEdgeID ReturnValue;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.InvalidPolygonGroupID
// Size: 0x4(Inherited: 0x0) 
struct FInvalidPolygonGroupID
{
	struct FPolygonGroupID ReturnValue;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.InvalidPolygonID
// Size: 0x4(Inherited: 0x0) 
struct FInvalidPolygonID
{
	struct FPolygonID ReturnValue;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.InvalidVertexID
// Size: 0x4(Inherited: 0x0) 
struct FInvalidVertexID
{
	struct FVertexID ReturnValue;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.IsCommitted
// Size: 0x1(Inherited: 0x0) 
struct FIsCommitted
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function EditableMesh.EditableMesh.IsCommittedAsInstance
// Size: 0x1(Inherited: 0x0) 
struct FIsCommittedAsInstance
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function EditableMesh.EditableMesh.IsCompactAllowed
// Size: 0x1(Inherited: 0x0) 
struct FIsCompactAllowed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function EditableMesh.EditableMesh.SetTextureCoordinateCount
// Size: 0x4(Inherited: 0x0) 
struct FSetTextureCoordinateCount
{
	int32_t NumTexCoords;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
// Size: 0x1(Inherited: 0x0) 
struct FIsPreviewingSubdivisions
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
// Size: 0x1(Inherited: 0x0) 
struct FIsSpatialDatabaseAllowed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function EditableMesh.EditableMesh.IsUndoAllowed
// Size: 0x1(Inherited: 0x0) 
struct FIsUndoAllowed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function EditableMesh.EditableMesh.IsValidEdge
// Size: 0x8(Inherited: 0x0) 
struct FIsValidEdge
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function EditableMesh.EditableMesh.IsValidPolygon
// Size: 0x8(Inherited: 0x0) 
struct FIsValidPolygon
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function EditableMesh.EditableMesh.IsValidPolygonGroup
// Size: 0x8(Inherited: 0x0) 
struct FIsValidPolygonGroup
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function EditableMesh.EditableMesh.IsValidVertex
// Size: 0x8(Inherited: 0x0) 
struct FIsValidVertex
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function EditableMesh.EditableMesh.MakeEdgeID
// Size: 0x8(Inherited: 0x0) 
struct FMakeEdgeID
{
	int32_t EdgeIndex;  // 0x0(0x4)
	struct FEdgeID ReturnValue;  // 0x4(0x4)

}; 
// Function EditableMesh.EditableMesh.MakePolygonID
// Size: 0x8(Inherited: 0x0) 
struct FMakePolygonID
{
	int32_t PolygonIndex;  // 0x0(0x4)
	struct FPolygonID ReturnValue;  // 0x4(0x4)

}; 
// Function EditableMesh.EditableMesh.QuadrangulateMesh
// Size: 0x10(Inherited: 0x0) 
struct FQuadrangulateMesh
{
	struct TArray<struct FPolygonID> OutNewPolygonIDs;  // 0x0(0x10)

}; 
// Function EditableMesh.EditableMesh.RevertInstance
// Size: 0x8(Inherited: 0x0) 
struct FRevertInstance
{
	struct UEditableMesh* ReturnValue;  // 0x0(0x8)

}; 
// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
// Size: 0x20(Inherited: 0x0) 
struct FSearchSpatialDatabaseForPolygonsInVolume
{
	struct TArray<struct FPlane> Planes;  // 0x0(0x10)
	struct TArray<struct FPolygonID> OutPolygons;  // 0x10(0x10)

}; 
// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
// Size: 0x20(Inherited: 0x0) 
struct FSearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
{
	struct FPlane InPlane;  // 0x0(0x10)
	struct TArray<struct FPolygonID> OutPolygons;  // 0x10(0x10)

}; 
// Function EditableMesh.EditableMesh.SetAllowCompact
// Size: 0x1(Inherited: 0x0) 
struct FSetAllowCompact
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInAllowCompact : 1;  // 0x0(0x1)

}; 
// Function EditableMesh.EditableMesh.SetAllowUndo
// Size: 0x1(Inherited: 0x0) 
struct FSetAllowUndo
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInAllowUndo : 1;  // 0x0(0x1)

}; 
// Function EditableMesh.EditableMesh.SetEdgesAttributes
// Size: 0x10(Inherited: 0x0) 
struct FSetEdgesAttributes
{
	struct TArray<struct FAttributesForEdge> AttributesForEdges;  // 0x0(0x10)

}; 
// Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
// Size: 0x20(Inherited: 0x0) 
struct FSetEdgesCreaseSharpness
{
	struct TArray<struct FEdgeID> EdgeIDs;  // 0x0(0x10)
	struct TArray<float> EdgesNewCreaseSharpness;  // 0x10(0x10)

}; 
// Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
// Size: 0x18(Inherited: 0x0) 
struct FSetEdgesHardnessAutomatically
{
	struct TArray<struct FEdgeID> EdgeIDs;  // 0x0(0x10)
	float MaxDotProductForSoftEdge;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
// Size: 0x10(Inherited: 0x0) 
struct FSetPolygonsVertexAttributes
{
	struct TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons;  // 0x0(0x10)

}; 
// Function EditableMesh.EditableMesh.SplitPolygonalMesh
// Size: 0x40(Inherited: 0x0) 
struct FSplitPolygonalMesh
{
	struct FPlane InPlane;  // 0x0(0x10)
	struct TArray<struct FPolygonID> PolygonIDs1;  // 0x10(0x10)
	struct TArray<struct FPolygonID> PolygonIDs2;  // 0x20(0x10)
	struct TArray<struct FEdgeID> BoundaryIDs;  // 0x30(0x10)

}; 
// Function EditableMesh.EditableMesh.SetSubdivisionCount
// Size: 0x4(Inherited: 0x0) 
struct FSetSubdivisionCount
{
	int32_t NewSubdivisionCount;  // 0x0(0x4)

}; 
// Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
// Size: 0x10(Inherited: 0x0) 
struct FSetVertexInstancesAttributes
{
	struct TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances;  // 0x0(0x10)

}; 
// Function EditableMesh.EditableMesh.SetVerticesAttributes
// Size: 0x10(Inherited: 0x0) 
struct FSetVerticesAttributes
{
	struct TArray<struct FAttributesForVertex> AttributesForVertices;  // 0x0(0x10)

}; 
// Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
// Size: 0x20(Inherited: 0x0) 
struct FSetVerticesCornerSharpness
{
	struct TArray<struct FVertexID> VertexIDs;  // 0x0(0x10)
	struct TArray<float> VerticesNewCornerSharpness;  // 0x10(0x10)

}; 
// Function EditableMesh.EditableMesh.SplitEdge
// Size: 0x28(Inherited: 0x0) 
struct FSplitEdge
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<float> Splits;  // 0x8(0x10)
	struct TArray<struct FVertexID> OutNewVertexIDs;  // 0x18(0x10)

}; 
// Function EditableMesh.EditableMesh.SplitPolygons
// Size: 0x20(Inherited: 0x0) 
struct FSplitPolygons
{
	struct TArray<struct FPolygonToSplit> PolygonsToSplit;  // 0x0(0x10)
	struct TArray<struct FEdgeID> OutNewEdgeIDs;  // 0x10(0x10)

}; 
// Function EditableMesh.EditableMesh.StartModification
// Size: 0x2(Inherited: 0x0) 
struct FStartModification
{
	uint8_t  MeshModificationType;  // 0x0(0x1)
	uint8_t  MeshTopologyChange;  // 0x1(0x1)

}; 
// Function EditableMesh.EditableMesh.TessellatePolygons
// Size: 0x28(Inherited: 0x0) 
struct FTessellatePolygons
{
	struct TArray<struct FPolygonID> PolygonIDs;  // 0x0(0x10)
	uint8_t  TriangleTessellationMode;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct TArray<struct FPolygonID> OutNewPolygonIDs;  // 0x18(0x10)

}; 
// Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
// Size: 0xC(Inherited: 0x0) 
struct FTryToRemovePolygonEdge
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bOutWasEdgeRemoved : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	struct FPolygonID OutNewPolygonID;  // 0x8(0x4)

}; 
// Function EditableMesh.EditableMesh.TriangulatePolygons
// Size: 0x20(Inherited: 0x0) 
struct FTriangulatePolygons
{
	struct TArray<struct FPolygonID> PolygonIDs;  // 0x0(0x10)
	struct TArray<struct FPolygonID> OutNewTrianglePolygons;  // 0x10(0x10)

}; 
// Function EditableMesh.EditableMesh.TryToRemoveVertex
// Size: 0xC(Inherited: 0x0) 
struct FTryToRemoveVertex
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bOutWasVertexRemoved : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	struct FEdgeID OutNewEdgeID;  // 0x8(0x4)

}; 
// Function EditableMesh.EditableMesh.WeldVertices
// Size: 0x18(Inherited: 0x0) 
struct FWeldVertices
{
	struct TArray<struct FVertexID> VertexIDs;  // 0x0(0x10)
	struct FVertexID OutNewVertexID;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function EditableMesh.EditableMeshFactory.MakeEditableMesh
// Size: 0x18(Inherited: 0x0) 
struct FMakeEditableMesh
{
	struct UPrimitiveComponent* PrimitiveComponent;  // 0x0(0x8)
	int32_t LODIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct UEditableMesh* ReturnValue;  // 0x10(0x8)

}; 
