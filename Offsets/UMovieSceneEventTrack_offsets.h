namespace offsets
{
	namespace UMovieSceneEventTrack
	{
			constexpr auto bFireEventsWhenForwards = 0xa0; // Size: 1, Type: char
			constexpr auto bFireEventsWhenBackwards = 0xa0; // Size: 1, Type: char
			constexpr auto EventPosition = 0xa4; // Size: 1, Type: uint8_t 
			constexpr auto Sections = 0xa8; // Size: 16, Type: struct TArray<struct UMovieSceneSection*>
	}
} 
