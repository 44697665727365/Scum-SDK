#pragma once 
#include <ImgMedia_Structs.h>
 
 
 
// Class ImgMedia.ImgMediaSource
// Size: 0xC8(Inherited: 0x88) 
struct UImgMediaSource : public UBaseMediaSource
{
	char pad_136_1 : 7;  // 0x88(0x1)
	bool IsPathRelativeToProjectRoot : 1;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	struct FFrameRate FrameRateOverride;  // 0x8C(0x8)
	char pad_148[4];  // 0x94(0x4)
	struct FString ProxyOverride;  // 0x98(0x10)
	struct FDirectoryPath SequencePath;  // 0xA8(0x10)
	char pad_184[16];  // 0xB8(0x10)

	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath
	void SetMipLevelDistance(float Distance); // Function ImgMedia.ImgMediaSource.SetMipLevelDistance
	void RemoveTargetObject(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.RemoveTargetObject
	void RemoveGlobalCamera(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
	struct FString GetSequencePath(); // Function ImgMedia.ImgMediaSource.GetSequencePath
	void GetProxies(struct TArray<struct FString>& OutProxies); // Function ImgMedia.ImgMediaSource.GetProxies
	void AddTargetObject(struct AActor* InActor, float Width); // Function ImgMedia.ImgMediaSource.AddTargetObject
	void AddGlobalCamera(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.AddGlobalCamera
}; 



