#ifndef UE4SS_SDK_TechTree_HPP
#define UE4SS_SDK_TechTree_HPP

#include "TechTree_enums.hpp"

class UTechNodeArrowWidget : public UUserWidget
{
    ETechNodePinType PinType;
    float ConnectionAngle;
    class UTechnologyAsset* ParentTechnology;
    class UTechnologyAsset* ChildTechnology;

    void OnNodeArrowInitialized();
};

class UTechNodeWidget : public UUserWidget
{
    class UTechnologyAsset* TechnologyAsset;

    void OnTechNodeInitialized();
    void Init(class UTechnologyAsset* InTechnologyAsset);
};

class UTechnologyAsset : public UPrimaryDataAsset
{
};

struct FUnlockedTechnologiesData
{
    TArray<class UTechnologyAsset*> UnlockedTechnologies;

};

class UTechnologySaveGame : public UMissionSaveGame
{
    TArray<class UTechnologyAsset*> UnlockedTechnologies;
    TArray<FUnlockedTechnologiesData> MultiplayerUnlockedTechnologies;

};

class UTechnologyTree : public UObject
{
    FVector2D TreeSize;
    ETechTreeOrientation Orientation;
    FSlateBrush BackgroundImage;
    float ConnectionLineThickness;
    FLinearColor ConnectionLineColor;
    TSubclassOf<class UTechNodeWidget> SlotTemplate;
    FVector2D SlotSize;
    TSubclassOf<class UTechNodeArrowWidget> ArrowTemplate;
    FVector2D ArrowSize;
    int32 GridSnapSize;
    bool ShowBoundaries;
    FLinearColor BoundariesColor;
    float BoundariesThickness;
    bool ShowPinArrows;
    bool ShowAlignmentGrid;
    FVector2D AlignmentGridSize;
    FVector2D AlignmentGridOffset;
    FLinearColor AlignmentGridColor;
    float AlignmentGridThickness;
    TArray<class UTTTechNode*> TechNodes;
    TMap<class UTechnologyAsset*, class UTTTechNode*> TechnologiesMap;
    class UEdGraph* UpdateGraph;
    int32 UniqueID;
    FTechnologyTreeOnTechnologyUnlockStateChanged OnTechnologyUnlockStateChanged;
    void OnTechnologyUnlockStateChanged(class UTTTechNode* TechNode, bool IsUnlocked);
    TMap<class UTechnologyAsset*, class UTTTechNode*> UnlockedTechnologies;
    TMap<class UTechnologyAsset*, class UTTTechNode*> DisabledTechnologies;
    TArray<class UTTTechNode*> CurrentlyActiveNodes;
    class UTechnologyTree* TechTreeTemplate;

    void OnTechnologyUnlockStateChanged__DelegateSignature(class UTTTechNode* TechNode, bool IsUnlocked);
    bool IsTechnologyUnlocked(class UTechnologyAsset* Technology);
    bool IsTechnologyDisabled(class UTechnologyAsset* Technology);
    bool HasUnlockedParents(class UTechnologyAsset* Technology);
    FString GetTechAssetName();
};

class UTechTreeManager : public UActorComponent
{
    FTechTreeManagerOnTechnologyUnlockStateChanged OnTechnologyUnlockStateChanged;
    void OnTechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    FTechTreeManagerOnTechTreeAssigned OnTechTreeAssigned;
    void OnTechTreeAssigned(class UTechnologyTree* TechTree);
    TSubclassOf<class UTechnologySaveGame> SaveGameTemplate;
    FTechTreeManagerOnTechTreeRecovered OnTechTreeRecovered;
    void OnTechTreeRecovered(const class UTechnologyTree* TechTree);
    class UTechnologyTree* TechnologyTree;
    class UTechTreeWidget* TechTreeWidget;

    void UnlockTechnology(class UTechnologyAsset* Technology);
    void SaveTechToObject(const uint8 PlayerNetworkIndex, class USaveGame* SaveGameObject);
    void SaveTechStateFromSlot(FString SlotName, const int32 UserIndex);
    void OnTechTreeRecovered__DelegateSignature(const class UTechnologyTree* TechTree);
    void OnTechTreeAssigned__DelegateSignature(class UTechnologyTree* TechTree);
    void OnTechnologyUnlockStateChanged__DelegateSignature(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    void LoadTechStateFromSlot(FString SlotName, const int32 UserIndex);
    void LoadTechFromObject(const uint8 PlayerNetworkIndex, class USaveGame* SaveGameObject);
    bool IsTechnologyUnlocked(class UTechnologyAsset* Technology);
    bool IsChildTechnology(class UTTTechNode* ParentNode, class UTechnologyAsset* ChildNodeTechnology);
    bool HasUnlockedParents(class UTechnologyAsset* Technology);
    void HandleTechnologyStateChanged(class UTTTechNode* TechNode, bool IsUnlocked);
    class UTechTreeWidget* GetTechTreeWidget();
    class USaveGame* GetSavegameTechObject();
    class UTTTechNode* GetNodeFromTechAsset(class UTechnologyAsset* Technology);
    class UTechnologyTree* GetAssignedTechTree();
    void Client_UnlockTechnology(class UTechnologyAsset* Technology);
    void AssignTechTreeWidget(class UTechTreeWidget* InTechTreeWidget);
    void AssignTechTree(class UTechnologyTree* TechTree);
};

class UTechTreeWidget : public UWidget
{
    class UTechnologyTree* TechTree;
    TArray<TWeakObjectPtr<UTechNodeWidget>> SlotWidgetsCached;
    TArray<TWeakObjectPtr<UTechNodeArrowWidget>> ArrowWidgetsCached;

    TArray<class UTechNodeWidget*> GetTechNodeWidgets();
    class UTechNodeWidget* GetTechNode(class UTechnologyAsset* TechnologyAsset);
    TArray<class UTechNodeArrowWidget*> GetArrowWidgets();
};

class UTTBaseNode : public UObject
{
    int32 NodePosX;
    int32 NodePosY;
    TArray<class UTTBaseNode*> ParentNodes;
    TArray<class UTTBaseNode*> ChildNodes;
    uint32 UniqueID;

};

class UTTTechNode : public UTTBaseNode
{
    class UTechnologyAsset* TechnologyAsset;
    bool IsUnlockedByDefault;
    bool IsDisabled;

};

struct FTechNodeLink
{
    class UTechnologyAsset* ParentTechnology;
    class UTechnologyAsset* ChildTechnology;
    FVector2D LinkFromPostion;
    FVector2D LinkToPostion;

};

#endif
