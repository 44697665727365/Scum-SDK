#pragma once 
#include <UI_CharacterCreationMenu_Structs.h>
 
 
 
class UUI_CharacterCreationMenu_C
{
public:
	UUI_CharacterCreationMenu_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1248);
	}
	struct UImage GetBackgroundTint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1256);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1264);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1272);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_91() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_93() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UImage(ptr_addr);
	}
	struct UUI_CC_NonSelectableText_C GetSkillPointDisplayBonus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UUI_CC_NonSelectableText_C(ptr_addr);
	}
	struct UTextBlock GetT_AttributeConfirmation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetT_SkillConfirmation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


