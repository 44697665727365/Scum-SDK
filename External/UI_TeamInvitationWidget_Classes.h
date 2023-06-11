#pragma once 
#include <UI_TeamInvitationWidget_Structs.h>
 
 
 
class UUI_TeamInvitationWidget_C
{
public:
	UUI_TeamInvitationWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 656);
	}
	struct UTextBlock Get_flagWarningMessage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UTextBlock(ptr_addr);
	}
	struct UButton GetAccept() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UButton(ptr_addr);
	}
	struct UButton GetDecline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UButton(ptr_addr);
	}
	struct UTextBlock GetInvitationMessage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTimerText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UTextBlock(ptr_addr);
	}
	struct FTimerHandle GetTimeoutTimer() {
		return memory.read<struct FTimerHandle>(m_addr + 704);
	}

private:
	std::uint64_t m_addr = 0;
};


