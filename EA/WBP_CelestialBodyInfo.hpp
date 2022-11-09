#ifndef UE4SS_SDK_WBP_CelestialBodyInfo_HPP
#define UE4SS_SDK_WBP_CelestialBodyInfo_HPP

class UWBP_CelestialBodyInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_NameDividerSmall_C* CelestialBodyType;
    class UWBP_IcoButton_C* ForgetButton;
    class UImage* Icon;
    class UWBP_TextRow_C* LandFormRowText;
    class UOverlay* Overlay;
    class UWBP_IcoButton_C* PinButton;
    class UVerticalBox* PlanetoidVerticalBox;
    class UVerticalBox* ResourcesList;
    class UWBP_TextRow_C* ShapeRowText;
    class UWBP_TextRow_C* SizeRowText;
    class UWBP_NameDividerSmall_C* StationDivider;
    class UWBP_TextRow_C* TerrainRowText;
    class UWBP_NameDividerSmall_C* VelocityDivider;
    class UWBP_VelocityPreview_C* VelocityPreview;
    class UVerticalBox* VelocityVerticalBox;
    class UWBP_Input_C* WBP_Input;
    class UWBP_ItemSlotWithName_C* WBP_ItemSlotWithName;
    class UWBP_ItemSlotWithName_C* WBP_ItemSlotWithName_1;
    class AActor* CelestialBody;
    FWBP_CelestialBodyInfo_CDisplayNameChanged DisplayNameChanged;
    void DisplayNameChanged();

    void UpdateVelocity();
    void HandlePlanetoidGenerated();
    void UpdatePlanetoidData();
    bool GetForgetAboutCelestialBody();
    void UpdatePinToggle();
    void UpdateResourcesList();
    void Init(class AActor* CelestialBody);
    void BndEvt__PinButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_CelestialBodyInfo_PinButton_1_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_CelestialBodyInfo_WBP_Input_K2Node_ComponentBoundEvent_2_OnTextCommited__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_WBP_CelestialBodyInfo(int32 EntryPoint);
    void DisplayNameChanged__DelegateSignature();
};

#endif
