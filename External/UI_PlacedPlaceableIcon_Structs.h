#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FInit
{
public:
	FInit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}
	struct FSlateBrush GetCallFunc_MakeBrushFromTexture_ReturnValue() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIcon
{
public:
	FGetIcon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};