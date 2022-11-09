#ifndef UE4SS_SDK_WBP_PickInfo_HPP
#define UE4SS_SDK_WBP_PickInfo_HPP

class UWBP_PickInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* InfoCanvas;
    TArray<FPickedInfo> PickedInfoQueue;
    float LastPickShowTime;
    float ShowInterval;

    void ShowPicked(const FPickedInfo& PickedInfo);
    void TryToShowPickedInfo();
    void OnGlobalPointPicked(FEHGlobalPointInstance PickedPoint);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnResourceItemPicked(FEHItemInstance PickedItem);
    void OnItemProduced(FEHItemInstance ProducedItem);
    void Construct();
    void ExecuteUbergraph_WBP_PickInfo(int32 EntryPoint);
};

#endif
