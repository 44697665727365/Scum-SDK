namespace offsets
{
	namespace UClothConfigNv
	{
			constexpr auto ClothingWindMethod = 0x28; // Size: 1, Type: uint8_t 
			constexpr auto VerticalConstraint = 0x2c; // Size: 16, Type: struct FClothConstraintSetupNv
			constexpr auto HorizontalConstraint = 0x3c; // Size: 16, Type: struct FClothConstraintSetupNv
			constexpr auto BendConstraint = 0x4c; // Size: 16, Type: struct FClothConstraintSetupNv
			constexpr auto ShearConstraint = 0x5c; // Size: 16, Type: struct FClothConstraintSetupNv
			constexpr auto SelfCollisionRadius = 0x6c; // Size: 4, Type: float
			constexpr auto SelfCollisionStiffness = 0x70; // Size: 4, Type: float
			constexpr auto SelfCollisionCullScale = 0x74; // Size: 4, Type: float
			constexpr auto Damping = 0x78; // Size: 12, Type: struct FVector
			constexpr auto Friction = 0x84; // Size: 4, Type: float
			constexpr auto WindDragCoefficient = 0x88; // Size: 4, Type: float
			constexpr auto WindLiftCoefficient = 0x8c; // Size: 4, Type: float
			constexpr auto WindIntensityScale = 0x90; // Size: 4, Type: float
			constexpr auto LinearDrag = 0x94; // Size: 12, Type: struct FVector
			constexpr auto AngularDrag = 0xa0; // Size: 12, Type: struct FVector
			constexpr auto LinearInertiaScale = 0xac; // Size: 12, Type: struct FVector
			constexpr auto AngularInertiaScale = 0xb8; // Size: 12, Type: struct FVector
			constexpr auto CentrifugalInertiaScale = 0xc4; // Size: 12, Type: struct FVector
			constexpr auto SolverFrequency = 0xd0; // Size: 4, Type: float
			constexpr auto StiffnessFrequency = 0xd4; // Size: 4, Type: float
			constexpr auto GravityScale = 0xd8; // Size: 4, Type: float
			constexpr auto GravityOverride = 0xdc; // Size: 12, Type: struct FVector
			constexpr auto bUseGravityOverride = 0xe8; // Size: 1, Type: bool
			constexpr auto TetherStiffness = 0xec; // Size: 4, Type: float
			constexpr auto TetherLimit = 0xf0; // Size: 4, Type: float
			constexpr auto CollisionThickness = 0xf4; // Size: 4, Type: float
			constexpr auto AnimDriveSpringStiffness = 0xf8; // Size: 4, Type: float
			constexpr auto AnimDriveDamperStiffness = 0xfc; // Size: 4, Type: float
			constexpr auto WindMethod = 0x100; // Size: 1, Type: uint8_t 
			constexpr auto VerticalConstraintConfig = 0x104; // Size: 16, Type: struct FClothConstraintSetup_Legacy
			constexpr auto HorizontalConstraintConfig = 0x114; // Size: 16, Type: struct FClothConstraintSetup_Legacy
			constexpr auto BendConstraintConfig = 0x124; // Size: 16, Type: struct FClothConstraintSetup_Legacy
			constexpr auto ShearConstraintConfig = 0x134; // Size: 16, Type: struct FClothConstraintSetup_Legacy
	}
} 
