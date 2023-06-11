#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_WeaponAmmoDisplayContainer
{
public:
	FExecuteUbergraph_UI_WeaponAmmoDisplayContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FDelegate GetK2Node_CreateDelegate_OutputDelegate() {
		return memory.read<struct FDelegate>(m_addr + 4);
	}
	struct UUMGSequencePlayer GetCallFunc_PlayAnimation_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UUMGSequencePlayer(ptr_addr);
	}
	struct UUMGSequencePlayer GetCallFunc_PlayAnimation_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UUMGSequencePlayer(ptr_addr);
	}
	struct AWeapon GetK2Node_Event_weapon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct AWeapon(ptr_addr);
	}
	float GetK2Node_Event_onScreenDuration() {
		return memory.read<float>(m_addr + 48);
	}
	bool GetK2Node_Event_displayOnCenter() {
		return memory.read<bool>(m_addr + 52);
	}
	struct UTexture2D GetK2Node_Event_iconOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FInit
{
public:
	FInit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AWeapon GetWeapon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AWeapon(ptr_addr);
	}
	float GetonScreenDuration() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetdisplayOnCenter() {
		return memory.read<bool>(m_addr + 12);
	}
	struct UTexture2D GeticonOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};