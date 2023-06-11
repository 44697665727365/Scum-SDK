#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOnBlendOut_BD830BA54751BA88132EE8B90C969374
{
public:
	FOnBlendOut_BD830BA54751BA88132EE8B90C969374(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNotifyName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_BP_ChristmasGhost
{
public:
	FExecuteUbergraph_BP_ChristmasGhost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FName GetK2Node_CustomEvent_NotifyName_4() {
		return memory.read<struct FName>(m_addr + 4);
	}
	struct FDelegate GetK2Node_CreateDelegate_OutputDelegate() {
		return memory.read<struct FDelegate>(m_addr + 12);
	}
	struct FName GetK2Node_CustomEvent_NotifyName_3() {
		return memory.read<struct FName>(m_addr + 28);
	}
	struct FDelegate GetK2Node_CreateDelegate_OutputDelegate_2() {
		return memory.read<struct FDelegate>(m_addr + 36);
	}
	struct FName GetK2Node_CustomEvent_NotifyName_2() {
		return memory.read<struct FName>(m_addr + 52);
	}
	struct FDelegate GetK2Node_CreateDelegate_OutputDelegate_3() {
		return memory.read<struct FDelegate>(m_addr + 60);
	}
	struct FName GetK2Node_CustomEvent_NotifyName() {
		return memory.read<struct FName>(m_addr + 76);
	}
	struct FDelegate GetK2Node_CreateDelegate_OutputDelegate_4() {
		return memory.read<struct FDelegate>(m_addr + 84);
	}
	struct FName GetTemp_name_Variable() {
		return memory.read<struct FName>(m_addr + 100);
	}
	struct FName GetK2Node_CustomEvent_NotifyName_5() {
		return memory.read<struct FName>(m_addr + 108);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 116);
	}
	int32_t GetCallFunc_RandomInteger_ReturnValue() {
		return memory.read<int32_t>(m_addr + 120);
	}
	bool GetCallFunc_Greater_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 124);
	}
	struct USkeletalMesh GetCallFunc_Array_Get_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct USkeletalMesh(ptr_addr);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 136);
	}
	struct FDelegate GetK2Node_CreateDelegate_OutputDelegate_5() {
		return memory.read<struct FDelegate>(m_addr + 140);
	}
	struct UPlayMontageCallbackProxy GetCallFunc_CreateProxyObjectForPlayMontage_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UPlayMontageCallbackProxy(ptr_addr);
	}
	bool GetCallFunc_IsValid_ReturnValue_2() {
		return memory.read<bool>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCompleted_BD830BA54751BA88132EE8B90C969374
{
public:
	FOnCompleted_BD830BA54751BA88132EE8B90C969374(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNotifyName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNotifyBegin_BD830BA54751BA88132EE8B90C969374
{
public:
	FOnNotifyBegin_BD830BA54751BA88132EE8B90C969374(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNotifyName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnInterrupted_BD830BA54751BA88132EE8B90C969374
{
public:
	FOnInterrupted_BD830BA54751BA88132EE8B90C969374(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNotifyName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNotifyEnd_BD830BA54751BA88132EE8B90C969374
{
public:
	FOnNotifyEnd_BD830BA54751BA88132EE8B90C969374(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetNotifyName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};