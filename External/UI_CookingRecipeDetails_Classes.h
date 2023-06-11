#pragma once 
#include <UI_CookingRecipeDetails_Structs.h>
 
 
 
class UUI_CookingRecipeDetails_C
{
public:
	UUI_CookingRecipeDetails_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_637() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UImage(ptr_addr);
	}
	struct UUI_CookingIngredientInfoWidget_C GetUI_CookingIngredientInfoWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UUI_CookingIngredientInfoWidget_C(ptr_addr);
	}
	struct UUI_CookingIngredientInfoWidget_C GetUI_CookingIngredientInfoWidget_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UUI_CookingIngredientInfoWidget_C(ptr_addr);
	}
	struct UUI_CookingIngredientInfoWidget_C GetUI_CookingIngredientInfoWidget_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UUI_CookingIngredientInfoWidget_C(ptr_addr);
	}
	struct UUI_CookingIngredientInfoWidget_C GetUI_CookingIngredientInfoWidget_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UUI_CookingIngredientInfoWidget_C(ptr_addr);
	}
	struct UUI_CookingIngredientInfoWidget_C GetUI_CookingIngredientInfoWidget_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UUI_CookingIngredientInfoWidget_C(ptr_addr);
	}
	struct UUI_CookingIngredientInfoWidget_C GetUI_CookingIngredientInfoWidget_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UUI_CookingIngredientInfoWidget_C(ptr_addr);
	}
	struct UUI_CookingIngredientInfoWidget_C GetUI_CookingIngredientInfoWidget_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UUI_CookingIngredientInfoWidget_C(ptr_addr);
	}
	struct UUI_CookingIngredientInfoWidget_C GetUI_CookingIngredientInfoWidget_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UUI_CookingIngredientInfoWidget_C(ptr_addr);
	}
	struct UUI_CookingIngredientInfoWidget_C GetUI_CookingIngredientInfoWidget_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UUI_CookingIngredientInfoWidget_C(ptr_addr);
	}
	struct UUI_CookingIngredientInfoWidget_C GetUI_CookingIngredientInfoWidget_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UUI_CookingIngredientInfoWidget_C(ptr_addr);
	}
	struct UUI_PossibleCookingIngredientWidget_C GetUI_PossibleCookingIngredientWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct UUI_PossibleCookingIngredientWidget_C(ptr_addr);
	}
	struct UUI_PossibleCookingIngredientWidget_C GetUI_PossibleCookingIngredientWidget_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UUI_PossibleCookingIngredientWidget_C(ptr_addr);
	}
	struct UUI_PossibleCookingIngredientWidget_C GetUI_PossibleCookingIngredientWidget_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return struct UUI_PossibleCookingIngredientWidget_C(ptr_addr);
	}
	struct UUI_PossibleCookingIngredientWidget_C GetUI_PossibleCookingIngredientWidget_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct UUI_PossibleCookingIngredientWidget_C(ptr_addr);
	}
	struct UUI_PossibleCookingIngredientWidget_C GetUI_PossibleCookingIngredientWidget_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UUI_PossibleCookingIngredientWidget_C(ptr_addr);
	}
	struct UUI_PossibleCookingIngredientWidget_C GetUI_PossibleCookingIngredientWidget_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct UUI_PossibleCookingIngredientWidget_C(ptr_addr);
	}
	struct UUI_PossibleCookingIngredientWidget_C GetUI_PossibleCookingIngredientWidget_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct UUI_PossibleCookingIngredientWidget_C(ptr_addr);
	}
	struct UUI_PossibleCookingIngredientWidget_C GetUI_PossibleCookingIngredientWidget_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 920);
		return struct UUI_PossibleCookingIngredientWidget_C(ptr_addr);
	}
	struct UUI_PossibleCookingIngredientWidget_C GetUI_PossibleCookingIngredientWidget_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct UUI_PossibleCookingIngredientWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


