#ifndef UE4SS_SDK_WBP_SaveLoadList_HPP
#define UE4SS_SDK_WBP_SaveLoadList_HPP

class UWBP_SaveLoadList_C : public UEHSaveLoadListWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* MultiplayerHorizontalBox;
    class UTGConfigurableTextBlock* Name;
    class UTGConfigurableTextBlock* PlaeyersSavedText;
    class UWBP_IcoMarker_C* PlayerWarning;
    class UTGConfigurableTextBlock* SavedPlayers;
    class UTGConfigurableTextBlock* SDConfigurableTextBlock;
    class UTGConfigurableTextBlock* SDConfigurableTextBlock_1;
    class UTGConfigurableTextBlock* SDConfigurableTextBlock_2;
    class UTGConfigurableTextBlock* Seed;
    class UImage* Thumbnail;
    class UTGConfigurableTextBlock* Time;
    class UTGConfigurableTextBlock* Version;
    class UWBP_SaveLoadOption_C* WBP_SaveLoadOption_C;
    class UWBP_SaveLoadOption_C* WBP_SaveLoadOption_C_0;
    bool IsMultiplayer;

    void OnContextChanged();
    void OnScenarioDetailsUpdated(FEHScenarioDetails ScenarioDetails);
    void Construct();
    void ExecuteUbergraph_WBP_SaveLoadList(int32 EntryPoint);
};

#endif
