#ifndef UE4SS_SDK_WBP_CampaignList_HPP
#define UE4SS_SDK_WBP_CampaignList_HPP

class UWBP_CampaignList_C : public UEHCampaignListWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon;
    class UTGConfigurableTextBlock* ScenarioDescription;
    class UTGConfigurableTextBlock* ScenarioName;
    class UTGConfigurableTextBlock* SDConfigurableTextBlock_2;
    class UWBP_CampaignOption_C* WBP_CampaignOption;
    class UWBP_CampaignOption_C* WBP_CampaignOption_38;
    class UWBP_PanelWidgetNavigation_C* WBP_PanelWidgetNavigation;

    void OnCampaignOptionSelected();
    void ExecuteUbergraph_WBP_CampaignList(int32 EntryPoint);
};

#endif
