#pragma once 
#include <GeometryCollectionTracks_Structs.h>
 
 
 
// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// Size: 0x118(Inherited: 0xE8) 
struct UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{
	struct FMovieSceneGeometryCollectionParams Params;  // 0xE8(0x30)

}; 



// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// Size: 0xA8(Inherited: 0x90) 
struct UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{
	char pad_144[8];  // 0x90(0x8)
	struct TArray<struct UMovieSceneSection*> AnimationSections;  // 0x98(0x10)

}; 



