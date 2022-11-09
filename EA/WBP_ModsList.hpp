#ifndef UE4SS_SDK_WBP_ModsList_HPP
#define UE4SS_SDK_WBP_ModsList_HPP

class UWBP_ModsList_C : public UEHModsListWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* Author;
    class UTGConfigurableTextBlock* Description;
    class UHorizontalBox* HorizontalBox;
    class UVerticalBox* ModDetailsVertical;
    class UTGConfigurableTextBlock* Name;
    class UScrollBox* RegisteredOverridesScrollBox;
    class UImage* Thumbnail;
    class UTGConfigurableTextBlock* Version;
    class UWBP_ModOption_C* WBP_ModOption;

    void PopulateRegisteredOverrides();
    void PopulateUGCList();
    void Update Registered Overrides();
    void OnModsOptionSelected(class UTGViewModel* ViewModel);
    void OnContextChanged();
    void ExecuteUbergraph_WBP_ModsList(int32 EntryPoint);
};

#endif
