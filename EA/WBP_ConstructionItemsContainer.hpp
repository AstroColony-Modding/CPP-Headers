#ifndef UE4SS_SDK_WBP_ConstructionItemsContainer_HPP
#define UE4SS_SDK_WBP_ConstructionItemsContainer_HPP

class UWBP_ConstructionItemsContainer_C : public UEHContainerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_0;
    class USizeBox* ScrollSizeBox;
    FMargin BorderPadding;
    bool HideBorder;
    float HeightOverride;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WBP_ConstructionItemsContainer(int32 EntryPoint);
};

#endif
