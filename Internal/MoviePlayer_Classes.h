#pragma once 
#include <MoviePlayer_Structs.h>
 
 
 
// Class MoviePlayer.MoviePlayerSettings
// Size: 0x40(Inherited: 0x28) 
struct UMoviePlayerSettings : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bWaitForMoviesToComplete : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool bMoviesAreSkippable : 1;  // 0x29(0x1)
	char pad_42[6];  // 0x2A(0x6)
	struct TArray<struct FString> StartupMovies;  // 0x30(0x10)

}; 



