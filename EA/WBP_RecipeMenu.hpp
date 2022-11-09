#ifndef UE4SS_SDK_WBP_RecipeMenu_HPP
#define UE4SS_SDK_WBP_RecipeMenu_HPP

class UWBP_RecipeMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* FiveButton;
    class UWBP_IcoButton_C* MaxButton;
    class UBorder* MenuBorder;
    class UWBP_IcoButton_C* OneButton;
    FWBP_RecipeMenu_CNumberClicked NumberClicked;
    void NumberClicked(int32 Count);

    void BndEvt__WBP_RecipeMenu_OneButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_RecipeMenu_FiveButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_RecipeMenu_MaxButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_RecipeMenu(int32 EntryPoint);
    void NumberClicked__DelegateSignature(int32 Count);
};

#endif
