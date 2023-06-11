#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSetDifficultyVisuals
{
public:
	FSetDifficultyVisuals(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetDifficulty() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	bool GetK2Node_SwitchEnum_CmpSuccess() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_UI_LockpickingMinigame
{
public:
	FExecuteUbergraph_UI_LockpickingMinigame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	uint8_t  GetK2Node_Event_value() {
		return memory.read<uint8_t >(m_addr + 4);
	}
	struct FGeometry GetK2Node_Event_MyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 8);
	}
	float GetK2Node_Event_InDeltaTime() {
		return memory.read<float>(m_addr + 64);
	}
	float GetCallFunc_GetRemainingTime_ReturnValue() {
		return memory.read<float>(m_addr + 68);
	}
	float GetCallFunc_GetDuration_ReturnValue() {
		return memory.read<float>(m_addr + 72);
	}
	int32_t GetCallFunc_Round_ReturnValue() {
		return memory.read<int32_t>(m_addr + 76);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 80);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 88);
	}
	struct UMaterialInstanceDynamic GetCallFunc_GetDynamicMaterial_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	int32_t GetCallFunc_GetLockpicksCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 120);
	}
	bool GetCallFunc_EqualEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 124);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_2() {
		return memory.read<struct FText>(m_addr + 128);
	}
	int32_t GetCallFunc_GetTensionToolCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 152);
	}
	bool GetCallFunc_EqualEqual_IntInt_ReturnValue_2() {
		return memory.read<bool>(m_addr + 156);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_3() {
		return memory.read<struct FText>(m_addr + 160);
	}
	struct UUMGSequencePlayer GetCallFunc_PlayAnimation_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UUMGSequencePlayer(ptr_addr);
	}
	struct UUMGSequencePlayer GetCallFunc_PlayAnimation_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct UUMGSequencePlayer(ptr_addr);
	}
	struct UUMGSequencePlayer GetCallFunc_PlayAnimation_ReturnValue_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UUMGSequencePlayer(ptr_addr);
	}
	struct UUMGSequencePlayer GetCallFunc_PlayAnimation_ReturnValue_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct UUMGSequencePlayer(ptr_addr);
	}
	int32_t GetCallFunc_GetFamePoints_ReturnValue() {
		return memory.read<int32_t>(m_addr + 216);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_4() {
		return memory.read<struct FText>(m_addr + 224);
	}
	struct UUMGSequencePlayer GetCallFunc_PlayAnimation_ReturnValue_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct UUMGSequencePlayer(ptr_addr);
	}
	struct UUMGSequencePlayer GetCallFunc_PlayAnimation_ReturnValue_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct UUMGSequencePlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLockPickingDifficulty
{
public:
	FSetLockPickingDifficulty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetValue() {
		return memory.read<uint8_t >(m_addr + 0);
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