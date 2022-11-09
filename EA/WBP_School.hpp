#ifndef UE4SS_SDK_WBP_School_HPP
#define UE4SS_SDK_WBP_School_HPP

class UWBP_School_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ArrowImage_1;
    class UTGConfigurableTextBlock* CharactersTrained;
    class USizeBox* CharactersTrainedCircle;
    class UUniformGridPanel* SpecialistSlots;
    class UHorizontalBox* SpecialistsQueue;
    class UVerticalBox* VerticalBox_3;
    class UWBP_SpecialistSlot_C* WBP_SpecialistSelection1;
    class UWBP_SpecialistSlot_C* WBP_SpecialistSelection2;
    class UWBP_SpecialistSlot_C* WBP_SpecialistSelection3;
    class UWBP_SpecialistSlot_C* WBP_SpecialistSlot_C_3;
    class UWBP_SpecialistSlot_C* WBP_SpecialistSlot_C_4;
    class UWBP_TrainedHuman_C* WBP_TrainedHuman;
    class UEHSchoolObject* School;
    int32 RowSlots;

    void UpdateTrainedHuman();
    void UpdateAwaitingSpecialists();
    void UpdateQueue();
    void TrainSpecialistPressed(EAIProfession Profession);
    void InitSpecialistSlots();
    void Construct();
    void OnAwaitingSpecialistTrainingsChange();
    void OnProfessionUnlocked();
    void BndEvt__WBP_SpecialistSelection1_K2Node_ComponentBoundEvent_0_ButtonClick__DelegateSignature(EAIProfession Profession);
    void BndEvt__WBP_SpecialistSelection2_K2Node_ComponentBoundEvent_1_ButtonClick__DelegateSignature(EAIProfession Profession);
    void BndEvt__WBP_SpecialistSelection3_K2Node_ComponentBoundEvent_2_ButtonClick__DelegateSignature(EAIProfession Profession);
    void OnTrainedProductionChanged(EAIProfession Profession);
    void ExecuteUbergraph_WBP_School(int32 EntryPoint);
};

#endif
