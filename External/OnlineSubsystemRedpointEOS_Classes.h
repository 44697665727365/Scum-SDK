#pragma once 
#include <OnlineSubsystemRedpointEOS_Structs.h>
 
 
 
class UEOSNetConnection
{
public:
	UEOSNetConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEOSControlChannel
{
public:
	UEOSControlChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context
{
public:
	UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEOSIpNetConnection
{
public:
	UEOSIpNetConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEOSNetDriver
{
public:
	UEOSNetDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEOSSubsystem
{
public:
	UEOSSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnAddWidgetToViewport() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnRemoveWidgetFromViewport() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEOSUserInterface_EnterDevicePinCode
{
public:
	UEOSUserInterface_EnterDevicePinCode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEOSUserInterface_EnterDevicePinCode_Context
{
public:
	UEOSUserInterface_EnterDevicePinCode_Context(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform
{
public:
	UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEOSUserInterface_SelectEOSAccount_Context
{
public:
	UEOSUserInterface_SelectEOSAccount_Context(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEOSUserInterface_SelectEOSAccount
{
public:
	UEOSUserInterface_SelectEOSAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEOSUserInterface_SignInOrCreateAccount_Context
{
public:
	UEOSUserInterface_SignInOrCreateAccount_Context(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEOSUserInterface_SignInOrCreateAccount
{
public:
	UEOSUserInterface_SignInOrCreateAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEOSUserInterface_SwitchToCrossPlatformAccount_Context
{
public:
	UEOSUserInterface_SwitchToCrossPlatformAccount_Context(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEOSUserInterface_SwitchToCrossPlatformAccount
{
public:
	UEOSUserInterface_SwitchToCrossPlatformAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URecentPlayersWorldSubsystem
{
public:
	URecentPlayersWorldSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


