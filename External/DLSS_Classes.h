#pragma once 
#include <DLSS_Structs.h>
 
 
 
class UDLSSSettings
{
public:
	UDLSSSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnableDLSSD3D12() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbEnableDLSSD3D11() {
		return memory.read<bool>(m_addr + 41);
	}
	bool GetbEnableDLSSVulkan() {
		return memory.read<bool>(m_addr + 42);
	}
	bool GetbEnableDLSSInEditorViewports() {
		return memory.read<bool>(m_addr + 43);
	}
	bool GetbEnableScreenpercentageManipulationInDLSSEditorViewports() {
		return memory.read<bool>(m_addr + 44);
	}
	bool GetbEnableDLSSInPlayInEditorViewports() {
		return memory.read<bool>(m_addr + 45);
	}
	bool GetbShowDLSSSDebugOnScreenMessages() {
		return memory.read<bool>(m_addr + 46);
	}
	struct FString GetGenericDLSSBinaryPath() {
		return memory.read<struct FString>(m_addr + 48);
	}
	bool GetbGenericDLSSBinaryExists() {
		return memory.read<bool>(m_addr + 64);
	}
	uint32_t GetNVIDIANGXApplicationId() {
		return memory.read<uint32_t>(m_addr + 68);
	}
	struct FString GetCustomDLSSBinaryPath() {
		return memory.read<struct FString>(m_addr + 72);
	}
	bool GetbCustomDLSSBinaryExists() {
		return memory.read<bool>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDLSSOverrideSettings
{
public:
	UDLSSOverrideSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetEnableDLSSInEditorViewportsOverride() {
		return memory.read<uint8_t >(m_addr + 40);
	}
	uint8_t  GetEnableScreenpercentageManipulationInDLSSEditorViewportsOverride() {
		return memory.read<uint8_t >(m_addr + 41);
	}
	uint8_t  GetEnableDLSSInPlayInEditorViewportsOverride() {
		return memory.read<uint8_t >(m_addr + 42);
	}
	bool GetbShowDLSSIncompatiblePluginsToolsWarnings() {
		return memory.read<bool>(m_addr + 43);
	}
	uint8_t  GetShowDLSSSDebugOnScreenMessages() {
		return memory.read<uint8_t >(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};


