#ifndef UE4SS_SDK_WBP_PlayerStats_HPP
#define UE4SS_SDK_WBP_PlayerStats_HPP

class UWBP_PlayerStats_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OxygenRefillAnim;
    class UWidgetAnimation* OxygenConsumptionLow;
    class UWidgetAnimation* OxygenConsumptionNormal;
    class UWBP_IcoMarker_C* HandCraftingMarker;
    class UOverlay* HandCraftingOverlay;
    class UImage* Health;
    class UImage* OxygenIcon;
    class UImage* PlayerOxygenCircle;
    class UImage* RadarBG;
    class UWBP_IcoMarker_C* RefillingOxygenMarker;
    FMargin SlotPadding;
    class UMaterialInstanceDynamic* OxygenMaterial;
    class UMaterialInstanceDynamic* HPMaterial;
    class UEHCraftingObject* HandCraftingContainer;

    class UWidget* GetHandCraftingTooltipWidget();
    class UWidget* GetOxygenBarrierTooltipWidget();
    void HandleHandProduced(FEHItemInstance ProducedItem);
    void HandleHandCraftingChanged(FName RecipeName);
    void PlayOxygenRefillAnim();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void OnCharacterRefillingOxygenChanged();
    void HasOxygenChanged();
    void ExecuteUbergraph_WBP_PlayerStats(int32 EntryPoint);
};

#endif
