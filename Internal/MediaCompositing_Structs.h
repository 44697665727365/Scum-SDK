#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
// Size: 0x48(Inherited: 0x38) 
struct FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct UMediaSource* MediaSource;  // 0x38(0x8)
	struct FFrameNumber SectionStartFrame;  // 0x40(0x4)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool bLoop : 1;  // 0x44(0x1)
	char pad_69[3];  // 0x45(0x3)

}; 
// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// Size: 0x50(Inherited: 0x20) 
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneMediaSectionParams Params;  // 0x20(0x30)

}; 
// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// Size: 0x30(Inherited: 0x0) 
struct FMovieSceneMediaSectionParams
{
	struct UMediaSoundComponent* MediaSoundComponent;  // 0x0(0x8)
	struct UMediaSource* MediaSource;  // 0x8(0x8)
	struct UMediaTexture* MediaTexture;  // 0x10(0x8)
	struct UMediaPlayer* MediaPlayer;  // 0x18(0x8)
	struct FFrameNumber SectionStartFrame;  // 0x20(0x4)
	struct FFrameNumber SectionEndFrame;  // 0x24(0x4)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bLooping : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	struct FFrameNumber StartFrameOffset;  // 0x2C(0x4)

}; 
