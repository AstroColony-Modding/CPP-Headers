#ifndef UE4SS_SDK_WBP_ModsHUBAbout_HPP
#define UE4SS_SDK_WBP_ModsHUBAbout_HPP

class UWBP_ModsHUBAbout_C : public UModTabUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* Author;
    class UTGConfigurableTextBlock* ContainMapsOption;
    class UWBP_IcoButton_C* CopyClipboard;
    class UTGConfigurableTextBlock* Description;
    class UTGConfigurableTextBlock* Filenames;
    class UTGConfigurableTextBlock* HasConfig;
    class UTGConfigurableTextBlock* OverrideFilesOption;
    class UTGScrollBox* ScrollBox;
    class UTGConfigurableTextBlock* Title;
    class UTGConfigurableTextBlock* Version;
    FHUBModDefinition Mod Definition;

    void UpdateFilenames();
    void OnInit(const FHUBModDefinition& ModDefinition);
    void BndEvt__WBP_ModsHUBAbout_CopyClipboard_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_ModsHUBAbout(int32 EntryPoint);
};

#endif
