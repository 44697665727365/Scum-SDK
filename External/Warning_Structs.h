#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_Warning
{
public:
	FExecuteUbergraph_Warning(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FGeometry GetK2Node_Event_MyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 4);
	}
	float GetK2Node_Event_InDeltaTime() {
		return memory.read<float>(m_addr + 60);
	}
	struct UMaterialInstanceDynamic GetCallFunc_GetEffectMaterial_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 72);
	}
	float GetCallFunc_Add_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 76);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 80);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 84);
	}
	struct FLinearColor GetK2Node_MakeStruct_LinearColor() {
		return memory.read<struct FLinearColor>(m_addr + 88);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 104);
	}
	struct FMessageStruct GetCallFunc_Array_Get_Item() {
		return memory.read<struct FMessageStruct>(m_addr + 112);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 160);
	}
	float GetCallFunc_MultiplyByPi_ReturnValue() {
		return memory.read<float>(m_addr + 164);
	}
	float GetCallFunc_Cos_ReturnValue() {
		return memory.read<float>(m_addr + 168);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 172);
	}
	bool GetCallFunc_GreaterEqual_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 176);
	}
	bool GetCallFunc_Array_IsValidIndex_ReturnValue() {
		return memory.read<bool>(m_addr + 177);
	}
	bool GetCallFunc_BooleanAND_ReturnValue() {
		return memory.read<bool>(m_addr + 178);
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