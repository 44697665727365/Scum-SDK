namespace offsets
{
	namespace UDEMO_BodyRegionFade_C
	{
			constexpr auto UberGraphFrame = 0x260; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto BodyGlow_Female = 0x268; // Size: 8, Type: struct UImage*
			constexpr auto BodyGlow_Male = 0x270; // Size: 8, Type: struct UImage*
			constexpr auto BodyImage_Female = 0x278; // Size: 8, Type: struct UImage*
			constexpr auto BodyImage_Male = 0x280; // Size: 8, Type: struct UImage*
			constexpr auto btn_all = 0x288; // Size: 8, Type: struct UButton*
			constexpr auto btn_Arm_Left = 0x290; // Size: 8, Type: struct UButton*
			constexpr auto btn_Arm_Right = 0x298; // Size: 8, Type: struct UButton*
			constexpr auto btn_Female = 0x2a0; // Size: 8, Type: struct UButton*
			constexpr auto btn_Head = 0x2a8; // Size: 8, Type: struct UButton*
			constexpr auto btn_Leg_Left = 0x2b0; // Size: 8, Type: struct UButton*
			constexpr auto btn_Leg_Right = 0x2b8; // Size: 8, Type: struct UButton*
			constexpr auto btn_Male = 0x2c0; // Size: 8, Type: struct UButton*
			constexpr auto btn_Torso = 0x2c8; // Size: 8, Type: struct UButton*
			constexpr auto Female = 0x2d0; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Male = 0x2d8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto TargetOffset = 0x2e0; // Size: 8, Type: struct FVector2D
			constexpr auto TargetScale = 0x2e8; // Size: 8, Type: struct FVector2D
			constexpr auto TargetHead = 0x2f0; // Size: 4, Type: float
			constexpr auto TargetTorso = 0x2f4; // Size: 4, Type: float
			constexpr auto TargetArmLeft = 0x2f8; // Size: 4, Type: float
			constexpr auto TargetArmRight = 0x2fc; // Size: 4, Type: float
			constexpr auto TargetLegLeft = 0x300; // Size: 4, Type: float
			constexpr auto TargetLegRight = 0x304; // Size: 4, Type: float
			constexpr auto ImageArray = 0x308; // Size: 16, Type: struct TArray<struct UImage*>
			constexpr auto IsMale = 0x318; // Size: 1, Type: bool
	}
} 
