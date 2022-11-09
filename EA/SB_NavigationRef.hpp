#ifndef UE4SS_SDK_SB_NavigationRef_HPP
#define UE4SS_SDK_SB_NavigationRef_HPP

class USB_NavigationRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnAutopilotStateChanged();
    void LocalMissionStarted();
    void ExecuteUbergraph_SB_NavigationRef(int32 EntryPoint);
};

#endif
