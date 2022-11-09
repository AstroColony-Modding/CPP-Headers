#ifndef UE4SS_SDK_WBP_PlantTooltip_HPP
#define UE4SS_SDK_WBP_PlantTooltip_HPP

class UWBP_PlantTooltip_C : public UEHItemTooltipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class URichTextBlock* DescriptionRich;
    class UWBP_RecipeItemSlot_C* FarmSlot;
    class UImage* Image_135;
    class UImage* ItemImage;
    class UTGConfigurableTextBlock* ItemName;
    class UWBP_NameDividerSmall_C* ResourcesOutItemsCat;
    class UWBP_NameDividerSmall_C* ResourcesOutItemsCat_1;
    class UWBP_NameDividerSmall_C* ResourcesOutItemsCat_2;
    class UWBP_NameDividerSmall_C* ResourcesOutItemsCat_3;
    class UImage* SizeIco;
    class UWBP_GlobalPointSlot_C* WaterSlot;
    class UWBP_GrowItem_C* WBP_GrowItem;
    class UWBP_GrowItem_C* WBP_GrowItem_1;
    class UWBP_GrowItem_C* WBP_GrowItem_2;
    class UWBP_HorizontalTechSlotSmall_C* WBP_TechSlotSmall;
    class UEHPlantMeshAsset* Plant;

    void UpdateSize();
    void Construct();
    void ExecuteUbergraph_WBP_PlantTooltip(int32 EntryPoint);
};

#endif
