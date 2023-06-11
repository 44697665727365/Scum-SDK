#pragma once 
#include "SDK.h" 
 
 
// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
// Size: 0x20(Inherited: 0x0) 
struct FFindMatchmakingSessions
{
	int32_t MaxResults;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString OculusMatchmakingPool;  // 0x8(0x10)
	struct UOculusFindSessionsCallbackProxy* ReturnValue;  // 0x18(0x8)

}; 
// Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
// Size: 0x20(Inherited: 0x0) 
struct FCreateSession
{
	int32_t PublicConnections;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString OculusMatchmakingPool;  // 0x8(0x10)
	struct UOculusCreateSessionCallbackProxy* ReturnValue;  // 0x18(0x8)

}; 
// DelegateFunction OnlineSubsystemOculus.OculusIdentitySuccessResult__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FOculusIdentitySuccessResult__DelegateSignature
{
	struct FString OculusId;  // 0x0(0x10)
	struct FString OculusName;  // 0x10(0x10)

}; 
// Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
// Size: 0x8(Inherited: 0x0) 
struct FVerifyEntitlement
{
	struct UOculusEntitlementCallbackProxy* ReturnValue;  // 0x0(0x8)

}; 
// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
// Size: 0x10(Inherited: 0x0) 
struct FFindModeratedSessions
{
	int32_t MaxResults;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UOculusFindSessionsCallbackProxy* ReturnValue;  // 0x8(0x8)

}; 
// Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
// Size: 0x10(Inherited: 0x0) 
struct FGetOculusIdentity
{
	int32_t LocalUserNum;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UOculusIdentityCallbackProxy* ReturnValue;  // 0x8(0x8)

}; 
// Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
// Size: 0x10(Inherited: 0x0) 
struct FSetSessionEnqueue
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bShouldEnqueueInMatchmakingPool : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UOculusUpdateSessionCallbackProxy* ReturnValue;  // 0x8(0x8)

}; 
