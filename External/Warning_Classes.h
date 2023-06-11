#pragma once 
#include <Warning_Structs.h>
 
 
 
class UWarning_C
{
public:
	UWarning_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 624);
	}
	struct URetainerBox GetRetainerBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct URetainerBox(ptr_addr);
	}
	struct UTextBlock GetText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UTextBlock(ptr_addr);
	}
	bool Get_shouldShake() {
		return memory.read<bool>(m_addr + 648);
	}
	float Get_shakeTime() {
		return memory.read<float>(m_addr + 652);
	}
	float Get_shakeLength() {
		return memory.read<float>(m_addr + 656);
	}
	bool Get_shouldFade() {
		return memory.read<bool>(m_addr + 660);
	}
	float Get_fadeLength() {
		return memory.read<float>(m_addr + 664);
	}
	float Get_fadeDelay() {
		return memory.read<float>(m_addr + 668);
	}
	bool Get_isReadyForNextMessage() {
		return memory.read<bool>(m_addr + 672);
	}

private:
	std::uint64_t m_addr = 0;
};


