#ifndef UE4SS_SDK_MissionObjectives_HPP
#define UE4SS_SDK_MissionObjectives_HPP

#include "MissionObjectives_enums.hpp"

class UMission : public UObject
{
    FName AssetName;
    bool bUseAssetNameAsMissionName;
    FText MissionName;
    FText MissionCongratulateText;
    class UTexture2D* MissionIcon;
    FText MissionDescription;
    uint8 ChangeLastActiveReasons;
    class UReferencedMissionObject* ReferencedMissionObject;
    EMissionState MissionState;
    class UMOTextNode* MissionObjectivesRoot;
    class UEdGraph* UpdateGraph;
    int32 UniqueID;
    TMap<class FName, class UMOObjectiveNode*> RegisteredObjectives;
    TArray<class UMOTextNode*> CurrentlyActiveNodes;
    TArray<class UMOTextNode*> NodesHistory;
    class UMission* MissionTemplate;
    FName MissionID;

    void NotifyNodeActivated(class UMOTextNode* ActivatedNode);
    bool IsObjectiveCompleted(const FName ObjectiveName);
    bool IsObjectiveActive(const FName ObjectiveName);
    class UMOObjectiveNode* GetObjectiveByName(const FName ObjectiveName);
    class UMOTextNode* GetLastNodeWithBotText();
    TArray<class UMOBaseNode*> FindAllTreeTextNodes();
};

struct FNodeSaveData
{
    FName NodeName;
    TArray<uint8> NodeData;

};

struct FMissionData
{
    FString MissionClass;
    FName MissionName;
    TArray<FName> SavedNodeNames;
    TArray<FNodeSaveData> SavedNodeDatas;
    TArray<FName> CurrentlyActiveNodesNames;
    TArray<FName> RegisteredObjectivesNodesNames;
    TArray<FName> HistoryNodesNames;
    TArray<uint8> MissionData;
    TArray<uint8> ReferencedMissionObjectData;

};

struct FMOMission
{
    class UMission* Mission;
    FName MissionID;

};

struct FMissionSavegameData
{
    TArray<FMissionData> MissionDatas;
    TArray<FName> MissionNames;
    TArray<FMOMission> OngoingMissionsTemplates;
    TArray<FMOMission> SucessfulMissionsTemplates;
    TArray<FMOMission> FailureMissionsTemplates;

};

class UMissionSaveGame : public USaveGame
{
    FMissionSavegameData SaveData;
    TArray<FMissionSavegameData> MultiplayerSaveData;
    float PreviousSessionTime;

};

class UMOBaseNode : public UObject
{
    TArray<class UMOBaseNode*> ChildNodes;
    bool bNodeIsActive;
    uint32 UniqueID;
    TArray<class UMOBaseNode*> ParentNodes;

    bool K2_IsActive();
    class UMission* GetMission();
};

class UMOTextNode : public UMOBaseNode
{
    FName Title;
    FText Text;
    FText BotText;
    bool ShowNext;
    class UTexture2D* Icon;
    ENodeCharacter NodeCharacter;
    FTimespan ActivationTime;
    TArray<class UScriptedAction*> Activation_Actions;
    bool DebugForceToActivate;
    bool bShowNarration;
    bool bActivateWhenAllParentsDone;

};

class UMOMissionNode : public UMOTextNode
{
    EMissionState NodeMissionState;

};

class UMOMissionsManager : public UActorComponent
{
    FMOMissionsManagerOnMissionStarted OnMissionStarted;
    void OnMissionStarted(class UMission* Mission);
    FMOMissionsManagerOnMissionEnded OnMissionEnded;
    void OnMissionEnded(class UMission* Mission, bool IsSuccesfull);
    FMOMissionsManagerOnLastActiveMissionChanged OnLastActiveMissionChanged;
    void OnLastActiveMissionChanged(class UMission* Mission);
    FMOMissionsManagerOnMissionsChanged OnMissionsChanged;
    void OnMissionsChanged(const TArray<class UMission*>& OngoingMissions, const TArray<class UMission*>& SucessfulMissions, const TArray<class UMission*>& FailureMissions);
    FMOMissionsManagerOnMissionNodeActivated OnMissionNodeActivated;
    void OnMissionNodeActivated(const class UMission* Mission, const class UMOTextNode* Node);
    FMOMissionsManagerOnMissionObjectiveActivated OnMissionObjectiveActivated;
    void OnMissionObjectiveActivated(const class UMission* Mission, const class UMOObjectiveNode* Node);
    FMOMissionsManagerOnMissionObjectiveCompleted OnMissionObjectiveCompleted;
    void OnMissionObjectiveCompleted(const class UMission* Mission, const class UMOObjectiveNode* Node);
    FMOMissionsManagerOnMissionRecovered OnMissionRecovered;
    void OnMissionRecovered(const class UMission* Mission);
    TSubclassOf<class UMissionSaveGame> SaveGameTemplate;
    TArray<class UMission*> OngoingMissions;
    TArray<class UMission*> SucessfulMissions;
    TArray<class UMission*> FailureMissions;

    void SwapWithNextMission(class UMission* SelectedMission);
    void Server_StartMission(class UMission* Mission, const FName MissionID, class UReferencedMissionObject* ReferencedMissionObject);
    void Server_CompleteObjective(FName ObjectiveName, class UMission* Mission, uint8 RepetitionsCount);
    void SaveMissionsToSlot(FString SlotName, const int32 UserIndex);
    void SaveMissionsToObject(const uint8 PlayerNetworkIndex, class USaveGame* SaveGameObject);
    void OnMissionStarted__DelegateSignature(class UMission* Mission);
    void OnMissionsChanged__DelegateSignature(const TArray<class UMission*>& OngoingMissions, const TArray<class UMission*>& SucessfulMissions, const TArray<class UMission*>& FailureMissions);
    void OnMissionRecovered__DelegateSignature(const class UMission* Mission);
    void OnMissionObjectiveCompleted__DelegateSignature(const class UMission* Mission, const class UMOObjectiveNode* Node);
    void OnMissionObjectiveActivated__DelegateSignature(const class UMission* Mission, const class UMOObjectiveNode* Node);
    void OnMissionNodeActivated__DelegateSignature(const class UMission* Mission, const class UMOTextNode* Node);
    void OnMissionEnded__DelegateSignature(class UMission* Mission, bool IsSuccesfull);
    void OnLastActiveMissionChanged__DelegateSignature(class UMission* Mission);
    void NotifyLastMissionNodeActivated(class UMission* Mission);
    void MultiStartMission(class UMission* Mission, const FName MissionID, class UReferencedMissionObject* ReferencedMissionObject);
    void MultiCompleteObjective(FName ObjectiveName, class UMission* Mission, uint8 RepetitionsCount);
    void LoadMissionsFromSlot(FString SlotName, const int32 UserIndex);
    void LoadMissionsFromObject(const uint8 PlayerNetworkIndex, class USaveGame* SaveGameObject);
    bool IsMissionObjectiveInProgress(class UMission* Mission, const FName MissionID, const FName ObjectiveName);
    bool IsMissionInProgress(class UMission* Mission, const FName MissionID);
    bool IsMissionCompleted(class UMission* Mission, const FName MissionID);
    void HandleObjectiveCompleted(class UMission* Mission, class UMOObjectiveNode* OObjectiveNode);
    void HandleNodeActivated(class UMission* Mission, class UMOTextNode* Node);
    class USaveGame* GetSavegameMissionsObject();
    TArray<class UMission*> GetMissionsInProgress();
    TArray<class UMission*> GetMissionsFinished();
    class UMission* GetMissionByTemplate(class UMission* MissionTemplate);
    void EndMission(class UMission* Mission, bool IsSuccesfull);
    void CompleteObjectiveByAsset(class UObjectiveAsset* ObjectiveAsset, class UMission* Mission, uint8 RepetitionsCount);
    void CompleteObjective(FName ObjectiveName, class UMission* Mission, uint8 RepetitionsCount);
    void ClientRecovery(const FMissionSavegameData& MissionSavegameData);
};

class UMOObjectiveNode : public UMOTextNode
{
    class UObjectiveAsset* ObjectiveAsset;
    bool ShowInObjectiveList;
    bool ShowCompletedObjective;
    bool ShowObjectivePrompt;
    bool bIsObjectiveCompleted;
    TArray<class UScriptedAction*> ObjectiveDone_Actions;
    uint8 CurrentRepetitionsCount;
    uint8 RepetitionsCount;

};

class UObjectiveAsset : public UPrimaryDataAsset
{
    FName ObjectiveID;

};

class UReferencedMissionObject : public UObject
{

    void NodeActivated(class UMOTextNode* ActivatedNode);
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void MissionEnded(class APlayerController* PlayerController);
    void LocalMissionStarted();
    void Construct(class UMOMissionsManager* MissionManager, class UMission* Mission);
};

class UScriptedAction : public UObject
{
    TWeakObjectPtr<class APlayerController> PlayerControllerRef;

    void ExecuteAction(class APlayerController* PlayerController, class UMOBaseNode* TriggeredNode, const EMOScriptedTriggerReason TriggerReason, class UMission* Mission);
};

#endif
