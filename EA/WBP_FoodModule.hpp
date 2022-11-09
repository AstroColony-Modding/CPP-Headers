#ifndef UE4SS_SDK_WBP_FoodModule_HPP
#define UE4SS_SDK_WBP_FoodModule_HPP

class UWBP_FoodModule_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NoFoodAnim;
    class UImage* Background;
    class UVerticalBox* ConsumedHorizontal;
    class UTGConfigurableTextBlock* Consumption;
    class UImage* ElectricBoltImage;
    class UOverlay* Overlay_1;
    class UImage* ProductionConsumptionBG_1;
    class UEHBarnObject* BarnObject;

    FLinearColor Get_ProductionConsumptionColor();
    void UpdateConsumption();
    void Init(class UEHBarnObject* BarnObject);
    void OnAnimalChanged();
    void ExecuteUbergraph_WBP_FoodModule(int32 EntryPoint);
};

#endif
