#pragma once 
#include <AndroidPermission_Structs.h>
 
 
 
// Class AndroidPermission.AndroidPermissionCallbackProxy
// Size: 0x48(Inherited: 0x28) 
struct UAndroidPermissionCallbackProxy : public UObject
{
	struct FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate;  // 0x28(0x10)
	char pad_56[16];  // 0x38(0x10)

}; 



// Class AndroidPermission.AndroidPermissionFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{

	bool CheckPermission(struct FString permission); // Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	struct UAndroidPermissionCallbackProxy* AcquirePermissions(struct TArray<struct FString>& Permissions); // Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
}; 



