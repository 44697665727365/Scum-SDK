#pragma once 
#include <UI_FoodTooltipPanelFullUse_Structs.h>
 
 
 
class UUI_FoodTooltipPanelFullUse_C
{
public:
	UUI_FoodTooltipPanelFullUse_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UImage(ptr_addr);
	}
	struct UUI_TooltipOverviewTextElement_C GetUI_TooltipOverviewTextElement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UUI_TooltipOverviewTextElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextElement_C GetUI_TooltipOverviewTextElement_C_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UUI_TooltipOverviewTextElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextElement_C GetUI_TooltipOverviewTextElement_C_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UUI_TooltipOverviewTextElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextElement_C GetUI_TooltipOverviewTextElement_C_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UUI_TooltipOverviewTextElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextElement_C GetUI_TooltipOverviewTextElement_C_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UUI_TooltipOverviewTextElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_11() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_12() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_13() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_14() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_15() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_16() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_17() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 920);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_18() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_19() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 936);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_20() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 944);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_21() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 952);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_22() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_23() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 968);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_24() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 976);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_25() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 984);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_26() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 992);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_27() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_28() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_37() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_39() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_40() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_41() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_42() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_43() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_44() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_45() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_46() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextParameterElement_C GetUI_TooltipOverviewTextParameterElement_C_47() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UUI_TooltipOverviewTextParameterElement_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


