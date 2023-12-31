namespace offsets
{
	namespace AActor
	{
			constexpr auto PrimaryActorTick = 0x28; // Size: 48, Type: struct FActorTickFunction
			constexpr auto bNetTemporary = 0x58; // Size: 1, Type: char
			constexpr auto bNetStartup = 0x58; // Size: 1, Type: char
			constexpr auto bOnlyRelevantToOwner = 0x58; // Size: 1, Type: char
			constexpr auto bAlwaysRelevant = 0x58; // Size: 1, Type: char
			constexpr auto bReplicateMovement = 0x58; // Size: 1, Type: char
			constexpr auto bHidden = 0x58; // Size: 1, Type: char
			constexpr auto bTearOff = 0x58; // Size: 1, Type: char
			constexpr auto bForceNetAddressable = 0x58; // Size: 1, Type: char
			constexpr auto bExchangedRoles = 0x59; // Size: 1, Type: char
			constexpr auto bNetLoadOnClient = 0x59; // Size: 1, Type: char
			constexpr auto bNetUseOwnerRelevancy = 0x59; // Size: 1, Type: char
			constexpr auto bRelevantForNetworkReplays = 0x59; // Size: 1, Type: char
			constexpr auto bRelevantForLevelBounds = 0x59; // Size: 1, Type: char
			constexpr auto bReplayRewindable = 0x59; // Size: 1, Type: char
			constexpr auto bAllowTickBeforeBeginPlay = 0x59; // Size: 1, Type: char
			constexpr auto bAutoDestroyWhenFinished = 0x59; // Size: 1, Type: char
			constexpr auto bCanBeDamaged = 0x5a; // Size: 1, Type: char
			constexpr auto bBlockInput = 0x5a; // Size: 1, Type: char
			constexpr auto bCollideWhenPlacing = 0x5a; // Size: 1, Type: char
			constexpr auto bFindCameraComponentWhenViewTarget = 0x5a; // Size: 1, Type: char
			constexpr auto bGenerateOverlapEventsDuringLevelStreaming = 0x5a; // Size: 1, Type: char
			constexpr auto bIgnoresOriginShifting = 0x5a; // Size: 1, Type: char
			constexpr auto bEnableAutoLODGeneration = 0x5a; // Size: 1, Type: char
			constexpr auto bIsEditorOnlyActor = 0x5a; // Size: 1, Type: char
			constexpr auto bActorSeamlessTraveled = 0x5b; // Size: 1, Type: char
			constexpr auto bReplicates = 0x5b; // Size: 1, Type: char
			constexpr auto bCanBeInCluster = 0x5b; // Size: 1, Type: char
			constexpr auto bAllowReceiveTickEventOnDedicatedServer = 0x5b; // Size: 1, Type: char
			constexpr auto bActorEnableCollision = 0x5c; // Size: 1, Type: char
			constexpr auto bActorIsBeingDestroyed = 0x5c; // Size: 1, Type: char
			constexpr auto UpdateOverlapsMethodDuringLevelStreaming = 0x5d; // Size: 1, Type: uint8_t 
			constexpr auto DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5e; // Size: 1, Type: uint8_t 
			constexpr auto RemoteRole = 0x5f; // Size: 1, Type: char ENetRole
			constexpr auto ReplicatedMovement = 0x60; // Size: 52, Type: struct FRepMovement
			constexpr auto InitialLifeSpan = 0x94; // Size: 4, Type: float
			constexpr auto CustomTimeDilation = 0x98; // Size: 4, Type: float
			constexpr auto AttachmentReplication = 0xa0; // Size: 64, Type: struct FRepAttachment
			constexpr auto Owner = 0xe0; // Size: 8, Type: struct AActor*
			constexpr auto NetDriverName = 0xe8; // Size: 8, Type: struct FName
			constexpr auto Role = 0xf0; // Size: 1, Type: char ENetRole
			constexpr auto NetDormancy = 0xf1; // Size: 1, Type: char ENetDormancy
			constexpr auto SpawnCollisionHandlingMethod = 0xf2; // Size: 1, Type: uint8_t 
			constexpr auto AutoReceiveInput = 0xf3; // Size: 1, Type: char EAutoReceiveInput
			constexpr auto InputPriority = 0xf4; // Size: 4, Type: int32_t
			constexpr auto InputComponent = 0xf8; // Size: 8, Type: struct UInputComponent*
			constexpr auto NetCullDistanceSquared = 0x100; // Size: 4, Type: float
			constexpr auto NetTag = 0x104; // Size: 4, Type: int32_t
			constexpr auto NetUpdateFrequency = 0x108; // Size: 4, Type: float
			constexpr auto MinNetUpdateFrequency = 0x10c; // Size: 4, Type: float
			constexpr auto NetPriority = 0x110; // Size: 4, Type: float
			constexpr auto Instigator = 0x118; // Size: 8, Type: struct APawn*
			constexpr auto Children = 0x120; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto RootComponent = 0x130; // Size: 8, Type: struct USceneComponent*
			constexpr auto ControllingMatineeActors = 0x138; // Size: 16, Type: struct TArray<struct AMatineeActor*>
			constexpr auto Layers = 0x150; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto ParentComponent = 0x160; // Size: 8, Type: struct TWeakObjectPtr<UChildActorComponent>
			constexpr auto Tags = 0x170; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto OnTakeAnyDamage = 0x180; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnTakePointDamage = 0x181; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnTakeRadialDamage = 0x182; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnActorBeginOverlap = 0x183; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnActorEndOverlap = 0x184; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnBeginCursorOver = 0x185; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnEndCursorOver = 0x186; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnClicked = 0x187; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnReleased = 0x188; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnInputTouchBegin = 0x189; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnInputTouchEnd = 0x18a; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnInputTouchEnter = 0x18b; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnInputTouchLeave = 0x18c; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnActorHit = 0x18d; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnDestroyed = 0x18e; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnEndPlay = 0x18f; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto InstanceComponents = 0x1f0; // Size: 16, Type: struct TArray<struct UActorComponent*>
			constexpr auto BlueprintCreatedComponents = 0x200; // Size: 16, Type: struct TArray<struct UActorComponent*>
	}
} 
