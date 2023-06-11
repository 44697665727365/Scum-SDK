#pragma once 
#include <Paper2D_Structs.h>
 
 
 
// Class Paper2D.MaterialExpressionSpriteTextureSampler
// Size: 0xA0(Inherited: 0x80) 
struct UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
	char pad_128_1 : 7;  // 0x80(0x1)
	bool bSampleAdditionalTextures : 1;  // 0x80(0x1)
	char pad_129[3];  // 0x81(0x3)
	int32_t AdditionalSlotIndex;  // 0x84(0x4)
	struct FText SlotDisplayName;  // 0x88(0x18)

}; 



// Class Paper2D.PaperRuntimeSettings
// Size: 0x30(Inherited: 0x28) 
struct UPaperRuntimeSettings : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bEnableSpriteAtlasGroups : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool bEnableTerrainSplineEditing : 1;  // 0x29(0x1)
	char pad_42_1 : 7;  // 0x2A(0x1)
	bool bResizeSpriteDataToMatchTextures : 1;  // 0x2A(0x1)
	char pad_43[5];  // 0x2B(0x5)

}; 



// Class Paper2D.PaperCharacter
// Size: 0x4D0(Inherited: 0x4D0) 
struct APaperCharacter : public ACharacter
{
	struct UPaperFlipbookComponent* Sprite;  // 0x4C8(0x8)

}; 



// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x228(Inherited: 0x220) 
struct APaperGroupedSpriteActor : public AActor
{
	struct UPaperGroupedSpriteComponent* RenderComponent;  // 0x220(0x8)

}; 



// Class Paper2D.PaperFlipbook
// Size: 0x50(Inherited: 0x28) 
struct UPaperFlipbook : public UObject
{
	float FramesPerSecond;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct TArray<struct FPaperFlipbookKeyFrame> KeyFrames;  // 0x30(0x10)
	struct UMaterialInterface* DefaultMaterial;  // 0x40(0x8)
	char EFlipbookCollisionMode CollisionSource;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)

	bool IsValidKeyFrameIndex(int32_t Index); // Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
	float GetTotalDuration(); // Function Paper2D.PaperFlipbook.GetTotalDuration
	struct UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetSpriteAtTime
	struct UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex); // Function Paper2D.PaperFlipbook.GetSpriteAtFrame
	int32_t GetNumKeyFrames(); // Function Paper2D.PaperFlipbook.GetNumKeyFrames
	int32_t GetNumFrames(); // Function Paper2D.PaperFlipbook.GetNumFrames
	int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
}; 



// Class Paper2D.PaperGroupedSpriteComponent
// Size: 0x4B0(Inherited: 0x480) 
struct UPaperGroupedSpriteComponent : public UMeshComponent
{
	struct TArray<struct UMaterialInterface*> InstanceMaterials;  // 0x478(0x10)
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData;  // 0x488(0x10)
	char pad_1184[16];  // 0x4A0(0x10)

	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
	bool UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
	void SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis); // Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
	bool RemoveInstance(int32_t InstanceIndex); // Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
	int32_t GetInstanceCount(); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
	void ClearInstances(); // Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
	int32_t AddInstance(struct FTransform& Transform, struct UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color); // Function Paper2D.PaperGroupedSpriteComponent.AddInstance
}; 



// Class Paper2D.PaperFlipbookActor
// Size: 0x228(Inherited: 0x220) 
struct APaperFlipbookActor : public AActor
{
	struct UPaperFlipbookComponent* RenderComponent;  // 0x220(0x8)

}; 



// Class Paper2D.PaperFlipbookComponent
// Size: 0x4C0(Inherited: 0x480) 
struct UPaperFlipbookComponent : public UMeshComponent
{
	struct UPaperFlipbook* SourceFlipbook;  // 0x478(0x8)
	struct UMaterialInterface* Material;  // 0x480(0x8)
	float PlayRate;  // 0x488(0x4)
	char bLooping : 1;  // 0x48C(0x1)
	char bReversePlayback : 1;  // 0x48C(0x1)
	char bPlaying : 1;  // 0x48C(0x1)
	float AccumulatedTime;  // 0x490(0x4)
	int32_t CachedFrameIndex;  // 0x494(0x4)
	struct FLinearColor SpriteColor;  // 0x498(0x10)
	struct UBodySetup* CachedBodySetup;  // 0x4A8(0x8)
	struct FMulticastInlineDelegate OnFinishedPlaying;  // 0x4B0(0x10)

	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop
	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperFlipbookComponent.SetSpriteColor
	void SetPlayRate(float NewRate); // Function Paper2D.PaperFlipbookComponent.SetPlayRate
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
	void SetPlaybackPosition(float NewPosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
	void SetNewTime(float NewTime); // Function Paper2D.PaperFlipbookComponent.SetNewTime
	void SetLooping(bool bNewLooping); // Function Paper2D.PaperFlipbookComponent.SetLooping
	bool SetFlipbook(struct UPaperFlipbook* NewFlipbook); // Function Paper2D.PaperFlipbookComponent.SetFlipbook
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play
	void OnRep_SourceFlipbook(struct UPaperFlipbook* OldFlipbook); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
	bool IsReversing(); // Function Paper2D.PaperFlipbookComponent.IsReversing
	bool IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying
	bool IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping
	struct FLinearColor GetSpriteColor(); // Function Paper2D.PaperFlipbookComponent.GetSpriteColor
	float GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate
	int32_t GetPlaybackPositionInFrames(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
	float GetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
	int32_t GetFlipbookLengthInFrames(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
	float GetFlipbookLength(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
	float GetFlipbookFramerate(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
	struct UPaperFlipbook* GetFlipbook(); // Function Paper2D.PaperFlipbookComponent.GetFlipbook
}; 



// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{

	struct FPaperTileInfo MakeTile(int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD); // Function Paper2D.TileMapBlueprintLibrary.MakeTile
	struct FName GetTileUserData(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
	struct FTransform GetTileTransform(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
	void BreakTile(struct FPaperTileInfo Tile, int32_t& TileIndex, struct UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD); // Function Paper2D.TileMapBlueprintLibrary.BreakTile
}; 



// Class Paper2D.PaperSprite
// Size: 0xA8(Inherited: 0x28) 
struct UPaperSprite : public UObject
{
	char pad_40[16];  // 0x28(0x10)
	struct TArray<struct UTexture*> AdditionalSourceTextures;  // 0x38(0x10)
	struct FVector2D BakedSourceUV;  // 0x48(0x8)
	struct FVector2D BakedSourceDimension;  // 0x50(0x8)
	struct UTexture2D* BakedSourceTexture;  // 0x58(0x8)
	struct UMaterialInterface* DefaultMaterial;  // 0x60(0x8)
	struct UMaterialInterface* AlternateMaterial;  // 0x68(0x8)
	struct TArray<struct FPaperSpriteSocket> Sockets;  // 0x70(0x10)
	char ESpriteCollisionMode SpriteCollisionDomain;  // 0x80(0x1)
	char pad_129[3];  // 0x81(0x3)
	float PixelsPerUnrealUnit;  // 0x84(0x4)
	struct UBodySetup* BodySetup;  // 0x88(0x8)
	int32_t AlternateMaterialSplitIndex;  // 0x90(0x4)
	char pad_148[4];  // 0x94(0x4)
	struct TArray<struct FVector4> BakedRenderData;  // 0x98(0x10)

}; 



// Class Paper2D.PaperSpriteActor
// Size: 0x228(Inherited: 0x220) 
struct APaperSpriteActor : public AActor
{
	struct UPaperSpriteComponent* RenderComponent;  // 0x220(0x8)

}; 



// Class Paper2D.PaperSpriteAtlas
// Size: 0x28(Inherited: 0x28) 
struct UPaperSpriteAtlas : public UObject
{

}; 



// Class Paper2D.PaperSpriteBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{

	struct FSlateBrush MakeBrushFromSprite(struct UPaperSprite* Sprite, int32_t Width, int32_t Height); // Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
}; 



// Class Paper2D.PaperSpriteComponent
// Size: 0x4A0(Inherited: 0x480) 
struct UPaperSpriteComponent : public UMeshComponent
{
	struct UPaperSprite* SourceSprite;  // 0x478(0x8)
	struct UMaterialInterface* MaterialOverride;  // 0x480(0x8)
	struct FLinearColor SpriteColor;  // 0x488(0x10)

	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperSpriteComponent.SetSpriteColor
	bool SetSprite(struct UPaperSprite* NewSprite); // Function Paper2D.PaperSpriteComponent.SetSprite
	struct UPaperSprite* GetSprite(); // Function Paper2D.PaperSpriteComponent.GetSprite
}; 



// Class Paper2D.PaperTerrainActor
// Size: 0x238(Inherited: 0x220) 
struct APaperTerrainActor : public AActor
{
	struct USceneComponent* DummyRoot;  // 0x220(0x8)
	struct UPaperTerrainSplineComponent* SplineComponent;  // 0x228(0x8)
	struct UPaperTerrainComponent* RenderComponent;  // 0x230(0x8)

}; 



// Class Paper2D.PaperTerrainComponent
// Size: 0x4B0(Inherited: 0x450) 
struct UPaperTerrainComponent : public UPrimitiveComponent
{
	struct UPaperTerrainMaterial* TerrainMaterial;  // 0x450(0x8)
	char pad_1112_1 : 7;  // 0x458(0x1)
	bool bClosedSpline : 1;  // 0x458(0x1)
	char pad_1113_1 : 7;  // 0x459(0x1)
	bool bFilledSpline : 1;  // 0x459(0x1)
	char pad_1114[6];  // 0x45A(0x6)
	struct UPaperTerrainSplineComponent* AssociatedSpline;  // 0x460(0x8)
	int32_t randomSeed;  // 0x468(0x4)
	float SegmentOverlapAmount;  // 0x46C(0x4)
	struct FLinearColor TerrainColor;  // 0x470(0x10)
	int32_t ReparamStepsPerSegment;  // 0x480(0x4)
	char ESpriteCollisionMode SpriteCollisionDomain;  // 0x484(0x1)
	char pad_1157[3];  // 0x485(0x3)
	float CollisionThickness;  // 0x488(0x4)
	char pad_1164[4];  // 0x48C(0x4)
	struct UBodySetup* CachedBodySetup;  // 0x490(0x8)
	char pad_1176[24];  // 0x498(0x18)

	void SetTerrainColor(struct FLinearColor NewColor); // Function Paper2D.PaperTerrainComponent.SetTerrainColor
}; 



// Class Paper2D.PaperTerrainMaterial
// Size: 0x48(Inherited: 0x30) 
struct UPaperTerrainMaterial : public UDataAsset
{
	struct TArray<struct FPaperTerrainMaterialRule> Rules;  // 0x30(0x10)
	struct UPaperSprite* InteriorFill;  // 0x40(0x8)

}; 



// Class Paper2D.PaperTerrainSplineComponent
// Size: 0x560(Inherited: 0x550) 
struct UPaperTerrainSplineComponent : public USplineComponent
{
	char pad_1360[16];  // 0x550(0x10)

}; 



// Class Paper2D.PaperTileLayer
// Size: 0x98(Inherited: 0x28) 
struct UPaperTileLayer : public UObject
{
	struct FText LayerName;  // 0x28(0x18)
	int32_t LayerWidth;  // 0x40(0x4)
	int32_t LayerHeight;  // 0x44(0x4)
	char bHiddenInGame : 1;  // 0x48(0x1)
	char bLayerCollides : 1;  // 0x48(0x1)
	char bOverrideCollisionThickness : 1;  // 0x48(0x1)
	char bOverrideCollisionOffset : 1;  // 0x48(0x1)
	char pad_72_1 : 4;  // 0x48(0x1)
	char pad_73[4];  // 0x49(0x4)
	float CollisionThicknessOverride;  // 0x4C(0x4)
	float CollisionOffsetOverride;  // 0x50(0x4)
	struct FLinearColor LayerColor;  // 0x54(0x10)
	int32_t AllocatedWidth;  // 0x64(0x4)
	int32_t AllocatedHeight;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)
	struct TArray<struct FPaperTileInfo> AllocatedCells;  // 0x70(0x10)
	struct UPaperTileSet* TileSet;  // 0x80(0x8)
	struct TArray<int32_t> AllocatedGrid;  // 0x88(0x10)

}; 



// Class Paper2D.PaperTileMap
// Size: 0xA8(Inherited: 0x28) 
struct UPaperTileMap : public UObject
{
	int32_t MapWidth;  // 0x28(0x4)
	int32_t MapHeight;  // 0x2C(0x4)
	int32_t TileWidth;  // 0x30(0x4)
	int32_t TileHeight;  // 0x34(0x4)
	float PixelsPerUnrealUnit;  // 0x38(0x4)
	float SeparationPerTileX;  // 0x3C(0x4)
	float SeparationPerTileY;  // 0x40(0x4)
	float SeparationPerLayer;  // 0x44(0x4)
	struct TSoftObjectPtr<UPaperTileSet> SelectedTileSet;  // 0x48(0x28)
	struct UMaterialInterface* Material;  // 0x70(0x8)
	struct TArray<struct UPaperTileLayer*> TileLayers;  // 0x78(0x10)
	float CollisionThickness;  // 0x88(0x4)
	char ESpriteCollisionMode SpriteCollisionDomain;  // 0x8C(0x1)
	char ETileMapProjectionMode ProjectionMode;  // 0x8D(0x1)
	char pad_142[2];  // 0x8E(0x2)
	int32_t HexSideLength;  // 0x90(0x4)
	char pad_148[4];  // 0x94(0x4)
	struct UBodySetup* BodySetup;  // 0x98(0x8)
	int32_t LayerNameIndex;  // 0xA0(0x4)
	char pad_164[4];  // 0xA4(0x4)

}; 



// Class Paper2D.PaperTileMapActor
// Size: 0x228(Inherited: 0x220) 
struct APaperTileMapActor : public AActor
{
	struct UPaperTileMapComponent* RenderComponent;  // 0x220(0x8)

}; 



// Class Paper2D.PaperTileMapComponent
// Size: 0x4D0(Inherited: 0x480) 
struct UPaperTileMapComponent : public UMeshComponent
{
	int32_t MapWidth;  // 0x478(0x4)
	int32_t MapHeight;  // 0x47C(0x4)
	int32_t TileWidth;  // 0x480(0x4)
	int32_t TileHeight;  // 0x484(0x4)
	struct UPaperTileSet* DefaultLayerTileSet;  // 0x488(0x8)
	struct UMaterialInterface* Material;  // 0x490(0x8)
	struct TArray<struct UPaperTileLayer*> TileLayers;  // 0x498(0x10)
	struct FLinearColor TileMapColor;  // 0x4A8(0x10)
	int32_t UseSingleLayerIndex;  // 0x4B8(0x4)
	char pad_1220_1 : 7;  // 0x4C4(0x1)
	bool bUseSingleLayer : 1;  // 0x4BC(0x1)
	struct UPaperTileMap* TileMap;  // 0x4C0(0x8)
	char pad_1229[3];  // 0x4CD(0x3)

	void SetTileMapColor(struct FLinearColor NewColor); // Function Paper2D.PaperTileMapComponent.SetTileMapColor
	bool SetTileMap(struct UPaperTileMap* NewTileMap); // Function Paper2D.PaperTileMapComponent.SetTileMap
	void SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue); // Function Paper2D.PaperTileMapComponent.SetTile
	void SetLayerColor(struct FLinearColor NewColor, int32_t Layer); // Function Paper2D.PaperTileMapComponent.SetLayerColor
	void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetLayerCollision
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles); // Function Paper2D.PaperTileMapComponent.ResizeMap
	void RebuildCollision(); // Function Paper2D.PaperTileMapComponent.RebuildCollision
	bool OwnsTileMap(); // Function Paper2D.PaperTileMapComponent.OwnsTileMap
	void MakeTileMapEditable(); // Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
	void GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector>& Points, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTilePolygon
	struct FLinearColor GetTileMapColor(); // Function Paper2D.PaperTileMapComponent.GetTileMapColor
	struct FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
	struct FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
	struct FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetTile
	void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers); // Function Paper2D.PaperTileMapComponent.GetMapSize
	struct FLinearColor GetLayerColor(int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetLayerColor
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap
	struct UPaperTileLayer* AddNewLayer(); // Function Paper2D.PaperTileMapComponent.AddNewLayer
}; 



// Class Paper2D.PaperTileSet
// Size: 0xA8(Inherited: 0x28) 
struct UPaperTileSet : public UObject
{
	struct FIntPoint TileSize;  // 0x28(0x8)
	struct UTexture2D* TileSheet;  // 0x30(0x8)
	struct TArray<struct UTexture*> AdditionalSourceTextures;  // 0x38(0x10)
	struct FIntMargin BorderMargin;  // 0x48(0x10)
	struct FIntPoint PerTileSpacing;  // 0x58(0x8)
	struct FIntPoint DrawingOffset;  // 0x60(0x8)
	int32_t WidthInTiles;  // 0x68(0x4)
	int32_t HeightInTiles;  // 0x6C(0x4)
	int32_t AllocatedWidth;  // 0x70(0x4)
	int32_t AllocatedHeight;  // 0x74(0x4)
	struct TArray<struct FPaperTileMetadata> PerTileData;  // 0x78(0x10)
	struct TArray<struct FPaperTileSetTerrain> Terrains;  // 0x88(0x10)
	int32_t TileWidth;  // 0x98(0x4)
	int32_t TileHeight;  // 0x9C(0x4)
	int32_t Margin;  // 0xA0(0x4)
	int32_t Spacing;  // 0xA4(0x4)

}; 



