#pragma once 
#include <MediaCompositing_Structs.h>
 
 
 
// Class MediaCompositing.MovieSceneMediaSection
// Size: 0x118(Inherited: 0xE8) 
struct UMovieSceneMediaSection : public UMovieSceneSection
{
	struct UMediaSource* MediaSource;  // 0xE8(0x8)
	char pad_240_1 : 7;  // 0xF0(0x1)
	bool bLooping : 1;  // 0xF0(0x1)
	char pad_241[3];  // 0xF1(0x3)
	struct FFrameNumber StartFrameOffset;  // 0xF4(0x4)
	struct UMediaTexture* MediaTexture;  // 0xF8(0x8)
	struct UMediaSoundComponent* MediaSoundComponent;  // 0x100(0x8)
	char pad_264_1 : 7;  // 0x108(0x1)
	bool bUseExternalMediaPlayer : 1;  // 0x108(0x1)
	char pad_265[7];  // 0x109(0x7)
	struct UMediaPlayer* ExternalMediaPlayer;  // 0x110(0x8)

}; 



// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// Size: 0xF8(Inherited: 0xE8) 
struct UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{
	struct UMediaSource* MediaSource;  // 0xE8(0x8)
	char pad_240_1 : 7;  // 0xF0(0x1)
	bool bLoop : 1;  // 0xF0(0x1)
	char pad_241[7];  // 0xF1(0x7)

}; 



// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// Size: 0xC8(Inherited: 0xC0) 
struct UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{
	char pad_192[8];  // 0xC0(0x8)

}; 



// Class MediaCompositing.MovieSceneMediaTrack
// Size: 0xA8(Inherited: 0x90) 
struct UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
	char pad_144[8];  // 0x90(0x8)
	struct TArray<struct UMovieSceneSection*> MediaSections;  // 0x98(0x10)

}; 



