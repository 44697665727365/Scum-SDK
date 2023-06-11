#pragma once 
#include <OnlineSubsystemOculus_Structs.h>
 
 
 
class UOculusIdentityCallbackProxy
{
public:
	UOculusIdentityCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOculusFindSessionsCallbackProxy
{
public:
	UOculusFindSessionsCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOculusCreateSessionCallbackProxy
{
public:
	UOculusCreateSessionCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOculusEntitlementCallbackProxy
{
public:
	UOculusEntitlementCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOculusNetConnection
{
public:
	UOculusNetConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UOculusUpdateSessionCallbackProxy
{
public:
	UOculusUpdateSessionCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOculusNetDriver
{
public:
	UOculusNetDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


