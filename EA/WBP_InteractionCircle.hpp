#ifndef UE4SS_SDK_WBP_InteractionCircle_HPP
#define UE4SS_SDK_WBP_InteractionCircle_HPP

class UWBP_InteractionCircle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CircleImage;

    void SetInteractive();
    void Construct();
    void OnPlayerActionsChanged();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_InteractionCircle(int32 EntryPoint);
};

#endif
