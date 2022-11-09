#ifndef UE4SS_SDK_WBP_Debug_HPP
#define UE4SS_SDK_WBP_Debug_HPP

class UWBP_Debug_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* AICoords;
    class UTextBlock* BlockingHitCoords;
    class UTextBlock* BlockingHitCoords_1;
    class UTextBlock* BlockingHitCoords_2;
    class UWBP_TransparentButton_C* ButtonCheatResources;
    class UWBP_TransparentButton_C* ButtonCheatTechPts;
    class UWBP_TransparentButton_C* ButtonCheatUnlockAll;
    class UTextBlock* Grid;
    class UTextBlock* Grid_1;
    class UTextBlock* Playercoords;
    class UTextBlock* TextBlock;
    class UTextBlock* TextBlock_0;

    FText GetAsteroidsCount();
    FText GetPlayerVelocity();
    FText GetPreviewCoords();
    FText GetCollectiveHit();
    FText GetBlockingHit();
    FText GetPlayerCoords();
    FText GetChunk();
    FText GetGrid();
    FText GetAi();
    void Construct();
    void DebugModeChanged();
    void BndEvt__WBP_Debug_WBP_TextButton_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_Debug_WBP_TextButton_1_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_Debug_WBP_TextButton_2_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Debug(int32 EntryPoint);
};

#endif
