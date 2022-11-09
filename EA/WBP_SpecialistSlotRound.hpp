#ifndef UE4SS_SDK_WBP_SpecialistSlotRound_HPP
#define UE4SS_SDK_WBP_SpecialistSlotRound_HPP

class UWBP_SpecialistSlotRound_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Avatar;
    class UImage* Background;
    class UButton* Button_1;
    class UEHProfessionMeshAsset* Profession;
    FWBP_SpecialistSlotRound_CButtonClick ButtonClick;
    void ButtonClick(EAIProfession Profession);
    bool IsBackgroundHidden;

    void UpdateBrush(class UTexture2D* Texture);
    void Init(class UEHProfessionMeshAsset* Profession);
    void Construct();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_SpecialistSlotRound(int32 EntryPoint);
    void ButtonClick__DelegateSignature(EAIProfession Profession);
};

#endif
