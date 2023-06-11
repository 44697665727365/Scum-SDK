#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// Size: 0x1(Inherited: 0x0) 
struct FSessionServiceLogUnsubscribe
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct SessionMessages.SessionServicePong
// Size: 0x90(Inherited: 0x0) 
struct FSessionServicePong
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Authorized : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FString BuildDate;  // 0x8(0x10)
	struct FString DeviceName;  // 0x18(0x10)
	struct FGuid InstanceId;  // 0x28(0x10)
	struct FString InstanceName;  // 0x38(0x10)
	struct FString PlatformName;  // 0x48(0x10)
	struct FGuid SessionId;  // 0x58(0x10)
	struct FString SessionName;  // 0x68(0x10)
	struct FString SessionOwner;  // 0x78(0x10)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool Standalone : 1;  // 0x88(0x1)
	char pad_137[7];  // 0x89(0x7)

}; 
// ScriptStruct SessionMessages.SessionServiceLog
// Size: 0x38(Inherited: 0x0) 
struct FSessionServiceLog
{
	struct FName Category;  // 0x0(0x8)
	struct FString Data;  // 0x8(0x10)
	struct FGuid InstanceId;  // 0x18(0x10)
	double TimeSeconds;  // 0x28(0x8)
	char Verbosity;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// Size: 0x1(Inherited: 0x0) 
struct FSessionServiceLogSubscribe
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct SessionMessages.SessionServicePing
// Size: 0x10(Inherited: 0x0) 
struct FSessionServicePing
{
	struct FString UserName;  // 0x0(0x10)

}; 
