#ifndef UE4SS_SDK_WBP_TechnologyPoints_HPP
#define UE4SS_SDK_WBP_TechnologyPoints_HPP

class UWBP_TechnologyPoints_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* SciencePointsHorizontal;
    bool HideNumberBackground;

    void UpdateGlobalSciencePoints();
    void Construct();
    void OnSciencePointsUpdated();
    void OnGlobalPointUnlocked();
    void OnLoadGameFinished(bool IsLoadedFromSavegame);
    void ExecuteUbergraph_WBP_TechnologyPoints(int32 EntryPoint);
};

#endif
