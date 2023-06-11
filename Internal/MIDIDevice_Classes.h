#pragma once 
#include <MIDIDevice_Structs.h>
 
 
 
// Class MIDIDevice.MIDIDeviceInputController
// Size: 0xD8(Inherited: 0x28) 
struct UMIDIDeviceInputController : public UMIDIDeviceControllerBase
{
	struct FMulticastInlineDelegate OnMIDINoteOn;  // 0x28(0x10)
	struct FMulticastInlineDelegate OnMIDINoteOff;  // 0x38(0x10)
	struct FMulticastInlineDelegate OnMIDIPitchBend;  // 0x48(0x10)
	struct FMulticastInlineDelegate OnMIDIAftertouch;  // 0x58(0x10)
	struct FMulticastInlineDelegate OnMIDIControlChange;  // 0x68(0x10)
	struct FMulticastInlineDelegate OnMIDIProgramChange;  // 0x78(0x10)
	struct FMulticastInlineDelegate OnMIDIChannelAftertouch;  // 0x88(0x10)
	char pad_152[24];  // 0x98(0x18)
	int32_t DeviceID;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)
	struct FString DeviceName;  // 0xB8(0x10)
	char pad_200[16];  // 0xC8(0x10)

}; 



// Class MIDIDevice.MIDIDeviceControllerBase
// Size: 0x28(Inherited: 0x28) 
struct UMIDIDeviceControllerBase : public UObject
{

}; 



// Class MIDIDevice.MIDIDeviceController
// Size: 0x60(Inherited: 0x28) 
struct UMIDIDeviceController : public UMIDIDeviceControllerBase
{
	struct FMulticastInlineDelegate OnMidiEvent;  // 0x28(0x10)
	int32_t DeviceID;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)
	struct FString DeviceName;  // 0x40(0x10)
	char pad_80[16];  // 0x50(0x10)

}; 



// Class MIDIDevice.MIDIDeviceOutputController
// Size: 0x48(Inherited: 0x28) 
struct UMIDIDeviceOutputController : public UMIDIDeviceControllerBase
{
	int32_t DeviceID;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct FString DeviceName;  // 0x30(0x10)
	char pad_64[8];  // 0x40(0x8)

	void SendMIDIProgramChange(int32_t Channel, int32_t ProgramNumber); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
	void SendMIDIPitchBend(int32_t Channel, int32_t Pitch); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
	void SendMIDINoteOn(int32_t Channel, int32_t Note, int32_t Velocity); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
	void SendMIDINoteOff(int32_t Channel, int32_t Note, int32_t Velocity); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
	void SendMIDINoteAftertouch(int32_t Channel, int32_t Note, float Amount); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
	void SendMIDIEvent(uint8_t  EventType, int32_t Channel, int32_t data1, int32_t data2); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
	void SendMIDIControlChange(int32_t Channel, int32_t Type, int32_t Value); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
	void SendMIDIChannelAftertouch(int32_t Channel, float Amount); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
}; 



// Class MIDIDevice.MIDIDeviceManager
// Size: 0x28(Inherited: 0x28) 
struct UMIDIDeviceManager : public UBlueprintFunctionLibrary
{

	void GetMIDIOutputDeviceIDByName(struct FString DeviceName, int32_t& DeviceID); // Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName
	void GetMIDIInputDeviceIDByName(struct FString DeviceName, int32_t& DeviceID); // Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName
	void GetDefaultMIDIOutputDeviceID(int32_t& DeviceID); // Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIOutputDeviceID
	void GetDefaultMIDIInputDeviceID(int32_t& DeviceID); // Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIInputDeviceID
	void FindMIDIDevices(struct TArray<struct FFoundMIDIDevice>& OutMIDIDevices); // Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
	void FindAllMIDIDeviceInfo(struct TArray<struct FMIDIDeviceInfo>& OutMIDIInputDevices, struct TArray<struct FMIDIDeviceInfo>& OutMIDIOutputDevices); // Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo
	struct UMIDIDeviceOutputController* CreateMIDIDeviceOutputController(int32_t DeviceID); // Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController
	struct UMIDIDeviceInputController* CreateMIDIDeviceInputController(int32_t DeviceID, int32_t MIDIBufferSize); // Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController
	struct UMIDIDeviceController* CreateMIDIDeviceController(int32_t DeviceID, int32_t MIDIBufferSize); // Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
}; 



