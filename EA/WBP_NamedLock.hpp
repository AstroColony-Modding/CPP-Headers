#ifndef UE4SS_SDK_WBP_NamedLock_HPP
#define UE4SS_SDK_WBP_NamedLock_HPP

class UWBP_NamedLock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* LockOverlay;
    class UImage* LockTexture;
    class UEHGameplayEffectAsset* GameplayEffect;

    void UpdateLockState();
    class UWidget* GetLockToolTip();
    void Construct();
    void OnGameplayEffectUnlocked();
    void ExecuteUbergraph_WBP_NamedLock(int32 EntryPoint);
};

#endif
