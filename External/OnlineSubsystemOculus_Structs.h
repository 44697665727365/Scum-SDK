#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FFindMatchmakingSessions
{
public:
	FFindMatchmakingSessions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxResults() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetOculusMatchmakingPool() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct UOculusFindSessionsCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UOculusFindSessionsCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateSession
{
public:
	FCreateSession(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPublicConnections() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetOculusMatchmakingPool() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct UOculusCreateSessionCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UOculusCreateSessionCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOculusIdentitySuccessResult__DelegateSignature
{
public:
	FOculusIdentitySuccessResult__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOculusId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetOculusName() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FVerifyEntitlement
{
public:
	FVerifyEntitlement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UOculusEntitlementCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UOculusEntitlementCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindModeratedSessions
{
public:
	FFindModeratedSessions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxResults() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UOculusFindSessionsCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UOculusFindSessionsCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOculusIdentity
{
public:
	FGetOculusIdentity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLocalUserNum() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UOculusIdentityCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UOculusIdentityCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSessionEnqueue
{
public:
	FSetSessionEnqueue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbShouldEnqueueInMatchmakingPool() {
		return memory.read<bool>(m_addr + 0);
	}
	struct UOculusUpdateSessionCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UOculusUpdateSessionCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};