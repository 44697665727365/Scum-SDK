namespace offsets
{
	namespace UBondageItemTag
	{
			constexpr auto BondageMesh = 0x30; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto BaseStruggleDuration = 0x38; // Size: 4, Type: float
			constexpr auto StruggleStrengthModifier = 0x3c; // Size: 4, Type: float
			constexpr auto StruggleDexterityModifier = 0x40; // Size: 4, Type: float
			constexpr auto GroundMovementSpeedMultiplier = 0x44; // Size: 4, Type: float
			constexpr auto WaterMovementSpeedMultiplier = 0x48; // Size: 4, Type: float
			constexpr auto HandsBoundIdleFPAnimation = 0x50; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto HandsBoundIdleTPAnimation = 0x58; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto HandsBoundMontage = 0x60; // Size: 8, Type: struct UAnimMontage*
			constexpr auto HandsAdjustMontage = 0x68; // Size: 8, Type: struct UAnimMontage*
			constexpr auto HandsBoundStruggleMontage = 0x70; // Size: 8, Type: struct UAnimMontage*
			constexpr auto HandsFreedMontage = 0x78; // Size: 8, Type: struct UAnimMontage*
			constexpr auto BindingHandsMontage = 0x80; // Size: 8, Type: struct UAnimMontage*
			constexpr auto AdjustingHandsMontage = 0x88; // Size: 8, Type: struct UAnimMontage*
			constexpr auto HandsBoundSuicideMontage = 0x90; // Size: 8, Type: struct UAnimMontage*
	}
} 
