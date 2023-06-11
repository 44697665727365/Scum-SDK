namespace offsets
{
	namespace ULiveLinkSourceSettings
	{
			constexpr auto mode = 0x28; // Size: 1, Type: uint8_t 
			constexpr auto BufferSettings = 0x30; // Size: 88, Type: struct FLiveLinkSourceBufferManagementSettings
			constexpr auto ConnectionString = 0x88; // Size: 16, Type: struct FString
			constexpr auto Factory = 0x98; // Size: 8, Type: ULiveLinkSourceFactory*
	}
} 
