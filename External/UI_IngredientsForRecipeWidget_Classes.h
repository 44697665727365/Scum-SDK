#pragma once 
#include <UI_IngredientsForRecipeWidget_Structs.h>
 
 
 
class UUI_IngredientsForRecipeWidget_C
{
public:
	UUI_IngredientsForRecipeWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_InteractiveIngredientWidget_C GetUI_InteractiveIngredientWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UUI_InteractiveIngredientWidget_C(ptr_addr);
	}
	struct UUI_InteractiveIngredientWidget_C GetUI_InteractiveIngredientWidget_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UUI_InteractiveIngredientWidget_C(ptr_addr);
	}
	struct UUI_InteractiveIngredientWidget_C GetUI_InteractiveIngredientWidget_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UUI_InteractiveIngredientWidget_C(ptr_addr);
	}
	struct UUI_InteractiveIngredientWidget_C GetUI_InteractiveIngredientWidget_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UUI_InteractiveIngredientWidget_C(ptr_addr);
	}
	struct UUI_InteractiveIngredientWidget_C GetUI_InteractiveIngredientWidget_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UUI_InteractiveIngredientWidget_C(ptr_addr);
	}
	struct UUI_InteractiveIngredientWidget_C GetUI_InteractiveIngredientWidget_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UUI_InteractiveIngredientWidget_C(ptr_addr);
	}
	struct UUI_InteractiveIngredientWidget_C GetUI_InteractiveIngredientWidget_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UUI_InteractiveIngredientWidget_C(ptr_addr);
	}
	struct UUI_InteractiveIngredientWidget_C GetUI_InteractiveIngredientWidget_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UUI_InteractiveIngredientWidget_C(ptr_addr);
	}
	struct UUI_InteractiveIngredientWidget_C GetUI_InteractiveIngredientWidget_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UUI_InteractiveIngredientWidget_C(ptr_addr);
	}
	struct UUI_InteractiveIngredientWidget_C GetUI_InteractiveIngredientWidget_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UUI_InteractiveIngredientWidget_C(ptr_addr);
	}
	struct UUI_InteractiveIngredientWidget_C GetUI_InteractiveIngredientWidget_11() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UUI_InteractiveIngredientWidget_C(ptr_addr);
	}
	struct UUI_InteractiveIngredientWidget_C GetUI_InteractiveIngredientWidget_12() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UUI_InteractiveIngredientWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


