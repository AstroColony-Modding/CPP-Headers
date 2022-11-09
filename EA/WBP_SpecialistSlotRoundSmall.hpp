#ifndef UE4SS_SDK_WBP_SpecialistSlotRoundSmall_HPP
#define UE4SS_SDK_WBP_SpecialistSlotRoundSmall_HPP

class UWBP_SpecialistSlotRoundSmall_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* AIRequiredBorder;
    class UButton* Button_1;
    class UImage* SpecialistImage;
    class UEHProfessionMeshAsset* Profession;
    FWBP_SpecialistSlotRoundSmall_CButtonClick ButtonClick;
    void ButtonClick(EAIProfession Profession);
    bool IsBackgroundHidden;

    class UWidget* GetToolTipWidget_0();
    void Init(class UEHProfessionMeshAsset* Profession);
    void Construct();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_SpecialistSlotRoundSmall(int32 EntryPoint);
    void ButtonClick__DelegateSignature(EAIProfession Profession);
};

#endif
