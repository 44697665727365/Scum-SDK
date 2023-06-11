#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOnMIDIProgramChange__DelegateSignature
{
public:
	FOnMIDIProgramChange__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMIDIDeviceInputController GetMIDIDeviceController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMIDIDeviceInputController(ptr_addr);
	}
	int32_t GetTimestamp() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetControlID() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetVelocity() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMIDIEvent__DelegateSignature
{
public:
	FOnMIDIEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMIDIDeviceController GetMIDIDeviceController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMIDIDeviceController(ptr_addr);
	}
	int32_t GetTimestamp() {
		return memory.read<int32_t>(m_addr + 8);
	}
	uint8_t  GetEventType() {
		return memory.read<uint8_t >(m_addr + 12);
	}
	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetControlID() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetVelocity() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetRawEventType() {
		return memory.read<int32_t>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMIDINoteOn__DelegateSignature
{
public:
	FOnMIDINoteOn__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMIDIDeviceInputController GetMIDIDeviceController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMIDIDeviceInputController(ptr_addr);
	}
	int32_t GetTimestamp() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetNote() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetVelocity() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDefaultMIDIOutputDeviceID
{
public:
	FGetDefaultMIDIOutputDeviceID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDeviceID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMIDIControlChange__DelegateSignature
{
public:
	FOnMIDIControlChange__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMIDIDeviceInputController GetMIDIDeviceController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMIDIDeviceInputController(ptr_addr);
	}
	int32_t GetTimestamp() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetType() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMIDINoteOff__DelegateSignature
{
public:
	FOnMIDINoteOff__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMIDIDeviceInputController GetMIDIDeviceController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMIDIDeviceInputController(ptr_addr);
	}
	int32_t GetTimestamp() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetNote() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetVelocity() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMIDIPitchBend__DelegateSignature
{
public:
	FOnMIDIPitchBend__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMIDIDeviceInputController GetMIDIDeviceController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMIDIDeviceInputController(ptr_addr);
	}
	int32_t GetTimestamp() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetPitch() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMIDIAftertouch__DelegateSignature
{
public:
	FOnMIDIAftertouch__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMIDIDeviceInputController GetMIDIDeviceController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMIDIDeviceInputController(ptr_addr);
	}
	int32_t GetTimestamp() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetNote() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetAmount() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindMIDIDevices
{
public:
	FFindMIDIDevices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFoundMIDIDevice> GetOutMIDIDevices() {
		return memory.read<struct TArray<struct FFoundMIDIDevice>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateMIDIDeviceController
{
public:
	FCreateMIDIDeviceController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDeviceID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetMIDIBufferSize() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct UMIDIDeviceController GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMIDIDeviceController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMIDIChannelAftertouch__DelegateSignature
{
public:
	FOnMIDIChannelAftertouch__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMIDIDeviceInputController GetMIDIDeviceController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMIDIDeviceInputController(ptr_addr);
	}
	int32_t GetTimestamp() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetAmount() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMIDIDeviceInfo
{
public:
	FMIDIDeviceInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDeviceID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetDeviceName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	bool GetbIsAlreadyInUse() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetbIsDefaultDevice() {
		return memory.read<bool>(m_addr + 25);
	}

private:
	std::uint64_t m_addr = 0;
};class FFoundMIDIDevice
{
public:
	FFoundMIDIDevice(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDeviceID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetDeviceName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	bool GetbCanReceiveFrom() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetbCanSendTo() {
		return memory.read<bool>(m_addr + 25);
	}
	bool GetbIsAlreadyInUse() {
		return memory.read<bool>(m_addr + 26);
	}
	bool GetbIsDefaultInputDevice() {
		return memory.read<bool>(m_addr + 27);
	}
	bool GetbIsDefaultOutputDevice() {
		return memory.read<bool>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateMIDIDeviceInputController
{
public:
	FCreateMIDIDeviceInputController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDeviceID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetMIDIBufferSize() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct UMIDIDeviceInputController GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMIDIDeviceInputController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMIDIInputDeviceIDByName
{
public:
	FGetMIDIInputDeviceIDByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetDeviceName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetDeviceID() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateMIDIDeviceOutputController
{
public:
	FCreateMIDIDeviceOutputController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDeviceID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UMIDIDeviceOutputController GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMIDIDeviceOutputController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindAllMIDIDeviceInfo
{
public:
	FFindAllMIDIDeviceInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMIDIDeviceInfo> GetOutMIDIInputDevices() {
		return memory.read<struct TArray<struct FMIDIDeviceInfo>>(m_addr + 0);
	}
	struct TArray<struct FMIDIDeviceInfo> GetOutMIDIOutputDevices() {
		return memory.read<struct TArray<struct FMIDIDeviceInfo>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDefaultMIDIInputDeviceID
{
public:
	FGetDefaultMIDIInputDeviceID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDeviceID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMIDIOutputDeviceIDByName
{
public:
	FGetMIDIOutputDeviceIDByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetDeviceName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetDeviceID() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendMIDIChannelAftertouch
{
public:
	FSendMIDIChannelAftertouch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetAmount() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendMIDIControlChange
{
public:
	FSendMIDIControlChange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetType() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendMIDIEvent
{
public:
	FSendMIDIEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetEventType() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t Getdata1() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t Getdata2() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendMIDINoteAftertouch
{
public:
	FSendMIDINoteAftertouch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetNote() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetAmount() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendMIDINoteOff
{
public:
	FSendMIDINoteOff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetNote() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetVelocity() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendMIDINoteOn
{
public:
	FSendMIDINoteOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetNote() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetVelocity() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendMIDIPitchBend
{
public:
	FSendMIDIPitchBend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetPitch() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendMIDIProgramChange
{
public:
	FSendMIDIProgramChange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetChannel() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetProgramNumber() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};