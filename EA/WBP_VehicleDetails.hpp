#ifndef UE4SS_SDK_WBP_VehicleDetails_HPP
#define UE4SS_SDK_WBP_VehicleDetails_HPP

class UWBP_VehicleDetails_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* AdditionalThrust;
    class UWBP_TextRow_C* BackThrust;
    class UHorizontalBox* CostHorizontal;
    class UWBP_TextRow_C* DownThrust;
    class UWBP_TextRow_C* ForwardThrust;
    class UWBP_TextRow_C* LeftThrust;
    class UWBP_SummaryAction_C* Maneuverability;
    class UOverlay* Overlay;
    class UWBP_TextRow_C* RightThrust;
    class UWBP_SummaryAction_C* StateBoosterJump;
    class UWBP_SummaryAction_C* StateCanExcavate;
    class UWBP_SummaryAction_C* StateCanLand;
    class UWBP_SummaryAction_C* StateSavesOxygen;
    class UWBP_SummaryAction_C* StateStrateLeft;
    class UWBP_SummaryAction_C* StateStrateRight;
    class UVerticalBox* SummaryActions;
    class UTGConfigurableTextBlock* Title;
    class UWBP_TextRow_C* UpThrust;
    class UImage* VehicleTypeIcon;
    class UWBP_RecipeItemSlot_C* WBP_RecipeItemSlot;
    class UWBP_RecipeItemSlot_C* WBP_RecipeItemSlot_1;
    FEHVehicleDefinition VehicleDetails;
    FEHVehicleTypeData VehicleTypeData;
    class ABP_ModularVehicleDesigner_C* VehicleDesigner;

    void UpdateActionVisibility(class UWidget* Widget, const EEHVehicleAction VehicleAction);
    void UpdateSummary();
    void UpdateCost();
    void InitVehicle();
    void InitVisibility();
    void Construct();
    void OnVehicleModified(int32 VehicleID);
    void OnVehiclePreviewSpawned();
    void ExecuteUbergraph_WBP_VehicleDetails(int32 EntryPoint);
};

#endif
