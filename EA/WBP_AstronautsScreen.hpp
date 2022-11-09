#ifndef UE4SS_SDK_WBP_AstronautsScreen_HPP
#define UE4SS_SDK_WBP_AstronautsScreen_HPP

class UWBP_AstronautsScreen_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* ConstructionContainerVerticalBox;
    class UImage* Header_1;
    class UImage* Header_2;
    class UVerticalBox* ProfessionsCategories;
    class UWBP_AstronautCategory_C* WBP_AstronautCategory;
    class UWBP_AstronautRow_C* WBP_AstronautRowSlot;
    class UWBP_AstronautRow_C* WBP_AstronautRowSlot_0;
    class UWBP_Input_C* WBP_Input;
    class UWBP_PanelWidgetNavigation_C* WBP_PanelWidgetNavigation;
    class UWBP_RadiobuttonLine_C* WBP_RadiobuttonLine;
    EAIProfession CurrentProfession;
    uint8 AstronautSearchID;
    TArray<class AEHGrid*> GridsCached;

    void CacheGrids();
    void GetAIs(const EAIProfession Profession, TArray<class UEHAIObject*>& AIObjects);
    void UpdateAstronautsCounts();
    void InitContainerForProfession();
    void SelectProfession(EAIProfession Profession);
    void InitAstronautsCategories();
    void Construct();
    void BndEvt__WBP_AstronautsScreen_WBP_RadiobuttonLine_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(int32 ToggleID);
    void Destruct();
    void ExecuteUbergraph_WBP_AstronautsScreen(int32 EntryPoint);
};

#endif
