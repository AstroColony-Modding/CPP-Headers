#ifndef UE4SS_SDK_WBP_ThrustersForDirection_HPP
#define UE4SS_SDK_WBP_ThrustersForDirection_HPP

class UWBP_ThrustersForDirection_C : public UUserWidget
{
    class UTGConfigurableTextBlock* LargeCount;
    class UHorizontalBox* LargeThrusterBox;
    class UTGConfigurableTextBlock* MediumCount;
    class UHorizontalBox* MediumThrusterBox;
    class UTGConfigurableTextBlock* SmallCount;
    class UHorizontalBox* SmallThrusterBox;

    void UpdateThrusterSized(TArray<int32>& Active, TArray<int32>& Inactive);
    void UpdateThrustersDetails(TArray<class UEHThrusterObject*>& Thrusters);
};

#endif
