#ifndef UE4SS_SDK_WBP_ModMap_HPP
#define UE4SS_SDK_WBP_ModMap_HPP

class UWBP_ModMap_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UImage* FlickerImage;
    class UTGConfigurableTextBlock* MapName;
    class UWBP_TextButton_C* WBP_TextButton_1;
    FName Map Name;
    FWBP_ModMap_CMapOpened MapOpened;
    void MapOpened();

    void Construct();
    void BndEvt__UGCMapWidget_WBP_TextButton_1_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_ModMap(int32 EntryPoint);
    void MapOpened__DelegateSignature();
};

#endif
