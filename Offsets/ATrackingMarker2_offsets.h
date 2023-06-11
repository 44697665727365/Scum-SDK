namespace offsets
{
	namespace ATrackingMarker2
	{
			constexpr auto SceneComponent = 0x228; // Size: 8, Type: struct USceneComponent*
			constexpr auto DirectionArrow = 0x230; // Size: 8, Type: struct UArrowComponent*
			constexpr auto ConeDecal = 0x238; // Size: 8, Type: struct UDecalComponent*
			constexpr auto Particles = 0x240; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto TickFrequency = 0x248; // Size: 4, Type: float
			constexpr auto AnimalClass = 0x250; // Size: 8, Type: AAnimal2*
			constexpr auto Duration = 0x258; // Size: 4, Type: float
			constexpr auto Direction = 0x25c; // Size: 12, Type: struct FVector
			constexpr auto health = 0x268; // Size: 4, Type: float
			constexpr auto BleedingSeverity = 0x26c; // Size: 1, Type: uint8_t 
			constexpr auto ShowBleedingInfo = 0x26d; // Size: 1, Type: bool
			constexpr auto ShowWoundInfo = 0x26e; // Size: 1, Type: bool
			constexpr auto ShowBasicWoundInfo = 0x26f; // Size: 1, Type: bool
			constexpr auto MaxSevereBleedTime = 0x270; // Size: 4, Type: float
			constexpr auto MaxHeavyBleedTime = 0x274; // Size: 4, Type: float
			constexpr auto MaxModerateBleedTime = 0x278; // Size: 4, Type: float
			constexpr auto MaxLightBleedTime = 0x27c; // Size: 4, Type: float
	}
} 
