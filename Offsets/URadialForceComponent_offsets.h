namespace offsets
{
	namespace URadialForceComponent
	{
			constexpr auto Radius = 0x1f8; // Size: 4, Type: float
			constexpr auto Falloff = 0x1fc; // Size: 1, Type: char ERadialImpulseFalloff
			constexpr auto ImpulseStrength = 0x200; // Size: 4, Type: float
			constexpr auto bImpulseVelChange = 0x204; // Size: 1, Type: char
			constexpr auto bIgnoreOwningActor = 0x204; // Size: 1, Type: char
			constexpr auto ForceStrength = 0x208; // Size: 4, Type: float
			constexpr auto DestructibleDamage = 0x20c; // Size: 4, Type: float
			constexpr auto ObjectTypesToAffect = 0x210; // Size: 16, Type: struct TArray<char EObjectTypeQuery>
	}
} 
