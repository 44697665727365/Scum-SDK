#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSafeText
{
public:
	FSafeText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInternal() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetBase() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetShift() {
		return memory.read<struct FString>(m_addr + 32);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSafeVector4D
{
public:
	FSafeVector4D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInternal() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetTrueX() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetTrueY() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetTrueZ() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetTrueW() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetShiftX() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetShiftY() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetShiftZ() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct FString GetShiftW() {
		return memory.read<struct FString>(m_addr + 128);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FSafeColor
{
public:
	FSafeColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInternal() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetTrueR() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetTrueG() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetTrueB() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetTrueA() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetShiftR() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetShiftG() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetShiftB() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct FString GetShiftA() {
		return memory.read<struct FString>(m_addr + 128);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FSafeVector2D
{
public:
	FSafeVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInternal() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetTrueX() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetTrueY() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetShiftX() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetShiftY() {
		return memory.read<struct FString>(m_addr + 64);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FSafeFloat
{
public:
	FSafeFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInternal() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetBase() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetShift() {
		return memory.read<struct FString>(m_addr + 32);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSafeName
{
public:
	FSafeName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInternal() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetBase() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetShift() {
		return memory.read<struct FString>(m_addr + 32);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSafeBool
{
public:
	FSafeBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInternal() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetBase() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetShift() {
		return memory.read<struct FString>(m_addr + 32);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSafeTransform
{
public:
	FSafeTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSafeVector3D GetScale() {
		return memory.read<struct FSafeVector3D>(m_addr + 0);
	}
	struct FSafeVector3D Getposition() {
		return memory.read<struct FSafeVector3D>(m_addr + 120);
	}
	struct FSafeRotator GetRotation() {
		return memory.read<struct FSafeRotator>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FSafeRotator
{
public:
	FSafeRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInternal() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetTrueX() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetTrueY() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetTrueZ() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetShiftX() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetShiftY() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetShiftZ() {
		return memory.read<struct FString>(m_addr + 96);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FSafeVector3D
{
public:
	FSafeVector3D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInternal() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetTrueX() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetTrueY() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetTrueZ() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetShiftX() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetShiftY() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetShiftZ() {
		return memory.read<struct FString>(m_addr + 96);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FSafeByte
{
public:
	FSafeByte(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInternal() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetBase() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetShift() {
		return memory.read<struct FString>(m_addr + 32);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSafeInt
{
public:
	FSafeInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInternal() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetBase() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetShift() {
		return memory.read<struct FString>(m_addr + 32);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSafeString
{
public:
	FSafeString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInternal() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetBase() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetShift() {
		return memory.read<struct FString>(m_addr + 32);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};