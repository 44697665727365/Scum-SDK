#pragma once 
#include <SoundUtilities_Structs.h>
 
 
 
class USoundSimple
{
public:
	USoundSimple(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSoundVariation> GetVariations() {
		return memory.read<struct TArray<struct FSoundVariation>>(m_addr + 368);
	}
	struct USoundWave GetSoundWave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 384);
		return struct USoundWave(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USoundUtilitiesBPFunctionLibrary
{
public:
	USoundUtilitiesBPFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


