#ifndef UE4SS_SDK_WBP_ModPackage_HPP
#define UE4SS_SDK_WBP_ModPackage_HPP

class UWBP_ModPackage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* VerticalBox_0;
    FWBP_ModPackage_COverridesUpdated OverridesUpdated;
    void OverridesUpdated();

    void SetupWidget(FUGCPackage InPackage);
    void OnOverridesUpdated();
    void ExecuteUbergraph_WBP_ModPackage(int32 EntryPoint);
    void OverridesUpdated__DelegateSignature();
};

#endif
