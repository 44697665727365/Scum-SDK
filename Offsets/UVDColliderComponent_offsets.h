namespace offsets
{
	namespace UVDColliderComponent
	{
			constexpr auto SimulationInstance = 0xb0; // Size: 8, Type: struct UVDSimulation*
			constexpr auto AssociatedVDComponents = 0xb8; // Size: 16, Type: struct TArray<struct FComponentReference>
			constexpr auto bAddAllComponents = 0xc8; // Size: 1, Type: char
			constexpr auto bIgnoreConvexShapes = 0xc8; // Size: 1, Type: char
			constexpr auto SpecificColliders = 0xd0; // Size: 16, Type: struct TArray<struct FName>
	}
} 
