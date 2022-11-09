#ifndef UE4SS_SDK_WBP_SpecialistSlot_HPP
#define UE4SS_SDK_WBP_SpecialistSlot_HPP

class UWBP_SpecialistSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_SelectionSlot_C* WBP_SelectionSlot;
    class UEHProfessionMeshAsset* Profession;
    FWBP_SpecialistSlot_CButtonClick ButtonClick;
    void ButtonClick(EAIProfession Profession);
    bool IsCurrentlySelectedSlot;
    bool IsBiggerSize;
    int32 Number;

    class UWidget* GetToolTipWidget();
    void Init(class UEHProfessionMeshAsset* Profession);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_SelectionSlot_K2Node_ComponentBoundEvent_1_SlotClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_SpecialistSlot(int32 EntryPoint);
    void ButtonClick__DelegateSignature(EAIProfession Profession);
};

#endif
