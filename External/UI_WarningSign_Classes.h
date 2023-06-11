#pragma once 
#include <UI_WarningSign_Structs.h>
 
 
 
class UUI_WarningSign_C
{
public:
	UUI_WarningSign_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 616);
	}
	struct UImage GetMainImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct URetainerBox GetMainRetainerBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct URetainerBox(ptr_addr);
	}
	float GetShowDuration() {
		return memory.read<float>(m_addr + 640);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 644);
	}
	float GetTimeScale() {
		return memory.read<float>(m_addr + 648);
	}

private:
	std::uint64_t m_addr = 0;
};


