#pragma once 
#include <GeometryCache_Structs.h>
 
 
 
// Class GeometryCache.GeometryCacheComponent
// Size: 0x4E0(Inherited: 0x480) 
struct UGeometryCacheComponent : public UMeshComponent
{
	struct UGeometryCache* GeometryCache;  // 0x478(0x8)
	char pad_1160_1 : 7;  // 0x488(0x1)
	bool bRunning : 1;  // 0x480(0x1)
	char pad_1161_1 : 7;  // 0x489(0x1)
	bool bLooping : 1;  // 0x481(0x1)
	char pad_1162_1 : 7;  // 0x48A(0x1)
	bool bExtrapolateFrames : 1;  // 0x482(0x1)
	float StartTimeOffset;  // 0x484(0x4)
	float PlaybackSpeed;  // 0x488(0x4)
	float MotionVectorScale;  // 0x48C(0x4)
	int32_t NumTracks;  // 0x490(0x4)
	float ElapsedTime;  // 0x494(0x4)
	char pad_1183[45];  // 0x49F(0x2D)
	float Duration;  // 0x4CC(0x4)
	char pad_1232_1 : 7;  // 0x4D0(0x1)
	bool bManualTick : 1;  // 0x4D0(0x1)
	char pad_1233[15];  // 0x4D1(0xF)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	void SetMotionVectorScale(float NewMotionVectorScale); // Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale
	void SetLooping(bool bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache
	void SetExtrapolateFrames(bool bNewExtrapolating); // Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause
	bool IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping
	bool IsExtrapolatingFrames(); // Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	float GetMotionVectorScale(); // Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime
}; 



// Class GeometryCache.GeometryCache
// Size: 0x70(Inherited: 0x28) 
struct UGeometryCache : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct TArray<struct UMaterialInterface*> Materials;  // 0x30(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks;  // 0x40(0x10)
	char pad_80[16];  // 0x50(0x10)
	int32_t StartFrame;  // 0x60(0x4)
	int32_t EndFrame;  // 0x64(0x4)
	uint64_t Hash;  // 0x68(0x8)

}; 



// Class GeometryCache.GeometryCacheActor
// Size: 0x228(Inherited: 0x220) 
struct AGeometryCacheActor : public AActor
{
	struct UGeometryCacheComponent* GeometryCacheComponent;  // 0x220(0x8)

	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
}; 



// Class GeometryCache.GeometryCacheCodecBase
// Size: 0x38(Inherited: 0x28) 
struct UGeometryCacheCodecBase : public UObject
{
	struct TArray<int32_t> TopologyRanges;  // 0x28(0x10)

}; 



// Class GeometryCache.GeometryCacheTrack
// Size: 0x58(Inherited: 0x28) 
struct UGeometryCacheTrack : public UObject
{
	float Duration;  // 0x28(0x4)
	char pad_44[44];  // 0x2C(0x2C)

}; 



// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x80(Inherited: 0x58) 
struct UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
	uint32_t NumMeshSamples;  // 0x58(0x4)
	char pad_92[36];  // 0x5C(0x24)

	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
}; 



// Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x40(Inherited: 0x38) 
struct UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
	int32_t DummyProperty;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 



// Class GeometryCache.GeometryCacheCodecV1
// Size: 0x40(Inherited: 0x38) 
struct UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
	char pad_56[8];  // 0x38(0x8)

}; 



// Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0xD8(Inherited: 0x58) 
struct UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
	struct UGeometryCacheCodecBase* Codec;  // 0x58(0x8)
	char pad_96[104];  // 0x60(0x68)
	float StartSampleTime;  // 0xC8(0x4)
	char pad_204[12];  // 0xCC(0xC)

}; 



// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x108(Inherited: 0x58) 
struct UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
	char pad_88[176];  // 0x58(0xB0)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
}; 



// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x108(Inherited: 0x58) 
struct UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
	char pad_88[176];  // 0x58(0xB0)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
}; 



