#pragma once 
#include "SDK.h" 
 
 
// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FGenerateWidgetForString__DelegateSignature
{
	struct FString Item;  // 0x0(0x10)
	struct UWidget* ReturnValue;  // 0x10(0x8)

}; 
// Function UMG.Widget.SetClipping
// Size: 0x1(Inherited: 0x0) 
struct FSetClipping
{
	uint8_t  InClipping;  // 0x0(0x1)

}; 
// DelegateFunction UMG.Widget.GetText__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FGetText__DelegateSignature
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function UMG.Widget.ForceVolatile
// Size: 0x1(Inherited: 0x0) 
struct FForceVolatile
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bForce : 1;  // 0x0(0x1)

}; 
// DelegateFunction UMG.CustomWidgetNavigationDelegate__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FCustomWidgetNavigationDelegate__DelegateSignature
{
	uint8_t  Navigation;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UWidget* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.DynamicEntryBox.BP_CreateEntry
// Size: 0x8(Inherited: 0x0) 
struct FBP_CreateEntry
{
	struct UUserWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
// Size: 0x180(Inherited: 0x0) 
struct FCaptureJoystick
{
	struct FEventReply Reply;  // 0x0(0xB8)
	struct UWidget* CapturingWidget;  // 0xB8(0x8)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool bInAllJoysticks : 1;  // 0xC0(0x1)
	char pad_193[7];  // 0xC1(0x7)
	struct FEventReply ReturnValue;  // 0xC8(0xB8)

}; 
// Function UMG.Viewport.GetViewportWorld
// Size: 0x8(Inherited: 0x0) 
struct FGetViewportWorld
{
	struct UWorld* ReturnValue;  // 0x0(0x8)

}; 
// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FGenerateWidgetForObject__DelegateSignature
{
	struct UObject* Item;  // 0x0(0x8)
	struct UWidget* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.Widget.SetIsEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetIsEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInIsEnabled : 1;  // 0x0(0x1)

}; 
// Function UMG.Widget.HasMouseCapture
// Size: 0x1(Inherited: 0x0) 
struct FHasMouseCapture
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.TextBlock.GetDynamicFontMaterial
// Size: 0x8(Inherited: 0x0) 
struct FGetDynamicFontMaterial
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0(0x8)

}; 
// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FGetCheckBoxState__DelegateSignature
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FGetBool__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.RetainerBox.SetRenderingPhase
// Size: 0x8(Inherited: 0x0) 
struct FSetRenderingPhase
{
	int32_t RenderPhase;  // 0x0(0x4)
	int32_t TotalPhases;  // 0x4(0x4)

}; 
// Function UMG.Widget.GetAccessibleSummaryText
// Size: 0x18(Inherited: 0x0) 
struct FGetAccessibleSummaryText
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// DelegateFunction UMG.OnItemIsHoveredChangedDynamic__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnItemIsHoveredChangedDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bIsHovered : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.Widget.GetAccessibleText
// Size: 0x18(Inherited: 0x0) 
struct FGetAccessibleText
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function UMG.Widget.SetToolTipText
// Size: 0x18(Inherited: 0x0) 
struct FSetToolTipText
{
	struct FText InToolTipText;  // 0x0(0x18)

}; 
// Function UMG.ListView.BP_GetNumItemsSelected
// Size: 0x4(Inherited: 0x0) 
struct FBP_GetNumItemsSelected
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct UMG.RichTextStyleRow
// Size: 0x278(Inherited: 0x8) 
struct FRichTextStyleRow : public FTableRowBase
{
	struct FTextBlockStyle TextStyle;  // 0x8(0x270)

}; 
// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
// Size: 0x118(Inherited: 0x0) 
struct FEqualEqual_SlateBrush
{
	struct FSlateBrush A;  // 0x0(0x88)
	struct FSlateBrush B;  // 0x88(0x88)
	char pad_272_1 : 7;  // 0x110(0x1)
	bool ReturnValue : 1;  // 0x110(0x1)
	char pad_273[7];  // 0x111(0x7)

}; 
// Function UMG.Throbber.SetAnimateHorizontally
// Size: 0x1(Inherited: 0x0) 
struct FSetAnimateHorizontally
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInAnimateHorizontally : 1;  // 0x0(0x1)

}; 
// Function UMG.Widget.GetCachedGeometry
// Size: 0x38(Inherited: 0x0) 
struct FGetCachedGeometry
{
	struct FGeometry ReturnValue;  // 0x0(0x38)

}; 
// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FGetSlateVisibility__DelegateSignature
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function UMG.Widget.GetClipping
// Size: 0x1(Inherited: 0x0) 
struct FGetClipping
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// Size: 0x28(Inherited: 0x0) 
struct FGetAllWidgetsOfClass
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct TArray<struct UUserWidget*> FoundWidgets;  // 0x8(0x10)
	UUserWidget* WidgetClass;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool TopLevelOnly : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function UMG.Widget.GetDesiredSize
// Size: 0x8(Inherited: 0x0) 
struct FGetDesiredSize
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FGetFloat__DelegateSignature
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// Size: 0x98(Inherited: 0x0) 
struct FMakeBrushFromTexture
{
	struct UTexture2D* Texture;  // 0x0(0x8)
	int32_t Width;  // 0x8(0x4)
	int32_t Height;  // 0xC(0x4)
	struct FSlateBrush ReturnValue;  // 0x10(0x88)

}; 
// Function UMG.Widget.GetGameInstance
// Size: 0x8(Inherited: 0x0) 
struct FGetGameInstance
{
	struct UGameInstance* ReturnValue;  // 0x0(0x8)

}; 
// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FGetInt32__DelegateSignature
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.WidgetBlueprintLibrary.SetUserFocus
// Size: 0x180(Inherited: 0x0) 
struct FSetUserFocus
{
	struct FEventReply Reply;  // 0x0(0xB8)
	struct UWidget* FocusWidget;  // 0xB8(0x8)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool bInAllUsers : 1;  // 0xC0(0x1)
	char pad_193[7];  // 0xC1(0x7)
	struct FEventReply ReturnValue;  // 0xC8(0xB8)

}; 
// Function UMG.ListView.SetSelectionMode
// Size: 0x1(Inherited: 0x0) 
struct FSetSelectionMode
{
	char ESelectionMode SelectionMode;  // 0x0(0x1)

}; 
// Function UMG.ScrollBox.SetScrollbarPadding
// Size: 0x10(Inherited: 0x0) 
struct FSetScrollbarPadding
{
	struct FMargin NewScrollbarPadding;  // 0x0(0x10)

}; 
// Function UMG.Widget.HasUserFocus
// Size: 0x10(Inherited: 0x0) 
struct FHasUserFocus
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.Widget.GetIsEnabled
// Size: 0x1(Inherited: 0x0) 
struct FGetIsEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.SizeBox.SetMinAspectRatio
// Size: 0x4(Inherited: 0x0) 
struct FSetMinAspectRatio
{
	float InMinAspectRatio;  // 0x0(0x4)

}; 
// Function UMG.HorizontalBox.AddChildToHorizontalBox
// Size: 0x10(Inherited: 0x0) 
struct FAddChildToHorizontalBox
{
	struct UWidget* Content;  // 0x0(0x8)
	struct UHorizontalBoxSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.Widget.SetNavigationRuleCustomBoundary
// Size: 0x14(Inherited: 0x0) 
struct FSetNavigationRuleCustomBoundary
{
	uint8_t  Direction;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FDelegate InCustomDelegate;  // 0x4(0x10)

}; 
// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FGetLinearColor__DelegateSignature
{
	struct FLinearColor ReturnValue;  // 0x0(0x10)

}; 
// Function UMG.Widget.SetCursor
// Size: 0x1(Inherited: 0x0) 
struct FSetCursor
{
	char EMouseCursor InCursor;  // 0x0(0x1)

}; 
// ScriptStruct UMG.SlateMeshVertex
// Size: 0x3C(Inherited: 0x0) 
struct FSlateMeshVertex
{
	struct FVector2D position;  // 0x0(0x8)
	struct FColor Color;  // 0x8(0x4)
	struct FVector2D UV0;  // 0xC(0x8)
	struct FVector2D UV1;  // 0x14(0x8)
	struct FVector2D UV2;  // 0x1C(0x8)
	struct FVector2D UV3;  // 0x24(0x8)
	struct FVector2D UV4;  // 0x2C(0x8)
	struct FVector2D UV5;  // 0x34(0x8)

}; 
// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FGetMouseCursor__DelegateSignature
{
	char EMouseCursor ReturnValue;  // 0x0(0x1)

}; 
// Function UMG.WidgetBlueprintLibrary.LockMouse
// Size: 0x178(Inherited: 0x0) 
struct FLockMouse
{
	struct FEventReply Reply;  // 0x0(0xB8)
	struct UWidget* CapturingWidget;  // 0xB8(0x8)
	struct FEventReply ReturnValue;  // 0xC0(0xB8)

}; 
// Function UMG.Widget.GetOwningLocalPlayer
// Size: 0x8(Inherited: 0x0) 
struct FGetOwningLocalPlayer
{
	struct ULocalPlayer* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.PanelWidget.GetChildrenCount
// Size: 0x4(Inherited: 0x0) 
struct FGetChildrenCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.Widget.SetRenderScale
// Size: 0x8(Inherited: 0x0) 
struct FSetRenderScale
{
	struct FVector2D Scale;  // 0x0(0x8)

}; 
// Function UMG.Widget.SetRenderTranslation
// Size: 0x8(Inherited: 0x0) 
struct FSetRenderTranslation
{
	struct FVector2D Translation;  // 0x0(0x8)

}; 
// Function UMG.WidgetSwitcher.GetWidgetAtIndex
// Size: 0x10(Inherited: 0x0) 
struct FGetWidgetAtIndex
{
	int32_t Index;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UWidget* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
// Size: 0x1(Inherited: 0x0) 
struct FSetWindowTitleBarCloseButtonActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bActive : 1;  // 0x0(0x1)

}; 
// ScriptStruct UMG.RadialBoxSettings
// Size: 0x10(Inherited: 0x0) 
struct FRadialBoxSettings
{
	float StartingAngle;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bDistributeItemsEvenly : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	float AngleBetweenItems;  // 0x8(0x4)
	float SectorCentralAngle;  // 0xC(0x4)

}; 
// Function UMG.Widget.GetOwningPlayer
// Size: 0x8(Inherited: 0x0) 
struct FGetOwningPlayer
{
	struct APlayerController* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.GetAnchorsInViewport
// Size: 0x10(Inherited: 0x0) 
struct FGetAnchorsInViewport
{
	struct FAnchors ReturnValue;  // 0x0(0x10)

}; 
// Function UMG.Widget.GetPaintSpaceGeometry
// Size: 0x38(Inherited: 0x0) 
struct FGetPaintSpaceGeometry
{
	struct FGeometry ReturnValue;  // 0x0(0x38)

}; 
// Function UMG.WidgetComponent.GetWindowVisiblility
// Size: 0x1(Inherited: 0x0) 
struct FGetWindowVisiblility
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function UMG.Widget.GetParent
// Size: 0x8(Inherited: 0x0) 
struct FGetParent
{
	struct UPanelWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.UserListEntryLibrary.IsListItemExpanded
// Size: 0x18(Inherited: 0x0) 
struct FIsListItemExpanded
{
	struct TScriptInterface<IUserListEntry> UserListEntry;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function UMG.Image.SetOpacity
// Size: 0x4(Inherited: 0x0) 
struct FSetOpacity
{
	float InOpacity;  // 0x0(0x4)

}; 
// Function UMG.Widget.GetRenderOpacity
// Size: 0x4(Inherited: 0x0) 
struct FGetRenderOpacity
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
// Size: 0x78(Inherited: 0x0) 
struct FDrawTextFormatted
{
	struct FPaintContext Context;  // 0x0(0x30)
	struct FText Text;  // 0x30(0x18)
	struct FVector2D position;  // 0x48(0x8)
	struct UFont* Font;  // 0x50(0x8)
	int32_t FontSize;  // 0x58(0x4)
	struct FName FontTypeFace;  // 0x5C(0x8)
	struct FLinearColor Tint;  // 0x64(0x10)
	char pad_116[4];  // 0x74(0x4)

}; 
// Function UMG.Widget.GetRenderTransformAngle
// Size: 0x4(Inherited: 0x0) 
struct FGetRenderTransformAngle
{
	float ReturnValue;  // 0x0(0x4)

}; 
// DelegateFunction UMG.OnVisibilityChangedEvent__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FOnVisibilityChangedEvent__DelegateSignature
{
	uint8_t  InVisibility;  // 0x0(0x1)

}; 
// Function UMG.MenuAnchor.Open
// Size: 0x1(Inherited: 0x0) 
struct FOpen
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bFocusMenu : 1;  // 0x0(0x1)

}; 
// Function UMG.Widget.IsVisible
// Size: 0x1(Inherited: 0x0) 
struct FIsVisible
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.MenuAnchor.ToggleOpen
// Size: 0x1(Inherited: 0x0) 
struct FToggleOpen
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bFocusOnOpen : 1;  // 0x0(0x1)

}; 
// Function UMG.CanvasPanelSlot.SetOffsets
// Size: 0x10(Inherited: 0x0) 
struct FSetOffsets
{
	struct FMargin InOffset;  // 0x0(0x10)

}; 
// Function UMG.WidgetComponent.SetTickMode
// Size: 0x1(Inherited: 0x0) 
struct FSetTickMode
{
	uint8_t  InTickMode;  // 0x0(0x1)

}; 
// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// Size: 0x88(Inherited: 0x0) 
struct FGetSlateBrush__DelegateSignature
{
	struct FSlateBrush ReturnValue;  // 0x0(0x88)

}; 
// Function UMG.Widget.HasFocusedDescendants
// Size: 0x1(Inherited: 0x0) 
struct FHasFocusedDescendants
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.ScaleBox.SetUserSpecifiedScale
// Size: 0x4(Inherited: 0x0) 
struct FSetUserSpecifiedScale
{
	float InUserSpecifiedScale;  // 0x0(0x4)

}; 
// Function UMG.SpinBox.SetMinFractionalDigits
// Size: 0x4(Inherited: 0x0) 
struct FSetMinFractionalDigits
{
	int32_t NewValue;  // 0x0(0x4)

}; 
// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FGetWidget__DelegateSignature
{
	struct UWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.Widget.GetTickSpaceGeometry
// Size: 0x38(Inherited: 0x0) 
struct FGetTickSpaceGeometry
{
	struct FGeometry ReturnValue;  // 0x0(0x38)

}; 
// Function UMG.WidgetAnimation.BindToAnimationStarted
// Size: 0x18(Inherited: 0x0) 
struct FBindToAnimationStarted
{
	struct UUserWidget* Widget;  // 0x0(0x8)
	struct FDelegate Delegate;  // 0x8(0x10)

}; 
// Function UMG.ScaleBox.SetStretch
// Size: 0x1(Inherited: 0x0) 
struct FSetStretch
{
	char EStretch InStretch;  // 0x0(0x1)

}; 
// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// Size: 0x28(Inherited: 0x0) 
struct FGetSlateColor__DelegateSignature
{
	struct FSlateColor ReturnValue;  // 0x0(0x28)

}; 
// ScriptStruct UMG.RichImageRow
// Size: 0x90(Inherited: 0x8) 
struct FRichImageRow : public FTableRowBase
{
	struct FSlateBrush Brush;  // 0x8(0x88)

}; 
// Function UMG.UserListEntryLibrary.IsListItemSelected
// Size: 0x18(Inherited: 0x0) 
struct FIsListItemSelected
{
	struct TScriptInterface<IUserListEntry> UserListEntry;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function UMG.Widget.GetVisibility
// Size: 0x1(Inherited: 0x0) 
struct FGetVisibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function UMG.Widget.HasAnyUserFocus
// Size: 0x1(Inherited: 0x0) 
struct FHasAnyUserFocus
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.Slider.SetValue
// Size: 0x4(Inherited: 0x0) 
struct FSetValue
{
	float InValue;  // 0x0(0x4)

}; 
// Function UMG.Image.SetBrushSize
// Size: 0x8(Inherited: 0x0) 
struct FSetBrushSize
{
	struct FVector2D DesiredSize;  // 0x0(0x8)

}; 
// Function UMG.Widget.HasMouseCaptureByUser
// Size: 0xC(Inherited: 0x0) 
struct FHasMouseCaptureByUser
{
	int32_t UserIndex;  // 0x0(0x4)
	int32_t PointerIndex;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// Size: 0x50(Inherited: 0x0) 
struct FGetInputEventFromKeyEvent
{
	struct FKeyEvent Event;  // 0x0(0x38)
	struct FInputEvent ReturnValue;  // 0x38(0x18)

}; 
// Function UMG.ListView.BP_GetSelectedItem
// Size: 0x8(Inherited: 0x0) 
struct FBP_GetSelectedItem
{
	struct UObject* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.Widget.HasKeyboardFocus
// Size: 0x1(Inherited: 0x0) 
struct FHasKeyboardFocus
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.Widget.HasUserFocusedDescendants
// Size: 0x10(Inherited: 0x0) 
struct FHasUserFocusedDescendants
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.WidgetLayoutLibrary.GetViewportSize
// Size: 0x10(Inherited: 0x0) 
struct FGetViewportSize
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector2D ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.Widget.SetRenderOpacity
// Size: 0x4(Inherited: 0x0) 
struct FSetRenderOpacity
{
	float InOpacity;  // 0x0(0x4)

}; 
// Function UMG.WidgetBinding.GetValue
// Size: 0x8(Inherited: 0x0) 
struct FGetValue
{
	struct UWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.GetOwningPlayerPawn
// Size: 0x8(Inherited: 0x0) 
struct FGetOwningPlayerPawn
{
	struct APawn* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.Widget.IsHovered
// Size: 0x1(Inherited: 0x0) 
struct FIsHovered
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.ListView.BP_SetListItems
// Size: 0x10(Inherited: 0x0) 
struct FBP_SetListItems
{
	struct TArray<struct UObject*> InListItems;  // 0x0(0x10)

}; 
// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
// Size: 0x160(Inherited: 0x0) 
struct FOnPointerEvent__DelegateSignature
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// ScriptStruct UMG.EventReply
// Size: 0xB8(Inherited: 0x0) 
struct FEventReply
{
	char pad_0[184];  // 0x0(0xB8)

}; 
// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
// Size: 0x170(Inherited: 0x0) 
struct FReleaseMouseCapture
{
	struct FEventReply Reply;  // 0x0(0xB8)
	struct FEventReply ReturnValue;  // 0xB8(0xB8)

}; 
// Function UMG.Widget.SetRenderTransform
// Size: 0x1C(Inherited: 0x0) 
struct FSetRenderTransform
{
	struct FWidgetTransform InTransform;  // 0x0(0x1C)

}; 
// Function UMG.UserWidget.OnTouchEnded
// Size: 0x160(Inherited: 0x0) 
struct FOnTouchEnded
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent InTouchEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// DelegateFunction UMG.Widget.OnReply__DelegateSignature
// Size: 0xB8(Inherited: 0x0) 
struct FOnReply__DelegateSignature
{
	struct FEventReply ReturnValue;  // 0x0(0xB8)

}; 
// DelegateFunction UMG.OnExpandableAreaExpansionChanged__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnExpandableAreaExpansionChanged__DelegateSignature
{
	struct UExpandableArea* Area;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bIsExpanded : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.Widget.SetRenderTransformPivot
// Size: 0x8(Inherited: 0x0) 
struct FSetRenderTransformPivot
{
	struct FVector2D Pivot;  // 0x0(0x8)

}; 
// Function UMG.InputKeySelector.SetKeySelectionText
// Size: 0x18(Inherited: 0x0) 
struct FSetKeySelectionText
{
	struct FText InKeySelectionText;  // 0x0(0x18)

}; 
// Function UMG.Widget.SetNavigationRule
// Size: 0xC(Inherited: 0x0) 
struct FSetNavigationRule
{
	uint8_t  Direction;  // 0x0(0x1)
	uint8_t  Rule;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	struct FName WidgetToFocus;  // 0x4(0x8)

}; 
// Function UMG.Widget.SetAllNavigationRules
// Size: 0xC(Inherited: 0x0) 
struct FSetAllNavigationRules
{
	uint8_t  Rule;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName WidgetToFocus;  // 0x4(0x8)

}; 
// Function UMG.UserWidget.OnMouseButtonDoubleClick
// Size: 0x160(Inherited: 0x0) 
struct FOnMouseButtonDoubleClick
{
	struct FGeometry InMyGeometry;  // 0x0(0x38)
	struct FPointerEvent InMouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// Function UMG.Widget.SetNavigationRuleBase
// Size: 0x2(Inherited: 0x0) 
struct FSetNavigationRuleBase
{
	uint8_t  Direction;  // 0x0(0x1)
	uint8_t  Rule;  // 0x1(0x1)

}; 
// Function UMG.Widget.SetNavigationRuleCustom
// Size: 0x14(Inherited: 0x0) 
struct FSetNavigationRuleCustom
{
	uint8_t  Direction;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FDelegate InCustomDelegate;  // 0x4(0x10)

}; 
// ScriptStruct UMG.WidgetTransform
// Size: 0x1C(Inherited: 0x0) 
struct FWidgetTransform
{
	struct FVector2D Translation;  // 0x0(0x8)
	struct FVector2D Scale;  // 0x8(0x8)
	struct FVector2D Shear;  // 0x10(0x8)
	float angle;  // 0x18(0x4)

}; 
// ScriptStruct UMG.WidgetNavigationData
// Size: 0x24(Inherited: 0x0) 
struct FWidgetNavigationData
{
	uint8_t  Rule;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName WidgetToFocus;  // 0x4(0x8)
	struct TWeakObjectPtr<UWidget> Widget;  // 0xC(0x8)
	struct FDelegate CustomDelegate;  // 0x14(0x10)

}; 
// Function UMG.Widget.SetNavigationRuleExplicit
// Size: 0x10(Inherited: 0x0) 
struct FSetNavigationRuleExplicit
{
	uint8_t  Direction;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UWidget* InWidget;  // 0x8(0x8)

}; 
// Function UMG.Widget.SetRenderShear
// Size: 0x8(Inherited: 0x0) 
struct FSetRenderShear
{
	struct FVector2D Shear;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.OnTouchStarted
// Size: 0x160(Inherited: 0x0) 
struct FOnTouchStarted
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent InTouchEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// Function UMG.Widget.SetRenderTransformAngle
// Size: 0x4(Inherited: 0x0) 
struct FSetRenderTransformAngle
{
	float angle;  // 0x0(0x4)

}; 
// ScriptStruct UMG.WidgetAnimationBinding
// Size: 0x24(Inherited: 0x0) 
struct FWidgetAnimationBinding
{
	struct FName WidgetName;  // 0x0(0x8)
	struct FName SlotWidgetName;  // 0x8(0x8)
	struct FGuid AnimationGuid;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bIsRootWidget : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)

}; 
// Function UMG.Widget.SetToolTip
// Size: 0x8(Inherited: 0x0) 
struct FSetToolTip
{
	struct UWidget* Widget;  // 0x0(0x8)

}; 
// Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
// Size: 0x8(Inherited: 0x0) 
struct FUnbindAllFromAnimationStarted
{
	struct UUserWidget* Widget;  // 0x0(0x8)

}; 
// Function UMG.Widget.SetVisibility
// Size: 0x1(Inherited: 0x0) 
struct FSetVisibility
{
	uint8_t  InVisibility;  // 0x0(0x1)

}; 
// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnSelectionChangedEvent__DelegateSignature
{
	struct FString SelectedItem;  // 0x0(0x10)
	char ESelectInfo SelectionType;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
// Size: 0x88(Inherited: 0x0) 
struct FNoResourceBrush
{
	struct FSlateBrush ReturnValue;  // 0x0(0x88)

}; 
// DelegateFunction UMG.DownloadImageDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FDownloadImageDelegate__DelegateSignature
{
	struct UTexture2DDynamic* Texture;  // 0x0(0x8)

}; 
// DelegateFunction UMG.OnDragDropMulticast__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnDragDropMulticast__DelegateSignature
{
	struct UDragDropOperation* Operation;  // 0x0(0x8)

}; 
// Function UMG.WidgetBlueprintLibrary.CaptureMouse
// Size: 0x178(Inherited: 0x0) 
struct FCaptureMouse
{
	struct FEventReply Reply;  // 0x0(0xB8)
	struct UWidget* CapturingWidget;  // 0xB8(0x8)
	struct FEventReply ReturnValue;  // 0xC0(0xB8)

}; 
// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// Size: 0x98(Inherited: 0x0) 
struct FMakeBrushFromMaterial
{
	struct UMaterialInterface* Material;  // 0x0(0x8)
	int32_t Width;  // 0x8(0x4)
	int32_t Height;  // 0xC(0x4)
	struct FSlateBrush ReturnValue;  // 0x10(0x88)

}; 
// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
// Size: 0x178(Inherited: 0x0) 
struct FClearUserFocus
{
	struct FEventReply Reply;  // 0x0(0xB8)
	char pad_184_1 : 7;  // 0xB8(0x1)
	bool bInAllUsers : 1;  // 0xB8(0x1)
	char pad_185[7];  // 0xB9(0x7)
	struct FEventReply ReturnValue;  // 0xC0(0xB8)

}; 
// Function UMG.UserWidget.AddToViewport
// Size: 0x4(Inherited: 0x0) 
struct FAddToViewport
{
	int32_t ZOrder;  // 0x0(0x4)

}; 
// Function UMG.TextBinding.GetStringValue
// Size: 0x10(Inherited: 0x0) 
struct FGetStringValue
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function UMG.EditableTextBox.HasError
// Size: 0x1(Inherited: 0x0) 
struct FHasError
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.SpinBox.SetMaxSliderValue
// Size: 0x4(Inherited: 0x0) 
struct FSetMaxSliderValue
{
	float NewValue;  // 0x0(0x4)

}; 
// Function UMG.CheckBox.IsPressed
// Size: 0x1(Inherited: 0x0) 
struct FIsPressed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetBlueprintLibrary.Create
// Size: 0x20(Inherited: 0x0) 
struct FCreate
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	UUserWidget* WidgetType;  // 0x8(0x8)
	struct APlayerController* OwningPlayer;  // 0x10(0x8)
	struct UUserWidget* ReturnValue;  // 0x18(0x8)

}; 
// Function UMG.PanelWidget.GetAllChildren
// Size: 0x10(Inherited: 0x0) 
struct FGetAllChildren
{
	struct TArray<struct UWidget*> ReturnValue;  // 0x0(0x10)

}; 
// Function UMG.UserWidget.SetForegroundColor
// Size: 0x28(Inherited: 0x0) 
struct FSetForegroundColor
{
	struct FSlateColor InForegroundColor;  // 0x0(0x28)

}; 
// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// Size: 0x10(Inherited: 0x0) 
struct FCreateDragDropOperation
{
	UDragDropOperation* OperationClass;  // 0x0(0x8)
	struct UDragDropOperation* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.InputKeySelector.SetAllowGamepadKeys
// Size: 0x1(Inherited: 0x0) 
struct FSetAllowGamepadKeys
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInAllowGamepadKeys : 1;  // 0x0(0x1)

}; 
// Function UMG.UniformGridPanel.SetSlotPadding
// Size: 0x10(Inherited: 0x0) 
struct FSetSlotPadding
{
	struct FMargin InSlotPadding;  // 0x0(0x10)

}; 
// Function UMG.WidgetBlueprintLibrary.DetectDrag
// Size: 0x190(Inherited: 0x0) 
struct FDetectDrag
{
	struct FEventReply Reply;  // 0x0(0xB8)
	struct UWidget* WidgetDetectingDrag;  // 0xB8(0x8)
	struct FKey DragKey;  // 0xC0(0x18)
	struct FEventReply ReturnValue;  // 0xD8(0xB8)

}; 
// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
// Size: 0x148(Inherited: 0x0) 
struct FDetectDragIfPressed
{
	struct FPointerEvent PointerEvent;  // 0x0(0x70)
	struct UWidget* WidgetDetectingDrag;  // 0x70(0x8)
	struct FKey DragKey;  // 0x78(0x18)
	struct FEventReply ReturnValue;  // 0x90(0xB8)

}; 
// Function UMG.ScrollBox.ScrollWidgetIntoView
// Size: 0x10(Inherited: 0x0) 
struct FScrollWidgetIntoView
{
	struct UWidget* WidgetToFind;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool AnimateScroll : 1;  // 0x8(0x1)
	uint8_t  ScrollDestination;  // 0x9(0x1)
	char pad_10[2];  // 0xA(0x2)
	float Padding;  // 0xC(0x4)

}; 
// Function UMG.WidgetBlueprintLibrary.DrawBox
// Size: 0x58(Inherited: 0x0) 
struct FDrawBox
{
	struct FPaintContext Context;  // 0x0(0x30)
	struct FVector2D position;  // 0x30(0x8)
	struct FVector2D Size;  // 0x38(0x8)
	struct USlateBrushAsset* Brush;  // 0x40(0x8)
	struct FLinearColor Tint;  // 0x48(0x10)

}; 
// ScriptStruct UMG.PaintContext
// Size: 0x30(Inherited: 0x0) 
struct FPaintContext
{
	char pad_0[48];  // 0x0(0x30)

}; 
// DelegateFunction UMG.OnListItemScrolledIntoViewDynamic__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnListItemScrolledIntoViewDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0(0x8)
	struct UUserWidget* Widget;  // 0x8(0x8)

}; 
// Function UMG.WidgetBlueprintLibrary.DrawLine
// Size: 0x58(Inherited: 0x0) 
struct FDrawLine
{
	struct FPaintContext Context;  // 0x0(0x30)
	struct FVector2D PositionA;  // 0x30(0x8)
	struct FVector2D PositionB;  // 0x38(0x8)
	struct FLinearColor Tint;  // 0x40(0x10)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool bAntiAlias : 1;  // 0x50(0x1)
	char pad_81[3];  // 0x51(0x3)
	float Thickness;  // 0x54(0x4)

}; 
// Function UMG.WidgetBlueprintLibrary.DrawLines
// Size: 0x58(Inherited: 0x0) 
struct FDrawLines
{
	struct FPaintContext Context;  // 0x0(0x30)
	struct TArray<struct FVector2D> Points;  // 0x30(0x10)
	struct FLinearColor Tint;  // 0x40(0x10)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool bAntiAlias : 1;  // 0x50(0x1)
	char pad_81[3];  // 0x51(0x3)
	float Thickness;  // 0x54(0x4)

}; 
// Function UMG.WidgetBlueprintLibrary.DrawText
// Size: 0x58(Inherited: 0x0) 
struct FDrawText
{
	struct FPaintContext Context;  // 0x0(0x30)
	struct FString inString;  // 0x30(0x10)
	struct FVector2D position;  // 0x40(0x8)
	struct FLinearColor Tint;  // 0x48(0x10)

}; 
// Function UMG.WidgetBlueprintLibrary.EndDragDrop
// Size: 0x170(Inherited: 0x0) 
struct FEndDragDrop
{
	struct FEventReply Reply;  // 0x0(0xB8)
	struct FEventReply ReturnValue;  // 0xB8(0xB8)

}; 
// Function UMG.CanvasPanelSlot.SetAutoSize
// Size: 0x1(Inherited: 0x0) 
struct FSetAutoSize
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InbAutoSize : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// Size: 0x28(Inherited: 0x0) 
struct FGetAllWidgetsWithInterface
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct TArray<struct UUserWidget*> FoundWidgets;  // 0x8(0x10)
	UInterface* Interface;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool TopLevelOnly : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// Size: 0x20(Inherited: 0x0) 
struct FPressAndReleaseKey
{
	struct FKey Key;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function UMG.WidgetBlueprintLibrary.GetBrushResource
// Size: 0x90(Inherited: 0x0) 
struct FGetBrushResource
{
	struct FSlateBrush Brush;  // 0x0(0x88)
	struct UObject* ReturnValue;  // 0x88(0x8)

}; 
// Function UMG.WidgetBlueprintLibrary.Handled
// Size: 0xB8(Inherited: 0x0) 
struct FHandled
{
	struct FEventReply ReturnValue;  // 0x0(0xB8)

}; 
// Function UMG.PanelWidget.GetChildIndex
// Size: 0x10(Inherited: 0x0) 
struct FGetChildIndex
{
	struct UWidget* Content;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function UMG.CheckBox.GetCheckedState
// Size: 0x1(Inherited: 0x0) 
struct FGetCheckedState
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
// Size: 0x1(Inherited: 0x0) 
struct FSetAlwaysUsesDeltaSnap
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bNewValue : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// Size: 0x90(Inherited: 0x0) 
struct FGetBrushResourceAsMaterial
{
	struct FSlateBrush Brush;  // 0x0(0x88)
	struct UMaterialInterface* ReturnValue;  // 0x88(0x8)

}; 
// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// Size: 0x90(Inherited: 0x0) 
struct FGetBrushResourceAsTexture2D
{
	struct FSlateBrush Brush;  // 0x0(0x88)
	struct UTexture2D* ReturnValue;  // 0x88(0x8)

}; 
// Function UMG.Border.SetContentColorAndOpacity
// Size: 0x10(Inherited: 0x0) 
struct FSetContentColorAndOpacity
{
	struct FLinearColor InContentColorAndOpacity;  // 0x0(0x10)

}; 
// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// Size: 0x8(Inherited: 0x0) 
struct FGetDragDroppingContent
{
	struct UDragDropOperation* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
// Size: 0x20(Inherited: 0x0) 
struct FSetHardwareCursor
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	char EMouseCursor CursorShape;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	struct FName CursorName;  // 0xC(0x8)
	struct FVector2D HotSpot;  // 0x14(0x8)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool ReturnValue : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// Function UMG.ListView.GetItemAt
// Size: 0x10(Inherited: 0x0) 
struct FGetItemAt
{
	int32_t Index;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UObject* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.Image.GetDynamicMaterial
// Size: 0x8(Inherited: 0x0) 
struct FGetDynamicMaterial
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// Size: 0x38(Inherited: 0x0) 
struct FGetInputEventFromCharacterEvent
{
	struct FCharacterEvent Event;  // 0x0(0x20)
	struct FInputEvent ReturnValue;  // 0x20(0x18)

}; 
// Function UMG.UserWidget.OnTouchMoved
// Size: 0x160(Inherited: 0x0) 
struct FOnTouchMoved
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent InTouchEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// Function UMG.SizeBox.SetMinDesiredWidth
// Size: 0x4(Inherited: 0x0) 
struct FSetMinDesiredWidth
{
	float InMinDesiredWidth;  // 0x0(0x4)

}; 
// Function UMG.ScrollBox.SetAlwaysShowScrollbar
// Size: 0x1(Inherited: 0x0) 
struct FSetAlwaysShowScrollbar
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool NewAlwaysShowScrollbar : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// Size: 0x38(Inherited: 0x0) 
struct FGetInputEventFromNavigationEvent
{
	struct FNavigationEvent Event;  // 0x0(0x20)
	struct FInputEvent ReturnValue;  // 0x20(0x18)

}; 
// Function UMG.UserWidget.OnAnimationStarted
// Size: 0x8(Inherited: 0x0) 
struct FOnAnimationStarted
{
	struct UWidgetAnimation* Animation;  // 0x0(0x8)

}; 
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// Size: 0x88(Inherited: 0x0) 
struct FGetInputEventFromPointerEvent
{
	struct FPointerEvent Event;  // 0x0(0x70)
	struct FInputEvent ReturnValue;  // 0x70(0x18)

}; 
// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
// Size: 0x78(Inherited: 0x0) 
struct FGetKeyEventFromAnalogInputEvent
{
	struct FAnalogInputEvent Event;  // 0x0(0x40)
	struct FKeyEvent ReturnValue;  // 0x40(0x38)

}; 
// Function UMG.SlateBlueprintLibrary.ScreenToViewport
// Size: 0x18(Inherited: 0x0) 
struct FScreenToViewport
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector2D screenPosition;  // 0x8(0x8)
	struct FVector2D ViewportPosition;  // 0x10(0x8)

}; 
// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// Size: 0x40(Inherited: 0x0) 
struct FGetSafeZonePadding
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FVector4 SafePadding;  // 0x10(0x10)
	struct FVector2D SafePaddingScale;  // 0x20(0x8)
	char pad_40[8];  // 0x28(0x8)
	struct FVector4 SpillOverPadding;  // 0x30(0x10)

}; 
// Function UMG.ListView.NavigateToIndex
// Size: 0x4(Inherited: 0x0) 
struct FNavigateToIndex
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function UMG.Image.SetBrushFromTextureDynamic
// Size: 0x10(Inherited: 0x0) 
struct FSetBrushFromTextureDynamic
{
	struct UTexture2DDynamic* Texture;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bMatchSize : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.WidgetBlueprintLibrary.IsDragDropping
// Size: 0x1(Inherited: 0x0) 
struct FIsDragDropping
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// Size: 0x90(Inherited: 0x0) 
struct FMakeBrushFromAsset
{
	struct USlateBrushAsset* BrushAsset;  // 0x0(0x8)
	struct FSlateBrush ReturnValue;  // 0x8(0x88)

}; 
// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// Size: 0x178(Inherited: 0x0) 
struct FReleaseJoystickCapture
{
	struct FEventReply Reply;  // 0x0(0xB8)
	char pad_184_1 : 7;  // 0xB8(0x1)
	bool bInAllJoysticks : 1;  // 0xB8(0x1)
	char pad_185[7];  // 0xB9(0x7)
	struct FEventReply ReturnValue;  // 0xC0(0xB8)

}; 
// Function UMG.TileView.SetEntryHeight
// Size: 0x4(Inherited: 0x0) 
struct FSetEntryHeight
{
	float NewHeight;  // 0x0(0x4)

}; 
// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// Size: 0x90(Inherited: 0x0) 
struct FSetBrushResourceToMaterial
{
	struct FSlateBrush Brush;  // 0x0(0x88)
	struct UMaterialInterface* Material;  // 0x88(0x8)

}; 
// Function UMG.Image.SetBrushFromAtlasInterface
// Size: 0x18(Inherited: 0x0) 
struct FSetBrushFromAtlasInterface
{
	struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bMatchSize : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// Size: 0x90(Inherited: 0x0) 
struct FSetBrushResourceToTexture
{
	struct FSlateBrush Brush;  // 0x0(0x88)
	struct UTexture2D* Texture;  // 0x88(0x8)

}; 
// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
// Size: 0x4(Inherited: 0x0) 
struct FSetMinDesiredSlotWidth
{
	float InMinDesiredSlotWidth;  // 0x0(0x4)

}; 
// Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
// Size: 0xC(Inherited: 0x0) 
struct FSetColorVisionDeficiencyType
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Severity;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool CorrectDeficiency : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool ShowCorrectionWithDeficiency : 1;  // 0x9(0x1)
	char pad_10[2];  // 0xA(0x2)

}; 
// Function UMG.DynamicEntryBoxBase.GetNumEntries
// Size: 0x4(Inherited: 0x0) 
struct FGetNumEntries
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
// Size: 0x18(Inherited: 0x0) 
struct FSetInputMode_GameAndUI
{
	struct APlayerController* Target;  // 0x0(0x8)
	struct UWidget* InWidgetToFocus;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bLockMouseToViewport : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool bHideCursorDuringCapture : 1;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)

}; 
// Function UMG.TextBinding.GetTextValue
// Size: 0x18(Inherited: 0x0) 
struct FGetTextValue
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// Size: 0x18(Inherited: 0x0) 
struct FSetInputMode_GameAndUIEx
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct UWidget* InWidgetToFocus;  // 0x8(0x8)
	uint8_t  InMouseLockMode;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool bHideCursorDuringCapture : 1;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)

}; 
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// Size: 0x8(Inherited: 0x0) 
struct FSetInputMode_GameOnly
{
	struct APlayerController* PlayerController;  // 0x0(0x8)

}; 
// Function UMG.ListView.ScrollIndexIntoView
// Size: 0x4(Inherited: 0x0) 
struct FScrollIndexIntoView
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function UMG.Slider.GetNormalizedValue
// Size: 0x4(Inherited: 0x0) 
struct FGetNormalizedValue
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
// Size: 0x18(Inherited: 0x0) 
struct FSetInputMode_UIOnly
{
	struct APlayerController* Target;  // 0x0(0x8)
	struct UWidget* InWidgetToFocus;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bLockMouseToViewport : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function UMG.UserWidget.OnTouchGesture
// Size: 0x160(Inherited: 0x0) 
struct FOnTouchGesture
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent GestureEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
// Size: 0x18(Inherited: 0x0) 
struct FSetInputMode_UIOnlyEx
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct UWidget* InWidgetToFocus;  // 0x8(0x8)
	uint8_t  InMouseLockMode;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// DelegateFunction UMG.OnGetItemChildrenDynamic__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnGetItemChildrenDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0(0x8)
	struct TArray<struct UObject*> Children;  // 0x8(0x10)

}; 
// Function UMG.CanvasPanelSlot.GetZOrder
// Size: 0x4(Inherited: 0x0) 
struct FGetZOrder
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.CanvasPanelSlot.SetLayout
// Size: 0x28(Inherited: 0x0) 
struct FSetLayout
{
	struct FAnchorData InLayoutData;  // 0x0(0x28)

}; 
// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// Size: 0x178(Inherited: 0x0) 
struct FSetMousePosition
{
	struct FEventReply Reply;  // 0x0(0xB8)
	struct FVector2D NewMousePosition;  // 0xB8(0x8)
	struct FEventReply ReturnValue;  // 0xC0(0xB8)

}; 
// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
// Size: 0x4(Inherited: 0x0) 
struct FSetActiveWidgetIndex
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
// Size: 0x10(Inherited: 0x0) 
struct FSetWindowTitleBarOnCloseClickedDelegate
{
	struct FDelegate Delegate;  // 0x0(0x10)

}; 
// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
// Size: 0x10(Inherited: 0x0) 
struct FSetWindowTitleBarState
{
	struct UWidget* TitleBarContent;  // 0x0(0x8)
	uint8_t  mode;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool bTitleBarDragEnabled : 1;  // 0x9(0x1)
	char pad_10_1 : 7;  // 0xA(0x1)
	bool bWindowButtonsVisible : 1;  // 0xA(0x1)
	char pad_11_1 : 7;  // 0xB(0x1)
	bool bTitleBarVisible : 1;  // 0xB(0x1)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function UMG.WidgetBlueprintLibrary.Unhandled
// Size: 0xB8(Inherited: 0x0) 
struct FUnhandled
{
	struct FEventReply ReturnValue;  // 0x0(0xB8)

}; 
// ScriptStruct UMG.AnchorData
// Size: 0x28(Inherited: 0x0) 
struct FAnchorData
{
	struct FMargin Offsets;  // 0x0(0x10)
	struct FAnchors Anchors;  // 0x10(0x10)
	struct FVector2D Alignment;  // 0x20(0x8)

}; 
// Function UMG.WidgetInteractionComponent.PressPointerKey
// Size: 0x18(Inherited: 0x0) 
struct FPressPointerKey
{
	struct FKey Key;  // 0x0(0x18)

}; 
// Function UMG.WidgetBlueprintLibrary.UnlockMouse
// Size: 0x170(Inherited: 0x0) 
struct FUnlockMouse
{
	struct FEventReply Reply;  // 0x0(0xB8)
	struct FEventReply ReturnValue;  // 0xB8(0xB8)

}; 
// Function UMG.RichTextBlock.GetText
// Size: 0x18(Inherited: 0x0) 
struct FGetText
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// DelegateFunction UMG.OnCheckBoxComponentStateChanged__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FOnCheckBoxComponentStateChanged__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsChecked : 1;  // 0x0(0x1)

}; 
// Function UMG.ComboBoxString.AddOption
// Size: 0x10(Inherited: 0x0) 
struct FAddOption
{
	struct FString option;  // 0x0(0x10)

}; 
// Function UMG.CanvasPanelSlot.SetZOrder
// Size: 0x4(Inherited: 0x0) 
struct FSetZOrder
{
	int32_t InZOrder;  // 0x0(0x4)

}; 
// Function UMG.ComboBoxString.FindOptionIndex
// Size: 0x18(Inherited: 0x0) 
struct FFindOptionIndex
{
	struct FString option;  // 0x0(0x10)
	int32_t ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function UMG.ComboBoxString.GetOptionAtIndex
// Size: 0x18(Inherited: 0x0) 
struct FGetOptionAtIndex
{
	int32_t Index;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString ReturnValue;  // 0x8(0x10)

}; 
// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnSpinBoxValueCommittedEvent__DelegateSignature
{
	float InValue;  // 0x0(0x4)
	char ETextCommit CommitMethod;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function UMG.ComboBoxString.GetOptionCount
// Size: 0x4(Inherited: 0x0) 
struct FGetOptionCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.GridSlot.SetNudge
// Size: 0x8(Inherited: 0x0) 
struct FSetNudge
{
	struct FVector2D InNudge;  // 0x0(0x8)

}; 
// Function UMG.ComboBoxString.GetSelectedIndex
// Size: 0x4(Inherited: 0x0) 
struct FGetSelectedIndex
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.UserWidget.SetInputActionPriority
// Size: 0x4(Inherited: 0x0) 
struct FSetInputActionPriority
{
	int32_t NewPriority;  // 0x0(0x4)

}; 
// Function UMG.UserWidget.SetNumLoopsToPlay
// Size: 0x10(Inherited: 0x0) 
struct FSetNumLoopsToPlay
{
	struct UWidgetAnimation* InAnimation;  // 0x0(0x8)
	int32_t NumLoopsToPlay;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function UMG.Throbber.SetAnimateVertically
// Size: 0x1(Inherited: 0x0) 
struct FSetAnimateVertically
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInAnimateVertically : 1;  // 0x0(0x1)

}; 
// Function UMG.ComboBoxString.GetSelectedOption
// Size: 0x10(Inherited: 0x0) 
struct FGetSelectedOption
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function UMG.GridPanel.AddChildToGrid
// Size: 0x18(Inherited: 0x0) 
struct FAddChildToGrid
{
	struct UWidget* Content;  // 0x0(0x8)
	int32_t InRow;  // 0x8(0x4)
	int32_t InColumn;  // 0xC(0x4)
	struct UGridSlot* ReturnValue;  // 0x10(0x8)

}; 
// Function UMG.MenuAnchor.IsOpen
// Size: 0x1(Inherited: 0x0) 
struct FIsOpen
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
// Size: 0x20(Inherited: 0x0) 
struct FScreenToWidgetAbsolute
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector2D screenPosition;  // 0x8(0x8)
	struct FVector2D AbsoluteCoordinate;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bIncludeWindowPosition : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function UMG.ComboBoxString.RemoveOption
// Size: 0x18(Inherited: 0x0) 
struct FRemoveOption
{
	struct FString option;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// DelegateFunction UMG.OnFloatValueChangedEvent__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FOnFloatValueChangedEvent__DelegateSignature
{
	float Value;  // 0x0(0x4)

}; 
// Function UMG.ListView.SetSelectedIndex
// Size: 0x4(Inherited: 0x0) 
struct FSetSelectedIndex
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function UMG.ComboBoxString.SetSelectedOption
// Size: 0x10(Inherited: 0x0) 
struct FSetSelectedOption
{
	struct FString option;  // 0x0(0x10)

}; 
// Function UMG.UserWidget.OnMouseButtonDown
// Size: 0x160(Inherited: 0x0) 
struct FOnMouseButtonDown
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// Function UMG.ScrollBar.SetState
// Size: 0x8(Inherited: 0x0) 
struct FSetState
{
	float InOffsetFraction;  // 0x0(0x4)
	float InThumbSizeFraction;  // 0x4(0x4)

}; 
// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnEditableTextChangedEvent__DelegateSignature
{
	struct FText Text;  // 0x0(0x18)

}; 
// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FOnEditableTextCommittedEvent__DelegateSignature
{
	struct FText Text;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function UMG.DynamicEntryBoxBase.GetAllEntries
// Size: 0x10(Inherited: 0x0) 
struct FGetAllEntries
{
	struct TArray<struct UUserWidget*> ReturnValue;  // 0x0(0x10)

}; 
// Function UMG.MultiLineEditableTextBox.SetHintText
// Size: 0x18(Inherited: 0x0) 
struct FSetHintText
{
	struct FText InHintText;  // 0x0(0x18)

}; 
// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
// Size: 0x38(Inherited: 0x0) 
struct FCreatePlayAnimationTimeRangeProxyObject
{
	struct UUMGSequencePlayer* Result;  // 0x0(0x8)
	struct UUserWidget* Widget;  // 0x8(0x8)
	struct UWidgetAnimation* InAnimation;  // 0x10(0x8)
	float StartAtTime;  // 0x18(0x4)
	float EndAtTime;  // 0x1C(0x4)
	int32_t NumLoopsToPlay;  // 0x20(0x4)
	char EUMGSequencePlayMode PlayMode;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	float PlaybackSpeed;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct UWidgetAnimationPlayCallbackProxy* ReturnValue;  // 0x30(0x8)

}; 
// Function UMG.EditableTextBox.SetIsPassword
// Size: 0x1(Inherited: 0x0) 
struct FSetIsPassword
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsPassword : 1;  // 0x0(0x1)

}; 
// Function UMG.UserWidget.IsAnyAnimationPlaying
// Size: 0x1(Inherited: 0x0) 
struct FIsAnyAnimationPlaying
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
// Size: 0x1(Inherited: 0x0) 
struct FSetIsReadOnly
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bReadOnly : 1;  // 0x0(0x1)

}; 
// Function UMG.TextLayoutWidget.SetJustification
// Size: 0x1(Inherited: 0x0) 
struct FSetJustification
{
	char ETextJustify InJustification;  // 0x0(0x1)

}; 
// Function UMG.RichTextBlock.SetText
// Size: 0x18(Inherited: 0x0) 
struct FSetText
{
	struct FText InText;  // 0x0(0x18)

}; 
// ScriptStruct UMG.ShapedTextOptions
// Size: 0x3(Inherited: 0x0) 
struct FShapedTextOptions
{
	char bOverride_TextShapingMethod : 1;  // 0x0(0x1)
	char bOverride_TextFlowDirection : 1;  // 0x0(0x1)
	char pad_0_1 : 6;  // 0x0(0x1)
	uint8_t  TextShapingMethod;  // 0x1(0x1)
	uint8_t  TextFlowDirection;  // 0x2(0x1)

}; 
// Function UMG.UserWidget.GetAnimationCurrentTime
// Size: 0x10(Inherited: 0x0) 
struct FGetAnimationCurrentTime
{
	struct UWidgetAnimation* InAnimation;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnEditableTextBoxChangedEvent__DelegateSignature
{
	struct FText Text;  // 0x0(0x18)

}; 
// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FOnEditableTextBoxCommittedEvent__DelegateSignature
{
	struct FText Text;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function UMG.MultiLineEditableTextBox.SetError
// Size: 0x18(Inherited: 0x0) 
struct FSetError
{
	struct FText InError;  // 0x0(0x18)

}; 
// Function UMG.WidgetComponent.SetGeometryMode
// Size: 0x1(Inherited: 0x0) 
struct FSetGeometryMode
{
	uint8_t  InGeometryMode;  // 0x0(0x1)

}; 
// Function UMG.InputKeySelector.GetIsSelectingKey
// Size: 0x1(Inherited: 0x0) 
struct FGetIsSelectingKey
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FOnKeySelected__DelegateSignature
{
	struct FInputChord SelectedKey;  // 0x0(0x20)

}; 
// Function UMG.InputKeySelector.SetAllowModifierKeys
// Size: 0x1(Inherited: 0x0) 
struct FSetAllowModifierKeys
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInAllowModifierKeys : 1;  // 0x0(0x1)

}; 
// Function UMG.UserWidget.StopListeningForInputAction
// Size: 0xC(Inherited: 0x0) 
struct FStopListeningForInputAction
{
	struct FName ActionName;  // 0x0(0x8)
	char EInputEvent EventType;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function UMG.UserWidget.IsAnimationPlaying
// Size: 0x10(Inherited: 0x0) 
struct FIsAnimationPlaying
{
	struct UWidgetAnimation* InAnimation;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.InputKeySelector.SetEscapeKeys
// Size: 0x10(Inherited: 0x0) 
struct FSetEscapeKeys
{
	struct TArray<struct FKey> InKeys;  // 0x0(0x10)

}; 
// Function UMG.InputKeySelector.SetNoKeySpecifiedText
// Size: 0x18(Inherited: 0x0) 
struct FSetNoKeySpecifiedText
{
	struct FText InNoKeySpecifiedText;  // 0x0(0x18)

}; 
// Function UMG.BackgroundBlur.SetBlurRadius
// Size: 0x4(Inherited: 0x0) 
struct FSetBlurRadius
{
	int32_t InBlurRadius;  // 0x0(0x4)

}; 
// Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
// Size: 0x40(Inherited: 0x0) 
struct FGetLocalTopLeft
{
	struct FGeometry Geometry;  // 0x0(0x38)
	struct FVector2D ReturnValue;  // 0x38(0x8)

}; 
// Function UMG.InputKeySelector.SetSelectedKey
// Size: 0x20(Inherited: 0x0) 
struct FSetSelectedKey
{
	struct FInputChord InSelectedKey;  // 0x0(0x20)

}; 
// Function UMG.WidgetInteractionComponent.SetFocus
// Size: 0x8(Inherited: 0x0) 
struct FSetFocus
{
	struct UWidget* FocusWidget;  // 0x0(0x8)

}; 
// Function UMG.InputKeySelector.SetTextBlockVisibility
// Size: 0x1(Inherited: 0x0) 
struct FSetTextBlockVisibility
{
	uint8_t  InVisibility;  // 0x0(0x1)

}; 
// DelegateFunction UMG.OnListEntryGeneratedDynamic__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnListEntryGeneratedDynamic__DelegateSignature
{
	struct UUserWidget* Widget;  // 0x0(0x8)

}; 
// DelegateFunction UMG.OnListEntryReleasedDynamic__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnListEntryReleasedDynamic__DelegateSignature
{
	struct UUserWidget* Widget;  // 0x0(0x8)

}; 
// DelegateFunction UMG.SimpleListItemEventDynamic__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FSimpleListItemEventDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0(0x8)

}; 
// DelegateFunction UMG.OnListEntryInitializedDynamic__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnListEntryInitializedDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0(0x8)
	struct UUserWidget* Widget;  // 0x8(0x8)

}; 
// DelegateFunction UMG.OnListItemSelectionChangedDynamic__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnListItemSelectionChangedDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bIsSelected : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.ListView.BP_IsItemVisible
// Size: 0x10(Inherited: 0x0) 
struct FBP_IsItemVisible
{
	struct UObject* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// DelegateFunction UMG.OnMenuOpenChangedEvent__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FOnMenuOpenChangedEvent__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsOpen : 1;  // 0x0(0x1)

}; 
// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// Size: 0x1C(Inherited: 0x0) 
struct FBlueprintWidgetAnimationDelegateBinding
{
	uint8_t  Action;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName AnimationToBind;  // 0x4(0x8)
	struct FName FunctionNameToBind;  // 0xC(0x8)
	struct FName UserTag;  // 0x14(0x8)

}; 
// Function UMG.WidgetInteractionComponent.SendKeyChar
// Size: 0x18(Inherited: 0x0) 
struct FSendKeyChar
{
	struct FString Characters;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bRepeat : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool ReturnValue : 1;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)

}; 
// Function UMG.PanelWidget.AddChild
// Size: 0x10(Inherited: 0x0) 
struct FAddChild
{
	struct UWidget* Content;  // 0x0(0x8)
	struct UPanelSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.PanelWidget.GetChildAt
// Size: 0x10(Inherited: 0x0) 
struct FGetChildAt
{
	int32_t Index;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UWidget* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WrapBoxSlot.SetHorizontalAlignment
// Size: 0x1(Inherited: 0x0) 
struct FSetHorizontalAlignment
{
	char EHorizontalAlignment InHorizontalAlignment;  // 0x0(0x1)

}; 
// Function UMG.PanelWidget.HasAnyChildren
// Size: 0x1(Inherited: 0x0) 
struct FHasAnyChildren
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.PanelWidget.HasChild
// Size: 0x10(Inherited: 0x0) 
struct FHasChild
{
	struct UWidget* Content;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.PanelWidget.RemoveChild
// Size: 0x10(Inherited: 0x0) 
struct FRemoveChild
{
	struct UWidget* Content;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.PanelWidget.RemoveChildAt
// Size: 0x8(Inherited: 0x0) 
struct FRemoveChildAt
{
	int32_t Index;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function UMG.ContentWidget.GetContent
// Size: 0x8(Inherited: 0x0) 
struct FGetContent
{
	struct UWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.CheckBox.SetIsChecked
// Size: 0x1(Inherited: 0x0) 
struct FSetIsChecked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InIsChecked : 1;  // 0x0(0x1)

}; 
// Function UMG.SpinBox.GetMinFractionalDigits
// Size: 0x4(Inherited: 0x0) 
struct FGetMinFractionalDigits
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.Button.SetStyle
// Size: 0x278(Inherited: 0x0) 
struct FSetStyle
{
	struct FButtonStyle InStyle;  // 0x0(0x278)

}; 
// Function UMG.ContentWidget.GetContentSlot
// Size: 0x8(Inherited: 0x0) 
struct FGetContentSlot
{
	struct UPanelSlot* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.CanvasPanelSlot.SetAlignment
// Size: 0x8(Inherited: 0x0) 
struct FSetAlignment
{
	struct FVector2D InAlignment;  // 0x0(0x8)

}; 
// Function UMG.ContentWidget.SetContent
// Size: 0x10(Inherited: 0x0) 
struct FSetContent
{
	struct UWidget* Content;  // 0x0(0x8)
	struct UPanelSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.MenuAnchor.FitInWindow
// Size: 0x1(Inherited: 0x0) 
struct FFitInWindow
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bFit : 1;  // 0x0(0x1)

}; 
// Function UMG.Slider.SetSliderHandleColor
// Size: 0x10(Inherited: 0x0) 
struct FSetSliderHandleColor
{
	struct FLinearColor InValue;  // 0x0(0x10)

}; 
// Function UMG.MenuAnchor.GetMenuPosition
// Size: 0x8(Inherited: 0x0) 
struct FGetMenuPosition
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FGetUserWidget__DelegateSignature
{
	struct UUserWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.MenuAnchor.HasOpenSubMenus
// Size: 0x1(Inherited: 0x0) 
struct FHasOpenSubMenus
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.MenuAnchor.SetPlacement
// Size: 0x1(Inherited: 0x0) 
struct FSetPlacement
{
	char EMenuPlacement InPlacement;  // 0x0(0x1)

}; 
// Function UMG.UserWidget.IsAnimationPlayingForward
// Size: 0x10(Inherited: 0x0) 
struct FIsAnimationPlayingForward
{
	struct UWidgetAnimation* InAnimation;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.CircularThrobber.SetPeriod
// Size: 0x4(Inherited: 0x0) 
struct FSetPeriod
{
	float InPeriod;  // 0x0(0x4)

}; 
// Function UMG.MenuAnchor.ShouldOpenDueToClick
// Size: 0x1(Inherited: 0x0) 
struct FShouldOpenDueToClick
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetInteractionComponent.ReleaseKey
// Size: 0x20(Inherited: 0x0) 
struct FReleaseKey
{
	struct FKey Key;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function UMG.MultiLineEditableTextBox.GetHintText
// Size: 0x18(Inherited: 0x0) 
struct FGetHintText
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnMultiLineEditableTextChangedEvent__DelegateSignature
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function UMG.ListView.BP_NavigateToItem
// Size: 0x8(Inherited: 0x0) 
struct FBP_NavigateToItem
{
	struct UObject* Item;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.PauseAnimation
// Size: 0x10(Inherited: 0x0) 
struct FPauseAnimation
{
	struct UWidgetAnimation* InAnimation;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FOnMultiLineEditableTextCommittedEvent__DelegateSignature
{
	struct FText Text;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function UMG.MultiLineEditableText.SetWidgetStyle
// Size: 0x270(Inherited: 0x0) 
struct FSetWidgetStyle
{
	struct FTextBlockStyle InWidgetStyle;  // 0x0(0x270)

}; 
// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature
{
	struct FText Text;  // 0x0(0x18)

}; 
// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
{
	struct FText Text;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function UMG.UserWidget.SetPlaybackSpeed
// Size: 0x10(Inherited: 0x0) 
struct FSetPlaybackSpeed
{
	struct UWidgetAnimation* InAnimation;  // 0x0(0x8)
	float PlaybackSpeed;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function UMG.MultiLineEditableTextBox.SetTextStyle
// Size: 0x270(Inherited: 0x0) 
struct FSetTextStyle
{
	struct FTextBlockStyle InTextStyle;  // 0x0(0x270)

}; 
// DelegateFunction UMG.OnUserScrolledEvent__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FOnUserScrolledEvent__DelegateSignature
{
	float CurrentOffset;  // 0x0(0x4)

}; 
// Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
// Size: 0x1(Inherited: 0x0) 
struct FGetAlwaysUsesDeltaSnap
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.SpinBox.GetDelta
// Size: 0x4(Inherited: 0x0) 
struct FGetDelta
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.RichTextBlock.SetTextStyleSet
// Size: 0x8(Inherited: 0x0) 
struct FSetTextStyleSet
{
	struct UDataTable* NewTextStyleSet;  // 0x0(0x8)

}; 
// Function UMG.SpinBox.GetMaxFractionalDigits
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxFractionalDigits
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.SpinBox.GetMaxSliderValue
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxSliderValue
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.BackgroundBlur.SetBlurStrength
// Size: 0x4(Inherited: 0x0) 
struct FSetBlurStrength
{
	float InStrength;  // 0x0(0x4)

}; 
// Function UMG.SpinBox.GetMaxValue
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxValue
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.ColorBinding.GetSlateValue
// Size: 0x28(Inherited: 0x0) 
struct FGetSlateValue
{
	struct FSlateColor ReturnValue;  // 0x0(0x28)

}; 
// Function UMG.SpinBox.GetMinSliderValue
// Size: 0x4(Inherited: 0x0) 
struct FGetMinSliderValue
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.SpinBox.GetMinValue
// Size: 0x4(Inherited: 0x0) 
struct FGetMinValue
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
// Size: 0x40(Inherited: 0x0) 
struct FTransformScalarAbsoluteToLocal
{
	struct FGeometry Geometry;  // 0x0(0x38)
	float AbsoluteScalar;  // 0x38(0x4)
	float ReturnValue;  // 0x3C(0x4)

}; 
// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FOnSpinBoxValueChangedEvent__DelegateSignature
{
	float InValue;  // 0x0(0x4)

}; 
// Function UMG.WidgetInteractionComponent.PressKey
// Size: 0x20(Inherited: 0x0) 
struct FPressKey
{
	struct FKey Key;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bRepeat : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool ReturnValue : 1;  // 0x19(0x1)
	char pad_26[6];  // 0x1A(0x6)

}; 
// Function UMG.ListView.BP_SetItemSelection
// Size: 0x10(Inherited: 0x0) 
struct FBP_SetItemSelection
{
	struct UObject* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bSelected : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.SpinBox.SetDelta
// Size: 0x4(Inherited: 0x0) 
struct FSetDelta
{
	float NewValue;  // 0x0(0x4)

}; 
// Function UMG.SpinBox.SetMaxFractionalDigits
// Size: 0x4(Inherited: 0x0) 
struct FSetMaxFractionalDigits
{
	int32_t NewValue;  // 0x0(0x4)

}; 
// Function UMG.Slider.SetMaxValue
// Size: 0x4(Inherited: 0x0) 
struct FSetMaxValue
{
	float InValue;  // 0x0(0x4)

}; 
// Function UMG.SpinBox.SetMinSliderValue
// Size: 0x4(Inherited: 0x0) 
struct FSetMinSliderValue
{
	float NewValue;  // 0x0(0x4)

}; 
// Function UMG.Slider.SetMinValue
// Size: 0x4(Inherited: 0x0) 
struct FSetMinValue
{
	float InValue;  // 0x0(0x4)

}; 
// DelegateFunction UMG.OnItemExpansionChangedDynamic__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnItemExpansionChangedDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bIsExpanded : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.DragDropOperation.DragCancelled
// Size: 0x70(Inherited: 0x0) 
struct FDragCancelled
{
	struct FPointerEvent PointerEvent;  // 0x0(0x70)

}; 
// DelegateFunction UMG.OnHoveredWidgetChanged__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnHoveredWidgetChanged__DelegateSignature
{
	struct UWidgetComponent* WidgetComponent;  // 0x0(0x8)
	struct UWidgetComponent* PreviousWidgetComponent;  // 0x8(0x8)

}; 
// Function UMG.UserWidget.AddToPlayerScreen
// Size: 0x8(Inherited: 0x0) 
struct FAddToPlayerScreen
{
	int32_t ZOrder;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function UMG.UserWidget.BindToAnimationEvent
// Size: 0x28(Inherited: 0x0) 
struct FBindToAnimationEvent
{
	struct UWidgetAnimation* Animation;  // 0x0(0x8)
	struct FDelegate Delegate;  // 0x8(0x10)
	uint8_t  AnimationEvent;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	struct FName UserTag;  // 0x1C(0x8)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function UMG.WidgetAnimation.BindToAnimationFinished
// Size: 0x18(Inherited: 0x0) 
struct FBindToAnimationFinished
{
	struct UUserWidget* Widget;  // 0x0(0x8)
	struct FDelegate Delegate;  // 0x8(0x10)

}; 
// Function UMG.UserWidget.GetAlignmentInViewport
// Size: 0x8(Inherited: 0x0) 
struct FGetAlignmentInViewport
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.CanvasPanelSlot.GetAnchors
// Size: 0x10(Inherited: 0x0) 
struct FGetAnchors
{
	struct FAnchors ReturnValue;  // 0x0(0x10)

}; 
// Function UMG.RetainerBox.GetEffectMaterial
// Size: 0x8(Inherited: 0x0) 
struct FGetEffectMaterial
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.GetIsVisible
// Size: 0x1(Inherited: 0x0) 
struct FGetIsVisible
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.UserWidget.GetOwningPlayerCameraManager
// Size: 0x8(Inherited: 0x0) 
struct FGetOwningPlayerCameraManager
{
	struct APlayerCameraManager* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.IsInteractable
// Size: 0x1(Inherited: 0x0) 
struct FIsInteractable
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.UserWidget.IsInViewport
// Size: 0x1(Inherited: 0x0) 
struct FIsInViewport
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.UserListEntry.BP_OnItemSelectionChanged
// Size: 0x1(Inherited: 0x0) 
struct FBP_OnItemSelectionChanged
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsSelected : 1;  // 0x0(0x1)

}; 
// Function UMG.TextBlock.SetShadowOffset
// Size: 0x8(Inherited: 0x0) 
struct FSetShadowOffset
{
	struct FVector2D InShadowOffset;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.IsListeningForInputAction
// Size: 0xC(Inherited: 0x0) 
struct FIsListeningForInputAction
{
	struct FName ActionName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function UMG.UserWidget.IsPlayingAnimation
// Size: 0x1(Inherited: 0x0) 
struct FIsPlayingAnimation
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.UserWidget.ListenForInputAction
// Size: 0x1C(Inherited: 0x0) 
struct FListenForInputAction
{
	struct FName ActionName;  // 0x0(0x8)
	char EInputEvent EventType;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool bConsume : 1;  // 0x9(0x1)
	char pad_10[2];  // 0xA(0x2)
	struct FDelegate Callback;  // 0xC(0x10)

}; 
// Function UMG.UserWidget.OnAddedToFocusPath
// Size: 0x8(Inherited: 0x0) 
struct FOnAddedToFocusPath
{
	struct FFocusEvent InFocusEvent;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.OnKeyUp
// Size: 0x128(Inherited: 0x0) 
struct FOnKeyUp
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FKeyEvent InKeyEvent;  // 0x38(0x38)
	struct FEventReply ReturnValue;  // 0x70(0xB8)

}; 
// Function UMG.TextBlock.SetFont
// Size: 0x58(Inherited: 0x0) 
struct FSetFont
{
	struct FSlateFontInfo InFontInfo;  // 0x0(0x58)

}; 
// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// Size: 0x10(Inherited: 0x0) 
struct FSlotAsUniformGridSlot
{
	struct UWidget* Widget;  // 0x0(0x8)
	struct UUniformGridSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.UserWidget.OnAnalogValueChanged
// Size: 0x130(Inherited: 0x0) 
struct FOnAnalogValueChanged
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FAnalogInputEvent InAnalogInputEvent;  // 0x38(0x40)
	struct FEventReply ReturnValue;  // 0x78(0xB8)

}; 
// Function UMG.Image.SetBrushTintColor
// Size: 0x28(Inherited: 0x0) 
struct FSetBrushTintColor
{
	struct FSlateColor TintColor;  // 0x0(0x28)

}; 
// Function UMG.UserWidget.OnAnimationFinished
// Size: 0x8(Inherited: 0x0) 
struct FOnAnimationFinished
{
	struct UWidgetAnimation* Animation;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.OnDragCancelled
// Size: 0x78(Inherited: 0x0) 
struct FOnDragCancelled
{
	struct FPointerEvent PointerEvent;  // 0x0(0x70)
	struct UDragDropOperation* Operation;  // 0x70(0x8)

}; 
// Function UMG.UserWidget.OnDragDetected
// Size: 0xB0(Inherited: 0x0) 
struct FOnDragDetected
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent PointerEvent;  // 0x38(0x70)
	struct UDragDropOperation* Operation;  // 0xA8(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// Size: 0x10(Inherited: 0x0) 
struct FSlotAsVerticalBoxSlot
{
	struct UWidget* Widget;  // 0x0(0x8)
	struct UVerticalBoxSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.ScrollBox.SetAnimateWheelScrolling
// Size: 0x1(Inherited: 0x0) 
struct FSetAnimateWheelScrolling
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bShouldAnimateWheelScrolling : 1;  // 0x0(0x1)

}; 
// Function UMG.UserWidget.OnDragEnter
// Size: 0xB0(Inherited: 0x0) 
struct FOnDragEnter
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent PointerEvent;  // 0x38(0x70)
	struct UDragDropOperation* Operation;  // 0xA8(0x8)

}; 
// Function UMG.GridSlot.SetLayer
// Size: 0x4(Inherited: 0x0) 
struct FSetLayer
{
	int32_t InLayer;  // 0x0(0x4)

}; 
// Function UMG.ListView.GetListItems
// Size: 0x10(Inherited: 0x0) 
struct FGetListItems
{
	struct TArray<struct UObject*> ReturnValue;  // 0x0(0x10)

}; 
// Function UMG.WidgetComponent.GetRedrawTime
// Size: 0x4(Inherited: 0x0) 
struct FGetRedrawTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.UserWidget.OnDragLeave
// Size: 0x78(Inherited: 0x0) 
struct FOnDragLeave
{
	struct FPointerEvent PointerEvent;  // 0x0(0x70)
	struct UDragDropOperation* Operation;  // 0x70(0x8)

}; 
// Function UMG.ScrollBox.SetWheelScrollMultiplier
// Size: 0x4(Inherited: 0x0) 
struct FSetWheelScrollMultiplier
{
	float NewWheelScrollMultiplier;  // 0x0(0x4)

}; 
// Function UMG.UserWidget.OnDragOver
// Size: 0xB8(Inherited: 0x0) 
struct FOnDragOver
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent PointerEvent;  // 0x38(0x70)
	struct UDragDropOperation* Operation;  // 0xA8(0x8)
	char pad_176_1 : 7;  // 0xB0(0x1)
	bool ReturnValue : 1;  // 0xB0(0x1)
	char pad_177[7];  // 0xB1(0x7)

}; 
// Function UMG.Image.SetBrushFromTexture
// Size: 0x10(Inherited: 0x0) 
struct FSetBrushFromTexture
{
	struct UTexture2D* Texture;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bMatchSize : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.UserWidget.OnDrop
// Size: 0xB8(Inherited: 0x0) 
struct FOnDrop
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent PointerEvent;  // 0x38(0x70)
	struct UDragDropOperation* Operation;  // 0xA8(0x8)
	char pad_176_1 : 7;  // 0xB0(0x1)
	bool ReturnValue : 1;  // 0xB0(0x1)
	char pad_177[7];  // 0xB1(0x7)

}; 
// ScriptStruct UMG.DynamicPropertyPath
// Size: 0x28(Inherited: 0x28) 
struct FDynamicPropertyPath : public FCachedPropertyPath
{

}; 
// Function UMG.CanvasPanelSlot.GetAutoSize
// Size: 0x1(Inherited: 0x0) 
struct FGetAutoSize
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.ExpandableArea.SetIsExpanded
// Size: 0x1(Inherited: 0x0) 
struct FSetIsExpanded
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsExpanded : 1;  // 0x0(0x1)

}; 
// Function UMG.UserWidget.OnFocusLost
// Size: 0x8(Inherited: 0x0) 
struct FOnFocusLost
{
	struct FFocusEvent InFocusEvent;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.OnFocusReceived
// Size: 0xF8(Inherited: 0x0) 
struct FOnFocusReceived
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FFocusEvent InFocusEvent;  // 0x38(0x8)
	struct FEventReply ReturnValue;  // 0x40(0xB8)

}; 
// Function UMG.UserWidget.OnKeyChar
// Size: 0x110(Inherited: 0x0) 
struct FOnKeyChar
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FCharacterEvent InCharacterEvent;  // 0x38(0x20)
	struct FEventReply ReturnValue;  // 0x58(0xB8)

}; 
// Function UMG.UserWidget.OnKeyDown
// Size: 0x128(Inherited: 0x0) 
struct FOnKeyDown
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FKeyEvent InKeyEvent;  // 0x38(0x38)
	struct FEventReply ReturnValue;  // 0x70(0xB8)

}; 
// Function UMG.UserWidget.OnMotionDetected
// Size: 0x138(Inherited: 0x0) 
struct FOnMotionDetected
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FMotionEvent InMotionEvent;  // 0x38(0x48)
	struct FEventReply ReturnValue;  // 0x80(0xB8)

}; 
// Function UMG.WidgetComponent.SetBackgroundColor
// Size: 0x10(Inherited: 0x0) 
struct FSetBackgroundColor
{
	struct FLinearColor NewBackgroundColor;  // 0x0(0x10)

}; 
// Function UMG.UserWidget.OnMouseButtonUp
// Size: 0x160(Inherited: 0x0) 
struct FOnMouseButtonUp
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// Function UMG.WidgetComponent.SetOwnerPlayer
// Size: 0x8(Inherited: 0x0) 
struct FSetOwnerPlayer
{
	struct ULocalPlayer* LocalPlayer;  // 0x0(0x8)

}; 
// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
// Size: 0x1(Inherited: 0x0) 
struct FSetApplyAlphaToBlur
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInApplyAlphaToBlur : 1;  // 0x0(0x1)

}; 
// Function UMG.UserWidget.OnMouseEnter
// Size: 0xA8(Inherited: 0x0) 
struct FOnMouseEnter
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)

}; 
// Function UMG.WidgetComponent.GetRenderTarget
// Size: 0x8(Inherited: 0x0) 
struct FGetRenderTarget
{
	struct UTextureRenderTarget2D* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.OnMouseLeave
// Size: 0x70(Inherited: 0x0) 
struct FOnMouseLeave
{
	struct FPointerEvent MouseEvent;  // 0x0(0x70)

}; 
// Function UMG.UserWidget.OnMouseMove
// Size: 0x160(Inherited: 0x0) 
struct FOnMouseMove
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// Function UMG.UserWidget.OnMouseWheel
// Size: 0x160(Inherited: 0x0) 
struct FOnMouseWheel
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// Function UMG.Slider.SetSliderBarColor
// Size: 0x10(Inherited: 0x0) 
struct FSetSliderBarColor
{
	struct FLinearColor InValue;  // 0x0(0x10)

}; 
// Function UMG.UserWidget.OnPaint
// Size: 0x30(Inherited: 0x0) 
struct FOnPaint
{
	struct FPaintContext Context;  // 0x0(0x30)

}; 
// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// Size: 0x10(Inherited: 0x0) 
struct FSlotAsBorderSlot
{
	struct UWidget* Widget;  // 0x0(0x8)
	struct UBorderSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.UserWidget.OnPreviewKeyDown
// Size: 0x128(Inherited: 0x0) 
struct FOnPreviewKeyDown
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FKeyEvent InKeyEvent;  // 0x38(0x38)
	struct FEventReply ReturnValue;  // 0x70(0xB8)

}; 
// Function UMG.UserWidget.OnPreviewMouseButtonDown
// Size: 0x160(Inherited: 0x0) 
struct FOnPreviewMouseButtonDown
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// Function UMG.UserWidget.OnRemovedFromFocusPath
// Size: 0x8(Inherited: 0x0) 
struct FOnRemovedFromFocusPath
{
	struct FFocusEvent InFocusEvent;  // 0x0(0x8)

}; 
// Function UMG.ListView.AddItem
// Size: 0x8(Inherited: 0x0) 
struct FAddItem
{
	struct UObject* Item;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.OnTouchForceChanged
// Size: 0x160(Inherited: 0x0) 
struct FOnTouchForceChanged
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent InTouchEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)

}; 
// Function UMG.UserWidget.PlayAnimation
// Size: 0x28(Inherited: 0x0) 
struct FPlayAnimation
{
	struct UWidgetAnimation* InAnimation;  // 0x0(0x8)
	float StartAtTime;  // 0x8(0x4)
	int32_t NumLoopsToPlay;  // 0xC(0x4)
	char EUMGSequencePlayMode PlayMode;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float PlaybackSpeed;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bRestoreState : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct UUMGSequencePlayer* ReturnValue;  // 0x20(0x8)

}; 
// Function UMG.UserWidget.PlayAnimationForward
// Size: 0x18(Inherited: 0x0) 
struct FPlayAnimationForward
{
	struct UWidgetAnimation* InAnimation;  // 0x0(0x8)
	float PlaybackSpeed;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bRestoreState : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct UUMGSequencePlayer* ReturnValue;  // 0x10(0x8)

}; 
// Function UMG.CanvasPanelSlot.GetAlignment
// Size: 0x8(Inherited: 0x0) 
struct FGetAlignment
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.PlayAnimationReverse
// Size: 0x18(Inherited: 0x0) 
struct FPlayAnimationReverse
{
	struct UWidgetAnimation* InAnimation;  // 0x0(0x8)
	float PlaybackSpeed;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bRestoreState : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct UUMGSequencePlayer* ReturnValue;  // 0x10(0x8)

}; 
// Function UMG.UserWidget.PlayAnimationTimeRange
// Size: 0x28(Inherited: 0x0) 
struct FPlayAnimationTimeRange
{
	struct UWidgetAnimation* InAnimation;  // 0x0(0x8)
	float StartAtTime;  // 0x8(0x4)
	float EndAtTime;  // 0xC(0x4)
	int32_t NumLoopsToPlay;  // 0x10(0x4)
	char EUMGSequencePlayMode PlayMode;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	float PlaybackSpeed;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bRestoreState : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct UUMGSequencePlayer* ReturnValue;  // 0x20(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
// Size: 0x10(Inherited: 0x0) 
struct FSlotAsWrapBoxSlot
{
	struct UWidget* Widget;  // 0x0(0x8)
	struct UWrapBoxSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.UserWidget.PlaySound
// Size: 0x8(Inherited: 0x0) 
struct FPlaySound
{
	struct USoundBase* SoundToPlay;  // 0x0(0x8)

}; 
// Function UMG.RichTextBlock.GetDecoratorByClass
// Size: 0x10(Inherited: 0x0) 
struct FGetDecoratorByClass
{
	URichTextBlockDecorator* DecoratorClass;  // 0x0(0x8)
	struct URichTextBlockDecorator* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.UserWidget.PreConstruct
// Size: 0x1(Inherited: 0x0) 
struct FPreConstruct
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsDesignTime : 1;  // 0x0(0x1)

}; 
// Function UMG.TextBlock.SetStrikeBrush
// Size: 0x88(Inherited: 0x0) 
struct FSetStrikeBrush
{
	struct FSlateBrush InStrikeBrush;  // 0x0(0x88)

}; 
// Function UMG.UserWidget.ReverseAnimation
// Size: 0x8(Inherited: 0x0) 
struct FReverseAnimation
{
	struct UWidgetAnimation* InAnimation;  // 0x0(0x8)

}; 
// ScriptStruct UMG.MovieScene2DTransformMask
// Size: 0x4(Inherited: 0x0) 
struct FMovieScene2DTransformMask
{
	uint32_t Mask;  // 0x0(0x4)

}; 
// Function UMG.WidgetComponent.IsWidgetVisible
// Size: 0x1(Inherited: 0x0) 
struct FIsWidgetVisible
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.UserWidget.SetAlignmentInViewport
// Size: 0x8(Inherited: 0x0) 
struct FSetAlignmentInViewport
{
	struct FVector2D Alignment;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.SetAnchorsInViewport
// Size: 0x10(Inherited: 0x0) 
struct FSetAnchorsInViewport
{
	struct FAnchors Anchors;  // 0x0(0x10)

}; 
// Function UMG.UserWidget.SetAnimationCurrentTime
// Size: 0x10(Inherited: 0x0) 
struct FSetAnimationCurrentTime
{
	struct UWidgetAnimation* InAnimation;  // 0x0(0x8)
	float InTime;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function UMG.SizeBox.SetWidthOverride
// Size: 0x4(Inherited: 0x0) 
struct FSetWidthOverride
{
	float InWidthOverride;  // 0x0(0x4)

}; 
// Function UMG.CanvasPanelSlot.SetMinimum
// Size: 0x8(Inherited: 0x0) 
struct FSetMinimum
{
	struct FVector2D InMinimumAnchors;  // 0x0(0x8)

}; 
// Function UMG.Image.SetColorAndOpacity
// Size: 0x10(Inherited: 0x0) 
struct FSetColorAndOpacity
{
	struct FLinearColor InColorAndOpacity;  // 0x0(0x10)

}; 
// Function UMG.UserWidget.SetDesiredSizeInViewport
// Size: 0x8(Inherited: 0x0) 
struct FSetDesiredSizeInViewport
{
	struct FVector2D Size;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.SetInputActionBlocking
// Size: 0x1(Inherited: 0x0) 
struct FSetInputActionBlocking
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bShouldBlock : 1;  // 0x0(0x1)

}; 
// Function UMG.GridPanel.SetColumnFill
// Size: 0x8(Inherited: 0x0) 
struct FSetColumnFill
{
	int32_t ColumnIndex;  // 0x0(0x4)
	float Coefficient;  // 0x4(0x4)

}; 
// Function UMG.UserWidget.SetOwningPlayer
// Size: 0x8(Inherited: 0x0) 
struct FSetOwningPlayer
{
	struct APlayerController* LocalPlayerController;  // 0x0(0x8)

}; 
// Function UMG.WrapBoxSlot.SetPadding
// Size: 0x10(Inherited: 0x0) 
struct FSetPadding
{
	struct FMargin InPadding;  // 0x0(0x10)

}; 
// Function UMG.UserWidget.SetPositionInViewport
// Size: 0xC(Inherited: 0x0) 
struct FSetPositionInViewport
{
	struct FVector2D position;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bRemoveDPIScale : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function UMG.UserWidget.StopAnimation
// Size: 0x8(Inherited: 0x0) 
struct FStopAnimation
{
	struct UWidgetAnimation* InAnimation;  // 0x0(0x8)

}; 
// Function UMG.UserWidget.Tick
// Size: 0x3C(Inherited: 0x0) 
struct FTick
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	float InDeltaTime;  // 0x38(0x4)

}; 
// Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
// Size: 0x8(Inherited: 0x0) 
struct FUnbindAllFromAnimationFinished
{
	struct UUserWidget* Widget;  // 0x0(0x8)

}; 
// Function UMG.WidgetAnimation.UnbindFromAnimationFinished
// Size: 0x18(Inherited: 0x0) 
struct FUnbindFromAnimationFinished
{
	struct UUserWidget* Widget;  // 0x0(0x8)
	struct FDelegate Delegate;  // 0x8(0x10)

}; 
// ScriptStruct UMG.DelegateRuntimeBinding
// Size: 0x50(Inherited: 0x0) 
struct FDelegateRuntimeBinding
{
	struct FString ObjectName;  // 0x0(0x10)
	struct FName PropertyName;  // 0x10(0x8)
	struct FName FunctionName;  // 0x18(0x8)
	struct FDynamicPropertyPath SourcePath;  // 0x20(0x28)
	uint8_t  Kind;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)

}; 
// Function UMG.InvalidationBox.GetCanCache
// Size: 0x1(Inherited: 0x0) 
struct FGetCanCache
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetAnimation.UnbindFromAnimationStarted
// Size: 0x18(Inherited: 0x0) 
struct FUnbindFromAnimationStarted
{
	struct UUserWidget* Widget;  // 0x0(0x8)
	struct FDelegate Delegate;  // 0x8(0x10)

}; 
// ScriptStruct UMG.AnimationEventBinding
// Size: 0x28(Inherited: 0x0) 
struct FAnimationEventBinding
{
	struct UWidgetAnimation* Animation;  // 0x0(0x8)
	struct FDelegate Delegate;  // 0x8(0x10)
	uint8_t  AnimationEvent;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	struct FName UserTag;  // 0x1C(0x8)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct UMG.NamedSlotBinding
// Size: 0x10(Inherited: 0x0) 
struct FNamedSlotBinding
{
	struct FName Name;  // 0x0(0x8)
	struct UWidget* Content;  // 0x8(0x8)

}; 
// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Size: 0x90(Inherited: 0x80) 
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	struct TArray<struct FName> BrushPropertyNamePath;  // 0x80(0x10)

}; 
// ScriptStruct UMG.SlateChildSize
// Size: 0x8(Inherited: 0x0) 
struct FSlateChildSize
{
	float Value;  // 0x0(0x4)
	char ESlateSizeRule SizeRule;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function UMG.CanvasPanelSlot.GetPosition
// Size: 0x8(Inherited: 0x0) 
struct FGetPosition
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.UserObjectListEntry.OnListItemObjectSet
// Size: 0x8(Inherited: 0x0) 
struct FOnListItemObjectSet
{
	struct UObject* ListItemObject;  // 0x0(0x8)

}; 
// Function UMG.WidgetComponent.GetDrawSize
// Size: 0x8(Inherited: 0x0) 
struct FGetDrawSize
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct UMG.UserWidgetPool
// Size: 0x80(Inherited: 0x0) 
struct FUserWidgetPool
{
	struct TArray<struct UUserWidget*> ActiveWidgets;  // 0x0(0x10)
	struct TArray<struct UUserWidget*> InactiveWidgets;  // 0x10(0x10)
	char pad_32[96];  // 0x20(0x60)

}; 
// ScriptStruct UMG.WidgetComponentInstanceData
// Size: 0xC8(Inherited: 0xB8) 
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
{
	char pad_184[16];  // 0xB8(0x10)

}; 
// Function UMG.ProgressBar.SetPercent
// Size: 0x4(Inherited: 0x0) 
struct FSetPercent
{
	float InPercent;  // 0x0(0x4)

}; 
// Function UMG.TextBlock.GetDynamicOutlineMaterial
// Size: 0x8(Inherited: 0x0) 
struct FGetDynamicOutlineMaterial
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.RichTextBlock.SetAutoWrapText
// Size: 0x1(Inherited: 0x0) 
struct FSetAutoWrapText
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InAutoTextWrap : 1;  // 0x0(0x1)

}; 
// Function UMG.TextBlock.SetShadowColorAndOpacity
// Size: 0x10(Inherited: 0x0) 
struct FSetShadowColorAndOpacity
{
	struct FLinearColor InShadowColorAndOpacity;  // 0x0(0x10)

}; 
// Function UMG.RichTextBlock.SetTextTransformPolicy
// Size: 0x1(Inherited: 0x0) 
struct FSetTextTransformPolicy
{
	uint8_t  InTransformPolicy;  // 0x0(0x1)

}; 
// Function UMG.WrapBox.SetInnerSlotPadding
// Size: 0x8(Inherited: 0x0) 
struct FSetInnerSlotPadding
{
	struct FVector2D InPadding;  // 0x0(0x8)

}; 
// Function UMG.Viewport.GetViewRotation
// Size: 0xC(Inherited: 0x0) 
struct FGetViewRotation
{
	struct FRotator ReturnValue;  // 0x0(0xC)

}; 
// Function UMG.ScrollBox.GetViewFraction
// Size: 0x4(Inherited: 0x0) 
struct FGetViewFraction
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
// Size: 0x48(Inherited: 0x0) 
struct FAbsoluteToLocal
{
	struct FGeometry Geometry;  // 0x0(0x38)
	struct FVector2D AbsoluteCoordinate;  // 0x38(0x8)
	struct FVector2D ReturnValue;  // 0x40(0x8)

}; 
// Function UMG.CheckBox.SetClickMethod
// Size: 0x1(Inherited: 0x0) 
struct FSetClickMethod
{
	char EButtonClickMethod InClickMethod;  // 0x0(0x1)

}; 
// Function UMG.CheckBox.SetPressMethod
// Size: 0x1(Inherited: 0x0) 
struct FSetPressMethod
{
	char EButtonPressMethod InPressMethod;  // 0x0(0x1)

}; 
// Function UMG.CheckBox.SetTouchMethod
// Size: 0x1(Inherited: 0x0) 
struct FSetTouchMethod
{
	char EButtonTouchMethod InTouchMethod;  // 0x0(0x1)

}; 
// Function UMG.WrapBox.AddChildToWrapBox
// Size: 0x10(Inherited: 0x0) 
struct FAddChildToWrapBox
{
	struct UWidget* Content;  // 0x0(0x8)
	struct UWrapBoxSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WidgetComponent.GetWidgetSpace
// Size: 0x1(Inherited: 0x0) 
struct FGetWidgetSpace
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function UMG.CanvasPanel.AddChildToCanvas
// Size: 0x10(Inherited: 0x0) 
struct FAddChildToCanvas
{
	struct UWidget* Content;  // 0x0(0x8)
	struct UCanvasPanelSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.ListViewBase.GetDisplayedEntryWidgets
// Size: 0x10(Inherited: 0x0) 
struct FGetDisplayedEntryWidgets
{
	struct TArray<struct UUserWidget*> ReturnValue;  // 0x0(0x10)

}; 
// Function UMG.WidgetSwitcher.GetActiveWidget
// Size: 0x8(Inherited: 0x0) 
struct FGetActiveWidget
{
	struct UWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// Size: 0x4(Inherited: 0x0) 
struct FGetActiveWidgetIndex
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.WidgetSwitcher.GetNumWidgets
// Size: 0x4(Inherited: 0x0) 
struct FGetNumWidgets
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.WidgetSwitcher.SetActiveWidget
// Size: 0x8(Inherited: 0x0) 
struct FSetActiveWidget
{
	struct UWidget* Widget;  // 0x0(0x8)

}; 
// Function UMG.RichTextBlock.SetDefaultColorAndOpacity
// Size: 0x28(Inherited: 0x0) 
struct FSetDefaultColorAndOpacity
{
	struct FSlateColor InColorAndOpacity;  // 0x0(0x28)

}; 
// Function UMG.CircularThrobber.SetRadius
// Size: 0x4(Inherited: 0x0) 
struct FSetRadius
{
	float InRadius;  // 0x0(0x4)

}; 
// Function UMG.RichTextBlock.SetDefaultFont
// Size: 0x58(Inherited: 0x0) 
struct FSetDefaultFont
{
	struct FSlateFontInfo InFontInfo;  // 0x0(0x58)

}; 
// Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
// Size: 0x10(Inherited: 0x0) 
struct FSetDefaultShadowColorAndOpacity
{
	struct FLinearColor InShadowColorAndOpacity;  // 0x0(0x10)

}; 
// Function UMG.ScrollBox.SetConsumeMouseWheel
// Size: 0x1(Inherited: 0x0) 
struct FSetConsumeMouseWheel
{
	uint8_t  NewConsumeMouseWheel;  // 0x0(0x1)

}; 
// Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
// Size: 0x40(Inherited: 0x0) 
struct FGetAbsoluteSize
{
	struct FGeometry Geometry;  // 0x0(0x38)
	struct FVector2D ReturnValue;  // 0x38(0x8)

}; 
// Function UMG.RichTextBlock.SetDefaultShadowOffset
// Size: 0x8(Inherited: 0x0) 
struct FSetDefaultShadowOffset
{
	struct FVector2D InShadowOffset;  // 0x0(0x8)

}; 
// Function UMG.RichTextBlock.SetDefaultStrikeBrush
// Size: 0x88(Inherited: 0x0) 
struct FSetDefaultStrikeBrush
{
	struct FSlateBrush InStrikeBrush;  // 0x0(0x88)

}; 
// Function UMG.Border.SetBrushColor
// Size: 0x10(Inherited: 0x0) 
struct FSetBrushColor
{
	struct FLinearColor InBrushColor;  // 0x0(0x10)

}; 
// Function UMG.RichTextBlock.SetDefaultTextStyle
// Size: 0x270(Inherited: 0x0) 
struct FSetDefaultTextStyle
{
	struct FTextBlockStyle InDefaultTextStyle;  // 0x0(0x270)

}; 
// Function UMG.CanvasPanelSlot.GetOffsets
// Size: 0x10(Inherited: 0x0) 
struct FGetOffsets
{
	struct FMargin ReturnValue;  // 0x0(0x10)

}; 
// Function UMG.DragDropOperation.Dragged
// Size: 0x70(Inherited: 0x0) 
struct FDragged
{
	struct FPointerEvent PointerEvent;  // 0x0(0x70)

}; 
// Function UMG.DragDropOperation.Drop
// Size: 0x70(Inherited: 0x0) 
struct FDrop
{
	struct FPointerEvent PointerEvent;  // 0x0(0x70)

}; 
// Function UMG.AsyncTaskDownloadImage.DownloadImage
// Size: 0x18(Inherited: 0x0) 
struct FDownloadImage
{
	struct FString URL;  // 0x0(0x10)
	struct UAsyncTaskDownloadImage* ReturnValue;  // 0x10(0x8)

}; 
// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
// Size: 0x4(Inherited: 0x0) 
struct FSetMinDesiredSlotHeight
{
	float InMinDesiredSlotHeight;  // 0x0(0x4)

}; 
// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
// Size: 0x88(Inherited: 0x0) 
struct FSetLowQualityFallbackBrush
{
	struct FSlateBrush InBrush;  // 0x0(0x88)

}; 
// Function UMG.WrapBoxSlot.SetVerticalAlignment
// Size: 0x1(Inherited: 0x0) 
struct FSetVerticalAlignment
{
	char EVerticalAlignment InVerticalAlignment;  // 0x0(0x1)

}; 
// Function UMG.ScrollBox.GetScrollOffsetOfEnd
// Size: 0x4(Inherited: 0x0) 
struct FGetScrollOffsetOfEnd
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.Image.SetBrush
// Size: 0x88(Inherited: 0x0) 
struct FSetBrush
{
	struct FSlateBrush InBrush;  // 0x0(0x88)

}; 
// Function UMG.UserListEntry.BP_OnItemExpansionChanged
// Size: 0x1(Inherited: 0x0) 
struct FBP_OnItemExpansionChanged
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsExpanded : 1;  // 0x0(0x1)

}; 
// Function UMG.Image.SetBrushFromAsset
// Size: 0x8(Inherited: 0x0) 
struct FSetBrushFromAsset
{
	struct USlateBrushAsset* Asset;  // 0x0(0x8)

}; 
// Function UMG.Image.SetBrushFromMaterial
// Size: 0x8(Inherited: 0x0) 
struct FSetBrushFromMaterial
{
	struct UMaterialInterface* Material;  // 0x0(0x8)

}; 
// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// Size: 0x88(Inherited: 0x0) 
struct FSetCustomHitResult
{
	struct FHitResult HitResult;  // 0x0(0x88)

}; 
// Function UMG.Border.SetDesiredSizeScale
// Size: 0x8(Inherited: 0x0) 
struct FSetDesiredSizeScale
{
	struct FVector2D InScale;  // 0x0(0x8)

}; 
// Function UMG.CanvasPanelSlot.GetLayout
// Size: 0x28(Inherited: 0x0) 
struct FGetLayout
{
	struct FAnchorData ReturnValue;  // 0x0(0x28)

}; 
// Function UMG.CanvasPanelSlot.GetSize
// Size: 0x8(Inherited: 0x0) 
struct FGetSize
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.CanvasPanelSlot.SetAnchors
// Size: 0x10(Inherited: 0x0) 
struct FSetAnchors
{
	struct FAnchors InAnchors;  // 0x0(0x10)

}; 
// Function UMG.CanvasPanelSlot.SetMaximum
// Size: 0x8(Inherited: 0x0) 
struct FSetMaximum
{
	struct FVector2D InMaximumAnchors;  // 0x0(0x8)

}; 
// Function UMG.CanvasPanelSlot.SetPosition
// Size: 0x8(Inherited: 0x0) 
struct FSetPosition
{
	struct FVector2D InPosition;  // 0x0(0x8)

}; 
// Function UMG.WidgetComponent.GetCylinderArcAngle
// Size: 0x4(Inherited: 0x0) 
struct FGetCylinderArcAngle
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.VerticalBoxSlot.SetSize
// Size: 0x8(Inherited: 0x0) 
struct FSetSize
{
	struct FSlateChildSize InSize;  // 0x0(0x8)

}; 
// Function UMG.CheckBox.IsChecked
// Size: 0x1(Inherited: 0x0) 
struct FIsChecked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.UniformGridSlot.SetRow
// Size: 0x4(Inherited: 0x0) 
struct FSetRow
{
	int32_t InRow;  // 0x0(0x4)

}; 
// Function UMG.CheckBox.SetCheckedState
// Size: 0x1(Inherited: 0x0) 
struct FSetCheckedState
{
	uint8_t  InCheckedState;  // 0x0(0x1)

}; 
// Function UMG.Throbber.SetNumberOfPieces
// Size: 0x4(Inherited: 0x0) 
struct FSetNumberOfPieces
{
	int32_t InNumberOfPieces;  // 0x0(0x4)

}; 
// Function UMG.WidgetComponent.SetWidget
// Size: 0x8(Inherited: 0x0) 
struct FSetWidget
{
	struct UUserWidget* Widget;  // 0x0(0x8)

}; 
// Function UMG.WidgetComponent.GetOwnerPlayer
// Size: 0x8(Inherited: 0x0) 
struct FGetOwnerPlayer
{
	struct ULocalPlayer* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.ColorBinding.GetLinearValue
// Size: 0x10(Inherited: 0x0) 
struct FGetLinearValue
{
	struct FLinearColor ReturnValue;  // 0x0(0x10)

}; 
// Function UMG.DynamicEntryBoxBase.SetEntrySpacing
// Size: 0x8(Inherited: 0x0) 
struct FSetEntrySpacing
{
	struct FVector2D InEntrySpacing;  // 0x0(0x8)

}; 
// Function UMG.DynamicEntryBoxBase.SetRadialSettings
// Size: 0x10(Inherited: 0x0) 
struct FSetRadialSettings
{
	struct FRadialBoxSettings InSettings;  // 0x0(0x10)

}; 
// Function UMG.TileView.GetEntryWidth
// Size: 0x4(Inherited: 0x0) 
struct FGetEntryWidth
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
// Size: 0x10(Inherited: 0x0) 
struct FBP_CreateEntryOfClass
{
	UUserWidget* EntryClass;  // 0x0(0x8)
	struct UUserWidget* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.DynamicEntryBox.RemoveEntry
// Size: 0x8(Inherited: 0x0) 
struct FRemoveEntry
{
	struct UUserWidget* EntryWidget;  // 0x0(0x8)

}; 
// Function UMG.DynamicEntryBox.Reset
// Size: 0x1(Inherited: 0x0) 
struct FReset
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bDeleteWidgets : 1;  // 0x0(0x1)

}; 
// Function UMG.RetainerBox.SetRetainRendering
// Size: 0x1(Inherited: 0x0) 
struct FSetRetainRendering
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInRetainRendering : 1;  // 0x0(0x1)

}; 
// Function UMG.ExpandableArea.GetIsExpanded
// Size: 0x1(Inherited: 0x0) 
struct FGetIsExpanded
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.ListView.RemoveItem
// Size: 0x8(Inherited: 0x0) 
struct FRemoveItem
{
	struct UObject* Item;  // 0x0(0x8)

}; 
// Function UMG.ExpandableArea.SetIsExpanded_Animated
// Size: 0x1(Inherited: 0x0) 
struct FSetIsExpanded_Animated
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsExpanded : 1;  // 0x0(0x1)

}; 
// Function UMG.GridPanel.SetRowFill
// Size: 0x8(Inherited: 0x0) 
struct FSetRowFill
{
	int32_t ColumnIndex;  // 0x0(0x4)
	float Coefficient;  // 0x4(0x4)

}; 
// Function UMG.UniformGridSlot.SetColumn
// Size: 0x4(Inherited: 0x0) 
struct FSetColumn
{
	int32_t InColumn;  // 0x0(0x4)

}; 
// Function UMG.GridSlot.SetColumnSpan
// Size: 0x4(Inherited: 0x0) 
struct FSetColumnSpan
{
	int32_t InColumnSpan;  // 0x0(0x4)

}; 
// Function UMG.GridSlot.SetRowSpan
// Size: 0x4(Inherited: 0x0) 
struct FSetRowSpan
{
	int32_t InRowSpan;  // 0x0(0x4)

}; 
// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// Size: 0x4(Inherited: 0x0) 
struct FSetFillSpanWhenLessThan
{
	float InFillSpanWhenLessThan;  // 0x0(0x4)

}; 
// Function UMG.Image.SetBrushFromSoftMaterial
// Size: 0x28(Inherited: 0x0) 
struct FSetBrushFromSoftMaterial
{
	struct TSoftObjectPtr<UMaterialInterface> SoftMaterial;  // 0x0(0x28)

}; 
// Function UMG.Image.SetBrushFromSoftTexture
// Size: 0x30(Inherited: 0x0) 
struct FSetBrushFromSoftTexture
{
	struct TSoftObjectPtr<UTexture2D> SoftTexture;  // 0x0(0x28)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bMatchSize : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)

}; 
// Function UMG.Image.SetBrushResourceObject
// Size: 0x8(Inherited: 0x0) 
struct FSetBrushResourceObject
{
	struct UObject* ResourceObject;  // 0x0(0x8)

}; 
// Function UMG.InvalidationBox.SetCanCache
// Size: 0x1(Inherited: 0x0) 
struct FSetCanCache
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool CanCache : 1;  // 0x0(0x1)

}; 
// Function UMG.UserListEntryLibrary.GetOwningListView
// Size: 0x18(Inherited: 0x0) 
struct FGetOwningListView
{
	struct TScriptInterface<IUserListEntry> UserListEntry;  // 0x0(0x10)
	struct UListViewBase* ReturnValue;  // 0x10(0x8)

}; 
// Function UMG.Throbber.SetAnimateOpacity
// Size: 0x1(Inherited: 0x0) 
struct FSetAnimateOpacity
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInAnimateOpacity : 1;  // 0x0(0x1)

}; 
// Function UMG.UserObjectListEntryLibrary.GetListItemObject
// Size: 0x18(Inherited: 0x0) 
struct FGetListItemObject
{
	struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry;  // 0x0(0x10)
	struct UObject* ReturnValue;  // 0x10(0x8)

}; 
// Function UMG.ScrollBox.SetScrollbarVisibility
// Size: 0x1(Inherited: 0x0) 
struct FSetScrollbarVisibility
{
	uint8_t  NewScrollBarVisibility;  // 0x0(0x1)

}; 
// Function UMG.ProgressBar.SetFillColorAndOpacity
// Size: 0x10(Inherited: 0x0) 
struct FSetFillColorAndOpacity
{
	struct FLinearColor InColor;  // 0x0(0x10)

}; 
// Function UMG.ScrollBox.SetScrollOffset
// Size: 0x4(Inherited: 0x0) 
struct FSetScrollOffset
{
	float NewScrollOffset;  // 0x0(0x4)

}; 
// Function UMG.ListView.BP_GetSelectedItems
// Size: 0x18(Inherited: 0x0) 
struct FBP_GetSelectedItems
{
	struct TArray<struct UObject*> Items;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function UMG.ListView.BP_ScrollItemIntoView
// Size: 0x8(Inherited: 0x0) 
struct FBP_ScrollItemIntoView
{
	struct UObject* Item;  // 0x0(0x8)

}; 
// Function UMG.ListView.BP_SetSelectedItem
// Size: 0x8(Inherited: 0x0) 
struct FBP_SetSelectedItem
{
	struct UObject* Item;  // 0x0(0x8)

}; 
// Function UMG.ListView.GetIndexForItem
// Size: 0x10(Inherited: 0x0) 
struct FGetIndexForItem
{
	struct UObject* Item;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function UMG.ListView.GetNumItems
// Size: 0x4(Inherited: 0x0) 
struct FGetNumItems
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.ListView.IsRefreshPending
// Size: 0x1(Inherited: 0x0) 
struct FIsRefreshPending
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.TileView.SetEntryWidth
// Size: 0x4(Inherited: 0x0) 
struct FSetEntryWidth
{
	float NewWidth;  // 0x0(0x4)

}; 
// Function UMG.Viewport.SetViewLocation
// Size: 0xC(Inherited: 0x0) 
struct FSetViewLocation
{
	struct FVector Location;  // 0x0(0xC)

}; 
// Function UMG.Overlay.AddChildToOverlay
// Size: 0x10(Inherited: 0x0) 
struct FAddChildToOverlay
{
	struct UWidget* Content;  // 0x0(0x8)
	struct UOverlaySlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.ProgressBar.SetIsMarquee
// Size: 0x1(Inherited: 0x0) 
struct FSetIsMarquee
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InbIsMarquee : 1;  // 0x0(0x1)

}; 
// Function UMG.RetainerBox.SetEffectMaterial
// Size: 0x8(Inherited: 0x0) 
struct FSetEffectMaterial
{
	struct UMaterialInterface* EffectMaterial;  // 0x0(0x8)

}; 
// Function UMG.RetainerBox.SetTextureParameter
// Size: 0x8(Inherited: 0x0) 
struct FSetTextureParameter
{
	struct FName TextureParameter;  // 0x0(0x8)

}; 
// Function UMG.SafeZone.SetSidesToPad
// Size: 0x4(Inherited: 0x0) 
struct FSetSidesToPad
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InPadLeft : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool InPadRight : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool InPadTop : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool InPadBottom : 1;  // 0x3(0x1)

}; 
// Function UMG.ScaleBox.SetIgnoreInheritedScale
// Size: 0x1(Inherited: 0x0) 
struct FSetIgnoreInheritedScale
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInIgnoreInheritedScale : 1;  // 0x0(0x1)

}; 
// Function UMG.ScaleBox.SetStretchDirection
// Size: 0x1(Inherited: 0x0) 
struct FSetStretchDirection
{
	char EStretchDirection InStretchDirection;  // 0x0(0x1)

}; 
// Function UMG.ScrollBox.GetScrollOffset
// Size: 0x4(Inherited: 0x0) 
struct FGetScrollOffset
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.ScrollBox.GetViewOffsetFraction
// Size: 0x4(Inherited: 0x0) 
struct FGetViewOffsetFraction
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.ScrollBox.SetAllowOverscroll
// Size: 0x1(Inherited: 0x0) 
struct FSetAllowOverscroll
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool NewAllowOverscroll : 1;  // 0x0(0x1)

}; 
// Function UMG.ScrollBox.SetOrientation
// Size: 0x1(Inherited: 0x0) 
struct FSetOrientation
{
	char EOrientation NewOrientation;  // 0x0(0x1)

}; 
// Function UMG.ScrollBox.SetScrollbarThickness
// Size: 0x8(Inherited: 0x0) 
struct FSetScrollbarThickness
{
	struct FVector2D NewScrollbarThickness;  // 0x0(0x8)

}; 
// Function UMG.ScrollBox.SetScrollWhenFocusChanges
// Size: 0x1(Inherited: 0x0) 
struct FSetScrollWhenFocusChanges
{
	uint8_t  NewScrollWhenFocusChanges;  // 0x0(0x1)

}; 
// Function UMG.SizeBox.SetHeightOverride
// Size: 0x4(Inherited: 0x0) 
struct FSetHeightOverride
{
	float InHeightOverride;  // 0x0(0x4)

}; 
// Function UMG.SizeBox.SetMaxAspectRatio
// Size: 0x4(Inherited: 0x0) 
struct FSetMaxAspectRatio
{
	float InMaxAspectRatio;  // 0x0(0x4)

}; 
// Function UMG.SizeBox.SetMaxDesiredHeight
// Size: 0x4(Inherited: 0x0) 
struct FSetMaxDesiredHeight
{
	float InMaxDesiredHeight;  // 0x0(0x4)

}; 
// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
// Size: 0x48(Inherited: 0x0) 
struct FLocalToAbsolute
{
	struct FGeometry Geometry;  // 0x0(0x38)
	struct FVector2D LocalCoordinate;  // 0x38(0x8)
	struct FVector2D ReturnValue;  // 0x40(0x8)

}; 
// Function UMG.SizeBox.SetMaxDesiredWidth
// Size: 0x4(Inherited: 0x0) 
struct FSetMaxDesiredWidth
{
	float InMaxDesiredWidth;  // 0x0(0x4)

}; 
// Function UMG.SizeBox.SetMinDesiredHeight
// Size: 0x4(Inherited: 0x0) 
struct FSetMinDesiredHeight
{
	float InMinDesiredHeight;  // 0x0(0x4)

}; 
// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
// Size: 0x20(Inherited: 0x0) 
struct FAbsoluteToViewport
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector2D AbsoluteDesktopCoordinate;  // 0x8(0x8)
	struct FVector2D PixelPosition;  // 0x10(0x8)
	struct FVector2D ViewportPosition;  // 0x18(0x8)

}; 
// Function UMG.SlateBlueprintLibrary.GetLocalSize
// Size: 0x40(Inherited: 0x0) 
struct FGetLocalSize
{
	struct FGeometry Geometry;  // 0x0(0x38)
	struct FVector2D ReturnValue;  // 0x38(0x8)

}; 
// Function UMG.SlateBlueprintLibrary.IsUnderLocation
// Size: 0x44(Inherited: 0x0) 
struct FIsUnderLocation
{
	struct FGeometry Geometry;  // 0x0(0x38)
	struct FVector2D AbsoluteCoordinate;  // 0x38(0x8)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool ReturnValue : 1;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)

}; 
// Function UMG.SlateBlueprintLibrary.LocalToViewport
// Size: 0x58(Inherited: 0x0) 
struct FLocalToViewport
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FGeometry Geometry;  // 0x8(0x38)
	struct FVector2D LocalCoordinate;  // 0x40(0x8)
	struct FVector2D PixelPosition;  // 0x48(0x8)
	struct FVector2D ViewportPosition;  // 0x50(0x8)

}; 
// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
// Size: 0x58(Inherited: 0x0) 
struct FScreenToWidgetLocal
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FGeometry Geometry;  // 0x8(0x38)
	struct FVector2D screenPosition;  // 0x40(0x8)
	struct FVector2D LocalCoordinate;  // 0x48(0x8)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool bIncludeWindowPosition : 1;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)

}; 
// Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
// Size: 0x40(Inherited: 0x0) 
struct FTransformScalarLocalToAbsolute
{
	struct FGeometry Geometry;  // 0x0(0x38)
	float LocalScalar;  // 0x38(0x4)
	float ReturnValue;  // 0x3C(0x4)

}; 
// Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
// Size: 0x48(Inherited: 0x0) 
struct FTransformVectorAbsoluteToLocal
{
	struct FGeometry Geometry;  // 0x0(0x38)
	struct FVector2D AbsoluteVector;  // 0x38(0x8)
	struct FVector2D ReturnValue;  // 0x40(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// Size: 0x20(Inherited: 0x0) 
struct FProjectWorldLocationToWidgetPosition
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct FVector WorldLocation;  // 0x8(0xC)
	struct FVector2D screenPosition;  // 0x14(0x8)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bPlayerViewportRelative : 1;  // 0x1C(0x1)
	char pad_29_1 : 7;  // 0x1D(0x1)
	bool ReturnValue : 1;  // 0x1D(0x1)
	char pad_30[2];  // 0x1E(0x2)

}; 
// Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
// Size: 0x48(Inherited: 0x0) 
struct FTransformVectorLocalToAbsolute
{
	struct FGeometry Geometry;  // 0x0(0x38)
	struct FVector2D LocalVector;  // 0x38(0x8)
	struct FVector2D ReturnValue;  // 0x40(0x8)

}; 
// Function UMG.Slider.SetIndentHandle
// Size: 0x1(Inherited: 0x0) 
struct FSetIndentHandle
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InValue : 1;  // 0x0(0x1)

}; 
// Function UMG.Slider.SetLocked
// Size: 0x1(Inherited: 0x0) 
struct FSetLocked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InValue : 1;  // 0x0(0x1)

}; 
// Function UMG.Slider.SetStepSize
// Size: 0x4(Inherited: 0x0) 
struct FSetStepSize
{
	float InValue;  // 0x0(0x4)

}; 
// Function UMG.TileView.GetEntryHeight
// Size: 0x4(Inherited: 0x0) 
struct FGetEntryHeight
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// Size: 0x1(Inherited: 0x0) 
struct FIsOverFocusableWidget
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.TreeView.SetItemExpansion
// Size: 0x10(Inherited: 0x0) 
struct FSetItemExpansion
{
	struct UObject* Item;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bExpandItem : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function UMG.UMGSequencePlayer.GetUserTag
// Size: 0x8(Inherited: 0x0) 
struct FGetUserTag
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.UMGSequencePlayer.SetUserTag
// Size: 0x8(Inherited: 0x0) 
struct FSetUserTag
{
	struct FName InUserTag;  // 0x0(0x8)

}; 
// Function UMG.UniformGridPanel.AddChildToUniformGrid
// Size: 0x18(Inherited: 0x0) 
struct FAddChildToUniformGrid
{
	struct UWidget* Content;  // 0x0(0x8)
	int32_t InRow;  // 0x8(0x4)
	int32_t InColumn;  // 0xC(0x4)
	struct UUniformGridSlot* ReturnValue;  // 0x10(0x8)

}; 
// Function UMG.VerticalBox.AddChildToVerticalBox
// Size: 0x10(Inherited: 0x0) 
struct FAddChildToVerticalBox
{
	struct UWidget* Content;  // 0x0(0x8)
	struct UVerticalBoxSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.Viewport.GetViewLocation
// Size: 0xC(Inherited: 0x0) 
struct FGetViewLocation
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function UMG.Viewport.SetViewRotation
// Size: 0xC(Inherited: 0x0) 
struct FSetViewRotation
{
	struct FRotator Rotation;  // 0x0(0xC)

}; 
// Function UMG.Viewport.Spawn
// Size: 0x10(Inherited: 0x0) 
struct FSpawn
{
	AActor* ActorClass;  // 0x0(0x8)
	struct AActor* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WidgetComponent.GetManuallyRedraw
// Size: 0x1(Inherited: 0x0) 
struct FGetManuallyRedraw
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetAnimation.GetEndTime
// Size: 0x4(Inherited: 0x0) 
struct FGetEndTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.WidgetAnimation.GetStartTime
// Size: 0x4(Inherited: 0x0) 
struct FGetStartTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
// Size: 0x30(Inherited: 0x0) 
struct FCreatePlayAnimationProxyObject
{
	struct UUMGSequencePlayer* Result;  // 0x0(0x8)
	struct UUserWidget* Widget;  // 0x8(0x8)
	struct UWidgetAnimation* InAnimation;  // 0x10(0x8)
	float StartAtTime;  // 0x18(0x4)
	int32_t NumLoopsToPlay;  // 0x1C(0x4)
	char EUMGSequencePlayMode PlayMode;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	float PlaybackSpeed;  // 0x24(0x4)
	struct UWidgetAnimationPlayCallbackProxy* ReturnValue;  // 0x28(0x8)

}; 
// Function UMG.WidgetComponent.GetCurrentDrawSize
// Size: 0x8(Inherited: 0x0) 
struct FGetCurrentDrawSize
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.WidgetComponent.GetDrawAtDesiredSize
// Size: 0x1(Inherited: 0x0) 
struct FGetDrawAtDesiredSize
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetComponent.GetGeometryMode
// Size: 0x1(Inherited: 0x0) 
struct FGetGeometryMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function UMG.WidgetComponent.GetMaterialInstance
// Size: 0x8(Inherited: 0x0) 
struct FGetMaterialInstance
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.WidgetComponent.GetPivot
// Size: 0x8(Inherited: 0x0) 
struct FGetPivot
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.WidgetComponent.GetTickWhenOffscreen
// Size: 0x1(Inherited: 0x0) 
struct FGetTickWhenOffscreen
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetComponent.GetTwoSided
// Size: 0x1(Inherited: 0x0) 
struct FGetTwoSided
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetComponent.GetUserWidgetObject
// Size: 0x8(Inherited: 0x0) 
struct FGetUserWidgetObject
{
	struct UUserWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.WidgetComponent.GetWidget
// Size: 0x8(Inherited: 0x0) 
struct FGetWidget
{
	struct UUserWidget* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.WidgetComponent.GetWindowFocusable
// Size: 0x1(Inherited: 0x0) 
struct FGetWindowFocusable
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetComponent.SetCylinderArcAngle
// Size: 0x4(Inherited: 0x0) 
struct FSetCylinderArcAngle
{
	float InCylinderArcAngle;  // 0x0(0x4)

}; 
// Function UMG.WidgetComponent.SetDrawAtDesiredSize
// Size: 0x1(Inherited: 0x0) 
struct FSetDrawAtDesiredSize
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInDrawAtDesiredSize : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetComponent.SetDrawSize
// Size: 0x8(Inherited: 0x0) 
struct FSetDrawSize
{
	struct FVector2D Size;  // 0x0(0x8)

}; 
// Function UMG.WidgetComponent.SetManuallyRedraw
// Size: 0x1(Inherited: 0x0) 
struct FSetManuallyRedraw
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bUseManualRedraw : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetComponent.SetPivot
// Size: 0x8(Inherited: 0x0) 
struct FSetPivot
{
	struct FVector2D InPivot;  // 0x0(0x8)

}; 
// Function UMG.WidgetComponent.SetRedrawTime
// Size: 0x4(Inherited: 0x0) 
struct FSetRedrawTime
{
	float InRedrawTime;  // 0x0(0x4)

}; 
// Function UMG.WidgetComponent.SetTickWhenOffscreen
// Size: 0x1(Inherited: 0x0) 
struct FSetTickWhenOffscreen
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bWantTickWhenOffscreen : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetComponent.SetTintColorAndOpacity
// Size: 0x10(Inherited: 0x0) 
struct FSetTintColorAndOpacity
{
	struct FLinearColor NewTintColorAndOpacity;  // 0x0(0x10)

}; 
// Function UMG.WidgetComponent.SetTwoSided
// Size: 0x1(Inherited: 0x0) 
struct FSetTwoSided
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bWantTwoSided : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetComponent.SetWidgetSpace
// Size: 0x1(Inherited: 0x0) 
struct FSetWidgetSpace
{
	uint8_t  NewSpace;  // 0x0(0x1)

}; 
// Function UMG.WidgetComponent.SetWindowFocusable
// Size: 0x1(Inherited: 0x0) 
struct FSetWindowFocusable
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInWindowFocusable : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetComponent.SetWindowVisibility
// Size: 0x1(Inherited: 0x0) 
struct FSetWindowVisibility
{
	uint8_t  InVisibility;  // 0x0(0x1)

}; 
// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// Size: 0x8(Inherited: 0x0) 
struct FGet2DHitLocation
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetHoveredWidgetComponent
{
	struct UWidgetComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.WidgetInteractionComponent.GetLastHitResult
// Size: 0x88(Inherited: 0x0) 
struct FGetLastHitResult
{
	struct FHitResult ReturnValue;  // 0x0(0x88)

}; 
// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// Size: 0x1(Inherited: 0x0) 
struct FIsOverHitTestVisibleWidget
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// Size: 0x1(Inherited: 0x0) 
struct FIsOverInteractableWidget
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UMG.WidgetInteractionComponent.ReleasePointerKey
// Size: 0x18(Inherited: 0x0) 
struct FReleasePointerKey
{
	struct FKey Key;  // 0x0(0x18)

}; 
// Function UMG.WidgetInteractionComponent.ScrollWheel
// Size: 0x4(Inherited: 0x0) 
struct FScrollWheel
{
	float ScrollDelta;  // 0x0(0x4)

}; 
// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
// Size: 0x8(Inherited: 0x0) 
struct FGetMousePositionOnPlatform
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
// Size: 0x10(Inherited: 0x0) 
struct FGetMousePositionOnViewport
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector2D ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
// Size: 0x10(Inherited: 0x0) 
struct FSlotAsSizeBoxSlot
{
	struct UWidget* Widget;  // 0x0(0x8)
	struct USizeBoxSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// Size: 0x18(Inherited: 0x0) 
struct FGetMousePositionScaledByDPI
{
	struct APlayerController* Player;  // 0x0(0x8)
	float LocationX;  // 0x8(0x4)
	float LocationY;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
// Size: 0x40(Inherited: 0x0) 
struct FGetPlayerScreenWidgetGeometry
{
	struct APlayerController* PlayerController;  // 0x0(0x8)
	struct FGeometry ReturnValue;  // 0x8(0x38)

}; 
// Function UMG.WidgetLayoutLibrary.GetViewportScale
// Size: 0x10(Inherited: 0x0) 
struct FGetViewportScale
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
// Size: 0x40(Inherited: 0x0) 
struct FGetViewportWidgetGeometry
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FGeometry ReturnValue;  // 0x8(0x38)

}; 
// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// Size: 0x8(Inherited: 0x0) 
struct FRemoveAllWidgets
{
	struct UObject* WorldContextObject;  // 0x0(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// Size: 0x10(Inherited: 0x0) 
struct FSlotAsCanvasSlot
{
	struct UWidget* Widget;  // 0x0(0x8)
	struct UCanvasPanelSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// Size: 0x10(Inherited: 0x0) 
struct FSlotAsGridSlot
{
	struct UWidget* Widget;  // 0x0(0x8)
	struct UGridSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// Size: 0x10(Inherited: 0x0) 
struct FSlotAsHorizontalBoxSlot
{
	struct UWidget* Widget;  // 0x0(0x8)
	struct UHorizontalBoxSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// Size: 0x10(Inherited: 0x0) 
struct FSlotAsOverlaySlot
{
	struct UWidget* Widget;  // 0x0(0x8)
	struct UOverlaySlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
// Size: 0x10(Inherited: 0x0) 
struct FSlotAsSafeBoxSlot
{
	struct UWidget* Widget;  // 0x0(0x8)
	struct USafeZoneSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
// Size: 0x10(Inherited: 0x0) 
struct FSlotAsScaleBoxSlot
{
	struct UWidget* Widget;  // 0x0(0x8)
	struct UScaleBoxSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
// Size: 0x10(Inherited: 0x0) 
struct FSlotAsScrollBoxSlot
{
	struct UWidget* Widget;  // 0x0(0x8)
	struct UScrollBoxSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
// Size: 0x10(Inherited: 0x0) 
struct FSlotAsWidgetSwitcherSlot
{
	struct UWidget* Widget;  // 0x0(0x8)
	struct UWidgetSwitcherSlot* ReturnValue;  // 0x8(0x8)

}; 
// Function UMG.WrapBoxSlot.SetFillEmptySpace
// Size: 0x1(Inherited: 0x0) 
struct FSetFillEmptySpace
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InbFillEmptySpace : 1;  // 0x0(0x1)

}; 
