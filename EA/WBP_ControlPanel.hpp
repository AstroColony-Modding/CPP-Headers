#ifndef UE4SS_SDK_WBP_ControlPanel_HPP
#define UE4SS_SDK_WBP_ControlPanel_HPP

class UWBP_ControlPanel_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class U2DSlider* 2DSlider;
    class UWBP_ThrustersForDirection_C* Thrusters1_N;
    class UWBP_ThrustersForDirection_C* Thrusters2_E;
    class UWBP_ThrustersForDirection_C* Thrusters3_S;
    class UWBP_ThrustersForDirection_C* Thrusters4_W;
    class UTGConfigurableTextBlock* VelocityX;
    class UTGConfigurableTextBlock* VelocityY;
    class UTGConfigurableTextBlock* VelocityZ;
    class USlider* VerticalSlider;
    class UWBP_AutoPilotModule_C* WBP_AutoPilotModule;
    class UWBP_NameDivider_C* WBP_DividerItems;
    class UWBP_NameDivider_C* WBP_DividerItems_1;
    class UWBP_IcoTextButton_C* WBP_IcoTextButton;
    class AEHGrid* Grid;
    class UEHThrusterNetwork* Thruster Network;

    FText GetVelocityZ();
    FText GetVelocityY();
    FText GetVelocityX();
    void Construct();
    void BndEvt__WBP_IcoTextButton_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature();
    void BndEvt__VerticalSlider_K2Node_ComponentBoundEvent_8_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__2DSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent2D__DelegateSignature(float Value);
    void UpdateVelocity();
    void ExecuteUbergraph_WBP_ControlPanel(int32 EntryPoint);
};

#endif
