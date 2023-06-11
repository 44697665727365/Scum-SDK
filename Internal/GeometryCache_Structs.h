#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
// Size: 0xC(Inherited: 0x0) 
struct FGeometryCacheMeshBatchInfo
{
	char pad_0[12];  // 0x0(0xC)

}; 
// Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale
// Size: 0x4(Inherited: 0x0) 
struct FSetMotionVectorScale
{
	float NewMotionVectorScale;  // 0x0(0x4)

}; 
// ScriptStruct GeometryCache.TrackRenderData
// Size: 0x70(Inherited: 0x0) 
struct FTrackRenderData
{
	char pad_0[112];  // 0x0(0x70)

}; 
// Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale
// Size: 0x4(Inherited: 0x0) 
struct FGetMotionVectorScale
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
// Size: 0x1(Inherited: 0x0) 
struct FSetExtrapolateFrames
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bNewExtrapolating : 1;  // 0x0(0x1)

}; 
// ScriptStruct GeometryCache.GeometryCacheMeshData
// Size: 0xB0(Inherited: 0x0) 
struct FGeometryCacheMeshData
{
	char pad_0[176];  // 0x0(0xB0)

}; 
// Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
// Size: 0x4(Inherited: 0x0) 
struct FGetPlaybackDirection
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct GeometryCache.GeometryCacheVertexInfo
// Size: 0x8(Inherited: 0x0) 
struct FGeometryCacheVertexInfo
{
	char pad_0[8];  // 0x0(0x8)

}; 
// Function GeometryCache.GeometryCacheComponent.GetAnimationTime
// Size: 0x4(Inherited: 0x0) 
struct FGetAnimationTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetGeometryCacheComponent
{
	struct UGeometryCacheComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
// Size: 0x4(Inherited: 0x0) 
struct FSetStartTimeOffset
{
	float NewStartTimeOffset;  // 0x0(0x4)

}; 
// Function GeometryCache.GeometryCacheComponent.GetDuration
// Size: 0x4(Inherited: 0x0) 
struct FGetDuration
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
// Size: 0x4(Inherited: 0x0) 
struct FGetNumberOfFrames
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
// Size: 0x4(Inherited: 0x0) 
struct FGetPlaybackSpeed
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
// Size: 0x4(Inherited: 0x0) 
struct FGetStartTimeOffset
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
// Size: 0x1(Inherited: 0x0) 
struct FIsExtrapolatingFrames
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function GeometryCache.GeometryCacheComponent.IsLooping
// Size: 0x1(Inherited: 0x0) 
struct FIsLooping
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function GeometryCache.GeometryCacheComponent.IsPlaying
// Size: 0x1(Inherited: 0x0) 
struct FIsPlaying
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
// Size: 0x1(Inherited: 0x0) 
struct FIsPlayingReversed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
// Size: 0x10(Inherited: 0x0) 
struct FSetGeometryCache
{
	struct UGeometryCache* NewGeomCache;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function GeometryCache.GeometryCacheComponent.SetLooping
// Size: 0x1(Inherited: 0x0) 
struct FSetLooping
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bNewLooping : 1;  // 0x0(0x1)

}; 
// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
// Size: 0x4(Inherited: 0x0) 
struct FSetPlaybackSpeed
{
	float NewPlaybackSpeed;  // 0x0(0x4)

}; 
// Function GeometryCache.GeometryCacheComponent.TickAtThisTime
// Size: 0x8(Inherited: 0x0) 
struct FTickAtThisTime
{
	float Time;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bInIsRunning : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool bInBackwards : 1;  // 0x5(0x1)
	char pad_6_1 : 7;  // 0x6(0x1)
	bool bInIsLooping : 1;  // 0x6(0x1)
	char pad_7[1];  // 0x7(0x1)

}; 
// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
// Size: 0xB8(Inherited: 0x0) 
struct FAddMeshSample
{
	struct FGeometryCacheMeshData MeshData;  // 0x0(0xB0)
	float SampleTime;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)

}; 
// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
// Size: 0xB0(Inherited: 0x0) 
struct FSetMesh
{
	struct FGeometryCacheMeshData NewMeshData;  // 0x0(0xB0)

}; 
