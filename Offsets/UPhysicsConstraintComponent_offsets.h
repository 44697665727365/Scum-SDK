namespace offsets
{
	namespace UPhysicsConstraintComponent
	{
			constexpr auto ConstraintActor1 = 0x1f8; // Size: 8, Type: struct AActor*
			constexpr auto ComponentName1 = 0x200; // Size: 8, Type: struct FConstrainComponentPropName
			constexpr auto ConstraintActor2 = 0x208; // Size: 8, Type: struct AActor*
			constexpr auto ComponentName2 = 0x210; // Size: 8, Type: struct FConstrainComponentPropName
			constexpr auto ConstraintSetup = 0x228; // Size: 8, Type: struct UPhysicsConstraintTemplate*
			constexpr auto OnConstraintBroken = 0x230; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ConstraintInstance = 0x240; // Size: 456, Type: struct FConstraintInstance
	}
} 
