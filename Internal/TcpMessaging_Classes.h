#pragma once 
#include <TcpMessaging_Structs.h>
 
 
 
// Class TcpMessaging.TcpMessagingSettings
// Size: 0x58(Inherited: 0x28) 
struct UTcpMessagingSettings : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool EnableTransport : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct FString ListenEndpoint;  // 0x30(0x10)
	struct TArray<struct FString> ConnectToEndpoints;  // 0x40(0x10)
	int32_t ConnectionRetryDelay;  // 0x50(0x4)
	char pad_84_1 : 7;  // 0x54(0x1)
	bool bStopServiceWhenAppDeactivates : 1;  // 0x54(0x1)
	char pad_85[3];  // 0x55(0x3)

}; 



