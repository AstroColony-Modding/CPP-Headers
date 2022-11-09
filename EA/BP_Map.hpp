#ifndef UE4SS_SDK_BP_Map_HPP
#define UE4SS_SDK_BP_Map_HPP

class ABP_Map_C : public ABP_SceneInteraction_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_SceneInteractionISM_C* ElectromagneticFieldISM;
    class UBP_SceneInteractionISM_C* CometStrikeISM;
    class UBP_SceneInteractionISM_C* MeteorRainISM;
    class UStaticMeshComponent* ScanCircle;
    class UBP_SceneInteractionISM_C* BlackHolesISM;
    class UBP_SceneInteractionISM_C* PlanetoidsISM;
    class UBP_SceneInteractionISM_C* SpaceStationsBGISM;
    class UBP_SceneInteractionISM_C* PlanetoidsBGISM;
    class UBP_SceneInteractionISM_C* ObjectMarkersISM;
    class UBP_SceneInteractionISM_C* CylindersISM;
    class UBP_SceneInteractionISM_C* SpaceStationsISM;
    class UStaticMeshComponent* CircleLarge;
    class UStaticMeshComponent* CircleMedium;
    class UStaticMeshComponent* CircleSmall;
    class UStaticMeshComponent* CircleGrid;
    class UStaticMeshComponent* SquareGrid;
    class UStaticMeshComponent* NSEW;
    class USceneComponent* Scene1;
    class USceneComponent* Scene;
    class UStaticMeshComponent* Globe;
    class UInstancedStaticMeshComponent* PlayerVelocity;
    class USceneComponent* PlayerMarker;
    class UStaticMeshComponent* BlackBackground;
    class UStaticMeshComponent* StarSphere;
    class UBillboardComponent* PlayerBillboard;
    class UStaticMeshComponent* PlayerArrow;
    class UStaticMeshComponent* PlayerCone;
    class UEHStaticMeshComponent* Selection;
    class USceneComponent* UniverseScene;
    float MapScale;
    FLinearColor OutlineColor;
    float OutlineScale;
    class UWBP_Map_C* WBPMap;
    TArray<class AActor*> SpaceStations;
    TArray<class AActor*> Planetoids;
    TArray<class AActor*> BlackHoles;
    class UMaterialInstanceDynamic* SelectionMaterial;
    class UMaterialInstanceDynamic* RadarScanMaterial;
    TArray<class AActor*> MeteorRains;
    bool YouToggled;
    TMap<UActorComponent*, int32> ComponentTypes;
    float ElapsedMapTime;
    TArray<class AActor*> CometStrike;
    TArray<class AActor*> ElectromagneticField;

    void DeselectComponent();
    void ClickSetupComponent(class UActorComponent* Component, int32 Index);
    void SelectComponent(class UActorComponent* Component, int32 Index);
    void GetSelectionRoootComponent(class USceneComponent*& SelectionRoot);
    void UpdateComponentMaterial(bool IsHovered, int32 Index, class UActorComponent* Component);
    void UpdateSpaceSky(bool MapActive);
    void UntoggleYou();
    void ToggleYou();
    void CreateVelocityInstances(int32 SegmentsCount);
    void UpdateInstanceColor(FLinearColor Color, class UPrimitiveComponent* Component, int32 Index);
    void SelectCelestial(class AActor* CelestalBody, EEHTrackableType Type);
    void UpdatePositionsPlayerRelative();
    void CreateMapInstances();
    void ResetState();
    void InitSelectionMesh();
    void InpActEvt_Escape_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Q_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void Activate();
    void Deactivate();
    void BndEvt__PlayerCone_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Map(int32 EntryPoint);
};

#endif
