#pragma once 
#include <AnimNotify_AkEvent_Structs.h>
 
 
 
class UAnimNotify_AkEvent_C
{
public:
	UAnimNotify_AkEvent_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAttach() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct UAkAudioEvent GetEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UAkAudioEvent(ptr_addr);
	}
	bool GetFollow() {
		return memory.read<bool>(m_addr + 80);
	}
	struct FString GetEventName() {
		return memory.read<struct FString>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


