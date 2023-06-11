namespace offsets
{
	namespace UAkComponent
	{
			constexpr auto bUseSpatialAudio = 0x218; // Size: 1, Type: bool
			constexpr auto OcclusionCollisionChannel = 0x220; // Size: 1, Type: char ECollisionChannel
			constexpr auto EnableSpotReflectors = 0x224; // Size: 1, Type: char
			constexpr auto OuterRadius = 0x228; // Size: 4, Type: float
			constexpr auto InnerRadius = 0x22c; // Size: 4, Type: float
			constexpr auto EarlyReflectionAuxBus = 0x230; // Size: 8, Type: struct UAkAuxBus*
			constexpr auto EarlyReflectionAuxBusName = 0x238; // Size: 16, Type: struct FString
			constexpr auto EarlyReflectionOrder = 0x248; // Size: 4, Type: int32_t
			constexpr auto EarlyReflectionBusSendGain = 0x24c; // Size: 4, Type: float
			constexpr auto EarlyReflectionMaxPathLength = 0x250; // Size: 4, Type: float
			constexpr auto roomReverbAuxBusGain = 0x254; // Size: 4, Type: float
			constexpr auto diffractionMaxEdges = 0x258; // Size: 4, Type: int32_t
			constexpr auto diffractionMaxPaths = 0x25c; // Size: 4, Type: int32_t
			constexpr auto diffractionMaxPathLength = 0x260; // Size: 4, Type: float
			constexpr auto DrawFirstOrderReflections = 0x264; // Size: 1, Type: char
			constexpr auto DrawSecondOrderReflections = 0x264; // Size: 1, Type: char
			constexpr auto DrawHigherOrderReflections = 0x264; // Size: 1, Type: char
			constexpr auto DrawDiffraction = 0x264; // Size: 1, Type: char
			constexpr auto StopWhenOwnerDestroyed = 0x268; // Size: 1, Type: bool
			constexpr auto AttenuationScalingFactor = 0x26c; // Size: 4, Type: float
			constexpr auto OcclusionRefreshInterval = 0x270; // Size: 4, Type: float
			constexpr auto bUseReverbVolumes = 0x274; // Size: 1, Type: bool
	}
} 
