#ifndef UE4SS_SDK_WBP_ModsHUB_HPP
#define UE4SS_SDK_WBP_ModsHUB_HPP

class UWBP_ModsHUB_C : public UEHModsHUBWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* EnterAnimation;
    class UWidgetAnimation* ExitAnimation;
    class UBorder* Border;
    class UImage* Image_0;
    class UImage* MissionIco;
    class UWidgetSwitcher* ModsSwitcher;
    class UWBP_RadiobuttonLine_C* ModsTabs;
    class UTGTile* MouseBlocker;
    class UOverlay* Overlay_0;
    class UWBP_Input_C* WBP_Input;
    class UWBP_ModsHUBOption_C* WBP_ModCategory_1;
    class UWBP_CloseBox_C* WBP_WindowClose;
    class UTGConfigurableTextBlock* WindowTitle_1;
    class UACModConfig* ACMod Config;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void TabChanged(int32 ToggleID);
    void InitTabWidgets(FHUBModDefinition HUBMod);
    void GetPakFilename(FString PackagePath, FString& Array Element);
    void Close();
    void Destruct();
    void Construct();
    void BndEvt__WBP_ModsHUB_WBP_WindowClose_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    void OnModsHUBOptionSelected(const FUGCPackage& Package, class UACModConfig* ModConfig);
    void BndEvt__WBP_ModsHUB_MouseBlocker_K2Node_ComponentBoundEvent_1_OnWidgetClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ModsHUB(int32 EntryPoint);
};

#endif
