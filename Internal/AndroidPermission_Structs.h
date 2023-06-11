#pragma once 
#include "SDK.h" 
 
 
// Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
// Size: 0x18(Inherited: 0x0) 
struct FCheckPermission
{
	struct FString permission;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// DelegateFunction AndroidPermission.AndroidPermissionDynamicDelegate__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FAndroidPermissionDynamicDelegate__DelegateSignature
{
	struct TArray<struct FString> Permissions;  // 0x0(0x10)
	struct TArray<bool> GrantResults;  // 0x10(0x10)

}; 
// Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
// Size: 0x18(Inherited: 0x0) 
struct FAcquirePermissions
{
	struct TArray<struct FString> Permissions;  // 0x0(0x10)
	struct UAndroidPermissionCallbackProxy* ReturnValue;  // 0x10(0x8)

}; 
