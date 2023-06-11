namespace offsets
{
	namespace UBasicNotificationDescription
	{
			constexpr auto Message = 0x40; // Size: 24, Type: struct FText
			constexpr auto FontSize = 0x58; // Size: 4, Type: int32_t
			constexpr auto Icon = 0x60; // Size: 8, Type: struct UTexture2D*
			constexpr auto IconSize = 0x68; // Size: 4, Type: int32_t
			constexpr auto Duration = 0x6c; // Size: 4, Type: float
			constexpr auto ping = 0x70; // Size: 1, Type: bool
	}
} 
