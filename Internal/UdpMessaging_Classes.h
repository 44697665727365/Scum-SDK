#pragma once 
#include <UdpMessaging_Structs.h>
 
 
 
// Class UdpMessaging.UdpMessagingSettings
// Size: 0xA8(Inherited: 0x28) 
struct UUdpMessagingSettings : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool EnabledByDefault : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool EnableTransport : 1;  // 0x29(0x1)
	char pad_42_1 : 7;  // 0x2A(0x1)
	bool bAutoRepair : 1;  // 0x2A(0x1)
	char pad_43[1];  // 0x2B(0x1)
	float MaxSendRate;  // 0x2C(0x4)
	uint32_t AutoRepairAttemptLimit;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool bStopServiceWhenAppDeactivates : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	struct FString UnicastEndpoint;  // 0x38(0x10)
	struct FString MulticastEndpoint;  // 0x48(0x10)
	uint8_t  MessageFormat;  // 0x58(0x1)
	char MulticastTimeToLive;  // 0x59(0x1)
	char pad_90[6];  // 0x5A(0x6)
	struct TArray<struct FString> StaticEndpoints;  // 0x60(0x10)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool EnableTunnel : 1;  // 0x70(0x1)
	char pad_113[7];  // 0x71(0x7)
	struct FString TunnelUnicastEndpoint;  // 0x78(0x10)
	struct FString TunnelMulticastEndpoint;  // 0x88(0x10)
	struct TArray<struct FString> RemoteTunnelEndpoints;  // 0x98(0x10)

}; 



