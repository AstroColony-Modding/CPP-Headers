#ifndef UE4SS_SDK_MissionEntry_HPP
#define UE4SS_SDK_MissionEntry_HPP

class UMissionEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button;
    class UImage* MissionIcon;
    class UTextBlock* MissionTitle;
    class UMission* Mission;
    FMissionEntry_CClicked Clicked;
    void Clicked(class UMission* Mission);

    void Construct();
    void BndEvt__Button_K2Node_ComponentBoundEvent_133_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_147_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_MissionEntry(int32 EntryPoint);
    void Clicked__DelegateSignature(class UMission* Mission);
};

#endif
