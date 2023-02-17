#ifndef UE4SS_SDK_WBP_RaceTab_HPP
#define UE4SS_SDK_WBP_RaceTab_HPP

class UWBP_RaceTab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* RoverRaceButton;
    class UWBP_IcoButton_C* SpacecraftRaceButton;
    class UTGConfigurableTextBlock* Title;
    class UTGConfigurableTextBlock* Title_1;

    void BndEvt__WBP_RaceTab_SpacecraftRaceButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_RaceTab_RoverRaceButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_RaceTab(int32 EntryPoint);
};

#endif
