namespace offsets
{
	namespace UPhysicsSpringComponent
	{
			constexpr auto SpringStiffness = 0x1f8; // Size: 4, Type: float
			constexpr auto SpringDamping = 0x1fc; // Size: 4, Type: float
			constexpr auto SpringLengthAtRest = 0x200; // Size: 4, Type: float
			constexpr auto SpringRadius = 0x204; // Size: 4, Type: float
			constexpr auto SpringChannel = 0x208; // Size: 1, Type: char ECollisionChannel
			constexpr auto bIgnoreSelf = 0x209; // Size: 1, Type: bool
			constexpr auto SpringCompression = 0x20c; // Size: 4, Type: float
	}
} 
