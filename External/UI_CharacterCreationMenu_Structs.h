#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_CharacterCreationMenu
{
public:
	FExecuteUbergraph_UI_CharacterCreationMenu(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayPrisonerEnteringSequence
{
public:
	FPlayPrisonerEnteringSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getbackwards() {
		return memory.read<bool>(m_addr + 0);
	}
	struct TArray<struct ABP_Menu_Design_C> GetCallFunc_GetAllActorsOfClass_OutActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct ABP_Menu_Design_C>(ptr_addr);
	}
	bool GetCallFunc_Array_IsValidIndex_ReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}
	struct ABP_Menu_Design_C GetCallFunc_Array_Get_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct ABP_Menu_Design_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};