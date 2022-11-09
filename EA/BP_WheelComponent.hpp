#ifndef UE4SS_SDK_BP_WheelComponent_HPP
#define UE4SS_SDK_BP_WheelComponent_HPP

class UBP_WheelComponent_C : public UStaticMeshComponent
{
    EEHVehiclePartType PartType;

    class UPrimitiveComponent* GetPrimitiveComponent();
    class USceneComponent* GetSetupComponent();
    bool HasClickInteraction();
};

#endif
