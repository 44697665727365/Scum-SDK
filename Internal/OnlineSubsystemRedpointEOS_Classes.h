#pragma once 
#include <OnlineSubsystemRedpointEOS_Structs.h>
 
 
 
// Class OnlineSubsystemRedpointEOS.EOSNetConnection
// Size: 0x1BB8(Inherited: 0x1BA8) 
struct UEOSNetConnection : public UNetConnection
{
	char pad_7080[16];  // 0x1BA8(0x10)

}; 



// Class OnlineSubsystemRedpointEOS.EOSControlChannel
// Size: 0x2A0(Inherited: 0x80) 
struct UEOSControlChannel : public UControlChannel
{
	char pad_128[544];  // 0x80(0x220)

}; 



// Class OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context
// Size: 0x38(Inherited: 0x28) 
struct UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context : public UObject
{
	char pad_40[16];  // 0x28(0x10)

	void SelectedCandidates(struct TArray<struct FEOSUserInterface_CandidateEOSAccount> SelectedCandidates); // Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context.SelectedCandidates
}; 



// Class OnlineSubsystemRedpointEOS.EOSIpNetConnection
// Size: 0x1C48(Inherited: 0x1C48) 
struct UEOSIpNetConnection : public UIpConnection
{

}; 



// Class OnlineSubsystemRedpointEOS.EOSNetDriver
// Size: 0x848(Inherited: 0x7E0) 
struct UEOSNetDriver : public UIpNetDriver
{
	char pad_2016[104];  // 0x7E0(0x68)

}; 



// Class OnlineSubsystemRedpointEOS.EOSSubsystem
// Size: 0x68(Inherited: 0x30) 
struct UEOSSubsystem : public UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnAddWidgetToViewport;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnRemoveWidgetFromViewport;  // 0x40(0x10)
	char pad_80[24];  // 0x50(0x18)

}; 



// Class OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode
// Size: 0x28(Inherited: 0x28) 
struct UEOSUserInterface_EnterDevicePinCode : public UInterface
{

	void SetupUserInterface(struct UEOSUserInterface_EnterDevicePinCode_Context* Context, struct FString VerificationUrl, struct FString PinCode); // Function OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode.SetupUserInterface
}; 



// Class OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode_Context
// Size: 0x38(Inherited: 0x28) 
struct UEOSUserInterface_EnterDevicePinCode_Context : public UObject
{
	char pad_40[16];  // 0x28(0x10)

	void CancelLogin(); // Function OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode_Context.CancelLogin
}; 



// Class OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform
// Size: 0x28(Inherited: 0x28) 
struct UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform : public UInterface
{

	void SetupUserInterface(struct UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* Context, struct TArray<struct FEOSUserInterface_CandidateEOSAccount>& AvailableCandidates); // Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform.SetupUserInterface
}; 



// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context
// Size: 0x38(Inherited: 0x28) 
struct UEOSUserInterface_SelectEOSAccount_Context : public UObject
{
	char pad_40[16];  // 0x28(0x10)

	void SelectCandidate(struct FEOSUserInterface_CandidateEOSAccount SelectedCandidate); // Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context.SelectCandidate
}; 



// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount
// Size: 0x28(Inherited: 0x28) 
struct UEOSUserInterface_SelectEOSAccount : public UInterface
{

	void SetupUserInterface(struct UEOSUserInterface_SelectEOSAccount_Context* Context, struct TArray<struct FEOSUserInterface_CandidateEOSAccount>& AvailableCandidates); // Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount.SetupUserInterface
}; 



// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context
// Size: 0x38(Inherited: 0x28) 
struct UEOSUserInterface_SignInOrCreateAccount_Context : public UObject
{
	char pad_40[16];  // 0x28(0x10)

	void SelectChoice(uint8_t  SelectedChoice); // Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context.SelectChoice
}; 



// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount
// Size: 0x28(Inherited: 0x28) 
struct UEOSUserInterface_SignInOrCreateAccount : public UInterface
{

	void SetupUserInterface(struct UEOSUserInterface_SignInOrCreateAccount_Context* Context); // Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount.SetupUserInterface
}; 



// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context
// Size: 0x38(Inherited: 0x28) 
struct UEOSUserInterface_SwitchToCrossPlatformAccount_Context : public UObject
{
	char pad_40[16];  // 0x28(0x10)

	void SelectChoice(uint8_t  SelectedChoice); // Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context.SelectChoice
}; 



// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount
// Size: 0x28(Inherited: 0x28) 
struct UEOSUserInterface_SwitchToCrossPlatformAccount : public UInterface
{

	void SetupUserInterface(struct UEOSUserInterface_SwitchToCrossPlatformAccount_Context* Context, struct FString EpicAccountName); // Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount.SetupUserInterface
}; 



// Class OnlineSubsystemRedpointEOS.RecentPlayersWorldSubsystem
// Size: 0x88(Inherited: 0x30) 
struct URecentPlayersWorldSubsystem : public UWorldSubsystem
{
	char pad_48[88];  // 0x30(0x58)

}; 



