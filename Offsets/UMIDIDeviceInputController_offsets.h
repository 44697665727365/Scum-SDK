namespace offsets
{
	namespace UMIDIDeviceInputController
	{
			constexpr auto OnMIDINoteOn = 0x28; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMIDINoteOff = 0x38; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMIDIPitchBend = 0x48; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMIDIAftertouch = 0x58; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMIDIControlChange = 0x68; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMIDIProgramChange = 0x78; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMIDIChannelAftertouch = 0x88; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto DeviceID = 0xb0; // Size: 4, Type: int32_t
			constexpr auto DeviceName = 0xb8; // Size: 16, Type: struct FString
	}
} 
