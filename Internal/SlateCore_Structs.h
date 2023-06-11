#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x500(Inherited: 0x8) 
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	struct FButtonStyle UnderlineStyle;  // 0x8(0x278)
	struct FTextBlockStyle TextStyle;  // 0x280(0x270)
	struct FMargin Padding;  // 0x4F0(0x10)

}; 
// ScriptStruct SlateCore.CompositeFont
// Size: 0x38(Inherited: 0x0) 
struct FCompositeFont
{
	struct FTypeface DefaultTypeface;  // 0x0(0x10)
	struct FCompositeFallbackFont FallbackTypeface;  // 0x10(0x18)
	struct TArray<struct FCompositeSubFont> SubTypefaces;  // 0x28(0x10)

}; 
// ScriptStruct SlateCore.SlateColor
// Size: 0x28(Inherited: 0x0) 
struct FSlateColor
{
	struct FLinearColor SpecifiedColor;  // 0x0(0x10)
	char ESlateColorStylingMode ColorUseRule;  // 0x10(0x1)
	char pad_17[23];  // 0x11(0x17)

}; 
// ScriptStruct SlateCore.CharacterEvent
// Size: 0x20(Inherited: 0x18) 
struct FCharacterEvent : public FInputEvent
{
	char pad_24[8];  // 0x18(0x8)

}; 
// ScriptStruct SlateCore.WindowStyle
// Size: 0x1060(Inherited: 0x8) 
struct FWindowStyle : public FSlateWidgetStyle
{
	struct FButtonStyle MinimizeButtonStyle;  // 0x8(0x278)
	struct FButtonStyle MaximizeButtonStyle;  // 0x280(0x278)
	struct FButtonStyle RestoreButtonStyle;  // 0x4F8(0x278)
	struct FButtonStyle CloseButtonStyle;  // 0x770(0x278)
	struct FTextBlockStyle TitleTextStyle;  // 0x9E8(0x270)
	struct FSlateBrush ActiveTitleBrush;  // 0xC58(0x88)
	struct FSlateBrush InactiveTitleBrush;  // 0xCE0(0x88)
	struct FSlateBrush FlashTitleBrush;  // 0xD68(0x88)
	struct FSlateColor BackgroundColor;  // 0xDF0(0x28)
	struct FSlateBrush OutlineBrush;  // 0xE18(0x88)
	struct FSlateColor OutlineColor;  // 0xEA0(0x28)
	struct FSlateBrush BorderBrush;  // 0xEC8(0x88)
	struct FSlateBrush BackgroundBrush;  // 0xF50(0x88)
	struct FSlateBrush ChildBackgroundBrush;  // 0xFD8(0x88)

}; 
// ScriptStruct SlateCore.InputEvent
// Size: 0x18(Inherited: 0x0) 
struct FInputEvent
{
	char pad_0[24];  // 0x0(0x18)

}; 
// ScriptStruct SlateCore.Geometry
// Size: 0x38(Inherited: 0x0) 
struct FGeometry
{
	char pad_0[56];  // 0x0(0x38)

}; 
// ScriptStruct SlateCore.SlateBrush
// Size: 0x88(Inherited: 0x0) 
struct FSlateBrush
{
	char pad_0[8];  // 0x0(0x8)
	struct FVector2D ImageSize;  // 0x8(0x8)
	struct FMargin Margin;  // 0x10(0x10)
	struct FSlateColor TintColor;  // 0x20(0x28)
	struct UObject* ResourceObject;  // 0x48(0x8)
	struct FName ResourceName;  // 0x50(0x8)
	struct FBox2D UVRegion;  // 0x58(0x14)
	char ESlateBrushDrawType DrawAs;  // 0x6C(0x1)
	char ESlateBrushTileType Tiling;  // 0x6D(0x1)
	char ESlateBrushMirrorType Mirroring;  // 0x6E(0x1)
	char ESlateBrushImageType ImageType;  // 0x6F(0x1)
	char pad_112[16];  // 0x70(0x10)
	char bIsDynamicallyLoaded : 1;  // 0x80(0x1)
	char bHasUObject : 1;  // 0x80(0x1)
	char pad_128_1 : 6;  // 0x80(0x1)
	char pad_129[8];  // 0x81(0x8)

}; 
// ScriptStruct SlateCore.FontOutlineSettings
// Size: 0x20(Inherited: 0x0) 
struct FFontOutlineSettings
{
	int32_t OutlineSize;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bSeparateFillAlpha : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool bApplyOutlineToDropShadows : 1;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)
	struct UObject* OutlineMaterial;  // 0x8(0x8)
	struct FLinearColor OutlineColor;  // 0x10(0x10)

}; 
// ScriptStruct SlateCore.Margin
// Size: 0x10(Inherited: 0x0) 
struct FMargin
{
	float Left;  // 0x0(0x4)
	float Top;  // 0x4(0x4)
	float Right;  // 0x8(0x4)
	float Bottom;  // 0xC(0x4)

}; 
// ScriptStruct SlateCore.PointerEvent
// Size: 0x70(Inherited: 0x18) 
struct FPointerEvent : public FInputEvent
{
	char pad_24[88];  // 0x18(0x58)

}; 
// ScriptStruct SlateCore.ScrollBarStyle
// Size: 0x4D0(Inherited: 0x8) 
struct FScrollBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush HorizontalBackgroundImage;  // 0x8(0x88)
	struct FSlateBrush VerticalBackgroundImage;  // 0x90(0x88)
	struct FSlateBrush VerticalTopSlotImage;  // 0x118(0x88)
	struct FSlateBrush HorizontalTopSlotImage;  // 0x1A0(0x88)
	struct FSlateBrush VerticalBottomSlotImage;  // 0x228(0x88)
	struct FSlateBrush HorizontalBottomSlotImage;  // 0x2B0(0x88)
	struct FSlateBrush NormalThumbImage;  // 0x338(0x88)
	struct FSlateBrush HoveredThumbImage;  // 0x3C0(0x88)
	struct FSlateBrush DraggedThumbImage;  // 0x448(0x88)

}; 
// ScriptStruct SlateCore.SlateSound
// Size: 0x18(Inherited: 0x0) 
struct FSlateSound
{
	struct UObject* ResourceObject;  // 0x0(0x8)
	char pad_8[16];  // 0x8(0x10)

}; 
// ScriptStruct SlateCore.KeyEvent
// Size: 0x38(Inherited: 0x18) 
struct FKeyEvent : public FInputEvent
{
	char pad_24[32];  // 0x18(0x20)

}; 
// ScriptStruct SlateCore.NavigationEvent
// Size: 0x20(Inherited: 0x18) 
struct FNavigationEvent : public FInputEvent
{
	char pad_24[8];  // 0x18(0x8)

}; 
// ScriptStruct SlateCore.AnalogInputEvent
// Size: 0x40(Inherited: 0x38) 
struct FAnalogInputEvent : public FKeyEvent
{
	char pad_56[8];  // 0x38(0x8)

}; 
// ScriptStruct SlateCore.SlateFontInfo
// Size: 0x58(Inherited: 0x0) 
struct FSlateFontInfo
{
	struct UObject* FontObject;  // 0x0(0x8)
	struct UObject* FontMaterial;  // 0x8(0x8)
	struct FFontOutlineSettings OutlineSettings;  // 0x10(0x20)
	char pad_48[16];  // 0x30(0x10)
	struct FName TypefaceFontName;  // 0x40(0x8)
	int32_t Size;  // 0x48(0x4)
	int32_t LetterSpacing;  // 0x4C(0x4)
	char pad_80[8];  // 0x50(0x8)

}; 
// ScriptStruct SlateCore.SlateWidgetStyle
// Size: 0x8(Inherited: 0x0) 
struct FSlateWidgetStyle
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct SlateCore.TableRowStyle
// Size: 0x7C8(Inherited: 0x8) 
struct FTableRowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush SelectorFocusedBrush;  // 0x8(0x88)
	struct FSlateBrush ActiveHoveredBrush;  // 0x90(0x88)
	struct FSlateBrush ActiveBrush;  // 0x118(0x88)
	struct FSlateBrush InactiveHoveredBrush;  // 0x1A0(0x88)
	struct FSlateBrush InactiveBrush;  // 0x228(0x88)
	struct FSlateBrush EvenRowBackgroundHoveredBrush;  // 0x2B0(0x88)
	struct FSlateBrush EvenRowBackgroundBrush;  // 0x338(0x88)
	struct FSlateBrush OddRowBackgroundHoveredBrush;  // 0x3C0(0x88)
	struct FSlateBrush OddRowBackgroundBrush;  // 0x448(0x88)
	struct FSlateColor TextColor;  // 0x4D0(0x28)
	struct FSlateColor SelectedTextColor;  // 0x4F8(0x28)
	struct FSlateBrush DropIndicator_Above;  // 0x520(0x88)
	struct FSlateBrush DropIndicator_Onto;  // 0x5A8(0x88)
	struct FSlateBrush DropIndicator_Below;  // 0x630(0x88)
	struct FSlateBrush ActiveHighlightedBrush;  // 0x6B8(0x88)
	struct FSlateBrush InactiveHighlightedBrush;  // 0x740(0x88)

}; 
// ScriptStruct SlateCore.ComboBoxStyle
// Size: 0x3F0(Inherited: 0x8) 
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle ComboButtonStyle;  // 0x8(0x3B8)
	struct FSlateSound PressedSlateSound;  // 0x3C0(0x18)
	struct FSlateSound SelectionChangeSlateSound;  // 0x3D8(0x18)

}; 
// ScriptStruct SlateCore.ScrollBoxStyle
// Size: 0x228(Inherited: 0x8) 
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush TopShadowBrush;  // 0x8(0x88)
	struct FSlateBrush BottomShadowBrush;  // 0x90(0x88)
	struct FSlateBrush LeftShadowBrush;  // 0x118(0x88)
	struct FSlateBrush RightShadowBrush;  // 0x1A0(0x88)

}; 
// ScriptStruct SlateCore.FocusEvent
// Size: 0x8(Inherited: 0x0) 
struct FFocusEvent
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct SlateCore.ComboButtonStyle
// Size: 0x3B8(Inherited: 0x8) 
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle ButtonStyle;  // 0x8(0x278)
	struct FSlateBrush DownArrowImage;  // 0x280(0x88)
	struct FVector2D ShadowOffset;  // 0x308(0x8)
	struct FLinearColor ShadowColorAndOpacity;  // 0x310(0x10)
	struct FSlateBrush MenuBorderBrush;  // 0x320(0x88)
	struct FMargin MenuBorderPadding;  // 0x3A8(0x10)

}; 
// ScriptStruct SlateCore.ButtonStyle
// Size: 0x278(Inherited: 0x8) 
struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush Normal;  // 0x8(0x88)
	struct FSlateBrush Hovered;  // 0x90(0x88)
	struct FSlateBrush Pressed;  // 0x118(0x88)
	struct FSlateBrush Disabled;  // 0x1A0(0x88)
	struct FMargin NormalPadding;  // 0x228(0x10)
	struct FMargin PressedPadding;  // 0x238(0x10)
	struct FSlateSound PressedSlateSound;  // 0x248(0x18)
	struct FSlateSound HoveredSlateSound;  // 0x260(0x18)

}; 
// ScriptStruct SlateCore.ScrollBorderStyle
// Size: 0x118(Inherited: 0x8) 
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush TopShadowBrush;  // 0x8(0x88)
	struct FSlateBrush BottomShadowBrush;  // 0x90(0x88)

}; 
// ScriptStruct SlateCore.EditableTextStyle
// Size: 0x220(Inherited: 0x8) 
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo Font;  // 0x8(0x58)
	struct FSlateColor ColorAndOpacity;  // 0x60(0x28)
	struct FSlateBrush BackgroundImageSelected;  // 0x88(0x88)
	struct FSlateBrush BackgroundImageComposing;  // 0x110(0x88)
	struct FSlateBrush CaretImage;  // 0x198(0x88)

}; 
// ScriptStruct SlateCore.EditableTextBoxStyle
// Size: 0x7F8(Inherited: 0x8) 
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush BackgroundImageNormal;  // 0x8(0x88)
	struct FSlateBrush BackgroundImageHovered;  // 0x90(0x88)
	struct FSlateBrush BackgroundImageFocused;  // 0x118(0x88)
	struct FSlateBrush BackgroundImageReadOnly;  // 0x1A0(0x88)
	struct FMargin Padding;  // 0x228(0x10)
	struct FSlateFontInfo Font;  // 0x238(0x58)
	struct FSlateColor ForegroundColor;  // 0x290(0x28)
	struct FSlateColor BackgroundColor;  // 0x2B8(0x28)
	struct FSlateColor ReadOnlyForegroundColor;  // 0x2E0(0x28)
	struct FMargin HScrollBarPadding;  // 0x308(0x10)
	struct FMargin VScrollBarPadding;  // 0x318(0x10)
	struct FScrollBarStyle ScrollBarStyle;  // 0x328(0x4D0)

}; 
// ScriptStruct SlateCore.CompositeFallbackFont
// Size: 0x18(Inherited: 0x0) 
struct FCompositeFallbackFont
{
	struct FTypeface Typeface;  // 0x0(0x10)
	float ScalingFactor;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct SlateCore.TextBlockStyle
// Size: 0x270(Inherited: 0x8) 
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo Font;  // 0x8(0x58)
	struct FSlateColor ColorAndOpacity;  // 0x60(0x28)
	struct FVector2D ShadowOffset;  // 0x88(0x8)
	struct FLinearColor ShadowColorAndOpacity;  // 0x90(0x10)
	struct FSlateColor SelectedBackgroundColor;  // 0xA0(0x28)
	struct FLinearColor HighlightColor;  // 0xC8(0x10)
	struct FSlateBrush HighlightShape;  // 0xD8(0x88)
	struct FSlateBrush StrikeBrush;  // 0x160(0x88)
	struct FSlateBrush UnderlineBrush;  // 0x1E8(0x88)

}; 
// ScriptStruct SlateCore.SpinBoxStyle
// Size: 0x2E8(Inherited: 0x8) 
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush BackgroundBrush;  // 0x8(0x88)
	struct FSlateBrush HoveredBackgroundBrush;  // 0x90(0x88)
	struct FSlateBrush ActiveFillBrush;  // 0x118(0x88)
	struct FSlateBrush InactiveFillBrush;  // 0x1A0(0x88)
	struct FSlateBrush ArrowsImage;  // 0x228(0x88)
	struct FSlateColor ForegroundColor;  // 0x2B0(0x28)
	struct FMargin TextPadding;  // 0x2D8(0x10)

}; 
// ScriptStruct SlateCore.SplitterStyle
// Size: 0x118(Inherited: 0x8) 
struct FSplitterStyle : public FSlateWidgetStyle
{
	struct FSlateBrush HandleNormalBrush;  // 0x8(0x88)
	struct FSlateBrush HandleHighlightBrush;  // 0x90(0x88)

}; 
// ScriptStruct SlateCore.MotionEvent
// Size: 0x48(Inherited: 0x18) 
struct FMotionEvent : public FInputEvent
{
	char pad_24[48];  // 0x18(0x30)

}; 
// ScriptStruct SlateCore.ProgressBarStyle
// Size: 0x1A0(Inherited: 0x8) 
struct FProgressBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush BackgroundImage;  // 0x8(0x88)
	struct FSlateBrush FillImage;  // 0x90(0x88)
	struct FSlateBrush MarqueeImage;  // 0x118(0x88)

}; 
// ScriptStruct SlateCore.SliderStyle
// Size: 0x340(Inherited: 0x8) 
struct FSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush NormalBarImage;  // 0x8(0x88)
	struct FSlateBrush HoveredBarImage;  // 0x90(0x88)
	struct FSlateBrush DisabledBarImage;  // 0x118(0x88)
	struct FSlateBrush NormalThumbImage;  // 0x1A0(0x88)
	struct FSlateBrush HoveredThumbImage;  // 0x228(0x88)
	struct FSlateBrush DisabledThumbImage;  // 0x2B0(0x88)
	float BarThickness;  // 0x338(0x4)
	char pad_828[4];  // 0x33C(0x4)

}; 
// ScriptStruct SlateCore.HeaderRowStyle
// Size: 0xB70(Inherited: 0x8) 
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle ColumnStyle;  // 0x8(0x4D0)
	struct FTableColumnHeaderStyle LastColumnStyle;  // 0x4D8(0x4D0)
	struct FSplitterStyle ColumnSplitterStyle;  // 0x9A8(0x118)
	struct FSlateBrush BackgroundBrush;  // 0xAC0(0x88)
	struct FSlateColor ForegroundColor;  // 0xB48(0x28)

}; 
// ScriptStruct SlateCore.Typeface
// Size: 0x10(Inherited: 0x0) 
struct FTypeface
{
	struct TArray<struct FTypefaceEntry> Fonts;  // 0x0(0x10)

}; 
// ScriptStruct SlateCore.InlineTextImageStyle
// Size: 0x98(Inherited: 0x8) 
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush Image;  // 0x8(0x88)
	int16_t Baseline;  // 0x90(0x2)
	char pad_146[6];  // 0x92(0x6)

}; 
// ScriptStruct SlateCore.TypefaceEntry
// Size: 0x28(Inherited: 0x0) 
struct FTypefaceEntry
{
	struct FName Name;  // 0x0(0x8)
	struct FFontData Font;  // 0x8(0x20)

}; 
// ScriptStruct SlateCore.FontData
// Size: 0x20(Inherited: 0x0) 
struct FFontData
{
	struct FString FontFilename;  // 0x0(0x10)
	uint8_t  Hinting;  // 0x10(0x1)
	uint8_t  LoadingPolicy;  // 0x11(0x1)
	char pad_18[2];  // 0x12(0x2)
	int32_t SubFaceIndex;  // 0x14(0x4)
	struct UObject* FontFaceAsset;  // 0x18(0x8)

}; 
// ScriptStruct SlateCore.CompositeSubFont
// Size: 0x38(Inherited: 0x18) 
struct FCompositeSubFont : public FCompositeFallbackFont
{
	struct TArray<struct FInt32Range> CharacterRanges;  // 0x18(0x10)
	struct FString Cultures;  // 0x28(0x10)

}; 
// ScriptStruct SlateCore.DockTabStyle
// Size: 0x700(Inherited: 0x8) 
struct FDockTabStyle : public FSlateWidgetStyle
{
	struct FButtonStyle CloseButtonStyle;  // 0x8(0x278)
	struct FSlateBrush NormalBrush;  // 0x280(0x88)
	struct FSlateBrush ActiveBrush;  // 0x308(0x88)
	struct FSlateBrush ColorOverlayTabBrush;  // 0x390(0x88)
	struct FSlateBrush ColorOverlayIconBrush;  // 0x418(0x88)
	struct FSlateBrush ForegroundBrush;  // 0x4A0(0x88)
	struct FSlateBrush HoveredBrush;  // 0x528(0x88)
	struct FSlateBrush ContentAreaBrush;  // 0x5B0(0x88)
	struct FSlateBrush TabWellBrush;  // 0x638(0x88)
	struct FMargin TabPadding;  // 0x6C0(0x10)
	float OverlapWidth;  // 0x6D0(0x4)
	char pad_1748[4];  // 0x6D4(0x4)
	struct FSlateColor FlashColor;  // 0x6D8(0x28)

}; 
// ScriptStruct SlateCore.CaptureLostEvent
// Size: 0x8(Inherited: 0x0) 
struct FCaptureLostEvent
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct SlateCore.TableColumnHeaderStyle
// Size: 0x4D0(Inherited: 0x8) 
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush SortPrimaryAscendingImage;  // 0x8(0x88)
	struct FSlateBrush SortPrimaryDescendingImage;  // 0x90(0x88)
	struct FSlateBrush SortSecondaryAscendingImage;  // 0x118(0x88)
	struct FSlateBrush SortSecondaryDescendingImage;  // 0x1A0(0x88)
	struct FSlateBrush NormalBrush;  // 0x228(0x88)
	struct FSlateBrush HoveredBrush;  // 0x2B0(0x88)
	struct FSlateBrush MenuDropdownImage;  // 0x338(0x88)
	struct FSlateBrush MenuDropdownNormalBorderBrush;  // 0x3C0(0x88)
	struct FSlateBrush MenuDropdownHoveredBorderBrush;  // 0x448(0x88)

}; 
// ScriptStruct SlateCore.VolumeControlStyle
// Size: 0x5F0(Inherited: 0x8) 
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle SliderStyle;  // 0x8(0x340)
	struct FSlateBrush HighVolumeImage;  // 0x348(0x88)
	struct FSlateBrush MidVolumeImage;  // 0x3D0(0x88)
	struct FSlateBrush LowVolumeImage;  // 0x458(0x88)
	struct FSlateBrush NoVolumeImage;  // 0x4E0(0x88)
	struct FSlateBrush MutedImage;  // 0x568(0x88)

}; 
// ScriptStruct SlateCore.SearchBoxStyle
// Size: 0xA90(Inherited: 0x8) 
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle TextBoxStyle;  // 0x8(0x7F8)
	struct FSlateFontInfo ActiveFontInfo;  // 0x800(0x58)
	struct FSlateBrush UpArrowImage;  // 0x858(0x88)
	struct FSlateBrush DownArrowImage;  // 0x8E0(0x88)
	struct FSlateBrush GlassImage;  // 0x968(0x88)
	struct FSlateBrush ClearImage;  // 0x9F0(0x88)
	struct FMargin ImagePadding;  // 0xA78(0x10)
	char pad_2696_1 : 7;  // 0xA88(0x1)
	bool bLeftAlignButtons : 1;  // 0xA88(0x1)
	char pad_2697[7];  // 0xA89(0x7)

}; 
// ScriptStruct SlateCore.ExpandableAreaStyle
// Size: 0x120(Inherited: 0x8) 
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	struct FSlateBrush CollapsedImage;  // 0x8(0x88)
	struct FSlateBrush ExpandedImage;  // 0x90(0x88)
	float RolloutAnimationSeconds;  // 0x118(0x4)
	char pad_284[4];  // 0x11C(0x4)

}; 
// ScriptStruct SlateCore.CheckBoxStyle
// Size: 0x580(Inherited: 0x8) 
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	char ESlateCheckBoxType CheckBoxType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FSlateBrush UncheckedImage;  // 0x10(0x88)
	struct FSlateBrush UncheckedHoveredImage;  // 0x98(0x88)
	struct FSlateBrush UncheckedPressedImage;  // 0x120(0x88)
	struct FSlateBrush CheckedImage;  // 0x1A8(0x88)
	struct FSlateBrush CheckedHoveredImage;  // 0x230(0x88)
	struct FSlateBrush CheckedPressedImage;  // 0x2B8(0x88)
	struct FSlateBrush UndeterminedImage;  // 0x340(0x88)
	struct FSlateBrush UndeterminedHoveredImage;  // 0x3C8(0x88)
	struct FSlateBrush UndeterminedPressedImage;  // 0x450(0x88)
	struct FMargin Padding;  // 0x4D8(0x10)
	struct FSlateColor ForegroundColor;  // 0x4E8(0x28)
	struct FSlateColor BorderBackgroundColor;  // 0x510(0x28)
	struct FSlateSound CheckedSlateSound;  // 0x538(0x18)
	struct FSlateSound UncheckedSlateSound;  // 0x550(0x18)
	struct FSlateSound HoveredSlateSound;  // 0x568(0x18)

}; 
// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0xA70(Inherited: 0x8) 
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle EditableTextBoxStyle;  // 0x8(0x7F8)
	struct FTextBlockStyle TextStyle;  // 0x800(0x270)

}; 
