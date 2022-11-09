#ifndef UE4SS_SDK_BP_StaticGuy_HPP
#define UE4SS_SDK_BP_StaticGuy_HPP

class ABP_StaticGuy_C : public ASkeletalMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* MP_NGThruster;
    class UStaticMeshComponent* MP_Jetpack;
    int32 MaterialIndex;
    bool HasJetpack;
    bool IsFemale;
    int32 HeadID;
    bool AttachHydrotonic;
    FTransform HydrotonicTransf;
    TArray<TSoftObjectPtr<UMaterialInterface>> Upper;
    TArray<TSoftObjectPtr<UMaterialInterface>> Lower;
    TArray<TSoftObjectPtr<UMaterialInterface>> Helmet;

    void SuitEditorLoadBlocking();
    void InitShipping();
    void AttachHydrot();
    void UserConstructionScript();
    void OnLoaded_E895975F4DF22DBA5C839E957C16775B(class UObject* Loaded);
    void OnLoaded_085E018B49565049FDBDB48E98698075(class UObject* Loaded);
    void OnLoaded_A9A199EE4BE10FF33B6A1EA9F5E519E7(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_StaticGuy(int32 EntryPoint);
};

#endif
