#pragma once 
#include <UI_CookingRecipesPanel_Structs.h>
 
 
 
class UUI_CookingRecipesPanel_C
{
public:
	UUI_CookingRecipesPanel_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_CookingCategoryButton_C Get_btnBBQGrill() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnBBQGrill_Rice() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnCakes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnCasseroles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 920);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnDrinks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnGrilledMeatVegetables() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 936);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnPasta() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 944);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnPizza() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 952);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnRice() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnSalads() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 968);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnSkewers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 976);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnSmokedSlowCooked() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 984);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnSoups() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 992);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnSpitRoasts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnStews() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UUI_CookingCategoryButton_C Get_btnUnderTheBell() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UUI_CookingCategoryButton_C(ptr_addr);
	}
	struct UCookingRecipeCategoryPanel Get_catAll() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UCookingRecipeCategoryPanel(ptr_addr);
	}
	struct UCookingRecipeCategoryPanel Get_catBBQGrill() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UCookingRecipeCategoryPanel(ptr_addr);
	}
	struct UUI_CookingRecipeButton_C GetUI_CookingRecipeButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UUI_CookingRecipeButton_C(ptr_addr);
	}
	struct UUI_CookingRecipeButton_C GetUI_CookingRecipeButton_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UUI_CookingRecipeButton_C(ptr_addr);
	}
	struct UUI_CookingRecipeButton_C GetUI_CookingRecipeButton_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UUI_CookingRecipeButton_C(ptr_addr);
	}
	struct UUI_CookingRecipeButton_C GetUI_CookingRecipeButton_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UUI_CookingRecipeButton_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


