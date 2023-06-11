#pragma once 
#include <MIDIDevice_Structs.h>
 
 
 
class UMIDIDeviceInputController
{
public:
	UMIDIDeviceInputController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnMIDINoteOn() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnMIDINoteOff() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}
	struct FMulticastInlineDelegate GetOnMIDIPitchBend() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 72);
	}
	struct FMulticastInlineDelegate GetOnMIDIAftertouch() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 88);
	}
	struct FMulticastInlineDelegate GetOnMIDIControlChange() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 104);
	}
	struct FMulticastInlineDelegate GetOnMIDIProgramChange() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 120);
	}
	struct FMulticastInlineDelegate GetOnMIDIChannelAftertouch() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 136);
	}
	int32_t GetDeviceID() {
		return memory.read<int32_t>(m_addr + 176);
	}
	struct FString GetDeviceName() {
		return memory.read<struct FString>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMIDIDeviceControllerBase
{
public:
	UMIDIDeviceControllerBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMIDIDeviceController
{
public:
	UMIDIDeviceController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnMidiEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	int32_t GetDeviceID() {
		return memory.read<int32_t>(m_addr + 56);
	}
	struct FString GetDeviceName() {
		return memory.read<struct FString>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMIDIDeviceOutputController
{
public:
	UMIDIDeviceOutputController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDeviceID() {
		return memory.read<int32_t>(m_addr + 40);
	}
	struct FString GetDeviceName() {
		return memory.read<struct FString>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMIDIDeviceManager
{
public:
	UMIDIDeviceManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


