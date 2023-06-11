#pragma once 
#include <ActorSequence_Structs.h>
 
 
 
// Class ActorSequence.ActorSequenceComponent
// Size: 0xD8(Inherited: 0xB0) 
struct UActorSequenceComponent : public UActorComponent
{
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;  // 0xB0(0x14)
	char pad_196[4];  // 0xC4(0x4)
	struct UActorSequence* Sequence;  // 0xC8(0x8)
	struct UActorSequencePlayer* SequencePlayer;  // 0xD0(0x8)

}; 



// Class ActorSequence.ActorSequence
// Size: 0x88(Inherited: 0x60) 
struct UActorSequence : public UMovieSceneSequence
{
	struct UMovieScene* MovieScene;  // 0x60(0x8)
	struct FActorSequenceObjectReferenceMap ObjectReferences;  // 0x68(0x20)

}; 



// Class ActorSequence.ActorSequencePlayer
// Size: 0x4E8(Inherited: 0x4E8) 
struct UActorSequencePlayer : public UMovieSceneSequencePlayer
{

}; 



