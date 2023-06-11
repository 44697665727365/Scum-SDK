#pragma once 
#include <ObjectiveContainer_Structs.h>
 
 
 
class UObjectiveContainer_C
{
public:
	UObjectiveContainer_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 632);
	}
	struct FMulticastInlineDelegate GetObjectiveCompleted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 640);
	}

private:
	std::uint64_t m_addr = 0;
};


