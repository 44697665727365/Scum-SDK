#pragma once 
#include <UI_MicInputIndicator_Structs.h>
 
 
 
class UUI_MicInputIndicator_C
{
public:
	UUI_MicInputIndicator_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_33() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UImage(ptr_addr);
	}
	struct UOverlay GetOverlay_28() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UOverlay(ptr_addr);
	}
	struct UImage GetRing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UImage(ptr_addr);
	}
	struct UOverlay GetRingsOverlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UOverlay(ptr_addr);
	}
	struct TArray<struct UWidget> Get_rings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct TArray<struct UWidget>(ptr_addr);
	}
	struct TArray<float> Get_scales() {
		return memory.read<struct TArray<float>>(m_addr + 704);
	}
	struct UVoiceChatComponent GetVoiceChatComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UVoiceChatComponent(ptr_addr);
	}
	struct APawn GetOwningActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


