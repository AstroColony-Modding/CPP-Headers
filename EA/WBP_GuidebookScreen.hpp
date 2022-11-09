#ifndef UE4SS_SDK_WBP_GuidebookScreen_HPP
#define UE4SS_SDK_WBP_GuidebookScreen_HPP

class UWBP_GuidebookScreen_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Header_1;
    class UImage* Header_2;
    class UVerticalBox* TipCategories;
    class UWBP_NameDivider_C* TipDivider;
    class UOverlay* TipOverlay;
    class UWBP_GuideCategoryWidget_C* WBP_GuideCategoryWidget;
    class UWBP_Input_C* WBP_Input;
    int32 CurrentTipIndex;

    void GetPreviousTip(TSubclassOf<class UTipWidget>& TipWidget, int32& TipIndex);
    void GetNextTip(TSubclassOf<class UTipWidget>& TipWidget, int32& TipIndex);
    void ShowRandomTip();
    void HandleCategoryClicked(int32 ID);
    void InitTipCategories();
    void ShowTip(int32 TipIndex);
    void Construct();
    void ExecuteUbergraph_WBP_GuidebookScreen(int32 EntryPoint);
};

#endif
