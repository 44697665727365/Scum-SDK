#pragma once 
#include <LiveLinkMovieScene_Structs.h>
 
 
 
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
// Size: 0x60(Inherited: 0x50) 
struct UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{
	char pad_80[16];  // 0x50(0x10)

}; 



// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
// Size: 0x50(Inherited: 0x28) 
struct UMovieSceneLiveLinkSubSection : public UObject
{
	struct FLiveLinkSubSectionData SubSectionData;  // 0x28(0x10)
	ULiveLinkRole* SubjectRole;  // 0x38(0x8)
	char pad_64[16];  // 0x40(0x10)

}; 



// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
// Size: 0x228(Inherited: 0xE8) 
struct UMovieSceneLiveLinkSection : public UMovieSceneSection
{
	struct FLiveLinkSubjectPreset SubjectPreset;  // 0xE8(0x38)
	struct TArray<bool> ChannelMask;  // 0x120(0x10)
	struct TArray<struct UMovieSceneLiveLinkSubSection*> SubSections;  // 0x130(0x10)
	char pad_320[16];  // 0x140(0x10)
	struct FName SubjectName;  // 0x150(0x8)
	struct FLiveLinkFrameData TemplateToPush;  // 0x158(0x90)
	struct FLiveLinkRefSkeleton RefSkeleton;  // 0x1E8(0x20)
	struct TArray<struct FName> CurveNames;  // 0x208(0x10)
	struct TArray<struct FMovieSceneFloatChannel> PropertyFloatChannels;  // 0x218(0x10)

}; 



// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
// Size: 0x60(Inherited: 0x50) 
struct UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{
	char pad_80[16];  // 0x50(0x10)

}; 



// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
// Size: 0xD0(Inherited: 0xC0) 
struct UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
	char pad_192[8];  // 0xC0(0x8)
	ULiveLinkRole* TrackRole;  // 0xC8(0x8)

}; 



// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
// Size: 0x60(Inherited: 0x50) 
struct UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{
	char pad_80[16];  // 0x50(0x10)

}; 



