#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSelectCandidate
{
public:
	FSelectCandidate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEOSUserInterface_CandidateEOSAccount GetSelectedCandidate() {
		return memory.read<struct FEOSUserInterface_CandidateEOSAccount>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEOSUserInterface_CandidateEOSAccount
{
public:
	FEOSUserInterface_CandidateEOSAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetDisplayName() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEOSWidgetDelegate__DelegateSignature
{
public:
	FEOSWidgetDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupUserInterface
{
public:
	FSetupUserInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEOSUserInterface_SwitchToCrossPlatformAccount_Context GetContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UEOSUserInterface_SwitchToCrossPlatformAccount_Context(ptr_addr);
	}
	struct FString GetEpicAccountName() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSelectChoice
{
public:
	FSelectChoice(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetSelectedChoice() {
		return memory.read<uint8_t >(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSelectedCandidates
{
public:
	FSelectedCandidates(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FEOSUserInterface_CandidateEOSAccount> GetSelectedCandidates() {
		return memory.read<struct TArray<struct FEOSUserInterface_CandidateEOSAccount>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};