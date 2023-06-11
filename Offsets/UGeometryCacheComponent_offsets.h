namespace offsets
{
	namespace UGeometryCacheComponent
	{
			constexpr auto GeometryCache = 0x478; // Size: 8, Type: struct UGeometryCache*
			constexpr auto bRunning = 0x480; // Size: 1, Type: bool
			constexpr auto bLooping = 0x481; // Size: 1, Type: bool
			constexpr auto bExtrapolateFrames = 0x482; // Size: 1, Type: bool
			constexpr auto StartTimeOffset = 0x484; // Size: 4, Type: float
			constexpr auto PlaybackSpeed = 0x488; // Size: 4, Type: float
			constexpr auto MotionVectorScale = 0x48c; // Size: 4, Type: float
			constexpr auto NumTracks = 0x490; // Size: 4, Type: int32_t
			constexpr auto ElapsedTime = 0x494; // Size: 4, Type: float
			constexpr auto Duration = 0x4cc; // Size: 4, Type: float
			constexpr auto bManualTick = 0x4d0; // Size: 1, Type: bool
	}
} 
