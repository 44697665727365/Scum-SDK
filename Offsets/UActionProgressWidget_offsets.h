namespace offsets
{
	namespace UActionProgressWidget
	{
			constexpr auto ActionProgressFinishedEvent = 0x260; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ActionProgressCancelledEvent = 0x270; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CanCancel = 0x280; // Size: 1, Type: bool
			constexpr auto _currentTime = 0x28c; // Size: 4, Type: float
			constexpr auto _duration = 0x290; // Size: 4, Type: float
			constexpr auto _manualMode = 0x294; // Size: 1, Type: bool
	}
} 
