#ifndef UE4SS_SDK_WBP_VehiclePartConstruct_HPP
#define UE4SS_SDK_WBP_VehiclePartConstruct_HPP

class UWBP_VehiclePartConstruct_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_PlayerActionSlot_C* ActionConstruct;
    class UImage* ConstructionHex;
    class UImage* ConstructionTopBG;
    class UVerticalBox* ConstructionVerticalBox;
    class UHorizontalBox* CostHorizontal;
    class UImage* Icon;
    class UTGConfigurableTextBlock* Name;
    class UOverlay* Overlay;
    class UWBP_RecipeItemSlot_C* WBP_RecipeItemSlot;
    FEHVehiclePartTypeData VehiclePartData;

    class UWidget* GetDescriptionTooltip();
    void Init();
    void Construct();
    void ExecuteUbergraph_WBP_VehiclePartConstruct(int32 EntryPoint);
};

#endif
