#ifndef UE4SS_SDK_BI_UtilityInterface_HPP
#define UE4SS_SDK_BI_UtilityInterface_HPP

class IBI_UtilityInterface_C : public IInterface
{

    void JumpToSelectedActorLevel();
    void SelectLevelByObject(class UObject* Object);
    void SaveAsset(class UObject* ObjectToSave);
    void ShowDebugVoxelWorld(class AActor* ParentActor, FString DebugVoxelName);
    void OpenItemInstanceBP(class UEHItem* Item);
    void OpenItemStaticMesh(class UEHItem* Item);
};

#endif
