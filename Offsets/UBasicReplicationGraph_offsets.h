namespace offsets
{
	namespace UBasicReplicationGraph
	{
			constexpr auto GridNode = 0x4a8; // Size: 8, Type: struct UReplicationGraphNode_GridSpatialization2D*
			constexpr auto AlwaysRelevantNode = 0x4b0; // Size: 8, Type: struct UReplicationGraphNode_ActorList*
			constexpr auto AlwaysRelevantForConnectionList = 0x4b8; // Size: 16, Type: struct TArray<struct FConnectionAlwaysRelevantNodePair>
			constexpr auto ActorsWithoutNetConnection = 0x4c8; // Size: 16, Type: struct TArray<struct AActor*>
	}
} 
