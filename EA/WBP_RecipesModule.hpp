#ifndef UE4SS_SDK_WBP_RecipesModule_HPP
#define UE4SS_SDK_WBP_RecipesModule_HPP

class UWBP_RecipesModule_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* ChangeRecipesButton;
    class UVerticalBox* Recipes;
    class USizeBox* ScrollSizeBox;
    class UWBP_IcoMarker_C* WBP_IcoMarker;
    bool HideRecipesButton;
    int32 VisibleScrollRecipes;
    class UEHProductionObject* ProductionObject;

    void CreateRecipes();
    void Init(class UEHProductionObject* ProductionObject);
    void OnSelectedRecipesChanged();
    void BndEvt__ChangeRecipes_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void PopMenuClosed(TSubclassOf<class UInteractBaseWidget> IndicatedObject);
    void PopMenuOpened(EEHPopMenuType Type);
    void ExecuteUbergraph_WBP_RecipesModule(int32 EntryPoint);
};

#endif
