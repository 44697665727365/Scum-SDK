namespace offsets
{
	namespace UPaperFlipbookComponent
	{
			constexpr auto SourceFlipbook = 0x478; // Size: 8, Type: struct UPaperFlipbook*
			constexpr auto Material = 0x480; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto PlayRate = 0x488; // Size: 4, Type: float
			constexpr auto bLooping = 0x48c; // Size: 1, Type: char
			constexpr auto bReversePlayback = 0x48c; // Size: 1, Type: char
			constexpr auto bPlaying = 0x48c; // Size: 1, Type: char
			constexpr auto AccumulatedTime = 0x490; // Size: 4, Type: float
			constexpr auto CachedFrameIndex = 0x494; // Size: 4, Type: int32_t
			constexpr auto SpriteColor = 0x498; // Size: 16, Type: struct FLinearColor
			constexpr auto CachedBodySetup = 0x4a8; // Size: 8, Type: struct UBodySetup*
			constexpr auto OnFinishedPlaying = 0x4b0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
