#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetDLSSModeInformation
{
public:
	FGetDLSSModeInformation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetDLSSMode() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	struct FVector2D GetScreenResolution() {
		return memory.read<struct FVector2D>(m_addr + 4);
	}
	bool GetbIsSupported() {
		return memory.read<bool>(m_addr + 12);
	}
	float GetOptimalScreenPercentage() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetbIsFixedScreenPercentage() {
		return memory.read<bool>(m_addr + 20);
	}
	float GetMinScreenPercentage() {
		return memory.read<float>(m_addr + 24);
	}
	float GetMaxScreenPercentage() {
		return memory.read<float>(m_addr + 28);
	}
	float GetOptimalSharpness() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableDLAA
{
public:
	FEnableDLAA(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDefaultDLSSMode
{
public:
	FGetDefaultDLSSMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSupportedDLSSModes
{
public:
	FGetSupportedDLSSModes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<uint8_t > GetReturnValue() {
		return memory.read<struct TArray<uint8_t >>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDLSSMinimumDriverVersion
{
public:
	FGetDLSSMinimumDriverVersion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMinDriverVersionMajor() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetMinDriverVersionMinor() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDLSSMode
{
public:
	FGetDLSSMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDLSSScreenPercentageRange
{
public:
	FGetDLSSScreenPercentageRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinScreenPercentage() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMaxScreenPercentage() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDLSSSharpness
{
public:
	FGetDLSSSharpness(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDLAAEnabled
{
public:
	FIsDLAAEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDLSSModeSupported
{
public:
	FIsDLSSModeSupported(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetDLSSMode() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDLSSSupported
{
public:
	FIsDLSSSupported(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDLSSSharpness
{
public:
	FSetDLSSSharpness(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSharpness() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FQueryDLSSSupport
{
public:
	FQueryDLSSSupport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDLSSMode
{
public:
	FSetDLSSMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetDLSSMode() {
		return memory.read<uint8_t >(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};