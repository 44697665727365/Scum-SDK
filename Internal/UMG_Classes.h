#pragma once 
#include <UMG_Structs.h>
 
 
 
// Class UMG.WidgetTree
// Size: 0x30(Inherited: 0x28) 
struct UWidgetTree : public UObject
{
	struct UWidget* RootWidget;  // 0x28(0x8)

}; 



// Class UMG.TextLayoutWidget
// Size: 0x128(Inherited: 0x108) 
struct UTextLayoutWidget : public UWidget
{
	struct FShapedTextOptions ShapedTextOptions;  // 0x108(0x3)
	char ETextJustify Justification;  // 0x10B(0x1)
	uint8_t  WrappingPolicy;  // 0x10C(0x1)
	char AutoWrapText : 1;  // 0x10D(0x1)
	char pad_269_1 : 7;  // 0x10D(0x1)
	char pad_270[3];  // 0x10E(0x3)
	float WrapTextAt;  // 0x110(0x4)
	struct FMargin Margin;  // 0x114(0x10)
	float LineHeightPercentage;  // 0x124(0x4)

	void SetJustification(char ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification
}; 



// Class UMG.RichTextBlock
// Size: 0x678(Inherited: 0x128) 
struct URichTextBlock : public UTextLayoutWidget
{
	struct FText Text;  // 0x128(0x18)
	struct UDataTable* TextStyleSet;  // 0x140(0x8)
	struct TArray<URichTextBlockDecorator*> DecoratorClasses;  // 0x148(0x10)
	char pad_344_1 : 7;  // 0x158(0x1)
	bool bOverrideDefaultStyle : 1;  // 0x158(0x1)
	char pad_345[7];  // 0x159(0x7)
	struct FTextBlockStyle DefaultTextStyleOverride;  // 0x160(0x270)
	float MinDesiredWidth;  // 0x3D0(0x4)
	uint8_t  TextTransformPolicy;  // 0x3D4(0x1)
	char pad_981[3];  // 0x3D5(0x3)
	struct FTextBlockStyle DefaultTextStyle;  // 0x3D8(0x270)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators;  // 0x648(0x10)
	char pad_1624[32];  // 0x658(0x20)

	void SetTextTransformPolicy(uint8_t  InTransformPolicy); // Function UMG.RichTextBlock.SetTextTransformPolicy
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet
	void SetText(struct FText& InText); // Function UMG.RichTextBlock.SetText
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText
	struct FText GetText(); // Function UMG.RichTextBlock.GetText
	struct URichTextBlockDecorator* GetDecoratorByClass(URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
}; 



// Class UMG.Image
// Size: 0x210(Inherited: 0x108) 
struct UImage : public UWidget
{
	struct FSlateBrush Brush;  // 0x108(0x88)
	struct FDelegate BrushDelegate;  // 0x190(0x10)
	struct FLinearColor ColorAndOpacity;  // 0x1A0(0x10)
	struct FDelegate ColorAndOpacityDelegate;  // 0x1B0(0x10)
	char pad_448_1 : 7;  // 0x1C0(0x1)
	bool bFlipForRightToLeftFlowDirection : 1;  // 0x1C0(0x1)
	char pad_449[3];  // 0x1C1(0x3)
	struct FDelegate OnMouseButtonDownEvent;  // 0x1C4(0x10)
	char pad_468[60];  // 0x1D4(0x3C)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor
	void SetBrushSize(struct FVector2D DesiredSize); // Function UMG.Image.SetBrushSize
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Image.SetBrush
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial
}; 



// Class UMG.ContentWidget
// Size: 0x120(Inherited: 0x120) 
struct UContentWidget : public UPanelWidget
{

	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent
	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot
	struct UWidget* GetContent(); // Function UMG.ContentWidget.GetContent
}; 



// Class UMG.Visual
// Size: 0x28(Inherited: 0x28) 
struct UVisual : public UObject
{

}; 



// Class UMG.Widget
// Size: 0x108(Inherited: 0x28) 
struct UWidget : public UVisual
{
	struct UPanelSlot* Slot;  // 0x28(0x8)
	struct FDelegate bIsEnabledDelegate;  // 0x30(0x10)
	struct FText ToolTipText;  // 0x40(0x18)
	struct FDelegate ToolTipTextDelegate;  // 0x58(0x10)
	struct UWidget* ToolTipWidget;  // 0x68(0x8)
	struct FDelegate ToolTipWidgetDelegate;  // 0x70(0x10)
	struct FDelegate VisibilityDelegate;  // 0x80(0x10)
	struct FWidgetTransform RenderTransform;  // 0x90(0x1C)
	struct FVector2D RenderTransformPivot;  // 0xAC(0x8)
	char bIsVariable : 1;  // 0xB4(0x1)
	char bCreatedByConstructionScript : 1;  // 0xB4(0x1)
	char bIsEnabled : 1;  // 0xB4(0x1)
	char bOverride_Cursor : 1;  // 0xB4(0x1)
	char pad_180_1 : 4;  // 0xB4(0x1)
	char pad_181[4];  // 0xB5(0x4)
	struct USlateAccessibleWidgetData* AccessibleWidgetData;  // 0xB8(0x8)
	char bIsVolatile : 1;  // 0xC0(0x1)
	char pad_192_1 : 7;  // 0xC0(0x1)
	char EMouseCursor Cursor;  // 0xC1(0x1)
	uint8_t  Clipping;  // 0xC2(0x1)
	uint8_t  Visibility;  // 0xC3(0x1)
	float RenderOpacity;  // 0xC4(0x4)
	struct UWidgetNavigation* Navigation;  // 0xC8(0x8)
	uint8_t  FlowDirectionPreference;  // 0xD0(0x1)
	char pad_209[39];  // 0xD1(0x27)
	struct TArray<struct UPropertyBinding*> NativeBindings;  // 0xF8(0x10)

	void SetVisibility(uint8_t  InVisibility); // Function UMG.Widget.SetVisibility
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus
	void SetToolTipText(struct FText& InToolTipText); // Function UMG.Widget.SetToolTipText
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot
	void SetRenderTransformAngle(float angle); // Function UMG.Widget.SetRenderTransformAngle
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity
	void SetNavigationRuleExplicit(uint8_t  Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit
	void SetNavigationRuleCustomBoundary(uint8_t  Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary
	void SetNavigationRuleCustom(uint8_t  Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom
	void SetNavigationRuleBase(uint8_t  Direction, uint8_t  Rule); // Function UMG.Widget.SetNavigationRuleBase
	void SetNavigationRule(uint8_t  Direction, uint8_t  Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled
	void SetFocus(); // Function UMG.Widget.SetFocus
	void SetCursor(char EMouseCursor InCursor); // Function UMG.Widget.SetCursor
	void SetClipping(uint8_t  InClipping); // Function UMG.Widget.SetClipping
	void SetAllNavigationRules(uint8_t  Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules
	void ResetCursor(); // Function UMG.Widget.ResetCursor
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
	bool IsVisible(); // Function UMG.Widget.IsVisible
	bool IsHovered(); // Function UMG.Widget.IsHovered
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature
	uint8_t  GetVisibility(); // Function UMG.Widget.GetVisibility
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature
	uint8_t  GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer
	char EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize
	uint8_t  GetClipping(); // Function UMG.Widget.GetClipping
	uint8_t  GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature
	struct FText GetAccessibleText(); // Function UMG.Widget.GetAccessibleText
	struct FText GetAccessibleSummaryText(); // Function UMG.Widget.GetAccessibleSummaryText
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass
}; 



// Class UMG.GridSlot
// Size: 0x70(Inherited: 0x38) 
struct UGridSlot : public UPanelSlot
{
	struct FMargin Padding;  // 0x38(0x10)
	char EHorizontalAlignment HorizontalAlignment;  // 0x48(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x49(0x1)
	char pad_74[2];  // 0x4A(0x2)
	int32_t row;  // 0x4C(0x4)
	int32_t RowSpan;  // 0x50(0x4)
	int32_t column;  // 0x54(0x4)
	int32_t ColumnSpan;  // 0x58(0x4)
	int32_t Layer;  // 0x5C(0x4)
	struct FVector2D Nudge;  // 0x60(0x8)
	char pad_104[8];  // 0x68(0x8)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn
}; 



// Class UMG.PanelWidget
// Size: 0x120(Inherited: 0x108) 
struct UPanelWidget : public UWidget
{
	struct TArray<struct UPanelSlot*> Slots;  // 0x108(0x10)
	char pad_280[8];  // 0x118(0x8)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild
}; 



// Class UMG.UserWidget
// Size: 0x260(Inherited: 0x108) 
struct UUserWidget : public UWidget
{
	char pad_264[8];  // 0x108(0x8)
	struct FLinearColor ColorAndOpacity;  // 0x110(0x10)
	struct FDelegate ColorAndOpacityDelegate;  // 0x120(0x10)
	struct FSlateColor ForegroundColor;  // 0x130(0x28)
	struct FDelegate ForegroundColorDelegate;  // 0x158(0x10)
	struct FMulticastInlineDelegate OnVisibilityChanged;  // 0x168(0x10)
	char pad_376[24];  // 0x178(0x18)
	struct FMargin Padding;  // 0x190(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers;  // 0x1A0(0x10)
	struct UUMGSequenceTickManager* AnimationTickManager;  // 0x1B0(0x8)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers;  // 0x1B8(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings;  // 0x1C8(0x10)
	struct UWidgetTree* WidgetTree;  // 0x1D8(0x8)
	int32_t Priority;  // 0x1E0(0x4)
	char bSupportsKeyboardFocus : 1;  // 0x1E4(0x1)
	char bIsFocusable : 1;  // 0x1E4(0x1)
	char bStopAction : 1;  // 0x1E4(0x1)
	char bHasScriptImplementedTick : 1;  // 0x1E4(0x1)
	char bHasScriptImplementedPaint : 1;  // 0x1E4(0x1)
	char pad_484_1 : 3;  // 0x1E4(0x1)
	char pad_485[12];  // 0x1E5(0xC)
	uint8_t  TickFrequency;  // 0x1F0(0x1)
	char pad_497[7];  // 0x1F1(0x7)
	struct UInputComponent* InputComponent;  // 0x1F8(0x8)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks;  // 0x200(0x10)
	char pad_528[80];  // 0x210(0x50)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick
	void StopListeningForInputAction(struct FName ActionName, char EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations
	void SetPositionInViewport(struct FVector2D position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity
	void SetAnimationCurrentTime(struct UWidgetAnimation* InAnimation, float InTime); // Function UMG.UserWidget.SetAnimationCurrentTime
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, char EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, char EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchStarted
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchMoved
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Function UMG.UserWidget.OnTouchGesture
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchEnded
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown
	void OnPaint(struct FPaintContext& Context); // Function UMG.UserWidget.OnPaint
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseWheel
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseMove
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseLeave
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseEnter
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UMG.UserWidget.OnDragDetected
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath
	void ListenForInputAction(struct FName ActionName, char EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn
	struct APlayerCameraManager* GetOwningPlayerCameraManager(); // Function UMG.UserWidget.GetOwningPlayerCameraManager
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport
	void FlushAnimations(); // Function UMG.UserWidget.FlushAnimations
	void Destruct(); // Function UMG.UserWidget.Destruct
	void Construct(); // Function UMG.UserWidget.Construct
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, uint8_t  AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen
}; 



// Class UMG.TextBlock
// Size: 0x2A8(Inherited: 0x128) 
struct UTextBlock : public UTextLayoutWidget
{
	struct FText Text;  // 0x128(0x18)
	struct FDelegate TextDelegate;  // 0x140(0x10)
	struct FSlateColor ColorAndOpacity;  // 0x150(0x28)
	struct FDelegate ColorAndOpacityDelegate;  // 0x178(0x10)
	struct FSlateFontInfo Font;  // 0x188(0x58)
	struct FSlateBrush StrikeBrush;  // 0x1E0(0x88)
	struct FVector2D ShadowOffset;  // 0x268(0x8)
	struct FLinearColor ShadowColorAndOpacity;  // 0x270(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate;  // 0x280(0x10)
	float MinDesiredWidth;  // 0x290(0x4)
	char pad_660_1 : 7;  // 0x294(0x1)
	bool bWrapWithInvalidationPanel : 1;  // 0x294(0x1)
	char pad_661_1 : 7;  // 0x295(0x1)
	bool bAutoWrapText : 1;  // 0x295(0x1)
	uint8_t  TextTransformPolicy;  // 0x296(0x1)
	char pad_663_1 : 7;  // 0x297(0x1)
	bool bSimpleTextMode : 1;  // 0x297(0x1)
	char pad_664[16];  // 0x298(0x10)

	void SetTextTransformPolicy(uint8_t  InTransformPolicy); // Function UMG.TextBlock.SetTextTransformPolicy
	void SetText(struct FText InText); // Function UMG.TextBlock.SetText
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText
	struct FText GetText(); // Function UMG.TextBlock.GetText
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial
}; 



// Class UMG.RichTextBlockDecorator
// Size: 0x28(Inherited: 0x28) 
struct URichTextBlockDecorator : public UObject
{

}; 



// Class UMG.MovieScene2DTransformPropertySystem
// Size: 0x58(Inherited: 0x58) 
struct UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{

}; 



// Class UMG.ComboBoxString
// Size: 0xE00(Inherited: 0x108) 
struct UComboBoxString : public UWidget
{
	struct TArray<struct FString> DefaultOptions;  // 0x108(0x10)
	struct FString SelectedOption;  // 0x118(0x10)
	struct FComboBoxStyle WidgetStyle;  // 0x128(0x3F0)
	struct FTableRowStyle ItemStyle;  // 0x518(0x7C8)
	struct FMargin ContentPadding;  // 0xCE0(0x10)
	float MaxListHeight;  // 0xCF0(0x4)
	char pad_3316_1 : 7;  // 0xCF4(0x1)
	bool HasDownArrow : 1;  // 0xCF4(0x1)
	char pad_3317_1 : 7;  // 0xCF5(0x1)
	bool EnableGamepadNavigationMode : 1;  // 0xCF5(0x1)
	char pad_3318[2];  // 0xCF6(0x2)
	struct FSlateFontInfo Font;  // 0xCF8(0x58)
	struct FSlateColor ForegroundColor;  // 0xD50(0x28)
	char pad_3448_1 : 7;  // 0xD78(0x1)
	bool bIsFocusable : 1;  // 0xD78(0x1)
	char pad_3449[3];  // 0xD79(0x3)
	struct FDelegate OnGenerateWidgetEvent;  // 0xD7C(0x10)
	char pad_3468[4];  // 0xD8C(0x4)
	struct FMulticastInlineDelegate OnSelectionChanged;  // 0xD90(0x10)
	struct FMulticastInlineDelegate OnOpening;  // 0xDA0(0x10)
	char pad_3504[80];  // 0xDB0(0x50)

	void SetSelectedOption(struct FString option); // Function UMG.ComboBoxString.SetSelectedOption
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex
	bool RemoveOption(struct FString option); // Function UMG.ComboBoxString.RemoveOption
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex
	int32_t FindOptionIndex(struct FString option); // Function UMG.ComboBoxString.FindOptionIndex
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions
	void AddOption(struct FString option); // Function UMG.ComboBoxString.AddOption
}; 



// Class UMG.Button
// Size: 0x428(Inherited: 0x120) 
struct UButton : public UContentWidget
{
	struct USlateWidgetStyleAsset* Style;  // 0x120(0x8)
	struct FButtonStyle WidgetStyle;  // 0x128(0x278)
	struct FLinearColor ColorAndOpacity;  // 0x3A0(0x10)
	struct FLinearColor BackgroundColor;  // 0x3B0(0x10)
	char EButtonClickMethod ClickMethod;  // 0x3C0(0x1)
	char EButtonTouchMethod TouchMethod;  // 0x3C1(0x1)
	char EButtonPressMethod PressMethod;  // 0x3C2(0x1)
	char pad_963_1 : 7;  // 0x3C3(0x1)
	bool IsFocusable : 1;  // 0x3C3(0x1)
	char pad_964[4];  // 0x3C4(0x4)
	struct FMulticastInlineDelegate OnClicked;  // 0x3C8(0x10)
	struct FMulticastInlineDelegate OnPressed;  // 0x3D8(0x10)
	struct FMulticastInlineDelegate OnReleased;  // 0x3E8(0x10)
	struct FMulticastInlineDelegate OnHovered;  // 0x3F8(0x10)
	struct FMulticastInlineDelegate OnUnhovered;  // 0x408(0x10)
	char pad_1048[16];  // 0x418(0x10)

	void SetTouchMethod(char EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod
	void SetStyle(struct FButtonStyle& InStyle); // Function UMG.Button.SetStyle
	void SetPressMethod(char EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity
	void SetClickMethod(char EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor
	bool IsPressed(); // Function UMG.Button.IsPressed
}; 



// Class UMG.DynamicEntryBox
// Size: 0x1E0(Inherited: 0x1D8) 
struct UDynamicEntryBox : public UDynamicEntryBoxBase
{
	UUserWidget* EntryWidgetClass;  // 0x1D8(0x8)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry
	struct UUserWidget* BP_CreateEntryOfClass(UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry
}; 



// Class UMG.MultiLineEditableText
// Size: 0x470(Inherited: 0x128) 
struct UMultiLineEditableText : public UTextLayoutWidget
{
	struct FText Text;  // 0x128(0x18)
	struct FText HintText;  // 0x140(0x18)
	struct FDelegate HintTextDelegate;  // 0x158(0x10)
	struct FTextBlockStyle WidgetStyle;  // 0x168(0x270)
	char pad_984_1 : 7;  // 0x3D8(0x1)
	bool bIsReadOnly : 1;  // 0x3D8(0x1)
	char pad_985[7];  // 0x3D9(0x7)
	struct FSlateFontInfo Font;  // 0x3E0(0x58)
	char pad_1080_1 : 7;  // 0x438(0x1)
	bool SelectAllTextWhenFocused : 1;  // 0x438(0x1)
	char pad_1081_1 : 7;  // 0x439(0x1)
	bool ClearTextSelectionOnFocusLoss : 1;  // 0x439(0x1)
	char pad_1082_1 : 7;  // 0x43A(0x1)
	bool RevertTextOnEscape : 1;  // 0x43A(0x1)
	char pad_1083_1 : 7;  // 0x43B(0x1)
	bool ClearKeyboardFocusOnCommit : 1;  // 0x43B(0x1)
	char pad_1084_1 : 7;  // 0x43C(0x1)
	bool AllowContextMenu : 1;  // 0x43C(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;  // 0x43D(0x1)
	uint8_t  VirtualKeyboardDismissAction;  // 0x43E(0x1)
	char pad_1087[1];  // 0x43F(0x1)
	struct FMulticastInlineDelegate OnTextChanged;  // 0x440(0x10)
	struct FMulticastInlineDelegate OnTextCommitted;  // 0x450(0x10)
	char pad_1120[16];  // 0x460(0x10)

	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText
}; 



// Class UMG.WrapBox
// Size: 0x148(Inherited: 0x120) 
struct UWrapBox : public UPanelWidget
{
	struct FVector2D InnerSlotPadding;  // 0x120(0x8)
	float WrapWidth;  // 0x128(0x4)
	float WrapSize;  // 0x12C(0x4)
	char pad_304_1 : 7;  // 0x130(0x1)
	bool bExplicitWrapWidth : 1;  // 0x130(0x1)
	char pad_305_1 : 7;  // 0x131(0x1)
	bool bExplicitWrapSize : 1;  // 0x131(0x1)
	char EOrientation Orientation;  // 0x132(0x1)
	char pad_307[21];  // 0x133(0x15)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox
}; 



// Class UMG.CanvasPanel
// Size: 0x130(Inherited: 0x120) 
struct UCanvasPanel : public UPanelWidget
{
	char pad_288[16];  // 0x120(0x10)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas
}; 



// Class UMG.PropertyBinding
// Size: 0x60(Inherited: 0x28) 
struct UPropertyBinding : public UObject
{
	struct TWeakObjectPtr<UObject> SourceObject;  // 0x28(0x8)
	struct FDynamicPropertyPath SourcePath;  // 0x30(0x28)
	struct FName DestinationProperty;  // 0x58(0x8)

}; 



// Class UMG.WidgetSwitcher
// Size: 0x138(Inherited: 0x120) 
struct UWidgetSwitcher : public UPanelWidget
{
	int32_t ActiveWidgetIndex;  // 0x120(0x4)
	char pad_292[20];  // 0x124(0x14)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget
}; 



// Class UMG.UserObjectListEntryLibrary
// Size: 0x28(Inherited: 0x28) 
struct UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{

	struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject
}; 



// Class UMG.DragDropOperation
// Size: 0x88(Inherited: 0x28) 
struct UDragDropOperation : public UObject
{
	struct FString Tag;  // 0x28(0x10)
	struct UObject* Payload;  // 0x38(0x8)
	struct UWidget* DefaultDragVisual;  // 0x40(0x8)
	uint8_t  Pivot;  // 0x48(0x1)
	char pad_73[3];  // 0x49(0x3)
	struct FVector2D Offset;  // 0x4C(0x8)
	char pad_84[4];  // 0x54(0x4)
	struct FMulticastInlineDelegate OnDrop;  // 0x58(0x10)
	struct FMulticastInlineDelegate OnDragCancelled;  // 0x68(0x10)
	struct FMulticastInlineDelegate OnDragged;  // 0x78(0x10)

	void Drop(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Drop
	void Dragged(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Dragged
	void DragCancelled(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.DragCancelled
}; 



// Class UMG.EditableTextBox
// Size: 0xA38(Inherited: 0x108) 
struct UEditableTextBox : public UWidget
{
	struct FText Text;  // 0x108(0x18)
	struct FDelegate TextDelegate;  // 0x120(0x10)
	struct FEditableTextBoxStyle WidgetStyle;  // 0x130(0x7F8)
	struct USlateWidgetStyleAsset* Style;  // 0x928(0x8)
	struct FText HintText;  // 0x930(0x18)
	struct FDelegate HintTextDelegate;  // 0x948(0x10)
	struct FSlateFontInfo Font;  // 0x958(0x58)
	struct FLinearColor ForegroundColor;  // 0x9B0(0x10)
	struct FLinearColor BackgroundColor;  // 0x9C0(0x10)
	struct FLinearColor ReadOnlyForegroundColor;  // 0x9D0(0x10)
	char pad_2528_1 : 7;  // 0x9E0(0x1)
	bool IsReadOnly : 1;  // 0x9E0(0x1)
	char pad_2529_1 : 7;  // 0x9E1(0x1)
	bool IsPassword : 1;  // 0x9E1(0x1)
	char pad_2530[2];  // 0x9E2(0x2)
	float MinimumDesiredWidth;  // 0x9E4(0x4)
	struct FMargin Padding;  // 0x9E8(0x10)
	char pad_2552_1 : 7;  // 0x9F8(0x1)
	bool IsCaretMovedWhenGainFocus : 1;  // 0x9F8(0x1)
	char pad_2553_1 : 7;  // 0x9F9(0x1)
	bool SelectAllTextWhenFocused : 1;  // 0x9F9(0x1)
	char pad_2554_1 : 7;  // 0x9FA(0x1)
	bool RevertTextOnEscape : 1;  // 0x9FA(0x1)
	char pad_2555_1 : 7;  // 0x9FB(0x1)
	bool ClearKeyboardFocusOnCommit : 1;  // 0x9FB(0x1)
	char pad_2556_1 : 7;  // 0x9FC(0x1)
	bool SelectAllTextOnCommit : 1;  // 0x9FC(0x1)
	char pad_2557_1 : 7;  // 0x9FD(0x1)
	bool AllowContextMenu : 1;  // 0x9FD(0x1)
	char EVirtualKeyboardType KeyboardType;  // 0x9FE(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;  // 0x9FF(0x1)
	uint8_t  VirtualKeyboardTrigger;  // 0xA00(0x1)
	uint8_t  VirtualKeyboardDismissAction;  // 0xA01(0x1)
	char ETextJustify Justification;  // 0xA02(0x1)
	struct FShapedTextOptions ShapedTextOptions;  // 0xA03(0x3)
	char pad_2566[2];  // 0xA06(0x2)
	struct FMulticastInlineDelegate OnTextChanged;  // 0xA08(0x10)
	struct FMulticastInlineDelegate OnTextCommitted;  // 0xA18(0x10)
	char pad_2600[16];  // 0xA28(0x10)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText
	void SetJustification(char ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	bool HasError(); // Function UMG.EditableTextBox.HasError
	struct FText GetText(); // Function UMG.EditableTextBox.GetText
	void ClearError(); // Function UMG.EditableTextBox.ClearError
}; 



// Class UMG.AsyncTaskDownloadImage
// Size: 0x50(Inherited: 0x30) 
struct UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail;  // 0x40(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage
}; 



// Class UMG.BackgroundBlur
// Size: 0x1D8(Inherited: 0x120) 
struct UBackgroundBlur : public UContentWidget
{
	struct FMargin Padding;  // 0x120(0x10)
	char EHorizontalAlignment HorizontalAlignment;  // 0x130(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x131(0x1)
	char pad_306_1 : 7;  // 0x132(0x1)
	bool bApplyAlphaToBlur : 1;  // 0x132(0x1)
	char pad_307[1];  // 0x133(0x1)
	float BlurStrength;  // 0x134(0x4)
	char pad_312_1 : 7;  // 0x138(0x1)
	bool bOverrideAutoRadiusCalculation : 1;  // 0x138(0x1)
	char pad_313[3];  // 0x139(0x3)
	int32_t BlurRadius;  // 0x13C(0x4)
	struct FSlateBrush LowQualityFallbackBrush;  // 0x140(0x88)
	char pad_456[16];  // 0x1C8(0x10)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur
}; 



// Class UMG.PanelSlot
// Size: 0x38(Inherited: 0x28) 
struct UPanelSlot : public UVisual
{
	struct UPanelWidget* Parent;  // 0x28(0x8)
	struct UWidget* Content;  // 0x30(0x8)

}; 



// Class UMG.UserListEntryLibrary
// Size: 0x28(Inherited: 0x28) 
struct UUserListEntryLibrary : public UBlueprintFunctionLibrary
{

	bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected
	bool IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemExpanded
	struct UListViewBase* GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.GetOwningListView
}; 



// Class UMG.DynamicEntryBoxBase
// Size: 0x1D8(Inherited: 0x108) 
struct UDynamicEntryBoxBase : public UWidget
{
	uint8_t  EntryBoxType;  // 0x108(0x1)
	char pad_265[3];  // 0x109(0x3)
	struct FVector2D EntrySpacing;  // 0x10C(0x8)
	char pad_276[4];  // 0x114(0x4)
	struct TArray<struct FVector2D> SpacingPattern;  // 0x118(0x10)
	struct FSlateChildSize EntrySizeRule;  // 0x128(0x8)
	char EHorizontalAlignment EntryHorizontalAlignment;  // 0x130(0x1)
	char EVerticalAlignment EntryVerticalAlignment;  // 0x131(0x1)
	char pad_306[2];  // 0x132(0x2)
	int32_t MaxElementSize;  // 0x134(0x4)
	struct FRadialBoxSettings RadialBoxSettings;  // 0x138(0x10)
	char pad_328[16];  // 0x148(0x10)
	struct FUserWidgetPool EntryWidgetPool;  // 0x158(0x80)

	void SetRadialSettings(struct FRadialBoxSettings& InSettings); // Function UMG.DynamicEntryBoxBase.SetRadialSettings
	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries
}; 



// Class UMG.BackgroundBlurSlot
// Size: 0x60(Inherited: 0x38) 
struct UBackgroundBlurSlot : public UPanelSlot
{
	struct FMargin Padding;  // 0x38(0x10)
	char EHorizontalAlignment HorizontalAlignment;  // 0x48(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x49(0x1)
	char pad_74[22];  // 0x4A(0x16)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
}; 



// Class UMG.BrushBinding
// Size: 0x68(Inherited: 0x60) 
struct UBrushBinding : public UPropertyBinding
{
	char pad_96[8];  // 0x60(0x8)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue
}; 



// Class UMG.BoolBinding
// Size: 0x60(Inherited: 0x60) 
struct UBoolBinding : public UPropertyBinding
{

	bool GetValue(); // Function UMG.BoolBinding.GetValue
}; 



// Class UMG.Border
// Size: 0x270(Inherited: 0x120) 
struct UBorder : public UContentWidget
{
	char EHorizontalAlignment HorizontalAlignment;  // 0x120(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x121(0x1)
	char bShowEffectWhenDisabled : 1;  // 0x122(0x1)
	char pad_290_1 : 7;  // 0x122(0x1)
	char pad_291[2];  // 0x123(0x2)
	struct FLinearColor ContentColorAndOpacity;  // 0x124(0x10)
	struct FDelegate ContentColorAndOpacityDelegate;  // 0x134(0x10)
	struct FMargin Padding;  // 0x144(0x10)
	char pad_340[4];  // 0x154(0x4)
	struct FSlateBrush Background;  // 0x158(0x88)
	struct FDelegate BackgroundDelegate;  // 0x1E0(0x10)
	struct FLinearColor BrushColor;  // 0x1F0(0x10)
	struct FDelegate BrushColorDelegate;  // 0x200(0x10)
	struct FVector2D DesiredSizeScale;  // 0x210(0x8)
	char pad_536_1 : 7;  // 0x218(0x1)
	bool bFlipForRightToLeftFlowDirection : 1;  // 0x218(0x1)
	char pad_537[3];  // 0x219(0x3)
	struct FDelegate OnMouseButtonDownEvent;  // 0x21C(0x10)
	struct FDelegate OnMouseButtonUpEvent;  // 0x22C(0x10)
	struct FDelegate OnMouseMoveEvent;  // 0x23C(0x10)
	struct FDelegate OnMouseDoubleClickEvent;  // 0x24C(0x10)
	char pad_604[20];  // 0x25C(0x14)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Border.SetBrush
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial
}; 



// Class UMG.BorderSlot
// Size: 0x60(Inherited: 0x38) 
struct UBorderSlot : public UPanelSlot
{
	struct FMargin Padding;  // 0x38(0x10)
	char EHorizontalAlignment HorizontalAlignment;  // 0x48(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x49(0x1)
	char pad_74[22];  // 0x4A(0x16)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment
}; 



// Class UMG.ScrollBar
// Size: 0x610(Inherited: 0x108) 
struct UScrollBar : public UWidget
{
	struct FScrollBarStyle WidgetStyle;  // 0x108(0x4D0)
	struct USlateWidgetStyleAsset* Style;  // 0x5D8(0x8)
	char pad_1504_1 : 7;  // 0x5E0(0x1)
	bool bAlwaysShowScrollbar : 1;  // 0x5E0(0x1)
	char pad_1505_1 : 7;  // 0x5E1(0x1)
	bool bAlwaysShowScrollbarTrack : 1;  // 0x5E1(0x1)
	char EOrientation Orientation;  // 0x5E2(0x1)
	char pad_1507[1];  // 0x5E3(0x1)
	struct FVector2D Thickness;  // 0x5E4(0x8)
	struct FMargin Padding;  // 0x5EC(0x10)
	char pad_1532[20];  // 0x5FC(0x14)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState
}; 



// Class UMG.ButtonSlot
// Size: 0x60(Inherited: 0x38) 
struct UButtonSlot : public UPanelSlot
{
	struct FMargin Padding;  // 0x38(0x10)
	char EHorizontalAlignment HorizontalAlignment;  // 0x48(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x49(0x1)
	char pad_74[22];  // 0x4A(0x16)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment
}; 



// Class UMG.CanvasPanelSlot
// Size: 0x70(Inherited: 0x38) 
struct UCanvasPanelSlot : public UPanelSlot
{
	struct FAnchorData LayoutData;  // 0x38(0x28)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bAutoSize : 1;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	int32_t ZOrder;  // 0x64(0x4)
	char pad_104[8];  // 0x68(0x8)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum
	void SetLayout(struct FAnchorData& InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment
}; 



// Class UMG.CheckBox
// Size: 0x770(Inherited: 0x120) 
struct UCheckBox : public UContentWidget
{
	uint8_t  CheckedState;  // 0x120(0x1)
	char pad_289[3];  // 0x121(0x3)
	struct FDelegate CheckedStateDelegate;  // 0x124(0x10)
	char pad_308[4];  // 0x134(0x4)
	struct FCheckBoxStyle WidgetStyle;  // 0x138(0x580)
	struct USlateWidgetStyleAsset* Style;  // 0x6B8(0x8)
	struct USlateBrushAsset* UncheckedImage;  // 0x6C0(0x8)
	struct USlateBrushAsset* UncheckedHoveredImage;  // 0x6C8(0x8)
	struct USlateBrushAsset* UncheckedPressedImage;  // 0x6D0(0x8)
	struct USlateBrushAsset* CheckedImage;  // 0x6D8(0x8)
	struct USlateBrushAsset* CheckedHoveredImage;  // 0x6E0(0x8)
	struct USlateBrushAsset* CheckedPressedImage;  // 0x6E8(0x8)
	struct USlateBrushAsset* UndeterminedImage;  // 0x6F0(0x8)
	struct USlateBrushAsset* UndeterminedHoveredImage;  // 0x6F8(0x8)
	struct USlateBrushAsset* UndeterminedPressedImage;  // 0x700(0x8)
	char EHorizontalAlignment HorizontalAlignment;  // 0x708(0x1)
	char pad_1801[3];  // 0x709(0x3)
	struct FMargin Padding;  // 0x70C(0x10)
	char pad_1820[4];  // 0x71C(0x4)
	struct FSlateColor BorderBackgroundColor;  // 0x720(0x28)
	char EButtonClickMethod ClickMethod;  // 0x748(0x1)
	char EButtonTouchMethod TouchMethod;  // 0x749(0x1)
	char EButtonPressMethod PressMethod;  // 0x74A(0x1)
	char pad_1867_1 : 7;  // 0x74B(0x1)
	bool IsFocusable : 1;  // 0x74B(0x1)
	char pad_1868[4];  // 0x74C(0x4)
	struct FMulticastInlineDelegate OnCheckStateChanged;  // 0x750(0x10)
	char pad_1888[16];  // 0x760(0x10)

	void SetTouchMethod(char EButtonTouchMethod InTouchMethod); // Function UMG.CheckBox.SetTouchMethod
	void SetPressMethod(char EButtonPressMethod InPressMethod); // Function UMG.CheckBox.SetPressMethod
	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked
	void SetClickMethod(char EButtonClickMethod InClickMethod); // Function UMG.CheckBox.SetClickMethod
	void SetCheckedState(uint8_t  InCheckedState); // Function UMG.CheckBox.SetCheckedState
	bool IsPressed(); // Function UMG.CheckBox.IsPressed
	bool IsChecked(); // Function UMG.CheckBox.IsChecked
	uint8_t  GetCheckedState(); // Function UMG.CheckBox.GetCheckedState
}; 



// Class UMG.UserObjectListEntry
// Size: 0x28(Inherited: 0x28) 
struct UUserObjectListEntry : public UUserListEntry
{

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet
}; 



// Class UMG.EditableText
// Size: 0x460(Inherited: 0x108) 
struct UEditableText : public UWidget
{
	struct FText Text;  // 0x108(0x18)
	struct FDelegate TextDelegate;  // 0x120(0x10)
	struct FText HintText;  // 0x130(0x18)
	struct FDelegate HintTextDelegate;  // 0x148(0x10)
	struct FEditableTextStyle WidgetStyle;  // 0x158(0x220)
	struct USlateWidgetStyleAsset* Style;  // 0x378(0x8)
	struct USlateBrushAsset* BackgroundImageSelected;  // 0x380(0x8)
	struct USlateBrushAsset* BackgroundImageComposing;  // 0x388(0x8)
	struct USlateBrushAsset* CaretImage;  // 0x390(0x8)
	struct FSlateFontInfo Font;  // 0x398(0x58)
	struct FSlateColor ColorAndOpacity;  // 0x3F0(0x28)
	char pad_1048_1 : 7;  // 0x418(0x1)
	bool IsReadOnly : 1;  // 0x418(0x1)
	char pad_1049_1 : 7;  // 0x419(0x1)
	bool IsPassword : 1;  // 0x419(0x1)
	char pad_1050[2];  // 0x41A(0x2)
	float MinimumDesiredWidth;  // 0x41C(0x4)
	char pad_1056_1 : 7;  // 0x420(0x1)
	bool IsCaretMovedWhenGainFocus : 1;  // 0x420(0x1)
	char pad_1057_1 : 7;  // 0x421(0x1)
	bool SelectAllTextWhenFocused : 1;  // 0x421(0x1)
	char pad_1058_1 : 7;  // 0x422(0x1)
	bool RevertTextOnEscape : 1;  // 0x422(0x1)
	char pad_1059_1 : 7;  // 0x423(0x1)
	bool ClearKeyboardFocusOnCommit : 1;  // 0x423(0x1)
	char pad_1060_1 : 7;  // 0x424(0x1)
	bool SelectAllTextOnCommit : 1;  // 0x424(0x1)
	char pad_1061_1 : 7;  // 0x425(0x1)
	bool AllowContextMenu : 1;  // 0x425(0x1)
	char EVirtualKeyboardType KeyboardType;  // 0x426(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;  // 0x427(0x1)
	uint8_t  VirtualKeyboardTrigger;  // 0x428(0x1)
	uint8_t  VirtualKeyboardDismissAction;  // 0x429(0x1)
	char ETextJustify Justification;  // 0x42A(0x1)
	struct FShapedTextOptions ShapedTextOptions;  // 0x42B(0x3)
	char pad_1070[2];  // 0x42E(0x2)
	struct FMulticastInlineDelegate OnTextChanged;  // 0x430(0x10)
	struct FMulticastInlineDelegate OnTextCommitted;  // 0x440(0x10)
	char pad_1104[16];  // 0x450(0x10)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText
	void SetJustification(char ETextJustify InJustification); // Function UMG.EditableText.SetJustification
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	struct FText GetText(); // Function UMG.EditableText.GetText
}; 



// Class UMG.CheckedStateBinding
// Size: 0x68(Inherited: 0x60) 
struct UCheckedStateBinding : public UPropertyBinding
{
	char pad_96[8];  // 0x60(0x8)

	uint8_t  GetValue(); // Function UMG.CheckedStateBinding.GetValue
}; 



// Class UMG.CircularThrobber
// Size: 0x1C0(Inherited: 0x108) 
struct UCircularThrobber : public UWidget
{
	int32_t NumberOfPieces;  // 0x108(0x4)
	float Period;  // 0x10C(0x4)
	float Radius;  // 0x110(0x4)
	char pad_276[4];  // 0x114(0x4)
	struct USlateBrushAsset* PieceImage;  // 0x118(0x8)
	struct FSlateBrush Image;  // 0x120(0x88)
	char pad_424_1 : 7;  // 0x1A8(0x1)
	bool bEnableRadius : 1;  // 0x1A8(0x1)
	char pad_425[23];  // 0x1A9(0x17)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces
}; 



// Class UMG.InputKeySelector
// Size: 0x700(Inherited: 0x108) 
struct UInputKeySelector : public UWidget
{
	struct FButtonStyle WidgetStyle;  // 0x108(0x278)
	struct FTextBlockStyle TextStyle;  // 0x380(0x270)
	struct FInputChord SelectedKey;  // 0x5F0(0x20)
	struct FSlateFontInfo Font;  // 0x610(0x58)
	struct FMargin Margin;  // 0x668(0x10)
	struct FLinearColor ColorAndOpacity;  // 0x678(0x10)
	struct FText KeySelectionText;  // 0x688(0x18)
	struct FText NoKeySpecifiedText;  // 0x6A0(0x18)
	char pad_1720_1 : 7;  // 0x6B8(0x1)
	bool bAllowModifierKeys : 1;  // 0x6B8(0x1)
	char pad_1721_1 : 7;  // 0x6B9(0x1)
	bool bAllowGamepadKeys : 1;  // 0x6B9(0x1)
	char pad_1722[6];  // 0x6BA(0x6)
	struct TArray<struct FKey> EscapeKeys;  // 0x6C0(0x10)
	struct FMulticastInlineDelegate OnKeySelected;  // 0x6D0(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged;  // 0x6E0(0x10)
	char pad_1776[16];  // 0x6F0(0x10)

	void SetTextBlockVisibility(uint8_t  InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility
	void SetSelectedKey(struct FInputChord& InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // Function UMG.InputKeySelector.SetEscapeKeys
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey
}; 



// Class UMG.OverlaySlot
// Size: 0x58(Inherited: 0x38) 
struct UOverlaySlot : public UPanelSlot
{
	char pad_56[8];  // 0x38(0x8)
	struct FMargin Padding;  // 0x40(0x10)
	char EHorizontalAlignment HorizontalAlignment;  // 0x50(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x51(0x1)
	char pad_82[6];  // 0x52(0x6)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment
}; 



// Class UMG.ColorBinding
// Size: 0x68(Inherited: 0x60) 
struct UColorBinding : public UPropertyBinding
{
	char pad_96[8];  // 0x60(0x8)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue
}; 



// Class UMG.ComboBox
// Size: 0x140(Inherited: 0x108) 
struct UComboBox : public UWidget
{
	struct TArray<struct UObject*> Items;  // 0x108(0x10)
	struct FDelegate OnGenerateWidgetEvent;  // 0x118(0x10)
	char pad_296_1 : 7;  // 0x128(0x1)
	bool bIsFocusable : 1;  // 0x128(0x1)
	char pad_297[23];  // 0x129(0x17)

}; 



// Class UMG.ListView
// Size: 0x368(Inherited: 0x218) 
struct UListView : public UListViewBase
{
	char pad_536[192];  // 0x218(0xC0)
	char EOrientation Orientation;  // 0x2D8(0x1)
	char ESelectionMode SelectionMode;  // 0x2D9(0x1)
	uint8_t  ConsumeMouseWheel;  // 0x2DA(0x1)
	char pad_731_1 : 7;  // 0x2DB(0x1)
	bool bClearSelectionOnClick : 1;  // 0x2DB(0x1)
	char pad_732_1 : 7;  // 0x2DC(0x1)
	bool bIsFocusable : 1;  // 0x2DC(0x1)
	char pad_733[3];  // 0x2DD(0x3)
	float EntrySpacing;  // 0x2E0(0x4)
	char pad_740_1 : 7;  // 0x2E4(0x1)
	bool bReturnFocusToSelection : 1;  // 0x2E4(0x1)
	char pad_741[3];  // 0x2E5(0x3)
	struct TArray<struct UObject*> ListItems;  // 0x2E8(0x10)
	char pad_760[16];  // 0x2F8(0x10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized;  // 0x308(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked;  // 0x318(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked;  // 0x328(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged;  // 0x338(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged;  // 0x348(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView;  // 0x358(0x10)

	void SetSelectionMode(char ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem
	void ClearListItems(); // Function UMG.ListView.ClearListItems
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem
	void BP_SetListItems(struct TArray<struct UObject*>& InListItems); // Function UMG.ListView.BP_SetListItems
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible
	bool BP_GetSelectedItems(struct TArray<struct UObject*>& Items); // Function UMG.ListView.BP_GetSelectedItems
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem
}; 



// Class UMG.ExpandableArea
// Size: 0x338(Inherited: 0x108) 
struct UExpandableArea : public UWidget
{
	char pad_264[8];  // 0x108(0x8)
	struct FExpandableAreaStyle Style;  // 0x110(0x120)
	struct FSlateBrush BorderBrush;  // 0x230(0x88)
	struct FSlateColor BorderColor;  // 0x2B8(0x28)
	char pad_736_1 : 7;  // 0x2E0(0x1)
	bool bIsExpanded : 1;  // 0x2E0(0x1)
	char pad_737[3];  // 0x2E1(0x3)
	float MaxHeight;  // 0x2E4(0x4)
	struct FMargin HeaderPadding;  // 0x2E8(0x10)
	struct FMargin AreaPadding;  // 0x2F8(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged;  // 0x308(0x10)
	struct UWidget* HeaderContent;  // 0x318(0x8)
	struct UWidget* BodyContent;  // 0x320(0x8)
	char pad_808[16];  // 0x328(0x10)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded
}; 



// Class UMG.FloatBinding
// Size: 0x60(Inherited: 0x60) 
struct UFloatBinding : public UPropertyBinding
{

	float GetValue(); // Function UMG.FloatBinding.GetValue
}; 



// Class UMG.GridPanel
// Size: 0x150(Inherited: 0x120) 
struct UGridPanel : public UPanelWidget
{
	struct TArray<float> ColumnFill;  // 0x120(0x10)
	struct TArray<float> RowFill;  // 0x130(0x10)
	char pad_320[16];  // 0x140(0x10)

	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid
}; 



// Class UMG.HorizontalBox
// Size: 0x130(Inherited: 0x120) 
struct UHorizontalBox : public UPanelWidget
{
	char pad_288[16];  // 0x120(0x10)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox
}; 



// Class UMG.Int32Binding
// Size: 0x60(Inherited: 0x60) 
struct UInt32Binding : public UPropertyBinding
{

	int32_t GetValue(); // Function UMG.Int32Binding.GetValue
}; 



// Class UMG.HorizontalBoxSlot
// Size: 0x60(Inherited: 0x38) 
struct UHorizontalBoxSlot : public UPanelSlot
{
	char pad_56[8];  // 0x38(0x8)
	struct FMargin Padding;  // 0x40(0x10)
	struct FSlateChildSize Size;  // 0x50(0x8)
	char EHorizontalAlignment HorizontalAlignment;  // 0x58(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x59(0x1)
	char pad_90[6];  // 0x5A(0x6)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
}; 



// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x368(Inherited: 0x328) 
struct UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
	struct UWidgetTree* WidgetTree;  // 0x328(0x8)
	char bClassRequiresNativeTick : 1;  // 0x330(0x1)
	char pad_816_1 : 7;  // 0x330(0x1)
	char pad_817[8];  // 0x331(0x8)
	struct TArray<struct FDelegateRuntimeBinding> Bindings;  // 0x338(0x10)
	struct TArray<struct UWidgetAnimation*> Animations;  // 0x348(0x10)
	struct TArray<struct FName> NamedSlots;  // 0x358(0x10)

}; 



// Class UMG.InvalidationBox
// Size: 0x138(Inherited: 0x120) 
struct UInvalidationBox : public UContentWidget
{
	char pad_288_1 : 7;  // 0x120(0x1)
	bool bCanCache : 1;  // 0x120(0x1)
	char pad_289_1 : 7;  // 0x121(0x1)
	bool CacheRelativeTransforms : 1;  // 0x121(0x1)
	char pad_290[22];  // 0x122(0x16)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache
}; 



// Class UMG.UserListEntry
// Size: 0x28(Inherited: 0x28) 
struct UUserListEntry : public UInterface
{

	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG.UserListEntry.BP_OnItemExpansionChanged
	void BP_OnEntryReleased(); // Function UMG.UserListEntry.BP_OnEntryReleased
}; 



// Class UMG.ListViewBase
// Size: 0x218(Inherited: 0x108) 
struct UListViewBase : public UWidget
{
	UUserWidget* EntryWidgetClass;  // 0x108(0x8)
	float WheelScrollMultiplier;  // 0x110(0x4)
	char pad_276_1 : 7;  // 0x114(0x1)
	bool bEnableScrollAnimation : 1;  // 0x114(0x1)
	char pad_277_1 : 7;  // 0x115(0x1)
	bool bEnableFixedLineOffset : 1;  // 0x115(0x1)
	char pad_278[2];  // 0x116(0x2)
	float FixedLineScrollOffset;  // 0x118(0x4)
	char pad_284[4];  // 0x11C(0x4)
	struct FMulticastInlineDelegate BP_OnEntryGenerated;  // 0x120(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased;  // 0x130(0x10)
	struct FUserWidgetPool EntryWidgetPool;  // 0x140(0x80)
	char pad_448[88];  // 0x1C0(0x58)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset
	void SetScrollbarVisibility(uint8_t  InVisibility); // Function UMG.ListViewBase.SetScrollbarVisibility
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets
}; 



// Class UMG.ListViewDesignerPreviewItem
// Size: 0x28(Inherited: 0x28) 
struct UListViewDesignerPreviewItem : public UObject
{

}; 



// Class UMG.MenuAnchor
// Size: 0x170(Inherited: 0x120) 
struct UMenuAnchor : public UContentWidget
{
	UUserWidget* MenuClass;  // 0x120(0x8)
	struct FDelegate OnGetMenuContentEvent;  // 0x128(0x10)
	struct FDelegate OnGetUserMenuContentEvent;  // 0x138(0x10)
	char EMenuPlacement Placement;  // 0x148(0x1)
	char pad_329_1 : 7;  // 0x149(0x1)
	bool bFitInWindow : 1;  // 0x149(0x1)
	char pad_330_1 : 7;  // 0x14A(0x1)
	bool ShouldDeferPaintingAfterWindowContent : 1;  // 0x14A(0x1)
	char pad_331_1 : 7;  // 0x14B(0x1)
	bool UseApplicationMenuStack : 1;  // 0x14B(0x1)
	char pad_332[4];  // 0x14C(0x4)
	struct FMulticastInlineDelegate OnMenuOpenChanged;  // 0x150(0x10)
	char pad_352[16];  // 0x160(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick
	void SetPlacement(char EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus
	struct UUserWidget* GetUserWidget__DelegateSignature(); // DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow
	void Close(); // Function UMG.MenuAnchor.Close
}; 



// Class UMG.MouseCursorBinding
// Size: 0x60(Inherited: 0x60) 
struct UMouseCursorBinding : public UPropertyBinding
{

	char EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue
}; 



// Class UMG.Overlay
// Size: 0x130(Inherited: 0x120) 
struct UOverlay : public UPanelWidget
{
	char pad_288[16];  // 0x120(0x10)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay
}; 



// Class UMG.MovieScene2DTransformSection
// Size: 0x558(Inherited: 0xE8) 
struct UMovieScene2DTransformSection : public UMovieSceneSection
{
	char pad_232[8];  // 0xE8(0x8)
	struct FMovieScene2DTransformMask TransformMask;  // 0xF0(0x4)
	char pad_244[4];  // 0xF4(0x4)
	struct FMovieSceneFloatChannel Translation[2];  // 0xF8(0x140)
	struct FMovieSceneFloatChannel Rotation;  // 0x238(0xA0)
	struct FMovieSceneFloatChannel Scale[2];  // 0x2D8(0x140)
	struct FMovieSceneFloatChannel Shear[2];  // 0x418(0x140)

}; 



// Class UMG.MovieScene2DTransformTrack
// Size: 0xC0(Inherited: 0xC0) 
struct UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{

}; 



// Class UMG.MovieSceneMarginPropertySystem
// Size: 0x58(Inherited: 0x58) 
struct UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
{

}; 



// Class UMG.MovieSceneMarginSection
// Size: 0x370(Inherited: 0xE8) 
struct UMovieSceneMarginSection : public UMovieSceneSection
{
	char pad_232[8];  // 0xE8(0x8)
	struct FMovieSceneFloatChannel TopCurve;  // 0xF0(0xA0)
	struct FMovieSceneFloatChannel LeftCurve;  // 0x190(0xA0)
	struct FMovieSceneFloatChannel RightCurve;  // 0x230(0xA0)
	struct FMovieSceneFloatChannel BottomCurve;  // 0x2D0(0xA0)

}; 



// Class UMG.MovieSceneMarginTrack
// Size: 0xC0(Inherited: 0xC0) 
struct UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{

}; 



// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0xC0(Inherited: 0xA0) 
struct UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
	char pad_160[8];  // 0xA0(0x8)
	struct TArray<struct FName> BrushPropertyNamePath;  // 0xA8(0x10)
	struct FName TrackName;  // 0xB8(0x8)

}; 



// Class UMG.MultiLineEditableTextBox
// Size: 0xC98(Inherited: 0x128) 
struct UMultiLineEditableTextBox : public UTextLayoutWidget
{
	struct FText Text;  // 0x128(0x18)
	struct FText HintText;  // 0x140(0x18)
	struct FDelegate HintTextDelegate;  // 0x158(0x10)
	struct FEditableTextBoxStyle WidgetStyle;  // 0x168(0x7F8)
	struct FTextBlockStyle TextStyle;  // 0x960(0x270)
	char pad_3024_1 : 7;  // 0xBD0(0x1)
	bool bIsReadOnly : 1;  // 0xBD0(0x1)
	char pad_3025_1 : 7;  // 0xBD1(0x1)
	bool AllowContextMenu : 1;  // 0xBD1(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;  // 0xBD2(0x1)
	uint8_t  VirtualKeyboardDismissAction;  // 0xBD3(0x1)
	char pad_3028[4];  // 0xBD4(0x4)
	struct USlateWidgetStyleAsset* Style;  // 0xBD8(0x8)
	struct FSlateFontInfo Font;  // 0xBE0(0x58)
	struct FLinearColor ForegroundColor;  // 0xC38(0x10)
	struct FLinearColor BackgroundColor;  // 0xC48(0x10)
	struct FLinearColor ReadOnlyForegroundColor;  // 0xC58(0x10)
	struct FMulticastInlineDelegate OnTextChanged;  // 0xC68(0x10)
	struct FMulticastInlineDelegate OnTextCommitted;  // 0xC78(0x10)
	char pad_3208[16];  // 0xC88(0x10)

	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText
}; 



// Class UMG.NamedSlot
// Size: 0x130(Inherited: 0x120) 
struct UNamedSlot : public UContentWidget
{
	char pad_288[16];  // 0x120(0x10)

}; 



// Class UMG.NamedSlotInterface
// Size: 0x28(Inherited: 0x28) 
struct UNamedSlotInterface : public UInterface
{

}; 



// Class UMG.NativeWidgetHost
// Size: 0x118(Inherited: 0x108) 
struct UNativeWidgetHost : public UWidget
{
	char pad_264[16];  // 0x108(0x10)

}; 



// Class UMG.ProgressBar
// Size: 0x318(Inherited: 0x108) 
struct UProgressBar : public UWidget
{
	struct FProgressBarStyle WidgetStyle;  // 0x108(0x1A0)
	struct USlateWidgetStyleAsset* Style;  // 0x2A8(0x8)
	struct USlateBrushAsset* BackgroundImage;  // 0x2B0(0x8)
	struct USlateBrushAsset* FillImage;  // 0x2B8(0x8)
	struct USlateBrushAsset* MarqueeImage;  // 0x2C0(0x8)
	float percent;  // 0x2C8(0x4)
	char EProgressBarFillType BarFillType;  // 0x2CC(0x1)
	char pad_717_1 : 7;  // 0x2CD(0x1)
	bool bIsMarquee : 1;  // 0x2CD(0x1)
	char pad_718[2];  // 0x2CE(0x2)
	struct FVector2D BorderPadding;  // 0x2D0(0x8)
	struct FDelegate PercentDelegate;  // 0x2D8(0x10)
	struct FLinearColor FillColorAndOpacity;  // 0x2E8(0x10)
	struct FDelegate FillColorAndOpacityDelegate;  // 0x2F8(0x10)
	char pad_776[16];  // 0x308(0x10)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity
}; 



// Class UMG.RetainerBox
// Size: 0x150(Inherited: 0x120) 
struct URetainerBox : public UContentWidget
{
	char pad_288_1 : 7;  // 0x120(0x1)
	bool bRetainRender : 1;  // 0x120(0x1)
	char pad_289_1 : 7;  // 0x121(0x1)
	bool RenderOnInvalidation : 1;  // 0x121(0x1)
	char pad_290_1 : 7;  // 0x122(0x1)
	bool RenderOnPhase : 1;  // 0x122(0x1)
	char pad_291[1];  // 0x123(0x1)
	int32_t Phase;  // 0x124(0x4)
	int32_t PhaseCount;  // 0x128(0x4)
	char pad_300[4];  // 0x12C(0x4)
	struct UMaterialInterface* EffectMaterial;  // 0x130(0x8)
	struct FName TextureParameter;  // 0x138(0x8)
	char pad_320[16];  // 0x140(0x10)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter
	void SetRetainRendering(bool bInRetainRendering); // Function UMG.RetainerBox.SetRetainRendering
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial
	void RequestRender(); // Function UMG.RetainerBox.RequestRender
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial
}; 



// Class UMG.RichTextBlockImageDecorator
// Size: 0x30(Inherited: 0x28) 
struct URichTextBlockImageDecorator : public URichTextBlockDecorator
{
	struct UDataTable* ImageSet;  // 0x28(0x8)

}; 



// Class UMG.SafeZone
// Size: 0x138(Inherited: 0x120) 
struct USafeZone : public UContentWidget
{
	char pad_288_1 : 7;  // 0x120(0x1)
	bool PadLeft : 1;  // 0x120(0x1)
	char pad_289_1 : 7;  // 0x121(0x1)
	bool PadRight : 1;  // 0x121(0x1)
	char pad_290_1 : 7;  // 0x122(0x1)
	bool PadTop : 1;  // 0x122(0x1)
	char pad_291_1 : 7;  // 0x123(0x1)
	bool PadBottom : 1;  // 0x123(0x1)
	char pad_292[20];  // 0x124(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad
}; 



// Class UMG.SafeZoneSlot
// Size: 0x60(Inherited: 0x38) 
struct USafeZoneSlot : public UPanelSlot
{
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bIsTitleSafe : 1;  // 0x38(0x1)
	char pad_57[3];  // 0x39(0x3)
	struct FMargin SafeAreaScale;  // 0x3C(0x10)
	char EHorizontalAlignment HAlign;  // 0x4C(0x1)
	char EVerticalAlignment VAlign;  // 0x4D(0x1)
	char pad_78[2];  // 0x4E(0x2)
	struct FMargin Padding;  // 0x50(0x10)

}; 



// Class UMG.ScaleBox
// Size: 0x140(Inherited: 0x120) 
struct UScaleBox : public UContentWidget
{
	char EStretch Stretch;  // 0x120(0x1)
	char EStretchDirection StretchDirection;  // 0x121(0x1)
	char pad_290[2];  // 0x122(0x2)
	float UserSpecifiedScale;  // 0x124(0x4)
	char pad_296_1 : 7;  // 0x128(0x1)
	bool IgnoreInheritedScale : 1;  // 0x128(0x1)
	char pad_297[23];  // 0x129(0x17)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale
	void SetStretchDirection(char EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection
	void SetStretch(char EStretch InStretch); // Function UMG.ScaleBox.SetStretch
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale
}; 



// Class UMG.ScaleBoxSlot
// Size: 0x60(Inherited: 0x38) 
struct UScaleBoxSlot : public UPanelSlot
{
	struct FMargin Padding;  // 0x38(0x10)
	char EHorizontalAlignment HorizontalAlignment;  // 0x48(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x49(0x1)
	char pad_74[22];  // 0x4A(0x16)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment
}; 



// Class UMG.ScrollBox
// Size: 0x880(Inherited: 0x120) 
struct UScrollBox : public UPanelWidget
{
	struct FScrollBoxStyle WidgetStyle;  // 0x120(0x228)
	struct FScrollBarStyle WidgetBarStyle;  // 0x348(0x4D0)
	struct USlateWidgetStyleAsset* Style;  // 0x818(0x8)
	struct USlateWidgetStyleAsset* BarStyle;  // 0x820(0x8)
	char EOrientation Orientation;  // 0x828(0x1)
	uint8_t  ScrollBarVisibility;  // 0x829(0x1)
	uint8_t  ConsumeMouseWheel;  // 0x82A(0x1)
	char pad_2091[1];  // 0x82B(0x1)
	struct FVector2D ScrollbarThickness;  // 0x82C(0x8)
	struct FMargin ScrollbarPadding;  // 0x834(0x10)
	char pad_2116_1 : 7;  // 0x844(0x1)
	bool AlwaysShowScrollbar : 1;  // 0x844(0x1)
	char pad_2117_1 : 7;  // 0x845(0x1)
	bool AlwaysShowScrollbarTrack : 1;  // 0x845(0x1)
	char pad_2118_1 : 7;  // 0x846(0x1)
	bool AllowOverscroll : 1;  // 0x846(0x1)
	char pad_2119_1 : 7;  // 0x847(0x1)
	bool bAnimateWheelScrolling : 1;  // 0x847(0x1)
	uint8_t  NavigationDestination;  // 0x848(0x1)
	char pad_2121[3];  // 0x849(0x3)
	float NavigationScrollPadding;  // 0x84C(0x4)
	uint8_t  ScrollWhenFocusChanges;  // 0x850(0x1)
	char pad_2129_1 : 7;  // 0x851(0x1)
	bool bAllowRightClickDragScrolling : 1;  // 0x851(0x1)
	char pad_2130[2];  // 0x852(0x2)
	float WheelScrollMultiplier;  // 0x854(0x4)
	struct FMulticastInlineDelegate OnUserScrolled;  // 0x858(0x10)
	char pad_2152[24];  // 0x868(0x18)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier
	void SetScrollWhenFocusChanges(uint8_t  NewScrollWhenFocusChanges); // Function UMG.ScrollBox.SetScrollWhenFocusChanges
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset
	void SetScrollbarVisibility(uint8_t  NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollbarVisibility
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding
	void SetOrientation(char EOrientation NewOrientation); // Function UMG.ScrollBox.SetOrientation
	void SetConsumeMouseWheel(uint8_t  NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, uint8_t  ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction
	float GetViewFraction(); // Function UMG.ScrollBox.GetViewFraction
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling
}; 



// Class UMG.ScrollBoxSlot
// Size: 0x58(Inherited: 0x38) 
struct UScrollBoxSlot : public UPanelSlot
{
	struct FMargin Padding;  // 0x38(0x10)
	char EHorizontalAlignment HorizontalAlignment;  // 0x48(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x49(0x1)
	char pad_74[14];  // 0x4A(0xE)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment
}; 



// Class UMG.SizeBox
// Size: 0x158(Inherited: 0x120) 
struct USizeBox : public UContentWidget
{
	char pad_288[16];  // 0x120(0x10)
	float WidthOverride;  // 0x130(0x4)
	float HeightOverride;  // 0x134(0x4)
	float MinDesiredWidth;  // 0x138(0x4)
	float MinDesiredHeight;  // 0x13C(0x4)
	float MaxDesiredWidth;  // 0x140(0x4)
	float MaxDesiredHeight;  // 0x144(0x4)
	float MinAspectRatio;  // 0x148(0x4)
	float MaxAspectRatio;  // 0x14C(0x4)
	char bOverride_WidthOverride : 1;  // 0x150(0x1)
	char bOverride_HeightOverride : 1;  // 0x150(0x1)
	char bOverride_MinDesiredWidth : 1;  // 0x150(0x1)
	char bOverride_MinDesiredHeight : 1;  // 0x150(0x1)
	char bOverride_MaxDesiredWidth : 1;  // 0x150(0x1)
	char bOverride_MaxDesiredHeight : 1;  // 0x150(0x1)
	char bOverride_MinAspectRatio : 1;  // 0x150(0x1)
	char bOverride_MaxAspectRatio : 1;  // 0x150(0x1)
	char pad_337[7];  // 0x151(0x7)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride
}; 



// Class UMG.SizeBoxSlot
// Size: 0x60(Inherited: 0x38) 
struct USizeBoxSlot : public UPanelSlot
{
	struct FMargin Padding;  // 0x38(0x10)
	char pad_72[16];  // 0x48(0x10)
	char EHorizontalAlignment HorizontalAlignment;  // 0x58(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x59(0x1)
	char pad_90[6];  // 0x5A(0x6)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment
}; 



// Class UMG.SlateBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{

	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteVector); // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	float TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	float TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D screenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D screenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D screenPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.ScreenToViewport
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation
	struct FVector2D GetLocalTopLeft(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
	struct FVector2D GetLocalSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B); // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
}; 



// Class UMG.SlateVectorArtData
// Size: 0x60(Inherited: 0x28) 
struct USlateVectorArtData : public UObject
{
	struct TArray<struct FSlateMeshVertex> VertexData;  // 0x28(0x10)
	struct TArray<uint32_t> IndexData;  // 0x38(0x10)
	struct UMaterialInterface* Material;  // 0x48(0x8)
	struct FVector2D ExtentMin;  // 0x50(0x8)
	struct FVector2D ExtentMax;  // 0x58(0x8)

}; 



// Class UMG.SlateAccessibleWidgetData
// Size: 0x80(Inherited: 0x28) 
struct USlateAccessibleWidgetData : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bCanChildrenBeAccessible : 1;  // 0x28(0x1)
	uint8_t  AccessibleBehavior;  // 0x29(0x1)
	uint8_t  AccessibleSummaryBehavior;  // 0x2A(0x1)
	char pad_43[5];  // 0x2B(0x5)
	struct FText AccessibleText;  // 0x30(0x18)
	struct FDelegate AccessibleTextDelegate;  // 0x48(0x10)
	struct FText AccessibleSummaryText;  // 0x58(0x18)
	struct FDelegate AccessibleSummaryTextDelegate;  // 0x70(0x10)

}; 



// Class UMG.Slider
// Size: 0x4F8(Inherited: 0x108) 
struct USlider : public UWidget
{
	float Value;  // 0x108(0x4)
	struct FDelegate ValueDelegate;  // 0x10C(0x10)
	float MinValue;  // 0x11C(0x4)
	float MaxValue;  // 0x120(0x4)
	char pad_292[4];  // 0x124(0x4)
	struct FSliderStyle WidgetStyle;  // 0x128(0x340)
	char EOrientation Orientation;  // 0x468(0x1)
	char pad_1129[3];  // 0x469(0x3)
	struct FLinearColor SliderBarColor;  // 0x46C(0x10)
	struct FLinearColor SliderHandleColor;  // 0x47C(0x10)
	char pad_1164_1 : 7;  // 0x48C(0x1)
	bool IndentHandle : 1;  // 0x48C(0x1)
	char pad_1165_1 : 7;  // 0x48D(0x1)
	bool Locked : 1;  // 0x48D(0x1)
	char pad_1166_1 : 7;  // 0x48E(0x1)
	bool MouseUsesStep : 1;  // 0x48E(0x1)
	char pad_1167_1 : 7;  // 0x48F(0x1)
	bool RequiresControllerLock : 1;  // 0x48F(0x1)
	float StepSize;  // 0x490(0x4)
	char pad_1172_1 : 7;  // 0x494(0x1)
	bool IsFocusable : 1;  // 0x494(0x1)
	char pad_1173[3];  // 0x495(0x3)
	struct FMulticastInlineDelegate OnMouseCaptureBegin;  // 0x498(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd;  // 0x4A8(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin;  // 0x4B8(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd;  // 0x4C8(0x10)
	struct FMulticastInlineDelegate OnValueChanged;  // 0x4D8(0x10)
	char pad_1256[16];  // 0x4E8(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle
	float GetValue(); // Function UMG.Slider.GetValue
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue
}; 



// Class UMG.Spacer
// Size: 0x120(Inherited: 0x108) 
struct USpacer : public UWidget
{
	struct FVector2D Size;  // 0x108(0x8)
	char pad_272[16];  // 0x110(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize
}; 



// Class UMG.SpinBox
// Size: 0x520(Inherited: 0x108) 
struct USpinBox : public UWidget
{
	float Value;  // 0x108(0x4)
	struct FDelegate ValueDelegate;  // 0x10C(0x10)
	char pad_284[4];  // 0x11C(0x4)
	struct FSpinBoxStyle WidgetStyle;  // 0x120(0x2E8)
	struct USlateWidgetStyleAsset* Style;  // 0x408(0x8)
	int32_t MinFractionalDigits;  // 0x410(0x4)
	int32_t MaxFractionalDigits;  // 0x414(0x4)
	char pad_1048_1 : 7;  // 0x418(0x1)
	bool bAlwaysUsesDeltaSnap : 1;  // 0x418(0x1)
	char pad_1049[3];  // 0x419(0x3)
	float Delta;  // 0x41C(0x4)
	float SliderExponent;  // 0x420(0x4)
	char pad_1060[4];  // 0x424(0x4)
	struct FSlateFontInfo Font;  // 0x428(0x58)
	char ETextJustify Justification;  // 0x480(0x1)
	char pad_1153[3];  // 0x481(0x3)
	float MinDesiredWidth;  // 0x484(0x4)
	char pad_1160_1 : 7;  // 0x488(0x1)
	bool ClearKeyboardFocusOnCommit : 1;  // 0x488(0x1)
	char pad_1161_1 : 7;  // 0x489(0x1)
	bool SelectAllTextOnCommit : 1;  // 0x489(0x1)
	char pad_1162[6];  // 0x48A(0x6)
	struct FSlateColor ForegroundColor;  // 0x490(0x28)
	struct FMulticastInlineDelegate OnValueChanged;  // 0x4B8(0x10)
	struct FMulticastInlineDelegate OnValueCommitted;  // 0x4C8(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement;  // 0x4D8(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement;  // 0x4E8(0x10)
	char bOverride_MinValue : 1;  // 0x4F8(0x1)
	char bOverride_MaxValue : 1;  // 0x4F8(0x1)
	char bOverride_MinSliderValue : 1;  // 0x4F8(0x1)
	char bOverride_MaxSliderValue : 1;  // 0x4F8(0x1)
	char pad_1272_1 : 4;  // 0x4F8(0x1)
	char pad_1273[4];  // 0x4F9(0x4)
	float MinValue;  // 0x4FC(0x4)
	float MaxValue;  // 0x500(0x4)
	float MinSliderValue;  // 0x504(0x4)
	float MaxSliderValue;  // 0x508(0x4)
	char pad_1292[20];  // 0x50C(0x14)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, char ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	float GetValue(); // Function UMG.SpinBox.GetValue
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits
	float GetDelta(); // Function UMG.SpinBox.GetDelta
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue
}; 



// Class UMG.TextBinding
// Size: 0x68(Inherited: 0x60) 
struct UTextBinding : public UPropertyBinding
{
	char pad_96[8];  // 0x60(0x8)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue
}; 



// Class UMG.Throbber
// Size: 0x1B0(Inherited: 0x108) 
struct UThrobber : public UWidget
{
	int32_t NumberOfPieces;  // 0x108(0x4)
	char pad_268_1 : 7;  // 0x10C(0x1)
	bool bAnimateHorizontally : 1;  // 0x10C(0x1)
	char pad_269_1 : 7;  // 0x10D(0x1)
	bool bAnimateVertically : 1;  // 0x10D(0x1)
	char pad_270_1 : 7;  // 0x10E(0x1)
	bool bAnimateOpacity : 1;  // 0x10E(0x1)
	char pad_271[1];  // 0x10F(0x1)
	struct USlateBrushAsset* PieceImage;  // 0x110(0x8)
	struct FSlateBrush Image;  // 0x118(0x88)
	char pad_416[16];  // 0x1A0(0x10)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally
}; 



// Class UMG.TileView
// Size: 0x388(Inherited: 0x368) 
struct UTileView : public UListView
{
	float EntryHeight;  // 0x368(0x4)
	float EntryWidth;  // 0x36C(0x4)
	uint8_t  TileAlignment;  // 0x370(0x1)
	char pad_881_1 : 7;  // 0x371(0x1)
	bool bWrapHorizontalNavigation : 1;  // 0x371(0x1)
	char pad_882[22];  // 0x372(0x16)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight
	float GetEntryWidth(); // Function UMG.TileView.GetEntryWidth
	float GetEntryHeight(); // Function UMG.TileView.GetEntryHeight
}; 



// Class UMG.TreeView
// Size: 0x3C0(Inherited: 0x368) 
struct UTreeView : public UListView
{
	char pad_872[16];  // 0x368(0x10)
	struct FDelegate BP_OnGetItemChildren;  // 0x378(0x10)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged;  // 0x388(0x10)
	char pad_920[40];  // 0x398(0x28)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion
	void ExpandAll(); // Function UMG.TreeView.ExpandAll
	void CollapseAll(); // Function UMG.TreeView.CollapseAll
}; 



// Class UMG.UMGSequencePlayer
// Size: 0x3C8(Inherited: 0x28) 
struct UUMGSequencePlayer : public UObject
{
	char pad_40[568];  // 0x28(0x238)
	struct UWidgetAnimation* Animation;  // 0x260(0x8)
	char pad_616[8];  // 0x268(0x8)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // 0x270(0xE8)
	char pad_856[112];  // 0x358(0x70)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag
}; 



// Class UMG.UMGSequenceTickManager
// Size: 0x120(Inherited: 0x28) 
struct UUMGSequenceTickManager : public UObject
{
	struct TSet<struct TWeakObjectPtr<UUserWidget>> WeakUserWidgets;  // 0x28(0x50)
	struct UMovieSceneEntitySystemLinker* Linker;  // 0x78(0x8)
	char pad_128[160];  // 0x80(0xA0)

}; 



// Class UMG.UniformGridPanel
// Size: 0x148(Inherited: 0x120) 
struct UUniformGridPanel : public UPanelWidget
{
	struct FMargin SlotPadding;  // 0x120(0x10)
	float MinDesiredSlotWidth;  // 0x130(0x4)
	float MinDesiredSlotHeight;  // 0x134(0x4)
	char pad_312[16];  // 0x138(0x10)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid
}; 



// Class UMG.UniformGridSlot
// Size: 0x50(Inherited: 0x38) 
struct UUniformGridSlot : public UPanelSlot
{
	char EHorizontalAlignment HorizontalAlignment;  // 0x38(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x39(0x1)
	char pad_58[2];  // 0x3A(0x2)
	int32_t row;  // 0x3C(0x4)
	int32_t column;  // 0x40(0x4)
	char pad_68[12];  // 0x44(0xC)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn
}; 



// Class UMG.VerticalBox
// Size: 0x130(Inherited: 0x120) 
struct UVerticalBox : public UPanelWidget
{
	char pad_288[16];  // 0x120(0x10)

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox
}; 



// Class UMG.VerticalBoxSlot
// Size: 0x60(Inherited: 0x38) 
struct UVerticalBoxSlot : public UPanelSlot
{
	struct FSlateChildSize Size;  // 0x38(0x8)
	struct FMargin Padding;  // 0x40(0x10)
	char pad_80[8];  // 0x50(0x8)
	char EHorizontalAlignment HorizontalAlignment;  // 0x58(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x59(0x1)
	char pad_90[6];  // 0x5A(0x6)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment
}; 



// Class UMG.Viewport
// Size: 0x168(Inherited: 0x120) 
struct UViewport : public UContentWidget
{
	struct FLinearColor BackgroundColor;  // 0x120(0x10)
	char pad_304[56];  // 0x130(0x38)

	struct AActor* Spawn(AActor* ActorClass); // Function UMG.Viewport.Spawn
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation
}; 



// Class UMG.VisibilityBinding
// Size: 0x60(Inherited: 0x60) 
struct UVisibilityBinding : public UPropertyBinding
{

	uint8_t  GetValue(); // Function UMG.VisibilityBinding.GetValue
}; 



// Class UMG.WidgetAnimation
// Size: 0x90(Inherited: 0x60) 
struct UWidgetAnimation : public UMovieSceneSequence
{
	struct UMovieScene* MovieScene;  // 0x60(0x8)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings;  // 0x68(0x10)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool bLegacyFinishOnStop : 1;  // 0x78(0x1)
	char pad_121[7];  // 0x79(0x7)
	struct FString DisplayLabel;  // 0x80(0x10)

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished
}; 



// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x38(Inherited: 0x28) 
struct UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;  // 0x28(0x10)

}; 



// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x48(Inherited: 0x28) 
struct UWidgetAnimationPlayCallbackProxy : public UObject
{
	struct FMulticastInlineDelegate Finished;  // 0x28(0x10)
	char pad_56[16];  // 0x38(0x10)

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, char EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, char EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
}; 



// Class UMG.WidgetBinding
// Size: 0x60(Inherited: 0x60) 
struct UWidgetBinding : public UPropertyBinding
{

	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue
}; 



// Class UMG.WidgetBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{

	struct FEventReply UnlockMouse(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, uint8_t  mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	void SetWindowTitleBarCloseButtonActive(bool bActive); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus
	struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, uint8_t  InMouseLockMode); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
	void SetInputMode_GameOnly(struct APlayerController* PlayerController); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, uint8_t  InMouseLockMode, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
	bool SetHardwareCursor(struct UObject* WorldContextObject, char EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	void SetColorVisionDeficiencyType(uint8_t  Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	void RestorePreviousWindowTitleBarState(); // Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding); // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	struct UObject* GetBrushResource(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, UInterface* Interface, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, UUserWidget* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	struct FEventReply EndDragDrop(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop
	void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
	void DrawText(struct FPaintContext& Context, struct FString inString, struct FVector2D position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText
	void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLines
	void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLine
	void DrawBox(struct FPaintContext& Context, struct FVector2D position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag
	struct UDragDropOperation* CreateDragDropOperation(UDragDropOperation* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	struct UUserWidget* Create(struct UObject* WorldContextObject, UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus
	struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop
}; 



// Class UMG.WidgetComponent
// Size: 0x5A0(Inherited: 0x480) 
struct UWidgetComponent : public UMeshComponent
{
	uint8_t  Space;  // 0x478(0x1)
	uint8_t  TimingPolicy;  // 0x479(0x1)
	UUserWidget* WidgetClass;  // 0x480(0x8)
	struct FIntPoint DrawSize;  // 0x488(0x8)
	char pad_1170_1 : 7;  // 0x492(0x1)
	bool bManuallyRedraw : 1;  // 0x490(0x1)
	char pad_1171_1 : 7;  // 0x493(0x1)
	bool bRedrawRequested : 1;  // 0x491(0x1)
	float RedrawTime;  // 0x494(0x4)
	char pad_1176[8];  // 0x498(0x8)
	struct FIntPoint CurrentDrawSize;  // 0x4A0(0x8)
	char pad_1192_1 : 7;  // 0x4A8(0x1)
	bool bDrawAtDesiredSize : 1;  // 0x4A8(0x1)
	char pad_1193[3];  // 0x4A9(0x3)
	struct FVector2D Pivot;  // 0x4AC(0x8)
	char pad_1204_1 : 7;  // 0x4B4(0x1)
	bool bReceiveHardwareInput : 1;  // 0x4B4(0x1)
	char pad_1205_1 : 7;  // 0x4B5(0x1)
	bool bWindowFocusable : 1;  // 0x4B5(0x1)
	uint8_t  WindowVisibility;  // 0x4B6(0x1)
	char pad_1207_1 : 7;  // 0x4B7(0x1)
	bool bApplyGammaCorrection : 1;  // 0x4B7(0x1)
	struct ULocalPlayer* OwnerPlayer;  // 0x4B8(0x8)
	struct FLinearColor BackgroundColor;  // 0x4C0(0x10)
	struct FLinearColor TintColorAndOpacity;  // 0x4D0(0x10)
	float OpacityFromTexture;  // 0x4E0(0x4)
	uint8_t  BlendMode;  // 0x4E4(0x1)
	char pad_1253_1 : 7;  // 0x4E5(0x1)
	bool bIsTwoSided : 1;  // 0x4E5(0x1)
	char pad_1254_1 : 7;  // 0x4E6(0x1)
	bool TickWhenOffscreen : 1;  // 0x4E6(0x1)
	char pad_1255[1];  // 0x4E7(0x1)
	struct UBodySetup* BodySetup;  // 0x4E8(0x8)
	struct UMaterialInterface* TranslucentMaterial;  // 0x4F0(0x8)
	struct UMaterialInterface* TranslucentMaterial_OneSided;  // 0x4F8(0x8)
	struct UMaterialInterface* OpaqueMaterial;  // 0x500(0x8)
	struct UMaterialInterface* OpaqueMaterial_OneSided;  // 0x508(0x8)
	struct UMaterialInterface* MaskedMaterial;  // 0x510(0x8)
	struct UMaterialInterface* MaskedMaterial_OneSided;  // 0x518(0x8)
	struct UTextureRenderTarget2D* RenderTarget;  // 0x520(0x8)
	struct UMaterialInstanceDynamic* MaterialInstance;  // 0x528(0x8)
	char pad_1328_1 : 7;  // 0x530(0x1)
	bool bAddedToScreen : 1;  // 0x530(0x1)
	char pad_1329_1 : 7;  // 0x531(0x1)
	bool bEditTimeUsable : 1;  // 0x531(0x1)
	char pad_1330[2];  // 0x532(0x2)
	struct FName SharedLayerName;  // 0x534(0x8)
	int32_t LayerZOrder;  // 0x53C(0x4)
	uint8_t  GeometryMode;  // 0x540(0x1)
	char pad_1345[3];  // 0x541(0x3)
	float CylinderArcAngle;  // 0x544(0x4)
	uint8_t  TickMode;  // 0x548(0x1)
	char pad_1353[39];  // 0x549(0x27)
	struct UUserWidget* Widget;  // 0x570(0x8)
	char pad_1400[40];  // 0x578(0x28)

	void SetWindowVisibility(uint8_t  InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable
	void SetWidgetSpace(uint8_t  NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen
	void SetTickMode(uint8_t  InTickMode); // Function UMG.WidgetComponent.SetTickMode
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime
	void SetPivot(struct FVector2D& InPivot); // Function UMG.WidgetComponent.SetPivot
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw
	void SetGeometryMode(uint8_t  InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor
	void RequestRenderUpdate(); // Function UMG.WidgetComponent.RequestRenderUpdate
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw
	bool IsWidgetVisible(); // Function UMG.WidgetComponent.IsWidgetVisible
	uint8_t  GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable
	uint8_t  GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace
	struct UUserWidget* GetWidget(); // Function UMG.WidgetComponent.GetWidget
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw
	uint8_t  GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize
}; 



// Class UMG.WidgetInteractionComponent
// Size: 0x3F0(Inherited: 0x200) 
struct UWidgetInteractionComponent : public USceneComponent
{
	struct FMulticastInlineDelegate OnHoveredWidgetChanged;  // 0x1F8(0x10)
	char pad_528[8];  // 0x210(0x8)
	int32_t VirtualUserIndex;  // 0x218(0x4)
	int32_t PointerIndex;  // 0x21C(0x4)
	char ECollisionChannel TraceChannel;  // 0x220(0x1)
	char pad_545[3];  // 0x221(0x3)
	float InteractionDistance;  // 0x224(0x4)
	uint8_t  InteractionSource;  // 0x228(0x1)
	char pad_553_1 : 7;  // 0x229(0x1)
	bool bEnableHitTesting : 1;  // 0x229(0x1)
	char pad_554_1 : 7;  // 0x22A(0x1)
	bool bShowDebug : 1;  // 0x22A(0x1)
	char pad_555[1];  // 0x22B(0x1)
	float DebugSphereLineThickness;  // 0x22C(0x4)
	float DebugLineThickness;  // 0x230(0x4)
	struct FLinearColor DebugColor;  // 0x234(0x10)
	char pad_580[124];  // 0x244(0x7C)
	struct FHitResult CustomHitResult;  // 0x2C0(0x88)
	struct FVector2D LocalHitLocation;  // 0x348(0x8)
	struct FVector2D LastLocalHitLocation;  // 0x350(0x8)
	struct UWidgetComponent* HoveredWidgetComponent;  // 0x358(0x8)
	struct FHitResult LastHitResult;  // 0x360(0x88)
	char pad_1000_1 : 7;  // 0x3E8(0x1)
	bool bIsHoveredWidgetInteractable : 1;  // 0x3E8(0x1)
	char pad_1001_1 : 7;  // 0x3E9(0x1)
	bool bIsHoveredWidgetFocusable : 1;  // 0x3E9(0x1)
	char pad_1002_1 : 7;  // 0x3EA(0x1)
	bool bIsHoveredWidgetHitTestVisible : 1;  // 0x3EA(0x1)
	char pad_1003[5];  // 0x3EB(0x5)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus
	void SetCustomHitResult(struct FHitResult& HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation
}; 



// Class UMG.WidgetLayoutLibrary
// Size: 0x28(Inherited: 0x28) 
struct UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{

	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& screenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	struct FVector2D GetMousePositionOnPlatform(); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
}; 



// Class UMG.WidgetNavigation
// Size: 0x100(Inherited: 0x28) 
struct UWidgetNavigation : public UObject
{
	struct FWidgetNavigationData Up;  // 0x28(0x24)
	struct FWidgetNavigationData Down;  // 0x4C(0x24)
	struct FWidgetNavigationData Left;  // 0x70(0x24)
	struct FWidgetNavigationData Right;  // 0x94(0x24)
	struct FWidgetNavigationData Next;  // 0xB8(0x24)
	struct FWidgetNavigationData Previous;  // 0xDC(0x24)

}; 



// Class UMG.WidgetSwitcherSlot
// Size: 0x58(Inherited: 0x38) 
struct UWidgetSwitcherSlot : public UPanelSlot
{
	char pad_56[8];  // 0x38(0x8)
	struct FMargin Padding;  // 0x40(0x10)
	char EHorizontalAlignment HorizontalAlignment;  // 0x50(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x51(0x1)
	char pad_82[6];  // 0x52(0x6)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
}; 



// Class UMG.WindowTitleBarArea
// Size: 0x140(Inherited: 0x120) 
struct UWindowTitleBarArea : public UContentWidget
{
	char pad_288_1 : 7;  // 0x120(0x1)
	bool bWindowButtonsEnabled : 1;  // 0x120(0x1)
	char pad_289_1 : 7;  // 0x121(0x1)
	bool bDoubleClickTogglesFullscreen : 1;  // 0x121(0x1)
	char pad_290[30];  // 0x122(0x1E)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment
}; 



// Class UMG.WindowTitleBarAreaSlot
// Size: 0x60(Inherited: 0x38) 
struct UWindowTitleBarAreaSlot : public UPanelSlot
{
	struct FMargin Padding;  // 0x38(0x10)
	char EHorizontalAlignment HorizontalAlignment;  // 0x48(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x49(0x1)
	char pad_74[22];  // 0x4A(0x16)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
}; 



// Class UMG.WrapBoxSlot
// Size: 0x60(Inherited: 0x38) 
struct UWrapBoxSlot : public UPanelSlot
{
	struct FMargin Padding;  // 0x38(0x10)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool bFillEmptySpace : 1;  // 0x48(0x1)
	char pad_73[3];  // 0x49(0x3)
	float FillSpanWhenLessThan;  // 0x4C(0x4)
	char EHorizontalAlignment HorizontalAlignment;  // 0x50(0x1)
	char EVerticalAlignment VerticalAlignment;  // 0x51(0x1)
	char pad_82[14];  // 0x52(0xE)

	void SetVerticalAlignment(char EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding
	void SetHorizontalAlignment(char EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace
}; 



