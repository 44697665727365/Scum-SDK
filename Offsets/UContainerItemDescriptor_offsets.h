namespace offsets
{
	namespace UContainerItemDescriptor
	{
			constexpr auto _itemClass = 0x60; // Size: 8, Type: UObject*
			constexpr auto _data = 0x80; // Size: 96, Type: struct FContainerItemDescriptorData
			constexpr auto _owningContainer = 0xe0; // Size: 16, Type: struct TScriptInterface<IInventoryContainer>
			constexpr auto _owningNode = 0xf0; // Size: 16, Type: struct TScriptInterface<IInventoryNode>
	}
} 
