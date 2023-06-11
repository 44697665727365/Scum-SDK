namespace offsets
{
	namespace UAnimNotify_PlayParticleEffect
	{
			constexpr auto PSTemplate = 0x38; // Size: 8, Type: struct UParticleSystem*
			constexpr auto LocationOffset = 0x40; // Size: 12, Type: struct FVector
			constexpr auto RotationOffset = 0x4c; // Size: 12, Type: struct FRotator
			constexpr auto Scale = 0x58; // Size: 12, Type: struct FVector
			constexpr auto Attached = 0x80; // Size: 1, Type: char
			constexpr auto SocketName = 0x84; // Size: 8, Type: struct FName
	}
} 
