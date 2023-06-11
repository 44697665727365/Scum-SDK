#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
// Size: 0xB8(Inherited: 0x38) 
struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FLiveLinkSubjectPreset SubjectPreset;  // 0x38(0x38)
	struct TArray<bool> ChannelMask;  // 0x70(0x10)
	struct TArray<struct FLiveLinkSubSectionData> SubSectionsData;  // 0x80(0x10)
	char pad_144[40];  // 0x90(0x28)

}; 
// ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData
// Size: 0x58(Inherited: 0x0) 
struct FLiveLinkPropertyData
{
	struct FName PropertyName;  // 0x0(0x8)
	struct TArray<struct FMovieSceneFloatChannel> FloatChannel;  // 0x8(0x10)
	struct TArray<struct FMovieSceneStringChannel> StringChannel;  // 0x18(0x10)
	struct TArray<struct FMovieSceneIntegerChannel> IntegerChannel;  // 0x28(0x10)
	struct TArray<struct FMovieSceneBoolChannel> BoolChannel;  // 0x38(0x10)
	struct TArray<struct FMovieSceneByteChannel> ByteChannel;  // 0x48(0x10)

}; 
// ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
// Size: 0x10(Inherited: 0x0) 
struct FLiveLinkSubSectionData
{
	struct TArray<struct FLiveLinkPropertyData> Properties;  // 0x0(0x10)

}; 
