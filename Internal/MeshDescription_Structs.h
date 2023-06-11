#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct MeshDescription.TriangleID
// Size: 0x4(Inherited: 0x4) 
struct FTriangleID : public FElementID
{

}; 
// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
// Size: 0x8(Inherited: 0x0) 
struct FGetNumPolygonVertices
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
// Size: 0x8(Inherited: 0x0) 
struct FIsPolygonGroupValid
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// ScriptStruct MeshDescription.ElementID
// Size: 0x4(Inherited: 0x0) 
struct FElementID
{
	int32_t IDValue;  // 0x0(0x4)

}; 
// ScriptStruct MeshDescription.PolygonGroupID
// Size: 0x4(Inherited: 0x4) 
struct FPolygonGroupID : public FElementID
{

}; 
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
// Size: 0x18(Inherited: 0x0) 
struct FGetVertexInstanceConnectedPolygons
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // 0x8(0x10)

}; 
// ScriptStruct MeshDescription.PolygonID
// Size: 0x4(Inherited: 0x4) 
struct FPolygonID : public FElementID
{

}; 
// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
// Size: 0x18(Inherited: 0x0) 
struct FGetPolygonTriangles
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FTriangleID> OutTriangleIDs;  // 0x8(0x10)

}; 
// ScriptStruct MeshDescription.VertexID
// Size: 0x4(Inherited: 0x4) 
struct FVertexID : public FElementID
{

}; 
// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
// Size: 0x4(Inherited: 0x0) 
struct FComputePolygonTriangulation
{
	struct FPolygonID PolygonID;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
// Size: 0x8(Inherited: 0x0) 
struct FGetNumVertexConnectedTriangles
{
	struct FVertexID VertexID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// ScriptStruct MeshDescription.EdgeID
// Size: 0x4(Inherited: 0x4) 
struct FEdgeID : public FElementID
{

}; 
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
// Size: 0xC(Inherited: 0x0) 
struct FGetVertexInstanceForPolygonVertex
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	struct FVertexID VertexID;  // 0x4(0x4)
	struct FVertexInstanceID ReturnValue;  // 0x8(0x4)

}; 
// ScriptStruct MeshDescription.VertexInstanceID
// Size: 0x4(Inherited: 0x4) 
struct FVertexInstanceID : public FElementID
{

}; 
// Function MeshDescription.MeshDescriptionBase.CreateEdge
// Size: 0xC(Inherited: 0x0) 
struct FCreateEdge
{
	struct FVertexID VertexID0;  // 0x0(0x4)
	struct FVertexID VertexID1;  // 0x4(0x4)
	struct FEdgeID ReturnValue;  // 0x8(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
// Size: 0x18(Inherited: 0x0) 
struct FGetTriangleVertices
{
	struct FTriangleID TriangleID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexID> OutVertexIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
// Size: 0x8(Inherited: 0x0) 
struct FGetNumVertexInstanceConnectedTriangles
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.DeletePolygon
// Size: 0x38(Inherited: 0x0) 
struct FDeletePolygon
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FEdgeID> OrphanedEdges;  // 0x8(0x10)
	struct TArray<struct FVertexInstanceID> OrphanedVertexInstances;  // 0x18(0x10)
	struct TArray<struct FPolygonGroupID> OrphanedPolygonGroups;  // 0x28(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
// Size: 0xC(Inherited: 0x0) 
struct FCreateEdgeWithID
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	struct FVertexID VertexID0;  // 0x4(0x4)
	struct FVertexID VertexID1;  // 0x8(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
// Size: 0x18(Inherited: 0x0) 
struct FGetVertexConnectedTriangles
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FTriangleID> OutConnectedTriangleIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.CreatePolygon
// Size: 0x30(Inherited: 0x0) 
struct FCreatePolygon
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexInstanceID> VertexInstanceIDs;  // 0x8(0x10)
	struct TArray<struct FEdgeID> NewEdgeIDs;  // 0x18(0x10)
	struct FPolygonID ReturnValue;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
// Size: 0xC(Inherited: 0x0) 
struct FGetEdgeVertex
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	int32_t VertexNumber;  // 0x4(0x4)
	struct FVertexID ReturnValue;  // 0x8(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
// Size: 0x4(Inherited: 0x0) 
struct FCreatePolygonGroup
{
	struct FPolygonGroupID ReturnValue;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.CreateTriangle
// Size: 0x30(Inherited: 0x0) 
struct FCreateTriangle
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexInstanceID> VertexInstanceIDs;  // 0x8(0x10)
	struct TArray<struct FEdgeID> NewEdgeIDs;  // 0x18(0x10)
	struct FTriangleID ReturnValue;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
// Size: 0x4(Inherited: 0x0) 
struct FCreatePolygonGroupWithID
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
// Size: 0x18(Inherited: 0x0) 
struct FGetPolygonVertices
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexID> OutVertexIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
// Size: 0x28(Inherited: 0x0) 
struct FCreatePolygonWithID
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	struct FPolygonGroupID PolygonGroupID;  // 0x4(0x4)
	struct TArray<struct FVertexInstanceID> VertexInstanceIDs;  // 0x8(0x10)
	struct TArray<struct FEdgeID> NewEdgeIDs;  // 0x18(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
// Size: 0x28(Inherited: 0x0) 
struct FCreateTriangleWithID
{
	struct FTriangleID TriangleID;  // 0x0(0x4)
	struct FPolygonGroupID PolygonGroupID;  // 0x4(0x4)
	struct TArray<struct FVertexInstanceID> VertexInstanceIDs;  // 0x8(0x10)
	struct TArray<struct FEdgeID> NewEdgeIDs;  // 0x18(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
// Size: 0x18(Inherited: 0x0) 
struct FGetVertexAdjacentVertices
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexID> OutAdjacentVertexIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
// Size: 0x18(Inherited: 0x0) 
struct FGetPolygonVertexInstances
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
// Size: 0x8(Inherited: 0x0) 
struct FGetNumVertexVertexInstances
{
	struct FVertexID VertexID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.CreateVertex
// Size: 0x4(Inherited: 0x0) 
struct FCreateVertex
{
	struct FVertexID ReturnValue;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
// Size: 0x8(Inherited: 0x0) 
struct FGetNumPolygonGroupPolygons
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
// Size: 0x8(Inherited: 0x0) 
struct FCreateVertexInstance
{
	struct FVertexID VertexID;  // 0x0(0x4)
	struct FVertexInstanceID ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
// Size: 0x8(Inherited: 0x0) 
struct FCreateVertexInstanceWithID
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	struct FVertexID VertexID;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
// Size: 0x18(Inherited: 0x0) 
struct FGetEdgeConnectedPolygons
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
// Size: 0x4(Inherited: 0x0) 
struct FCreateVertexWithID
{
	struct FVertexID VertexID;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
// Size: 0x18(Inherited: 0x0) 
struct FGetVertexConnectedPolygons
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
// Size: 0x8(Inherited: 0x0) 
struct FGetTrianglePolygon
{
	struct FTriangleID TriangleID;  // 0x0(0x4)
	struct FPolygonID ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.DeleteEdge
// Size: 0x18(Inherited: 0x0) 
struct FDeleteEdge
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexID> OrphanedVertices;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
// Size: 0x18(Inherited: 0x0) 
struct FGetTriangleEdges
{
	struct FTriangleID TriangleID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FEdgeID> OutEdgeIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
// Size: 0xC(Inherited: 0x0) 
struct FGetVertexInstanceForTriangleVertex
{
	struct FTriangleID TriangleID;  // 0x0(0x4)
	struct FVertexID VertexID;  // 0x4(0x4)
	struct FVertexInstanceID ReturnValue;  // 0x8(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
// Size: 0x4(Inherited: 0x0) 
struct FDeletePolygonGroup
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
// Size: 0x8(Inherited: 0x0) 
struct FGetTrianglePolygonGroup
{
	struct FTriangleID TriangleID;  // 0x0(0x4)
	struct FPolygonGroupID ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
// Size: 0x38(Inherited: 0x0) 
struct FDeleteTriangle
{
	struct FTriangleID TriangleID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FEdgeID> OrphanedEdges;  // 0x8(0x10)
	struct TArray<struct FVertexInstanceID> OrphanedVertexInstances;  // 0x18(0x10)
	struct TArray<struct FPolygonGroupID> OrphanedPolygonGroupsPtr;  // 0x28(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.DeleteVertex
// Size: 0x4(Inherited: 0x0) 
struct FDeleteVertex
{
	struct FVertexID VertexID;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
// Size: 0x18(Inherited: 0x0) 
struct FDeleteVertexInstance
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexID> OrphanedVertices;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
// Size: 0x18(Inherited: 0x0) 
struct FGetPolygonAdjacentPolygons
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FPolygonID> OutPolygonIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
// Size: 0x18(Inherited: 0x0) 
struct FGetEdgeConnectedTriangles
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FTriangleID> OutConnectedTriangleIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
// Size: 0x18(Inherited: 0x0) 
struct FGetEdgeVertices
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexID> OutVertexIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
// Size: 0x18(Inherited: 0x0) 
struct FGetPolygonPerimeterEdges
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FEdgeID> OutEdgeIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
// Size: 0x8(Inherited: 0x0) 
struct FGetNumVertexConnectedEdges
{
	struct FVertexID VertexID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
// Size: 0x8(Inherited: 0x0) 
struct FGetNumEdgeConnectedPolygons
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
// Size: 0x8(Inherited: 0x0) 
struct FGetNumEdgeConnectedTriangles
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
// Size: 0x8(Inherited: 0x0) 
struct FGetNumPolygonInternalEdges
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
// Size: 0x18(Inherited: 0x0) 
struct FGetTriangleAdjacentTriangles
{
	struct FTriangleID TriangleID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FTriangleID> OutTriangleIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
// Size: 0x8(Inherited: 0x0) 
struct FGetNumPolygonTriangles
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
// Size: 0x8(Inherited: 0x0) 
struct FGetNumVertexConnectedPolygons
{
	struct FVertexID VertexID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
// Size: 0x8(Inherited: 0x0) 
struct FGetNumVertexInstanceConnectedPolygons
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
// Size: 0x18(Inherited: 0x0) 
struct FGetPolygonGroupPolygons
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FPolygonID> OutPolygonIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
// Size: 0x18(Inherited: 0x0) 
struct FGetPolygonInternalEdges
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FEdgeID> OutEdgeIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
// Size: 0x8(Inherited: 0x0) 
struct FGetPolygonPolygonGroup
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	struct FPolygonGroupID ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
// Size: 0xC(Inherited: 0x0) 
struct FGetTriangleVertexInstance
{
	struct FTriangleID TriangleID;  // 0x0(0x4)
	int32_t Index;  // 0x4(0x4)
	struct FVertexInstanceID ReturnValue;  // 0x8(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
// Size: 0x18(Inherited: 0x0) 
struct FGetTriangleVertexInstances
{
	struct FTriangleID TriangleID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
// Size: 0x18(Inherited: 0x0) 
struct FGetVertexConnectedEdges
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FEdgeID> OutEdgeIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
// Size: 0x18(Inherited: 0x0) 
struct FGetVertexInstanceConnectedTriangles
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FTriangleID> OutConnectedTriangleIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
// Size: 0x4(Inherited: 0x0) 
struct FReserveNewEdges
{
	int32_t NumberOfNewEdges;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
// Size: 0xC(Inherited: 0x0) 
struct FGetVertexInstancePairEdge
{
	struct FVertexInstanceID VertexInstanceID0;  // 0x0(0x4)
	struct FVertexInstanceID VertexInstanceID1;  // 0x4(0x4)
	struct FEdgeID ReturnValue;  // 0x8(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
// Size: 0x8(Inherited: 0x0) 
struct FGetVertexInstanceVertex
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	struct FVertexID ReturnValue;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
// Size: 0xC(Inherited: 0x0) 
struct FGetVertexPairEdge
{
	struct FVertexID VertexID0;  // 0x0(0x4)
	struct FVertexID VertexID1;  // 0x4(0x4)
	struct FEdgeID ReturnValue;  // 0x8(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
// Size: 0x10(Inherited: 0x0) 
struct FGetVertexPosition
{
	struct FVertexID VertexID;  // 0x0(0x4)
	struct FVector ReturnValue;  // 0x4(0xC)

}; 
// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
// Size: 0x18(Inherited: 0x0) 
struct FGetVertexVertexInstances
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs;  // 0x8(0x10)

}; 
// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
// Size: 0x8(Inherited: 0x0) 
struct FIsEdgeInternal
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
// Size: 0xC(Inherited: 0x0) 
struct FIsEdgeInternalToPolygon
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	struct FPolygonID PolygonID;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
// Size: 0x8(Inherited: 0x0) 
struct FIsEdgeValid
{
	struct FEdgeID EdgeID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function MeshDescription.MeshDescriptionBase.IsEmpty
// Size: 0x1(Inherited: 0x0) 
struct FIsEmpty
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
// Size: 0x8(Inherited: 0x0) 
struct FIsPolygonValid
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
// Size: 0x8(Inherited: 0x0) 
struct FIsTrianglePartOfNgon
{
	struct FTriangleID TriangleID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
// Size: 0x8(Inherited: 0x0) 
struct FIsTriangleValid
{
	struct FTriangleID TriangleID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
// Size: 0x8(Inherited: 0x0) 
struct FIsVertexInstanceValid
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
// Size: 0x8(Inherited: 0x0) 
struct FIsVertexOrphaned
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function MeshDescription.MeshDescriptionBase.IsVertexValid
// Size: 0x8(Inherited: 0x0) 
struct FIsVertexValid
{
	struct FVertexID VertexID;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
// Size: 0x4(Inherited: 0x0) 
struct FReserveNewPolygonGroups
{
	int32_t NumberOfNewPolygonGroups;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
// Size: 0x4(Inherited: 0x0) 
struct FReserveNewPolygons
{
	int32_t NumberOfNewPolygons;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
// Size: 0x4(Inherited: 0x0) 
struct FReserveNewTriangles
{
	int32_t NumberOfNewTriangles;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
// Size: 0x4(Inherited: 0x0) 
struct FReserveNewVertexInstances
{
	int32_t NumberOfNewVertexInstances;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
// Size: 0x4(Inherited: 0x0) 
struct FReserveNewVertices
{
	int32_t NumberOfNewVertices;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
// Size: 0x4(Inherited: 0x0) 
struct FReversePolygonFacing
{
	struct FPolygonID PolygonID;  // 0x0(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
// Size: 0x8(Inherited: 0x0) 
struct FSetPolygonPolygonGroup
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	struct FPolygonGroupID PolygonGroupID;  // 0x4(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
// Size: 0xC(Inherited: 0x0) 
struct FSetPolygonVertexInstance
{
	struct FPolygonID PolygonID;  // 0x0(0x4)
	int32_t PerimeterIndex;  // 0x4(0x4)
	struct FVertexInstanceID VertexInstanceID;  // 0x8(0x4)

}; 
// Function MeshDescription.MeshDescriptionBase.SetVertexPosition
// Size: 0x10(Inherited: 0x0) 
struct FSetVertexPosition
{
	struct FVertexID VertexID;  // 0x0(0x4)
	struct FVector position;  // 0x4(0xC)

}; 
