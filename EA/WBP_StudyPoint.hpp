#ifndef UE4SS_SDK_WBP_StudyPoint_HPP
#define UE4SS_SDK_WBP_StudyPoint_HPP

class UWBP_StudyPoint_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_TrainedHuman_C* WBP_TrainedHuman;
    class UEHStudyPointObject* StudyPoint;

    void UpdateTrainedSpecialist();
    void Construct();
    void OnTrainedProductionChanged(EAIProfession Profession);
    void ExecuteUbergraph_WBP_StudyPoint(int32 EntryPoint);
};

#endif
