#ifndef UE4SS_SDK_BP_MenuGameMode_HPP
#define UE4SS_SDK_BP_MenuGameMode_HPP

class ABP_MenuGameMode_C : public AEHGameModeBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void OnFailure_0FC748EA4E6E48DD01985B88BA9CB0D2();
    void OnSuccess_0FC748EA4E6E48DD01985B88BA9CB0D2();
    void OnFailure_DCEE52E14DBBE3501A257EB02A49E320();
    void OnSuccess_DCEE52E14DBBE3501A257EB02A49E320();
    void HostSession();
    void ReceiveBeginPlay();
    void OnInit();
    void OnInitError(const FCFCoreError& Error);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnUnitialized();
    void OnUnitError(const FCFCoreError& Error);
    void ExecuteUbergraph_BP_MenuGameMode(int32 EntryPoint);
};

#endif
