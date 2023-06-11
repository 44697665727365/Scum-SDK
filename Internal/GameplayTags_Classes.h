#pragma once 
#include <GameplayTags_Structs.h>
 
 
 
// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// Size: 0x48(Inherited: 0x28) 
struct UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
	struct FGameplayTagContainer Tags;  // 0x28(0x20)

}; 



// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// Size: 0x38(Inherited: 0x28) 
struct UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions;  // 0x28(0x10)

}; 



// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x28(Inherited: 0x28) 
struct UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{

	bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
	bool NotEqual_TagTag(struct FGameplayTag A, struct FString B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
	bool NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A, struct FString B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
	bool NotEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
	bool NotEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
	bool MatchesTag(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
	bool MatchesAnyTags(struct FGameplayTag TagOne, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
	struct FGameplayTagContainer MakeLiteralGameplayTagContainer(struct FGameplayTagContainer Value); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
	struct FGameplayTag MakeLiteralGameplayTag(struct FGameplayTag Value); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	struct FGameplayTagContainer MakeGameplayTagContainerFromTag(struct FGameplayTag SingleTag); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(struct TArray<struct FGameplayTag>& GameplayTags); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
	bool IsTagQueryEmpty(struct FGameplayTagQuery& TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
	bool IsGameplayTagValid(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
	bool HasTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
	bool HasAnyTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
	bool HasAllTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
	bool HasAllMatchingGameplayTags(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTagContainer& OtherContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	struct FName GetTagName(struct FGameplayTag& GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
	int32_t GetNumGameplayTagsInContainer(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	struct FString GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
	struct FString GetDebugStringFromGameplayTag(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
	void GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, AActor* ActorClass, struct FGameplayTagQuery& GameplayTagQuery, struct TArray<struct AActor*>& OutActors); // Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
	bool EqualEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
	bool EqualEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
	bool DoesTagAssetInterfaceHaveTag(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	bool DoesContainerMatchTagQuery(struct FGameplayTagContainer& TagContainer, struct FGameplayTagQuery& TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	void BreakGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct FGameplayTag>& GameplayTags); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
	void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer& InTagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	void AddGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
}; 



// Class GameplayTags.GameplayTagAssetInterface
// Size: 0x28(Inherited: 0x28) 
struct UGameplayTagAssetInterface : public UInterface
{

	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck); // Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	void GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
}; 



// Class GameplayTags.GameplayTagsManager
// Size: 0x240(Inherited: 0x28) 
struct UGameplayTagsManager : public UObject
{
	char pad_40[312];  // 0x28(0x138)
	struct TMap<struct FName, struct FGameplayTagSource> TagSources;  // 0x160(0x50)
	char pad_432[128];  // 0x1B0(0x80)
	struct TArray<struct UDataTable*> GameplayTagTables;  // 0x230(0x10)

}; 



// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// Size: 0x48(Inherited: 0x28) 
struct UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
	struct FGameplayTagContainer Tags;  // 0x28(0x20)

}; 



// Class GameplayTags.EditableGameplayTagQuery
// Size: 0x98(Inherited: 0x28) 
struct UEditableGameplayTagQuery : public UObject
{
	struct FString UserDescription;  // 0x28(0x10)
	char pad_56[16];  // 0x38(0x10)
	struct UEditableGameplayTagQueryExpression* RootExpression;  // 0x48(0x8)
	struct FGameplayTagQuery TagQueryExportText_Helper;  // 0x50(0x48)

}; 



// Class GameplayTags.EditableGameplayTagQueryExpression
// Size: 0x28(Inherited: 0x28) 
struct UEditableGameplayTagQueryExpression : public UObject
{

}; 



// Class GameplayTags.GameplayTagsList
// Size: 0x48(Inherited: 0x28) 
struct UGameplayTagsList : public UObject
{
	struct FString ConfigFileName;  // 0x28(0x10)
	struct TArray<struct FGameplayTagTableRow> GameplayTagList;  // 0x38(0x10)

}; 



// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// Size: 0x48(Inherited: 0x28) 
struct UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
	struct FGameplayTagContainer Tags;  // 0x28(0x20)

}; 



// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// Size: 0x38(Inherited: 0x28) 
struct UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions;  // 0x28(0x10)

}; 



// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// Size: 0x38(Inherited: 0x28) 
struct UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions;  // 0x28(0x10)

}; 



// Class GameplayTags.RestrictedGameplayTagsList
// Size: 0x48(Inherited: 0x28) 
struct URestrictedGameplayTagsList : public UObject
{
	struct FString ConfigFileName;  // 0x28(0x10)
	struct TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;  // 0x38(0x10)

}; 



// Class GameplayTags.GameplayTagsSettings
// Size: 0xB8(Inherited: 0x48) 
struct UGameplayTagsSettings : public UGameplayTagsList
{
	char pad_72_1 : 7;  // 0x48(0x1)
	bool ImportTagsFromConfig : 1;  // 0x48(0x1)
	char pad_73_1 : 7;  // 0x49(0x1)
	bool WarnOnInvalidTags : 1;  // 0x49(0x1)
	char pad_74_1 : 7;  // 0x4A(0x1)
	bool ClearInvalidTags : 1;  // 0x4A(0x1)
	char pad_75_1 : 7;  // 0x4B(0x1)
	bool FastReplication : 1;  // 0x4B(0x1)
	char pad_76[4];  // 0x4C(0x4)
	struct FString InvalidTagCharacters;  // 0x50(0x10)
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping;  // 0x60(0x10)
	struct TArray<struct FSoftObjectPath> GameplayTagTableList;  // 0x70(0x10)
	struct TArray<struct FGameplayTagRedirect> GameplayTagRedirects;  // 0x80(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags;  // 0x90(0x10)
	int32_t NumBitsForContainerSize;  // 0xA0(0x4)
	int32_t NetIndexFirstBitSegment;  // 0xA4(0x4)
	struct TArray<struct FRestrictedConfigInfo> RestrictedConfigFiles;  // 0xA8(0x10)

}; 



// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x50(Inherited: 0x38) 
struct UGameplayTagsDeveloperSettings : public UDeveloperSettings
{
	struct FString DeveloperConfigName;  // 0x38(0x10)
	struct FName FavoriteTagSource;  // 0x48(0x8)

}; 



