namespace offsets
{
	namespace UTextRenderComponent
	{
			constexpr auto Text = 0x450; // Size: 24, Type: struct FText
			constexpr auto TextMaterial = 0x468; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto Font = 0x470; // Size: 8, Type: struct UFont*
			constexpr auto HorizontalAlignment = 0x478; // Size: 1, Type: char EHorizTextAligment
			constexpr auto VerticalAlignment = 0x479; // Size: 1, Type: char EVerticalTextAligment
			constexpr auto TextRenderColor = 0x47c; // Size: 4, Type: struct FColor
			constexpr auto XScale = 0x480; // Size: 4, Type: float
			constexpr auto YScale = 0x484; // Size: 4, Type: float
			constexpr auto WorldSize = 0x488; // Size: 4, Type: float
			constexpr auto InvDefaultSize = 0x48c; // Size: 4, Type: float
			constexpr auto HorizSpacingAdjust = 0x490; // Size: 4, Type: float
			constexpr auto VertSpacingAdjust = 0x494; // Size: 4, Type: float
			constexpr auto bAlwaysRenderAsText = 0x498; // Size: 1, Type: char
	}
} 
