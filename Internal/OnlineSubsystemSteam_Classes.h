#pragma once 
#include <OnlineSubsystemSteam_Structs.h>
 
 
 
// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// Size: 0x28(Inherited: 0x28) 
struct USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{

}; 



// Class OnlineSubsystemSteam.SteamNetConnection
// Size: 0x1C50(Inherited: 0x1C48) 
struct USteamNetConnection : public UIpConnection
{
	char pad_7240_1 : 7;  // 0x1C48(0x1)
	bool bIsPassthrough : 1;  // 0x1C48(0x1)
	char pad_7241[7];  // 0x1C49(0x7)

}; 



// Class OnlineSubsystemSteam.SteamNetDriver
// Size: 0x7E8(Inherited: 0x7E0) 
struct USteamNetDriver : public UIpNetDriver
{
	char pad_2016[8];  // 0x7E0(0x8)

}; 



