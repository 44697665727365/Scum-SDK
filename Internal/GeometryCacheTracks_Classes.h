#pragma once 
#include <GeometryCacheTracks_Structs.h>
 
 
 
// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// Size: 0x128(Inherited: 0xE8) 
struct UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
	struct FMovieSceneGeometryCacheParams Params;  // 0xE8(0x40)

}; 



// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// Size: 0xA8(Inherited: 0x90) 
struct UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{
	char pad_144[8];  // 0x90(0x8)
	struct TArray<struct UMovieSceneSection*> AnimationSections;  // 0x98(0x10)

}; 



