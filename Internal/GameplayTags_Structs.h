#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct GameplayTags.GameplayTag
// Size: 0x8(Inherited: 0x0) 
struct FGameplayTag
{
	struct FName TagName;  // 0x0(0x8)

}; 
// ScriptStruct GameplayTags.GameplayTagNode
// Size: 0x50(Inherited: 0x0) 
struct FGameplayTagNode
{
	char pad_0[80];  // 0x0(0x50)

}; 
// ScriptStruct GameplayTags.GameplayTagRedirect
// Size: 0x10(Inherited: 0x0) 
struct FGameplayTagRedirect
{
	struct FName OldTagName;  // 0x0(0x8)
	struct FName NewTagName;  // 0x8(0x8)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// Size: 0x10(Inherited: 0x0) 
struct FMakeLiteralGameplayTag
{
	struct FGameplayTag Value;  // 0x0(0x8)
	struct FGameplayTag ReturnValue;  // 0x8(0x8)

}; 
// ScriptStruct GameplayTags.GameplayTagContainer
// Size: 0x20(Inherited: 0x0) 
struct FGameplayTagContainer
{
	struct TArray<struct FGameplayTag> GameplayTags;  // 0x0(0x10)
	struct TArray<struct FGameplayTag> ParentTags;  // 0x10(0x10)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
// Size: 0x30(Inherited: 0x0) 
struct FMakeGameplayTagContainerFromArray
{
	struct TArray<struct FGameplayTag> GameplayTags;  // 0x0(0x10)
	struct FGameplayTagContainer ReturnValue;  // 0x10(0x20)

}; 
// ScriptStruct GameplayTags.GameplayTagTableRow
// Size: 0x20(Inherited: 0x8) 
struct FGameplayTagTableRow : public FTableRowBase
{
	struct FName Tag;  // 0x8(0x8)
	struct FString DevComment;  // 0x10(0x10)

}; 
// ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48(Inherited: 0x0) 
struct FGameplayTagQuery
{
	int32_t TokenStreamVersion;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FGameplayTag> TagDictionary;  // 0x8(0x10)
	struct TArray<char> QueryTokenStream;  // 0x18(0x10)
	struct FString UserDescription;  // 0x28(0x10)
	struct FString AutoDescription;  // 0x38(0x10)

}; 
// ScriptStruct GameplayTags.RestrictedConfigInfo
// Size: 0x20(Inherited: 0x0) 
struct FRestrictedConfigInfo
{
	struct FString RestrictedConfigName;  // 0x0(0x10)
	struct TArray<struct FString> Owners;  // 0x10(0x10)

}; 
// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// Size: 0x1(Inherited: 0x0) 
struct FGameplayTagCreationWidgetHelper
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x10(Inherited: 0x0) 
struct FGameplayTagReferenceHelper
{
	char pad_0[16];  // 0x0(0x10)

}; 
// ScriptStruct GameplayTags.GameplayTagSource
// Size: 0x20(Inherited: 0x0) 
struct FGameplayTagSource
{
	struct FName SourceName;  // 0x0(0x8)
	uint8_t  SourceType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct UGameplayTagsList* SourceTagList;  // 0x10(0x8)
	struct URestrictedGameplayTagsList* SourceRestrictedTagList;  // 0x18(0x8)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// Size: 0x20(Inherited: 0x0) 
struct FDoesTagAssetInterfaceHaveTag
{
	struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface;  // 0x0(0x10)
	struct FGameplayTag Tag;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// Size: 0x28(Inherited: 0x20) 
struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bAllowNonRestrictedChildren : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// Size: 0x20(Inherited: 0x0) 
struct FGameplayTagCategoryRemap
{
	struct FString BaseCategory;  // 0x0(0x10)
	struct TArray<struct FString> RemapCategories;  // 0x10(0x10)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
// Size: 0x28(Inherited: 0x0) 
struct FAddGameplayTag
{
	struct FGameplayTagContainer TagContainer;  // 0x0(0x20)
	struct FGameplayTag Tag;  // 0x20(0x8)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
// Size: 0x30(Inherited: 0x0) 
struct FBreakGameplayTagContainer
{
	struct FGameplayTagContainer GameplayTagContainer;  // 0x0(0x20)
	struct TArray<struct FGameplayTag> GameplayTags;  // 0x20(0x10)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// Size: 0x40(Inherited: 0x0) 
struct FAppendGameplayTagContainers
{
	struct FGameplayTagContainer InOutTagContainer;  // 0x0(0x20)
	struct FGameplayTagContainer InTagContainer;  // 0x20(0x20)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// Size: 0x70(Inherited: 0x0) 
struct FDoesContainerMatchTagQuery
{
	struct FGameplayTagContainer TagContainer;  // 0x0(0x20)
	struct FGameplayTagQuery TagQuery;  // 0x20(0x48)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool ReturnValue : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
// Size: 0x14(Inherited: 0x0) 
struct FMatchesTag
{
	struct FGameplayTag TagOne;  // 0x0(0x8)
	struct FGameplayTag TagTwo;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bExactMatch : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool ReturnValue : 1;  // 0x11(0x1)
	char pad_18[2];  // 0x12(0x2)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
// Size: 0x14(Inherited: 0x0) 
struct FEqualEqual_GameplayTag
{
	struct FGameplayTag A;  // 0x0(0x8)
	struct FGameplayTag B;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
// Size: 0x14(Inherited: 0x0) 
struct FNotEqual_GameplayTag
{
	struct FGameplayTag A;  // 0x0(0x8)
	struct FGameplayTag B;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
// Size: 0x48(Inherited: 0x0) 
struct FEqualEqual_GameplayTagContainer
{
	struct FGameplayTagContainer A;  // 0x0(0x20)
	struct FGameplayTagContainer B;  // 0x20(0x20)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool ReturnValue : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
// Size: 0x30(Inherited: 0x0) 
struct FGetDebugStringFromGameplayTagContainer
{
	struct FGameplayTagContainer TagContainer;  // 0x0(0x20)
	struct FString ReturnValue;  // 0x20(0x10)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
// Size: 0x68(Inherited: 0x0) 
struct FGetAllActorsOfClassMatchingTagQuery
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	AActor* ActorClass;  // 0x8(0x8)
	struct FGameplayTagQuery GameplayTagQuery;  // 0x10(0x48)
	struct TArray<struct AActor*> OutActors;  // 0x58(0x10)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
// Size: 0x18(Inherited: 0x0) 
struct FGetDebugStringFromGameplayTag
{
	struct FGameplayTag GameplayTag;  // 0x0(0x8)
	struct FString ReturnValue;  // 0x8(0x10)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// Size: 0x28(Inherited: 0x0) 
struct FGetNumGameplayTagsInContainer
{
	struct FGameplayTagContainer TagContainer;  // 0x0(0x20)
	int32_t ReturnValue;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
// Size: 0x48(Inherited: 0x0) 
struct FHasAnyTags
{
	struct FGameplayTagContainer TagContainer;  // 0x0(0x20)
	struct FGameplayTagContainer OtherContainer;  // 0x20(0x20)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bExactMatch : 1;  // 0x40(0x1)
	char pad_65_1 : 7;  // 0x41(0x1)
	bool ReturnValue : 1;  // 0x41(0x1)
	char pad_66[6];  // 0x42(0x6)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
// Size: 0x10(Inherited: 0x0) 
struct FGetTagName
{
	struct FGameplayTag GameplayTag;  // 0x0(0x8)
	struct FName ReturnValue;  // 0x8(0x8)

}; 
// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// Size: 0x28(Inherited: 0x0) 
struct FHasAllMatchingGameplayTags
{
	struct FGameplayTagContainer TagContainer;  // 0x0(0x20)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
// Size: 0x48(Inherited: 0x0) 
struct FHasAllTags
{
	struct FGameplayTagContainer TagContainer;  // 0x0(0x20)
	struct FGameplayTagContainer OtherContainer;  // 0x20(0x20)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bExactMatch : 1;  // 0x40(0x1)
	char pad_65_1 : 7;  // 0x41(0x1)
	bool ReturnValue : 1;  // 0x41(0x1)
	char pad_66[6];  // 0x42(0x6)

}; 
// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// Size: 0x28(Inherited: 0x0) 
struct FHasAnyMatchingGameplayTags
{
	struct FGameplayTagContainer TagContainer;  // 0x0(0x20)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
// Size: 0x30(Inherited: 0x0) 
struct FHasTag
{
	struct FGameplayTagContainer TagContainer;  // 0x0(0x20)
	struct FGameplayTag Tag;  // 0x20(0x8)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bExactMatch : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool ReturnValue : 1;  // 0x29(0x1)
	char pad_42[6];  // 0x2A(0x6)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// Size: 0x90(Inherited: 0x0) 
struct FMakeGameplayTagQuery
{
	struct FGameplayTagQuery TagQuery;  // 0x0(0x48)
	struct FGameplayTagQuery ReturnValue;  // 0x48(0x48)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
// Size: 0xC(Inherited: 0x0) 
struct FIsGameplayTagValid
{
	struct FGameplayTag GameplayTag;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
// Size: 0x50(Inherited: 0x0) 
struct FIsTagQueryEmpty
{
	struct FGameplayTagQuery TagQuery;  // 0x0(0x48)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool ReturnValue : 1;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
// Size: 0x28(Inherited: 0x0) 
struct FMakeGameplayTagContainerFromTag
{
	struct FGameplayTag SingleTag;  // 0x0(0x8)
	struct FGameplayTagContainer ReturnValue;  // 0x8(0x20)

}; 
// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// Size: 0x20(Inherited: 0x0) 
struct FGetOwnedGameplayTags
{
	struct FGameplayTagContainer TagContainer;  // 0x0(0x20)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
// Size: 0x40(Inherited: 0x0) 
struct FMakeLiteralGameplayTagContainer
{
	struct FGameplayTagContainer Value;  // 0x0(0x20)
	struct FGameplayTagContainer ReturnValue;  // 0x20(0x20)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
// Size: 0x30(Inherited: 0x0) 
struct FMatchesAnyTags
{
	struct FGameplayTag TagOne;  // 0x0(0x8)
	struct FGameplayTagContainer OtherContainer;  // 0x8(0x20)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bExactMatch : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool ReturnValue : 1;  // 0x29(0x1)
	char pad_42[6];  // 0x2A(0x6)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
// Size: 0x48(Inherited: 0x0) 
struct FNotEqual_GameplayTagContainer
{
	struct FGameplayTagContainer A;  // 0x0(0x20)
	struct FGameplayTagContainer B;  // 0x20(0x20)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool ReturnValue : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
// Size: 0x38(Inherited: 0x0) 
struct FNotEqual_TagContainerTagContainer
{
	struct FGameplayTagContainer A;  // 0x0(0x20)
	struct FString B;  // 0x20(0x10)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ReturnValue : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
// Size: 0x20(Inherited: 0x0) 
struct FNotEqual_TagTag
{
	struct FGameplayTag A;  // 0x0(0x8)
	struct FString B;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
// Size: 0x30(Inherited: 0x0) 
struct FRemoveGameplayTag
{
	struct FGameplayTagContainer TagContainer;  // 0x0(0x20)
	struct FGameplayTag Tag;  // 0x20(0x8)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool ReturnValue : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)

}; 
// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// Size: 0xC(Inherited: 0x0) 
struct FHasMatchingGameplayTag
{
	struct FGameplayTag TagToCheck;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
