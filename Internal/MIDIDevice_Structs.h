#pragma once 
#include "SDK.h" 
 
 
// DelegateFunction MIDIDevice.OnMIDIProgramChange__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnMIDIProgramChange__DelegateSignature
{
	struct UMIDIDeviceInputController* MIDIDeviceController;  // 0x0(0x8)
	int32_t Timestamp;  // 0x8(0x4)
	int32_t Channel;  // 0xC(0x4)
	int32_t ControlID;  // 0x10(0x4)
	int32_t Velocity;  // 0x14(0x4)

}; 
// DelegateFunction MIDIDevice.OnMIDIEvent__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FOnMIDIEvent__DelegateSignature
{
	struct UMIDIDeviceController* MIDIDeviceController;  // 0x0(0x8)
	int32_t Timestamp;  // 0x8(0x4)
	uint8_t  EventType;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	int32_t Channel;  // 0x10(0x4)
	int32_t ControlID;  // 0x14(0x4)
	int32_t Velocity;  // 0x18(0x4)
	int32_t RawEventType;  // 0x1C(0x4)

}; 
// DelegateFunction MIDIDevice.OnMIDINoteOn__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnMIDINoteOn__DelegateSignature
{
	struct UMIDIDeviceInputController* MIDIDeviceController;  // 0x0(0x8)
	int32_t Timestamp;  // 0x8(0x4)
	int32_t Channel;  // 0xC(0x4)
	int32_t Note;  // 0x10(0x4)
	int32_t Velocity;  // 0x14(0x4)

}; 
// Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIOutputDeviceID
// Size: 0x4(Inherited: 0x0) 
struct FGetDefaultMIDIOutputDeviceID
{
	int32_t DeviceID;  // 0x0(0x4)

}; 
// DelegateFunction MIDIDevice.OnMIDIControlChange__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnMIDIControlChange__DelegateSignature
{
	struct UMIDIDeviceInputController* MIDIDeviceController;  // 0x0(0x8)
	int32_t Timestamp;  // 0x8(0x4)
	int32_t Channel;  // 0xC(0x4)
	int32_t Type;  // 0x10(0x4)
	int32_t Value;  // 0x14(0x4)

}; 
// DelegateFunction MIDIDevice.OnMIDINoteOff__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnMIDINoteOff__DelegateSignature
{
	struct UMIDIDeviceInputController* MIDIDeviceController;  // 0x0(0x8)
	int32_t Timestamp;  // 0x8(0x4)
	int32_t Channel;  // 0xC(0x4)
	int32_t Note;  // 0x10(0x4)
	int32_t Velocity;  // 0x14(0x4)

}; 
// DelegateFunction MIDIDevice.OnMIDIPitchBend__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnMIDIPitchBend__DelegateSignature
{
	struct UMIDIDeviceInputController* MIDIDeviceController;  // 0x0(0x8)
	int32_t Timestamp;  // 0x8(0x4)
	int32_t Channel;  // 0xC(0x4)
	int32_t Pitch;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// DelegateFunction MIDIDevice.OnMIDIAftertouch__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnMIDIAftertouch__DelegateSignature
{
	struct UMIDIDeviceInputController* MIDIDeviceController;  // 0x0(0x8)
	int32_t Timestamp;  // 0x8(0x4)
	int32_t Channel;  // 0xC(0x4)
	int32_t Note;  // 0x10(0x4)
	int32_t Amount;  // 0x14(0x4)

}; 
// Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
// Size: 0x10(Inherited: 0x0) 
struct FFindMIDIDevices
{
	struct TArray<struct FFoundMIDIDevice> OutMIDIDevices;  // 0x0(0x10)

}; 
// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
// Size: 0x10(Inherited: 0x0) 
struct FCreateMIDIDeviceController
{
	int32_t DeviceID;  // 0x0(0x4)
	int32_t MIDIBufferSize;  // 0x4(0x4)
	struct UMIDIDeviceController* ReturnValue;  // 0x8(0x8)

}; 
// DelegateFunction MIDIDevice.OnMIDIChannelAftertouch__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnMIDIChannelAftertouch__DelegateSignature
{
	struct UMIDIDeviceInputController* MIDIDeviceController;  // 0x0(0x8)
	int32_t Timestamp;  // 0x8(0x4)
	int32_t Channel;  // 0xC(0x4)
	int32_t Amount;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct MIDIDevice.MIDIDeviceInfo
// Size: 0x20(Inherited: 0x0) 
struct FMIDIDeviceInfo
{
	int32_t DeviceID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString DeviceName;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bIsAlreadyInUse : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool bIsDefaultDevice : 1;  // 0x19(0x1)
	char pad_26[6];  // 0x1A(0x6)

}; 
// ScriptStruct MIDIDevice.FoundMIDIDevice
// Size: 0x20(Inherited: 0x0) 
struct FFoundMIDIDevice
{
	int32_t DeviceID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString DeviceName;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bCanReceiveFrom : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool bCanSendTo : 1;  // 0x19(0x1)
	char pad_26_1 : 7;  // 0x1A(0x1)
	bool bIsAlreadyInUse : 1;  // 0x1A(0x1)
	char pad_27_1 : 7;  // 0x1B(0x1)
	bool bIsDefaultInputDevice : 1;  // 0x1B(0x1)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bIsDefaultOutputDevice : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController
// Size: 0x10(Inherited: 0x0) 
struct FCreateMIDIDeviceInputController
{
	int32_t DeviceID;  // 0x0(0x4)
	int32_t MIDIBufferSize;  // 0x4(0x4)
	struct UMIDIDeviceInputController* ReturnValue;  // 0x8(0x8)

}; 
// Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName
// Size: 0x18(Inherited: 0x0) 
struct FGetMIDIInputDeviceIDByName
{
	struct FString DeviceName;  // 0x0(0x10)
	int32_t DeviceID;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController
// Size: 0x10(Inherited: 0x0) 
struct FCreateMIDIDeviceOutputController
{
	int32_t DeviceID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UMIDIDeviceOutputController* ReturnValue;  // 0x8(0x8)

}; 
// Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo
// Size: 0x20(Inherited: 0x0) 
struct FFindAllMIDIDeviceInfo
{
	struct TArray<struct FMIDIDeviceInfo> OutMIDIInputDevices;  // 0x0(0x10)
	struct TArray<struct FMIDIDeviceInfo> OutMIDIOutputDevices;  // 0x10(0x10)

}; 
// Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIInputDeviceID
// Size: 0x4(Inherited: 0x0) 
struct FGetDefaultMIDIInputDeviceID
{
	int32_t DeviceID;  // 0x0(0x4)

}; 
// Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName
// Size: 0x18(Inherited: 0x0) 
struct FGetMIDIOutputDeviceIDByName
{
	struct FString DeviceName;  // 0x0(0x10)
	int32_t DeviceID;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
// Size: 0x8(Inherited: 0x0) 
struct FSendMIDIChannelAftertouch
{
	int32_t Channel;  // 0x0(0x4)
	float Amount;  // 0x4(0x4)

}; 
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
// Size: 0xC(Inherited: 0x0) 
struct FSendMIDIControlChange
{
	int32_t Channel;  // 0x0(0x4)
	int32_t Type;  // 0x4(0x4)
	int32_t Value;  // 0x8(0x4)

}; 
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
// Size: 0x10(Inherited: 0x0) 
struct FSendMIDIEvent
{
	uint8_t  EventType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t Channel;  // 0x4(0x4)
	int32_t data1;  // 0x8(0x4)
	int32_t data2;  // 0xC(0x4)

}; 
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
// Size: 0xC(Inherited: 0x0) 
struct FSendMIDINoteAftertouch
{
	int32_t Channel;  // 0x0(0x4)
	int32_t Note;  // 0x4(0x4)
	float Amount;  // 0x8(0x4)

}; 
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
// Size: 0xC(Inherited: 0x0) 
struct FSendMIDINoteOff
{
	int32_t Channel;  // 0x0(0x4)
	int32_t Note;  // 0x4(0x4)
	int32_t Velocity;  // 0x8(0x4)

}; 
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
// Size: 0xC(Inherited: 0x0) 
struct FSendMIDINoteOn
{
	int32_t Channel;  // 0x0(0x4)
	int32_t Note;  // 0x4(0x4)
	int32_t Velocity;  // 0x8(0x4)

}; 
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
// Size: 0x8(Inherited: 0x0) 
struct FSendMIDIPitchBend
{
	int32_t Channel;  // 0x0(0x4)
	int32_t Pitch;  // 0x4(0x4)

}; 
// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
// Size: 0x8(Inherited: 0x0) 
struct FSendMIDIProgramChange
{
	int32_t Channel;  // 0x0(0x4)
	int32_t ProgramNumber;  // 0x4(0x4)

}; 
