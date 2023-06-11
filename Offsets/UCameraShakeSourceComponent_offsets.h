namespace offsets
{
	namespace UCameraShakeSourceComponent
	{
			constexpr auto Attenuation = 0x1f8; // Size: 1, Type: uint8_t 
			constexpr auto InnerAttenuationRadius = 0x1fc; // Size: 4, Type: float
			constexpr auto OuterAttenuationRadius = 0x200; // Size: 4, Type: float
			constexpr auto CameraShake = 0x208; // Size: 8, Type: UCameraShakeBase*
			constexpr auto bAutoStart = 0x210; // Size: 1, Type: bool
	}
} 
