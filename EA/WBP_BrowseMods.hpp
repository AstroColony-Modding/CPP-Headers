#ifndef UE4SS_SDK_WBP_BrowseMods_HPP
#define UE4SS_SDK_WBP_BrowseMods_HPP

class UWBP_BrowseMods_C : public UEHModsBrowsedWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_BrowseModOption_C* WBP_BrowseModOption;

    void CustomEvent_0(const TArray<FInstalledMod>& installed_mods);
    void CustomEvent_1(const FCFCoreError& Error);
    void OnContextChanged();
    void OnModsOptionSelected(class UTGViewModel* ViewModel);
    void Construct();
    void ExecuteUbergraph_WBP_BrowseMods(int32 EntryPoint);
};

#endif
