#pragma once 
#include <UI_Trader_BuyPanel_Structs.h>
 
 
 
class UUI_Trader_BuyPanel_C
{
public:
	UUI_Trader_BuyPanel_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1144);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnAmmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1152);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnArmor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnArrows() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1168);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnAssault() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1176);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnBallisticVests() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1184);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnBaseBuildingExpansion() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1192);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnBayonets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnBicycles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnBlunt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnBolts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1224);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnBows() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1232);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnBullets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1240);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnC4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1248);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCityBike() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1256);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianBags() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1264);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianClothing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1272);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianFootwear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianGloves() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianHeadwear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianHeadwearCaps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianHeadwearEyewear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianHeadwearHelmets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianHeadwearMasks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianPants() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianPantsLong() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianPantsShort() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianTops() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianTopsJackets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianTopsLongSleeves() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianTopsShirts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCivilianUnderwear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnClothing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCombatHelmets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCraftingMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCrossbows() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnCutting() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnDetonators() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnDirtbikeParts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnExplosives() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFarming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFarmingTools() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFertilizers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFlashlights() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFood() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFoodCooked() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFoodDrinks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFoodFresh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFoodFreshFruit() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFoodFreshMeat() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFoodFreshMushrooms() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFoodFreshVegetables() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFoodProcessed() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnFourWheels() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnGhillieWraps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnGrenadeLaunchers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnGrenades() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnHandguns() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnHelmets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnLaikaParts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnLMGs() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMagazines() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMedical() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMeleeWeapons() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryBags() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryBagsAssault() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryBagsHiking() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryBagsWaist() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryBoots() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryBootsAssault() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryBootsHiking() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryClothing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryGloves() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryHeadwear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryHeadwearBalaclava() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1736);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryHeadwearCaps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryHeadwearGasMasks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1752);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryHeadwearGoggles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryHelmets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1768);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryHolsters() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryPants() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1784);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryPantsCargo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1792);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryPantsGhillie() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1800);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryPantsShorts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1808);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryPantsTactical() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1816);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryScarfs() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1824);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryTops() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1832);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryTopsGhillies() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1840);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryTopsJackets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1848);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryTopsShirts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1856);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMilitaryTopsSweaters() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1864);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMines() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1872);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMiscellaneous() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1880);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMOtorbikes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1888);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMotorboats() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1896);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnMountainBike() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1904);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnPesticides() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1912);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnPiercing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1920);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnPoliceVests() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1928);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnQuivers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1936);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnRafts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1944);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnRails() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1952);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnRangedWeapons() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1960);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnRifles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1968);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnScopes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1976);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnSeeds() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1984);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnServices() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1992);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnShotguns() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2000);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnSights() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2008);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnSMGs() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2016);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnStabproofVests() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2024);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnStorage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2032);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnSUP() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2040);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnSuppressors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2048);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnTacticalVests() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2056);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnTools() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2064);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnToolsFishing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2072);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnToolsLockpicking() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2080);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnToolsRepair() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2088);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnToolsRepairOther() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2096);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnToolsRepairVehicle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2104);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnTwoWheels() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2112);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnVests() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2120);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnVintageHelmets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2128);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnWeaponAccessories() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2136);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnWeaponParts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2144);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UUI_Trader_ItemCategoryButton_C Get_btnWolfsWagenParts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2152);
		return struct UUI_Trader_ItemCategoryButton_C(ptr_addr);
	}
	struct UWrapBox Get_cat2wdVehicles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2160);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_cat4wdVehicles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2168);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catAmmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2176);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catArmor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2184);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catArmorHelmets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2192);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catArmorVests() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2200);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catBicycles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2208);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catClothing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2216);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catClothingCivilian() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2224);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catClothingCivilianHeadwear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2232);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catClothingCivilianPants() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2240);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catClothingCivilianTops() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2248);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catClothingMilitary() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2256);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catClothingMilitaryBags() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2264);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catClothingMilitaryBoots() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2272);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catClothingMilitaryHeadwear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2280);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catClothingMilitaryPants() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2288);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catClothingMilitaryTops() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2296);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catExplosives() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2304);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catFarming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2312);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catFood() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2320);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catFoodFresh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2328);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catMeleeWeapons() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2336);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catMotorbikes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2344);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catRangedWeapons() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2352);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catTools() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2360);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catToolsRepair() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2368);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catVehiclesAndItems() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2376);
		return struct UWrapBox(ptr_addr);
	}
	struct UWrapBox Get_catWeaponAccessories() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2384);
		return struct UWrapBox(ptr_addr);
	}
	struct UScrollBox Get_mainScrollBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2392);
		return struct UScrollBox(ptr_addr);
	}
	struct UImage GetImage_32() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2400);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


