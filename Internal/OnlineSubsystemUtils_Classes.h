#pragma once 
#include <OnlineSubsystemUtils_Structs.h>
 
 
 
// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x78(Inherited: 0x30) 
struct UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[40];  // 0x50(0x28)

	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
}; 



// Class OnlineSubsystemUtils.IpConnection
// Size: 0x1C48(Inherited: 0x1BA8) 
struct UIpConnection : public UNetConnection
{
	char pad_7080[80];  // 0x1BA8(0x50)
	float SocketErrorDisconnectDelay;  // 0x1BF8(0x4)
	char pad_7164[76];  // 0x1BFC(0x4C)

}; 



// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size: 0xA8(Inherited: 0x28) 
struct UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x38(0x10)
	char pad_72[96];  // 0x48(0x60)

	struct UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
}; 



// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x7E0(Inherited: 0x770) 
struct UIpNetDriver : public UNetDriver
{
	char LogPortUnreach : 1;  // 0x770(0x1)
	char AllowPlayerPortUnreach : 1;  // 0x770(0x1)
	char pad_1904_1 : 6;  // 0x770(0x1)
	char pad_1905[4];  // 0x771(0x4)
	uint32_t MaxPortCountToTry;  // 0x774(0x4)
	char pad_1912[12];  // 0x778(0xC)
	uint32_t ServerDesiredSocketReceiveBufferBytes;  // 0x784(0x4)
	uint32_t ServerDesiredSocketSendBufferBytes;  // 0x788(0x4)
	uint32_t ClientDesiredSocketReceiveBufferBytes;  // 0x78C(0x4)
	uint32_t ClientDesiredSocketSendBufferBytes;  // 0x790(0x4)
	char pad_1940[4];  // 0x794(0x4)
	double MaxSecondsInReceive;  // 0x798(0x8)
	int32_t NbPacketsBetweenReceiveTimeTest;  // 0x7A0(0x4)
	float ResolutionConnectionTimeout;  // 0x7A4(0x4)
	char pad_1960[56];  // 0x7A8(0x38)

}; 



// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size: 0x68(Inherited: 0x28) 
struct UInAppPurchaseQueryCallbackProxy2 : public UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x38(0x10)
	char pad_72[32];  // 0x48(0x20)

	struct UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
}; 



// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{

	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, float& progress); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, bool& bHidden); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
}; 



// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x68(Inherited: 0x30) 
struct UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[24];  // 0x50(0x18)

	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
}; 



// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x80(Inherited: 0x30) 
struct UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[48];  // 0x50(0x30)

	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
}; 



// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0x98(Inherited: 0x30) 
struct UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[72];  // 0x50(0x48)

	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
}; 



// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x78(Inherited: 0x30) 
struct UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[40];  // 0x50(0x28)

	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
}; 



// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x250(Inherited: 0x220) 
struct AOnlineBeacon : public AActor
{
	char pad_544[8];  // 0x220(0x8)
	float BeaconConnectionInitialTimeout;  // 0x228(0x4)
	float BeaconConnectionTimeout;  // 0x22C(0x4)
	struct UNetDriver* NetDriver;  // 0x230(0x8)
	char pad_568[24];  // 0x238(0x18)

}; 



// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x80(Inherited: 0x30) 
struct UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[48];  // 0x50(0x30)

	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, char EMPMatchOutcome LocalPlayerOutcome, char EMPMatchOutcome OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
}; 



// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x78(Inherited: 0x30) 
struct UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[40];  // 0x50(0x28)

	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
}; 



// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x90(Inherited: 0x30) 
struct UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[64];  // 0x50(0x40)

	struct FString GetServerName(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	int32_t GetPingInMs(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	int32_t GetMaxPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	int32_t GetCurrentPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
}; 



// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0x720(Inherited: 0x6C0) 
struct UVoipListenerSynthComponent : public USynthComponent
{
	char pad_1728[96];  // 0x6C0(0x60)

	bool IsIdling(); // Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
}; 



// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x88(Inherited: 0x30) 
struct UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[56];  // 0x50(0x38)

	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
}; 



// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size: 0x80(Inherited: 0x28) 
struct UInAppPurchaseCallbackProxy : public UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x38(0x10)
	char pad_72[56];  // 0x48(0x38)

	struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
}; 



// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size: 0xA8(Inherited: 0x28) 
struct UInAppPurchaseCallbackProxy2 : public UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x38(0x10)
	char pad_72[96];  // 0x48(0x60)

	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
}; 



// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x248(Inherited: 0x220) 
struct AOnlineBeaconHostObject : public AActor
{
	struct FString BeaconTypeName;  // 0x220(0x10)
	AOnlineBeaconClient* ClientBeaconActorClass;  // 0x230(0x8)
	struct TArray<struct AOnlineBeaconClient*> ClientActors;  // 0x238(0x10)

}; 



// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size: 0x90(Inherited: 0x28) 
struct UInAppPurchaseQueryCallbackProxy : public UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x38(0x10)
	char pad_72[72];  // 0x48(0x48)

	struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
}; 



// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size: 0x90(Inherited: 0x28) 
struct UInAppPurchaseRestoreCallbackProxy : public UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x38(0x10)
	char pad_72[72];  // 0x48(0x48)

	struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
}; 



// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x180(Inherited: 0x30) 
struct UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[304];  // 0x50(0x130)

	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
}; 



// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{

	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue); // Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
}; 



// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x68(Inherited: 0x28) 
struct ULeaderboardFlushCallbackProxy : public UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x38(0x10)
	char pad_72[32];  // 0x48(0x20)

	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
}; 



// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x50(Inherited: 0x38) 
struct UOnlinePIESettings : public UDeveloperSettings
{
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bOnlinePIEEnabled : 1;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)
	struct TArray<struct FPIELoginSettingsInternal> Logins;  // 0x40(0x10)

}; 



// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0x98(Inherited: 0x28) 
struct ULeaderboardQueryCallbackProxy : public UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x38(0x10)
	char pad_72[80];  // 0x48(0x50)

	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
}; 



// Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x68(Inherited: 0x30) 
struct ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[24];  // 0x50(0x18)

	struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
}; 



// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x2B0(Inherited: 0x250) 
struct AOnlineBeaconClient : public AOnlineBeacon
{
	struct AOnlineBeaconHostObject* BeaconOwner;  // 0x250(0x8)
	struct UNetConnection* BeaconConnection;  // 0x258(0x8)
	uint8_t  ConnectionState;  // 0x260(0x1)
	char pad_609[79];  // 0x261(0x4F)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
}; 



// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x248(Inherited: 0x248) 
struct ATestBeaconHost : public AOnlineBeaconHostObject
{

}; 



// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x308(Inherited: 0x250) 
struct AOnlineBeaconHost : public AOnlineBeacon
{
	int32_t ListenPort;  // 0x250(0x4)
	char pad_596[4];  // 0x254(0x4)
	struct TArray<struct AOnlineBeaconClient*> ClientActors;  // 0x258(0x10)
	char pad_616[160];  // 0x268(0xA0)

}; 



// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x180(Inherited: 0x28) 
struct UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
	char pad_40[344];  // 0x28(0x158)

}; 



// Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x1C8(Inherited: 0x28) 
struct UOnlineSessionClient : public UOnlineSession
{
	char pad_40[408];  // 0x28(0x198)
	char pad_448_1 : 7;  // 0x1C0(0x1)
	bool bIsFromInvite : 1;  // 0x1C0(0x1)
	char pad_449_1 : 7;  // 0x1C1(0x1)
	bool bHandlingDisconnect : 1;  // 0x1C1(0x1)
	char pad_450[6];  // 0x1C2(0x6)

}; 



// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x370(Inherited: 0x2B0) 
struct APartyBeaconClient : public AOnlineBeaconClient
{
	char pad_688[48];  // 0x2B0(0x30)
	struct FString DestSessionId;  // 0x2E0(0x10)
	struct FPartyReservation PendingReservation;  // 0x2F0(0x50)
	uint8_t  RequestType;  // 0x340(0x1)
	char pad_833_1 : 7;  // 0x341(0x1)
	bool bPendingReservationSent : 1;  // 0x341(0x1)
	char pad_834_1 : 7;  // 0x342(0x1)
	bool bCancelReservation : 1;  // 0x342(0x1)
	char pad_835[45];  // 0x343(0x2D)

	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	void ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	void ServerRemoveMemberFromReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	void ServerAddOrUpdateReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	void ClientReservationResponse(char EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	void ClientCancelReservationResponse(char EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
}; 



// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x2C0(Inherited: 0x248) 
struct APartyBeaconHost : public AOnlineBeaconHostObject
{
	struct UPartyBeaconState* State;  // 0x248(0x8)
	char pad_592[96];  // 0x250(0x60)
	char pad_688_1 : 7;  // 0x2B0(0x1)
	bool bLogoutOnSessionTimeout : 1;  // 0x2B0(0x1)
	char pad_689[3];  // 0x2B1(0x3)
	float SessionTimeoutSecs;  // 0x2B4(0x4)
	float TravelSessionTimeoutSecs;  // 0x2B8(0x4)
	char pad_700[4];  // 0x2BC(0x4)

}; 



// Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0xA0(Inherited: 0x28) 
struct UPartyBeaconState : public UObject
{
	struct FName SessionName;  // 0x28(0x8)
	int32_t NumConsumedReservations;  // 0x30(0x4)
	int32_t MaxReservations;  // 0x34(0x4)
	int32_t NumTeams;  // 0x38(0x4)
	int32_t NumPlayersPerTeam;  // 0x3C(0x4)
	struct FName TeamAssignmentMethod;  // 0x40(0x8)
	int32_t ReservedHostTeamNum;  // 0x48(0x4)
	int32_t ForceTeamNum;  // 0x4C(0x4)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool bRestrictCrossConsole : 1;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)
	struct TArray<struct FString> PlatformCrossplayRestrictions;  // 0x58(0x10)
	struct TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;  // 0x68(0x10)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool bEnableRemovalRequests : 1;  // 0x78(0x1)
	char pad_121[7];  // 0x79(0x7)
	struct TArray<struct FPartyReservation> Reservations;  // 0x80(0x10)
	char pad_144[16];  // 0x90(0x10)

}; 



// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x78(Inherited: 0x30) 
struct UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[40];  // 0x50(0x28)

	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, char EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
}; 



// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x60(Inherited: 0x30) 
struct UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure;  // 0x40(0x10)
	char pad_80[16];  // 0x50(0x10)

	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
}; 



// Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x398(Inherited: 0x2B0) 
struct ASpectatorBeaconClient : public AOnlineBeaconClient
{
	char pad_688[48];  // 0x2B0(0x30)
	struct FString DestSessionId;  // 0x2E0(0x10)
	struct FSpectatorReservation PendingReservation;  // 0x2F0(0x78)
	uint8_t  RequestType;  // 0x368(0x1)
	char pad_873_1 : 7;  // 0x369(0x1)
	bool bPendingReservationSent : 1;  // 0x369(0x1)
	char pad_874_1 : 7;  // 0x36A(0x1)
	bool bCancelReservation : 1;  // 0x36A(0x1)
	char pad_875[45];  // 0x36B(0x2D)

	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	void ClientReservationResponse(char ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	void ClientCancelReservationResponse(char ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
}; 



// Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x2C0(Inherited: 0x248) 
struct ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
	struct USpectatorBeaconState* State;  // 0x248(0x8)
	char pad_592[96];  // 0x250(0x60)
	char pad_688_1 : 7;  // 0x2B0(0x1)
	bool bLogoutOnSessionTimeout : 1;  // 0x2B0(0x1)
	char pad_689[3];  // 0x2B1(0x3)
	float SessionTimeoutSecs;  // 0x2B4(0x4)
	float TravelSessionTimeoutSecs;  // 0x2B8(0x4)
	char pad_700[4];  // 0x2BC(0x4)

}; 



// Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x60(Inherited: 0x28) 
struct USpectatorBeaconState : public UObject
{
	struct FName SessionName;  // 0x28(0x8)
	int32_t NumConsumedReservations;  // 0x30(0x4)
	int32_t MaxReservations;  // 0x34(0x4)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bRestrictCrossConsole : 1;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)
	struct TArray<struct FSpectatorReservation> Reservations;  // 0x40(0x10)
	char pad_80[16];  // 0x50(0x10)

}; 



// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x2B0(Inherited: 0x2B0) 
struct ATestBeaconClient : public AOnlineBeaconClient
{

	void ServerPong(); // Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
	void ClientPing(); // Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
}; 



// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{

	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString& PlayerDisplayName); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t& PlayerIndex); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool& bIsMyTurn); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
}; 



