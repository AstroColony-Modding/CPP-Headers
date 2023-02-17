#ifndef UE4SS_SDK_WBP_GlobalPointSlot_HPP
#define UE4SS_SDK_WBP_GlobalPointSlot_HPP

class UWBP_GlobalPointSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* HexBackground;
    class UImage* Image;
    class UBorder* NumberBorder;
    class UOverlay* Overlay_0;
    class UTGConfigurableTextBlock* PrimaryText;
    EGlobalPointType GlobalPointType;
    int32 Points;
    bool HideBackground;
    bool HideNumber;

    void Init(EGlobalPointType GlobalPoint, int32 Points);
    class UWidget* GetTooltip();
    void SetGPEnabled(bool Enabled);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_GlobalPointSlot(int32 EntryPoint);
};

#endif
