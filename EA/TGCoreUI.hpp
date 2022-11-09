#ifndef UE4SS_SDK_TGCoreUI_HPP
#define UE4SS_SDK_TGCoreUI_HPP

#include "TGCoreUI_enums.hpp"

class UTGUISubsystem : public UObject
{
};

class UTGUIAchievementsManager : public UTGUISubsystem
{
};

class UTGUserWidget : public UUserWidget
{
    bool NotifyFocusChanged;
    class UTGUIConfigMain* BCUIConfig;
    TMap<class UClass*, class UTGUIConfigCustom*> BCUIConfigs;
    class UTGWidgetAnimationsManager* AnimationsManager;
    class UTGViewModel* ViewModel;

    void OnDataChanged();
    void OnContextChanged();
    class UTGWidgetAnimationsManager* GetWidgetAnimationsManager();
};

class UTGViewModel : public UObject
{
};

struct FBindable
{
};

struct FTextBindable : public FBindable
{
    FText Value;

};

struct FBoolBindable : public FBindable
{
    bool Value;

};

class UTGUIScene : public UTGUserWidget
{
    bool UseWideScreenContainer;
    bool PreventFromLosingFocusOnViewportClick;

    void OnExitEvent();
    void OnEnterEvent();
};

class UTGUILayer : public UTGUIScene
{
};

struct FTexture2DBindable : public FBindable
{
    class UTexture2D* Value;

};

class UTGUIScreen : public UTGUIScene
{
};

class UTGUICheatComponent : public UActorComponent
{
    class APlayerController* LocalPlayerController;

    TArray<FString> GetDebugDataToDraw();
};

class UTGUIConfig : public UDataAsset
{
};

struct FConfigurableText
{
    FSlateColor ColorAndOpacity;
    FSlateFontInfo Font;

};

struct FConfigurableButton
{
    FButtonStyle WidgetStyle;
    bool SpecifyFocusBrush;
    FSlateBrush Focused;
    bool UseHatching;
    FSlateBrush Hatching;

};

class UTGUIConfigMain : public UTGUIConfig
{
    TMap<class FName, class FLinearColor> ColorThemes;
    FLinearColor DefaultThemeColor;
    TArray<FName> EditorConfigNames;
    FConfigurableText DefaultFontStyle;
    TMap<class FName, class FConfigurableText> TextMap;
    TMap<class FName, class FConfigurableButton> ButtonStyleMap;

};

struct FConfigurableImage
{
    FSlateBrush Brush;
    FLinearColor Color;

};

struct FConfigurableBorder
{
    FSlateBrush Background;
    FLinearColor BrushColor;
    FVector2D DesiredSizeScale;

};

struct FVisibilityBindable : public FBindable
{
    ESlateVisibility Value;

};

class UTGPopupViewModel : public UTGViewModel
{
    FTextBindable TitleText;
    FTextBindable DescriptionText;

};

class UTGUIPopup : public UTGUIScene
{
    bool AllowDismissal;
    class UTGPopupViewModel* PopupViewModel;

};

struct FStringBindable : public FBindable
{
    FString Value;

};

struct FInt32Bindable : public FBindable
{
    int32 Value;

};

class UTGGameInstance : public UAdvancedFriendsGameInstance
{
    class UUGCRegistry* UGCRegistry;
    UClass* UISystemClass;
    UClass* UIDataProviderClass;
    class UObject* UISystem;
    class UObject* UIDataProvider;

};

class ATGHUD : public AHUD
{
    bool EnableBootingSequence;
    TSoftClassPtr<UTGHUDWidget> HUDWidget;
    bool ShouldCinematicHideInGameWidgets;
    bool EnableCustomSlateNavigationConfig;
    class UTGHUDWidget* HUDWidgetInstance;

    void ShowHUDWidget();
    void OnHUDWidgetSpawned(class UTGHUDWidget* SpawnedHUDWidget);
    void HideHUDWidget();
    void ApplicationActivationStateChanged(bool IsActive);
};

class UTGListenerWidget : public UTGUserWidget
{
    bool ShouldPropagateInitToChildren;

};

class UTGHUDWidget : public UTGListenerWidget
{
    TWeakObjectPtr<class ATGHUD> HUD;

};

class UTGUISceneSubsystem : public UTGUISubsystem
{
    float MaxDesiredSceneWidth;
    TArray<class UUserWidget*> ContainerWidgets;

};

class UTGUISceneManager : public UTGUISceneSubsystem
{
};

class UTGUILayerManager : public UTGUISceneManager
{
};

class UTGUIScreenManager : public UTGUISceneManager
{
    int32 ZOrder;
    uint8 CurrentScreen;
    TArray<uint8> ScreenHistory;

    void Back();
};

struct FTGUISceneContexts
{
    TArray<class TSubclassOf<UTGUISceneContext>> Contexts;

};

struct FFloatBindable : public FBindable
{
    float Value;

};

struct FTGUIPopupManagerContext
{
    class UTGPopupViewModel* PopupViewModel;

};

class UTGUIPopupManager : public UTGUISceneManager
{
    int32 ZOrder;
    TArray<FTGUIPopupManagerContext> PopupContextQueue;
    FTGUIPopupManagerContext CurrentPopupContext;
    class UTGUIPopup* CurrentPopup;
    TMap<class TSubclassOf<UTGUIPopup>, class UTGUIPopup*> PopupInstances;

};

class UTGUISystem : public UObject
{
    TSubclassOf<class UTGUIScreenManager> ScreenManagerClass;
    TSubclassOf<class UTGUISceneContextManager> UISceneContextManagerClass;
    TSubclassOf<class UTGUILayerManager> LayerManagerClass;
    TSubclassOf<class UTGUIPopupManager> PopupManagerClass;
    TSubclassOf<class UTGUILoadingScreenManager> LoadingScreenManagerClass;
    TSubclassOf<class UTGUIAchievementsManager> AchievementsManagerClass;
    TSubclassOf<class UTGUIAudioManager> UIAudioManagerClass;
    TSubclassOf<class UTGUINarrationManager> NarrationManagerClass;
    TSubclassOf<class UTGUIFocusManager> FocusManagerClass;
    class UTGUILayerManager* LayerManager;
    class UTGUIScreenManager* ScreenManager;
    class UTGUISceneContextManager* UISceneContextManager;
    class UTGUIPopupManager* PopupManager;
    class UTGUILoadingScreenManager* LoadingScreenManager;
    class UTGUIAchievementsManager* AchievementsManager;
    class UTGUIAudioManager* UIAudioManager;
    class UTGUINarrationManager* NarrationManager;
    class UTGUIFocusManager* FocusManager;

};

struct F2DSliderStyle : public FSlateWidgetStyle
{
    FSlateBrush NormalThumbImage;
    FSlateBrush DisabledThumbImage;
    FSlateBrush NormalBarImage;
    FSlateBrush DisabledBarImage;
    FSlateBrush BackgroundImage;
    float BarThickness;

};

class U2DSlider : public UWidget
{
    float ValueX;
    float ValueY;
    F2DSliderValueXDelegate ValueXDelegate;
    float GetFloat();
    F2DSliderValueYDelegate ValueYDelegate;
    float GetFloat();
    F2DSliderStyle WidgetStyle;
    FLinearColor SliderHandleColor;
    bool IndentHandle;
    bool Locked;
    float StepSize;
    bool IsFocusable;
    F2DSliderOnMouseCaptureBegin OnMouseCaptureBegin;
    void OnMouseCaptureBeginEvent2D();
    F2DSliderOnMouseCaptureEnd OnMouseCaptureEnd;
    void OnMouseCaptureEndEvent2D();
    F2DSliderOnControllerCaptureBegin OnControllerCaptureBegin;
    void OnControllerCaptureBeginEvent2D();
    F2DSliderOnControllerCaptureEnd OnControllerCaptureEnd;
    void OnControllerCaptureEndEvent2D();
    F2DSliderOnValueChangedX OnValueChangedX;
    void OnFloatValueChangedEvent2D(float Value);
    F2DSliderOnValueChangedY OnValueChangedY;
    void OnFloatValueChangedEvent2D(float Value);

    void SetValue(FVector2D InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    void SetCircleValue(FVector2D InCircleValue);
    FVector2D GetValue();
    FVector2D GetCircleValue();
};

class UColorWheel : public UWidget
{
    FColorWheelOnMouseCaptureBegin OnMouseCaptureBegin;
    void OnMouseColorCaptureBeginEvent();
    FColorWheelOnMouseCaptureEnd OnMouseCaptureEnd;
    void OnMouseColorCaptureEndEvent();
    FColorWheelOnValueChanged OnValueChanged;
    void OnValueChangedEvent(FLinearColor Value);

    void SetColor(const FLinearColor& LinearColor);
    FLinearColor GetCurrentColor();
};

class IConfigUIInterface : public IInterface
{
};

class IConfigurableUIInterface : public IInterface
{
};

class ITGIWidgetPoolable : public IInterface
{
};

class UTGBuildVersionWidget : public UTGUILayer
{
    class UTGConfigurableTextBlock* VersionTextBlock;

};

class UTGWidget : public UPanelWidget
{
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;
    bool IsFocusable;
    FTGWidgetOnClicked OnClicked;
    void OnWidgetClickedEvent();
    FTGWidgetOnPressed OnPressed;
    void OnWidgetPressedEvent();
    FTGWidgetOnReleased OnReleased;
    void OnWidgetReleasedEvent();
    FTGWidgetOnHovered OnHovered;
    void OnWidgetHoverEvent();
    FTGWidgetOnUnhovered OnUnhovered;
    void OnWidgetHoverEvent();
    FTGWidgetOnFocusReceived OnFocusReceived;
    void OnWidgetFocusReceivedEvent();
    FTGWidgetOnFocusLost OnFocusLost;
    void OnWidgetFocusLostEvent();
    bool ShouldDisableAudio;
    bool ShouldOverrideDefaultAudio;
    TSoftObjectPtr<USoundBase> PressedAudio;
    TSoftObjectPtr<USoundBase> ReleasedAudio;
    TSoftObjectPtr<USoundBase> HoveredAudio;
    TSoftObjectPtr<USoundBase> UnhoveredAudio;
    TSoftObjectPtr<USoundBase> FocusReceivedAudio;
    TSoftObjectPtr<USoundBase> FocusLostAudio;
    bool UsePreviewValuesToShowFinalWidgetState;
    uint8 EditorPreviewStates;

    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    void SetSelected(const bool InSelected);
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
    void SetPressed(const bool InPressed);
    void SetIsFocusable(bool InIsFocusable);
    void SetHovered(const bool InHovered);
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    void SetActive(bool Inactive);
    bool IsSelected();
    bool IsPressed();
    bool IsActive();
};

class UTGTile : public UTGWidget
{
    FSlateBrush OutlineBrush;
    FSlateBrush GlowBrush;
    FSlateBrush FillBrush;
    FLinearColor ColorAndOpacity;
    FLinearColor BackgroundColor;
    FButtonStyle WidgetStyle;

    void SetStyle(const FButtonStyle& InStyle);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    void SetBackgroundColor(FLinearColor InBackgroundColor);
};

class UTGButton : public UTGTile
{
    FText Text;
    FSlateColor TextColorAndOpacity;
    FSlateFontInfo TextFont;
    FVector2D TextShadowOffset;
    FLinearColor TextShadowColorAndOpacity;
    FMargin TextMargin;

    void SetTextColorAndOpacity(FSlateColor InColorAndOpacity);
    void SetText(FText InText);
};

class UTGToggle : public UTGWidget
{
    TEnumAsByte<ESlateCheckBoxType::Type> CheckBoxType;
    bool LockToggleState;
    bool Toggled;
    FText Text;
    FText TextOFF;
    FText TextON;
    int32 GlowZOrder;
    FSlateColor TextColorAndOpacity;
    FSlateFontInfo TextFont;
    FVector2D TextShadowOffset;
    FLinearColor TextShadowColorAndOpacity;
    FMargin TextMargin;
    FSlateBrush OutlineBrush;
    FSlateBrush GlowBrush;
    FSlateBrush FillBrush;
    FLinearColor ColorAndOpacity;
    FTGToggleOnToggleStateChanged OnToggleStateChanged;
    void OnToggleStateChanged(bool bIsToggled);

    void Toggle();
    void SetToggled(bool IsToggled);
    void SetTextColorAndOpacity(FSlateColor InColorAndOpacity);
    void SetText(FText InText);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
};

class UTGCheckBox : public UTGToggle
{
    FSlateBrush CheckedBrush;
    int32 CheckboxZOrder;

};

class UTGComboBoxString : public UComboBoxString
{

    void SetTextOptions(const TArray<FText>& InOptions);
    void SetOptions(const TArray<FString>& InOptions);
};

class UTGConfigurableBorder : public UBorder
{
    FName ConfigPropertyName;

};

class UTGConfigurableImage : public UImage
{
    FName ConfigPropertyName;

};

class UTGConfigurableTextBlock : public UTextBlock
{
    FName ConfigPropertyName;
    FName ColorThemeName;

    void UpdateConfigName(FName InConfigPropertyName);
};

class UTGEditableTextBox : public UEditableTextBox
{
    int32 CharacterLimit;
    ETextBoxContentType ContentType;

    void UpdateCharacters(const ETextBoxContentType Type, const int32 CharacterLimit);
    void SetFont(const FSlateFontInfo& InFont);
    void HandleOnTextChanged(const FText& InText);
};

class UTGFillBar : public UWidget
{
    float Percent;
    float ExtraPercent;
    bool IsPositive;
    FSlateBrush BackgroundImageBrush;
    FSlateBrush FillImageMainBrush;
    FSlateBrush FillImageExtraBrush;
    FLinearColor BarFillNormalColor;
    FLinearColor BarBackgroundColor;
    FLinearColor BarFillPositiveColor;
    FLinearColor BarFillNegativeColor;

    void SetPercent(float InPercent);
    void SetBarCharacter(bool IsPositiveIn);
};

class UTGUserWidgetFocusable : public UTGUserWidget
{
};

class UTGGridSlotWidget : public UTGUserWidgetFocusable
{
    FTGGridSlotWidgetOnSlotClicked OnSlotClicked;
    void OnSlotClicked();
    int32 SlotIndex;
    bool IsSlotEnabled;
    bool IsSlotActive;
    class UBorder* FocusBorder;
    TWeakObjectPtr<class UTGGridWidget> GridReference;

    void OnSlotClicked__DelegateSignature();
    void HoverFocus();
    void HoverActivation();
    void HandleAreaUnhovered();
    void HandleAreaHovered();
    void HandleAreaClicked();
};

struct FTGGridWidgetScroll
{
    bool IsScrollSupported;
    TEnumAsByte<EOrientation> ScrollOrientation;
    bool ShouldScrollAnimate;
    bool AlwaysShowScrollbar;
    int32 ScrollVisibleRows;
    int32 ScrollVisibleRowsBuffer;

};

struct FTGGridWidgetFocus
{
    bool UseCustomCellWhenEnteringGrid;
    int32 CustomCellGridIndex;
    float HoveringTimeToFocus;
    float HoveringTimeToActivate;

};

class UTGGridWidget : public UTGUserWidget
{
    FTGGridWidgetOnSlotActivated OnSlotActivated;
    void OnSlotActivated(int32 ActivatedSlotIndex);
    class UTGUniformGridPanel* GridPanel;
    class USizeBox* GridSizeBox;
    class USizeBox* SizeBox;
    class UScrollBox* ScrollBox;
    TEnumAsByte<EHorizontalAlignment> SlotHorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> SlotVerticalAlignment;
    int32 StartingSlotIndex;
    int32 Columns;
    FMargin SlotPadding;
    FTGGridWidgetScroll BCGridWidgetScroll;
    FTGGridWidgetFocus BCGridWidgetFocus;
    int32 NumberOfPreviewSlot;
    TArray<class UTGGridSlotWidget*> Slots;
    TSubclassOf<class UTGGridSlotWidget> TGGridSlotWidgetTemplate;
    TSubclassOf<class UTGInvisibleSlotWidget> TGInvisibleSlotWidgetTemplate;

    void RemoveSlot(const int32 SlotIndex);
    void OnSlotActivated__DelegateSignature(int32 ActivatedSlotIndex);
    void InsertSlot(const int32 SlotIndex);
    void HandleUserScrolled(float CurrentOffset);
    void EnableSlot(const int32 SlotIndex);
    void DisableSlot(const int32 SlotIndex);
    void DeactivateSlot(const int32 SlotIndex);
    class UTGGridSlotWidget* AddSlot(TSubclassOf<class UTGGridSlotWidget> TGGridSlotWidgetClass);
    void ActivateSlot(const int32 SlotIndex);
};

class UTGPanelWrapper : public UTGWidget
{
    TEnumAsByte<EHorizontalAlignment> ChildHorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> ChildVerticalAlignment;
    FSlateChildSize ChildSize;
    FMargin ChildPadding;
    TSubclassOf<class UTGUserWidget> ItemWidgetClass;
    bool UsePooling;
    uint8 PreviewItemsNumber;
    TArray<class UTGUserWidget*> CachedWidgets;
    TArray<class UTGUserWidget*> ChildrenWidgets;

};

class UTGHorizontalBoxWrapper : public UTGPanelWrapper
{
};

class UTGRichTextBlock : public URichTextBlock
{
    class UDataTable* ControllerKeysDefinition;
    class UTGKeyNameDecorationStyle* KeyNameDecoration;
    bool ShowKeyNameDecoration;
    FName DefaultTextStyleName;
    FKey EditorPreviewKey;
    TEnumAsByte<ETGInputControllerType> PreviewControllerType;

};

class UTGInputActionWidget : public UTGRichTextBlock
{
    FName ActionName;

    void SetActionName(const FName& InActionName);
};

class UTGInputControllerWidgetSwitcher : public UWidgetSwitcher
{
};

class UTGInvisibleSlotWidget : public UTGUserWidgetFocusable
{
    int32 SlotIndex;
    TWeakObjectPtr<class UTGGridWidget> GridReference;

};

class UTGNamedSlot : public UNamedSlot
{
    FTGNamedSlotOnNamedSlotAdded OnNamedSlotAdded;
    void OnNamedSlotAdded(class UWidget* SlotWidget);
    FTGNamedSlotOnNamedSlotRemoved OnNamedSlotRemoved;
    void OnNamedSlotRemoved();

};

class UTGRadialPanel : public UPanelWidget
{
    FLinearColor PreviewColor;
    float PreviewThickness;
    int32 NumberOfPreviewSegments;
    bool ShowPreviewInGame;
    float EllipseToRectangleLerpStrength;
    FVector2D CanvasPadding;

    class UTGRadialPanelSlot* AddChildToCanvas(class UWidget* Content);
};

class UTGRadialPanelSlot : public UPanelSlot
{
    float RadialPosition;
    FVector2D SlotOffset;
    FVector2D Alignment;
    bool bAutoSize;
    FVector2D SlotSize;
    int32 ZOrder;

    void SetZOrder(int32 InZOrder);
    void SetSlotSize(const FVector2D& InSlotSize);
    void SetSlotOffset(const FVector2D& InSlotOffset);
    void SetRadialPosition(float InRadialPosition);
    void SetAutoSize(bool InbAutoSize);
    void SetAlignment(const FVector2D& InAlignment);
    int32 GetZOrder();
    FVector2D GetSlotSize();
    FVector2D GetSlotOffset();
    float GetRadialPosition();
    bool GetAutoSize();
    FVector2D GetAlignment();
};

class UTGRadioButton : public UTGToggle
{
};

class UTGRadioButtonsLine : public UTextLayoutWidget
{
    TArray<FText> ButtonNames;
    int32 DefaultSelectedIndex;
    TEnumAsByte<EOrientation> Orientation;
    FSlateColor TextColorAndOpacity;
    FSlateFontInfo TextFont;
    FMargin TextMargin;
    FVector2D TextShadowOffset;
    FLinearColor TextShadowColorAndOpacity;
    FCheckBoxStyle CheckBoxStyle;
    FLinearColor ColorAndOpacity;
    FLinearColor BackgroundColor;
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    bool IsFocusable;
    FTGRadioButtonsLineOnRadiobuttonsStateChange OnRadiobuttonsStateChange;
    void OnRadiobuttonsStateChange(int32 Index, FString Name);

    void SetTextColorAndOpacity(FSlateColor InColorAndOpacity);
    void SetSelectedItemByName(const FString ItemName);
    void SetSelectedItemByIndex(const int32 ItemIndex);
    void SetButtons(const TArray<FText>& ButtonsIn);
    FString GetSelectedItemName();
    int32 GetSelectedItemIndex();
    TArray<FText> GetButtons();
};

class UTGKeyNameDecorationStyle : public UDataAsset
{
    FColor KeyNameColor;
    FColor KeyDecoratorColor;
    FString OpeningDecorator;
    FString ClosingDecorator;

};

class UTGRichTextBlockDecorator : public URichTextBlockDecorator
{
};

class UTGScrollBox : public UScrollBox
{
};

class UTGTextBlock : public UTextBlock
{
};

class UTGToggleButton : public UTGToggle
{
    FSlateBrush HandleBrush;

};

class UTGUIAnim : public UObject
{

    void Play();
};

struct FBCShakeAnimationConfig
{
    int32 MinShakeOffset;
    int32 MaxShakeOffset;
    float ShakeIntensity;
    int32 ShakesPerSecond;
    int32 ShakeCount;

};

class UBCUIAnimShake : public UTGUIAnim
{

    void SetConfig(const FBCShakeAnimationConfig& Config);
    class UBCUIAnimShake* RegisterNewAnimation(class UTGUserWidget* Outer, const FBCShakeAnimationConfig& Config);
};

class UTGUIAudioManager : public UTGUISubsystem
{
    class USoundMix* DefaultSoundMix;
    TArray<class USoundClass*> SoundClasses;
    TSoftObjectPtr<USoundBase> PressedDefaultAudio;
    TSoftObjectPtr<USoundBase> ReleasedDefaultAudio;
    TSoftObjectPtr<USoundBase> HoveredDefaultAudio;
    TSoftObjectPtr<USoundBase> UnhoveredDefaultAudio;
    TSoftObjectPtr<USoundBase> FocusReceivedDefaultAudio;
    TSoftObjectPtr<USoundBase> FocusLostDefaultAudio;
    TSoftObjectPtr<USoundBase> NavigationDefaultAudio;

};

class UTGUIConfigCustom : public UTGUIConfig
{
};

class UTGUIFocusManager : public UTGUISubsystem
{
    class UTGUserWidget* CurrentlyFocusedWidget;
    class UTGUIScene* CurrentlyFocusedScene;

};

struct FVector2DBindable : public FBindable
{
    FVector2D Value;

};

struct FColorBindable : public FBindable
{
    FLinearColor Value;

};

class UTGUIFunctionLibrary : public UBlueprintFunctionLibrary
{

    void Visibility_BindWidgetVisibility(FVisibilityBindable& VisibilityBindable, class UWidget* Widget);
    void Vector2D_BindWidgetRenderShear(FVector2DBindable& Vector2DBindable, class UWidget* Widget);
    void Vector2D_BindRenderTranslation(FVector2DBindable& Vector2DBindable, class UWidget* Widget);
    void Vector2D_BindRenderTransformPivot(FVector2DBindable& Vector2DBindable, class UWidget* Widget);
    void Texture2D_BindImage(FTexture2DBindable& Texture2DBindable, class UImage* Image, bool MatchSize);
    void Text_BindTGEditableTextBoxText(FTextBindable& TextBindable, class UTGEditableTextBox* TextBox);
    void Text_BindTextBlockText(FTextBindable& TextBindable, class UTextBlock* TextBlock);
    void Text_BindRichTextBlockText(FTextBindable& TextBindable, class UTGRichTextBlock* RichTextBlock);
    void Text_BindEditableTextBoxText(FTextBindable& TextBindable, class UEditableText* TextBox);
    void String_BindComboBoxStringOption(FStringBindable& StringBindable, class UComboBoxString* ComboBoxString);
    void Int32_BindActiveWidgetIndex(FInt32Bindable& Int32Bindable, class UWidgetSwitcher* WidgetSwitcher);
    FInputActionKeyMapping GetKeyMappingForAction(const FName ActionName);
    FKey GetKeyForAction(const FName ActionName);
    FLinearColor GetColorByThemeName(class UObject* WorldContextObject, FName ThemeName);
    void Float_BindSliderValue(FFloatBindable& FloatBindable, class USlider* Slider);
    void Float_BindRenderOpacity(FFloatBindable& FloatBindable, class UWidget* Widget);
    void Color_BindColorAndOpacity(FColorBindable& ColorBindable, class UUserWidget* UserWidget);
    void Bool_BindToggleState(FBoolBindable& BoolBindable, class UTGToggle* ToggleWidget);
    void Bool_BindIsEnabled(FBoolBindable& BoolBindable, class UWidget* Widget);
};

class UTGUILoadingScreenManager : public UTGUISubsystem
{
};

class UTGUINarrationManager : public UTGUISubsystem
{
};

class UTGUISceneContext : public UObject
{
};

class UTGUISceneContextManager : public UTGUISubsystem
{
    TMap<class FName, class UTGUISceneContext*> InitialisedContexts;

};

class UTGUniformGridPanel : public UUniformGridPanel
{
};

class UTGUserWidgetNavigable : public UTGUserWidget
{
};

class UTGVerticalBoxWrapper : public UTGPanelWrapper
{
};

class UTGWideScreenLayoutContainer : public UPanelWidget
{
    float MaxDesiredWidth;
    float MaxDesiredHeight;

};

class UTGWidgetAnimationsManager : public UObject
{

    class UWidgetAnimation* GetPredefinedAnimationWithRenamedTracks(const FName AnimationName, const TArray<FName> WidgetsNames);
    class UWidgetAnimation* GetPredefinedAnimationWithRenamedTrack(const FName AnimationName, const FName WidgetName);
    class UWidgetAnimation* GetPredefinedAnimationWithRemappedTracks(const FName AnimationName, const TMap<class FName, class FName> OldToNewWidgetNames);
    class UWidgetAnimation* GetPredefinedAnimationByName(const FName AnimationName);
    class UWidgetAnimation* GetAnimationByName(FName AnimationName);
};

class UTGWidgetComponent : public UWidgetComponent
{
};

struct FWidgetPool
{
    TArray<class UTGUserWidget*> UserWidgets;

};

class UTGWidgetPoolingManager : public UActorComponent
{
    TMap<class TSubclassOf<UTGUserWidget>, class FWidgetPool> WidgetPoolMap;

};

class UTGWidgetPredefinedAnimationsComponent : public UActorComponent
{
    TSubclassOf<class UUserWidget> PredefinedAnimationsMasterWidgetTemplate;
    TMap<class FName, class UWidgetAnimation*> PredefinedAnimations;

};

class UTypewriterRichTextBlock : public URichTextBlock
{

    void ShowNextTypewriterText();
    void ShowFinalTypewriterText();
    bool IsTypewritingTextFinal();
};

struct FTGLoadingScreenConfig
{
    class UTexture2D* ScreenBackgroundImage;
    FText TransitionText;
    FText TitleText;

};

struct FTGControllerKeySymbolRow : public FTableRowBase
{
    FKey InputKey;
    FColor BackgroundSymbolColor;
    FColor KeySymbolColor;
    FString BackgroundSymbolString;
    FString KeySymbolString;

};

struct FTGControllerKeySymbolsDefinition : public FTableRowBase
{
    TEnumAsByte<ETGInputControllerType> ControllerType;
    class UFont* Font;
    class UDataTable* ControllerInputSymbols;

};

#endif
