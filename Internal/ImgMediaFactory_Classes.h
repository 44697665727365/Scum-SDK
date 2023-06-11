#pragma once 
#include <ImgMediaFactory_Structs.h>
 
 
 
// Class ImgMediaFactory.ImgMediaSettings
// Size: 0x68(Inherited: 0x28) 
struct UImgMediaSettings : public UObject
{
	struct FFrameRate DefaultFrameRate;  // 0x28(0x8)
	float CacheBehindPercentage;  // 0x30(0x4)
	float CacheSizeGB;  // 0x34(0x4)
	int32_t CacheThreads;  // 0x38(0x4)
	int32_t CacheThreadStackSizeKB;  // 0x3C(0x4)
	float GlobalCacheSizeGB;  // 0x40(0x4)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool UseGlobalCache : 1;  // 0x44(0x1)
	char pad_69[3];  // 0x45(0x3)
	uint32_t ExrDecoderThreads;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)
	struct FString DefaultProxy;  // 0x50(0x10)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool UseDefaultProxy : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 



