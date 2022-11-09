#ifndef UE4SS_SDK_BP_CinematicScifiGuy_HPP
#define UE4SS_SDK_BP_CinematicScifiGuy_HPP

class ABP_CinematicScifiGuy_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Scene;
    class UStaticMeshComponent* head;
    class USkeletalMeshComponent* Mesh;
    class UAnimSequenceBase* SittingAnim;
    bool HideHead;
    bool IsFemale;
    int32 HeadID;
    FVector HeadOffset;

    void UserConstructionScript();
    void OnLoaded_FD4CB23643E81748EC31799F1B60584C(class UObject* Loaded);
    void OnLoaded_32A09A57484AB869B8782DB6CA3EDA1D(class UObject* Loaded);
    void OnLoaded_35DEB2E348229A65E29C2C87B8911529(class UObject* Loaded);
    void OnNotifyEnd_8A5E8E8047D189B8B31E228D4679A6BB(FName NotifyName);
    void OnNotifyBegin_8A5E8E8047D189B8B31E228D4679A6BB(FName NotifyName);
    void OnInterrupted_8A5E8E8047D189B8B31E228D4679A6BB(FName NotifyName);
    void OnBlendOut_8A5E8E8047D189B8B31E228D4679A6BB(FName NotifyName);
    void OnCompleted_8A5E8E8047D189B8B31E228D4679A6BB(FName NotifyName);
    void OnLoaded_6E101A094FA5D4D17FD25691659BAF32(class UObject* Loaded);
    void OnLoaded_8B13DB2944E52C0458C61290DB0BF62E(class UObject* Loaded);
    void StandUpSalute();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CinematicScifiGuy(int32 EntryPoint);
};

#endif
