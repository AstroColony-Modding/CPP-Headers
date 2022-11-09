#ifndef UE4SS_SDK_BP_BotBoundaries_HPP
#define UE4SS_SDK_BP_BotBoundaries_HPP

class ABP_BotBoundaries_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    FName GetSerializedActorUniqueName();
    bool ShouldSerializeNamedActorSavegameData();
    bool ShouldSerializeNamedActorSavegameSpawn();
    bool ShouldSerializeUniqueClassSavegameData();
    void LoadingGameData(class UEHSaveGame* SaveGame);
    void SavegameObjectSerializeDataLoaded();
    void SavingGameData(class UEHSaveGame* SaveGame);
    void SetSerializedActorUniqueName(const FName UniqueName);
    void ExecuteUbergraph_BP_BotBoundaries(int32 EntryPoint);
};

#endif
