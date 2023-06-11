#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct Paper2D.SpriteGeometryCollection
// Size: 0x30(Inherited: 0x0) 
struct FSpriteGeometryCollection
{
	struct TArray<struct FSpriteGeometryShape> Shapes;  // 0x0(0x10)
	char ESpritePolygonMode GeometryType;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	int32_t PixelsPerSubdivisionX;  // 0x14(0x4)
	int32_t PixelsPerSubdivisionY;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bAvoidVertexMerging : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	float AlphaThreshold;  // 0x20(0x4)
	float DetailAmount;  // 0x24(0x4)
	float SimplifyEpsilon;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct Paper2D.IntMargin
// Size: 0x10(Inherited: 0x0) 
struct FIntMargin
{
	int32_t Left;  // 0x0(0x4)
	int32_t Top;  // 0x4(0x4)
	int32_t Right;  // 0x8(0x4)
	int32_t Bottom;  // 0xC(0x4)

}; 
// ScriptStruct Paper2D.SpriteInstanceData
// Size: 0x50(Inherited: 0x0) 
struct FSpriteInstanceData
{
	struct FMatrix Transform;  // 0x0(0x40)
	struct UPaperSprite* SourceSprite;  // 0x40(0x8)
	struct FColor VertexColor;  // 0x48(0x4)
	int32_t MaterialIndex;  // 0x4C(0x4)

}; 
// Function Paper2D.PaperTileMapComponent.GetLayerColor
// Size: 0x14(Inherited: 0x0) 
struct FGetLayerColor
{
	int32_t Layer;  // 0x0(0x4)
	struct FLinearColor ReturnValue;  // 0x4(0x10)

}; 
// Function Paper2D.PaperTileMapComponent.SetTile
// Size: 0x20(Inherited: 0x0) 
struct FSetTile
{
	int32_t X;  // 0x0(0x4)
	int32_t Y;  // 0x4(0x4)
	int32_t Layer;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FPaperTileInfo NewValue;  // 0x10(0x10)

}; 
// ScriptStruct Paper2D.PaperFlipbookKeyFrame
// Size: 0x10(Inherited: 0x0) 
struct FPaperFlipbookKeyFrame
{
	struct UPaperSprite* Sprite;  // 0x0(0x8)
	int32_t FrameRun;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
// Size: 0x8(Inherited: 0x0) 
struct FOnRep_SourceFlipbook
{
	struct UPaperFlipbook* OldFlipbook;  // 0x0(0x8)

}; 
// ScriptStruct Paper2D.PaperSpriteSocket
// Size: 0x40(Inherited: 0x0) 
struct FPaperSpriteSocket
{
	struct FTransform LocalTransform;  // 0x0(0x30)
	struct FName SocketName;  // 0x30(0x8)
	char pad_56[8];  // 0x38(0x8)

}; 
// Function Paper2D.PaperFlipbookComponent.GetSpriteColor
// Size: 0x10(Inherited: 0x0) 
struct FGetSpriteColor
{
	struct FLinearColor ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct Paper2D.PaperTerrainMaterialRule
// Size: 0x38(Inherited: 0x0) 
struct FPaperTerrainMaterialRule
{
	struct UPaperSprite* StartCap;  // 0x0(0x8)
	struct TArray<struct UPaperSprite*> Body;  // 0x8(0x10)
	struct UPaperSprite* EndCap;  // 0x18(0x8)
	float MinimumAngle;  // 0x20(0x4)
	float MaximumAngle;  // 0x24(0x4)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bEnableCollision : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	float CollisionOffset;  // 0x2C(0x4)
	int32_t DrawOrder;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function Paper2D.PaperTileMapComponent.GetTilePolygon
// Size: 0x20(Inherited: 0x0) 
struct FGetTilePolygon
{
	int32_t TileX;  // 0x0(0x4)
	int32_t TileY;  // 0x4(0x4)
	struct TArray<struct FVector> Points;  // 0x8(0x10)
	int32_t LayerIndex;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bWorldSpace : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// ScriptStruct Paper2D.PaperSpriteAtlasSlot
// Size: 0x40(Inherited: 0x0) 
struct FPaperSpriteAtlasSlot
{
	struct TSoftObjectPtr<UPaperSprite> SpriteRef;  // 0x0(0x28)
	int32_t AtlasIndex;  // 0x28(0x4)
	int32_t X;  // 0x2C(0x4)
	int32_t Y;  // 0x30(0x4)
	int32_t Width;  // 0x34(0x4)
	int32_t Height;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 
// Function Paper2D.PaperTerrainComponent.SetTerrainColor
// Size: 0x10(Inherited: 0x0) 
struct FSetTerrainColor
{
	struct FLinearColor NewColor;  // 0x0(0x10)

}; 
// Function Paper2D.PaperFlipbookComponent.SetPlayRate
// Size: 0x4(Inherited: 0x0) 
struct FSetPlayRate
{
	float NewRate;  // 0x0(0x4)

}; 
// ScriptStruct Paper2D.PaperTileInfo
// Size: 0x10(Inherited: 0x0) 
struct FPaperTileInfo
{
	struct UPaperTileSet* TileSet;  // 0x0(0x8)
	int32_t PackedTileIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
// Size: 0x98(Inherited: 0x0) 
struct FMakeBrushFromSprite
{
	struct UPaperSprite* Sprite;  // 0x0(0x8)
	int32_t Width;  // 0x8(0x4)
	int32_t Height;  // 0xC(0x4)
	struct FSlateBrush ReturnValue;  // 0x10(0x88)

}; 
// ScriptStruct Paper2D.PaperTileSetTerrain
// Size: 0x18(Inherited: 0x0) 
struct FPaperTileSetTerrain
{
	struct FString TerrainName;  // 0x0(0x10)
	int32_t CenterTileIndex;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
// Size: 0x50(Inherited: 0x0) 
struct FGetInstanceTransform
{
	int32_t InstanceIndex;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FTransform OutInstanceTransform;  // 0x10(0x30)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bWorldSpace : 1;  // 0x40(0x1)
	char pad_65_1 : 7;  // 0x41(0x1)
	bool ReturnValue : 1;  // 0x41(0x1)
	char pad_66[14];  // 0x42(0xE)

}; 
// ScriptStruct Paper2D.PaperTileMetadata
// Size: 0x40(Inherited: 0x0) 
struct FPaperTileMetadata
{
	struct FName UserDataName;  // 0x0(0x8)
	struct FSpriteGeometryCollection CollisionData;  // 0x8(0x30)
	char TerrainMembership[4];  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 
// ScriptStruct Paper2D.SpriteGeometryShape
// Size: 0x30(Inherited: 0x0) 
struct FSpriteGeometryShape
{
	uint8_t  ShapeType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FVector2D> Vertices;  // 0x8(0x10)
	struct FVector2D BoxSize;  // 0x18(0x8)
	struct FVector2D BoxPosition;  // 0x20(0x8)
	float Rotation;  // 0x28(0x4)
	char pad_44_1 : 7;  // 0x2C(0x1)
	bool bNegativeWinding : 1;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)

}; 
// Function Paper2D.PaperFlipbookComponent.GetPlayRate
// Size: 0x4(Inherited: 0x0) 
struct FGetPlayRate
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct Paper2D.SpriteDrawCallRecord
// Size: 0xD0(Inherited: 0x0) 
struct FSpriteDrawCallRecord
{
	struct FVector Destination;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct UTexture* BaseTexture;  // 0x10(0x8)
	char pad_24[48];  // 0x18(0x30)
	struct FColor Color;  // 0x48(0x4)
	char pad_76[132];  // 0x4C(0x84)

}; 
// ScriptStruct Paper2D.SpriteAssetInitParameters
// Size: 0x40(Inherited: 0x0) 
struct FSpriteAssetInitParameters
{
	char pad_0[64];  // 0x0(0x40)

}; 
// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
// Size: 0x8(Inherited: 0x0) 
struct FSetDefaultCollisionThickness
{
	float Thickness;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bRebuildCollision : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function Paper2D.PaperSpriteComponent.GetSprite
// Size: 0x8(Inherited: 0x0) 
struct FGetSprite
{
	struct UPaperSprite* ReturnValue;  // 0x0(0x8)

}; 
// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
// Size: 0xC(Inherited: 0x0) 
struct FGetKeyFrameIndexAtTime
{
	float Time;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bClampToEnds : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	int32_t ReturnValue;  // 0x8(0x4)

}; 
// Function Paper2D.PaperFlipbook.GetNumFrames
// Size: 0x4(Inherited: 0x0) 
struct FGetNumFrames
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
// Size: 0x50(Inherited: 0x0) 
struct FAddInstance
{
	struct FTransform Transform;  // 0x0(0x30)
	struct UPaperSprite* Sprite;  // 0x30(0x8)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bWorldSpace : 1;  // 0x38(0x1)
	char pad_57[3];  // 0x39(0x3)
	struct FLinearColor Color;  // 0x3C(0x10)
	int32_t ReturnValue;  // 0x4C(0x4)

}; 
// Function Paper2D.PaperFlipbookComponent.SetLooping
// Size: 0x1(Inherited: 0x0) 
struct FSetLooping
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bNewLooping : 1;  // 0x0(0x1)

}; 
// Function Paper2D.PaperFlipbook.GetNumKeyFrames
// Size: 0x4(Inherited: 0x0) 
struct FGetNumKeyFrames
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
// Size: 0x10(Inherited: 0x0) 
struct FGetSpriteAtFrame
{
	int32_t FrameIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UPaperSprite* ReturnValue;  // 0x8(0x8)

}; 
// Function Paper2D.PaperFlipbook.GetSpriteAtTime
// Size: 0x10(Inherited: 0x0) 
struct FGetSpriteAtTime
{
	float Time;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bClampToEnds : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	struct UPaperSprite* ReturnValue;  // 0x8(0x8)

}; 
// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
// Size: 0x8(Inherited: 0x0) 
struct FIsValidKeyFrameIndex
{
	int32_t Index;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function Paper2D.PaperFlipbook.GetTotalDuration
// Size: 0x4(Inherited: 0x0) 
struct FGetTotalDuration
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
// Size: 0x4(Inherited: 0x0) 
struct FGetFlipbookLength
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function Paper2D.PaperFlipbookComponent.GetFlipbook
// Size: 0x8(Inherited: 0x0) 
struct FGetFlipbook
{
	struct UPaperFlipbook* ReturnValue;  // 0x0(0x8)

}; 
// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
// Size: 0x4(Inherited: 0x0) 
struct FGetFlipbookLengthInFrames
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
// Size: 0x4(Inherited: 0x0) 
struct FGetFlipbookFramerate
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
// Size: 0x4(Inherited: 0x0) 
struct FGetPlaybackPosition
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
// Size: 0x4(Inherited: 0x0) 
struct FGetPlaybackPositionInFrames
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function Paper2D.PaperTileMapComponent.ResizeMap
// Size: 0x8(Inherited: 0x0) 
struct FResizeMap
{
	int32_t NewWidthInTiles;  // 0x0(0x4)
	int32_t NewHeightInTiles;  // 0x4(0x4)

}; 
// Function Paper2D.PaperFlipbookComponent.IsLooping
// Size: 0x1(Inherited: 0x0) 
struct FIsLooping
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function Paper2D.PaperSpriteComponent.SetSpriteColor
// Size: 0x10(Inherited: 0x0) 
struct FSetSpriteColor
{
	struct FLinearColor NewColor;  // 0x0(0x10)

}; 
// Function Paper2D.PaperFlipbookComponent.IsPlaying
// Size: 0x1(Inherited: 0x0) 
struct FIsPlaying
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
// Size: 0x18(Inherited: 0x0) 
struct FUpdateInstanceColor
{
	int32_t InstanceIndex;  // 0x0(0x4)
	struct FLinearColor NewInstanceColor;  // 0x4(0x10)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bMarkRenderStateDirty : 1;  // 0x14(0x1)
	char pad_21_1 : 7;  // 0x15(0x1)
	bool ReturnValue : 1;  // 0x15(0x1)
	char pad_22[2];  // 0x16(0x2)

}; 
// Function Paper2D.PaperFlipbookComponent.IsReversing
// Size: 0x1(Inherited: 0x0) 
struct FIsReversing
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function Paper2D.PaperFlipbookComponent.SetFlipbook
// Size: 0x10(Inherited: 0x0) 
struct FSetFlipbook
{
	struct UPaperFlipbook* NewFlipbook;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function Paper2D.PaperTileMapComponent.GetTileMapColor
// Size: 0x10(Inherited: 0x0) 
struct FGetTileMapColor
{
	struct FLinearColor ReturnValue;  // 0x0(0x10)

}; 
// Function Paper2D.PaperFlipbookComponent.SetNewTime
// Size: 0x4(Inherited: 0x0) 
struct FSetNewTime
{
	float NewTime;  // 0x0(0x4)

}; 
// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
// Size: 0x18(Inherited: 0x0) 
struct FCreateNewTileMap
{
	int32_t MapWidth;  // 0x0(0x4)
	int32_t MapHeight;  // 0x4(0x4)
	int32_t TileWidth;  // 0x8(0x4)
	int32_t TileHeight;  // 0xC(0x4)
	float PixelsPerUnrealUnit;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bCreateLayer : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
// Size: 0x8(Inherited: 0x0) 
struct FSetPlaybackPosition
{
	float NewPosition;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bFireEvents : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
// Size: 0x50(Inherited: 0x0) 
struct FUpdateInstanceTransform
{
	int32_t InstanceIndex;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FTransform NewInstanceTransform;  // 0x10(0x30)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bWorldSpace : 1;  // 0x40(0x1)
	char pad_65_1 : 7;  // 0x41(0x1)
	bool bMarkRenderStateDirty : 1;  // 0x41(0x1)
	char pad_66_1 : 7;  // 0x42(0x1)
	bool bTeleport : 1;  // 0x42(0x1)
	char pad_67_1 : 7;  // 0x43(0x1)
	bool ReturnValue : 1;  // 0x43(0x1)
	char pad_68[12];  // 0x44(0xC)

}; 
// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
// Size: 0x8(Inherited: 0x0) 
struct FSetPlaybackPositionInFrames
{
	int32_t NewFramePosition;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bFireEvents : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
// Size: 0x4(Inherited: 0x0) 
struct FGetInstanceCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
// Size: 0x8(Inherited: 0x0) 
struct FRemoveInstance
{
	int32_t InstanceIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
// Size: 0xC(Inherited: 0x0) 
struct FSortInstancesAlongAxis
{
	struct FVector WorldSpaceSortAxis;  // 0x0(0xC)

}; 
// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
// Size: 0x1C(Inherited: 0x0) 
struct FGetTileCornerPosition
{
	int32_t TileX;  // 0x0(0x4)
	int32_t TileY;  // 0x4(0x4)
	int32_t LayerIndex;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bWorldSpace : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct FVector ReturnValue;  // 0x10(0xC)

}; 
// Function Paper2D.PaperSpriteComponent.SetSprite
// Size: 0x10(Inherited: 0x0) 
struct FSetSprite
{
	struct UPaperSprite* NewSprite;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function Paper2D.PaperTileMapComponent.AddNewLayer
// Size: 0x8(Inherited: 0x0) 
struct FAddNewLayer
{
	struct UPaperTileLayer* ReturnValue;  // 0x0(0x8)

}; 
// Function Paper2D.PaperTileMapComponent.GetMapSize
// Size: 0xC(Inherited: 0x0) 
struct FGetMapSize
{
	int32_t MapWidth;  // 0x0(0x4)
	int32_t MapHeight;  // 0x4(0x4)
	int32_t NumLayers;  // 0x8(0x4)

}; 
// Function Paper2D.PaperTileMapComponent.GetTile
// Size: 0x20(Inherited: 0x0) 
struct FGetTile
{
	int32_t X;  // 0x0(0x4)
	int32_t Y;  // 0x4(0x4)
	int32_t Layer;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FPaperTileInfo ReturnValue;  // 0x10(0x10)

}; 
// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
// Size: 0x1C(Inherited: 0x0) 
struct FGetTileCenterPosition
{
	int32_t TileX;  // 0x0(0x4)
	int32_t TileY;  // 0x4(0x4)
	int32_t LayerIndex;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bWorldSpace : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct FVector ReturnValue;  // 0x10(0xC)

}; 
// Function Paper2D.PaperTileMapComponent.OwnsTileMap
// Size: 0x1(Inherited: 0x0) 
struct FOwnsTileMap
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function Paper2D.PaperTileMapComponent.SetLayerCollision
// Size: 0x18(Inherited: 0x0) 
struct FSetLayerCollision
{
	int32_t Layer;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bHasCollision : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool bOverrideThickness : 1;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)
	float CustomThickness;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bOverrideOffset : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	float CustomOffset;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bRebuildCollision : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function Paper2D.PaperTileMapComponent.SetLayerColor
// Size: 0x14(Inherited: 0x0) 
struct FSetLayerColor
{
	struct FLinearColor NewColor;  // 0x0(0x10)
	int32_t Layer;  // 0x10(0x4)

}; 
// Function Paper2D.PaperTileMapComponent.SetTileMap
// Size: 0x10(Inherited: 0x0) 
struct FSetTileMap
{
	struct UPaperTileMap* NewTileMap;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function Paper2D.PaperTileMapComponent.SetTileMapColor
// Size: 0x10(Inherited: 0x0) 
struct FSetTileMapColor
{
	struct FLinearColor NewColor;  // 0x0(0x10)

}; 
// Function Paper2D.TileMapBlueprintLibrary.BreakTile
// Size: 0x28(Inherited: 0x0) 
struct FBreakTile
{
	struct FPaperTileInfo Tile;  // 0x0(0x10)
	int32_t TileIndex;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct UPaperTileSet* TileSet;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bFlipH : 1;  // 0x20(0x1)
	char pad_33_1 : 7;  // 0x21(0x1)
	bool bFlipV : 1;  // 0x21(0x1)
	char pad_34_1 : 7;  // 0x22(0x1)
	bool bFlipD : 1;  // 0x22(0x1)
	char pad_35[5];  // 0x23(0x5)

}; 
// Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
// Size: 0x40(Inherited: 0x0) 
struct FGetTileTransform
{
	struct FPaperTileInfo Tile;  // 0x0(0x10)
	struct FTransform ReturnValue;  // 0x10(0x30)

}; 
// Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
// Size: 0x18(Inherited: 0x0) 
struct FGetTileUserData
{
	struct FPaperTileInfo Tile;  // 0x0(0x10)
	struct FName ReturnValue;  // 0x10(0x8)

}; 
// Function Paper2D.TileMapBlueprintLibrary.MakeTile
// Size: 0x28(Inherited: 0x0) 
struct FMakeTile
{
	int32_t TileIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UPaperTileSet* TileSet;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bFlipH : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool bFlipV : 1;  // 0x11(0x1)
	char pad_18_1 : 7;  // 0x12(0x1)
	bool bFlipD : 1;  // 0x12(0x1)
	char pad_19[5];  // 0x13(0x5)
	struct FPaperTileInfo ReturnValue;  // 0x18(0x10)

}; 
