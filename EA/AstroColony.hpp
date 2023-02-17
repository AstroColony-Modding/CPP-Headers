#ifndef UE4SS_SDK_AstroColony_HPP
#define UE4SS_SDK_AstroColony_HPP

#include "AstroColony_enums.hpp"

struct FAIArray
{
    TArray<class UEHAIObject*> AIObjects;

};

struct FAIWorkRequest
{
    EAIWorkRequestState RequestState;
    EAIWorkActionType ActionType;
    class UEHInteractableObject* PrimaryDevice;
    FIntVector PrimaryActionCoord;
    class UEHInteractableObject* SecondaryDevice;
    class UEHItem* ResrouceToTransfer;
    UClass* DemandClass;

};

struct FBinaryDataContainer
{
    TArray<uint8> ContainerData;

};

struct FCallAction
{
    class UEHInteractableObject* InteractableObject;

};

struct FCampaignData : public FTableRowBase
{
    FName ScenarioLevelName;
    FString DisplayName;
    FText Description;
    TSoftObjectPtr<UTexture2D> Icon;
    bool IsEnabledByDefault;
    bool IsConstructed;
    TSoftClassPtr<UEHScenarioComponent> ScenarioManagerTemplate;
    FEHScenarioParams ScenarioParams;

};

struct FCellTransformation
{
    FTransform Transform;
    int32 MeshID;

};

struct FContainerPushDefinition
{
    FIntVector Coord;
    EEHInstanceRotation GateRotation;
    float InsidePushOffset;
    EPushDirection PushDirection;
    TArray<class UEHItem*> RestrictedItems;
    EInstanceCellType RestrictedType;
    TSubclassOf<class UEHConveyorObject> ConveyorPushType;
    FEHGeneratedReactiveMesh GateMesh;

};

struct FContainersArray
{
    TArray<class UEHItemsContainer*> Containers;

};

struct FContainersMap
{
    TMap<class FName, class UEHItemsContainer*> ContainerCategories;

};

struct FDecalInfo
{
    TSubclassOf<class UEHDecalComponent> DecalTemplate;
    FTransform Transform;
    class UEHCustomMeshAsset* OutletMesh;
    class UEHCustomMeshAsset* PreviewMesh;
    class UEHCustomMeshAsset* DecalMesh;

};

struct FEHActors
{
    TArray<class AActor*> Actors;

};

struct FEHAsteroidData
{
    class UStaticMesh* Mesh;
    FVector Velocity;
    FRotator Spin;
    FVector Color;
    uint8 UniverseIndex;
    TArray<FEHItemInstance> Items;

};

struct FEHAsteroidExtraction
{
    class UEHResourceItem* ExtractedResource;
    uint8 NuberOfHits;

};

struct FEHAttractedAsteroidData
{
    class UStaticMesh* Mesh;
    class UEHAsteroidsCatcher* AsteroidCatcher;
    FVector Color;
    TArray<FEHItemInstance> Items;
    uint8 UniverseIndex;

};

struct FEHBaseButtonProperties
{
    FMargin Padding;
    FSlateChildSize Size;
    TEnumAsByte<EHorizontalAlignment> BaseButtonHorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> BaseButtonVerticalAlignment;
    FName ButtonStyleName;
    FName TextStyleName;
    bool ShowShadowText;
    bool ShouldSpecifySize;
    float Width;
    float Height;
    bool CanReceiveFocus;
    bool CanBeNavigatedTo;
    bool TreatHoverAsFocus;
    bool ShouldSpecifyContentPadding;
    FMargin ContentPadding;
    TEnumAsByte<EHorizontalAlignment> ContentHorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> ContentVerticalAlignment;

};

struct FEHBasicUnlockData
{
    FText DisplayName;
    class UTexture2D* Icon;
    bool IsRecipe;
    class UEHAsset* UnlockItem;

};

struct FEHCatchedAsteroid
{
    FTransform Transform;
    FVector Color;
    TArray<FEHItemInstance> Items;

};

struct FEHCelestialBodyGeneration
{
    EChunkGenerationType Type;
    FVector position;
    class UEHCelestialGenerationObject* CelestialGenerationObject;

};

struct FEHCellType
{
    class UEHItem* Item;
    class UEHInteractableObject* InteractableObject;
    FIntVector CellCoords;
    EEHInstanceRotation CellRotation;
    FVector InstanceLocation;
    uint8 CellState;

};

struct FEHCharacters
{
    TArray<class AEHCharacter*> Characters;

};

struct FEHConstructCategory : public FTableRowBase
{
    FText Name;
    TArray<FEHConstructSubcategory> Subcategories;
    class UTexture2D* Texture;

};

struct FEHConstructSubcategory
{
    FName ID;
    FText Name;

};

struct FEHDeviceReplicationData
{
    class AActor* ChildActor;

};

struct FEHGameplayAspectUnlock : public FTableRowBase
{
    TSoftObjectPtr<UEHAsset> UnlockItem;
    FName UnlockName;

};

struct FEHGeneratedReactiveMesh
{
    TSoftClassPtr<UEHReactiveHISMComponent> ReactiveMesh;
    FTransform Transform;

};

struct FEHGlobalPointInstance
{
    EGlobalPointType PointType;
    int32 Quantity;

};

struct FEHGridCellType : public FEHCellType
{
    class AEHGrid* Grid;

};

struct FEHHeadGroom
{
    TSoftObjectPtr<UStaticMesh> FaceMesh;
    TArray<TSoftObjectPtr<UGroomAsset>> GroomMeshes;
    TArray<TSoftObjectPtr<UMaterialInterface>> MaterialOverrides;

};

struct FEHHeadMeshes
{
    class UStaticMeshComponent* FaceComponent;
    TArray<class UEHGroomComponent*> GroomComponents;

};

struct FEHHumanNeed
{
    EHHumanNeedID NeedID;
    float Value;

};

struct FEHHumanNeedData : public FTableRowBase
{
    bool IsEnabled;
    FText Name;
    class UTexture2D* Texture;
    float DefaultValue;
    float ChangeOverTime;
    float CriticalLevel;

};

struct FEHIndicationConfigData
{
    EEHWidgetIndicatorType WidgetIndicatorType;
    class UTexture2D* Icon;
    FLinearColor BorderColor;
    bool ShouldShowOffScreen;
    bool ShouldHideCloseDistance;
    float CloseDistance;

};

struct FEHInstanceCellDefinition
{
    EInstanceCellType InstanceCellType;
    FIntVector CellCoords;
    EEHInstanceRotation Rotation;

};

struct FEHInterpolateCellParams
{
    float AIBlendingInterpolationSpeed;
    TArray<float> AnimationSpeeds;
    float InRangeBlendingClampA;
    float InRangeBlendingClampB;
    float InterpolationRotateSpeed;
    float InterpolationAIRotateSpeed;
    float InterpolationCurveMultiplayer;
    float InRangeDimensionClampA;
    float InRangeDimensionClampB;
    float OutRangeDimensionClampA;
    float OutRangeDimensionClampB;

};

struct FEHItemInstance
{
    class UEHItem* Item;
    int32 Quantity;

};

struct FEHItemMesh
{
    class UEHItem* Item;
    class UStaticMesh* Mesh;

};

struct FEHItemSlotMesh
{
    TSoftObjectPtr<UStaticMesh> Mesh;
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
    TArray<TSoftObjectPtr<UMaterialInterface>> DeformableMaterials;

};

struct FEHItemStats : public FTableRowBase
{
    uint8 MaxStackSize;
    uint8 BuyCost;
    uint8 SellCost;
    float PickupTime;
    float PickupRange;

};

struct FEHItemsTranche
{
    TArray<FEHItemInstance> ItemTranches;

};

struct FEHLayerOverride
{
    EVoxelTerrainType TerrainType;
    TSoftObjectPtr<UMaterialInstance> LayerMaterial;
    uint8 ChanceToSpawn;

};

struct FEHMPScenarioParams
{
    int32 SeedNumber;
    bool PlayerConsumesOxygen;
    bool StartCampaign;
    bool SharedTechnologies;
    bool SharedTechnologyPoints;

};

struct FEHMaterials
{
    TArray<class UMaterialInterface*> Materials;

};

struct FEHNebulaGeneration
{
    int32 MaterialIndex;
    FVector Scale;
    FRotator Rotation;
    FVector LightPosition;
    float LightColorAlpha;
    float LightIntensity;
    float EmissionColorAlpha;
    float Emission;
    float Density;

};

struct FEHOutlet
{
    EEHDecalType Type;
    FIntVector OutletCord;
    FTransform OutletTransform;

};

struct FEHPartScheme
{
    FString Name;
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    TArray<TSoftObjectPtr<UMaterialInstance>> Materials;

};

struct FEHPartSuffix
{
    FText Name;
    FName MirrorLeftRightID;
    FName MirrorRearFrontID;

};

struct FEHPawns
{
    TArray<class APawn*> Pawns;

};

struct FEHPendingPlayerContainer
{
};

struct FEHPlanetoidDecalInfo
{
    TSoftObjectPtr<UMaterialInterface> Material;
    FVector Size;
    uint8 SpawnChance;

};

struct FEHPlanetoidParticleInfo
{
    TSoftObjectPtr<UParticleSystem> Particle;
    FVector Offset;
    uint8 SpawnChance;

};

struct FEHPlayerAction
{
    FName ActionName;
    FText ActionDisplayText;

};

struct FEHPlayerActionSet
{
    int32 ActionsBits;
    class UEHItem* ActionItem;
    class UEHInteractableObject* InteractableObject;
    class AActor* WorldInteractiveActor;
    int32 HitItem;

};

struct FEHPreviewKeyPreset
{
    TMap<class FKey, class ESettingsControllerActions> ActionsKeys;

};

struct FEHProductionProgress : public FEHProgress
{
    FName Name;

};

struct FEHProductionReplicationData
{
    TArray<FEHRecipeReplicationData> ReplicatedRecipes;
    uint8 DedicatedSpecialistsNumber;
    TArray<FEHRecipe> DynamicRecipes;

};

struct FEHProgress
{
    float ProductionStartTime;
    bool IsProducing;
    FTimerHandle TimerHandle;
    float Ratio;
    float PreviouslyCompletedProgress;

};

struct FEHPushOut
{
    class UEHItemsContainer* PushContainer;

};

struct FEHRecipe : public FTableRowBase
{
    FText DisplayText;
    TSoftObjectPtr<UTexture2D> Icon;
    bool IsVisible;
    bool IsUnlockedByDefault;
    bool IsRefundForbidden;
    TArray<FEHItemInstance> InputItems;
    TArray<FEHGlobalPointInstance> InputPoints;
    TArray<FEHItemInstance> OutputItems;
    TArray<FEHGlobalPointInstance> GeneratedPoints;
    float ProductionTime;
    FEHRecipeRequirements Requirements;
    FName UniqueID;

};

struct FEHRecipeReplicationData
{
    FName Name;
    int32 AutoDeactivateCounts;
    bool IsSelected;
    float ProductionRatio;
    float CompletedProgress;
    bool IsRunning;

};

struct FEHRecipeRequirements
{
    bool RequireElectricity;
    bool RequireWater;
    bool RequireSpecialist;

};

struct FEHRequestedResource
{
    class UEHItem* Item;
    uint8 MaxWorkersAssigned;
    int32 MaxResources;
    uint8 CurrentWorkersAssigned;

};

struct FEHResourceVeinNetworks
{
    TArray<class UEHResourceVeinNetwork*> ResourceVeinNetworks;

};

struct FEHScenarioDetails
{
    bool IsScenarioSuccessful;
    EEHScenarioFailureReason ScenarioFailureReason;
    FString DisplayName;
    FString TimeToDisplay;
    class UTexture2D* Icon;
    FString Version;
    FEHScenarioParams ScenarioParams;
    uint8 PlayersCount;

};

struct FEHScenarioParams
{
    FString SeedName;
    int32 SeedNumber;
    bool PlayerConsumesOxygen;
    bool FreeConstruction;
    bool StartCampaign;
    TArray<FEHItemInstance> DefaultItems;
    TArray<FEHGlobalPointInstance> DefaultGlobalPoints;
    TArray<class UEHTechnologyAsset*> UnlockedTechnologies;
    bool ShouldGenerateChunks;
    int32 ChunkElementsCount;
    float TerrainTypeSpawnChances;
    float ShapeTypeSpawnChances;

};

struct FEHServerParams
{
    FString Name;
    bool IsPublic;
    bool AllowLateJoin;
    int32 MaxNumberOfPlayers;
    FString SavegameName;

};

struct FEHSignalNetworks
{
    TArray<class UEHSignalNetwork*> SignalNetworks;

};

struct FEHSimpleCell
{
    class UEHItem* Item;
    FIntVector CellCoords;
    EEHInstanceRotation CellRotation;

};

struct FEHStartingStation
{
    FString DisplayName;
    FName StreamingID;
    EEHStartingStationSize Size;
    TSoftObjectPtr<UTexture2D> Icon;

};

struct FEHThumbstickPreviewKeyLayout
{
    TMap<class ESettingsThumbstickActions, class ESettingsControllerActions> ActionsKeys;

};

struct FEHTrackableInfo
{
    class UTexture2D* Texture;

};

struct FEHVectors
{
    TArray<FVector> Vectors;

};

struct FEHVehicleDefinition
{
    FString VehicleName;
    EEHVehicleType VehicleType;
    TArray<FEHVehiclePart> Parts;
    TMap<class EEHVehiclePartType, class EEHVehiclePartMirrorType> SizeMirrorModes;
    TMap<class EEHVehiclePartType, class EEHVehiclePartMirrorType> OffsetMirrorModes;
    int32 UniqueID;

};

struct FEHVehiclePart
{
    EEHVehiclePartType PartType;
    FTransform Transform;
    FName PartID;
    uint8 SchemeID;
    TArray<FLinearColor> Colors;

};

struct FEHVehiclePartTypeData
{
    FText Name;
    FText Description;
    class UTexture2D* Icon;
    TArray<FEHItemInstance> Cost;
    float ProductionTime;
    TArray<FName> ColorNames;
    TArray<FEHPartScheme> Schemes;
    FIntPoint SizeXMinMax;
    FIntPoint SizeYMinMax;
    FIntPoint SizeZMinMax;
    EEHVehiclePartScale UseXforMultipleScales;
    FIntPoint OffsetXMinMax;
    FIntPoint OffsetYMinMax;
    FIntPoint OffsetZMinMax;
    bool CanBeRemoved;
    TSoftClassPtr<USceneComponent> PredefinedComponent;
    TSoftObjectPtr<UStaticMesh> PredefinedMesh;
    TArray<FVector> PredefinedLocation;
    uint8 NumberOfUses;

};

struct FEHVehicleTypeData
{
    FText Name;
    TSoftObjectPtr<UTexture2D> Icon;
    TSoftClassPtr<APawn> Pawn;
    float SpawnHeightOffset;
    TArray<EEHVehiclePartType> CompatibleParts;
    int32 PossibleActions;
    FEHItemInstance OutputItem;

};

struct FGeneratedCustomMesh
{
    class UEHCustomMeshAsset* CustomMeshAsset;
    FTransform Transform;

};

struct FHUBModDefinition
{
    FUGCPackage UGCPackage;
    FString PakFilename;
    class UACModConfig* ACModConfig;

};

struct FInstancesContainer
{
    TArray<class UEHHISMCellComponent*> Instances;

};

struct FIntVector16
{
    int16 X;
    int16 Y;
    int16 Z;

};

struct FInteractableObjectArray
{
    TArray<class UEHInteractableObject*> InteractableObjects;

};

struct FItemArray
{
    TArray<TSoftObjectPtr<UEHItem>> Items;

};

struct FMenuData : public FTableRowBase
{
    EMenuType ParentMenuType;
    EMenuType MenuType;
    FText CategoryName;
    FText MenuName;
    FText Title;
    FText Description;
    FText ToolTip;
    TArray<EButtonBarAction> Options;
    FText NarratedText;
    bool IsEnabledByDefault;
    EEHMenuPlatformVisibility PlatformVisibility;

};

struct FMeshPivotInfo
{
    FString Filename;
    TArray<FString> TransformNames;
    TArray<FTransform> MeshInstanceTransforms;

};

struct FOverlayInfo
{
    EEHUIOverlayID OverlayID;
    bool ShouldOpen;

};

struct FPathFindRequest
{
    class UEHAIObject* AIObject;
    FIntVector StartPosition;
    FIntVector EndPosition;
    bool AerialRequest;
    bool IgnoreAI;

};

struct FPushContainerCoord
{
    bool IsPushingOut;
    FIntVector Coord;
    FTransform GateTransform;

};

struct FResourceAction
{
    int32 Priority;
    class UEHItem* Item;
    class UEHItemsContainer* Container;
    bool IsStoringResource;

};

struct FResourceActionArray
{
    TArray<FResourceAction> Containers;

};

struct FSAVE
{
    FString saveName;
    FDateTime DateTime;

};

struct FSaveGridItem
{
    FIntVector ItemCoord;
    EEHInstanceRotation Rotation;
    TArray<uint8> InteractableObjectData;
    TMap<class FName, class FBinaryDataContainer> AssociatedObjectsData;

};

struct FSaveGridItemContainer
{
    class UEHItem* Item;
    TArray<FSaveGridItem> Instances;

};

struct FSaveMultiplayerPlayer
{
    uint8 PlayerId;
    FTransform Transform;
    FRotator ControlRotation;
    bool JetpackOn;
    TArray<FBinaryDataContainer> InventoryContainersData;

};

struct FSaveSpawnActor
{
    FTransform Transform;
    UClass* Class;

};

struct FSaveTransferCell
{
    FIntVector Direction;
    FVector Destination;
    bool IsInsideBuilding;
    TArray<FSaveGridItem> Items;

};

struct FScreenDefinition
{
    TSoftClassPtr<UTGUIScreen> ScreenTemplate;
    TSoftClassPtr<UEHScreenViewModel> ViewModelTemplate;

};

struct FSettingResolutionData : public FTableRowBase
{
    FVector2D AspectRatio;
    TArray<FIntPoint> Resolutions;

};

struct FSettingsCategoryData : public FTableRowBase
{
    ESettingsCategoryType SettingsCategoryType;
    ESettingsCategoryType ParentCategoryType;
    FText CategoryName;
    TArray<FName> MouseKeyboardOnlySubcategories;
    TArray<FName> ControllerOnlySubcategories;

};

struct FSettingsOptionData : public FTableRowBase
{
    ESettingsCategoryType ParentCategoryType;
    ESettingOptionType SettingOptionType;
    FText SettingOptionName;
    TArray<FString> Options;
    TArray<class UTexture2D*> PreviewImageRef;
    TArray<FText> PreviewDescriptions;
    ESettingWidgetType WidgetType;
    FString DefaultOption;
    FName Annotation;
    bool HasExtraIndent;
    bool IsEnabled;
    bool ShouldBeConstructed;
    bool HasDynamicOptions;
    FText TooltipDescription;
    ESettingPreviewType PreviewType;

};

struct FSettingsSlidersData : public FTableRowBase
{
    ESettingOptionType SettingOptionType;
    ESliderStepType SliderStepType;
    float GamepadKeyboardStepValue;
    float StepRound;
    float MouseWidgetStep;
    int32 MinimumFractionalDigits;
    int32 MaximumFractionalDigits;

};

struct FStructureSize
{
    FIntVector StructureSizeMin;
    FIntVector StructureSizeMax;
    TArray<FIntVector> IgnoredCoords;

};

struct FTGCodingStandardBlueprintVarGroup
{
    TArray<int32> WidgetCameraLevels;
    float CameraTraceVolumeWidth;
    float CameraTraceVolumeHeight;
    bool ShowCameraWidget;
    bool ShowWeaponWidget;

};

struct FUIActionMapping : public FTableRowBase
{
    EButtonBarAction ButtonBarAction;
    FName InputAction;
    FText DisplayText;
    uint8 Priority;
    EButtonBarItemVisibility VisibilityWithControllers;

};

struct FVehicleArray
{
    TArray<class UEHAIObject*> AIObjects;

};

struct FVoxelShapeData
{
    FText ShapeName;
    TSubclassOf<class UVoxelGenerator> GeneratorClass;

};

struct FVoxelTerrainDigData
{
    FText TerrainName;
    TSoftObjectPtr<UVoxelInstancedMaterialCollection> InstanceMaterialCollection;
    class UEHItem* ItemToPick;
    float PickChance;
    TSoftObjectPtr<UMaterialInterface> ColliderWorldMaterial;
    TSoftObjectPtr<UMaterialInterface> DestructibleMaterial;
    float DestructibleSpawnScale;
    float DestructibleImpulseStrength;
    FLinearColor DustColor;
    FLinearColor MapColor;
    TArray<FEHLayerOverride> LayersOverrides;

};

class AEHActorLevelBoundaries : public AActor
{
    class UEHDeviceItem* DeviceItem;

};

class AEHAsteroidCatcherPawn : public AEHInteractivePawn
{

    void ActivateAutoCatching();
};

class AEHAsteroidDebris : public AEHWorldInteractiveActor
{
};

class AEHAsteroidSpawner : public AEHWorldInteractiveActor
{
    TMap<class EEHMiningResourceType, class FVector2D> AsteroidResourcesDistributionFirst;
    TMap<class EEHMiningResourceType, class FVector2D> AsteroidResourcesDistributionSecond;
    class UEHHISMComponent* HISMAsteroids;
    class UEHHISMComponent* HISMAttracted_Asteroids;
    class UEHHISMComponent* HISMAttracted_Beams;
    bool ShouldSpawnAsteroids;
    bool ShouldUpdateAsteroidsPositions;
    float SpawnSecondChance;
    float SpawningInterval;
    float CloseAsteroidsCount;
    float CloseSpawnRadius;
    float FarSpawnRadius;
    float VanishRadius;
    bool ShouldDespawnCollidingAsteroids;
    float DespawnLinetraceDistanceScale;
    float SpharetraceRadius;
    float VelocityCharacterOffsetScale;
    float RandomCharacterPositionScale;
    bool ShowDebugAsteroidVelocity;
    float AsteroidVelocityScaleMin;
    float AsteroidVelocityScaleMax;
    float AsteroidSpinScale;
    float AsteroidRandomizeScale;
    float ResourceIncreaseSize;
    float DistanceUpdateOften;
    float DistanceUpdateNormal;
    float DistanceUpdateRare;
    TArray<FEHAsteroidExtraction> AsteroidExtractions;
    TArray<FEHAsteroidData> AsteroidDatas;
    TArray<FEHAttractedAsteroidData> Attracted_AsteroidDatas;
    TArray<float> AsteroidUpdateTimes;
    class UEHDataProvider* DataProvider;

    int32 UpdateColorFromAsteroidData(FEHAsteroidData& AsteroidData);
    void ShrinkExtractedAsteroid(const int32 InstanceIndex);
    void Server_HitAsteroid(class UEHGridComponent* GridComponent, const int32 InstanceIndex, const FVector& ImpactPoint);
    void Server_AddAsteroid(const FTransform& Transform, const FEHAsteroidData& AsteroidData);
    void RemoveAttractedAsteroid(const int32 InstanceIndex);
    void OnAsteroidExtracted(const int32 InstanceIndex, const FVector& ImpactPoint);
    void Multi_RemoveProcessedAsteroid(class UEHAsteroidsCatcher* AsteroidCatcher);
    void Multi_RemoveCatcherAttractedAsteroid(class UEHAsteroidsCatcher* AsteroidCatcher);
    void Multi_RemoveAttractedAsteroid(const int32 InstanceIndex);
    void Multi_RemoveAsteroids(const TArray<int32>& AsteroidsToRemove, const TArray<FVector_NetQuantize>& ImpactPoints);
    void Multi_RemoveAsteroid(const int32 InstanceIndex);
    void Multi_NotifyExtractionDataChanged(const int32 InstanceIndex, const FEHAsteroidData& AsteroidData, const FEHAsteroidExtraction& AsteroidExtraction, const FVector& ImpactPoint);
    void Multi_NotifyAsteroidCatched(class UEHAsteroidsCatcher* AsteroidCatcher);
    void Multi_HitAsteroid(const int32 InstanceIndex);
    void Multi_CancelAttractedAsteroid(class UEHAsteroidsCatcher* AsteroidCatcher);
    void Multi_AddAttractedAsteroid(class UEHAsteroidsCatcher* AsteroidCatcher, const FTransform& Transform, const FEHAsteroidData& AsteroidData);
    void Multi_AddAsteroid(const FTransform& Transform, const FEHAsteroidData& AsteroidData, const FEHAsteroidExtraction& AsteroidExtraction);
    void HandleAssetsLoaded();
    FEHAsteroidData GenerateAsteroidData(class UEHItem* ResourceItem);
    class UEHResourceItem* ExtractResource(const int32 InstanceIndex);
    void CollidingAsteroidDestroyed(const int32 InstanceIndex, const FVector ImpactPoint);
};

class AEHBlackHole : public AEHRemotlyConstructedActor
{
    EBlackHoleType BlackHoleType;

    void UpdateOpacity(const float Opacity);
    void OnCreated();
};

class AEHCelestialBodyActor : public AActor
{
    FName SerializedActorUniqueName;

};

class AEHCharacter : public AVoxelCharacter
{
    class UCameraComponent* FirstPersonCamera;
    class USpringArmComponent* CameraSpring;
    class USpringArmComponent* TraceCameraPoint;
    float MouseVerticalSensitivity;
    float MouseHorizontalSensitivity;
    class UEHInventoryComponent* InventoryComponent;
    class AEHGamePlayerController* GamePlayerController;
    bool StationaryJetpack;
    bool Booster;
    FEHCharacterOnJetpackModeChanged OnJetpackModeChanged;
    void OnJetpackModeChanged(bool IsActive);
    class UPrimitiveComponent* BaseComponent;
    class USphereComponent* SphereGridDetectorComponent;

    void UpdateMPTool();
    void Server_UpdateStationaryJetpack(bool IsOn);
    void Server_UpdateBooster(bool IsOn);
    void Server_ToggleStationaryJetpack();
    void Server_LaunchCharacter_ZOverride(const FVector& LaunchVelocity);
    void Server_LaunchCharacter(const FVector& LaunchVelocity);
    void Server_DetachCharacter();
    void Server_AttachCharacterToActor(class AActor* ParentActor);
    void Scan();
    void SC_LaunchCharacter_ZOverride(const FVector& LaunchVelocity);
    void SC_LaunchCharacter(const FVector& LaunchVelocity);
    void OnRep_StationaryJetpack();
    void OnJetpackModeChanged__DelegateSignature(bool IsActive);
    void Multi_UpdateHidden(const bool NewHidden);
    void Multi_Teleport(const FVector& Location, const FRotator& Rotation);
    void Multi_DetachActor();
    void Multi_AttachActor(class AActor* ParentActor);
    void HandlePlayerLeftGrid(class AEHGrid* Grid);
    void HandlePlayerEnteredGrid(class AEHGrid* Grid);
    void HandleMovingChanged(bool IsMoving);
    class USceneComponent* GetToolRoot();
    float GetInteractionDistance(const FVector& Location);
    FVector GetInteractionDirection(const FVector& Location);
    class USceneComponent* GetInteractionComponent();
    class UEHCharacterMovementComponent* GetEHMovementComponent();
    FVector GetCharacterVelocity();
    void DisableJetpackFloorCheck();
    void Deactivate();
    void Client_UpdateBaseComponent(class AEHMovableSpaceActor* MovableSpaceActor);
    void Client_NotifyStationaryJetpackChanged(bool JetpackOn);
    void Client_NotifyClientMovingChanged(bool IsMoving);
    void Client_NotifyBoosterChanged(bool IsOn);
    void Activate();
};

class AEHChunk : public AActor
{
    bool ProcedurallyGenerated;
    EChunkGenerationType ChunkGenerationType;
    FName PlanetoidStreamingLevel;
    TSoftClassPtr<AEHVoxelWorld> VoxelWorldTemplate;
    TSoftClassPtr<AEHVoxelWorld> VoxelWorldTemplateSmall;
    TSubclassOf<class AEHColliderWorld> ColliderWorldTemplate;
    TSubclassOf<class AEHPlanetoidGrid> PlanetoidTemplate;
    int32 NoiseMultiplyX;
    int32 NoiseMultiplyY;
    int32 NoiseMultiplyZ;
    TMap<EChunkGenerationType, float> SpawnRatioForGenerationTypes;
    float GenerateChance;
    TMap<FName, int32> SeedsVoxelWorld;
    float ZOffsetVoxelWorld;
    float ZOffsetPlanetoidGrid;
    FIntVector ChunkCoords;
    FVector ChunkMiddlePosition;
    bool CollisionsEnabled;
    float ColliderDeactivateTime;
    bool IsLoadedFromSavegame;
    bool CelestialBodiesGenerated;
    FVector2D SphereRadius;
    FVector2D LightIntensity;
    FVector2D NebulaEmission;
    FVector2D NebulaDensity;
    class USceneComponent* SceneRoot;
    class AEHPlanetoidGrid* PlanetoidGrid;
    TArray<class AEHPlanetoidGrid*> SmallPlanetoidGrids;
    class AActor* CelestialBody;
    TArray<FEHCelestialBodyGeneration> CelestialGenerations;
    TArray<FEHNebulaGeneration> NebulaGenerations;

    void UpdateCollision(bool InCollisionsEnabled);
    void SpawnVoxelWorld(class AEHPlanetoidGrid* EHPlanetoidGrid, const bool IsPlanet, const int32 Index);
    void SpawnCelestialBodies();
    void OnRep_SmallPlanetoidGrids();
    void OnRep_PlanetoidGrid();
    void OnChunkGenerated();
    void OnChunkCreated();
    void LoadStreamingPlanetoid();
    void HandleWorldLoaded(class AVoxelWorld* VoxelWorld);
    void HandleUniverseChanged();
    void HandleSettingsApplied();
    TArray<FEHCelestialBodyGeneration> GetCelestialGenerations(const EChunkGenerationType GenerationTyp);
};

class AEHColliderWorld : public AVoxelWorld
{
    class AEHVoxelWorld* VoxelWorldMain;
    bool ShouldCreateColliderWorld;

    void UpdateColliderGridVisibility();
    void SetGeneratorParams();
};

class AEHCometStrike : public AEHCelestialBodyActor
{
    bool Activated;
    FVector ImpactPoint;
    class AActor* CometProjectile;

    void RecoverCometProjectile(const FVector& CometProjectilePosition);
};

class AEHDrillActor : public AEHInteractiveActor
{

    void RecoverDrillPosition(const FIntVector& Coord, const bool IsDrillingGround);
    void OnResourceMined();
    void OnGroundMined();
    void OnDrillingStopped();
    void MoveDrillToMiningPosition(const FIntVector& Coord, const bool IsDrillingGround);
};

class AEHElectromagneticField : public AEHCelestialBodyActor
{
    class UProjectileMovementComponent* ProjectileMovementComponent;

};

class AEHEnvironmentManager : public AActor
{
    TArray<TSoftObjectPtr<USoundBase>> GameplayMusic;
    TSoftObjectPtr<USoundBase> IntroMusic;

    void StartGameplayMusic();
    void HandleSettingsApplied();
    void AudioFinished();
};

class AEHGameModeBase : public AGameModeBase
{
    TMap<class UEHInteractableObject*, class FEHCharacters> ContainersWatchingPlayers;
    TMap<class UEHItem*, class FEHCharacters> ItemsWatchingPlayers;
    TMap<class AEHCharacter*, class UEHInteractableObject*> WatchedContainers;
    TArray<class AEHCharacter*> AllPlayers;
    TArray<FEHPendingPlayerContainer> PendingPlayerContainerUnregisters;

    void PlayerLeftGame(class AEHPlayerController* PlayerController);
    void InitCF();
};

class AEHGamePlayerController : public AEHPlayerController
{
    bool ControlMode;
    bool BoosterMode;
    bool IsRefillingOxygen;
    float Health;
    float Oxygen;
    uint8 UniverseIndex;
    bool IsCharacterFarAway;
    bool HasOxygen;
    bool LosingHealth;
    bool ShouldUpdateWorldOrigin;
    bool EnableDebugMode;
    EEHDebugMode DebugMode;
    bool IsDebugTravelUniverse;
    FEHGamePlayerControllerOnDebugModeChanged OnDebugModeChanged;
    void OnModeChanged();
    FEHGamePlayerControllerOnControlModeChanged OnControlModeChanged;
    void OnModeChanged();
    FEHGamePlayerControllerOnCharacterPossedChanged OnCharacterPossedChanged;
    void OnModeChanged();
    FEHGamePlayerControllerOnCharacterFarAwayChanged OnCharacterFarAwayChanged;
    void OnModeChanged();
    FEHGamePlayerControllerOnCharacterRefillingOxygenChanged OnCharacterRefillingOxygenChanged;
    void OnCharacterRefillingOxygenChanged();
    FEHGamePlayerControllerOnUniverseChanged OnUniverseChanged;
    void OnUniverseChanged(uint8 PreviousIndex, uint8 NewIndex);
    FEHGamePlayerControllerOnPauseStateChanged OnPauseStateChanged;
    void OnPauseStateChanged(bool IsPaused);
    FEHGamePlayerControllerOnOxygenReffiled OnOxygenReffiled;
    void OnOxygenReffiled();
    FEHGamePlayerControllerOnBarrierOxygenReffiled OnBarrierOxygenReffiled;
    void OnOxygenReffiled();
    FEHGamePlayerControllerHasOxygenChanged HasOxygenChanged;
    void OnOxygenReffiled();
    FEHGamePlayerControllerLosingHealthChanged LosingHealthChanged;
    void OnOxygenReffiled();
    class UEHScenarioComponent* ScenarioManager;

    void TriggerCinematicSequence();
    void ToggleControlMode(const bool ControlModeEnabled);
    void ToggleCharacterRefillingOxygen(const bool IsBarrierRefillingOxygen, class UEHBarrierNetwork* BarrierNetwork);
    void ShowUniverseActors(const uint8 ActorsUniverseIndex);
    bool ShowActors();
    bool ShouldRebaseWorldOrigin();
    bool SetVirtualCamera(bool IsActive);
    void SetGamePaused(bool bPaused);
    void SetDebugMode(bool IsOn);
    void Server_PossesPawn(class APawn* InPawn, bool ShouldAttachCharacter);
    void Server_PossesCharacterAtLocation(const FVector& Location, const bool ShouldTeleportPlayer, bool ShouldDetachCharacter);
    void Server_PossesCharacter();
    void OnUniverseChanged__DelegateSignature(uint8 PreviousIndex, uint8 NewIndex);
    void OnPauseStateChanged__DelegateSignature(bool IsPaused);
    void OnOxygenReffiled__DelegateSignature();
    void OnModeChanged__DelegateSignature();
    void OnCharacterRefillingOxygenChanged__DelegateSignature();
    bool IsGirdDebugActive();
    bool IsCharacterPossesed();
    void HideUniverseActors(const uint8 ActorsUniverseIndex);
    bool HideActors();
    void HandlePossessImpossible();
    void HandlePlayerAction(FName PlayerActionName);
    void GoToPreviousUniverse(const bool UpdateActorsVisibility);
    void GoToNextUniverse(const bool UpdateActorsVisibility);
    FName GetUniverseSignature();
    class AEHCharacter* GetEHCharacter();
    void DebugShowActors(bool On, const uint8 Index);
    void Client_NotifyPossessImpossible();
    void Client_BarrierOxygenRefilled();
};

class AEHGameState : public ATGGameState
{
    FEHGameStateOnSciencePointsUpdated OnSciencePointsUpdated;
    void OnSciencePointsUpdated();
    int32 NumberOfReplicatedLoadActors;
    FEHGameStateOnTechnologyChanged OnTechnologyChanged;
    void OnTechnologyChanged();
    TArray<int32> GlobalPoints;

    void OnTechnologyChanged__DelegateSignature();
    void OnSciencePointsUpdated__DelegateSignature();
    void OnRep_GlobalPoints();
    void Multi_SetGlobalTimeDilation(float GlobalTimeDilation);
    int32 GetPointByType(const EGlobalPointType GlobalPointType);
    void AddGlobalPoints(const TArray<FEHGlobalPointInstance>& GlobalPointInstances);
    void AddGlobalPoint(const FEHGlobalPointInstance& GlobalPointInstance);
};

class AEHGrid : public AActor
{
    FString GridName;
    FName GridUniqueID;
    bool ModifiedByPlayer;
    bool SaveGridItemsData;
    bool SaveNavPoints;
    FVector FloorMiddlePosition;
    class UEHDevicesComponent* DevicesComponent;
    class UEHPathfindingComponent* PathfindingComponent;
    class UEHAIDirectorComponent* AIDirectorComponent;
    class UEHThrusterNetwork* ThrusterNetwork;
    TArray<class AEHGrid*> DockedGrids;
    FEHGridOnDockedGridsChanged OnDockedGridsChanged;
    void OnDockedGridsChanged();
    class UHierarchicalInstancedStaticMeshComponent* FloorMiddleEdges;
    class UHierarchicalInstancedStaticMeshComponent* FloorLeftEdges;
    class UHierarchicalInstancedStaticMeshComponent* FloorRightEdges;
    class UHierarchicalInstancedStaticMeshComponent* FloorDiagonalEdges;
    class UHierarchicalInstancedStaticMeshComponent* FloorCornerEdges;
    class UInstancedStaticMeshComponent* ValidationBaseConstruction;
    class UEHBoxComponent* CCWallComponent;
    class UEHBoxComponent* CCFloorComponent;
    class UEHBoxComponent* SelectionBoxComponent;
    TSet<FIntVector> AerialPoints;
    TSet<FIntVector> FloorPoints;
    TSet<FIntVector> AIPoints;
    TSet<FIntVector> BlockPoints;
    TSet<FIntVector> PlanetoidAerialPoints;
    TSet<FIntVector> PlanetoidSurfacePoints;
    TMap<class FIntVector, class EEHInstanceRotation> PlanetoidWalkableRamps;
    bool IsReplicationReady;
    uint8 UniverseIndex;
    TMap<class UEHItem*, class FInstancesContainer> ItemComponents;
    TMap<class FName, class FInstancesContainer> CustomMeshes;
    class USceneComponent* SceneRoot;
    class USceneComponent* ShaderMovementRoot;
    TMap<class UEHItem*, class UMaterialInstanceDynamic*> DynamicMaterials;
    TArray<class UStaticMeshComponent*> CustomHighlightMeshes;
    TMap<class FIntVector, class UEHFlareComponent*> FlaresMap;
    TMap<class FIntVector, class UEHBillboardsLineComponent*> BillboardsMap;
    TMap<class FIntVector, class UEHReactiveMeshComponent*> ReactiveMeshMap;
    TMap<class FIntVector, class FEHCellType> CellEmpty;
    class AEHBlackHole* ActiveBlackHole;
    bool ScreenIndicatorActive;
    class UEHGridDataObject* GridDataObjectCached;
    TArray<class UEHInteractableObject*> ReplicatedInteractables;
    TMap<class FEHCellType, class EEHInstanceRotation> PendingAddClientInstances;
    TMap<class FEHCellType, class EEHInstanceRotation> PendingUpgradeClientInstances;
    TMap<class FIntVector, class UEHConveyorObject*> PendingRemovedPushes;
    TArray<FEHPushOut> PendingClientPushes;

    void UpdateProfession(const FIntVector& CellCoords, const EAIProfession Profression);
    void UpdateGridShaderPosition(const FVector& PreviousShaderPosition, const FVector& ShaderPosition);
    void UpdateCollisions(const bool InCollisionEnabled);
    void RotateInstance(const FIntVector& CellCoords, const EEHRotationDirection RotationDirection, EInstanceCellType InstanceCellType, const EEHInstanceRotation Rotation);
    bool RemoveInstance(EInstanceCellType InstanceCellType, const FIntVector& CellCoords, const EEHInstanceRotation Rotation);
    void OnRep_ThrusterNetwork();
    void OnRep_ReplicatedDevices();
    void OnRep_IsReplicationReady();
    void OnDockedGridsChanged__DelegateSignature();
    void Multi_UpgradePendingInstance(class UEHItem* Item, const FIntVector& CellCoords, class UEHInteractableObject* InteractableObject, const EEHInstanceRotation Rotation);
    void Multi_UpgradeInstance(const EInstanceCellType InstanceCellType, const FIntVector& CellCoords, class UEHInteractableObject* InteractableObject, const EEHInstanceRotation Rotation);
    void Multi_TransferResourceCell(const FIntVector& ResourceCoord, const FIntVector& Direction);
    void Multi_TransferAICell(const FIntVector16& AICoord, uint8 DirectionPacked);
    void Multi_SwapAIChain(const TArray<class UEHAIObject*>& ChainAIs, const TArray<FIntVector>& AICoords, const TArray<uint8>& PathIndexes);
    void Multi_StopAnimationBlending(const FIntVector& CellCoords);
    void Multi_StartSimulation();
    void Multi_RotateInstance(const FIntVector& CellCoords, const EEHRotationDirection RotationDirection, EInstanceCellType InstanceCellType, const EEHInstanceRotation Rotation);
    void Multi_RemoveResource(const FIntVector16& ResourceCoord);
    void Multi_RemoveInstanceBulk(const TArray<FEHSimpleCell>& Cells);
    void Multi_RemoveInstance(const EInstanceCellType InstanceCellType, const FIntVector& CellCoords, const EEHInstanceRotation Rotation);
    void Multi_RemoveAI(class UEHAIObject* AIObject);
    void Multi_PushOutResource(class UEHItemsContainer* PushContainer, class UEHItem* Resource, const uint8& PushIndex);
    void Multi_PushOutAI(class UEHItemsContainer* PushContainer, class UEHItem* AIItemToPush, const FIntVector& AISpawnCoord, const FIntVector& PushCoords);
    void Multi_OnAILeft(const FIntVector& DeviceCoord, class UEHAIObject* AIObject);
    void Multi_OnAIEntered(class UEHInteractableObject* InteractableObject, class UEHAIObject* AIObject);
    void Multi_NotifyTransferedResourceRemoved(const FIntVector& ResourceCoord, const FIntVector& Direction);
    void Multi_NotifyPossiblyTransferedResourceRemoved(const FIntVector& ResourceCoord);
    void Multi_HitExtract(class UEHInventoryComponent* PlayerInventoryComponent, const FIntVector& HitCoord, const FVector& HitLocation);
    void Multi_FarmerEntered(const FIntVector& FarmCoord, class UEHAIObject* NewFarmer);
    void Multi_ExtractResource(const FIntVector& ResourceCoord);
    void Multi_EnsureResourceRemoved(const FIntVector& ResourceCoord, const FIntVector& DirectionFrom);
    void Multi_EnsureResourcePushed(const FIntVector& ResourceCoord, const FIntVector& Direction);
    void Multi_BreederEntered(const FIntVector& PastureCoord, class UEHAIObject* NewBreeder);
    void Multi_AddPendingInstance(class UEHItem* Item, const FIntVector& CellCoords, class UEHInteractableObject* InteractableObject, const EEHInstanceRotation Rotation);
    void Multi_AddInstanceBulk(const TArray<FEHSimpleCell>& Cells, const TArray<class UEHInteractableObject*>& InteractableObjects, class UEHGridComponent* ClientGridComponent);
    void Multi_AddInstanceAndTransfer(class UEHItem* Item, const FIntVector& CellCoords, const FIntVector& Direction);
    void Multi_AddInstance(class UEHItem* Item, const FIntVector& CellCoords, const EEHInstanceRotation Rotation);
    void HandleRotationChange();
    void HandleJobModeChange();
    void HandleItemChange();
    void HandleGameStarted();
    void HandleGameSimulationStarted();
    void HandleAssetsLoaded();
    FVector GetWorldPositionFromLocalPosition(const FVector& LocalPosition);
    FIntVector GetPointForImpact(bool& Found);
    class AEHMovableSpaceActor* GetMovableSpaceActor();
    FVector GetLocalPositionFromWorldPosition(const FVector& WorldPosition);
    FEHCellType GetInstance(const FIntVector& CellCoords, EInstanceCellType CellType, EEHInstanceRotation InstanceRotation);
    class UEHHISMComponent* GetHISMComponentBP(class UEHItem* Item, int32 InstanceIndex);
    FVector GetCubeWorldPosition(const FIntVector& CellCoords);
    FVector GetCubeBottomWorldPosition(const FIntVector& CellCoords);
    FIntVector GetCellCoords(const FVector& LocalPosition);
    void ForceAddInsideGridInstance(class UEHItem* Item, const FIntVector& CellCoords, const FIntVector& ParentDeviceCoord, const EEHInstanceRotation Rotation);
    class UEHInteractableObject* FindHitInteractable(class UPrimitiveComponent* HitComponent, const int32 HitItem);
    void FinalizeGridGeneration();
    TSet<UEHElectricNetwork*> ElectromagneticFieldBlackout(const TSet<FIntVector>& PointsForBlackout);
    void DebugDestroyInteractable(class UEHInteractableObject* Interactable);
    void DebugClearReplcatedDevices();
    void BlackHoleDestroyInstances(class AEHBlackHole* BlackHoleActor, const TSet<FEHInstanceCellDefinition>& InstancesToDestroy);
    void BeginGridGeneration();
    void AssetsLoaded();
    bool AddInstance(class UEHItem* Item, const FIntVector& CellCoords, class UEHInteractableObject* InteractableObjectToRestore, const EEHInstanceRotation Rotation, const uint8 MeshID);
    void AddGridInstance(class UEHItem* Item, const FIntVector& CellCoords, class UEHInteractableObject* InteractableObjectToRestore, const EEHInstanceRotation Rotation, const uint8 MeshID, const bool ForceRemoveExisting);
};

class AEHHUD : public ATGHUD
{
    TSubclassOf<class UDraggableItemWidget> DraggableItemWidgetClass;
    TMap<class FName, class EEHHUDMenuType> MenuTypesForActions;
    class UEHConfig* EHConfig;
    TArray<class UTGUIConfigCustom*> CustomConfigs;
    bool HasBackground;
    bool ShowFrontendByDefault;
    EEHUIScreenID FirstScreenToOpen;
    class UEHCheatComponent* EHCheatComponent;
    class UEHBackgroundComponent* EHBackgroundComponent;
    class UTGWidgetPredefinedAnimationsComponent* TGWidgetAnimationsManager;

    void UpdateHUDVisibility(const bool ShowHUDIn);
    void TriggerAction(const FName ActionName);
    void OpenPauseScreen();
    void OpenInGameScreen(const EEHUIScreenID ScreenID);
    void OnGameStarted();
    void HoldTimersCleared();
    void HandleKeyAction(const FKey& InKey);
    void HandleGamePreStarted();
    class UEHHUDWidget* GetEHHUDWidget();
    void CloseInGameScreen();
};

class AEHHUDGame : public AEHHUD
{
    TMap<class UClass*, class EEHPopMenuType> OpenedPopupMenus;
    float TechTreeScrollOffset;
    FEHHUDGameOnIndicatorStateChanged OnIndicatorStateChanged;
    void OnIndicatorStateChanged(class UObject* IndicatedObject);
    class UEHInteractableObject* OpenedMenuInteractable;
    bool ShowBlackScreen;
    class UMenuWidget* OpenedMenu;
    class UUserWidget* OpenedScreen;
    class UEHMapWidget* MapWidget;
    class UEHModularVehicleWidget* ModularVehicleWidget;
    FEHHUDGamePopMenuOpened PopMenuOpened;
    void PopMenuOpened(EEHPopMenuType Type);
    FEHHUDGamePopMenuClosed PopMenuClosed;
    void PopMenuClosed(TSubclassOf<class UInteractBaseWidget> IndicatedObject);
    FEHHUDGameOnMouseShowStateChanged OnMouseShowStateChanged;
    void OnMouseShowStateChanged(bool IsMouseShown);
    FEHHUDGameOnMenuOpenStateChanged OnMenuOpenStateChanged;
    void OnMenuOpenStateChanged(bool IsOpened);
    TSoftClassPtr<UEHMapWidget> MapWidgetClass;
    TSoftClassPtr<UEHModularVehicleWidget> ModularVehicleWidgetClass;
    class UEHHUDIndicatorsWidget* HUDIndicators;
    TArray<TSoftClassPtr<UTipWidget>> TipWidgets;
    TSoftClassPtr<UMenuWidget> PopMenuClasses;
    TSoftClassPtr<UMenuWidget> HUDMenuClasses;

    void UnregisterScreenIndicator(class UObject* IndicatedObject);
    class UMenuWidget* ToggleMenuByType(EEHHUDMenuType HUDMenuType);
    void RegisterScreenIndicator(class UObject* IndicatedObject);
    void PopMenuOpened__DelegateSignature(EEHPopMenuType Type);
    void PopMenuClosed__DelegateSignature(TSubclassOf<class UInteractBaseWidget> IndicatedObject);
    void OpenPauseMenuSafe();
    class UMenuWidget* OpenMenuByType(EEHHUDMenuType HUDMenuType);
    void OpenInteractMenu(class UEHInteractableObject* InteractableObject);
    void OnMouseShowStateChanged__DelegateSignature(bool IsMouseShown);
    void OnMenuOpenStateChanged__DelegateSignature(bool IsOpened);
    void OnIndicatorStateChanged__DelegateSignature(class UObject* IndicatedObject);
    bool IsScreenIndicatorRegistered(class UObject* IndicatedObject);
    class UCanvasPanel* GetVisibleScreenCanvas();
    EEHPopMenuType GetPopMenuType(const TSubclassOf<class UMenuWidget> Widget);
    TSubclassOf<class UMenuWidget> GetPopMenuClass(const EEHPopMenuType Type);
    void CreateModularVehicleWidget();
    void CreateMapWidget();
    void CloseOpenedInteractionMenu();
};

class AEHHUDMenu : public AEHHUD
{
};

class AEHInteractiveActor : public AActor
{
    class UEHInteractableObject* InteractableObject;

    class UEHInteractableObject* GetInteractableObject();
};

class AEHInteractivePawn : public APawn
{
    int32 PossesedFlags;

    class UEHInteractableObject* GetInteractableObject();
};

class AEHLobbyGameState : public AGameStateBase
{
    class UEHTcpSocketConnection* TcpSocketConnection;
    FEHLobbyGameStateMSScenarioParamsChanged MSScenarioParamsChanged;
    void OnLobbyStateChanged();
    FEHLobbyGameStateMaxLobbyPlayersChanged MaxLobbyPlayersChanged;
    void OnLobbyStateChanged();
    int32 MaxLobbyPlayers;
    FEHMPScenarioParams MPScenarioParams;
    int32 connectionIdGameServer;

    void Send(const TArray<uint8>& Data);
    void OnRep_MPScenarioParams();
    void OnRep_MaxLobbyPlayers();
    void OnMessageReceived(int32 ConId, TArray<uint8>& Message);
    void OnLobbyStateChanged__DelegateSignature();
    void OnDisconnected(int32 ConId);
    void OnConnected(int32 ConnectionId);
    void ClientSavegameLoaded(int32 SavegameSize);
};

class AEHLobbyPlayerController : public AEHPlayerController
{

    void StartSavegameReplication();
    void LobbyLoadSavegame();
    void Client_SendPackage(const TArray<uint8>& PackageData);
    void Client_NotifySavegameReplicationStarted(const int32 SavegameSizeIn);
};

class AEHMeteorRain : public AEHCelestialBodyActor
{
    class UProjectileMovementComponent* ProjectileMovementComponent;

};

class AEHMovableSpaceActor : public AActor
{
    FVector SpaceVelocity;
    FEHMovableSpaceActorOnMovingChanged OnMovingChanged;
    void OnMovingChanged(const bool IsMoving);
    FEHMovableSpaceActorOnMovingToDestinationChanged OnMovingToDestinationChanged;
    void OnMovingToDestinationChanged(const bool IsMovingToDestination);
    FEHMovableSpaceActorOnMovableSpaceActorLocationChanged OnMovableSpaceActorLocationChanged;
    void OnMovableSpaceActorLocationChanged();
    class UStaticMeshComponent* DockingPreview;
    bool MovementDisabled;
    float RealPositionUpdateTime;
    FVector DestinationDirectionOffset;
    FVector DockingStationOffset;
    class UEHPrimitiveComponent* SceneRoot;
    FVector CachedTickWorldOffset;
    float SpaceSpeed;
    bool IsMovingToDestination;
    FVector MovementShaderOffset;
    FVector PreviousMovementShaderOffset;
    FVector DestinationPosition;

    void StopMovement();
    void SetVelocity(const FVector Velocity);
    void OnShaderMovementUpdate();
    void OnRealMovementUpdate();
    void OnMovingToDestinationChanged__DelegateSignature(const bool IsMovingToDestination);
    void OnMovingChanged__DelegateSignature(const bool IsMoving);
    void OnMovableSpaceActorLocationChanged__DelegateSignature();
    void Multi_VelocityChanged(const FVector& NewSpaceVelocity);
    void Multi_AttachActor(class AActor* ChildActor);
    void MoveToDestination(const FVector& InDestinationPosition);
    FVector GetSpaceVelocity();
    FVector CalculateVelocityForPoints(const FVector& StartPosition, const FVector& EndPosition);
    void AddVelocity(const FVector VelocityChange);
};

class AEHPlanetoidGrid : public AEHGrid
{
    bool IsPlanet;
    int32 PrimarySeed;
    int32 SecondarySeed;
    int32 GroundSpawnDepth;
    float GroundSpawnChance;
    float GroundSpawnFrequency;
    float GroundTypeFrequency;
    float GenerationDensity;
    float GenerateTracePointsTime;
    bool SpawnSurfaceDestructibles;
    bool SpawnSurfaceVisuals;
    bool SpawnGroundResources;
    int32 ResourcesGenerationSize;
    float Frequency;
    float HigherNoise;
    float LowerNoise;
    TArray<uint8> PlanetoidDetailSpawnChanceIndexes;
    float PlanetoidSurfaceDetailSpawnChanceSum;
    FIntVector PlanetoidSize;
    float PlanetoidMapRotation;
    class UEHBlockItem* PlanetoidDepositItem;
    FEHPlanetoidGridOnPlanetoidGenerated OnPlanetoidGenerated;
    void OnPlanetoidGenerated();
    bool PlanetoidGeneratorCompleted;
    class AEHVoxelWorld* VoxelWorld;
    FIntVector CorrectionLocation;
    uint8 PlanetIndex;
    uint8 PlanetoidTerrainID;
    TMap<class EEHMiningResourceType, class FVector2D> SpawnRatioForGroundResource;

    void UpdateMPCorrectionPosition();
    void TraceHeightFound(const FVector& ImpactPoint);
    void TestingValue(const FIntVector& Coord);
    void SpawnDestructible(const FVector& position, const FVoxelTerrainDigData& DigData);
    void SetSeed(int32 SeedLow);
    void SetInterpolation(EVoxelNoiseInterpolation Interp);
    void RemoveBox(const FIntVector& Coord);
    void OnRep_VoxelWorld();
    void OnRep_CorrectionLocation();
    void OnPlanetoidGenerated__DelegateSignature();
    void OnDebugPlanetoidGenerate();
    void OnDebugPlanetoidCoordGenerate(const FIntVector& Coord);
    void NotifyStreamingPlanetoidLoaded();
    void Multi_RemoveBox(const FIntVector& Coord);
    void ModifyBox(const FIntVector BoxMin, const FIntVector BoxMax, bool IsAdding);
    bool IsProcedurallyGenerated();
    void HadleCollectiveColliderStateChanged(bool ColliderActive);
    FInteractableObjectArray GetWorldItems(const EEHMiningResourceType ResrouceType);
    class AEHVoxelWorld* GetVoxelWorld();
    float GetTestNoiseValue(float X, float Y, float NoiseFrequency, bool UseSimplexNoise);
    FVector GetPlanetoidSize();
    TArray<FIntVector> GetForbiddenVoxelCoordsForBox(const FVoxelIntBox& Box);
    TArray<FIntVector> GetCoordsFromTraceImpactPoints();
    bool DoesVoxelContainRock(const FIntVector& Coord);
    void DebugRegenerateForSeed(const int32 NewPrimarySeed);
    void DebugGeneratePlanetoid(const FIntPoint& Size);
    void AsyncTraceTest();
    void AddBox(const FIntVector& Coord);
};

class AEHPlayerController : public ATGPlayerController
{

    void UpdatePresenceStatus(const FText PresenceStatus);
    void HandlePlayerStateInitialized();
};

class AEHPlayerState : public APlayerState
{
    FEHPlayerStateOnPlayerInfoChanged OnPlayerInfoChanged;
    void OnPlayerInfoChanged();
    FString Name;
    bool Ready;

    void UpdateReady(const bool ReadyIn);
    void OnRep_Ready();
    void OnRep_Name();
    void OnPlayerInfoChanged__DelegateSignature();
};

class AEHRealTimeDilationActor : public AActor
{
    FEHRealTimeDilationActorOnTimeDilationChanged OnTimeDilationChanged;
    void OnTimeDilationChanged();

    void SetGlobalTimeDilation(float GlobalTimeDilation);
    void OnTimeDilationChanged__DelegateSignature();
    void ChangeTimeDilation(float TimeDilationChange);
};

class AEHRemoteFabricatorPawn : public AEHInteractivePawn
{
    class UEHHierarchicalInstancedStaticMeshComponent* HISMExpeditionDrones;
    class UEHHierarchicalInstancedStaticMeshComponent* HISMComingBackDrones;
    class AActor* RemotlyConstructedActor;
    class UEHRemoteFabricatorObject* RemoteFabricatorObject;
    class USceneComponent* SceneRoot;

};

class AEHRemotlyConstructedActor : public AEHWorldInteractiveActor
{
    int32 CompletedExpeditionsCount;
    int32 CurrentlyConstructedPart;
    TArray<FTransform> ConstructionTransforms;
    float AccumulatedEnergy;
    bool IsConstructionDone;
    bool IsPowerActivated;
    bool ModifiedByPlayer;
    FName SerializedActorUniqueName;

    void OnPowerActivated();
    void OnPartConstructionCompleted();
    void OnNextPartConstructionStarted();
    void OnConstructionFinished();
    void OnConstructionCanceled();
};

class AEHSSEItemBase : public AActor
{
    class UEHSSEInitializer* SSEInitializer;

    class UEHItem* GetItem();
};

class AEHSpaceShuttleActor : public AActor
{

    void OnSpaceShuttleUndocked();
    void OnSpaceShuttleDocked();
    class UEHSpaceCarryComponent* GetSpaceCarryComponent();
};

class AEHVehiclePawn : public AVehiclePhysicsActor
{
    class AEHGamePlayerController* GamePlayerController;
    FName SerializedActorUniqueName;

    bool IsPossesed();
    void HandlePlayerLeftGrid(class AEHGrid* Grid);
    void HandlePlayerEnteredGrid(class AEHGrid* Grid);
};

class AEHVoxelWorld : public AVoxelWorld
{
    FName VoxelWorldUniqueID;
    FRandomStream RandomStream;
    FVoxelTerrainDigData VoxelTerrainDigData;
    FVoxelShapeData VoxelShapeData;
    EVoxelTerrainType VoxelTerrainType;
    EVoxelShapeType VoxelShapeType;
    FIntVector VoxelWorldSize;
    float SteepStep;
    bool IsRemovingVoxel;
    class AEHColliderWorld* ColliderWorld;
    class AEHPlanetoidGrid* PlanetoidGrid;
    float HigherNoise;
    float LowerNoise;

    void VoxelRemoved(const FIntVector& Coord, const int32 VoxelType);
    void VoxelDiggingFinished(const FIntVector& Coord);
    void SetGeneratorParams();
    void RemoveVoxelOld(const FIntVector& Coord);
    void RemoveBox(const FVoxelIntBox& BoxBounds, class AEHCharacter* Character);
    void OnValuesModified(const TArray<FModifiedVoxelValue>& ModifiedValues, class AEHCharacter* Character);
    void Multi_RemoveBox(const FVoxelIntBox& BoxBounds, class AEHCharacter* Character);
    void Multi_AddVoxel(const FIntVector& Coord);
    void LoadVoxelWorld();
    bool HasParam(const FName ParamName);
    EVoxelTerrainType GetVoxelTypeFromLayer(const int32 LayerIndex);
    FIntVector GetPlanetoidSize();
    void DestroySaveState();
    void AddVoxel(const FIntVector& Coord);
};

class AEHWorldInteractiveActor : public AActor
{
    FEHWorldInteractiveActorOnWorldInteractiveInfoChanged OnWorldInteractiveInfoChanged;
    void OnWorldInteractiveInfoChanged();
    class UTexture2D* InteractionIcon;
    FText InteractionDisplayName;
    TMap<class EPlayerActionType, class EHJobModeType> ActionTypeJobModes;
    int32 ActionsFlags;

    void OnWorldInteractiveInfoChanged__DelegateSignature();
    void NotifyInfoChanged();
};

class AEHWorldInteractivePawn : public APawn
{
    class UTexture2D* InteractionIcon;
    FText InteractionDisplayName;
    TMap<class EPlayerActionType, class EHJobModeType> ActionTypeJobModes;
    int32 UnpossesedFlags;
    int32 PossesedFlags;
    FName SerializedActorUniqueName;

};

class AEHWorldInteractiveVehicle : public AEHWorldInteractivePawn
{
};

class ATGCodingStandardExampleActor : public ACharacter
{
    class USkeletalMeshComponent* MyMesh;
    bool WantsToSprint;

    void OnRep_WantsToSprint();
};

class IEHAcceptPushedResourceInterface : public IInterface
{
};

class IEHColliderInterface : public IInterface
{
};

class IEHCustomConstructionInterface : public IInterface
{
};

class IEHCustomMeshInterface : public IInterface
{
};

class IEHDynamicMaterialInterface : public IInterface
{
};

class IEHElectricDeviceInterface : public IInterface
{
};

class IEHGameHUDInterface : public IInterface
{

    bool TogglePopMenu(TSubclassOf<class UInteractBaseWidget> MenuWidget, class UEHInteractableObject* InteractableObject);
    void TogglePhotoMode();
    void ToggleMouse(bool ShowMouse);
    void ToggleModularVehicleDesigner();
    class UMenuWidget* ToggleMenu(TSubclassOf<class UMenuWidget> MenuWidget, class UObject* PayloadObject);
    void ToggleMap();
    void ToggleLog();
    void ToggleHostPlayerLeft(class AEHGamePlayerController* GamePlayerController);
    void OpenPopMenu(TSubclassOf<class UInteractBaseWidget> MenuWidget, class UEHInteractableObject* InteractableObject);
    class UMenuWidget* OpenMenu(TSubclassOf<class UMenuWidget> MenuWidget, class UObject* PayloadObject);
    void ClosePopMenu();
    bool CloseCurrentMenu();
    void ChangeCursorState(bool IsActive);
};

class IEHIndicationInterface : public IInterface
{

    bool IsRegisteringForbidden();
    FText GetIndicationText();
    FVector GetIndicationPosition();
    FEHIndicationConfigData GetIndicationConfigData();
};

class IEHInteractableChildActorInterface : public IInterface
{

    void OnRotationFinished();
    void OnRecovered(class UEHDataObject* DataObject);
    void OnPrepareForSave(class UEHDataObject* DataObject);
    void OnInteractionStarted();
    void OnInteractionFinished();
    void OnActiveStateChanged(const bool IsActive);
    void Init(class UEHInteractableObject* InInteractableObject);
};

class IEHInteractionInterface : public IInterface
{

    uint8 GetInteractionCircleStepsNumber();
    uint8 GetInteractionCircleStep();
};

class IEHMapTrackableInterface : public IInterface
{

    void SetDisplayName(const FText& DisplayName);
    bool IsVisibleOnMap(const bool RadarActive);
    bool IsKnown();
    EEHTrackableType GetTrackableType();
    EVoxelTerrainType GetTerrainType();
    FVector GetScale();
    float GetRotation();
    TArray<int32> GetResourceCounts();
    FVector GetMiddleOffset();
    FText GetDisplayName();
    FLinearColor GetColor();
    EVoxelShapeType GeShapeType();
};

class IEHMetamorphosisInterface : public IInterface
{
};

class IEHModularPartInterface : public IEHSceneInteractionInterface
{

    void SetVehiclePartType(const EEHVehiclePartType VehiclePartType);
    void SetPartMaterials(const TArray<class UMaterialInterface*>& Materials);
    EEHVehiclePartType GetVehiclePartType();
    TArray<class UMaterialInterface*> GetPartMaterials();
    void ApplyTransform(const FTransform& Transform);
    void ApplyStaticMesh(const class UStaticMesh* StaticMesh);
    void ApplyMaterials(const TArray<TSoftObjectPtr<UMaterialInterface>>& Materials);
    void ApplyMaterial(const class UMaterialInterface* Material);
    void ApplyColors(const TArray<FLinearColor>& Colors, const TArray<FName>& Names);
};

class IEHModularVehicleInterface : public IInterface
{

    void RemoveVehiclePart(class UActorComponent* ActorComponent);
    void OnGridVehicleSpawn(class AEHGrid* Grid);
    void OnDesignerVehiclePreviewSpawn();
    void InitVehicle(const FEHVehicleDefinition& VehicleDefinition);
    FEHVehicleDefinition GetVehicleDetails();
    int32 GetPossibleVehicleActions();
    bool CanExecuteAction(EEHVehicleAction VehicleAction);
};

class IEHObjectLoaderInterface : public IInterface
{
};

class IEHPlayerWorldInteractionInterface : public IEHInteractionInterface
{

    void OnWorldActorSpawned(bool ShouldMoveToDestination, FVector DestinationOffset);
    void OnWorldActorRotate();
    void OnWorldActorRemove();
    void OnWorldActorOpen();
    void OnWorldActorInteract();
    void OnWorldActorHit();
    void OnWorldActorClick();
    bool HasExplicitInteractions();
    TSubclassOf<class UWorldInteractiveInfoWidget> GetWorldInteractiveInfoWidgetClass();
    FText GetInteractionDisplayName();
    int32 GetAvailableActionsBits();
    TMap<class EPlayerActionType, class EHJobModeType> GetActionTypeJobModes();
    TMap<class EPlayerActionType, class FText> GetActionNames();
    class UTexture2D* GetActionIcon();
};

class IEHRemoteConstructionInterface : public IEHInteractionInterface
{

    int32 TotalExpeditionsCount();
    void StartRemoteConstruction(class UEHRemoteFabricatorObject* RemoteFabricatorObject);
    void OnExpeditionConstruct();
    bool IsConstructionDone();
    FName GetUniqueID();
    uint8 GetPhasesCount();
    FText GetName();
    class UTexture2D* GetIcon();
    TArray<FEHItemInstance> GetExpeditionCost();
    int32 CompletedExpeditions();
    void CancelRemoteConstruction(class UEHRemoteFabricatorObject* RemoteFabricatorObject);
};

class IEHRemoteEnergyInterface : public IEHInteractionInterface
{

    void RemoveEnergyTransmitter(class UEHEnergyTransmitterObject* EnergyTransmitter);
    void OnEnergyProvided(float Energy, class UEHEnergyTransmitterObject* EnergyTransmitter);
    bool IsPowerActivated();
    FName GetUniqueID();
    FText GetName();
    class UTexture2D* GetIcon();
    float EnergyRequired();
    bool CanReceiveEnergy();
    void AddEnergyTransmitter(class UEHEnergyTransmitterObject* EnergyTransmitter);
    float AccumulatedEnergy();
};

class IEHSaveGameInterface : public IInterface
{

    bool ShouldSerializeUniqueClassSavegameData();
    bool ShouldSerializeNamedActorSavegameSpawn();
    bool ShouldSerializeNamedActorSavegameData();
    void SetSerializedActorUniqueName(const FName UniqueName);
    void SavingGameData(class UEHSaveGame* SaveGame);
    void SavegameObjectSerializeDataLoaded();
    void LoadingGameData(class UEHSaveGame* SaveGame);
    FName GetSerializedActorUniqueName();
};

class IEHSceneInteractionInterface : public IInterface
{

    bool HasClickInteraction();
    class USceneComponent* GetSetupComponent();
    class UPrimitiveComponent* GetPrimitiveComponent();
};

class IEHSignalDeviceInterface : public IInterface
{
};

class IEHTraceInterface : public IInterface
{

    bool ShouldTraceObject(class UObject* TracedObject);
    int32 GetTraceOverrideActions(class UObject* TracedObject);
    TMap<class EPlayerActionType, class FText> GetTraceActionNames();
};

class IEHVisitedByAIInterface : public IInterface
{
};

class IEHWaterDeviceInterface : public IInterface
{
};

class UContainerSlotWidget : public UUserWidget
{
    int32 Index;
    class UEHItemsContainer* ItemsContainer;
    FText CustomNumberText;
    TSubclassOf<class UEHItemVariantsWidget> VariantsWidgetClass;
    bool IsConstructionItemUnlocked;
    bool IsTextAlwaysVisible;
    FEHItemInstance Item;
    class UImage* ItemImage;
    class UBorder* TextBorder;
    class UTextBlock* NumberText;
    class UTextBlock* ItemName;
    class UBorder* Border;
    class UOverlay* VariantsOverlay;

    void UpdateSlotState();
    void UpdateCustomText(const FText& InCustomText);
    void Refresh();
    void OnSlotSelectionChanged(const bool IsSelected);
    void OnClickSplit();
    void OnClickDetails();
    void HandleItemDragEnd();
    void HandleItemDragBegin(class UDraggableItemPayload* DraggableItemPayload);
};

class UDragOperationWidget : public UDragDropOperation
{
};

class UDraggableItemPayload : public UObject
{
    class UEHItemsContainer* ItemsContainer;

};

class UDraggableItemWidget : public UUserWidget
{
    class UImage* ItemImage;

};

class UDraggableWidget : public UUserWidget
{
};

class UEHAIBreederObject : public UEHAIObject
{
    FEHItemInstance CarriedItem;
    uint8 CarriedWater;
    EHBreedAnimalTypes CurrentAnimal;

};

class UEHAIDirectorComponent : public UActorComponent
{
};

class UEHAIExternalDependenciesDataObject : public UObject
{
};

class UEHAIFabricatorDroneObject : public UEHAIObject
{
};

class UEHAIFarmerObject : public UEHAIObject
{
    class UEHItem* CarriedItem;
    uint8 CarriedWater;
    EHHarvestPlantTypes CurrentPlant;

};

class UEHAIHumanObject : public UEHAIObject
{
    class UDataTable* DataTable;
    bool IsFemale;
    FString HumanName;
    int32 HumanHeadID;
    FEHHeadMeshes HeadMeshes;
    TArray<float> CustomChangesOverTime;
    TArray<FEHHumanNeed> HumanNeeds;

    void Multi_FoodReceived(class UEHItem* Food);
    void Multi_EnableBillboard(const EEHBillboardType BillboardType);
    void Multi_DisableBillboard(const EEHBillboardType BillboardType);
    void InitCollectionData();
    FEHHumanNeed GetHumanNeed(const EHHumanNeedID HumanNeedID);
};

class UEHAIHumanSpecialist : public UEHAIHumanObject
{
    FEHAIHumanSpecialistOnProfessionChanged OnProfessionChanged;
    void OnProfessionChanged();

    void OnProfessionChanged__DelegateSignature();
    void ChangeProfession(EAIProfession NewProfession);
};

class UEHAIHumanTrainee : public UEHAIHumanObject
{
    EAIProfession TrainSpecialization;

};

class UEHAIItem : public UEHDeviceItem
{
    float AIMovementSpeed;
    float SlopeZOffset;
    float SlopeAngle;
    class UTexture2D* AIIndicationMapIcon;
    float HumanHeadHeight;

};

class UEHAIMinerObject : public UEHAIObject
{
};

class UEHAIObject : public UEHItemsContainer
{
    EAIProfession AIProfession;
    float AttachedResourceHeight;
    float AttachedResourceScale;
    class UEHItem* ResourceHolderItem;
    class UEHItem* AttachedResource;
    class UEHItem* AttachedVisualItem;
    float AttachedVisualItemHeight;
    bool IsMovingOnPath;
    bool IsNudged;
    bool IsBoarding;
    FIntVector LastRequestedPath;
    int32 RetryCount;
    FAIWorkRequest CurrentWorkRequest;
    FIntVector NextDirectionCoord;
    FEHAIObjectOnWorkRequestStateChanged OnWorkRequestStateChanged;
    void OnWorkRequestStateChanged();
    int32 CurrentPathIndex;
    TArray<FIntVector> Path;
    class UEHAIExternalDependenciesDataObject* AIExternalDependenciesDataObject;

    void TransferAIToAnotherGrid(class AEHGrid* AnotherGrid);
    void RequestPath(const FIntVector& DestinationCoord, const int32 RetryCountIn);
    void OnWorkRequestStateChanged__DelegateSignature();
    void Multi_RemoveAttachedItem();
    void Multi_AddAttachedItem(class UEHItem* Item);
    bool IsTransferedTo(class AEHGrid* TestedGrid);
    bool IsTransfered();
    bool IsInsideBuilding();
    bool HasWorkplaceAssigned();
    void GoOnPathDirectly(const TArray<FIntVector>& FullPath);
    class UEHInteractableObject* GetWorkplace();
    FIntVector GetNormalizedDirection();
    class UEHInteractableObject* GetEnteredBuilding();
    class UEHItem* GetCarriedItem();
};

class UEHAITransportBotObject : public UEHAIObject
{
};

class UEHAchievementsManager : public UTGUIAchievementsManager
{
    class AEHGamePlayerController* PlayerController;

    void UnlockAchievement(const EEHAchievement Achievement);
    void ShutdownCompleted();
    void QueryAchievementsCompleted();
    bool IsAchievementUnlocked(const EEHAchievement Achievement);
    FName GetAchievementName(const EEHAchievement Achievement);
};

class UEHAnimalMeshAsset : public UEHVisualMeshAsset
{
    EHBreedAnimalTypes BreedAnimalType;
    EHAnimalSize AnimalSize;
    float GrowingPhaseTime;
    uint8 ConsumedPhaseWater;
    uint8 ConsumedPhaseGrain;
    class UEHItem* ProducedResource;

};

class UEHAnimatedEllipsisTextWidget : public UTGUserWidget
{
    class UEHAnimatedEllipsisTextWidgetViewModel* TextWidgetViewModel;

    void EnableEllipsis(bool AreEllipsisEnabled);
};

class UEHAnimatedEllipsisTextWidgetViewModel : public UEHViewModel
{
    FTextBindable TextToShow;
    FBoolBindable ShowEllipsis;

};

class UEHArithmeticCombinatorObject : public UEHSignalObject
{
    uint8 MathOperationIndex;
    int32 OperationValue;

    void UpdateOperationValue(int32 OperationValue);
    void UpdateMathOperation(uint8 MathOperationIndex);
    void HandleSelectedResourcesChanged();
};

class UEHAsset : public UPrimaryDataAsset
{
    FText ItemName;
    FText Description;
    FText LongDescription;
    TSoftObjectPtr<UTexture2D> Icon;
    int32 DebugSortPriority;
    bool IsUnlockedByDefault;
    EUnlockType UnlockType;
    FText LockedToastTitle;
    FText LockedToastDescription;

};

class UEHAssetManager : public UAssetManager
{
};

class UEHAsteroidCatcherDataObject : public UEHDataObject
{
    FEHAsteroidData AsteroidData;
    FTransform AsteroidTransform;
    FRotator CannonRelativeRotation;

};

class UEHAsteroidSpawnerDataObject : public UEHDataObject
{
    TArray<FTransform> AsteroidTransforms;

};

class UEHAsteroidsCatcher : public UEHCraftingObject
{
    FEHAsteroidsCatcherOnCatchedResourceChanged OnCatchedResourceChanged;
    void OnCatchedResourceChanged();
    int32 AttractedAsteroidIndex;
    class UParticleSystem* LaserBeamParticle;
    TArray<FTransform> LaserBeamOffsets;
    class UParticleSystem* ProcessingParticle;
    FVector ProcessingOffset;
    FVector AsteroidMeshOffset;
    float AsteroidScale;
    FEHAsteroidsCatcherOnAsteroidCatchStateChanged OnAsteroidCatchStateChanged;
    void OnAsteroidCatchStateChanged(EAsteroidCatchStateChanged CatchStateChange);
    class UEHResourceItem* CatchResourceType;
    FEHCatchedAsteroid AttractedAsteroid;
    FEHCatchedAsteroid ProcessedAsteroid;
    float AsteroidProcessingTime;

    bool RemoveProcessedAsteroid();
    bool RemoveAttractedAsteroid();
    void OnCatchedResourceChanged__DelegateSignature();
    void OnAsteroidCatchStateChanged__DelegateSignature(EAsteroidCatchStateChanged CatchStateChange);
    bool IsProcessingAsteroid();
    bool IsAttractingAsteroid();
    bool ChangeCatchedResource(class UEHResourceItem* Resource);
};

class UEHBackgroundComponent : public UEHHUDUUIComponent
{
    class UEHBackgroundViewModel* BackgroundViewModel;

};

class UEHBackgroundViewModel : public UEHScreenViewModel
{
};

class UEHBackgroundWidget : public UTGUILayer
{
    class UEHBackgroundViewModel* BackgroundViewModel;
    TMap<class EEHBackgroundType, class UMediaSource*> BackgroundVideos;
    class UMediaPlayer* MediaPlayer;
    class UObject* BinkMediaPlayer;

    void OnShowVideo();
    void OnMediaOpened();
    void OnHideVideo();
    void HandleMediaOpened(FString OpenedUrl);
    void HandleMediaFailed(FString FailedUrl);
    void HandleBinkMediaOpened(FString OpenedUrl);
};

class UEHBarnLandObject : public UEHInteractableServiceObject
{
    TSoftObjectPtr<UParticleSystem> PlantAnimalsParticle;
    TSoftObjectPtr<UParticleSystem> HarvestAnimalsParticle;
    TSoftObjectPtr<UParticleSystem> FeedingAnimalsParticle;
    TSoftObjectPtr<UParticleSystem> WaterAnimalsParticle;
    class UEHAIBreederObject* AssignedBreeder;
    class UEHAIBreederObject* WorkingBreeder;
    TArray<class UEHBarnLandObject*> SiblingsBarnLands;

};

class UEHBarnObject : public UEHSpecialisticProductionObject
{
    class UEHDeviceItem* BarnFieldItem;
    class UEHItem* FeedItem;
    FEHBarnObjectOnAnimalChanged OnAnimalChanged;
    void OnAnimalChanged();

    void OnAnimalChanged__DelegateSignature();
    class UEHAnimalMeshAsset* GetAnimalToBreed();
};

class UEHBarrierGenerator : public UEHCraftingObject
{

    void PlayerInsideBarrierChanged(const TArray<class AActor*> BarrierActors, class AEHGamePlayerController* PlayerController);
};

class UEHBarrierNetwork : public UObject
{
};

class UEHBaseButtonViewModel : public UEHViewModel
{
    FTextBindable ButtonText;
    FTexture2DBindable ButtonImage;
    class UEHViewModel* PayloadViewModel;

};

class UEHBaseButtonWidget : public UEHUserWidget
{
    FEHBaseButtonWidgetOnClickedDelegate OnClickedDelegate;
    void OnClickedDelegate(class UEHBaseButtonWidget* ButtonWidget);
    FEHBaseButtonProperties Properties;
    class UWidgetAnimation* OnEnterAnimation;
    class UWidgetAnimation* OnExitAnimation;
    class UWidgetAnimation* OnFocusedAnimation;
    class UWidgetAnimation* OnUnfocusedAnimation;
    class UWidgetAnimation* OnHoveredAnimation;
    class UWidgetAnimation* OnUnhoveredAnimation;
    class UWidgetAnimation* OnClickedAnimation;
    class UWidgetAnimation* OnPressedAnimation;
    class UTGConfigurableTextBlock* ButtonText;
    class UTGConfigurableTextBlock* ButtonShadowText;
    class UHorizontalBox* ContentContainer;
    class UHorizontalBox* ShadowContentContainer;
    class UBackgroundBlur* ShadowBackgroundBlur;
    class UImage* ButtonImage;
    class UImage* FocusedImage;
    class UImage* HatchingImage;
    class UTGTile* ButtonTile;
    class USizeBox* ButtonSizeBox;
    bool UseHatching;
    class UEHBaseButtonViewModel* BaseButtonViewModel;

    void ReturnFocusAfterClick();
    void OnUnhoveredEvent();
    void OnUnfocusedEvent();
    void OnPressedEvent();
    void OnInputControllerChanged(TEnumAsByte<ETGInputControllerType> InputControllerType);
    void OnHoveredEvent();
    void OnFocusedEvent();
    void OnClickedEvent();
    void HandleOnUnhovered();
    void HandleOnUnfocused();
    void HandleOnPressed();
    void HandleOnHovered();
    void HandleOnFocused();
    void HandleOnClicked();
};

class UEHBaseWarehouse : public UEHStorageObject
{
    TArray<FEHItemInstance> PreviewItems;

    void HandleGameStarted();
};

class UEHBatteryObject : public UEHElectricityReactor
{
    bool IsBatteryCharging;
    uint8 StoredEnergy;
    FTimerHandle EnergyStoreTimerHandle;
    FEHBatteryObjectOnBatteryChargeStateChanged OnBatteryChargeStateChanged;
    void OnBatteryChargeStateChanged();

    void OnBatteryChargeStateChanged__DelegateSignature();
    void ChageBatteryChargingState(const bool IsBatteryChargingIn);
};

class UEHBillboardsLineComponent : public UPrimitiveComponent
{
    bool UseDynamicDepth;
    float DynamicDepthCameraDistance;
    TArray<class UTexture2D*> Sprites;
    uint8 BlendMode;
    bool ScaleDownSpritesBasedOnNumber;
    float TotalSpritesSize;
    float SpriteSize;
    float Spacing;
    FLinearColor Color;
    float U;
    float UL;
    float V;
    float VL;

    void UpdateBillboards(const TArray<class UTexture2D*>& Billboards);
    void RemoveBillboardSprite(class UTexture2D* Sprite);
    void AddBillboardSprite(class UTexture2D* Sprite, const uint8 Index);
};

class UEHBlackHoleGenerationObject : public UEHCelestialGenerationObject
{
    EBlackHoleType BlackHoleType;

};

class UEHBlockItem : public UEHItem
{
    bool BlockSupportsFloorConstruction;

};

class UEHBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    TArray<FString> testSplitWordsRichTextBlock(FString String);
    void testSavingObject(class UObject* Object);
    TArray<class AActor*> SortActorsByDistance(const FVector& Location, const TArray<class AActor*>& Actors);
    void SetWidgetHidden(class UWidget* Widget, const bool IsHidden);
    void SetWidgetCollapsed(class UWidget* Widget, const bool IsCollapsed);
    void SetCameraMoveableWhenPaused(class UObject* WorldContextObject, bool bNewIsMoveable);
    void ScaleMeshBetweenPoints(class UObject* WorldContextObject, class UStaticMeshComponent* Component, const FVector& StartPosition, const FVector& EndPosition);
    FIntVector RotateIntVector(const bool IsForward, const FIntVector& Coord);
    void ResetPlanetSpawnChances(class UEHItem* Item);
    bool ProjectWorldToScreenAA(class APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative);
    bool IsUnit2D(const FVector2D& A);
    bool IsPointZero(const FIntPoint& A);
    bool IsPointHundred(const FIntPoint& A);
    bool IsMultiplayer();
    bool IsHorizontalRotation(const EEHInstanceRotation Rotation);
    bool IsGameStarted();
    bool IsGameLoadedFromSavegame();
    bool IsDemo();
    TArray<class UEHResourceItem*> GetWarehouseResources(class UObject* WorldContextObject);
    FVoxelTerrainDigData GetVoxelTerrainDigData(class UObject* WorldContextObject, const EVoxelTerrainType VoxelTerrainType);
    FVoxelShapeData GetVoxelShapeData(class UObject* WorldContextObject, const EVoxelShapeType VoxelShapeType);
    TArray<class UActorComponent*> GetVehiclePartsByType(const class APawn* Pawn, const EEHVehiclePartType PartType);
    class UActorComponent* GetVehiclePartByTypeAndID(const class APawn* Pawn, const EEHVehiclePartType PartType, const FName ID);
    class UActorComponent* GetVehiclePartByType(const class APawn* Pawn, const EEHVehiclePartType PartType);
    class UEHItem* GetVariantItem(const FEHItemInstance& ItemInstance);
    FTransform GetTransformRotated(const EEHInstanceRotation Rotation, const FTransform& Transform);
    class AActor* GetSerializedActorWithID(const class UObject* WorldContextObject, FName UniqueID);
    TArray<FString> GetSchemeNames(const class UObject* WorldContextObject, const TArray<FEHPartScheme>& Schemes);
    int32 GetSavegameVersion();
    EEHInstanceRotation GetRotationFromRotator(const FRotator Rotator);
    EEHInstanceRotation GetRotatedInstanceRotation(const EEHInstanceRotation Rotation, const bool IsForward);
    class UEHProfessionMeshAsset* GetProfessionAsset(class UObject* WorldContextObject, const EAIProfession Profession);
    TArray<class UEHPlantMeshAsset*> GetPlants(class UObject* WorldContextObject);
    float GetOrientationAngle(FVector2D Vector2D);
    TArray<class UEHWorldItem*> GetMiningDeposits(class UObject* WorldContextObject);
    class UEHJobModeAsset* GetJobModeAsset(class UObject* WorldContextObject, const EHJobModeType JobModeType);
    TArray<class UEHProfessionMeshAsset*> GetHumanProfessions(class UObject* WorldContextObject);
    class UEHGlobalPointAsset* GetGlobalPointAsset(class UObject* WorldContextObject, const EGlobalPointType GlobalPointType);
    class UEHGameUserSettings* GetEHGameUserSettings();
    class UObject* GetDefaultObject(UClass* ObjectClass);
    class UEHDataProvider* GetDataProvider(class UObject* WorldContextObject);
    FIntVector GetCoordsRotated(const EEHInstanceRotation CellRotation, const FIntVector& Coord);
    TSubclassOf<class UEHAIObject> GetClassForProfession(class UObject* WorldContextObject, const EAIProfession Profession);
    FIntVector GetCellCoords(const FVector& position);
    FEHBasicUnlockData GetBasicUnlockData(class UObject* WorldContextObject, const FEHGameplayAspectUnlock& GameplayAspectUnlock);
    TArray<class UEHAnimalMeshAsset*> GetAnimals(class UObject* WorldContextObject);
    TArray<class UEHDevicesComponent*> GetAllModifiedDeviceComponents(const class UObject* WorldContextObject);
    class AActor* GetActorWithInterface(const class UObject* WorldContextObject, TSubclassOf<class UInterface> Interface);
    void FindScreenEdgeLocationForWorldLocation(class APlayerController* PlayerController, const FVector& InLocation, const float EdgePercent, const FVector2D ViewportCenterLoc, FVector2D& OutScreenPosition, float& OutRotationAngleDegrees, bool& bIsOnScreen);
    TArray<class AActor*> FilterActorsByUniverse(const FName UniverseSignature, const TArray<class AActor*>& Actors);
    bool DoGameplayAspectsContainItem(const TArray<FEHGameplayAspectUnlock>& GameplayAspectUnlock, class UEHAsset* ItemToCheck);
    void CalculateVehiclePrimitivesUpVectors(const class APawn* Pawn, const EEHVehiclePartType PartType, FVector& PositiveVector, FVector& NegativeVector);
    void AddOffsetToTransforms(TArray<FTransform> Transforms, const FVector& Offset);
};

class UEHBoolOptionViewModel : public UEHOptionViewModel
{

    void OnBindableChanged(bool NewValue);
};

class UEHBoxComponent : public UEHBoxComponentDepth
{
    bool IsBlockingHit;
    bool IsCollective;
    bool IsFloor;

};

class UEHBoxComponentDepth : public UShapeComponent
{
    FVector BoxExtent;
    float LineThickness;

    void SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps);
    FVector GetUnscaledBoxExtent();
    FVector GetScaledBoxExtent();
};

class UEHBreadcrumbEntryViewModel : public UTGViewModel
{
    FTextBindable BreadcrumbText;

};

class UEHBreadcrumbEntryWidget : public UTGUserWidget
{
    class UEHBreadcrumbEntryViewModel* BreadcrumbEntryViewModel;

};

class UEHBreadcrumbViewModel : public UTGViewModel
{
    TArray<class UEHBreadcrumbEntryViewModel*> BreadcrumbEntries;

};

class UEHBreadcrumbWidget : public UTGUserWidget
{
    FMargin ArrowPadding;
    TSubclassOf<class UTGUserWidget> BreadcrumbEntryClass;
    class UTexture2D* ArrowImage;
    class UHorizontalBox* BreadcrumbContainer;
    class UEHBreadcrumbViewModel* BreadcrumbViewModel;

};

class UEHButtonBarEntryViewModel : public UTGViewModel
{
    FTextBindable DisplayText;
    FName InputAction;
    EButtonBarAction ButtonBarAction;
    uint8 Priority;

    FTextBindable GetDisplayText();
};

class UEHButtonBarEntryWidget : public UTGUserWidget
{
    class UTGTile* ClickableTile;
    class UEHButtonBarEntryViewModel* ButtonBarEntryViewModel;

    void OnButtonClicked();
};

class UEHButtonBarViewModel : public UTGViewModel
{
    TArray<class UEHButtonBarEntryViewModel*> ButtonBarEntryViewModels;

};

class UEHButtonBarWidget : public UTGUILayer
{
    class UHorizontalBox* ControllerWidgetContainer;
    class UHorizontalBox* MKWidgetContainer;
    TSubclassOf<class UTGUserWidget> ButtonBarControllerEntryClass;
    TSubclassOf<class UTGUserWidget> ButtonBarMKEntryClass;
    class UEHButtonBarViewModel* EHButtonBarViewModel;
    TMap<class EButtonBarAction, class UEHButtonBarEntryWidget*> ControllerButtonsCached;
    TMap<class EButtonBarAction, class UEHButtonBarEntryWidget*> KeyboardButtonsCached;

};

class UEHButtonViewModel : public UEHOptionViewModel
{
};

class UEHCampaignListViewModel : public UEHViewModel
{
    FTextBindable CategoryName;
    TArray<class UEHCampaignOptionViewModel*> CampaignOptionViewModels;
    class UEHCampaignOptionViewModel* CurrentOption;

};

class UEHCampaignListWidget : public UTGUserWidget
{
    TSubclassOf<class UUserWidget> CampaignOptionWidgetClass;
    TEnumAsByte<EHorizontalAlignment> HortizontalSlotAligment;
    float ScrollTimeThreshold;
    float MouseMovementThreshold;
    class UVerticalBox* VerticalScenariosList;
    class UScrollBox* ScrollBox;
    class UEHCampaignListViewModel* CampaignListViewModel;
    FMargin OptionsPadding;
    FMargin ExtraIndentPadding;
    float ScrollPadding;
    bool ShouldScrollAnimate;
    EDescendantScrollDestination DescendantScrollDestination;
    class UEHCampaignOptionViewModel* CurrentlySelectedOption;

    void OnCampaignOptionSelected();
    void HandleUserScrolled(float CurrentOffset);
};

class UEHCampaignOptionViewModel : public UEHViewModel
{
    FTextBindable OptionName;
    FTextBindable OptionDescription;
    FTexture2DBindable OptionIcon;
    FBoolBindable IsEnabled;
    FBoolBindable IsConstructed;

};

class UEHCampaignOptionWidget : public UTGUserWidget
{
    TMap<class ESettingWidgetType, class TSubclassOf<UEHOptionWidget>> SettingsWidgetMap;
    class UTGWidget* InteractiveArea;
    class UEHCampaignOptionViewModel* CampaignOptionViewModel;

    void UpdateSelection(const bool IsSelected);
    void SelectOption();
    void HandleUnhovered();
    void HandleSelectionChange(const bool IsSelected);
    void HandleOptionsChange();
    void HandleOptionButtonPressed(class UTGViewModel* InViewModel);
    void HandleIsEnabledChange(const bool IsEnabled);
    void HandleIsCollapsedChange(const bool IsCollapsed);
    void HandleHovered();
    void HandleClicked();
};

class UEHCampaignScreen : public UEHUIScreen
{
    class UEHCampaignViewModel* CampaignViewModel;
    class UEHCampaignListWidget* CampaignList;
    class UEHBaseButtonWidget* StartTutorialButton;
    class UEHCampaignOptionViewModel* CurrentlySelectedOption;

    void HandleStartTutorialButtonPressed(class UEHBaseButtonWidget* Button);
};

class UEHCampaignViewModel : public UEHScreenViewModel
{
    class UEHCampaignListViewModel* CampaignListViewModel;

};

class UEHCanteenObject : public UEHInteractableServiceContainer
{
    TArray<FTransform> SolidFoodInsideInstances;
    TArray<FTransform> LiquidFoodInsideInstances;
    TArray<class UEHItem*> RequiredItems;
    TArray<class UEHFoodItem*> SolidFoodPreviewItems;
    TArray<class UEHFoodItem*> LiquidFoodPreviewItems;

};

class UEHCarbonReactor : public UEHElectricityReactor
{
    TSoftObjectPtr<UParticleSystem> SmokeParticle;
    class UParticleSystemComponent* SpawnedParticle;

};

class UEHCelestialGenerationObject : public UObject
{
};

class UEHCharacterMovementComponent : public UCharacterMovementComponent
{

    void SetSmoothingNetworkMode(ENetworkSmoothingMode NetworkSmoothingModeIn);
};

class UEHCheatComponent : public UTGUICheatComponent
{
    TSubclassOf<class UUserWidget> DebugWidgetClass;
    class AEHHUD* EHHUD;
    class UEHUISystem* UISystem;
    class UEHLayerManager* LayerManager;
    class UEHGameInstance* GameInstance;

    void UIToggleDebugWidget();
    void UIToggleAuthenticationPrompt();
    void UIShowMockNotificationDialog();
    void UIShowHUD();
    void UIOpenScreen(uint8 ScreenID);
    void UIHideHUD();
    void UIDebugTestPopupQueue();
    void UIDebugShowPopup(FString Title, FString Body);
    void UIDebugClosePopup();
    void SetResScale(uint8 resscale);
    TArray<FEHItemInstance> GetAllResources(int32 Quantity);
    void CheatUnlockAll();
    void CheatTechPts();
    void CheatResources();
    void CheatKillPlayer();
    void CheatCompleteScenario();
};

class UEHChildActorComponent : public UChildActorComponent
{
};

class UEHCircularSaw : public UEHCraftingObject
{
};

class UEHCloseBox : public UTGUserWidget
{
    class UTGWidget* CloseBox;

    void HandleCloseClicked();
};

class UEHColumnObject : public UEHInteractableObject
{
};

class UEHConfig : public UTGUIConfigMain
{
    FConfigurableImage ConfigurableImageExample;
    FConfigurableBorder ConfigurableBorderExample;

};

class UEHConnectorStationObject : public UEHCraftingObject
{
    TArray<FEHItemInstance> AstronautOrdersCost;
    uint8 OrderedAstronautsCount;
    float DesiredDockTime;
    TArray<ELineDirection> ConveyLines;
    FIntVector AIEntranceCoord;
    TArray<FIntVector> LinesCoords;
    FEHConnectorStationObjectOnConveyorLinesChanged OnConveyorLinesChanged;
    void OnConveyorLinesChanged();
    FEHConnectorStationObjectOnDockingStateChanged OnDockingStateChanged;
    void OnDockingStateChanged();
    EDockingState DockingState;

    void OnDockingStateChanged__DelegateSignature();
    void OnConveyorLinesChanged__DelegateSignature();
    void Multi_DestructConveyorLine(const uint8 LineNumber);
    void Multi_ConstructConveyorLine(const uint8 LineNumber, const bool ConveyorReverseDirection);
    void DestructConveyorLine(const uint8 LineNumber);
    void ConstructConveyorLine(const uint8 LineNumber, const bool ConveyorReverseDirection);
};

class UEHConstructor : public UEHCraftingObject
{
};

class UEHContainerWidget : public UInteractBaseWidget
{
    class UUniformGridPanel* GridPanel;
    TSubclassOf<class UContainerSlotWidget> ContainerSlotWidgetClass;
    TSubclassOf<class UEHItemTooltipWidget> SlotTooltipClass;
    bool ShowQuantity;
    bool TextAlwaysVisible;
    uint8 Columns;
    uint8 Rows;
    FString FilterPhrase;
    int32 SlotsLimit;
    class UEHItemTooltipWidget* SlotTooltipWidget;
    FEHContainerWidgetOnContainerSlotClicked OnContainerSlotClicked;
    void OnContainerSlotClicked(class UEHItemsContainer* Container, class UEHItem* Item, uint8 Index);

    void UpdateSlotsSelectionForItem(class UEHItem* Item);
    void OnContainerSlotClicked__DelegateSignature(class UEHItemsContainer* Container, class UEHItem* Item, uint8 Index);
};

class UEHControlPanelObject : public UEHInteractableObject
{
};

class UEHConveyorBeltObject : public UEHConveyorObject
{
};

class UEHConveyorDeviceItem : public UEHDeviceItem
{
};

class UEHConveyorJoint : public UEHStorageObject
{
};

class UEHConveyorObject : public UEHInteractableObject
{
    bool CanConvey;
    float ConveyorZOffset;
    float ConveyorSlopeRotation;
    float ConveyorSpeed;
    bool ShouldRotateItem;
    float RotateInterpolationSpeedMultiplayer;
    bool UseMiddlePositionToConvey;
    FVector StageOneMoveVector;
    float StageOneMoveLengthPercentage;
    UEHRampDirection RampDirection;

};

class UEHCosmicHarpoonObject : public UEHConnectorStationObject
{
    FEHCosmicHarpoonObjectOnAttractedPlanetoidChanged OnAttractedPlanetoidChanged;
    void OnAttractedPlanetoidChanged();

    void OnAttractedPlanetoidChanged__DelegateSignature();
    class AEHPlanetoidGrid* GetAttractedPlanetoid();
    void CancelAttraction();
    void AttractPlanetoid(class AEHPlanetoidGrid* PlanetoidToAttract);
};

class UEHCraftingObject : public UEHProductionObject
{
    class UEHElectricNetwork* ElectricNetwork;
    int32 ProducedElectricity;
    int32 ConsumedElectricity;
    int32 ConsumedWater;
    int32 ProducedWater;
    class UEHWaterNetwork* WaterNetwork;
    FEHCraftingObjectOnCraftingElectricityChanged OnCraftingElectricityChanged;
    void OnCraftingUtilityChanged();
    FEHCraftingObjectOnCraftingWaterChanged OnCraftingWaterChanged;
    void OnCraftingUtilityChanged();

    void OnRep_ProducedWater();
    void OnRep_ProducedElectricity();
    void OnCraftingUtilityChanged__DelegateSignature();
    bool HasPower();
    int32 GetProducedElectricity();
    bool GetIsWaterDevice();
    int32 GetConsumedElectricity();
    class AActor* GetChildActor();
};

class UEHCustomAsset : public UEHAsset
{
};

class UEHCustomConstructionDeviceItem : public UEHDeviceItem
{
    bool CCShouldCheckSweepResult;
    FVector CCBoxHalfExtent;
    FVector ConstructOffset;
    float CCCameraDistance;

};

class UEHCustomHISMComponent : public UEHHISMCellComponent
{
};

class UEHCustomMeshAsset : public UPrimaryDataAsset
{
    FName AssetName;
    TArray<TSoftObjectPtr<UStaticMesh>> StaticMeshes;
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
    uint8 NumCustomDataFloats;
    uint8 TranslucencySortPriority;
    bool EnableCollisions;

};

class UEHCustomMeshLightAsset : public UEHCustomMeshAsset
{
    TSubclassOf<class ULightComponent> LightTemplate;
    FTransform LightOffset;

};

class UEHDataObject : public UObject
{
};

class UEHDataProvider : public UObject
{
    TArray<class UEHItem*> LoadedItems;
    TMap<class FName, class UEHVisualMeshAsset*> LoadedCustomVisualMeshes;
    TMap<class FName, class UEHCustomMeshAsset*> LoadedCustomMeshes;
    TArray<class UEHAsset*> HeightExtenderAssets;
    TArray<class UEHAsset*> FoundationBlockAssets;
    TArray<class UEHProfessionMeshAsset*> HumanProfessions;
    TSoftClassPtr<UEHAIObject> ProfessionClassMap;
    TSoftClassPtr<AActor> CelestialBodiesMap;
    FDecalInfo OutletInfos;
    FEHTrackableInfo TrackableInfos;
    TArray<FString> HumanGenericNames;
    TArray<FString> HumanMaleNames;
    TArray<FString> HumanFemaleNames;
    TArray<FEHHeadGroom> HumanMaleHeadMeshes;
    TArray<FEHHeadGroom> HumanFemaleHeadMeshes;
    TArray<FString> PlanetNames;
    TArray<FEHStartingStation> StartingSpaceStations;
    class UStaticMesh* ConnectionLineMesh;
    TSoftObjectPtr<UMaterialInterface> ConnectionLineMaterials;
    class UEHBlockItem* PlanetoidResourceItems;
    TArray<class UEHBlockItem*> PlanetoidGroundDeposits;
    class UEHItem* DirtResource;
    class UEHItem* QuartzResource;
    class UEHItem* HydrotonicResource;
    class UEHItem* FloorRecyclable;
    class UEHItem* WallRecyclable;
    class UEHItem* ColonyOrigin;
    class UEHItem* ConveyorLineItem;
    class UEHItem* AdvConveyorLineItem;
    class UEHItem* BulkHeightExtenderItem;
    class UEHItem* BulkFoundationItem;
    class UEHItem* BulkFloorItem;
    class UEHItem* BulkDecorationItem;
    TArray<float> DestructibleSpawnChances;
    TArray<float> VisualSpawnChances;
    TArray<FEHPlanetoidDecalInfo> PlanetoidDecals;
    TArray<FEHPlanetoidParticleInfo> PlanetoidParticles;
    class UEHAsset* DestructionGameplayEffect;
    FVoxelTerrainDigData VoxelTerrainDigDatas;
    FVoxelShapeData VoxelShapeDatas;
    class UTexture2D* BillboardTextures;
    TMap<class FName, class UDataTable*> DataTableMap;
    TMap<class FName, class UDataAsset*> DataAssetMap;
    class UTexture2D* SandboxIcon;

    FEHTrackableInfo GetTrackableInfo(const EEHTrackableType Type);
    TArray<FEHStartingStation> GetStartingStations(const EEHStartingStationSize Size);
    FDecalInfo GetOutletInfo(const EEHDecalType Type);
    class UEHItem* GetBulkPreviewItem(class UEHAsset* Item);
};

class UEHDecalComponent : public UDecalComponent
{
};

class UEHDeciderCombinatorObject : public UEHSignalObject
{
    class UEHDeviceObject* ControlledDevice;
    uint8 MathConditionIndex;
    int32 ConditionValue;
    bool Response;

    void HandleSelectedResourcesChanged();
};

class UEHDemoScreen : public UEHUIScreen
{
    class UEHDemoViewModel* DemoViewModel;
    class UEHBaseButtonWidget* GenerateUniverseButton;

    void SetGameInstanceTravelData();
    void HandleGenerateUniverseButtonPressed(class UEHBaseButtonWidget* Button);
};

class UEHDemoViewModel : public UEHScreenViewModel
{
};

class UEHDestructibleComponent : public UDestructibleComponent
{
};

class UEHDeviceItem : public UEHInteractableItem
{
    int32 DeviceTypeFlags;
    FStructureSize StructureSize;
    TArray<FTransform> InsideMeshesTransforms;
    TSoftClassPtr<AActor> InteractiveActorClass;
    bool SpawnActorOnlyForInteraction;
    TArray<FEHOutlet> Outlets;
    TArray<FContainerPushDefinition> PushDefinitions;
    TArray<FGeneratedCustomMesh> CustomMeshes;
    TArray<FEHGeneratedReactiveMesh> ReactiveMeshes;
    bool ShouldCreateColliderBlocks;
    bool CreateCollidersForAllDirections;
    bool ColliderCheckOccupiedCoord;
    bool CreatedDeviceRegisteredAsVacant;
    bool ShowDisabledStatePreview;

};

class UEHDeviceObject : public UEHInteractableObject
{
    class AActor* ChildActor;
    bool IsSwitchedOn;
    FEHDeviceObjectOnDeviceSwitchStateChanged OnDeviceSwitchStateChanged;
    void OnDeviceSwitchStateChanged();

    void OnRep_ChildActor();
    void OnDeviceSwitchStateChanged__DelegateSignature();
};

class UEHDevicesComponent : public UActorComponent
{
    TSet<UEHProductionObject*> ProductionObjects;
    TSet<UEHItemsContainer*> StorageObjects;
    TSet<UEHItemsContainer*> PushObjects;
    TMap<class TSubclassOf<UEHInteractableObject>, class FAIArray> AIObjectsMap;
    TMap<class EAIProfession, class FAIArray> VacantAISpecialistsMap;
    TArray<FInteractableObjectArray> WorldResourceObjects;
    TMap<class TSubclassOf<UEHInteractableObject>, class FInteractableObjectArray> VacantInteractibleObjectsMap;
    TMap<class TSubclassOf<UEHInteractableObject>, class FInteractableObjectArray> InteractibleObjectsMap;
    TArray<FResourceAction> ResourceActionsHeap;
    TMap<class UEHItem*, class FContainersArray> StoredResroucesContainersMap;
    TMap<class UEHItem*, class FContainersArray> ProducedResroucesContainersMap;
    TMap<class UEHItem*, class FContainersArray> RequiredResroucesContainersMap;
    TMap<class UEHItem*, class FResourceActionArray> WaitingRequiredResroucesMap;
    FEHDevicesComponentOnCraftingDevicesChanged OnCraftingDevicesChanged;
    void OnDevicesChanged();
    FEHDevicesComponentOnInteractableDevicesChanged OnInteractableDevicesChanged;
    void OnDevicesChanged();
    FEHDevicesComponentOnElectricNetworkChanged OnElectricNetworkChanged;
    void OnNetworkChanged();
    FEHDevicesComponentOnWaterNetworkChanged OnWaterNetworkChanged;
    void OnNetworkChanged();
    FEHDevicesComponentOnSignalNetworkChanged OnSignalNetworkChanged;
    void OnNetworkChanged();
    TArray<class UEHWaterNetwork*> WaterNetworks;
    class UEHBarrierNetwork* BarrierNetwork;
    TArray<class UEHCraftingObject*> ElectricDevices;
    TArray<class UEHElectricNetwork*> ElectricNetworks;
    TArray<class UEHDeviceObject*> SignalDevices;
    TArray<class UEHSignalNetwork*> SignalNetworks;
    TMap<class UEHItem*, class FEHResourceVeinNetworks> ResourceVeinNetworksMap;
    class AEHGrid* Grid;
    TArray<class UEHCraftingObject*> WaterDevices;

    void OnNetworkChanged__DelegateSignature();
    void OnDevicesChanged__DelegateSignature();
    void MarkWaterNetworkStateDirty();
    void HandleLoadGameFinished(bool IsLoadedFromSavegame);
    void HandleContainerItemChange(class UEHItem* Item, class UEHItemsContainer* ItemsContainer, bool IsAdding);
    TArray<class UEHInteractableObject*> GetInteractableObjectsWithTag(TSubclassOf<class UEHInteractableObject> InteractableClass, const FName InteractableTag);
    TArray<class UEHInteractableObject*> GetInteractableObjectsByType(TSubclassOf<class UEHInteractableObject> InteractableClass);
    TArray<class UEHInteractableObject*> GetInteractableObjectsByItem(class UEHItem* Item);
};

class UEHDialogBoxButtonViewModel : public UEHDialogBoxElementViewModel
{
    class UEHBaseButtonViewModel* ButtonViewModel;
    FVisibilityBindable ButtonImageVisibility;
    FName OnClickAction;
    TMap<class EEHDialogBoxButtonImage, class UTexture2D*> ImageMap;

};

class UEHDialogBoxButtonWidget : public UTGUserWidget
{
    class UEHBaseButtonWidget* ButtonWidget;
    class UEHDialogBoxButtonViewModel* DialogBoxButtonViewModel;

};

class UEHDialogBoxCurrencyButtonViewModel : public UEHDialogBoxButtonViewModel
{
    FTextBindable AmountText;

};

class UEHDialogBoxCurrencyButtonWidget : public UEHDialogBoxButtonWidget
{
    class UEHDialogBoxCurrencyButtonViewModel* DialogBoxCurrencyButtonViewModel;

};

class UEHDialogBoxElementViewModel : public UEHViewModel
{
};

class UEHDialogBoxViewModel : public UEHPopupViewModel
{
    FTextBindable EHTitleText;
    FTextBindable EHDescriptionText;
    FTexture2DBindable Image;
    FVisibilityBindable ImageVisibility;
    TArray<class UEHDialogBoxElementViewModel*> DialogElements;

    void HandleAction(const FName& Action);
};

class UEHDialogBoxWidget : public UTGUIPopup
{
    class UTGConfigurableTextBlock* Title;
    class UTGRichTextBlock* Description;
    class UHorizontalBox* ButtonContainer;
    class UEHCloseBox* CloseBox;
    TMap<class EDialogBoxElementType, class TSubclassOf<UTGUserWidget>> DialogBoxElementClasses;
    class UEHDialogBoxViewModel* DialogBoxViewModel;
    TMap<class EEHDialogBoxButtonImage, class UTexture2D*> DialogBoxButtonImageTypes;

    void CreateElements();
};

class UEHDockingStationObject : public UEHConnectorStationObject
{
    FEHDockingStationObjectOnOrderedAstronautsChanged OnOrderedAstronautsChanged;
    void OnOrderedAstronautsChanged();
    class UEHSpaceCarryComponent* SpaceCarryComponent;

    void TransferDroneToDockedStation();
    void OnOrderedAstronautsChanged__DelegateSignature();
    void Multi_IncreaseAstronautsCount();
    void Multi_DecreaseAstronautsCount();
};

class UEHDrillObject : public UEHCraftingObject
{
    bool IsBigDrill;
    class UEHWorldResourceObject* ResourceToMine;
    FIntVector DrillCoord;
    bool IsDrilling;

    void StartDrilling();
    void Multi_NotifyDrillMoved(const FIntVector& Coord);
    TArray<FEHItemInstance> GetProcessedItems();
};

class UEHDropdownViewModel : public UEHInt32OptionViewModel
{
    FStringBindable SelectedOption;
    TArray<FString> Options;
    int32 OptionsCount;
    FInt32Bindable SelectedOptionID;

    void SelectOptionByName(FString OptionName);
    void SelectOption(const int32 OptionID);
};

class UEHEatStationObject : public UEHInteractableServiceObject
{
    FTransform InsideFoodTransform;
    class UEHAIHumanObject* EatingHuman;

    void Multi_HungerRestored();
};

class UEHElectricCable : public UEHPipeObject
{
};

class UEHElectricNetwork : public UEHNetwork
{
    FEHElectricNetworkOnPowerEfficiencyChanged OnPowerEfficiencyChanged;
    void OnPowerEfficiencyChanged();
    int32 ProducedElectricity;
    int32 ConsumedElectricity;
    bool HasPowerBlockout;
    float PowerEfficiency;
    float GenerationEfficiency;

    void UpdateBlackout(bool HasBlackout);
    void OnPowerEfficiencyChanged__DelegateSignature();
};

class UEHElectricityReactor : public UEHCraftingObject
{
};

class UEHElevateBlockItem : public UEHDeviceItem
{
    EElevateTypes ElevateType;

};

class UEHElevateLadderObject : public UEHElevateObject
{
};

class UEHElevateObject : public UEHInteractableObject
{
};

class UEHElevateStairsObject : public UEHElevateObject
{
};

class UEHEnergyReceiverObject : public UEHElectricityReactor
{
};

class UEHEnergyTransmitterObject : public UEHCraftingObject
{
    class UObject* EnergyReceiver;
    FEHEnergyTransmitterObjectOnEnergyReceiverChanged OnEnergyReceiverChanged;
    void OnEnergyChanged();
    FEHEnergyTransmitterObjectOnEnergyTransmitted OnEnergyTransmitted;
    void OnEnergyChanged();
    float TransmittedEnergy;

    void SetTransmittedEnergy(const float TransmittedEnergyIn);
    void SelectEnergyReceiver(class UObject* InEnergyReceiver);
    void OnEnergyChanged__DelegateSignature();
    void CancelEnergyReceiver();
};

class UEHFarmLandObject : public UEHInteractableServiceObject
{
    TSoftObjectPtr<UParticleSystem> PlantCropsParticle;
    TSoftObjectPtr<UParticleSystem> HarvestCropsParticle;
    TSoftObjectPtr<UParticleSystem> WaterCropsParticle;
    class UEHAIFarmerObject* WorkingFarmer;
    class UEHAIFarmerObject* AssignedFarmer;
    TArray<class UEHFarmLandObject*> SiblingsFarmLands;

};

class UEHFarmObject : public UEHSpecialisticProductionObject
{
    class UEHDeviceItem* FarmFieldItem;
    FEHFarmObjectOnPlantChanged OnPlantChanged;
    void OnPlantChanged();

    void OnPlantChanged__DelegateSignature();
    class UEHPlantMeshAsset* GetPlantToPlant();
};

class UEHFlareComponent : public UStaticMeshComponent
{
    FLinearColor FlareColor;

    void UpdateColor(const FLinearColor& Color);
    void SetFlareDirection(const float AngleYAxis, const float AngleZAxis);
};

class UEHFloatOptionViewModel : public UEHOptionViewModel
{

    void OnBindableChanged(float NewValue);
};

class UEHFloorItem : public UEHItem
{
    bool IsCornerFloor;

};

class UEHFloorObject : public UEHInteractableObject
{
};

class UEHFoodItem : public UEHResourceItem
{
    float RestoreHungerRatio;
    float RestoreHungerTime;
    bool IsLiquidFood;

};

class UEHFoundationBottomObject : public UEHFoundationObject
{
};

class UEHFoundationCornerObject : public UEHFoundationObject
{
};

class UEHFoundationObject : public UEHInteractableObject
{
};

class UEHFoundationStationOriginObject : public UEHInteractableObject
{
    FVector OriginLocation;

    void RenameStation(FString StationName);
    void DestroyStation();
};

class UEHGameFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsItemDisabledForDemo(const class UObject* WorldContextObject, class UEHAsset* Item);
    bool IsDebugModeEnabled(const class UObject* WorldContextObject);
    class UEHModularVehicleWidget* GetModularVehicleWidget(const class UObject* WorldContextObject);
    class UEHMapWidget* GetMapWidget(const class UObject* WorldContextObject);
    class UEHHUDWidget* GetHUDWidget(const class UObject* WorldContextObject);
    class AEHHUDGame* GetHUDGame(const class UObject* WorldContextObject);
    class UEHTechTreeComponent* GetEHTechTreeManager(const class UObject* WorldContextObject);
    class UEHSpaceCarryComponent* GetEHSpaceCarryComponent(const class UObject* WorldContextObject);
    class UEHScenarioComponent* GetEHScenarioComponent(const class UObject* WorldContextObject);
    class AEHGamePlayerController* GetEHPlayerController(const class UObject* WorldContextObject);
    class UEHModularVehicles* GetEHModularVehiclesComponent(const class UObject* WorldContextObject);
    class UEHMissionsComponent* GetEHMissionComponent(const class UObject* WorldContextObject);
    class AEHLobbyGameState* GetEHLobbyGameState(const class UObject* WorldContextObject);
    class UEHLayerManager* GetEHLayerManager(const class UObject* WorldContextObject);
    class UEHInventoryComponent* GetEHInventoryComponent(const class UObject* WorldContextObject);
    class UEHGridComponent* GetEHGridComponent(const class UObject* WorldContextObject);
    class AEHGameState* GetEHGameState(const class UObject* WorldContextObject);
    class UEHGameInstance* GetEHGameInstance(const class UObject* WorldContextObject);
    class UEHCheatComponent* GetEHCheatComponent(const class UObject* WorldContextObject);
    class AEHCharacter* GetEHCharacter(const class UObject* WorldContextObject);
    TArray<class AEHGamePlayerController*> GetAllPlayerControllers(const class UObject* WorldContextObject);
    class UEHAchievementsManager* GetAchievementsManager(const class UObject* WorldContextObject);
    bool CheckDebugMode(const class UObject* WorldContextObject, EEHDebugMode DebugMode);
};

class UEHGameInstance : public UTGGameInstance
{
    TSubclassOf<class UEHSaveGame> SavegameClass;
    TArray<FPrimaryAssetType> AssetTypesToLoad;
    uint8 NumberOfPlayers;
    FString SavegameName;
    FName ScenarioName;
    FString randomSeedName;
    FName StreamingID;
    FEHScenarioParams ScenarioParams;
    FEHMPScenarioParams MPScenarioParams;
    FEHServerParams ServerParams;
    bool UseCampaignScenarioParams;
    FEHGameInstanceOnLoadGameFinished OnLoadGameFinished;
    void OnLoadGameFinished(bool IsLoadedFromSavegame);
    FEHGameInstanceOnGameSaved OnGameSaved;
    void OnGameSaved(bool IsAutosave);
    class UEHSaveGame* CurrentSaveGame;
    uint8 PlayerNetworkID;
    TArray<TSoftClassPtr<UObject>> GameplaySoftAssets;
    EEHSoftAsyncLoadPhase SoftAsyncLoadPhase;
    FText SoftAsyncLoadPhaseNames;
    float SoftAsyncLoadingDelay;
    int32 AsyncSoftAssetsCounter;

    void StartAsyncSoftAssetsLoading();
    void ResetState();
    void RecoverySave();
    void QuickSave();
    void QuickLoad();
    void OnLoadGameFinished__DelegateSignature(bool IsLoadedFromSavegame);
    void OnInvalidSavegameVersionLoad();
    void OnGameSaved__DelegateSignature(bool IsAutosave);
    bool IsSandboxGame();
    bool IsLoadGameFinished();
    bool IsAsyncSoftLoadingActive();
    bool HasSavegame();
    float GetSessionTimeInSeconds();
    class UEHScreenManager* GetScreenManager();
    FEHScenarioParams GetScenarioParams(FName Name);
    uint8 GetPlayerNetworkIndex(class AEHPlayerController* PlayerController);
    class UEHLayerManager* GetLayerManager();
    float GetAsyncSoftPhaseProgress();
    FText GetAsyncSoftPhaseName();
    class UEHAchievementsManager* GetAchievementsManager();
    void DebugToast(FString DebugToast);
    void CreateAutosave(int32 AutosaveMaxCount);
};

class UEHGameUserSettings : public UTGGameUserSettings
{
    bool CinematicAlreadyWatched;
    FName LastCompletedScenario;
    bool RestoreOpenWindowState;

    void RunBenchmarkConfigureSettings();
    bool HasBenchmarkResults();
    bool GetRestoreOpenWindowState();
    float GetBenchmarkGPU();
    float GetBenchmarkCPU();
};

class UEHGamepadPreviewFrontWidget : public UTGUserWidget
{
    class UEHSettingsGamepadPreviewFrontViewModel* SettingsGamepadPreviewFrontViewModel;

};

class UEHGamepadPreviewTopWidget : public UTGUserWidget
{
    class UEHSettingsGamepadPreviewViewModel* SettingsGamepadPreviewViewModel;

};

class UEHGameplayEffectAsset : public UEHCustomAsset
{
};

class UEHGammaStepperViewModel : public UEHViewModel
{
    FBoolBindable IsPreviousActive;
    FBoolBindable IsNextActive;
    FTextBindable GammaValue;

    void SelectPreviousOption();
    void SelectOption(const int32 OptionID);
    void SelectNextOption();
};

class UEHGammaStepperWidget : public UEHOptionWidget
{
    float StepperTilesScale;
    float StepperTileSize;
    class UHorizontalBox* StepperTilesHorizontalBox;
    class UTGTile* Previous;
    class UTGTile* Next;
    class UImage* Selector;
    class UEHGammaStepperViewModel* GammaStepperViewModel;

    void HandleGammaValueChanged();
};

class UEHGlobalPointAsset : public UEHCustomAsset
{
    EGlobalPointType GlobalPointType;

};

class UEHGridComponent : public UActorComponent
{
    FVector BlockingHitPosition;
    FIntVector BlockingHitCoords;
    FTransform OverlapISMHitTransform;
    FIntVector OverlapISMHitCoords;
    FTransform OverlapBoxHitTransform;
    FIntVector OverlapBoxHitCoords;
    FIntVector CollectiveBoxHitCoords;
    FVector CollectiveHitLocation;
    class UEHInstancedStaticMeshComponent* TraceBoxComponent;
    class UEHHISMComponent* TraceOverlapISMComponent;
    class AActor* TraceWorldInteractiveActor;
    class UPrimitiveComponent* TraceOverlapPrimitveComponent;
    int32 TraceHitItem;
    FVector DestructibleHitPosition;
    class AActor* DestructibleHitActor;
    FVector SweepLocation;
    class AActor* SweepHitActor;
    int32 BarrierHeight;
    FColor SelectionBoxSelectColor;
    FColor SelectionBoxDeselectColor;
    FColor SelectionBoxConstructColor;
    FLinearColor ValidationBaseIgnoredColor;
    FLinearColor ValidationBaseValidColor;
    FLinearColor ValidationBaseInvalidColor;
    float VoxelTerrainHitZOffset;
    FVector ComponentHitOffset;
    FVector CollectiveHitWallsOffset;
    int32 PreviewItemMaterialSlots;
    float DefaultBlockingHitOffset;
    float AddingRemovingOffset;
    float DestructibleHitOffset;
    FVector PlayerPawnPosition;
    FIntVector PlayerChunkCoords;
    FIntVector ActorCoordinates;
    TArray<FIntVector> ConstructionPreviewCoords;
    TMap<class FIntVector, class AEHChunk*> Chunks;
    TMap<class FIntVector, class AEHChunk*> InactiveU1Chunks;
    TMap<class FIntVector, class AEHChunk*> InactiveU2Chunks;
    TMap<class FIntVector, class AEHChunk*> InactiveU3Chunks;
    TMap<class FIntVector, class AEHChunk*> InactiveU4Chunks;
    FEHInterpolateCellParams InterpolateCellParams;
    float FloorThickness;
    float WallThickness;
    int32 RenderRange;
    float DestroyRenderRangeOffset;
    TSubclassOf<class AEHChunk> ChunkTemplate;
    bool SpawnCosmicEvents;
    TSubclassOf<class AEHGrid> GridTemplate;
    TSubclassOf<class UEHThrusterNetwork> ThrusterNetworkTemplate;
    int32 PlanetoidDetailsDefaultSpawnChances;
    TArray<uint8> PlanetoidDetailDefaultSpawnChanceIndexes;
    FIntVector PlanetoidSizeMin;
    FIntVector PlanetoidRandomGrowthSize;
    class UEHItem* ExtractPreviewItem;
    TArray<float> TerrainTypeSpawnChances;
    float TerrainTypeSpawnChanceSum;
    TArray<float> ShapeTypeSpawnChances;
    float ShapeTypeSpawnChanceSum;
    float CameraLineTraceLength;
    float UnderLineTraceLength;
    bool IsPlayerReady;
    float ClientSimulationSyncTime;
    class UMaterialInterface* HighlightPreviewMaterial;
    class UMaterialInterface* ValidConstructPreviewMaterial;
    class UMaterialInterface* InvalidConstructPreviewMaterial;
    class UMaterialInterface* BGConstructPreviewMaterial;
    class UMaterialInterface* BGConstructPreviewsMaterial;
    class UMaterialInterface* SelectPreviewMaterial;
    class UMaterialInterface* DisabledPreviewMaterial;
    class UMaterialInterface* PreselectPreviewMaterial;
    class UMaterialInterface* DeselectPreviewMaterial;
    class UMaterialInterface* VertexCollapseMaterial;
    float CollapseTime;
    float CollapseSpeed;
    float CollapseTargetRadius;
    float IntensivityDivider;
    class UMaterialInterface* DissolveMaterial;
    class UMaterialInterface* DisintegrationMaterial;
    float DissolveTime;
    float DissolveScale;
    float TargetDissolve;
    float DisolveSpeed;
    FVector DissolveShiftOne;
    FVector DissolveShiftTwo;
    TSubclassOf<class UEHBillboardsLineComponent> BillboardLineTemplates;
    class UTexture2D* BillboardTextures;
    TSubclassOf<class UEHBoxComponent> CollectiveColliderWallTemplate;
    TSubclassOf<class UEHBoxComponent> CollectiveColliderFloorTemplate;
    TSubclassOf<class UEHBoxComponent> SelectionBoxTemplate;
    bool LockGridActions;
    bool CollectiveColliderActive;
    FEHGridComponentOnAssetsLoaded OnAssetsLoaded;
    void OnAssetsLoaded();
    FEHGridComponentOnGameStarted OnGameStarted;
    void OnGameStarted();
    FEHGridComponentOnGameSimulationStarted OnGameSimulationStarted;
    void OnGameStarted();
    FEHGridComponentOnWarehouseItemsChange OnWarehouseItemsChange;
    void OnWarehouseItemsChange();
    FEHGridComponentOnInstanceRotated OnInstanceRotated;
    void OnInstanceRotated();
    FEHGridComponentOnCellSelectionChanged OnCellSelectionChanged;
    void OnCellSelectionChanged();
    FEHGridComponentOnConstructionPreviewChanged OnConstructionPreviewChanged;
    void OnConstructionPreviewChanged(int32 PreviewsCount);
    FEHGridComponentOnItemConstructed OnItemConstructed;
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    FEHGridComponentOnCollectiveColliderStateChanged OnCollectiveColliderStateChanged;
    void OnCollectiveColliderStateChanged(bool ColliderActive);
    FEHGridComponentOnPlayerLeftGrid OnPlayerLeftGrid;
    void OnGridTransitioned(class AEHGrid* Grid);
    FEHGridComponentOnPlayerEnteredGrid OnPlayerEnteredGrid;
    void OnGridTransitioned(class AEHGrid* Grid);
    FEHGridComponentOnPlayerScannerActiveStateChanged OnPlayerScannerActiveStateChanged;
    void OnPlayerScannerActiveStateChanged(bool ScannerActive);
    FEHGridComponentOnMapRadarActiveStateChanged OnMapRadarActiveStateChanged;
    void OnMapRadarActiveStateChanged();
    FEHGridComponentOnPlanetoidLoaded OnPlanetoidLoaded;
    void OnPlanetoidLoaded(FName PlanetoidName);
    FEHGridComponentOnLastStreamingLevelLoaded OnLastStreamingLevelLoaded;
    void OnLastStreamingLevelLoaded();
    FEHGridComponentOnMultiplayerRebaseWorldOrigin OnMultiplayerRebaseWorldOrigin;
    void OnMultiplayerRebaseWorldOrigin();
    TMap<UEHItem*, int32> GlobalWarehouseItemsCounts;
    TSubclassOf<class UEHInstancedStaticMeshComponent> DiagonalWallBoxColliderTemplate;
    TSubclassOf<class UEHInstancedStaticMeshComponent> WallBoxColliderTemplate;
    TSubclassOf<class UEHInstancedStaticMeshComponent> FloorBoxColliderTemplate;
    TSubclassOf<class UEHInstancedStaticMeshComponent> BlockBoxColliderTemplate;
    TArray<FEHGridCellType> SelectedItems;
    bool IsRemoveActionUnlocked;

    void UpgradeCellObject();
    void ToggleScanner(const bool IsScannerActive, const FVector ScanLocation);
    void SwapCellObjectInputs();
    void SpawnChunkTest(const FVector& position);
    void Server_UpgradeCellObjects(const TArray<FEHGridCellType>& SelectedCellItems);
    void Server_UnregisterWatchedItem(class UEHItem* WatchedItem);
    void Server_UndockStation(class AEHGrid* GridReference, class UEHInteractableObject* OriginDockStation);
    void Server_TraceHitAsteroid(const FVector& HitLocation, const int32 HitIndex);
    void Server_TraceCatchAsteroid(class UEHAsteroidsCatcher* AsteroidCatcher, const FVector& HitLocation, const int32 HitIndex);
    void Server_StopDocking(class AEHGrid* GridReference);
    void Server_StartSimulation();
    void Server_SetDesiredMovement(class UEHThrusterNetwork* ThrusterNetwork, const FVector& DesiredMovement);
    void Server_RotateCellObject(const EEHRotationDirection RotationDirection, const TArray<FEHGridCellType>& SelectedCellItems);
    void Server_RequestDeviceData(class UEHDeviceObject* DeviceObject);
    void Server_RequestAsteroidDatas();
    void Server_RemoveProcessedAsteroid(class UEHAsteroidsCatcher* AsteroidCatcher);
    void Server_RemoveCellObjects(const TArray<FEHGridCellType>& SelectedCellItems);
    void Server_RemoveAttractedAsteroid(class UEHAsteroidsCatcher* AsteroidCatcher);
    void Server_RemoveAstronautOrder(class UEHDockingStationObject* DockingStation);
    void Server_RegisterWatchedItem(class UEHItem* WatchedItem);
    void Server_RefillPlayerOxygen(class UEHOxygenGenerator* OxygenGenerator);
    void Server_NotifyPlayerReady();
    void Server_LogicSelectDevice(class UEHSignalObject* SignalObject, class UEHDeviceObject* Device);
    void Server_InitGrid(class AEHGrid* NewGrid);
    void Server_HitExtract(class AEHGrid* GridReference, const FIntVector& HitCoord, const FVector& HitLocation);
    void Server_DockStation(class AEHGrid* GridReference, class UEHInteractableObject* OriginDockStation);
    void Server_DestructConveyorLine(class UEHConnectorStationObject* ConnectorObject, const uint8 LineNumber);
    void Server_CreateStationOrigin(FString StationName, const FVector& Location);
    void Server_ConstructItems(class AEHGrid* GridReference, class UEHItem* Item, const TArray<FIntVector>& ConstructCoords, EEHInstanceRotation Rotation);
    void Server_ConstructConveyorLine(class UEHConnectorStationObject* ConnectorObject, const uint8 LineNumber, const bool ConveyorReverseDirection);
    void Server_CellOpened(class UEHInteractableObject* InteractableObject);
    void Server_CellClosed();
    void Server_AddChildActorForInteraction(class UEHDeviceObject* DeviceObject);
    void Server_AddAstronautOrder(class UEHDockingStationObject* DockingStation);
    void Server_AddAsteroid(const FTransform& Transform, const FEHAsteroidData& AsteroidData);
    void SelectCellObject();
    void RotateCellObject(const EEHRotationDirection RotationDirection);
    void ResetUnderGrid();
    void PerformRotateAction(const EEHRotationDirection RotationDirection);
    void PerformRemoveSelectedAction();
    void PerformRemoveAction();
    void PerformHitAction();
    void PerformFirstGridAction();
    void PerformCancelAction();
    void OpenCellObject();
    void OnWarehouseItemsChange__DelegateSignature();
    void OnSelectionPerformed();
    void OnRemovalPerformed();
    void OnPlayerScannerActiveStateChanged__DelegateSignature(bool ScannerActive);
    void OnPlanetoidLoaded__DelegateSignature(FName PlanetoidName);
    void OnOxygenRefilled(const bool OxygenRefillSuccessful);
    void OnMultiplayerRebaseWorldOrigin__DelegateSignature();
    void OnMapRadarActiveStateChanged__DelegateSignature();
    void OnLastStreamingLevelLoaded__DelegateSignature();
    void OnItemConstructionPerformed(const bool WasConstructionSuccessful);
    void OnItemConstructed__DelegateSignature(class UEHItem* ConstructedItem, FIntVector Coords);
    void OnInvalidItemPick();
    void OnInstanceRotated__DelegateSignature();
    void OnGridTransitioned__DelegateSignature(class AEHGrid* Grid);
    void OnGameStarted__DelegateSignature();
    void OnDockingFailed(const bool DockWasTooFar);
    void OnConstructionPreviewChanged__DelegateSignature(int32 PreviewsCount);
    void OnCollectiveColliderStateChanged__DelegateSignature(bool ColliderActive);
    void OnCellsUpgraded(const bool UpgradeSuccessful, const TArray<FEHItemInstance>& FailedCost);
    void OnCellsRemoved(const bool RemoveSuccessful);
    void OnCellSelectionChanged__DelegateSignature();
    void OnCellOpened(class UEHInteractableObject* InteractableObject);
    void OnAstronautOrderFailed(const bool ShuttleIsHere);
    void OnAssetsLoaded__DelegateSignature();
    void OnAINudge(class UEHInteractableObject* InteractableObject, const FIntVector& CellCoords);
    void NudgeAICellObject();
    void ModifyVoxelBoxDelayed(const FIntVector& BoxMin, const FIntVector& BoxMax, const bool IsAdding, const float Delay);
    void LoadStreamingLevel(class AEHGrid* StreamingGrid, const FName StreamingGridName);
    bool IsRadarActive();
    void InteractWithInteractableObject(class UEHInteractableObject* InteractableObject);
    void InteractCellObject();
    void InitGrid(class AEHGrid* GridReference);
    void HandleUniverseChanged(uint8 PreviousIndex, uint8 NewIndex);
    void HandleRotationItemChange();
    void HandleLoadGameFinished(bool IsLoadedFromSavegame);
    void HandleJobModeChanged();
    void HandleItemChange();
    void HandleInventoryActionChange();
    void HandleGameplayEffectUnlocked();
    void HandleControlModeChanged();
    TArray<FEHItemInstance> GetWarehouseItems();
    TArray<class UEHItem*> GetUsedToConstructResources(class UEHItem* ResourceItem);
    TArray<class UEHItem*> GetUsedByResources(class UEHItem* ResourceItem);
    class UEHInteractableObject* GetTracedInteractable();
    class UEHItem* GetSelectedItemType();
    int32 GetSelectedItemsCount();
    FEHRecipe GetRecipeForItem(class UEHItem* Item, bool& Found);
    FEHRecipe GetRecipeForGlobalPoint(const EGlobalPointType GlobalPoint, bool& Found);
    TArray<class UEHItem*> GetProducedByResources(class UEHItem* ResourceItem);
    FIntVector GetPreviewCoord();
    class AEHGrid* GetGridReference();
    TArray<class UEHItem*> GetCraftedToResources(class UEHItem* ResourceItem);
    TArray<class UEHItem*> GetCraftedFromResources(class UEHItem* ResourceItem);
    FIntVector GetCollectivePreviewCoord();
    FIntVector GetCellCoords(const FVector LocalPosition);
    void ForcePlayerReadyTest();
    void FirstGridActionReleased();
    void FirstGridActionPressed(bool& Interrupted);
    void FinishInteractionCellObject();
    void DebugRemoveAllChunks();
    void ClientCheckSimulationReady();
    void Client_StartSimulation();
    void Client_Start();
    void Client_PayWarehouseItemCost(const TArray<FEHItemInstance>& Cost, class UEHItem* RecyclableItem);
    void Client_OxygenRefilled(const bool OxygenRefillSuccessful);
    void Client_OnEnteredGrid(class AEHGrid* NewGridUnder);
    void Client_NotifyDockingFailed(const bool DockWasTooFar);
    void Client_NotifyAstronautOrderFailed(const bool ShuttleIsHere);
    void Client_ItemConstructed(class UEHItem* Item, const FIntVector& Coord, EEHInstanceRotation Rotation);
    void Client_InteractChildActor(class UEHDeviceObject* DeviceObject);
    void Client_InitDeviceData(class UEHDeviceObject* DeviceObject, const FEHDeviceReplicationData& DeviceReplicationData);
    void Client_InitAsteroidDatas(const TArray<FTransform>& Transforms, const TArray<FEHAsteroidData>& AsteroidDatas, const TArray<FEHAsteroidExtraction>& Extractions);
    void Client_CellObjectsUpgraded(const bool UpgradeSuccessful, const TArray<FEHItemInstance>& FailedCost);
    void Client_CellObjectsRotated();
    void Client_CellObjectsRemoved(const bool RemoveSuccessful);
    void ClearSelection();
    bool CheckVoxelHitInteractionDistance();
    void CheckPlayerReadyState();
    bool CheckBlockingHitInteractionDistance();
    bool CanPayWarehouseItemCost(const TArray<FEHItemInstance>& Cost, int32 Count, class UEHItem* RecyclableItem);
    void CacheDestroyedVoxelSave(const FName VoxelWorldName, const FVoxelCompressedWorldSave& VoxelSave);
    void AssetsLoaded();
    void AddInstanceDelayed(class UEHItem* Item, const FIntVector& CellCoords, const float Delay, class UEHInteractableObject* InteractableObjectToRestore, const EEHInstanceRotation Rotation);
    void AddCellObjects();
};

class UEHGridDataObject : public UEHDataObject
{
    TArray<FSaveGridItemContainer> GridItemsData;
    TArray<FSaveGridItemContainer> InsideAIsData;
    TArray<FSaveGridItem> WaterNetworks;
    TMap<class FIntVector, class FSaveTransferCell> TransferedResources;
    TArray<uint8> ThrusterNetworkData;
    TArray<FIntVector> PlanetoidSurfacePoints;
    TArray<FIntVector> PlanetoidAerialPoints;
    TArray<FIntVector> PlanetoidWalkableRamps0;
    TArray<FIntVector> PlanetoidWalkableRamps90;
    TArray<FIntVector> PlanetoidWalkableRamps180;
    TArray<FIntVector> PlanetoidWalkableRamps270;

};

class UEHGroomComponent : public UGroomComponent
{
};

class UEHHISMCellComponent : public UEHHISMComponent
{
};

class UEHHISMComponent : public UHierarchicalInstancedStaticMeshComponent
{
    EInstanceCellType InstanceType;
    class UEHItem* Item;

    void ResetRenderState();
    void HISMMarkRenderStateDirty();
};

class UEHHUDIndicatorsWidget : public UUserWidget
{
    TSubclassOf<class UEHScreenMarkerWidget> ScreenMarkerWidgetsClasses;
    FVector2D RadialMarkerOffset;
    TMap<class UObject*, class UEHScreenMarkerWidget*> IndicatorsMap;
    class UTGRadialPanel* OffScreenIndicatorsRadial;
    class UOverlay* OnScreenIndicatorsOverlay;

    void RemoveIndicator(class UObject* IndicatedObject);
    void AddIndicator(class UObject* IndicatedObject);
};

class UEHHUDUUIComponent : public UActorComponent
{
};

class UEHHUDWidget : public UTGHUDWidget
{
    class UEHHUDIndicatorsWidget* HUDIndicators;
    class UEHScenarioOverlayWidget* ScenarioOverlay;
    class UEHPhotoModeWidget* PhotoMode;
    class UCanvasPanel* GameCanvas;
    class UUserWidget* PausePrompt;
    class UUserWidget* PlayerActions;
    class UUserWidget* InteractionCircle;
    class UUserWidget* HUDCounters;
    class UUserWidget* PlayerStats;
    TArray<FName> HandledActions;

    TSubclassOf<class UInteractBaseWidget> RemovePopMenu();
    TSubclassOf<class UInteractBaseWidget> RemoveMenu();
    bool AddPopMenu(class UUserWidget* MenuWidget);
    bool AddMenu(class UUserWidget* MenuWidget);
};

class UEHHangar : public UEHCraftingObject
{
    FVector HangarExitOffset;

    void OnHangarDesignerOpen();
};

class UEHHibernationChamberObject : public UEHInteractableServiceObject
{
    float BedRestoreSleepRatio;
    class UEHAIHumanObject* SleepingHuman;

    void Multi_SleepRestored();
};

class UEHHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{

    void HISMMarkRenderStateDirty();
};

class UEHHostGameScreen : public UEHUIScreen
{
    class UEHHostGameViewModel* HostGameViewModel;

    void SetGameInstanceTravelData();
};

class UEHHostGameViewModel : public UEHScreenViewModel
{
};

class UEHHydrogenGenerator : public UEHCraftingObject
{
};

class UEHIceMelter : public UEHCraftingObject
{
};

class UEHIconBarWidget : public UTGUILayer
{
};

class UEHImageToastViewModel : public UEHToastViewModel
{
    FTextBindable ToastTitle;
    FTextBindable ToastDescription;
    FTexture2DBindable ToastImage;
    EEHToastNature ToastNature;

};

class UEHInputBindingDisplayViewModel : public UEHTextOptionViewModel
{
    FVisibilityBindable MissingBindingVisibility;
    FTextBindable BindingText;

};

class UEHInputBindingViewModel : public UEHTextOptionViewModel
{
    FBoolBindable IsInputListeningModeEnabled;
    FTextBindable BindingText;
    FVisibilityBindable EllipsisVisibility;
    FVisibilityBindable TextVisibility;
    FVisibilityBindable MissingBindingVisibility;
    FVisibilityBindable ShiftVisibility;
    FVisibilityBindable CtrlVisibility;
    FVisibilityBindable AltVisibility;

};

class UEHInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
    bool IsBlockingHit;
    bool HitUseInstanceLocation;
    bool ForceConstructionRotation;

};

class UEHInt32OptionViewModel : public UEHOptionViewModel
{

    void OnBindableChanged(int32 NewValue);
};

class UEHInteractableFloorItem : public UEHFloorItem
{
    FIntVector FloorSize;

};

class UEHInteractableItem : public UEHBlockItem
{
    EEHBillboardTemplateType BillboardTemplateType;
    FVector BillboardOffset;
    TSubclassOf<class UEHSSEInitializer> SSEInitializerTemplate;
    class UEHInteractableObject* InteractableObjectTemplate;

    class UEHInteractableObject* GetInteractableTemplate();
    class UEHInteractableObject* GetDefaultInteractableObject(class AActor* GridActor);
};

class UEHInteractableObject : public UObject
{
    FIntVector CachedCellCoord;
    EEHInstanceRotation InstanceRotation;
    int32 MeshIndex;
    TArray<FIntVector> OtherDivecesInsideCells;
    TArray<FName> InstanceTags;
    FEHInteractableObjectOnInteractableRotationChanged OnInteractableRotationChanged;
    void OnInteractableRotationChanged(EEHInstanceRotation Rotation);
    FIntVector CreationCellCoord;
    class UEHItem* FormerItem;
    TArray<FGeneratedCustomMesh> CustomMeshes;

    bool SupportsWater();
    bool SupportsSignal();
    bool SupportsElectricity();
    void SetGrid(class AEHGrid* GridIn);
    void OnInteractableRotationChanged__DelegateSignature(EEHInstanceRotation Rotation);
    FVector GetWorldLocation();
    FVector GetWorldFloorLocation();
    int32 GetSize();
    class AEHGrid* GetGridReference();
    class UEHDeviceItem* GetDeviceFormerItem();
    void DebugDisableBillboard();
    void AddCustomMesh(const FGeneratedCustomMesh& CustomMesh);
};

class UEHInteractableServiceContainer : public UEHStorageObject
{
    TArray<class UEHAIObject*> AIsInside;

};

class UEHInteractableServiceObject : public UEHInteractableObject
{
    FEHInteractableServiceObjectOnAIInsideChanged OnAIInsideChanged;
    void OnAIInsideChanged();
    TArray<class UEHAIObject*> AIsInside;
    uint8 AIInsideCount;

};

class UEHInteractableWallItem : public UEHWallItem
{
    FIntVector WallSize;

};

class UEHInterfaceFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UEHSignalNetwork* Signal_GetNetwork(class UObject* SignalDevice, bool IsIn);
};

class UEHInventoryComponent : public UActorComponent
{
    FEHInventoryComponentOnInventoryItemChange OnInventoryItemChange;
    void OnInventoryItemChange();
    FEHInventoryComponentOnInventoryCategoryChange OnInventoryCategoryChange;
    void OnInventoryItemChange();
    FEHInventoryComponentOnRotationItemChange OnRotationItemChange;
    void OnInventoryItemChange();
    FEHInventoryComponentOnJobModeChanged OnJobModeChanged;
    void OnInventoryItemChange();
    FEHInventoryComponentOnPlayerActionsChanged OnPlayerActionsChanged;
    void OnPlayerActionsChanged();
    FEHInventoryComponentOnResourceItemPicked OnResourceItemPicked;
    void OnResourceItemPicked(FEHItemInstance PickedItem);
    FEHInventoryComponentOnGlobalPointPicked OnGlobalPointPicked;
    void OnGlobalPointPicked(FEHGlobalPointInstance PickedPoint);
    FEHInventoryComponentOnVisibleResourcesCountChanged OnVisibleResourcesCountChanged;
    void OnVisibleResourcesCountChanged();
    FEHItemInstance LiftedItem;
    int32 currentSlotID;
    int32 currentInventoryID;
    EHJobModeType CurrentJobMode;
    int32 CurrentInventoryVariantIndex;
    class UEHItem* CurrentInventoryItem;
    FEHPlayerActionSet CurrentPlayerActionSet;
    FEHPlayerActionSet DefaultNoInteractionPlayerActionSet;
    int32 InventorySlotNumber;
    TArray<FEHPlayerAction> PlayerActions;
    TArray<FName> SlotActionMappings;
    TArray<FName> CategoriesActionMappings;
    EEHInstanceRotation UserConstructionRotation;
    class UEHItem* PlayerContainerItem;
    class UEHCraftingObject* PlayerContainer;
    class UEHItemsContainer* GarbageContainer;
    TArray<class UEHItemsContainer*> HotbarContainers;
    TArray<FContainersMap> ModesItemContainers;
    class UEHItemsContainer* OrderResourcesContainer;
    class UEHItemsContainer* LogicResourcesContainer;
    TArray<FItemArray> DefaultInvnetoryItems;
    TMap<FName, int32> ConstructCategories;
    int32 VisibleResourcesCount;

    void UpdatePlayerActions(const FEHPlayerActionSet& PlayerActionSet);
    void SwapJobMode_SelectOrNone();
    void SetVisibleResourcesCount(const int32 VisibleResourcesCountIn);
    void SetDefaultNoInteractionPlayerActions(const FEHPlayerActionSet PlayerActionsIn);
    void Server_UpdateMathCondition(class UEHDeciderCombinatorObject* DeciderObject, uint8 MathConditionIndex);
    void Server_UpdateConditionValue(class UEHDeciderCombinatorObject* DeciderObject, int32 ConditionValue);
    void Server_UpdateAutoDeactivateCounts(class UEHProductionObject* ProductionObject, const FName Name, const int32 Counts);
    void Server_TransferSlot(class UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, class UEHItemsContainer* ContainerTo, const uint8 IndexTo);
    void Server_TransferItemsForRecipe(class UEHItemsContainer* ContainerTo, const FEHRecipe& Recipe, int32 DesiredCount);
    void Server_TransferItem(class UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, class UEHItemsContainer* ContainerTo, const bool IsEntireStack);
    void Server_TransferAllRecyclablesToInventory(class UEHItemsContainer* ContainerFrom);
    void Server_TransferAllRecyclables(class UEHItemsContainer* ContainerTo);
    void Server_TransferAllItems(class UEHItemsContainer* ContainerFrom);
    void Server_TrainSpecialist(class UEHSchoolObject* SchoolObject, EAIProfession Specialization);
    void Server_ToggleSwitchState(class UEHDeviceObject* DeviceObject);
    void Server_TakeSingleItem(class UEHItemsContainer* Container, const class UEHItem* Item);
    void Server_TakeItems(class UEHItemsContainer* Container, const TArray<FEHItemInstance>& ItemInstances);
    void Server_SwapContainerItems(class UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo);
    void Server_SplitterUpdateSplittingRatios(class UEHLogicSplitterObject* SplitterObject, const TArray<int32>& SplittingRatios);
    void Server_SplitContainerItem(class UEHItemsContainer* Container, const uint8 ItemIndex, const int32 Quantity);
    void Server_SetThrustPowerManual(class UEHThrusterObject* ThrusterObject, const float Power);
    void Server_SetThrustDirectionManual(class UEHThrusterObject* ThrusterObject, const float AngleYAxis, const float AngleZAxis);
    void Server_SetItem(class UEHItemsContainer* Container, const uint8 ItemIndex, const FEHItemInstance& ItemInstance);
    void Server_ResetRequestedItems(class UEHItemsContainer* Container);
    void Server_RemoveSelectedRecipe(class UEHProductionObject* ProductionObject, const FName Name);
    void Server_RemoveRequestedItem(class UEHItemsContainer* Container, class UEHItem* Item);
    void Server_ProduceItems(class UEHProductionObject* ProductionObject, const TArray<FEHItemInstance>& ProducedItems);
    void Server_PickWorldItem(const FEHItemInstance& ItemInstance);
    void Server_PickTransferredItem(class UEHItemsContainer* Container, class UEHItem* Item);
    void Server_PickSingleItem(class UEHItem* Item);
    void Server_PickItems(class UEHItemsContainer* Container, const TArray<FEHItemInstance>& PickedItems);
    void Server_PickItemInstance(class UEHItemsContainer* Container, const FEHItemInstance& PickedItem);
    void Server_PickGlobalPointByChance(const FEHGlobalPointInstance& PointInstance, const float PickChance);
    void Server_PickGlobalPoint(const FEHGlobalPointInstance& PointInstance);
    void Server_OrderContainer(class UEHItemsContainer* Container);
    void Server_MergeContainerItems(class UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo);
    void Server_MergeContainerAllStacks(class UEHItemsContainer* Container);
    void Server_LogicRemoveSelectedResource(class UEHLogicObject* LogicObject, class UEHItem* Item);
    void Server_LogicClearSelectedResources(class UEHLogicObject* LogicObject);
    void Server_LogicAddSelectedResource(class UEHLogicObject* LogicObject, class UEHItem* Item);
    void Server_InvertPushDefinitions(class UEHItemsContainer* Container);
    void Server_IncreaseDedicatedWorkplaceAI(class UEHProductionObject* ProductionObject);
    void Server_DecreaseDedicatedWorkplaceAI(class UEHProductionObject* ProductionObject);
    void Server_ChangeSelectedRecipe(class UEHProductionObject* ProductionObject, const FName Name, const bool ShouldSelect);
    void Server_ChangeResource(class UEHAsteroidsCatcher* AsteroidCatcher, class UEHResourceItem* Item);
    void Server_ChangePlant(class UEHFarmObject* FarmObject, const EHHarvestPlantTypes Plant);
    void Server_ChangeMiningResource(class UEHMineObject* MineObject, EEHMiningResourceType MiningResource);
    void Server_ChangeJobMode(const EHJobModeType JobModeType);
    void Server_ChangeItemOrder(class UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo);
    void Server_ChangeAnimal(class UEHBarnObject* BarnObject, const EHBreedAnimalTypes Animal);
    void Server_CancelTrainedSpecialist(class UEHSchoolObject* SchoolObject, const uint8 AwaitingSpecialistIndex);
    void Server_ApplyThrusterSetupToConnected(class UEHThrusterObject* ThrusterObject);
    void Server_AddSelectedRecipe(class UEHProductionObject* ProductionObject, const FName& Name, const FEHRecipe& Recipe);
    void Server_AddRequestedItem(class UEHItemsContainer* Container, class UEHItem* Item, const uint8 MaxWorkersAssigned, const int32 MaxResources);
    void Server_AddItems(class UEHItemsContainer* Container, const TArray<FEHItemInstance>& Items);
    void SelectSlot(int32 IndexToSelect);
    void SelectCategory(const int32 InventoryID);
    void RemovePlayerAction(const EPlayerActionType PlayerAction, const bool AddToNoInteractionSet);
    void PreviousSelectedItem();
    void PickTracedItem();
    void OnVisibleResourcesCountChanged__DelegateSignature();
    void OnResourceItemPicked__DelegateSignature(FEHItemInstance PickedItem);
    void OnRep_CurrentJobMode();
    void OnPlayerActionsChanged__DelegateSignature();
    void OnLogicAddSelectedResource(const bool Successful);
    void OnInventoryItemChange__DelegateSignature();
    void OnGlobalPointPicked__DelegateSignature(FEHGlobalPointInstance PickedPoint);
    void OnContainerAddRequestedResource(const bool Successful);
    void NoItemsLeft();
    void NextSelectedItem();
    void Multi_UpdateMathCondition(class UEHDeciderCombinatorObject* DeciderObject, uint8 MathConditionIndex);
    void Multi_UpdateConditionValue(class UEHDeciderCombinatorObject* DeciderObject, int32 ConditionValue);
    void Multi_TrainSpecialist(class UEHSchoolObject* SchoolObject, EAIProfession Specialization);
    void Multi_ToggleSwitchState(class UEHDeviceObject* DeviceObject);
    void Multi_TakePoints(class UEHProductionObject* ProductionObject, const TArray<FEHGlobalPointInstance>& PointInstances);
    void Multi_SplitterUpdateSplittingRatios(class UEHLogicSplitterObject* SplitterObject, const TArray<int32>& SplittingRatios);
    void Multi_SetThrustPowerManual(class UEHThrusterObject* ThrusterObject, const float Power);
    void Multi_SetThrustDirectionManual(class UEHThrusterObject* ThrusterObject, const float AngleYAxis, const float AngleZAxis);
    void Multi_ResetRequestedItems(class UEHItemsContainer* Container);
    void Multi_RemoveRequestedItem(class UEHItemsContainer* Container, class UEHItem* Item);
    void Multi_ProduceGlobalPoints(class UEHProductionObject* ProductionObject, const TArray<FEHGlobalPointInstance>& GeneratedPoints);
    void Multi_NotifyTrancheChanged(class UEHAsteroidsCatcher* AsteroidCatcher);
    void Multi_LogicSelectDevice(class UEHSignalObject* SignalObject, class UEHDeviceObject* Device);
    void Multi_LogicRemoveSelectedResource(class UEHLogicObject* LogicObject, class UEHItem* Item);
    void Multi_LogicClearSelectedResources(class UEHLogicObject* LogicObject);
    void Multi_LogicAddSelectedResource(class UEHLogicObject* LogicObject, class UEHItem* Item);
    void Multi_InvertPushDefinitions(class UEHItemsContainer* Container);
    void Multi_ChangeResource(class UEHAsteroidsCatcher* AsteroidCatcher, class UEHResourceItem* Item);
    void Multi_ChangePlant(class UEHFarmObject* FarmObject, const EHHarvestPlantTypes Plant);
    void Multi_ChangeMiningResource(class UEHMineObject* MineObject, EEHMiningResourceType MiningResource);
    void Multi_ChangeAnimal(class UEHBarnObject* BarnObject, const EHBreedAnimalTypes Animal);
    void Multi_CancelTrainedSpecialist(class UEHSchoolObject* SchoolObject, const uint8 AwaitingSpecialistIndex);
    void Multi_ApplyThrusterSetupToConnected(class UEHThrusterObject* ThrusterObject);
    void Multi_AddRequestedItem(class UEHItemsContainer* Container, class UEHItem* Item, const uint8 MaxWorkersAssigned, const int32 MaxResources);
    void InitStartingTool();
    int32 GetSlotsCount();
    int32 GetRecyclablesCount(class UEHItem* Item);
    FEHPlayerAction GetPlayerAction(const EPlayerActionType PlayerActionType);
    class UStaticMesh* GetMeshSelectedMesh();
    class UEHItem* GetCurrentVariantInventoryItem();
    class UEHItemsContainer* GetCurrentContainer();
    EInstanceCellType GetCurrentBuildingMode();
    class UEHItemsContainer* GetContainerForMode(const int32 ModeID, const FName& Subcategory);
    class UEHItemsContainer* GetContainerForItem(const class UEHItem* Item);
    EEHInstanceRotation GetConstructionRotation();
    int32 GetCategoriesCount();
    class UObject* GetActionAnyInteractable();
    int32 FindModeID(const FName& Subcategory);
    void CollectedDirtToast();
    void Client_WorldItemPicked(const FEHItemInstance& ItemInstance);
    void Client_UpdateProductionReplicationState(class UEHProductionObject* ProductionObject, const FEHProductionReplicationData& ProductionReplicationData);
    void Client_UpdateItems(class UEHItemsContainer* Container, const TArray<FEHItemInstance>& Items);
    void Client_UpdateAutoDeactivateCounts(class UEHProductionObject* ProductionObject, const FName Name, const int32 Counts);
    void Client_TransferSlot(class UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, class UEHItemsContainer* ContainerTo, const uint8 IndexTo);
    void Client_TransferItemsForRecipe(class UEHItemsContainer* PlayerContainerFrom, class UEHItemsContainer* ContainerTo, const FEHRecipe& Recipe, int32 DesiredCount);
    void Client_TransferItem(class UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, class UEHItemsContainer* ContainerTo, const bool IsEntireStack);
    void Client_TransferAllItems(class UEHItemsContainer* ContainerFrom, class UEHItemsContainer* ContainerTo, const TArray<FEHItemInstance>& Items);
    void Client_TakeSingleItem(class UEHItemsContainer* Container, const class UEHItem* Item);
    void Client_TakeItems(class UEHItemsContainer* Container, const TArray<FEHItemInstance>& ItemInstances);
    void Client_SwapContainerItems(class UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo);
    void Client_SplitContainerItem(class UEHItemsContainer* Container, const uint8 ItemIndex, const int32 Quantity);
    void Client_RemoveSelectedRecipe(class UEHProductionObject* ProductionObject, const FName Name);
    void Client_ProduceItems(class UEHProductionObject* ProductionObject, const TArray<FEHItemInstance>& ProducedItems);
    void Client_PickTransferredItem(class UEHItemsContainer* Container, class UEHItem* Item);
    void Client_PickSingleItemBulk(const TArray<class UEHItem*>& Items);
    void Client_PickSingleItem(class UEHItem* Item);
    void Client_PickItems(class UEHItemsContainer* Container, const TArray<FEHItemInstance>& PickedItems);
    void Client_PickItemInstance(class UEHItemsContainer* Container, const FEHItemInstance& PickedItem);
    void Client_OrderContainer(class UEHItemsContainer* Container);
    void Client_NotifyLogicAddSelectedResource(const bool Successful);
    void Client_NotifyItemTaken(class UEHItemsContainer* Container, const FEHItemInstance& ItemInstance);
    void Client_NotifyItemAdded(class UEHItemsContainer* Container, const FEHItemInstance& ItemInstance);
    void Client_NotifyCraftingStateChanged(class UEHProductionObject* ProductionObject, const FName Name, bool IsEnabled, const float Ratio, const float PreviouslyCompletedProgress);
    void Client_NotifyAssignedWorplaceAIChanged(class UEHProductionObject* ProductionObject, uint8 AssignedAICount);
    void Client_NotifyAllItemsCleared(class UEHItemsContainer* Container);
    void Client_MergeContainerItems(class UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo);
    void Client_MergeContainerAllStacks(class UEHItemsContainer* Container);
    void Client_IncreaseDedicatedWorkplaceAI(class UEHProductionObject* ProductionObject);
    void Client_GlobalPointPicked(const FEHGlobalPointInstance& PointInstance);
    void Client_DecreaseDedicatedWorkplaceAI(class UEHProductionObject* ProductionObject);
    void Client_AddSelectedRecipe(class UEHProductionObject* ProductionObject, const FName& Name, const FEHRecipe& Recipe);
    void Client_AddItems(class UEHItemsContainer* Container, const TArray<FEHItemInstance>& Items);
    void ClickTransferItem(class UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, class UEHItemsContainer* ContainerTo);
    void ClearToolbarItem();
    void ClearPlayerActions();
    void ChangeVariant(const bool IsNext);
    void ChangeToolbarItemDirectly(class UEHItem* NewItem, const int32 VariantIndex);
    void ChangeRotation(const EEHRotationDirection RotationDirection);
    bool ChangeJobMode(const EHJobModeType JobModeType);
    void ChangeInventoryItem();
    void ButtonItemPressed(const int32 Index, class UEHItemsContainer* PressedContainer);
    void AddPlayerAction(const EPlayerActionType PlayerAction, const bool AddToNoInteractionSet);
};

class UEHItem : public UEHAsset
{
    FString ItemSuffix;
    FPrimaryAssetType ItemType;
    EInstanceCellType InstanceCellType;
    EHConstructionType InventoryMode;
    FName InventorySubcategoryName;
    TArray<FEHItemSlotMesh> SlotMeshes;
    EHConstructParticleType ConstructParticleType;
    EHCollectiveConstructionType CollectiveConstructionType;
    bool ShouldAddModeItem;
    TSoftClassPtr<UEHInstancedStaticMeshComponent> CustomConstructionCollider;
    bool BlockVisibilityCollision;
    float ZOffset;
    FVector Scale;
    FVector Dimensions;
    FVector2D DimensionConveyScale;
    bool UsesBlendingAnimations;
    int32 DynamicMaterialInstanceID;
    int32 NumCustomDataFloats;
    int32 CustomDepthStencilValue;
    TArray<class UEHItem*> VariantItems;
    TArray<class UEHItem*> RelatedItems;
    TSoftObjectPtr<UStaticMesh> PreviewMesh;
    bool ShowInDetailedList;
    TMap<class EPlayerActionType, class EHJobModeType> ActonJobModes;
    EHConstructRotationType ConstructRotationType;
    bool CanSelect;
    bool CanOpen;
    bool CanRemove;
    bool CanInteract;
    bool CanUpgrade;
    bool CanExtract;
    bool CanFly;
    bool CanPick;
    bool IgnoredWhenSaving;
    FText InteractText;
    TSoftClassPtr<UInteractBaseWidget> InteractWidgetClass;
    bool RequiresFloorForConstruction;
    bool IsBlockingCoord;
    bool RandomizeYaw;
    bool RandomItemMesh;
    float RandomScaleFactor;
    float RandomInclinationFactor;
    bool ReceiveDecals;
    bool AffectDistanceFieldLighting;
    TArray<FEHItemInstance> Cost;
    float ConstrcutionBasicScienceReceiveChance;
    int32 MaxStackSize;
    class UEHItem* UpgradeItem;
    bool UsePreviewMeshForEditor;

    bool HasVariants();
    FString GetIdentifierString();
    FText GetFullName();
    bool CanRotate();
};

class UEHItemTooltipWidget : public UUserWidget
{

    bool SupportsSplit();
    void Init(const FEHItemInstance& ItemInstance);
};

class UEHItemVariantsWidget : public UUserWidget
{
    FEHItemInstance Item;
    class UHorizontalBox* VariantsHorizontal;

    void OnContextChanged();
    void Init(const FEHItemInstance& InItem);
};

class UEHItemViewModel : public UEHViewModel
{
};

class UEHItemsContainer : public UEHDeviceObject
{
    TArray<FEHItemInstance> Items;
    bool IsPreviewContainer;
    bool IsRemovable;
    EEHSlotDragType SlotDragType;
    TMap<UEHItem*, int32> ItemsLookupCounts;
    bool HasInvertedPushDefinitions;
    TArray<FEHRequestedResource> RequestedResources;
    FEHItemsContainerOnItemsChange OnItemsChange;
    void OnItemsChange();
    FEHItemsContainerOnRequestedResourcesChanged OnRequestedResourcesChanged;
    void OnItemsChange();
    FEHItemsContainerOnItemSet OnItemSet;
    void OnItemSet(const int32 Index);
    FEHItemsContainerOnItemsPushedOut OnItemsPushedOut;
    void OnItemsPushed(class UEHItem* Item, const FIntVector PushCoord);
    FEHItemsContainerOnItemsPushedIn OnItemsPushedIn;
    void OnItemsPushed(class UEHItem* Item, const FIntVector PushCoord);
    FEHItemsContainerOnItemsDelivered OnItemsDelivered;
    void OnItemsDelivered(FEHItemInstance DeliveredItems);
    FEHItemsContainerOnTransferedItemsForRecipe OnTransferedItemsForRecipe;
    void OnTransferedItemsForRecipe(FEHRecipe Recipe, const int32 Count);

    void PickItem(class UEHItem* Item);
    void OnTransferedItemsForRecipe__DelegateSignature(FEHRecipe Recipe, const int32 Count);
    void OnItemsPushed__DelegateSignature(class UEHItem* Item, const FIntVector PushCoord);
    void OnItemSet__DelegateSignature(const int32 Index);
    void OnItemsDelivered__DelegateSignature(FEHItemInstance DeliveredItems);
    void OnItemsChange__DelegateSignature();
    void NotifyItemsChanged();
    void Multi_TakeSingleItem(const class UEHItem* Item);
    void MoveSingleItemToInventory(class UEHItem* Item);
    void InvertPushDefinitions();
    bool HasPushDefinitions();
    bool HasItem(const FEHItemInstance& ItemInstance);
    bool HasAnyValidItem();
    bool CheckTakingItems(const TArray<FEHItemInstance>& ItemInstances);
    void AddItems(const TArray<FEHItemInstance>& ItemInstences);
    void AddItem(const FEHItemInstance& ItemInstance);
};

class UEHJobModeAsset : public UEHCustomAsset
{
    EHJobModeType JobModeType;
    TSoftObjectPtr<UStaticMesh> ToolMesh;
    TSoftObjectPtr<UStaticMesh> MP_ToolMesh;
    FText ShortcutText;

};

class UEHKitchenObject : public UEHSpecialisticCraftingObject
{
};

class UEHLabeledInteractiveWidget : public UTGUserWidget
{
    FText DefaultLabelText;
    FEHLabeledInteractiveWidgetOnClickEvent OnClickEvent;
    void OnClickEvent();
    class UEHLabeledInteractiveWidgetViewModel* DefaultLabeledWidgetViewModel;
    class UTGConfigurableTextBlock* ConfigurableLabel;
    class UTGInputActionWidget* InputPrompt;
    class UTGWidget* InteractiveArea;
    class UEHLabeledInteractiveWidgetViewModel* LabeledWidgetViewModel;

    void SetBPDataContext(class UTGViewModel* InViewModel);
    void OnClickEvent__DelegateSignature();
    void HandleClicked();
};

class UEHLabeledInteractiveWidgetViewModel : public UTGViewModel
{
    FTextBindable LabelText;
    FTextBindable SecondaryLabel;
    FVisibilityBindable Visibility;
    bool ShowActionButton;

};

class UEHLaboratoryObject : public UEHSpecialisticCraftingObject
{
};

class UEHLayerManager : public UTGUILayerManager
{
    TMap<class EEHUIOverlayID, class TSoftClassPtr<UTGUILayer>> OverlayTemplateMap;
    TMap<class EEHUIUnderlayID, class TSoftClassPtr<UTGUILayer>> UnderlayTemplateMap;
    int32 OverlayContainerZOrder;
    int32 UnderlayContainerZOrder;
    TArray<class UTGUILayer*> PinnedOverlays;
    TArray<class UTGUILayer*> PinnedUnderlays;
    class UDataTable* ButtonBarDataTable;
    TMap<class EToastImageType, class UTexture2D*> ToastImageReferences;
    TSoftObjectPtr<USoundBase> ToastSounds;
    TSoftObjectPtr<USoundBase> TechnologyToastSound;
    class UEHToastContainerViewModel* ToastContainerViewModel;
    class UEHModsListViewModel* ModsListViewModel;

    void SetDataContextForOpenUnderlay(const EEHUIUnderlayID UnderlayID, class UTGViewModel* ViewModel);
    void SetDataContextForOpenOverlay(const EEHUIOverlayID OverlayID, class UTGViewModel* ViewModel);
    void QueueTechnologyToast(class UEHTechnologyAsset* TechnologyAsset, const float ToastDuration);
    void QueueImageToast(const FText& InToastTitle, const FText& InToastDescription, class UTexture2D* InIcon, const EEHToastNature Nature, const float ToastDuration, const bool PlaySound);
    class UTGUILayer* OpenUnderlay(const EEHUIUnderlayID UnderlayID, class UTGViewModel* ViewModel);
    class UTGUILayer* OpenOverlay(const EEHUIOverlayID OverlayID, class UTGViewModel* ViewModel);
    class UTGUILayer* OpenModsHUBWidget(FString ModToNavigate);
    void OpenAllAvailableLayers();
    bool IsOverlayOpen(const EEHUIOverlayID OverlayID);
    void CloseUnderlay(const EEHUIUnderlayID UnderlayID, bool bRelease);
    void CloseOverlay(const EEHUIOverlayID OverlayID, bool bRelease);
    void CloseModsHUBWidget();
};

class UEHLightBlockItem : public UEHDeviceItem
{
    TSubclassOf<class ULightComponent> LightTemplate;
    FTransform LightOffset;

};

class UEHLightObject : public UEHDeviceObject
{
};

class UEHLoadScreen : public UEHUIScreen
{
    class UEHSaveLoadViewModel* LoadViewModel;
    class UEHSaveLoadListWidget* LoadList;
    class UEHBaseButtonWidget* LoadButton;
    class UEHBaseButtonWidget* RemoveFileButton;
    class UEHBaseButtonWidget* RemoveAllButton;

    void HandleRemoveFileClicked(class UEHBaseButtonWidget* ButtonWidget);
    void HandleRemoveAllClicked(class UEHBaseButtonWidget* ButtonWidget);
    void HandleLoadButtonClicked(class UEHBaseButtonWidget* ButtonWidget);
    void HandleBack();
};

class UEHLogicBlockerObject : public UEHLogicObject
{
};

class UEHLogicFilterObject : public UEHLogicObject
{
};

class UEHLogicItem : public UEHDeviceItem
{
};

class UEHLogicObject : public UEHDeviceObject
{
    TArray<class UEHItem*> SelectedResources;
    FEHLogicObjectOnSelectedResourcesChanged OnSelectedResourcesChanged;
    void OnSelectedResourcesChanged();

};

class UEHLogicPusherObject : public UEHLogicObject
{
};

class UEHLogicSplitterObject : public UEHLogicObject
{
    uint8 DirectionIndex;
    TArray<int32> DirectionValues;
    TArray<int32> SplittingRatios;

    void UpdateSplittingRatios(const TArray<int32>& SplittingRatios);
    TArray<float> GetPercentageRatios();
};

class UEHMainMenuScreen : public UEHUIScreen
{
    float PressAnimationTime;
    class UEHMenuWidget* MenuWidget;
    class UEHMainMenuViewModel* MainMenuViewModel;

    void OpenMainMenuByType(const EMenuType MenuType);
};

class UEHMainMenuViewModel : public UEHScreenViewModel
{
    class UEHMenuViewModel* MenuViewModel;
    class UEHMenuViewModel* LastOpenedMenuViewModel;
    class UEHMenuContextualPreviewViewModel* MenuContextualPreviewViewModel;
    TArray<class UEHMenuViewModel*> PinnedMenuViewModels;

};

class UEHManufacturer : public UEHCraftingObject
{
};

class UEHMapWidget : public UUserWidget
{
    class UCanvasPanel* RootCanvas;

};

class UEHMenuContextualPreviewViewModel : public UEHViewModel
{
    FInt32Bindable ContextSwitcher;
    FTextBindable CompletedCount;
    FTextBindable totalCount;
    FStringBindable MainImageName;
    FStringBindable ThumbnailImageName;
    FStringBindable GameImageName;
    FStringBindable DifficultyImageName;
    FTextBindable CompletedLabel;
    FTextBindable GameName;
    FTextBindable Title;
    FTextBindable Description;

};

class UEHMenuContextualPreviewWidget : public UTGUserWidget
{
    class UEHMenuContextualPreviewViewModel* MenuContextualPreviewViewModel;

};

class UEHMenuOptionViewModel : public UEHViewModel
{
    FInt32Bindable OptionID;
    FTextBindable OptionName;

};

class UEHMenuOptionWidget : public UTGUserWidget
{
    class UTGWidget* Interactive;
    class UEHMenuViewModel* MenuViewModel;

    void HandleFocusReceived();
    void HandleClicked();
};

class UEHMenuViewModel : public UEHViewModel
{
    class UEHButtonBarViewModel* ButtonBarViewModel;
    TArray<class UEHMenuViewModel*> ChildrenViewModels;
    TArray<class UEHBaseButtonViewModel*> ButtonViewModels;
    FTextBindable ParentCategoryName;
    FTextBindable CategoryName;
    FTextBindable MenuName;
    FTextBindable Title;
    FTextBindable Description;
    FTextBindable ToolTip;
    FVisibilityBindable LogoVisibility;
    FVisibilityBindable TitleVisibility;
    FVisibilityBindable CampaignPreviewVisiblility;
    TArray<EButtonBarAction> Options;

    void HandlePopupAction(FName Action);
};

class UEHMenuWidget : public UTGUserWidget
{
    TSubclassOf<class UEHBaseButtonWidget> BaseButtonWidgetClass;
    FEHBaseButtonProperties BaseButtonProperties;
    class UVerticalBox* VerticalMenuOptions;
    TSoftObjectPtr<USoundBase> MenuEnterAudio;
    TSoftObjectPtr<USoundBase> MenuBackAudio;
    class UEHMenuViewModel* MenuViewModel;

    void OnEnter();
    void Back();
};

class UEHMetamorphosisDeviceItem : public UEHDeviceItem
{
    TArray<FCellTransformation> CellTransformations;
    EEHMetamorphosisType MetamorphosisType;

};

class UEHMineObject : public UEHSpecialisticProductionObject
{
    FEHMineObjectOnMiningResourceChanged OnMiningResourceChanged;
    void OnMiningResourceChanged();
    TArray<class UEHAIMinerObject*> InsideAIMiners;
    TArray<class UEHInteractableObject*> DistanceResourcesCached;

    void OnMiningResourceChanged__DelegateSignature();
    class UEHWorldItem* GetResourceToMine();
    bool ChangeMiningResource(const EEHMiningResourceType InMiningResource);
};

class UEHMissionSelectionScreen : public UEHUIScreen
{
    class UEHMissionSelectionViewModel* MissionSelectionViewModel;

};

class UEHMissionSelectionViewModel : public UEHScreenViewModel
{
};

class UEHMissionsComponent : public UMOMissionsManager
{

    void FailCurrentScenario(const EEHScenarioFailureReason ScenarioFailureReason);
    void CompleteCurrentScenario();
};

class UEHModsBrowsedListViewModel : public UEHViewModel
{
    FTextBindable CategoryName;
    TArray<class UEHModsBrowsedOptionViewModel*> ModsBrowsedOptionViewModels;
    class UEHModsBrowsedOptionViewModel* CurrentOption;
    FEHModsBrowsedListViewModelOnModsOptionSelected OnModsOptionSelected;
    void OnModsOptionSelected(class UTGViewModel* ViewModel);
    FEHModsBrowsedListViewModelOnModsSearchCompleted OnModsSearchCompleted;
    void OnModsSearchCompleted();
    FEHModsBrowsedListViewModelOnModInstalled OnModInstalled;
    void OnModInstalled();

    void OnModsSearchCompleted__DelegateSignature();
    void OnModsOptionSelected__DelegateSignature(class UTGViewModel* ViewModel);
    void OnModInstalled__DelegateSignature();
    void HandleInstalCompleted(bool Success, FString Name);
};

class UEHModsBrowsedOptionViewModel : public UEHViewModel
{
    FCFCoreMod CoreMod;
    FEHModsBrowsedOptionViewModelOnInstalProgressChanged OnInstalProgressChanged;
    void OnInstalProgressChanged(int32 progress);
    FEHModsBrowsedOptionViewModelOnInstalCompleted OnInstalCompleted;
    void OnInstalCompleted(bool Success, FString Name);

};

class UEHModsBrowsedOptionWidget : public UTGUserWidget
{
    TMap<class ESettingWidgetType, class TSubclassOf<UEHOptionWidget>> SettingsWidgetMap;
    class UTGWidget* InteractiveArea;
    class UEHModsBrowsedOptionViewModel* ModsOptionViewModel;

    void UpdateSelection(const bool IsSelected);
    void SelectOption();
    void HandleUnhovered();
    void HandleSelectionChange(const bool IsSelected);
    void HandleOptionsChange();
    void HandleOptionButtonPressed(class UTGViewModel* InViewModel);
    void HandleIsEnabledChange(const bool IsEnabled);
    void HandleHovered();
    void HandleClicked();
};

class UEHModsBrowsedWidget : public UTGUserWidget
{
    TSubclassOf<class UUserWidget> ModsOptionWidgetClass;
    TEnumAsByte<EHorizontalAlignment> HortizontalSlotAligment;
    float ScrollTimeThreshold;
    float MouseMovementThreshold;
    class UVerticalBox* VerticalModsList;
    class UScrollBox* ScrollBox;
    class UEHModsBrowsedListViewModel* ModsBrowsedListViewModel;
    FMargin OptionsPadding;
    FMargin ExtraIndentPadding;
    float ScrollPadding;
    bool ShouldScrollAnimate;
    EDescendantScrollDestination DescendantScrollDestination;

    void HandleUserScrolled(float CurrentOffset);
    void HandleModsSearchCompleted();
};

class UEHModsHUBWidget : public UTGUILayer
{
    TSubclassOf<class UUserWidget> ModsOptionWidgetClass;
    class UVerticalBox* VerticalModsHUB;
    class UScrollBox* ScrollBox;
    class UEHModsListViewModel* ModsListViewModel;
    EDescendantScrollDestination DescendantScrollDestination;

    void SelectTabByName(FString TabName);
    void OnModsHUBOptionSelected(const FUGCPackage& Package, class UACModConfig* ModConfig);
};

class UEHModsListViewModel : public UEHViewModel
{
    FTextBindable CategoryName;
    TArray<class UEHModsOptionViewModel*> ModsOptionViewModels;
    class UEHModsOptionViewModel* CurrentOption;
    FEHModsListViewModelOnModsOptionSelected OnModsOptionSelected;
    void OnModsOptionSelected(class UTGViewModel* ViewModel);

};

class UEHModsListWidget : public UTGUserWidget
{
    TSubclassOf<class UUserWidget> ModsOptionWidgetClass;
    TEnumAsByte<EHorizontalAlignment> HortizontalSlotAligment;
    float ScrollTimeThreshold;
    float MouseMovementThreshold;
    class UVerticalBox* VerticalModsList;
    class UScrollBox* ScrollBox;
    class UEHModsListViewModel* ModsListViewModel;
    FMargin OptionsPadding;
    FMargin ExtraIndentPadding;
    float ScrollPadding;
    bool ShouldScrollAnimate;
    EDescendantScrollDestination DescendantScrollDestination;

    void HandleUserScrolled(float CurrentOffset);
};

class UEHModsOptionViewModel : public UEHViewModel
{
    FTextBindable OptionName;
    FUGCPackage UGCPackage;
    TArray<class TSubclassOf<AActor>> ActorReplacements;
    TArray<class UClass*> Classes;
    TArray<FName> Maps;
    class UACModConfig* ModConfig;

};

class UEHModsOptionWidget : public UTGUserWidget
{
    class UTGWidget* InteractiveArea;
    class UEHModsOptionViewModel* ModsOptionViewModel;

    void UpdateSelection(const bool IsSelected);
    void SelectOption();
    void HandleUnhovered();
    void HandleSelectionChange(const bool IsSelected);
    void HandleOptionsChange();
    void HandleOptionButtonPressed(class UTGViewModel* InViewModel);
    void HandleIsEnabledChange(const bool IsEnabled);
    void HandleHovered();
    void HandleClicked();
};

class UEHModsScreen : public UEHUIScreen
{
    class UEHModsViewModel* ModsViewModel;
    class UEHModsListWidget* ModsList;
    class UEHModsBrowsedWidget* BrowseModsList;
    class UEHBaseButtonWidget* InstalModButton;
    class UEHBaseButtonWidget* RemoveModButton;
    class UEHBaseButtonWidget* OpenModButton;

    void HandleRemoveModClicked(class UEHBaseButtonWidget* ButtonWidget);
    void HandleOpenModClicked(class UEHBaseButtonWidget* ButtonWidget);
    void HandleInstallModButtonClicked(class UEHBaseButtonWidget* ButtonWidget);
    void HandleBack();
};

class UEHModsViewModel : public UEHScreenViewModel
{
    class UEHModsListViewModel* ModsListViewModel;
    class UEHModsBrowsedListViewModel* ModsBrowsedListViewModel;

    void HandlePopupAction(FName Action);
    void HandleModsOptionSelected(class UTGViewModel* InViewModel);
    void HandleModInstalled();
};

class UEHModularVehicleWidget : public UUserWidget
{
    class UCanvasPanel* RootCanvas;

};

class UEHModularVehicles : public UActorComponent
{
    TArray<FEHVehicleDefinition> DefaultVehicles;
    FEHVehicleTypeData VehiclesDatas;
    FEHVehiclePartTypeData VehiclesPartDatas;
    TArray<FText> PartMirrorNames;
    TMap<class FName, class FEHPartSuffix> PartSuffixes;
    TArray<FEHVehicleDefinition> CustomVehicles;
    int32 SelectedVehicleID;
    int32 SelectedVehiclePartID;
    bool IsAddingPart;
    int32 LastVehicleDefinitionID;
    int32 LastVehicleInstanceID;
    FEHModularVehiclesOnVehicleModified OnVehicleModified;
    void OnVehicleModified(int32 VehicleID);
    FEHModularVehiclesOnVehiclesDataChanged OnVehiclesDataChanged;
    void OnVehicleChanged();
    FEHModularVehiclesOnSelectedVehicleChanged OnSelectedVehicleChanged;
    void OnVehicleChanged();
    FEHModularVehiclesOnSelectedVehiclePartChanged OnSelectedVehiclePartChanged;
    void OnVehicleChanged();
    TMap<class EEHVehicleType, class FEHPawns> VehiclesMap;

    void UpdateVehicleName(FString VehicleName);
    void UpdatePartSize(const FVector& Size);
    void UpdatePartScheme(const uint8 SchemeID);
    void UpdatePartPlacement(const FVector& Placement);
    void UpdatePartColors(const TArray<FLinearColor>& Colors);
    void UpdateMirrorMode(const EEHVehiclePartMirrorType MirrorType, const bool IsSize);
    void UnregisterVehicle(const EEHVehicleType Type, class APawn* Vehicle);
    void SelectVehiclePartByTypeAndTag(const EEHVehiclePartType Type, const FName Tag);
    void SelectVehiclePart(const int32 VehiclePartID, const bool IsAdding);
    void SelectVehicle(const int32 VehicleID);
    void RemoveVehicle();
    void RemoveSelectedPart();
    void RegisterVehicle(const EEHVehicleType Type, class APawn* Vehicle);
    void OnVehicleModified__DelegateSignature(int32 VehicleID);
    void OnVehicleChanged__DelegateSignature();
    bool IsVehicleUnlocked(const EEHVehicleType VehicleType);
    bool IsDefaultID(const int32 ID);
    bool IsActionPossible(const FEHVehicleTypeData& VehicleData, const EEHVehicleAction VehicleAction);
    void HandleItemUnlocked();
    FText GetVehiclePartMirrorText(const EEHVehiclePartMirrorType Mirror);
    FEHVehiclePartTypeData GetVehiclePartData(const EEHVehiclePartType VehiclePartType);
    FEHVehicleDefinition GetVehicleDefinition(const int32 VehicleID);
    FEHVehicleTypeData GetVehicleData(const EEHVehicleType VehicleType);
    FEHPartSuffix GetSuffixForName(const FName& Name);
    FEHVehicleDefinition GetSelectedVehicleDetails();
    FEHVehicleTypeData GetSelectedVehicleData();
    TArray<FEHItemInstance> GetSelectedVehicleCost();
    FEHVehiclePart GetSelectedPartDetails();
    EEHVehiclePartType GetSelectedCompatiblePartType();
    void DuplicateVehicle();
    bool CanSelectedPartBeRemoved();
    bool CanAddPart(const EEHVehiclePartType VehiclePartType);
    void AddPart(const FTransform& Transform, const EEHVehiclePartType VehiclePartType);
};

class UEHMultiplayerScreen : public UEHUIScreen
{
    class UEHMultiplayerViewModel* MultiplayerViewModel;
    class UEHBaseButtonWidget* HostGameButton;
    class UEHSaveLoadListWidget* LoadList;
    class UEHBaseButtonWidget* RemoveFileButton;

    void UpdateButtonBar(bool ShowBack);
    void SetGameInstanceTravelData();
    void HandleRemoveFileClicked(class UEHBaseButtonWidget* ButtonWidget);
    void HandleHostGameButtonPressed(class UEHBaseButtonWidget* Button);
    FString GetSelectedSavegameName();
};

class UEHMultiplayerViewModel : public UEHSaveLoadViewModel
{
};

class UEHNetwork : public UObject
{
};

class UEHNotificationDialogViewModel : public UEHViewModel
{
    FTextBindable TitleText;
    FTextBindable BodyText;

};

class UEHNotificationDialogWidget : public UTGUILayer
{
    class UWidgetAnimation* ExitAnimation;
    class UEHNotificationDialogViewModel* NotificationDialogViewModel;
    class UTGWidget* MouseBlocker;

};

class UEHOptionButtonWidget : public UEHOptionWidget
{
    class UTGWidget* InteractiveArea;

    void HandleClicked();
};

class UEHOptionDropdownWidget : public UEHOptionWidget
{
    class UComboBoxString* ComboBox;
    class UEHDropdownViewModel* DropdownViewModel;

    void HandleSelectionOpened();
    void HandleSelectionChanged(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
};

class UEHOptionInputBindingDisplayWidget : public UEHOptionWidget
{
    class UTGButton* PrimaryBinding;
    class UEHInputBindingDisplayViewModel* BindingViewModel;

    void HandleOnClicked();
};

class UEHOptionInputBindingWidget : public UEHOptionWidget
{
    float MouseWheelUpThreshold;
    float MouseWheelDownThreshold;
    class UTGButton* PrimaryBinding;
    class UEHInputBindingViewModel* BindingViewModel;

    void HandleOnClicked();
};

class UEHOptionRadioButtonsWidget : public UEHOptionWidget
{
    class UHorizontalBox* HorizontalButtonBox;
    TSubclassOf<class UEHRadioButton> RadioButtonClass;
    class UEHRadioButtonsViewModel* RadioButtonsViewModel;

    void UpdateToggledRadiobuttonVisual(const uint8 RadioButtonID);
    void HandleToggleStateChanged(uint8 RadioButtonID, bool bIsToggled);
};

class UEHOptionSliderWidget : public UEHOptionWidget
{
    class USlider* Slider;
    class UTGEditableTextBox* Text;
    class UEHSliderViewModel* SliderViewModel;
    float HoldFirstDelay;
    float HoldInterval;

    void SetSliderValue(float ChangedValue);
    void HandleTextComitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void HandleSliderValueChanged(float ChangedValue);
};

class UEHOptionStepperWidget : public UEHOptionWidget
{
    class UTGTile* Previous;
    class UTGTile* Next;
    class UTGConfigurableTextBlock* Text;
    class UEHStepperViewModel* StepperViewModel;

};

class UEHOptionToggleWidget : public UEHOptionWidget
{
    class UTGCheckBox* CheckBox;
    class UEHToggleViewModel* ToggleViewModel;

    void HandleToggleStateChanged(bool bIsToggled);
};

class UEHOptionViewModel : public UEHViewModel
{
};

class UEHOptionWidget : public UTGUserWidget
{

    void NavigationRight();
    void NavigationLeft();
    void NavigationConfirm();
    FText GetOptionName();
};

class UEHOxygenGenerator : public UEHCraftingObject
{
    FEHOxygenGeneratorOnPlayerExecuteRefillOxygen OnPlayerExecuteRefillOxygen;
    void OnPlayerExecuteAction(bool IsSuccessful);
    class UEHItem* ManualRefillItem;
    class UEHItem* BarrierRefillItem;
    float OxygenAmountToRefill;

};

class UEHPanelNavigationWidget : public UUserWidget
{
    class UNamedSlot* PanelWidgetSlot;

};

class UEHParticleSystemComponent : public UParticleSystemComponent
{

    void ForceResetParticle();
};

class UEHPathfindingComponent : public UActorComponent
{
    FEHPathfindingComponentOnRequestedPathFound OnRequestedPathFound;
    void OnRequestedPathFound(const TArray<FIntVector>& Path);

    void RequestFindPath(FPathFindRequest PathFindRequest);
    void OnRequestedPathFound__DelegateSignature(const TArray<FIntVector>& Path);
    bool IsRunning();
};

class UEHPauseOptionViewModel : public UEHViewModel
{
};

class UEHPauseScreen : public UEHUIScreen
{
    class UEHPauseViewModel* PauseViewModel;
    class UVerticalBox* VerticalPauseOptions;
    FEHBaseButtonProperties BaseButtonProperties;
    TSubclassOf<class UEHBaseButtonWidget> BaseButtonWidgetClass;

};

class UEHPauseViewModel : public UEHScreenViewModel
{
    TArray<class UEHBaseButtonViewModel*> ButtonViewModels;
    FName PauseMenuName;

};

class UEHPhotoModeWidget : public UUserWidget
{

    void TakeScreenshot(const bool ShowUI, const int32 ResolutionID);
    void ScreenshotCaptured(FString ScreenshotName);
};

class UEHPickerObject : public UEHItemsContainer
{
};

class UEHPillarObject : public UEHInteractableObject
{
    FIntVector ColliderSupportCoord;

};

class UEHPipeObject : public UEHInteractableObject
{
};

class UEHPlanetoidDestructibleItem : public UEHDeviceItem
{
    TSoftObjectPtr<UMaterialInterface> DestructibleMaterial;
    class UEHItem* DestructibleResoruce;
    uint8 DstructibleSpawnChance;
    float SpawnDensity;
    bool IsUniqueCollectableItem;
    float StartNoiseRange;
    float MapOutNoiseRangeChance;
    float MinChanceToSpawn;
    float RandomizeSwappingChance;

};

class UEHPlanetoidGenerationObject : public UEHCelestialGenerationObject
{
};

class UEHPlanetoidVisualItem : public UEHVisualItem
{
    uint8 VisualSpawnChance;
    float SpawnDensity;
    float StartNoiseRange;
    float MapOutNoiseRangeChance;
    float MinChanceToSpawn;
    float RandomizeSwappingChance;

};

class UEHPlantMeshAsset : public UEHVisualMeshAsset
{
    EHHarvestPlantTypes HarvestPlantType;
    bool IsPlantBig;
    float GrowingPhaseTime;
    uint8 ConsumedPhaseWater;
    class UEHItem* ProducedResource;

};

class UEHPopupViewModel : public UTGPopupViewModel
{
    class UEHButtonBarViewModel* ButtonBarViewModel;

};

class UEHPreviewISM : public UInstancedStaticMeshComponent
{
};

class UEHPreviewISMCell : public UHierarchicalInstancedStaticMeshComponent
{
};

class UEHPreviewSM : public UStaticMeshComponent
{
};

class UEHPrimitiveComponent : public UPrimitiveComponent
{
};

class UEHProductionDeviceItem : public UEHDeviceItem
{
    bool CanProduceItems;
    TArray<FDataTableRowHandle> Recipes;
    bool UseDefaultSelectedRecipes;
    TArray<FDataTableRowHandle> DefaultSelectedRecipes;
    TMap<FName, int32> DefaultRecipesAutoDeactivateCounts;
    bool HasDynamicRecipes;

    TArray<class UEHItem*> GetOutputItemsFromRecipes();
    TSet<EGlobalPointType> GetOutputGeneratedPointsFromRecipes();
    TArray<class UEHItem*> GetInputItemsFromRecipes();
};

class UEHProductionObject : public UEHItemsContainer
{
    bool ShowProductionItemsContainer;
    EAIProfession RequiredJobProfession;
    uint8 MaximumSpecialistsNumber;
    uint8 DedicatedSpecialistsNumber;
    TArray<class UEHAIObject*> AssignedWorkplaceAIs;
    FEHProductionObjectOnSelectedRecipesChanged OnSelectedRecipesChanged;
    void OnSelectedRecipesChanged();
    FEHProductionObjectOnAutoDeactivateCountsChanged OnAutoDeactivateCountsChanged;
    void OnAutoDeactivateCountsChanged();
    FEHProductionObjectOnItemProduced OnItemProduced;
    void OnItemProduced(FEHItemInstance ProducedItem);
    FEHProductionObjectOnGlobalPointProduced OnGlobalPointProduced;
    void OnGlobalPointProduced(FEHGlobalPointInstance ProducedGlobalPoint);
    FEHProductionObjectOnAssignedAIWorkersChanged OnAssignedAIWorkersChanged;
    void OnAssignedAIWorkersChanged(uint8 AICount);
    FEHProductionObjectDedicatedSpecialistsNumberChanged DedicatedSpecialistsNumberChanged;
    void OnAssignedAIWorkersChanged(uint8 AICount);
    FEHProductionObjectOnCraftingStateChanged OnCraftingStateChanged;
    void OnCraftingStateChanged(FName RecipeName);
    TSet<UEHItem*> ProducedItemsCached;
    TArray<class UEHAIObject*> AIsInside;
    uint8 AIInsideCount;
    TMap<class FName, class FEHProductionProgress> RecipesProgresses;
    TMap<class FName, class FEHRecipe> SelectedRecipes;
    TMap<FName, int32> RecipesAutoDeactivateCounts;

    bool UsesRecipesForProduction();
    void OnSelectedRecipesChanged__DelegateSignature();
    void OnItemProduced__DelegateSignature(FEHItemInstance ProducedItem);
    void OnGlobalPointProduced__DelegateSignature(FEHGlobalPointInstance ProducedGlobalPoint);
    void OnCraftingStateChanged__DelegateSignature(FName RecipeName);
    void OnAutoDeactivateCountsChanged__DelegateSignature();
    void OnAssignedAIWorkersChanged__DelegateSignature(uint8 AICount);
    void Multi_ProductionStateChanged_Inactive();
    void Multi_ProductionStateChanged_Active();
    bool IsWorkplaceForAI();
    bool IncreaseDedicatedWorkplaceAI();
    bool HasProducingRecipe();
    void HandleLoadGameFinished(bool IsLoadedFromSavegame);
    float GetSpecialistRatio();
    TArray<FEHRecipe> GetRecipes();
    FEHProductionProgress GetRecipeProgress(const FName& RecipeName);
    float GetProductionRatio(bool RequireSpecialist);
    bool DecreaseDedicatedWorkplaceAI();
};

class UEHProfessionMeshAsset : public UEHCustomAsset
{
    EAIProfession Profession;
    TSoftObjectPtr<UTexture2D> Texture;
    float TrainingTime;

};

class UEHRadarObject : public UEHSpecialisticCraftingObject
{
};

class UEHRadioButton : public UEHUserWidget
{
    FEHRadioButtonOnToggleStateChanged OnToggleStateChanged;
    void OnRadioToggleStateChanged(uint8 RadioButtonID, bool bIsToggled);
    class UTGCheckBox* CheckBox;

    void SetToggled(const bool IsToggled);
    void OnRadioToggleStateChanged__DelegateSignature(uint8 RadioButtonID, bool bIsToggled);
    void InitButton(const uint8 InRadioButtonID, FString InButtonName);
    void HandleToggleStateChanged(bool IsToggled);
    FString GetButtonName();
    uint8 GetButtonID();
};

class UEHRadioButtonsViewModel : public UEHInt32OptionViewModel
{
    FInt32Bindable SelectedOptionID;

    void SelectPreviousOption();
    void SelectNextOption();
};

class UEHRafinery : public UEHCraftingObject
{
};

class UEHReactiveHISMComponent : public UHierarchicalInstancedStaticMeshComponent
{
    bool ClampPosition;
    bool DivideSpeedIntoTwoAxes;

};

class UEHReactiveMeshComponent : public UStaticMeshComponent
{

    void Init(class UEHInteractableObject* InteractableObject, const FIntVector MeshCoord);
};

class UEHRecyclingMachine : public UEHCraftingObject
{
    class UEHItemsContainer* GarbageContainer;
    float RecyclingProcessingTime;
    FEHRecipe DynamicRecyclingRecipe;

    void OnRep_GarbageContainer();
    void HandleItemChanged();
};

class UEHReferencedMissionObject : public UReferencedMissionObject
{
    class UEHGridComponent* GridComponent;
    class AEHGamePlayerController* PlayerController;

    class UEHMissionsComponent* GetMissionManagerRef();
    class UEHInventoryComponent* GetInventoryComponentRef();
    class AEHGrid* GetGrid();
    class UEHDevicesComponent* GetDevicesComponent();
    void CompleteObjective(const bool Condition, const FName ObjectiveName, uint8 RepetitionsCount);
};

class UEHRemoteFabricatorObject : public UEHSpecialisticProductionObject
{
    class UEHDeviceItem* FabricatorDroneItem;
    class AActor* RemoteConstruction;
    FEHRemoteFabricatorObjectOnRemoteConstructionChanged OnRemoteConstructionChanged;
    void OnRemoteConstructionChanged();

    void SelectRemoteConstruction(class AActor* RemoteConstruction);
    void OnRemoteConstructionChanged__DelegateSignature();
    void DroneReturnedFromExpedition(class UEHAIFabricatorDroneObject* FabricatorDrone);
    void CancelRemoteConstruction();
};

class UEHResourceItem : public UEHItem
{
    EEHMiningResourceType MiningResourceType;
    TArray<FTransform> BoxInsideInstances;
    bool ImportInsideInstances;
    FRotator RotateFactor;
    bool RotateInsideInstances;
    float ScaleFactor;
    bool ScaleInsideInstances;
    int32 WarehouseSortPriority;
    FLinearColor ResourceColor;
    uint8 HitNumberToExtract;
    TSoftObjectPtr<UNiagaraSystem> ExtractionVFX;

};

class UEHResourceVeinNetwork : public UEHNetwork
{
    FVector VeinMiddlePosition;
    int32 VeinTotalResources;
    class UEHItem* ResourceItem;

};

class UEHRetainFocusWidget : public UUserWidget
{
};

class UEHRobotsAssembler : public UEHCraftingObject
{
};

class UEHRockObject : public UEHInteractableObject
{
    uint8 TotalNumHits;
    uint8 NumOfHits;

    void OnResourceHit(const FVector& HitLocation);
    void OnResourceExtracted();
    FEHItemInstance GetExtractInstance();
    bool CanHit();
};

class UEHSSEInitializer : public UObject
{

    void InitializerApllied(class UEHInteractableObject* Interactable, class AEHGrid* Grid);
};

class UEHSandboxScreen : public UEHUIScreen
{
    class UEHSandboxViewModel* SandboxViewModel;
    class UEHBaseButtonWidget* GenerateUniverseButton;
    class UTGEditableTextBox* SeedNumberText;

    void SetGameInstanceTravelData();
    void HandleGenerateUniverseButtonPressed(class UEHBaseButtonWidget* Button);
};

class UEHSandboxViewModel : public UEHScreenViewModel
{
};

class UEHSaveGame : public UTechnologySaveGame
{
    FString ProjectVersion;
    FName ScenarioName;
    float SessionTimeInSeconds;
    float TimeDilation;
    TArray<uint8> CompressedScreenshot;
    FEHScenarioParams ScenarioParams;
    FIntVector WorldOrigin;
    FVector OriginOffset;
    uint8 UniverseIndex;
    bool JetpackOn;
    FTransform PlayerTransform;
    FRotator ControlRotation;
    FName PlayerGridName;
    TArray<FBinaryDataContainer> InventoryContainersData;
    TArray<FSaveMultiplayerPlayer> MultiplayerPlayers;
    FEHMPScenarioParams MPScenarioParams;
    TMap<class UClass*, class FBinaryDataContainer> SerializedUniqueClassObjectData;
    TMap<class FName, class FSaveSpawnActor> SerializedActorSpawnData;
    TMap<class FName, class FBinaryDataContainer> SerializedActorData;
    TMap<class FName, class FBinaryDataContainer> SerializedObjectData;
    TArray<FIntVector> ChunkCoords;
    TArray<FIntVector> DeactivatedChunkCoords;
    TArray<FIntVector> InactiveU1ChunkCoords;
    TArray<FIntVector> InactiveU2ChunkCoords;
    TArray<FIntVector> InactiveU3ChunkCoords;
    TArray<FIntVector> InactiveU4ChunkCoords;
    TMap<class FName, class FBinaryDataContainer> GridDataSaves;
    TMap<class FName, class FVoxelCompressedWorldSave> VoxelCompressedWorldSaves;

};

class UEHSaveLoadListViewModel : public UEHViewModel
{
    FTextBindable CategoryName;
    TArray<class UEHSaveLoadOptionViewModel*> SaveLoadOptionViewModels;
    class UEHSaveLoadOptionViewModel* CurrentOption;
    FEHSaveLoadListViewModelOnScenarioDetailsUpdated OnScenarioDetailsUpdated;
    void OnScenarioDetailsUpdated(FEHScenarioDetails ScenarioDetails);

};

class UEHSaveLoadListWidget : public UTGUserWidget
{
    TSubclassOf<class UUserWidget> SaveLoadOptionWidgetClass;
    TEnumAsByte<EHorizontalAlignment> HortizontalSlotAligment;
    float ScrollTimeThreshold;
    float MouseMovementThreshold;
    class UVerticalBox* VerticalSavegamesList;
    class UScrollBox* ScrollBox;
    class UEHSaveLoadListViewModel* SaveLoadListViewModel;
    FMargin OptionsPadding;
    FMargin ExtraIndentPadding;
    float ScrollPadding;
    bool ShouldScrollAnimate;
    EDescendantScrollDestination DescendantScrollDestination;

    void HandleUserScrolled(float CurrentOffset);
};

class UEHSaveLoadOptionViewModel : public UEHViewModel
{
    FTextBindable OptionName;
    FTextBindable ScenarioName;
    FTextBindable OptionDate;

};

class UEHSaveLoadOptionWidget : public UTGUserWidget
{
    TMap<class ESettingWidgetType, class TSubclassOf<UEHOptionWidget>> SettingsWidgetMap;
    class UTGWidget* InteractiveArea;
    class UEHSaveLoadOptionViewModel* SaveLoadOptionViewModel;

    void UpdateSelection(const bool IsSelected);
    void SelectOption();
    void HandleUnhovered();
    void HandleSelectionChange(const bool IsSelected);
    void HandleOptionsChange();
    void HandleOptionButtonPressed(class UTGViewModel* InViewModel);
    void HandleIsEnabledChange(const bool IsEnabled);
    void HandleIsCollapsedChange(const bool IsCollapsed);
    void HandleHovered();
    void HandleClicked();
};

class UEHSaveLoadViewModel : public UEHScreenViewModel
{
    class UEHSaveLoadListViewModel* SaveLoadListViewModel;

    void HandlePopupAction(FName Action);
};

class UEHSaveScreen : public UEHUIScreen
{
    class UEHSaveLoadViewModel* SaveViewModel;
    class UEHSaveLoadListWidget* SaveList;
    class UEHBaseButtonWidget* SaveButton;
    class UEHBaseButtonWidget* RemoveFileButton;
    class UEHBaseButtonWidget* RemoveAllButton;
    class UTGEditableTextBox* FilenameText;

    void HandleSaveButtonClicked(class UEHBaseButtonWidget* ButtonWidget);
    void HandleRemoveFileClicked(class UEHBaseButtonWidget* ButtonWidget);
    void HandleRemoveAllClicked(class UEHBaseButtonWidget* ButtonWidget);
    void HandleBack();
    void FileSavedEvent(FString Filename);
};

class UEHScenarioComponent : public UActorComponent
{
    TArray<class UMission*> ScenarioMissions;
    TMap<class UEHTechnologyAsset*, class UMission*> TechnologyUnlockedMissions;
    class UMission* SelectedMission;
    TSubclassOf<class UEHScenarioOverlayWidget> ScenarioOvelrayClass;

    bool IsMissionStarted();
    FCampaignData GetScenarioCampaignData();
    class UMission* GetNextScenarioMission();
};

class UEHScenarioOverlayWidget : public UUserWidget
{

    void ChangeWidetMarkerVisibility(const FName& Name, const bool IsVisible);
};

class UEHSchoolObject : public UEHTrainingObject
{
    FEHSchoolObjectOnAwaitingSpecialistTrainingsChange OnAwaitingSpecialistTrainingsChange;
    void OnAwaitingSpecialistTrainingsChange();
    TArray<EAIProfession> AwaitingSpecialistTrainings;
    EAIProfession OngoingSpecialistTraining;
    class UEHAIHumanObject* StudyingHuman;

};

class UEHScreenManager : public UTGUIScreenManager
{
    TMap<class EEHUIScreenID, class UTGUIScreen*> ScreenMap;
    TArray<class UTGUIScreen*> PinnedScreens;
    TMap<class EEHUIScreenID, class FScreenDefinition> ScreenDefinitionMap;
    TMap<class EEHUIScreenID, class FTGUISceneContexts> UISceneContextsMap;
    TArray<class UEHScreenViewModel*> PinnedScreenViewModels;
    TMap<class EEHUIScreenID, class UEHScreenViewModel*> ScreenViewModelsByType;

    void OpenScreen(const EEHUIScreenID ScreenID);
    class UTGUIScreen* GetScreen(const EEHUIScreenID ScreenID);
    void CloseScreen(const EEHUIScreenID ScreenID, const bool ClearViewmodel);
};

class UEHScreenMarkerWidget : public UUserWidget
{
    bool IsOnScreenMarker;
    class UImage* MarkerIco;
    class UImage* ArrowIco;
    class UBorder* MarkerBorder;
    class UTextBlock* MarkerText;
    class USizeBox* TextSizeBox;
    class UOverlay* PivotOverlay;

};

class UEHScreenViewModel : public UEHViewModel
{
    class UEHButtonBarViewModel* ButtonBarViewModel;
    class UEHDataProvider* DataProvider;

};

class UEHSensorObject : public UEHSignalObject
{
    class UEHItemsContainer* SensedDevice;

    void HandleSelectedResourcesChanged();
};

class UEHSettingsCategoryViewModel : public UEHViewModel
{
    FTextBindable CategoryName;
    TArray<class UEHSettingsOptionViewModel*> CategoryViewModels;
    class UEHSettingsOptionViewModel* CurrentOption;

    void HandleSettingChanged(class UEHSettingsOptionViewModel* ViewModel);
    void HandleInputBindingChanged(class UEHSettingsOptionViewModel* ViewModel);
};

class UEHSettingsCategoryWidget : public UTGUserWidget
{
    TSubclassOf<class UUserWidget> SettingsOptionWidgetClass;
    TSubclassOf<class UEHSplitterWidget> SplitterWidgetClass;
    TEnumAsByte<EHorizontalAlignment> HortizontalSlotAligment;
    float ScrollTimeThreshold;
    float MouseMovementThreshold;
    class UVerticalBox* VerticalSettings;
    class UScrollBox* ScrollBox;
    class UEHSettingsCategoryViewModel* SettingsCategoryViewModel;
    FMargin OptionsPadding;
    FMargin ExtraIndentPadding;
    float ScrollPadding;
    bool ShouldScrollAnimate;
    EDescendantScrollDestination DescendantScrollDestination;

    void HandleUserScrolled(float CurrentOffset);
    void HandleSettingsOptionUnhovered(class UUserWidget* InUserWidget);
    void HandleSettingsOptionSelected(class UTGViewModel* InViewModel);
    void HandleSettingsOptionHovered(class UUserWidget* InUserWidget);
    void HandleSettingsButtonPressed(class UTGViewModel* InViewModel);
};

class UEHSettingsGamepadPreviewFrontViewModel : public UTGViewModel
{
    FTextBindable LThumbstickTopText;
    FTextBindable RThumbstickTopText;
    FTextBindable LThumbstickLeftRightText;
    FTextBindable RThumbstickLeftRightText;
    FTextBindable LThumbstickBottomText;
    FTextBindable RThumbstickBottomText;

};

class UEHSettingsGamepadPreviewViewModel : public UTGViewModel
{
    FVisibilityBindable GamepadRightTriggerVisibility;
    FVisibilityBindable GamepadLeftTriggerVisibility;
    FVisibilityBindable GamepadLeftShoulderVisibility;
    FVisibilityBindable GamepadRightShoulderVisibility;
    FVisibilityBindable GamepadFaceButtonTopVisibility;
    FVisibilityBindable GamepadFaceButtonBottomVisibility;
    FVisibilityBindable GamepadFaceButtonLeftVisibility;
    FVisibilityBindable GamepadFaceButtonRightVisibility;
    FVisibilityBindable GamepadDPadRightVisibility;
    FVisibilityBindable GamepadDPadLeftVisibility;
    FVisibilityBindable GamepadDPadUpVisibility;
    FVisibilityBindable GamepadDPadDownVisibility;
    FVisibilityBindable GamepadRightThumbstickVisibility;
    FVisibilityBindable GamepadLeftThumbstickVisibility;
    FVisibilityBindable GamepadSpecialRightVisibility;
    FVisibilityBindable GamepadSpecialLeftVisibility;
    FTextBindable GamepadRightTriggerText;
    FTextBindable GamepadLeftTriggerText;
    FTextBindable GamepadLeftShoulderText;
    FTextBindable GamepadRightShoulderText;
    FTextBindable GamepadFaceButtonTopText;
    FTextBindable GamepadFaceButtonBottomText;
    FTextBindable GamepadFaceButtonLeftText;
    FTextBindable GamepadFaceButtonRightText;
    FTextBindable GamepadDPadRightText;
    FTextBindable GamepadDPadLeftText;
    FTextBindable GamepadDPadUpText;
    FTextBindable GamepadDPadDownText;
    FTextBindable GamepadRightThumbstickText;
    FTextBindable GamepadLeftThumbstickText;
    FTextBindable GamepadSpecialRightText;
    FTextBindable GamepadSpecialLeftText;

};

class UEHSettingsOptionViewModel : public UEHViewModel
{
    FTextBindable OptionName;
    ESettingWidgetType WidgetType;
    ESettingPreviewType PreviewType;
    class UEHOptionViewModel* OptionViewModel;
    TArray<class UTexture2D*> PreviewImageRef;
    TArray<FText> PreviewDescriptions;
    FText DefaultTooltipText;

    void HandleOptionChanged(class UEHOptionViewModel* ViewModel);
};

class UEHSettingsOptionWidget : public UTGUserWidget
{
    TMap<class ESettingWidgetType, class TSubclassOf<UEHOptionWidget>> SettingsWidgetMap;
    class UCanvasPanel* OptionPanel;
    class UEHOptionWidget* OptionWidget;
    class UTGWidget* InteractiveArea;
    class UEHSettingsOptionViewModel* SettingsOptionViewModel;

    void UpdateSelection(const bool IsSelected);
    void SelectOption();
    void HandleUnhovered();
    void HandleSelectionChange(const bool IsSelected);
    void HandleOptionsChange();
    void HandleOptionButtonPressed(class UTGViewModel* InViewModel);
    void HandleIsEnabledChange(const bool IsEnabled);
    void HandleIsCollapsedChange(const bool IsCollapsed);
    void HandleHovered();
    void HandleClicked();
};

class UEHSettingsPreviewPresetsData : public UDataAsset
{
    TMap<class FName, class FEHPreviewKeyPreset> SettingPreviewPresets;
    TMap<class FName, class FEHThumbstickPreviewKeyLayout> SettingsThumbstickLayouts;

};

class UEHSettingsPreviewViewModel : public UTGViewModel
{
    class UEHSettingsGamepadPreviewViewModel* SettingsGamepadPreviewViewModel;
    class UEHSettingsGamepadPreviewFrontViewModel* SettingsGamepadPreviewFrontViewModel;
    FVisibilityBindable ImageVisibility;
    FVisibilityBindable PreviewDescriptionVisibility;
    FVisibilityBindable TextVisibility;
    FTexture2DBindable PreviewImageRef;
    FTextBindable PreviewDescription;
    FInt32Bindable PreviewSwitcher;
    class UEHSettingsOptionViewModel* SettingsOptionViewModel;

    void OnOptionSelectedChanged(class UEHOptionViewModel* ViewModel);
};

class UEHSettingsPreviewWidget : public UTGUserWidget
{
    class UEHGamepadPreviewTopWidget* PreviewGamepadTop;
    class UEHGamepadPreviewFrontWidget* PreviewGamepadFront;
    class UEHSettingsPreviewViewModel* SettingsPreviewViewModel;

};

class UEHSettingsScreen : public UEHUIScreen
{
    class UEHSettingsViewModel* SettingsViewModel;
    class UEHSettingsCategoryWidget* SettingsCategory;
    class UEHTabContainerWidget* SettingsTabs;

    void ShowRestoreToDefaultPopup();
    void HandleTabSelected(class UTGViewModel* InViewModel);
    void HandleSaveSettings();
    void HandlePopupAction(FName Action);
    void HandleLoadSettings();
    void HandleCategoryOptionButtonPressed(class UTGViewModel* InViewModel);
    void HandleBack();
};

class UEHSettingsViewModel : public UEHScreenViewModel
{
    class UEHTabCategoryViewModel* TabCategoryViewModel;
    TArray<class UEHSettingsCategoryViewModel*> SettingsCategoryViewModels;
    class UEHSettingsPreviewViewModel* SettingsPreviewViewModel;
    class UEHSettingsWarningViewModel* SettingsWarningViewModel;
    class UEHSettingsWarningViewModel* SettingsAlertViewModel;
    bool HasPendingChanges;
    EEHBackgroundType GameType;
    FTextBindable TitleText;
    FTextBindable CategoryText;
    class UEHGameUserSettings* EHSettings;
    class UTGUIAudioManager* AudioManager;

};

class UEHSettingsWarningViewModel : public UTGViewModel
{
    FVisibilityBindable Visibility;
    FTextBindable DisplayText;

};

class UEHSettingsWarningWidget : public UTGUserWidget
{
    class UEHSettingsWarningViewModel* SettingsWarningViewModel;

};

class UEHSignalAntenna : public UEHCraftingObject
{
    FEHSignalAntennaOnSignalReceiverChanged OnSignalReceiverChanged;
    void OnSignalChanged();
    class UEHSignalReceiver* SignalReceiver;
    class UEHSignalNetwork* SignalNetworkIn;

    void SelectDevice(class UEHSignalReceiver* SignalReceiverIn);
    void OnSignalChanged__DelegateSignature();
    void CancelSignalReceiver();
};

class UEHSignalCable : public UEHPipeObject
{
};

class UEHSignalNetwork : public UEHNetwork
{
    FEHSignalNetworkOnSignalChanged OnSignalChanged;
    void OnSignalChanged();
    TMap<UEHItem*, int32> TotalSignal;

};

class UEHSignalObject : public UEHLogicObject
{
    class UEHSignalNetwork* SignalNetworkIn;
    class UEHSignalNetwork* SignalNetworkOut;
    TArray<FEHItemInstance> ResourcesSignalOut;
    FEHSignalObjectOnResourcesSignalOutChanged OnResourcesSignalOutChanged;
    void OnResourcesSignalOutChanged();
    FEHSignalObjectOnSelectedDeviceChanged OnSelectedDeviceChanged;
    void OnSelectedDeviceChanged();

};

class UEHSignalReceiver : public UEHDeviceObject
{
    class UEHSignalNetwork* SignalNetworkOut;
    TArray<FEHItemInstance> SignalCached;
    FEHSignalReceiverOnSignalSendChanged OnSignalSendChanged;
    void OnSignalSendChanged();

};

class UEHSliderViewModel : public UEHFloatOptionViewModel
{
    FFloatBindable SliderValue;
    FTextBindable TextValue;
    float MinSliderValue;
    float MaxSliderValue;
    FSettingsSlidersData SliderConfig;

    void SetValue(const float Value);
    void ChangeValue(const float Change);
};

class UEHSmelter : public UEHCraftingObject
{
};

class UEHSpaceCarryComponent : public UActorComponent
{
    TSoftClassPtr<AEHSpaceShuttleActor> SpaceShuttleActorTemplate;
    float SpaceCarryShuttleOrderTime;
    float UndockRetryTime;
    int32 HumanSpawnOffset;
    int32 HumanEnterOffset;
    int32 HumanExitOffset;
    TSoftObjectPtr<UEHAIItem> HumanToMigrate;
    FTimerHandle SpaceShuttleArrivalTimerHandle;
    FEHSpaceCarryComponentOnArrivalDockingStationChanged OnArrivalDockingStationChanged;
    void OnArrivalDockingStationChanged(class UEHDockingStationObject* ArrivalDockingStation);
    FEHSpaceCarryComponentOnAstronautsArrived OnAstronautsArrived;
    void OnAstronautsArrived(uint8 AstronautsCount);
    class AEHSpaceShuttleActor* SpaceShuttleActorCached;

    void OnAstronautsArrived__DelegateSignature(uint8 AstronautsCount);
    void OnArrivalDockingStationChanged__DelegateSignature(class UEHDockingStationObject* ArrivalDockingStation);
    void HandleGameStarted();
    class AEHSpaceShuttleActor* GetSpaceShuttleActor();
    FIntVector GetShuttleDirection();
    class AEHGrid* GetGridReference();
    FVector GetDockingPosition();
    class UEHDockingStationObject* GetArrivalDockingStation();
    void DockSpaceShuttle();
    void DockedFinished();
    void Client_ShuttleUndocked();
    void Client_AstronautsArrived();
};

class UEHSpeakerObject : public UEHInteractableObject
{
};

class UEHSpecialisticCraftingObject : public UEHCraftingObject
{
};

class UEHSpecialisticProductionObject : public UEHCraftingObject
{
};

class UEHSplitterWidget : public UTGUserWidget
{
    class UTextBlock* SplitterText;

};

class UEHStaticMeshChildComponent : public UStaticMeshComponent
{
    TSubclassOf<class AActor> ChildActorTemplate;

};

class UEHStaticMeshComponent : public UStaticMeshComponent
{
};

class UEHStepperViewModel : public UEHInt32OptionViewModel
{
    FBoolBindable IsPreviousActive;
    FBoolBindable IsNextActive;
    FTextBindable SelectedOption;
    FInt32Bindable SelectedOptionID;

    void SelectPreviousOption();
    void SelectOption(const int32 OptionID);
    void SelectNextOption();
    FString GetSelectedOptionName();
};

class UEHStorageObject : public UEHItemsContainer
{
};

class UEHStringOptionViewModel : public UEHOptionViewModel
{

    void OnBindableChanged(FString NewValue);
};

class UEHStudyPointObject : public UEHTrainingObject
{
    class UEHAIHumanTrainee* HumanTrainee;

    void Multi_SpecialistTrained();
};

class UEHSummaryScreen : public UEHUIScreen
{
    class UEHBaseButtonWidget* ContinuePlaying;
    class UEHBaseButtonWidget* EndMission;
    class UEHBaseButtonWidget* BackToMainMenu;
    class UEHBaseButtonWidget* LoadGame;
    class UEHSummaryViewModel* SummaryViewModel;

    void HandleLoadClicked(class UEHBaseButtonWidget* ButtonWidget);
    void HandleEndMissionClicked(class UEHBaseButtonWidget* ButtonWidget);
    void HandleContinuePlayingClicked(class UEHBaseButtonWidget* ButtonWidget);
};

class UEHSummaryViewModel : public UEHScreenViewModel
{
    FEHSummaryViewModelOnScenarioDetailsUpdated OnScenarioDetailsUpdated;
    void OnScenarioDetailsUpdated(FEHScenarioDetails ScenarioDetails);

};

class UEHSurvivalScreen : public UEHUIScreen
{
    class UEHSurvivalViewModel* SurvivalViewModel;

};

class UEHSurvivalViewModel : public UEHScreenViewModel
{
};

class UEHTabCategoryViewModel : public UEHViewModel
{
    TArray<class UEHTabViewModel*> ChildrenViewModels;
    class UEHTabViewModel* CurrentTab;

    int32 GetCurrentTabIndex();
};

class UEHTabContainerWidget : public UTGUserWidget
{
    class UHorizontalBox* HorizontalTabOptions;
    TSubclassOf<class UUserWidget> TabOptionsWidgetClass;
    FMargin OptionsPadding;
    bool TabsFocusable;
    TSoftObjectPtr<USoundBase> TabAudio;
    class UTGInputActionWidget* InputActionLeft;
    class UTGInputActionWidget* InputActionRight;
    class UTGConfigurableTextBlock* CurrentTabTextBlock;
    class UEHTabCategoryViewModel* TabCategoryViewModel;

    void SelectTab(uint8 TabIndex);
    void SelectPreviousTab();
    void SelectNextTab();
    void OnTabChanged();
    void OnEnter();
};

class UEHTabViewModel : public UEHViewModel
{
    FTextBindable CategoryName;
    class UTGViewModel* TabReferenceViewModel;

};

class UEHTabWidget : public UEHBaseButtonWidget
{
    class UEHTabViewModel* TabViewModel;

    void UpdateSelection(const bool IsSelected);
    void HandleTabSelected(const bool IsSelected);
};

class UEHTcpSocketConnection : public UObject
{
    int32 SendBufferSize;
    int32 ReceiveBufferSize;
    float TimeBetweenTicks;

    bool SendData(int32 ConnectionId, TArray<uint8> DataToSend);
    FString Message_ReadString(TArray<uint8>& Message, int32 StringLength);
    int32 Message_ReadInt(TArray<uint8>& Message);
    float Message_ReadFloat(TArray<uint8>& Message);
    bool Message_ReadBytes(int32 NumBytes, TArray<uint8>& Message, TArray<uint8>& ReturnArray);
    uint8 Message_ReadByte(TArray<uint8>& Message);
    bool isConnected(int32 ConnectionId);
    void Disconnect(int32 ConnectionId);
    TArray<uint8> Conv_StringToBytes(FString InStr);
    TArray<uint8> Conv_IntToBytes(int32 inInt);
    TArray<uint8> Conv_FloatToBytes(float InFloat);
    TArray<uint8> Conv_ByteToBytes(uint8 InByte);
    void Connect(FString ipAddress, int32 Port, const FConnectOnDisconnected& OnDisconnected, const FConnectOnConnected& OnConnected, const FConnectOnMessageReceived& OnMessageReceived, int32& ConnectionId);
    TArray<uint8> Concat_BytesBytes(TArray<uint8> A, TArray<uint8> B);
};

class UEHTechToastViewModel : public UEHToastViewModel
{
    class UEHTechnologyAsset* TechnologyAsset;

};

class UEHTechTreeComponent : public UTechTreeManager
{
    FEHTechTreeComponentOnTechnologyChanged OnTechnologyChanged;
    void OnTechnologyChanged(class UEHTechnologyAsset* PreviousTechnology, class UEHTechnologyAsset* CurrentTechnology);
    FEHTechTreeComponentOnRecipeUnlocked OnRecipeUnlocked;
    void OnTechGameplayUnlocked();
    FEHTechTreeComponentOnItemUnlocked OnItemUnlocked;
    void OnTechGameplayUnlocked();
    FEHTechTreeComponentOnProfessionUnlocked OnProfessionUnlocked;
    void OnTechGameplayUnlocked();
    FEHTechTreeComponentOnPlantUnlocked OnPlantUnlocked;
    void OnTechGameplayUnlocked();
    FEHTechTreeComponentOnAnimalUnlocked OnAnimalUnlocked;
    void OnTechGameplayUnlocked();
    FEHTechTreeComponentOnGlobalPointUnlocked OnGlobalPointUnlocked;
    void OnTechGameplayUnlocked();
    FEHTechTreeComponentOnGameplayEffectUnlocked OnGameplayEffectUnlocked;
    void OnTechGameplayUnlocked();
    FEHTechTreeComponentOnCustomUnlocked OnCustomUnlocked;
    void OnTechGameplayUnlocked();
    bool EnableTechNotifications;
    FEHTechTreeComponentOnTechnologyPointsDockChanged OnTechnologyPointsDockChanged;
    void OnTechGameplayUnlocked();
    bool AreTechPointsDocked;
    class UEHTechnologyAsset* CurrentlyReasearchTechnology;

    void UpdateTechPointsDocked(const bool ArePointsDocked);
    void TechnologyUnlockFeedback(class UEHAsset* Item, bool UnlockSuccess);
    void Server_UpdateTechNotificationsAllPlayers(const bool EnableTechNotificationsIn);
    void Server_TryUnlockTechnology();
    void Server_DebugUnlockTechnologyAllPlayers(class UTechnologyAsset* Technology);
    void Server_ChangeResearchedTechnology(class UEHTechnologyAsset* TechnologyToResearch);
    void OnTechnologyChanged__DelegateSignature(class UEHTechnologyAsset* PreviousTechnology, class UEHTechnologyAsset* CurrentTechnology);
    void OnTechGameplayUnlocked__DelegateSignature();
    void OnRep_CurrentlyReasearchTechnology(class UEHTechnologyAsset* LastReasearchTechnology);
    bool IsUnlockedWithFeedback(class UEHAsset* Item);
    bool IsStructureUnlocked(class UEHAsset* Structure);
    bool IsRecipeUnlocked(const FName Name, const bool IsUnlockedByDefault);
    bool IsProfessionUnlocked(class UEHAsset* Technology);
    bool IsPlantUnlocked(class UEHAsset* Plant);
    bool IsItemUnlocked(class UEHAsset* Item);
    bool IsGlobalPointUnlocked(class UEHAsset* GlobalPoint);
    bool IsGameplayEffectUnlocked(class UEHAsset* GameplayEffect);
    bool IsAnimalUnlocked(class UEHAsset* Animal);
    class UEHTechnologyAsset* GetTechnologyToUnlock(class UEHAsset* Asset);
    void Client_UpdateTechNotifications(const bool EnableTechNotificationsIn);
};

class UEHTechnologyAsset : public UTechnologyAsset
{
    FText Name;
    class UTexture2D* Texture;
    float ReasearchTime;
    TArray<FEHGlobalPointInstance> ReasearchCost;
    TArray<FDataTableRowHandle> GameplayAspectUnlocks;

};

class UEHTextOptionViewModel : public UEHOptionViewModel
{

    void OnBindableChanged(FText NewValue);
};

class UEHThrusterNetwork : public UObject
{
    TSubclassOf<class AEHMovableSpaceActor> MovableSpaceActorTemplate;
    float MaxDockingDistance;
    FEHThrusterNetworkOnThrustChanged OnThrustChanged;
    void OnThrustChanged();
    FEHThrusterNetworkOnAutopilotStateChanged OnAutopilotStateChanged;
    void OnAutopilotStateChanged();
    FEHThrusterNetworkOnDirectionsAndPowersCalculated OnDirectionsAndPowersCalculated;
    void OnDirectionsAndPowersCalculated();
    TArray<class UEHThrusterObject*> ThrustersRot0;
    TArray<class UEHThrusterObject*> ThrustersRot90;
    TArray<class UEHThrusterObject*> ThrustersRot180;
    TArray<class UEHThrusterObject*> ThrustersRot270;
    bool AutopilotActive;
    class AEHMovableSpaceActor* MovableSpaceActor;
    class AEHGrid* Grid;
    FVector NetworkVelocity;
    FVector DesiredMovement;

    void UpdateTotalVelocity();
    void UndockStation(class UEHInteractableObject* OriginDockStation);
    void StopMovement();
    void StopDocking();
    void SetDesiredMovement(const FVector& InDesiredMovement);
    void SetAutopilot(const bool IsActive);
    void OnThrustChanged__DelegateSignature();
    void OnDirectionsAndPowersCalculated__DelegateSignature();
    void OnAutopilotStateChanged__DelegateSignature();
    void Multi_UndockDockingStations(class UEHConnectorStationObject* OriginDockingStationObject, class UEHConnectorStationObject* TargetDockingStationObject);
    void Multi_SetDesiredMovement(const FVector& InDesiredMovement);
    void Multi_ConnectDockingStations(class UEHConnectorStationObject* OriginDockingStationObject, class UEHConnectorStationObject* TargetDockingStationObject);
    void MoveToDestination(const FVector& InDestinationPosition, const FVector& DockingStationOffset, const FVector& DestinationDirectionOffset);
    void HandleMovableSpaceActorLocationChanged();
    void HandleMovableDestinationReached(const bool IsMovingToDestination);
    FVector GetVelocity();
    class AEHMovableSpaceActor* GetMovableSpaceActor();
    class AEHGrid* GetGrid();
    TArray<class UEHThrusterObject*> GetAllThrustersRot90();
    TArray<class UEHThrusterObject*> GetAllThrustersRot270();
    TArray<class UEHThrusterObject*> GetAllThrustersRot180();
    TArray<class UEHThrusterObject*> GetAllThrustersRot0();
    void AddVelocity(const FVector VelocityChange);
};

class UEHThrusterObject : public UEHCraftingObject
{
    EEHThrusterSize ThrusterSize;
    float GeneratedThrust;
    TSoftClassPtr<UEHFlareComponent> FlareTemplate;
    FTransform FlareOffset;
    class UEHFlareComponent* Flare;
    FVector2D ThrustDirection;
    float ZPercentage;
    FVector ThrustVelocity;
    float Power;

    void SetThrustPowerManual(const float PowerIn);
    void SetThrustDirectionManual(const float AngleYAxis, const float AngleZAxis);
    bool IsThrusterActive();
    class UEHThrusterNetwork* GetThrusterNetwork();
    void DebugSetFlareDirection(const float AngleYAxis, const float AngleZAxis);
    void ApplyThrusterSetupToConnected();
};

class UEHTimerTextWidget : public UTGUserWidget
{
    class UTGConfigurableTextBlock* TimerText;

};

class UEHToastContainerViewModel : public UEHViewModel
{
    TArray<class UEHToastViewModel*> QueuedToastViewModels;

    void QueueTechnologyToast(class UEHTechnologyAsset* TechnologyAsset, const float ToastDuration);
    void QueueImageToast(const FText& InToastTitle, const FText& InToastDescription, class UTexture2D* InIcon, const EEHToastNature Nature, const float ToastDuration);
};

class UEHToastContainerWidget : public UTGUILayer
{
    TSubclassOf<class UTGUserWidget> ToastImageWidgetClass;
    TSubclassOf<class UTGUserWidget> ToastTechnologyWidgetClass;
    float TimeBetweenToasts;
    int32 MaximumSimultaneousToasts;
    class UCanvasPanel* WidgetContainer;
    class UEHToastContainerViewModel* ToastContainerViewModel;
    TArray<class UEHToastWidget*> ActiveToastWidgets;

    void ShowNextToast(class UEHToastViewModel* ToastViewModel);
    void OnToastFinished(class UEHToastWidget* FinishedWidget);
    void OnToastDismissed(class UEHToastWidget* FinishedWidget);
};

class UEHToastViewModel : public UEHViewModel
{
    float MaxDurationOnScreen;

};

class UEHToastWidget : public UTGUserWidget
{
    class UWidgetAnimation* SlideDownAnimation;
    class UWidgetAnimation* FadeInAnimation;
    class UWidgetAnimation* FadeOutAnimation;
    class UEHToastViewModel* ToastViewModel;
    int32 AnimationEndStep;
    int32 CurrentAnimationStep;
    float TimeBetweenEachSlide;
    int32 LastAnimationPosition;

    void PlayNextAnimation();
    void PlayFadeOutAnimation();
    void OnToastDismissed();
};

class UEHToggleViewModel : public UEHBoolOptionViewModel
{
    FBoolBindable Toggled;

    void Toggle();
    void SetToggle(const bool IsToggled);
};

class UEHTooltipWidget : public UTGUILayer
{
    class UTGConfigurableTextBlock* TooltipTextBlock;
    class UEHViewModel* EHViewModel;

};

class UEHTrainingObject : public UEHInteractableServiceObject
{
    FEHTrainingObjectOnTrainedProductionChanged OnTrainedProductionChanged;
    void OnTrainedChanged(EAIProfession Profession);
    FEHTrainingObjectOnTrainedCompleted OnTrainedCompleted;
    void OnTrainedChanged(EAIProfession Profession);
    FEHProgress progress;
    float ProductionAITime;
    class UEHAIItem* AIToSpawn;

};

class UEHTubeObject : public UEHConveyorObject
{
};

class UEHUIFunctionLibrary : public UBlueprintFunctionLibrary
{

    FText GetItemsFormattedText(const TArray<FEHItemInstance>& ItemInstances);
    bool AreWidgetsUnderLocation(const TArray<class UWidget*> Widgets, const FVector2D& AbsoluteCoordinate);
};

class UEHUIPopup : public UTGUIPopup
{
};

class UEHUIPopupManager : public UTGUIPopupManager
{
    FText QuitGameTitle;
    FText SaveSettingsTitle;
    FText SaveSettings;
    FText DiscardChanges;
    TMap<class EEHUIPopupID, class TSubclassOf<UTGUIPopup>> PopupTemplateMap;
    TArray<class UTGUIPopup*> PinnedPopups;

};

class UEHUIScreen : public UTGUIScreen
{
    TSoftObjectPtr<USoundBase> MenuEnterAudio;
    TSoftObjectPtr<USoundBase> MenuExitAudio;
    class UEHScreenViewModel* ScreenViewModel;

};

class UEHUISystem : public UTGUISystem
{
};

class UEHUserWidget : public UTGUserWidget
{

    void OnEnterEvent();
};

class UEHViewModel : public UTGViewModel
{
    FTextBindable ToolTipText;

};

class UEHVisualItem : public UEHItem
{
};

class UEHVisualMeshAsset : public UEHCustomAsset
{
    FText ItemDescription;
    FName AssetName;
    TArray<TSoftObjectPtr<UStaticMesh>> StaticMeshes;
    uint8 NumCustomDataFloats;

};

class UEHWallItem : public UEHItem
{
};

class UEHWallObject : public UEHInteractableObject
{
};

class UEHWaterCellObject : public UEHCraftingObject
{
};

class UEHWaterNetwork : public UEHNetwork
{
    int32 StoredWater;
    FEHWaterNetworkOnStoredWaterChanged OnStoredWaterChanged;
    void OnStoredWaterChanged();

    void OnStoredWaterChanged__DelegateSignature();
    void ConsumeWater(const int32 Quantity);
    void AddWater(const int32 Quantity);
};

class UEHWaterPipe : public UEHPipeObject
{
};

class UEHWorldItem : public UEHInteractableItem
{
    EEHMiningResourceType MiningResourceType;
    class UEHItem* HarvestedItem;
    FIntVector HarvestCoordOffset;
    int32 DepositMinQuantity;
    int32 DepositMaxQuantity;

};

class UEHWorldResourceObject : public UEHInteractableObject
{
    uint8 TotalNumHits;
    uint8 Quantity;
    uint8 NumOfHits;
    FEHWorldResourceObjectOnResourcePicked OnResourcePicked;
    void OnResourcePicked();
    class UEHWorldItem* WorldItem;

    void OnResourcePicked__DelegateSignature();
    void OnResourceMinedOut();
    void OnResourceHit(const FVector& HitLocation);
    void OnResourceExtracted(const FVector& HitLocation);
    class UEHItem* GetHarvestedItem();
};

class UFastNoiseLibrary : public UBlueprintFunctionLibrary
{

    float GetSimplexNoise_3D(float X, float Y, float Z, float Frequency);
    float GetSimplexNoise_2D(float X, float Y, float Frequency);
    float GetPerlinNoise_3D(float X, float Y, float Z, float Frequency);
    float GetFast3DNoise(float X, float Y, float Z);
    float GetFast2DNoise(float X, float Y);
};

class UGammaSettings : public UDataAsset
{
    int32 StepperTilesCount;
    int32 StepperOptionSelected;

};

class UInteractBaseWidget : public UUserWidget
{
    class UEHInteractableObject* InteractableObject;

    void OnContextChanged();
    void Init(class UEHInteractableObject* InInteractableObject);
};

class UInteractMenuWidget : public UMenuWidget
{
    TMap<class TSubclassOf<UEHInteractableObject>, class TSubclassOf<UInteractBaseWidget>> InteractableObjectWidgetMap;

};

class UMenuWidget : public UInteractBaseWidget
{
    FText MenuName;
    class UTexture2D* MenuIcon;

};

class UModTabUserWidget : public UUserWidget
{

    void OnInit(const FHUBModDefinition& ModDefinition);
};

class UPlanetoidElipsoidRange : public UVoxelGraphGeneratorHelper
{
};

class UPlanetoidElipsoidRangeOld : public UVoxelGraphGeneratorHelper
{
};

class UPlanetoidGenerator : public UVoxelGraphGeneratorHelper
{
    int32 GroundSeed;
    float MainBlendMax;
    float MainBlendMin;
    float PrimaryResourceTH;
    float SecondaryResourceTH;
    float StepSteep;
    int32 WavenessSeed;
    float RadiusX;
    float RadiusY;
    float RadiusZ;

};

class UPlanetoidGeneratorOld : public UVoxelGraphGeneratorHelper
{
    int32 GroundSeed;
    int32 PrimaryResourceIndex;
    float PrimaryResourceTH;
    int32 SecondaryResourceIndex;
    float SecondaryResourceTH;
    float StepSteep;
    int32 WavenessSeed;
    float RadiusX;
    float RadiusY;
    float RadiusZ;

};

class UPlanetoidGeneratorOld2 : public UVoxelGraphGeneratorHelper
{
    int32 GroundSeed;
    int32 PrimaryResourceIndex;
    float PrimaryResourceTH;
    int32 SecondaryResourceIndex;
    float SecondaryResourceTH;
    float StepSteep;
    int32 WavenessSeed;
    float RadiusX;
    float RadiusY;
    float RadiusZ;

};

class UPlanetoidGenerator_Cauliflower : public UVoxelGraphGeneratorHelper
{
    int32 GroundSeed;
    float MainBlendMax;
    float MainBlendMin;
    float PrimaryResourceTH;
    float SecondaryResourceTH;
    int32 SeedRange;
    int32 SeedSimplex3d;
    float StepSteep;
    int32 WavenessSeed;
    float RadiusX;
    float RadiusY;
    float RadiusZ;

};

class UPlanetoidGenerator_Crater : public UVoxelGraphGeneratorHelper
{
    int32 GroundSeed;
    float MainBlendMax;
    float MainBlendMin;
    float PrimaryResourceTH;
    float SecondaryResourceTH;
    float StepSteep;
    int32 WavenessSeed;
    float RadiusX;
    float RadiusY;
    float RadiusZ;

};

class UPlanetoidGenerator_Donut : public UVoxelGraphGeneratorHelper
{
    int32 GroundSeed;
    float MainBlendMax;
    float MainBlendMin;
    float PrimaryResourceTH;
    float SecondaryResourceTH;
    float StepSteep;
    int32 WavenessSeed;
    float MiddleOffsetX;
    float MiddleOffsetY;
    float MiddleRadiusX;
    float RadiusX;
    float MiddleRadiusY;
    float RadiusY;
    float RadiusZ;

};

class UPlanetoidGenerator_Ellipsoid : public UVoxelGraphGeneratorHelper
{
    int32 GroundSeed;
    float MainBlendMax;
    float MainBlendMin;
    float PrimaryResourceTH;
    float SecondaryResourceTH;
    float StepSteep;
    float RadiusX;
    float RadiusY;
    float RadiusZ;

};

class UPlanetoidGenerator_Fang : public UVoxelGraphGeneratorHelper
{
    int32 GroundSeed;
    float MainBlendMax;
    float MainBlendMin;
    float PrimaryResourceTH;
    float SecondaryResourceTH;
    float StepSteep;
    int32 WavenessSeed;
    float RadiusX;
    float RadiusY;
    float RadiusZ;

};

class UPlanetoidGenerator_Spike : public UVoxelGraphGeneratorHelper
{
    int32 GroundSeed;
    float MainBlendMax;
    float MainBlendMin;
    float PrimaryResourceTH;
    float SecondaryResourceTH;
    float StepSteep;
    int32 WavenessSeed;
    float MiddleHeight;
    float MiddleRadiusX;
    float RadiusX;
    float MiddleRadiusY;
    float RadiusY;
    float RadiusZ;

};

class USimplexNoiseLibrary : public UBlueprintFunctionLibrary
{

    float SimplexNoiseScaled4D(float X, float Y, float Z, float W, float S);
    float SimplexNoiseScaled3D(float X, float Y, float Z, float S);
    float SimplexNoiseScaled2D(float X, float Y, float S);
    float SimplexNoiseScaled1D(float X, float S);
    float SimplexNoiseInRange4D(float X, float Y, float Z, float W, float RangeMin, float RangeMax);
    float SimplexNoiseInRange3D(float X, float Y, float Z, float RangeMin, float RangeMax);
    float SimplexNoiseInRange2D(float X, float Y, float RangeMin, float RangeMax);
    float SimplexNoiseInRange1D(float X, float RangeMin, float RangeMax);
    float SimplexNoise4D(float X, float Y, float Z, float W);
    float SimplexNoise3D(float X, float Y, float Z);
    float SimplexNoise2D(float X, float Y);
    float SimplexNoise1D(float X);
    void setNoiseSeed(const int32& newSeed);
};

class UTGCodingStandardExampleComponent : public USceneComponent
{
    FTGCodingStandardBlueprintVarGroup BlueprintGroup;

};

class UTestFocusUserWidget : public UUserWidget
{
};

class UTipWidget : public UUserWidget
{
    int32 TipIndex;
    FText TipDisplayName;

};

class UUtilityBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void WriteStringToFile(FString AssetPath, FString StringToWrite);
    void RerunConstruction(class AActor* Actor);
    bool IsGameWithEditor();
    bool IsGameRunning(class UObject* WorldContextObject);
    FQuat GetQuaternionFromRotator(const FRotator& Rotator);
    TArray<FMeshPivotInfo> GetPivotInfoFromFiles();
    FMeshPivotInfo GetPivotInfoFromFile(FString Filename);
    TArray<FName> GetObjectProperties(class UObject* Object);
    TArray<FName> GetItemNames();
    FText GetFriendlyDisplayName(const FKey& Key);
    TArray<FName> GetEnumNames(const FString Name);
    class ULevel* GetCurrentLevel(class UWorld* EditorWorld);
    FString GetCapitalLetterByIndex(const int32 Index);
    float GetAverageFPS();
    TArray<class AActor*> GetActorsInBox(class UWorld* EditorWorld, const FBox& Box);
    class ULevel* GetActorLevel(class AActor* Actor);
    void GenerateMissingDatatableRows(const TArray<FName> Names, class UDataTable* DataTable);
    class AEHGrid* FindGrid(const class UObject* WorldContextObject, const FName GridUniqueID);
    void CopyToClipboard(FString StringToCopy);
    void CopyPropertiesFromOneObjectToAnother(class UObject* SourceObject, class UObject* TargetObject);
    float CalculateRemainingTime(class UObject* WorldContextObject, const FTimerHandle& TimerHandle);
    float CalculateProgress(class UObject* WorldContextObject, float PreviouslyCompletedProgress, float RemainingTime);
    bool BitmaskTestBit(int32 BitMask, uint8 Bit);
    void BitmaskSetBit(int32& BitMask, uint8 Bit);
    void BitmaskClearBit(int32& BitMask, uint8 Bit);
    void BitmaskChangeBit(int32& BitMask, uint8 Bit, bool Value);
};

class UWorldInteractiveInfoWidget : public UUserWidget
{
    class AActor* WorldInteractiveActor;

};

#endif
