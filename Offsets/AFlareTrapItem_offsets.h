namespace offsets
{
	namespace AFlareTrapItem
	{
			constexpr auto _triggerSound = 0xa60; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _detonationDelay = 0xa68; // Size: 4, Type: float
			constexpr auto _projectileClass = 0xa70; // Size: 8, Type: AProjectile*
			constexpr auto _projectileLocation = 0xa78; // Size: 12, Type: struct FVector
			constexpr auto _projectileRotation = 0xa84; // Size: 12, Type: struct FRotator
			constexpr auto _projectileMuzzleVelocity = 0xa90; // Size: 4, Type: float
			constexpr auto _projectileLifetime = 0xa94; // Size: 4, Type: float
	}
} 
