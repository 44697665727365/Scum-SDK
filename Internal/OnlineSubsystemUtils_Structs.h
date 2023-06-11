#pragma once 
#include "SDK.h" 
 
 
// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
// Size: 0x38(Inherited: 0x0) 
struct FEndTurn
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct FString MatchID;  // 0x10(0x10)
	struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface;  // 0x20(0x10)
	struct UEndTurnCallbackProxy* ReturnValue;  // 0x30(0x8)

}; 
// DelegateFunction OnlineSubsystemUtils.OnlineTurnBasedMatchResult__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnlineTurnBasedMatchResult__DelegateSignature
{
	struct FString MatchID;  // 0x0(0x10)

}; 
// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
// Size: 0x18(Inherited: 0x0) 
struct FCacheAchievements
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct UAchievementQueryCallbackProxy* ReturnValue;  // 0x10(0x8)

}; 
// DelegateFunction OnlineSubsystemUtils.AchievementWriteDelegate__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FAchievementWriteDelegate__DelegateSignature
{
	struct FName WrittenAchievementName;  // 0x0(0x8)
	float WrittenProgress;  // 0x8(0x4)
	int32_t WrittenUserTag;  // 0xC(0x4)

}; 
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
// Size: 0x30(Inherited: 0x0) 
struct FInAppPurchaseReceiptInfo2
{
	struct FString ItemName;  // 0x0(0x10)
	struct FString ItemId;  // 0x10(0x10)
	struct FString ValidationInfo;  // 0x20(0x10)

}; 
// DelegateFunction OnlineSubsystemUtils.OnlineConnectionResult__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FOnlineConnectionResult__DelegateSignature
{
	int32_t ErrorCode;  // 0x0(0x4)

}; 
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
// Size: 0x1(Inherited: 0x0) 
struct FClientCancelReservationResponse
{
	char ESpectatorReservationResult ReservationResponse;  // 0x0(0x1)

}; 
// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// Size: 0x108(Inherited: 0x0) 
struct FBlueprintSessionResult
{
	char pad_0[264];  // 0x0(0x108)

}; 
// DelegateFunction OnlineSubsystemUtils.BlueprintFindSessionsResultDelegate__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FBlueprintFindSessionsResultDelegate__DelegateSignature
{
	struct TArray<struct FBlueprintSessionResult> Results;  // 0x0(0x10)

}; 
// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
// Size: 0x78(Inherited: 0x0) 
struct FSpectatorReservation
{
	struct FUniqueNetIdRepl SpectatorId;  // 0x0(0x28)
	struct FPlayerReservation Spectator;  // 0x28(0x50)

}; 
// DelegateFunction OnlineSubsystemUtils.InAppPurchaseResult2__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FInAppPurchaseResult2__DelegateSignature
{
	uint8_t  PurchaseStatus;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FInAppPurchaseReceiptInfo2> InAppPurchaseReceipts;  // 0x8(0x10)

}; 
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
// Size: 0x110(Inherited: 0x0) 
struct FGetPingInMs
{
	struct FBlueprintSessionResult Result;  // 0x0(0x108)
	int32_t ReturnValue;  // 0x108(0x4)
	char pad_268[4];  // 0x10C(0x4)

}; 
// DelegateFunction OnlineSubsystemUtils.InAppPurchaseResult__DelegateSignature
// Size: 0xB0(Inherited: 0x0) 
struct FInAppPurchaseResult__DelegateSignature
{
	char EInAppPurchaseState PurchaseStatus;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FInAppPurchaseProductInfo InAppPurchaseReceipts;  // 0x8(0xA8)

}; 
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
// Size: 0x4(Inherited: 0x0) 
struct FClientSendReservationUpdates
{
	int32_t NumRemainingReservations;  // 0x0(0x4)

}; 
// DelegateFunction OnlineSubsystemUtils.InAppPurchaseQueryResult__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FInAppPurchaseQueryResult__DelegateSignature
{
	struct TArray<struct FInAppPurchaseProductInfo> InAppPurchaseInformation;  // 0x0(0x10)

}; 
// DelegateFunction OnlineSubsystemUtils.InAppPurchaseQuery2Result__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FInAppPurchaseQuery2Result__DelegateSignature
{
	struct TArray<struct FOnlineProxyStoreOffer> InAppOfferInformation;  // 0x0(0x10)

}; 
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
// Size: 0x28(Inherited: 0x0) 
struct FGetIsMyTurn
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct FString MatchID;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bIsMyTurn : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// Size: 0x50(Inherited: 0x0) 
struct FPlayerReservation
{
	struct FUniqueNetIdRepl UniqueId;  // 0x0(0x28)
	struct FString ValidationStr;  // 0x28(0x10)
	struct FString Platform;  // 0x38(0x10)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool bAllowCrossplay : 1;  // 0x48(0x1)
	char pad_73[3];  // 0x49(0x3)
	float ElapsedTime;  // 0x4C(0x4)

}; 
// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
// Size: 0x110(Inherited: 0x0) 
struct FOnlineProxyStoreOffer
{
	struct FString OfferId;  // 0x0(0x10)
	struct FText Title;  // 0x10(0x18)
	struct FText Description;  // 0x28(0x18)
	struct FText LongDescription;  // 0x40(0x18)
	struct FText RegularPriceText;  // 0x58(0x18)
	int32_t RegularPrice;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)
	struct FText PriceText;  // 0x78(0x18)
	int32_t NumericPrice;  // 0x90(0x4)
	char pad_148[4];  // 0x94(0x4)
	struct FString CurrencyCode;  // 0x98(0x10)
	struct FDateTime ReleaseDate;  // 0xA8(0x8)
	struct FDateTime ExpirationDate;  // 0xB0(0x8)
	uint8_t  DiscountType;  // 0xB8(0x1)
	char pad_185[7];  // 0xB9(0x7)
	struct TMap<struct FString, struct FString> DynamicFields;  // 0xC0(0x50)

}; 
// DelegateFunction OnlineSubsystemUtils.InAppPurchaseRestoreResult2__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FInAppPurchaseRestoreResult2__DelegateSignature
{
	uint8_t  PurchaseStatus;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FInAppPurchaseRestoreInfo2> InAppPurchaseRestoreInfo;  // 0x8(0x10)

}; 
// DelegateFunction OnlineSubsystemUtils.InAppPurchaseRestoreResult__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FInAppPurchaseRestoreResult__DelegateSignature
{
	char EInAppPurchaseState CompletionStatus;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FInAppPurchaseRestoreInfo> InAppRestorePurchaseInformation;  // 0x8(0x10)

}; 
// DelegateFunction OnlineSubsystemUtils.LeaderboardQueryResult__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FLeaderboardQueryResult__DelegateSignature
{
	int32_t LeaderboardValue;  // 0x0(0x4)

}; 
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
// Size: 0x30(Inherited: 0x0) 
struct FInAppPurchaseRestoreInfo2
{
	struct FString ItemName;  // 0x0(0x10)
	struct FString ItemId;  // 0x10(0x10)
	struct FString ValidationInfo;  // 0x20(0x10)

}; 
// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
// Size: 0x18(Inherited: 0x0) 
struct FCreateProxyObjectForFlush
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct FName SessionName;  // 0x8(0x8)
	struct ULeaderboardFlushCallbackProxy* ReturnValue;  // 0x10(0x8)

}; 
// DelegateFunction OnlineSubsystemUtils.OnLeaderboardFlushed__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnLeaderboardFlushed__DelegateSignature
{
	struct FName SessionName;  // 0x0(0x8)

}; 
// DelegateFunction OnlineSubsystemUtils.OnlineLogoutResult__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnlineLogoutResult__DelegateSignature
{
	struct APlayerController* PlayerController;  // 0x0(0x8)

}; 
// DelegateFunction OnlineSubsystemUtils.OnlineShowLoginUIResult__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnlineShowLoginUIResult__DelegateSignature
{
	struct APlayerController* PlayerController;  // 0x0(0x8)

}; 
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
// Size: 0x30(Inherited: 0x0) 
struct FInAppPurchaseReceiptInfo
{
	struct FString ItemName;  // 0x0(0x10)
	struct FString ItemId;  // 0x10(0x10)
	struct FString ValidationInfo;  // 0x20(0x10)

}; 
// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
// Size: 0x70(Inherited: 0x0) 
struct FGetCachedAchievementDescription
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct FName AchievementID;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bFoundID : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct FText Title;  // 0x20(0x18)
	struct FText LockedDescription;  // 0x38(0x18)
	struct FText UnlockedDescription;  // 0x50(0x18)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bHidden : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

}; 
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
// Size: 0x110(Inherited: 0x0) 
struct FGetCurrentPlayers
{
	struct FBlueprintSessionResult Result;  // 0x0(0x108)
	int32_t ReturnValue;  // 0x108(0x4)
	char pad_268[4];  // 0x10C(0x4)

}; 
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
// Size: 0xF8(Inherited: 0x0) 
struct FInAppPurchaseProductInfo2
{
	struct FString Identifier;  // 0x0(0x10)
	struct FString TransactionIdentifier;  // 0x10(0x10)
	struct FString DisplayName;  // 0x20(0x10)
	struct FString DisplayDescription;  // 0x30(0x10)
	struct FString DisplayPrice;  // 0x40(0x10)
	float RawPrice;  // 0x50(0x4)
	char pad_84[4];  // 0x54(0x4)
	struct FString CurrencyCode;  // 0x58(0x10)
	struct FString CurrencySymbol;  // 0x68(0x10)
	struct FString DecimalSeparator;  // 0x78(0x10)
	struct FString GroupingSeparator;  // 0x88(0x10)
	struct FString ReceiptData;  // 0x98(0x10)
	struct TMap<struct FString, struct FString> DynamicFields;  // 0xA8(0x50)

}; 
// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
// Size: 0x18(Inherited: 0x0) 
struct FCreateProxyObjectForIntQuery
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct FName StatName;  // 0x8(0x8)
	struct ULeaderboardQueryCallbackProxy* ReturnValue;  // 0x10(0x8)

}; 
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
// Size: 0x18(Inherited: 0x0) 
struct FInAppPurchaseProductRequest2
{
	struct FString ProductIdentifier;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bIsConsumable : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// Size: 0x40(Inherited: 0x0) 
struct FPIELoginSettingsInternal
{
	struct FString ID;  // 0x0(0x10)
	struct FString Token;  // 0x10(0x10)
	struct FString Type;  // 0x20(0x10)
	struct TArray<char> TokenBytes;  // 0x30(0x10)

}; 
// ScriptStruct OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
// Size: 0x20(Inherited: 0x0) 
struct FPartyBeaconCrossplayPlatformMapping
{
	struct FString PlatformName;  // 0x0(0x10)
	struct FString PlatformType;  // 0x10(0x10)

}; 
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
// Size: 0x10(Inherited: 0x0) 
struct FCreateProxyObjectForInAppPurchaseUnprocessedPurchases
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct UInAppPurchaseCallbackProxy2* ReturnValue;  // 0x8(0x8)

}; 
// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
// Size: 0x20(Inherited: 0x0) 
struct FCreateSession
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	int32_t PublicConnections;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bUseLAN : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct UCreateSessionCallbackProxy* ReturnValue;  // 0x18(0x8)

}; 
// ScriptStruct OnlineSubsystemUtils.PartyReservation
// Size: 0x50(Inherited: 0x0) 
struct FPartyReservation
{
	int32_t TeamNum;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FUniqueNetIdRepl PartyLeader;  // 0x8(0x28)
	struct TArray<struct FPlayerReservation> PartyMembers;  // 0x30(0x10)
	struct TArray<struct FPlayerReservation> RemovedPartyMembers;  // 0x40(0x10)

}; 
// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
// Size: 0x20(Inherited: 0x0) 
struct FGetCachedAchievementProgress
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct FName AchievementID;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bFoundID : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	float progress;  // 0x1C(0x4)

}; 
// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
// Size: 0x18(Inherited: 0x0) 
struct FLogout
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct ULogoutCallbackProxy* ReturnValue;  // 0x10(0x8)

}; 
// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
// Size: 0x18(Inherited: 0x0) 
struct FCacheAchievementDescriptions
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct UAchievementQueryCallbackProxy* ReturnValue;  // 0x10(0x8)

}; 
// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
// Size: 0x28(Inherited: 0x0) 
struct FWriteAchievementProgress
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct FName AchievementName;  // 0x10(0x8)
	float progress;  // 0x18(0x4)
	int32_t UserTag;  // 0x1C(0x4)
	struct UAchievementWriteCallbackProxy* ReturnValue;  // 0x20(0x8)

}; 
// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
// Size: 0x18(Inherited: 0x0) 
struct FConnectToService
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct UConnectionCallbackProxy* ReturnValue;  // 0x10(0x8)

}; 
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
// Size: 0x38(Inherited: 0x0) 
struct FGetPlayerDisplayName
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct FString MatchID;  // 0x10(0x10)
	int32_t PlayerIndex;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct FString PlayerDisplayName;  // 0x28(0x10)

}; 
// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
// Size: 0x18(Inherited: 0x0) 
struct FDestroySession
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct UDestroySessionCallbackProxy* ReturnValue;  // 0x10(0x8)

}; 
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
// Size: 0x60(Inherited: 0x0) 
struct FServerRemoveMemberFromReservationRequest
{
	struct FString SessionId;  // 0x0(0x10)
	struct FPartyReservation ReservationUpdate;  // 0x10(0x50)

}; 
// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
// Size: 0x40(Inherited: 0x0) 
struct FEndMatch
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct TScriptInterface<ITurnBasedMatchInterface> MatchActor;  // 0x10(0x10)
	struct FString MatchID;  // 0x20(0x10)
	char EMPMatchOutcome LocalPlayerOutcome;  // 0x30(0x1)
	char EMPMatchOutcome OtherPlayersOutcome;  // 0x31(0x1)
	char pad_50[6];  // 0x32(0x6)
	struct UEndMatchCallbackProxy* ReturnValue;  // 0x38(0x8)

}; 
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
// Size: 0x20(Inherited: 0x0) 
struct FFindSessions
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	int32_t MaxResults;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bUseLAN : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct UFindSessionsCallbackProxy* ReturnValue;  // 0x18(0x8)

}; 
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
// Size: 0x110(Inherited: 0x0) 
struct FGetMaxPlayers
{
	struct FBlueprintSessionResult Result;  // 0x0(0x108)
	int32_t ReturnValue;  // 0x108(0x4)
	char pad_268[4];  // 0x10C(0x4)

}; 
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
// Size: 0x1(Inherited: 0x0) 
struct FClientReservationResponse
{
	char ESpectatorReservationResult ReservationResponse;  // 0x0(0x1)

}; 
// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
// Size: 0x30(Inherited: 0x0) 
struct FQuitMatch
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct FString MatchID;  // 0x10(0x10)
	char EMPMatchOutcome Outcome;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	int32_t TurnTimeoutInSeconds;  // 0x24(0x4)
	struct UQuitMatchCallbackProxy* ReturnValue;  // 0x28(0x8)

}; 
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
// Size: 0x118(Inherited: 0x0) 
struct FGetServerName
{
	struct FBlueprintSessionResult Result;  // 0x0(0x108)
	struct FString ReturnValue;  // 0x108(0x10)

}; 
// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
// Size: 0x38(Inherited: 0x0) 
struct FFindTurnBasedMatch
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct TScriptInterface<ITurnBasedMatchInterface> MatchActor;  // 0x10(0x10)
	int32_t MinPlayers;  // 0x20(0x4)
	int32_t MaxPlayers;  // 0x24(0x4)
	int32_t PlayerGroup;  // 0x28(0x4)
	char pad_44_1 : 7;  // 0x2C(0x1)
	bool ShowExistingMatches : 1;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	struct UFindTurnBasedMatchCallbackProxy* ReturnValue;  // 0x30(0x8)

}; 
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
// Size: 0x28(Inherited: 0x0) 
struct FCreateProxyObjectForInAppPurchase
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct FInAppPurchaseProductRequest2 ProductRequest;  // 0x8(0x18)
	struct UInAppPurchaseCallbackProxy2* ReturnValue;  // 0x20(0x8)

}; 
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
// Size: 0x10(Inherited: 0x0) 
struct FCreateProxyObjectForInAppPurchaseQueryOwned
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct UInAppPurchaseCallbackProxy2* ReturnValue;  // 0x8(0x8)

}; 
// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
// Size: 0x20(Inherited: 0x0) 
struct FCreateProxyObjectForInAppPurchaseQuery
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct TArray<struct FString> ProductIdentifiers;  // 0x8(0x10)
	struct UInAppPurchaseQueryCallbackProxy2* ReturnValue;  // 0x18(0x8)

}; 
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
// Size: 0x28(Inherited: 0x0) 
struct FGetMyPlayerIndex
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct FString MatchID;  // 0x10(0x10)
	int32_t PlayerIndex;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
// Size: 0x20(Inherited: 0x0) 
struct FCreateProxyObjectForInAppPurchaseRestore
{
	struct TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags;  // 0x0(0x10)
	struct APlayerController* PlayerController;  // 0x10(0x8)
	struct UInAppPurchaseRestoreCallbackProxy2* ReturnValue;  // 0x18(0x8)

}; 
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
// Size: 0x60(Inherited: 0x0) 
struct FServerAddOrUpdateReservationRequest
{
	struct FString SessionId;  // 0x0(0x10)
	struct FPartyReservation Reservation;  // 0x10(0x50)

}; 
// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
// Size: 0x120(Inherited: 0x0) 
struct FJoinSession
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct FBlueprintSessionResult SearchResult;  // 0x10(0x108)
	struct UJoinSessionCallbackProxy* ReturnValue;  // 0x118(0x8)

}; 
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
// Size: 0x28(Inherited: 0x0) 
struct FServerCancelReservationRequest
{
	struct FUniqueNetIdRepl Spectator;  // 0x0(0x28)

}; 
// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
// Size: 0x18(Inherited: 0x0) 
struct FWriteLeaderboardInteger
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct FName StatName;  // 0x8(0x8)
	int32_t StatValue;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ReturnValue : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
// Size: 0x88(Inherited: 0x0) 
struct FServerReservationRequest
{
	struct FString SessionId;  // 0x0(0x10)
	struct FSpectatorReservation Reservation;  // 0x10(0x78)

}; 
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
// Size: 0x60(Inherited: 0x0) 
struct FServerUpdateReservationRequest
{
	struct FString SessionId;  // 0x0(0x10)
	struct FPartyReservation ReservationUpdate;  // 0x10(0x50)

}; 
// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
// Size: 0x18(Inherited: 0x0) 
struct FShowExternalLoginUI
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* InPlayerController;  // 0x8(0x8)
	struct UShowLoginUICallbackProxy* ReturnValue;  // 0x10(0x8)

}; 
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
// Size: 0x18(Inherited: 0x0) 
struct FRegisterTurnBasedMatchInterfaceObject
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APlayerController* PlayerController;  // 0x8(0x8)
	struct UObject* Object;  // 0x10(0x8)

}; 
// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
// Size: 0x1(Inherited: 0x0) 
struct FIsIdling
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
