#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FRigUnit_LiveLinkBase
{
public:
	FRigUnit_LiveLinkBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_LiveLinkEvaluteFrameTransform
{
public:
	FRigUnit_LiveLinkEvaluteFrameTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSubjectName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	bool GetbDrawDebug() {
		return memory.read<bool>(m_addr + 16);
	}
	struct FLinearColor GetDebugColor() {
		return memory.read<struct FLinearColor>(m_addr + 20);
	}
	struct FTransform GetDebugDrawOffset() {
		return memory.read<struct FTransform>(m_addr + 48);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_LiveLinkGetTransformByName
{
public:
	FRigUnit_LiveLinkGetTransformByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubjectFrameHandle GetSubjectFrame() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 8);
	}
	struct FName GetTransformName() {
		return memory.read<struct FName>(m_addr + 32);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 40);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_LiveLinkGetParameterValueByName
{
public:
	FRigUnit_LiveLinkGetParameterValueByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubjectFrameHandle GetSubjectFrame() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 8);
	}
	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 32);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_LiveLinkEvaluteFrameAnimation
{
public:
	FRigUnit_LiveLinkEvaluteFrameAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSubjectName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	bool GetbDrawDebug() {
		return memory.read<bool>(m_addr + 16);
	}
	struct FLinearColor GetDebugColor() {
		return memory.read<struct FLinearColor>(m_addr + 20);
	}
	struct FTransform GetDebugDrawOffset() {
		return memory.read<struct FTransform>(m_addr + 48);
	}
	struct FSubjectFrameHandle GetSubjectFrame() {
		return memory.read<struct FSubjectFrameHandle>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};