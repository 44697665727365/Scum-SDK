#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_NightVisionResourceIndicatorWidget
{
public:
	FExecuteUbergraph_UI_NightVisionResourceIndicatorWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetCallFunc_GetResourceAmountRatio_ReturnValue() {
		return memory.read<float>(m_addr + 4);
	}
	struct FGeometry GetK2Node_Event_MyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 8);
	}
	float GetK2Node_Event_InDeltaTime() {
		return memory.read<float>(m_addr + 64);
	}
	struct UMaterialInstanceDynamic GetCallFunc_GetDynamicMaterial_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTick
{
public:
	FTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	float GetInDeltaTime() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};