#pragma once 
#include "SDK.h" 
 
 
// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context.SelectCandidate
// Size: 0xD0(Inherited: 0x0) 
struct FSelectCandidate
{
	struct FEOSUserInterface_CandidateEOSAccount SelectedCandidate;  // 0x0(0xD0)

}; 
// ScriptStruct OnlineSubsystemRedpointEOS.EOSUserInterface_CandidateEOSAccount
// Size: 0xD0(Inherited: 0x0) 
struct FEOSUserInterface_CandidateEOSAccount
{
	struct FText DisplayName;  // 0x0(0x18)
	char pad_24[184];  // 0x18(0xB8)

}; 
// DelegateFunction OnlineSubsystemRedpointEOS.EOSWidgetDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FEOSWidgetDelegate__DelegateSignature
{
	struct UUserWidget* Widget;  // 0x0(0x8)

}; 
// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount.SetupUserInterface
// Size: 0x18(Inherited: 0x0) 
struct FSetupUserInterface
{
	struct UEOSUserInterface_SwitchToCrossPlatformAccount_Context* Context;  // 0x0(0x8)
	struct FString EpicAccountName;  // 0x8(0x10)

}; 
// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context.SelectChoice
// Size: 0x1(Inherited: 0x0) 
struct FSelectChoice
{
	uint8_t  SelectedChoice;  // 0x0(0x1)

}; 
// Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context.SelectedCandidates
// Size: 0x10(Inherited: 0x0) 
struct FSelectedCandidates
{
	struct TArray<struct FEOSUserInterface_CandidateEOSAccount> SelectedCandidates;  // 0x0(0x10)

}; 
