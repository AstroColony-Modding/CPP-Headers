#ifndef UE4SS_SDK_WBP_ItemVariants_HPP
#define UE4SS_SDK_WBP_ItemVariants_HPP

class UWBP_ItemVariants_C : public UEHItemVariantsWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image;
    class UImage* Image_0;
    FLinearColor LightColor;
    FLinearColor DarkColor;

    void UpdateDots();
    void InitColorForConstruction(bool CanConstruct);
    void OnContextChanged();
    void ExecuteUbergraph_WBP_ItemVariants(int32 EntryPoint);
};

#endif
