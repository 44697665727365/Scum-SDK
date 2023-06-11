#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_MissionResultWidget
{
public:
	FExecuteUbergraph_UI_MissionResultWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUMGSequencePlayer GetCallFunc_PlayAnimation_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUMGSequencePlayer(ptr_addr);
	}
	struct UWidgetAnimation GetK2Node_Event_Animation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UWidgetAnimation(ptr_addr);
	}
	bool GetCallFunc_EqualEqual_ObjectObject_ReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAnimationFinished
{
public:
	FOnAnimationFinished(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};