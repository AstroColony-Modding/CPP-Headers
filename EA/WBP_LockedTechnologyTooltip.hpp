#ifndef UE4SS_SDK_WBP_LockedTechnologyTooltip_HPP
#define UE4SS_SDK_WBP_LockedTechnologyTooltip_HPP

class UWBP_LockedTechnologyTooltip_C : public UUserWidget
{
    class UBorder* Border;
    class UTGConfigurableTextBlock* ItemName;
    class UWBP_HorizontalTechSlotSmall_C* WBP_TechSlotSmall;

    void InitTechnology(class UEHTechnologyAsset* Technology);
};

#endif
