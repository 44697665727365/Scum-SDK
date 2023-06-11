#pragma once 
#include <OnlineSubsystemOculus_Structs.h>
 
 
 
// Class OnlineSubsystemOculus.OculusIdentityCallbackProxy
// Size: 0x60(Inherited: 0x30) 
struct UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[16];  // 0x50(0x10)

	struct UOculusIdentityCallbackProxy* GetOculusIdentity(int32_t LocalUserNum); // Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
}; 



// Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
// Size: 0x98(Inherited: 0x30) 
struct UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[72];  // 0x50(0x48)

	struct UOculusFindSessionsCallbackProxy* FindModeratedSessions(int32_t MaxResults); // Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
	struct UOculusFindSessionsCallbackProxy* FindMatchmakingSessions(int32_t MaxResults, struct FString OculusMatchmakingPool); // Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
}; 



// Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
// Size: 0x98(Inherited: 0x30) 
struct UOculusCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[72];  // 0x50(0x48)

	struct UOculusCreateSessionCallbackProxy* CreateSession(int32_t PublicConnections, struct FString OculusMatchmakingPool); // Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
}; 



// Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy
// Size: 0x50(Inherited: 0x30) 
struct UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)

	struct UOculusEntitlementCallbackProxy* VerifyEntitlement(); // Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
}; 



// Class OnlineSubsystemOculus.OculusNetConnection
// Size: 0x1C58(Inherited: 0x1C48) 
struct UOculusNetConnection : public UIpConnection
{
	char pad_7240[16];  // 0x1C48(0x10)

}; 



// Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
// Size: 0x70(Inherited: 0x30) 
struct UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[32];  // 0x50(0x20)

	struct UOculusUpdateSessionCallbackProxy* SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool); // Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
}; 



// Class OnlineSubsystemOculus.OculusNetDriver
// Size: 0x898(Inherited: 0x7E0) 
struct UOculusNetDriver : public UIpNetDriver
{
	char pad_2016[184];  // 0x7E0(0xB8)

}; 



