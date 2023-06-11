#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
// Size: 0x90(Inherited: 0x0) 
struct FLiveLinkSubjectFrameMessage
{
	struct FName SubjectName;  // 0x0(0x8)
	struct TArray<struct FTransform> Transforms;  // 0x8(0x10)
	struct TArray<struct FLiveLinkCurveElement> Curves;  // 0x18(0x10)
	struct FLiveLinkMetaData MetaData;  // 0x28(0x60)
	double Time;  // 0x88(0x8)

}; 
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage
// Size: 0x40(Inherited: 0x0) 
struct FLiveLinkPongMessage
{
	struct FString ProviderName;  // 0x0(0x10)
	struct FString MachineName;  // 0x10(0x10)
	struct FGuid PollRequest;  // 0x20(0x10)
	int32_t LiveLinkVersion;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)
	double CreationPlatformTime;  // 0x38(0x8)

}; 
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
// Size: 0x1(Inherited: 0x0) 
struct FLiveLinkHeartbeatMessage
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
// Size: 0x28(Inherited: 0x0) 
struct FLiveLinkSubjectDataMessage
{
	struct FLiveLinkRefSkeleton RefSkeleton;  // 0x0(0x20)
	struct FName SubjectName;  // 0x20(0x8)

}; 
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkClearSubject
// Size: 0x8(Inherited: 0x0) 
struct FLiveLinkClearSubject
{
	struct FName SubjectName;  // 0x0(0x8)

}; 
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPingMessage
// Size: 0x14(Inherited: 0x0) 
struct FLiveLinkPingMessage
{
	struct FGuid PollRequest;  // 0x0(0x10)
	int32_t LiveLinkVersion;  // 0x10(0x4)

}; 
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage
// Size: 0x4(Inherited: 0x0) 
struct FLiveLinkConnectMessage
{
	int32_t LiveLinkVersion;  // 0x0(0x4)

}; 
