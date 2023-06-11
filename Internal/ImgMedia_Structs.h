#pragma once 
#include "SDK.h" 
 
 
// Function ImgMedia.ImgMediaSource.SetMipLevelDistance
// Size: 0x4(Inherited: 0x0) 
struct FSetMipLevelDistance
{
	float Distance;  // 0x0(0x4)

}; 
// Function ImgMedia.ImgMediaSource.AddGlobalCamera
// Size: 0x8(Inherited: 0x0) 
struct FAddGlobalCamera
{
	struct AActor* InActor;  // 0x0(0x8)

}; 
// Function ImgMedia.ImgMediaSource.AddTargetObject
// Size: 0x10(Inherited: 0x0) 
struct FAddTargetObject
{
	struct AActor* InActor;  // 0x0(0x8)
	float Width;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
// Size: 0x8(Inherited: 0x0) 
struct FRemoveGlobalCamera
{
	struct AActor* InActor;  // 0x0(0x8)

}; 
// Function ImgMedia.ImgMediaSource.GetSequencePath
// Size: 0x10(Inherited: 0x0) 
struct FGetSequencePath
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function ImgMedia.ImgMediaSource.GetProxies
// Size: 0x10(Inherited: 0x0) 
struct FGetProxies
{
	struct TArray<struct FString> OutProxies;  // 0x0(0x10)

}; 
// Function ImgMedia.ImgMediaSource.RemoveTargetObject
// Size: 0x8(Inherited: 0x0) 
struct FRemoveTargetObject
{
	struct AActor* InActor;  // 0x0(0x8)

}; 
// Function ImgMedia.ImgMediaSource.SetSequencePath
// Size: 0x10(Inherited: 0x0) 
struct FSetSequencePath
{
	struct FString Path;  // 0x0(0x10)

}; 
