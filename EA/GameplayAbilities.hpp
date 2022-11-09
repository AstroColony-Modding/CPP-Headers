#ifndef UE4SS_SDK_GameplayAbilities_HPP
#define UE4SS_SDK_GameplayAbilities_HPP

#include "GameplayAbilities_enums.hpp"

class UAbilityAsync : public UBlueprintAsyncActionBase
{

    void EndAction();
};

struct FGameplayTargetDataFilterHandle
{
};

struct FGameplayTagRequirements
{
    FGameplayTagContainer RequireTags;
    FGameplayTagContainer IgnoreTags;

};

struct FGameplayEffectSpecHandle
{
};

struct FActiveGameplayEffectHandle
{
    int32 Handle;
    bool bPassedFiltersAndWasExecuted;

};

class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{
    FAbilityAsync_WaitGameplayEffectAppliedOnApplied OnApplied;
    void OnAppliedDelegate(class AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle);

    class UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(class AActor* TargetActor, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect);
    void OnAppliedDelegate__DelegateSignature(class AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle);
};

struct FGameplayEffectContextHandle
{
};

struct FGameplayAbilityTargetDataHandle
{
};

struct FGameplayEventData
{
    FGameplayTag EventTag;
    class AActor* Instigator;
    class AActor* Target;
    class UObject* OptionalObject;
    class UObject* OptionalObject2;
    FGameplayEffectContextHandle ContextHandle;
    FGameplayTagContainer InstigatorTags;
    FGameplayTagContainer TargetTags;
    float EventMagnitude;
    FGameplayAbilityTargetDataHandle TargetData;

};

class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{
    FAbilityAsync_WaitGameplayEventEventReceived EventReceived;
    void EventReceivedDelegate(FGameplayEventData Payload);

    class UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(class AActor* TargetActor, FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact);
    void EventReceivedDelegate__DelegateSignature(FGameplayEventData Payload);
};

class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
{
};

class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
{
    FAbilityAsync_WaitGameplayTagAddedAdded Added;
    void AsyncWaitGameplayTagDelegate();

    class UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(class AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce);
};

class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{
    FAbilityAsync_WaitGameplayTagRemovedRemoved Removed;
    void AsyncWaitGameplayTagDelegate();

    class UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(class AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce);
};

struct FGameplayAttribute
{
    FString AttributeName;
    TFieldPath<FProperty> Attribute;
    class UStruct* AttributeOwner;

};

struct FGameplayCueParameters
{
    float NormalizedMagnitude;
    float RawMagnitude;
    FGameplayEffectContextHandle EffectContext;
    FGameplayTag MatchedTagName;
    FGameplayTag OriginalTag;
    FGameplayTagContainer AggregatedSourceTags;
    FGameplayTagContainer AggregatedTargetTags;
    FVector_NetQuantize10 Location;
    FVector_NetQuantizeNormal Normal;
    TWeakObjectPtr<class AActor> Instigator;
    TWeakObjectPtr<class AActor> EffectCauser;
    TWeakObjectPtr<class UObject> SourceObject;
    TWeakObjectPtr<class UPhysicalMaterial> PhysicalMaterial;
    int32 GameplayEffectLevel;
    int32 AbilityLevel;
    TWeakObjectPtr<class USceneComponent> TargetAttachComponent;
    bool bReplicateLocationWhenUsingMinimalRepProxy;

};

struct FGameplayTargetDataFilter
{
    class AActor* SelfActor;
    TSubclassOf<class AActor> RequiredActorClass;
    TEnumAsByte<ETargetDataFilterSelf::Type> SelfFilter;
    bool bReverseFilter;

};

struct FGameplayAbilityTargetingLocationInfo
{
    TEnumAsByte<EGameplayAbilityTargetingLocationType::Type> LocationType;
    FTransform LiteralTransform;
    class AActor* SourceActor;
    class UMeshComponent* SourceComponent;
    class UGameplayAbility* SourceAbility;
    FName SourceSocketName;

};

class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool TargetDataHasOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    bool TargetDataHasHitResult(const FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
    bool TargetDataHasEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    bool TargetDataHasActor(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    FGameplayEffectSpecHandle SetStackCountToMax(FGameplayEffectSpecHandle SpecHandle);
    FGameplayEffectSpecHandle SetStackCount(FGameplayEffectSpecHandle SpecHandle, int32 StackCount);
    FGameplayEffectSpecHandle SetDuration(FGameplayEffectSpecHandle SpecHandle, float Duration);
    void SendGameplayEventToActor(class AActor* Actor, FGameplayTag EventTag, FGameplayEventData Payload);
    bool NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);
    FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
    FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, FGameplayEffectContextHandle EffectContext, FGameplayTag MatchedTagName, FGameplayTag OriginalTag, FGameplayTagContainer AggregatedSourceTags, FGameplayTagContainer AggregatedTargetTags, FVector Location, FVector Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32 GameplayEffectLevel, int32 AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy);
    FGameplayTargetDataFilterHandle MakeFilterHandle(FGameplayTargetDataFilter Filter, class AActor* FilterActor);
    bool IsValid(FGameplayAttribute Attribute);
    bool IsInstigatorLocallyControlledPlayer(FGameplayCueParameters Parameters);
    bool IsInstigatorLocallyControlled(FGameplayCueParameters Parameters);
    bool HasHitResult(FGameplayCueParameters Parameters);
    FTransform GetTargetDataOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    FTransform GetTargetDataEndPointTransform(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    FVector GetTargetDataEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    FVector GetOrigin(FGameplayCueParameters Parameters);
    float GetModifiedAttributeMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayAttribute Attribute);
    FTransform GetInstigatorTransform(FGameplayCueParameters Parameters);
    class AActor* GetInstigatorActor(FGameplayCueParameters Parameters);
    FHitResult GetHitResultFromTargetData(const FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
    FHitResult GetHitResult(FGameplayCueParameters Parameters);
    bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Location, FVector& Normal);
    bool GetGameplayCueDirection(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Direction);
    float GetFloatAttributeFromAbilitySystemComponent(const class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    float GetFloatAttributeBaseFromAbilitySystemComponent(const class UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    float GetFloatAttributeBase(const class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    float GetFloatAttribute(const class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    FGameplayEffectContextHandle GetEffectContext(FGameplayEffectSpecHandle SpecHandle);
    int32 GetDataCountFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData);
    TArray<FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(FGameplayEffectSpecHandle SpecHandle);
    TArray<class AActor*> GetAllActorsFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData);
    TArray<class AActor*> GetActorsFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    int32 GetActorCount(FGameplayCueParameters Parameters);
    class AActor* GetActorByIndex(FGameplayCueParameters Parameters, int32 Index);
    float GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle);
    float GetActiveGameplayEffectStartTime(FActiveGameplayEffectHandle ActiveHandle);
    int32 GetActiveGameplayEffectStackLimitCount(FActiveGameplayEffectHandle ActiveHandle);
    int32 GetActiveGameplayEffectStackCount(FActiveGameplayEffectHandle ActiveHandle);
    float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle);
    float GetActiveGameplayEffectExpectedEndTime(FActiveGameplayEffectHandle ActiveHandle);
    FString GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle);
    class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);
    void ForwardGameplayCueToTarget(TScriptInterface<class IGameplayCueInterface> TargetCueInterface, TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    FGameplayAbilityTargetDataHandle FilterTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTargetDataFilterHandle ActorFilterClass);
    float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess);
    float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags, bool& bSuccess);
    bool EqualEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);
    void EffectContextSetOrigin(FGameplayEffectContextHandle EffectContext, FVector Origin);
    bool EffectContextIsValid(FGameplayEffectContextHandle EffectContext);
    bool EffectContextIsInstigatorLocallyControlled(FGameplayEffectContextHandle EffectContext);
    bool EffectContextHasHitResult(FGameplayEffectContextHandle EffectContext);
    class UObject* EffectContextGetSourceObject(FGameplayEffectContextHandle EffectContext);
    class AActor* EffectContextGetOriginalInstigatorActor(FGameplayEffectContextHandle EffectContext);
    FVector EffectContextGetOrigin(FGameplayEffectContextHandle EffectContext);
    class AActor* EffectContextGetInstigatorActor(FGameplayEffectContextHandle EffectContext);
    FHitResult EffectContextGetHitResult(FGameplayEffectContextHandle EffectContext);
    class AActor* EffectContextGetEffectCauser(FGameplayEffectContextHandle EffectContext);
    void EffectContextAddHitResult(FGameplayEffectContextHandle EffectContext, FHitResult HitResult, bool bReset);
    bool DoesTargetDataContainActor(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index, class AActor* Actor);
    bool DoesGameplayCueMeetTagRequirements(FGameplayCueParameters Parameters, const FGameplayTagRequirements& SourceTagReqs, const FGameplayTagRequirements& TargetTagReqs);
    FGameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone);
    void BreakGameplayCueParameters(const FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, FGameplayEffectContextHandle& EffectContext, FGameplayTag& MatchedTagName, FGameplayTag& OriginalTag, FGameplayTagContainer& AggregatedSourceTags, FGameplayTagContainer& AggregatedTargetTags, FVector& Location, FVector& Normal, class AActor*& Instigator, class AActor*& EffectCauser, class UObject*& SourceObject, class UPhysicalMaterial*& PhysicalMaterial, int32& GameplayEffectLevel, int32& AbilityLevel, class USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy);
    FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayTag DataTag, float Magnitude);
    FGameplayEffectSpecHandle AssignSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FName DataName, float Magnitude);
    FGameplayAbilityTargetDataHandle AppendTargetDataHandle(FGameplayAbilityTargetDataHandle TargetHandle, const FGameplayAbilityTargetDataHandle& HandleToAdd);
    FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(FGameplayEffectSpecHandle SpecHandle, FGameplayEffectSpecHandle LinkedGameplayEffectSpec);
    FGameplayEffectSpecHandle AddLinkedGameplayEffect(FGameplayEffectSpecHandle SpecHandle, TSubclassOf<class UGameplayEffect> LinkedGameplayEffect);
    FGameplayEffectSpecHandle AddGrantedTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);
    FGameplayEffectSpecHandle AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);
    FGameplayEffectSpecHandle AddAssetTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);
    FGameplayEffectSpecHandle AddAssetTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);
    FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(const FGameplayAbilityTargetingLocationInfo& SourceLocation, const FGameplayAbilityTargetingLocationInfo& TargetLocation);
    FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(const FHitResult& HitResult);
    FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(const TArray<class AActor*>& ActorArray, bool OneTargetPerHandle);
    FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);
};

struct FAttributeDefaults
{
    TSubclassOf<class UAttributeSet> Attributes;
    class UDataTable* DefaultStartingTable;

};

struct FGameplayAbilitySpecHandle
{
    int32 Handle;

};

struct FPredictionKey
{
    class UPackageMap* PredictiveConnection;
    int16 Current;
    int16 Base;
    bool bIsStale;
    bool bIsServerInitiated;

};

struct FGameplayAbilityActivationInfo
{
    TEnumAsByte<EGameplayAbilityActivationMode::Type> ActivationMode;
    uint8 bCanBeEndedByOtherInstance;
    FPredictionKey PredictionKeyWhenActivated;

};

struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
    FGameplayAbilitySpecHandle Handle;
    class UGameplayAbility* Ability;
    int32 Level;
    int32 InputID;
    class UObject* SourceObject;
    uint8 ActiveCount;
    uint8 InputPressed;
    uint8 RemoveAfterActivation;
    uint8 PendingRemove;
    uint8 bActivateOnce;
    FGameplayAbilityActivationInfo ActivationInfo;
    FGameplayTagContainer DynamicAbilityTags;
    TArray<class UGameplayAbility*> NonReplicatedInstances;
    TArray<class UGameplayAbility*> ReplicatedInstances;
    FActiveGameplayEffectHandle GameplayEffectHandle;

};

struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
    TArray<FGameplayAbilitySpec> Items;
    class UAbilitySystemComponent* Owner;

};

struct FGameplayAbilityRepAnimMontage
{
    class UAnimMontage* AnimMontage;
    float PlayRate;
    float position;
    float BlendTime;
    uint8 NextSectionID;
    uint8 bRepPosition;
    uint8 IsStopped;
    uint8 ForcePlayBit;
    uint8 SkipPositionCorrection;
    uint8 bSkipPlayRate;
    FPredictionKey PredictionKey;
    uint8 SectionIdToPlay;

};

struct FGameplayAbilityLocalAnimMontage
{
    class UAnimMontage* AnimMontage;
    bool PlayBit;
    FPredictionKey PredictionKey;
    class UGameplayAbility* AnimatingAbility;

};

struct FGameplayEffectModifiedAttribute
{
    FGameplayAttribute Attribute;
    float TotalMagnitude;

};

struct FGameplayEffectAttributeCaptureDefinition
{
    FGameplayAttribute AttributeToCapture;
    EGameplayEffectAttributeCaptureSource AttributeSource;
    bool bSnapshot;

};

struct FGameplayEffectAttributeCaptureSpec
{
    FGameplayEffectAttributeCaptureDefinition BackingDefinition;

};

struct FGameplayEffectAttributeCaptureSpecContainer
{
    TArray<FGameplayEffectAttributeCaptureSpec> SourceAttributes;
    TArray<FGameplayEffectAttributeCaptureSpec> TargetAttributes;
    bool bHasNonSnapshottedAttributes;

};

struct FTagContainerAggregator
{
    FGameplayTagContainer CapturedActorTags;
    FGameplayTagContainer CapturedSpecTags;
    FGameplayTagContainer ScopedTags;

};

struct FModifierSpec
{
    float EvaluatedMagnitude;

};

struct FScalableFloat
{
    float Value;
    FCurveTableRowHandle Curve;
    FDataRegistryType RegistryType;

};

struct FGameplayAbilitySpecDef
{
    TSubclassOf<class UGameplayAbility> Ability;
    FScalableFloat LevelScalableFloat;
    int32 InputID;
    EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy;
    class UObject* SourceObject;
    FGameplayAbilitySpecHandle AssignedHandle;

};

struct FGameplayEffectSpec
{
    class UGameplayEffect* Def;
    TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes;
    FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;
    float Duration;
    float Period;
    float ChanceToApplyToTarget;
    FTagContainerAggregator CapturedSourceTags;
    FTagContainerAggregator CapturedTargetTags;
    FGameplayTagContainer DynamicGrantedTags;
    FGameplayTagContainer DynamicAssetTags;
    TArray<FModifierSpec> Modifiers;
    int32 StackCount;
    uint8 bCompletedSourceAttributeCapture;
    uint8 bCompletedTargetAttributeCapture;
    uint8 bDurationLocked;
    TArray<FGameplayAbilitySpecDef> GrantedAbilitySpecs;
    FGameplayEffectContextHandle EffectContext;
    float Level;

};

struct FActiveGameplayEffect : public FFastArraySerializerItem
{
    FGameplayEffectSpec Spec;
    FPredictionKey PredictionKey;
    float StartServerWorldTime;
    float CachedStartServerWorldTime;
    float StartWorldTime;
    bool bIsInhibited;

};

struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
    TArray<FActiveGameplayEffect> GameplayEffects_Internal;
    TArray<class UGameplayEffect*> ApplicationImmunityQueryEffects;

};

struct FActiveGameplayCue : public FFastArraySerializerItem
{
    FGameplayTag GameplayCueTag;
    FPredictionKey PredictionKey;
    FGameplayCueParameters Parameters;
    bool bPredictivelyRemoved;

};

struct FActiveGameplayCueContainer : public FFastArraySerializer
{
    TArray<FActiveGameplayCue> GameplayCues;
    class UAbilitySystemComponent* Owner;

};

struct FMinimalReplicationTagCountMap
{
    class UAbilitySystemComponent* Owner;

};

struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{
    FPredictionKey PredictionKey;

};

struct FReplicatedPredictionKeyMap : public FFastArraySerializer
{
    TArray<FReplicatedPredictionKeyItem> PredictionKeys;

};

struct FGameplayEffectQuery
{
    FGameplayEffectQueryCustomMatchDelegate_BP CustomMatchDelegate_BP;
    void ActiveGameplayEffectQueryCustomMatch_Dynamic(FActiveGameplayEffect Effect, bool& bMatches);
    FGameplayTagQuery OwningTagQuery;
    FGameplayTagQuery EffectTagQuery;
    FGameplayTagQuery SourceTagQuery;
    FGameplayAttribute ModifyingAttribute;
    class UObject* EffectSource;
    TSubclassOf<class UGameplayEffect> EffectDefinition;

};

struct FServerAbilityRPCBatch
{
    FGameplayAbilitySpecHandle AbilitySpecHandle;
    FPredictionKey PredictionKey;
    FGameplayAbilityTargetDataHandle TargetData;
    bool InputPressed;
    bool Ended;
    bool Started;

};

struct FGameplayEffectSpecForRPC
{
    class UGameplayEffect* Def;
    TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes;
    FGameplayEffectContextHandle EffectContext;
    FGameplayTagContainer AggregatedSourceTags;
    FGameplayTagContainer AggregatedTargetTags;
    float Level;
    float AbilityLevel;

};

class UAbilitySystemComponent : public UGameplayTasksComponent
{
    TArray<FAttributeDefaults> DefaultStartingData;
    TArray<class UAttributeSet*> SpawnedAttributes;
    FName AffectedAnimInstanceTag;
    float OutgoingDuration;
    float IncomingDuration;
    TArray<FString> ClientDebugStrings;
    TArray<FString> ServerDebugStrings;
    bool UserAbilityActivationInhibited;
    bool ReplicationProxyEnabled;
    bool bSuppressGrantAbility;
    bool bSuppressGameplayCues;
    TArray<class AGameplayAbilityTargetActor*> SpawnedTargetActors;
    class AActor* OwnerActor;
    class AActor* AvatarActor;
    FGameplayAbilitySpecContainer ActivatableAbilities;
    TArray<class UGameplayAbility*> AllReplicatedInstancedAbilities;
    FGameplayAbilityRepAnimMontage RepAnimMontageInfo;
    bool bCachedIsNetSimulated;
    bool bPendingMontageRep;
    FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo;
    FActiveGameplayEffectsContainer ActiveGameplayEffects;
    FActiveGameplayCueContainer ActiveGameplayCues;
    FActiveGameplayCueContainer MinimalReplicationGameplayCues;
    TArray<uint8> BlockedAbilityBindings;
    FMinimalReplicationTagCountMap MinimalReplicationTags;
    FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap;

    bool TryActivateAbilityByClass(TSubclassOf<class UGameplayAbility> InAbilityToActivate, bool bAllowRemoteActivation);
    bool TryActivateAbilitiesByTag(const FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
    void TargetConfirm();
    void TargetCancel();
    void SetUserAbilityActivationInhibited(bool NewInhibit);
    void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32 NewLevel);
    void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32 NewLevel);
    void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData);
    void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey);
    void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey);
    void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, const FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey);
    void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload);
    void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey);
    void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle);
    void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle);
    void ServerPrintDebug_RequestWithStrings(const TArray<FString>& Strings);
    void ServerPrintDebug_Request();
    void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey);
    void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
    void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName);
    void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, FName SectionName);
    void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);
    void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo);
    void RemoveActiveGameplayEffectBySourceEffect(TSubclassOf<class UGameplayEffect> GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32 StacksToRemove);
    bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32 StacksToRemove);
    int32 RemoveActiveEffectsWithTags(FGameplayTagContainer Tags);
    int32 RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags);
    int32 RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags);
    int32 RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags);
    void OnRep_ServerDebugString();
    void OnRep_ReplicatedAnimMontage();
    void OnRep_OwningActor();
    void OnRep_ClientDebugString();
    void OnRep_ActivateAbilities();
    void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    void NetMulticast_InvokeGameplayCuesExecuted(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    void NetMulticast_InvokeGameplayCueExecuted_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);
    void NetMulticast_InvokeGameplayCueExecuted(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const FGameplayEffectSpecForRPC& Spec, FPredictionKey PredictionKey);
    void NetMulticast_InvokeGameplayCueAdded_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters);
    void NetMulticast_InvokeGameplayCueAdded(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    FGameplayEffectSpecHandle MakeOutgoingSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle Context);
    FGameplayEffectContextHandle MakeEffectContext();
    void K2_InitStats(TSubclassOf<class UAttributeSet> Attributes, const class UDataTable* DataTable);
    bool IsGameplayCueActive(const FGameplayTag GameplayCueTag);
    bool GetUserAbilityActivationInhibited();
    float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute);
    int32 GetGameplayEffectCount(TSubclassOf<class UGameplayEffect> SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
    TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(FGameplayTagContainer Tags);
    TArray<FActiveGameplayEffectHandle> GetActiveEffects(const FGameplayEffectQuery& Query);
    void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate);
    void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey);
    void ClientPrintDebug_Response(const TArray<FString>& Strings, int32 GameFlags);
    void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo);
    void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);
    void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData);
    void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey);
    void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16 PredictionKey);
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(TSubclassOf<class UGameplayEffect> GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context);
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext);
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(const FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target);
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(const FGameplayEffectSpecHandle& SpecHandle);
    void AbilityConfirmOrCancel__DelegateSignature();
    void AbilityAbilityKey__DelegateSignature(int32 InputID);
};

class AAbilitySystemDebugHUD : public AHUD
{
};

struct FNetSerializeScriptStructCache
{
    TArray<class UScriptStruct*> ScriptStructs;

};

class UAbilitySystemGlobals : public UObject
{
    FSoftClassPath AbilitySystemGlobalsClassName;
    FGameplayTag ActivateFailIsDeadTag;
    FName ActivateFailIsDeadName;
    FGameplayTag ActivateFailCooldownTag;
    FName ActivateFailCooldownName;
    FGameplayTag ActivateFailCostTag;
    FName ActivateFailCostName;
    FGameplayTag ActivateFailTagsBlockedTag;
    FName ActivateFailTagsBlockedName;
    FGameplayTag ActivateFailTagsMissingTag;
    FName ActivateFailTagsMissingName;
    FGameplayTag ActivateFailNetworkingTag;
    FName ActivateFailNetworkingName;
    int32 MinimalReplicationTagCountBits;
    FNetSerializeScriptStructCache TargetDataStructCache;
    bool bAllowGameplayModEvaluationChannels;
    EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel;
    FName GameplayModEvaluationChannelAliases;
    FSoftObjectPath GlobalCurveTableName;
    class UCurveTable* GlobalCurveTable;
    FSoftObjectPath GlobalAttributeMetaDataTableName;
    class UDataTable* GlobalAttributeMetaDataTable;
    FSoftObjectPath GlobalAttributeSetDefaultsTableName;
    TArray<FSoftObjectPath> GlobalAttributeSetDefaultsTableNames;
    TArray<class UCurveTable*> GlobalAttributeDefaultsTables;
    FSoftObjectPath GlobalGameplayCueManagerClass;
    FSoftObjectPath GlobalGameplayCueManagerName;
    TArray<FString> GameplayCueNotifyPaths;
    FSoftObjectPath GameplayTagResponseTableName;
    class UGameplayTagReponseTable* GameplayTagResponseTable;
    bool PredictTargetGameplayEffects;
    class UGameplayCueManager* GlobalGameplayCueManager;

    void ToggleIgnoreAbilitySystemCosts();
    void ToggleIgnoreAbilitySystemCooldowns();
    void ServerEndPlayerAbility(FString AbilityNameMatch);
    void ServerCancelPlayerAbility(FString AbilityNameMatch);
    void ServerActivatePlayerAbility(FString AbilityNameMatch);
    void ListPlayerAbilities();
};

class IAbilitySystemInterface : public IInterface
{
};

class IAbilitySystemReplicationProxyInterface : public IInterface
{
};

class UAttributeSet : public UObject
{
};

class UAbilitySystemTestAttributeSet : public UAttributeSet
{
    float MaxHealth;
    float Health;
    float Mana;
    float MaxMana;
    float Damage;
    float SpellDamage;
    float PhysicalDamage;
    float CritChance;
    float CritMultiplier;
    float ArmorDamageReduction;
    float DodgeChance;
    float LifeSteal;
    float Strength;
    float StackingAttribute1;
    float StackingAttribute2;
    float NoStackAttribute;

};

class AAbilitySystemTestPawn : public ADefaultPawn
{
    class UAbilitySystemComponent* AbilitySystemComponent;

};

class UAbilityTask : public UGameplayTask
{
    class UGameplayAbility* Ability;
    class UAbilitySystemComponent* AbilitySystemComponent;

};

class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
    FName ForceName;
    ERootMotionFinishVelocityMode FinishVelocityMode;
    FVector FinishSetVelocity;
    float FinishClampVelocity;
    class UCharacterMovementComponent* MovementComponent;

};

class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
    FAbilityTask_ApplyRootMotionConstantForceOnFinish OnFinish;
    void ApplyRootMotionConstantForceDelegate();
    FVector WorldDirection;
    float Strength;
    float Duration;
    bool bIsAdditive;
    class UCurveFloat* StrengthOverTime;
    bool bEnableGravity;

    class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity);
};

class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
    FAbilityTask_ApplyRootMotionJumpForceOnFinish OnFinish;
    void ApplyRootMotionJumpForceDelegate();
    FAbilityTask_ApplyRootMotionJumpForceOnLanded OnLanded;
    void ApplyRootMotionJumpForceDelegate();
    FRotator Rotation;
    float Distance;
    float Height;
    float Duration;
    float MinimumLandedTriggerTime;
    bool bFinishOnLanded;
    class UCurveVector* PathOffsetCurve;
    class UCurveFloat* TimeMappingCurve;

    void OnLandedCallback(const FHitResult& Hit);
    void Finish();
    class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
};

class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
    FAbilityTask_ApplyRootMotionMoveToActorForceOnFinished OnFinished;
    void ApplyRootMotionMoveToActorForceDelegate(bool DestinationReached, bool TimedOut, FVector FinalTargetLocation);
    FVector StartLocation;
    FVector TargetLocation;
    class AActor* TargetActor;
    FVector TargetLocationOffset;
    ERootMotionMoveToActorTargetOffsetType OffsetAlignment;
    float Duration;
    bool bDisableDestinationReachedInterrupt;
    bool bSetNewMovementMode;
    TEnumAsByte<EMovementMode> NewMovementMode;
    bool bRestrictSpeedToExpected;
    class UCurveVector* PathOffsetCurve;
    class UCurveFloat* TimeMappingCurve;
    class UCurveFloat* TargetLerpSpeedHorizontalCurve;
    class UCurveFloat* TargetLerpSpeedVerticalCurve;

    void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);
    void OnRep_TargetLocation();
    class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32 TargetDataIndex, int32 TargetActorIndex, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
    class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* TargetActor, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
};

class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
    FAbilityTask_ApplyRootMotionMoveToForceOnTimedOut OnTimedOut;
    void ApplyRootMotionMoveToForceDelegate();
    FAbilityTask_ApplyRootMotionMoveToForceOnTimedOutAndDestinationReached OnTimedOutAndDestinationReached;
    void ApplyRootMotionMoveToForceDelegate();
    FVector StartLocation;
    FVector TargetLocation;
    float Duration;
    bool bSetNewMovementMode;
    TEnumAsByte<EMovementMode> NewMovementMode;
    bool bRestrictSpeedToExpected;
    class UCurveVector* PathOffsetCurve;

    class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
};

class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
    FAbilityTask_ApplyRootMotionRadialForceOnFinish OnFinish;
    void ApplyRootMotionRadialForceDelegate();
    FVector Location;
    class AActor* LocationActor;
    float Strength;
    float Duration;
    float Radius;
    bool bIsPush;
    bool bIsAdditive;
    bool bNoZForce;
    class UCurveFloat* StrengthDistanceFalloff;
    class UCurveFloat* StrengthOverTime;
    bool bUseFixedWorldDirection;
    FRotator FixedWorldDirection;

    class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
};

class UAbilityTask_MoveToLocation : public UAbilityTask
{
    FAbilityTask_MoveToLocationOnTargetLocationReached OnTargetLocationReached;
    void MoveToLocationDelegate();
    FVector StartLocation;
    FVector TargetLocation;
    float DurationOfMovement;
    class UCurveFloat* LerpCurve;
    class UCurveVector* LerpCurveVector;

    class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};

class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
    FAbilityTask_NetworkSyncPointOnSync OnSync;
    void NetworkSyncDelegate();

    class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType);
    void OnSignalCallback();
};

class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
    FAbilityTask_PlayMontageAndWaitOnCompleted OnCompleted;
    void MontageWaitSimpleDelegate();
    FAbilityTask_PlayMontageAndWaitOnBlendOut OnBlendOut;
    void MontageWaitSimpleDelegate();
    FAbilityTask_PlayMontageAndWaitOnInterrupted OnInterrupted;
    void MontageWaitSimpleDelegate();
    FAbilityTask_PlayMontageAndWaitOnCancelled OnCancelled;
    void MontageWaitSimpleDelegate();
    class UAnimMontage* MontageToPlay;
    float Rate;
    FName StartSection;
    float AnimRootMotionTranslationScale;
    float StartTimeSeconds;
    bool bStopWhenAbilityEnds;

    void OnMontageInterrupted();
    void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
    class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds);
};

class UAbilityTask_Repeat : public UAbilityTask
{
    FAbilityTask_RepeatOnPerformAction OnPerformAction;
    void RepeatedActionDelegate(int32 ActionNumber);
    FAbilityTask_RepeatOnFinished OnFinished;
    void RepeatedActionDelegate(int32 ActionNumber);

    class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32 TotalActionCount);
};

class UAbilityTask_SpawnActor : public UAbilityTask
{
    FAbilityTask_SpawnActorSuccess Success;
    void SpawnActorDelegate(class AActor* SpawnedActor);
    FAbilityTask_SpawnActorDidNotSpawn DidNotSpawn;
    void SpawnActorDelegate(class AActor* SpawnedActor);

    class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<class AActor> Class);
    void FinishSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class AActor* SpawnedActor);
    bool BeginSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<class AActor> Class, class AActor*& SpawnedActor);
};

class UAbilityTask_StartAbilityState : public UAbilityTask
{
    FAbilityTask_StartAbilityStateOnStateEnded OnStateEnded;
    void AbilityStateDelegate();
    FAbilityTask_StartAbilityStateOnStateInterrupted OnStateInterrupted;
    void AbilityStateDelegate();

    class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState);
};

class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
    FAbilityTask_VisualizeTargetingTimeElapsed TimeElapsed;
    void VisualizeTargetingDelegate();

    class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float Duration);
    class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, FName TaskInstanceName, float Duration);
    void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
    bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor*& SpawnedActor);
};

class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
    FAbilityTask_WaitAbilityActivateOnActivate OnActivate;
    void WaitAbilityActivateDelegate(class UGameplayAbility* ActivatedAbility);

    class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
    class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
    class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
    void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
};

class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
    FAbilityTask_WaitAbilityCommitOnCommit OnCommit;
    void WaitAbilityCommitDelegate(class UGameplayAbility* ActivatedAbility);

    class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce);
    class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce);
    void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
};

class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
    FAbilityTask_WaitAttributeChangeOnChange OnChange;
    void WaitAttributeChangeDelegate();
    class UAbilitySystemComponent* ExternalOwner;

    class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison::Type> InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner);
    class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner);
};

class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
    FAbilityTask_WaitAttributeChangeRatioThresholdOnChange OnChange;
    void WaitAttributeChangeRatioThresholdDelegate(bool bMatchesComparison, float CurrentRatio);
    class UAbilitySystemComponent* ExternalOwner;

    class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};

class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
    FAbilityTask_WaitAttributeChangeThresholdOnChange OnChange;
    void WaitAttributeChangeThresholdDelegate(bool bMatchesComparison, float CurrentValue);
    class UAbilitySystemComponent* ExternalOwner;

    class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};

class UAbilityTask_WaitCancel : public UAbilityTask
{
    FAbilityTask_WaitCancelOnCancel OnCancel;
    void WaitCancelDelegate();

    class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);
    void OnLocalCancelCallback();
    void OnCancelCallback();
};

class UAbilityTask_WaitConfirm : public UAbilityTask
{
    FAbilityTask_WaitConfirmOnConfirm OnConfirm;
    void GenericGameplayTaskDelegate();

    class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);
    void OnConfirmCallback(class UGameplayAbility* InAbility);
};

class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
    FAbilityTask_WaitConfirmCancelOnConfirm OnConfirm;
    void WaitConfirmCancelDelegate();
    FAbilityTask_WaitConfirmCancelOnCancel OnCancel;
    void WaitConfirmCancelDelegate();

    class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);
    void OnLocalConfirmCallback();
    void OnLocalCancelCallback();
    void OnConfirmCallback();
    void OnCancelCallback();
};

class UAbilityTask_WaitDelay : public UAbilityTask
{
    FAbilityTask_WaitDelayOnFinish OnFinish;
    void WaitDelayDelegate();

    class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);
};

class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
    class UAbilitySystemComponent* ExternalOwner;

    void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle);
};

class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
    FAbilityTask_WaitGameplayEffectApplied_SelfOnApplied OnApplied;
    void GameplayEffectAppliedSelfDelegate(class AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle);

    class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
    class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
};

class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
    FAbilityTask_WaitGameplayEffectApplied_TargetOnApplied OnApplied;
    void GameplayEffectAppliedTargetDelegate(class AActor* Target, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle);

    class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
    class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
};

class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
    FAbilityTask_WaitGameplayEffectBlockedImmunityBLocked bLocked;
    void GameplayEffectBlockedDelegate(FGameplayEffectSpecHandle BlockedSpec, FActiveGameplayEffectHandle ImmunityGameplayEffectHandle);
    class UAbilitySystemComponent* ExternalOwner;

    class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};

struct FGameplayEffectRemovalInfo
{
    bool bPrematureRemoval;
    int32 StackCount;
    FGameplayEffectContextHandle EffectContext;

};

class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
    FAbilityTask_WaitGameplayEffectRemovedOnRemoved OnRemoved;
    void WaitGameplayEffectRemovedDelegate(const FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
    FAbilityTask_WaitGameplayEffectRemovedInvalidHandle InvalidHandle;
    void WaitGameplayEffectRemovedDelegate(const FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);

    class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle);
    void OnGameplayEffectRemoved(const FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
};

class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
    FAbilityTask_WaitGameplayEffectStackChangeOnChange OnChange;
    void WaitGameplayEffectStackChangeDelegate(FActiveGameplayEffectHandle Handle, int32 NewCount, int32 OldCount);
    FAbilityTask_WaitGameplayEffectStackChangeInvalidHandle InvalidHandle;
    void WaitGameplayEffectStackChangeDelegate(FActiveGameplayEffectHandle Handle, int32 NewCount, int32 OldCount);

    class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle);
    void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32 NewCount, int32 OldCount);
};

class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
    FAbilityTask_WaitGameplayEventEventReceived EventReceived;
    void WaitGameplayEventDelegate(FGameplayEventData Payload);
    class UAbilitySystemComponent* OptionalExternalTarget;

    class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, FGameplayTag EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);
};

class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
    class UAbilitySystemComponent* OptionalExternalTarget;

    void GameplayTagCallback(const FGameplayTag Tag, int32 NewCount);
};

class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
    FAbilityTask_WaitGameplayTagAddedAdded Added;
    void WaitGameplayTagDelegate();

    class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
    FAbilityTask_WaitGameplayTagRemovedRemoved Removed;
    void WaitGameplayTagDelegate();

    class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

class UAbilityTask_WaitInputPress : public UAbilityTask
{
    FAbilityTask_WaitInputPressOnPress OnPress;
    void InputPressDelegate(float TimeWaited);

    class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
    void OnPressCallback();
};

class UAbilityTask_WaitInputRelease : public UAbilityTask
{
    FAbilityTask_WaitInputReleaseOnRelease OnRelease;
    void InputReleaseDelegate(float TimeHeld);

    class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
    void OnReleaseCallback();
};

class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
    FAbilityTask_WaitMovementModeChangeOnChange OnChange;
    void MovementModeChangedDelegate(TEnumAsByte<EMovementMode> NewMovementMode);

    void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode);
};

class UAbilityTask_WaitOverlap : public UAbilityTask
{
    FAbilityTask_WaitOverlapOnOverlap OnOverlap;
    void WaitOverlapDelegate(const FGameplayAbilityTargetDataHandle& TargetData);

    class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);
    void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};

class UAbilityTask_WaitTargetData : public UAbilityTask
{
    FAbilityTask_WaitTargetDataValidData ValidData;
    void WaitTargetDataDelegate(const FGameplayAbilityTargetDataHandle& Data);
    FAbilityTask_WaitTargetDataCancelled cancelled;
    void WaitTargetDataDelegate(const FGameplayAbilityTargetDataHandle& Data);
    TSubclassOf<class AGameplayAbilityTargetActor> TargetClass;
    class AGameplayAbilityTargetActor* TargetActor;

    class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
    class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, TSubclassOf<class AGameplayAbilityTargetActor> Class);
    void OnTargetDataReplicatedCancelledCallback();
    void OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data);
    void OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data);
    void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
    bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor*& SpawnedActor);
};

class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
    FAbilityTask_WaitVelocityChangeOnVelocityChage OnVelocityChage;
    void WaitVelocityChangeDelegate();
    class UMovementComponent* CachedMovementComponent;

    class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude);
};

struct FAbilityTriggerData
{
    FGameplayTag TriggerTag;
    TEnumAsByte<EGameplayAbilityTriggerSource::Type> TriggerSource;

};

struct FGameplayAbilityActorInfo
{
    TWeakObjectPtr<class AActor> OwnerActor;
    TWeakObjectPtr<class AActor> AvatarActor;
    TWeakObjectPtr<class APlayerController> PlayerController;
    TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;
    TWeakObjectPtr<class USkeletalMeshComponent> SkeletalMeshComponent;
    TWeakObjectPtr<class UAnimInstance> AnimInstance;
    TWeakObjectPtr<class UMovementComponent> MovementComponent;
    FName AffectedAnimInstanceTag;

};

class UGameplayAbility : public UObject
{
    FGameplayTagContainer AbilityTags;
    bool bReplicateInputDirectly;
    bool RemoteInstanceEnded;
    TEnumAsByte<EGameplayAbilityReplicationPolicy::Type> ReplicationPolicy;
    TEnumAsByte<EGameplayAbilityInstancingPolicy::Type> InstancingPolicy;
    bool bServerRespectsRemoteAbilityCancellation;
    bool bRetriggerInstancedAbility;
    FGameplayAbilityActivationInfo CurrentActivationInfo;
    FGameplayEventData CurrentEventData;
    TEnumAsByte<EGameplayAbilityNetExecutionPolicy::Type> NetExecutionPolicy;
    TEnumAsByte<EGameplayAbilityNetSecurityPolicy::Type> NetSecurityPolicy;
    TSubclassOf<class UGameplayEffect> CostGameplayEffectClass;
    TArray<FAbilityTriggerData> AbilityTriggers;
    TSubclassOf<class UGameplayEffect> CooldownGameplayEffectClass;
    FGameplayTagContainer CancelAbilitiesWithTag;
    FGameplayTagContainer BlockAbilitiesWithTag;
    FGameplayTagContainer ActivationOwnedTags;
    FGameplayTagContainer ActivationRequiredTags;
    FGameplayTagContainer ActivationBlockedTags;
    FGameplayTagContainer SourceRequiredTags;
    FGameplayTagContainer SourceBlockedTags;
    FGameplayTagContainer TargetRequiredTags;
    FGameplayTagContainer TargetBlockedTags;
    TArray<class UGameplayTask*> ActiveTasks;
    class UAnimMontage* CurrentMontage;
    bool bIsActive;
    bool bIsAbilityEnding;
    bool bIsCancelable;
    bool bIsBlockingOtherAbilities;
    bool bMarkPendingKillOnAbilityEnd;

    void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
    void SetCanBeCanceled(bool bCanBeCanceled);
    void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);
    void RemoveGrantedByEffect();
    void MontageStop(float OverrideBlendOutTime);
    void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName);
    void MontageJumpToSection(FName SectionName);
    FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName);
    FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
    FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level);
    bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload);
    void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag);
    void K2_OnEndAbility(bool bWasCancelled);
    bool K2_HasAuthority();
    void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);
    void K2_EndAbility();
    void K2_CommitExecute();
    bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
    bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
    bool K2_CommitAbility();
    bool K2_CheckAbilityCost();
    bool K2_CheckAbilityCooldown();
    void K2_CancelAbility();
    bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, const FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags);
    TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData);
    FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const FGameplayEffectSpecHandle EffectSpecHandle);
    void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
    void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);
    void K2_ActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void K2_ActivateAbility();
    bool IsLocallyControlled();
    void InvalidateClientPredictionKey();
    class UObject* GetSourceObject_BP(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo);
    class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
    class AActor* GetOwningActorFromActorInfo();
    FGameplayEffectContextHandle GetGrantedByEffectContext();
    class UObject* GetCurrentSourceObject();
    class UAnimMontage* GetCurrentMontage();
    float GetCooldownTimeRemaining();
    FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData);
    class AActor* GetAvatarActorFromActorInfo();
    FGameplayAbilityActorInfo GetActorInfo();
    class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();
    int32 GetAbilityLevel_BP(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo);
    int32 GetAbilityLevel();
    void EndTaskByInstanceName(FName InstanceName);
    void EndAbilityState(FName OptionalStateNameToEnd);
    void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask);
    void CancelTaskByInstanceName(FName InstanceName);
    void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32 StacksToRemove);
    void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32 StacksToRemove);
    void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32 StacksToRemove);
    TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
};

class UGameplayAbility_CharacterJump : public UGameplayAbility
{
};

class UGameplayAbility_Montage : public UGameplayAbility
{
    class UAnimMontage* MontageToPlay;
    float PlayRate;
    FName SectionName;
    TArray<class TSubclassOf<UGameplayEffect>> GameplayEffectClassesWhileAnimating;
    TArray<class UGameplayEffect*> GameplayEffectsWhileAnimating;

};

class UGameplayAbilityBlueprint : public UBlueprint
{
};

struct FGameplayAbilityBindInfo
{
    TEnumAsByte<EGameplayAbilityInputBinds::Type> Command;
    TSubclassOf<class UGameplayAbility> GameplayAbilityClass;

};

class UGameplayAbilitySet : public UDataAsset
{
    TArray<FGameplayAbilityBindInfo> Abilities;

};

struct FWorldReticleParameters
{
    FVector AOEScale;

};

class AGameplayAbilityTargetActor : public AActor
{
    bool ShouldProduceTargetDataOnServer;
    FGameplayAbilityTargetingLocationInfo StartLocation;
    class APlayerController* MasterPC;
    class UGameplayAbility* OwningAbility;
    bool bDestroyOnConfirmation;
    class AActor* SourceActor;
    FWorldReticleParameters ReticleParams;
    TSubclassOf<class AGameplayAbilityWorldReticle> ReticleClass;
    FGameplayTargetDataFilterHandle Filter;
    bool bDebug;
    class UAbilitySystemComponent* GenericDelegateBoundASC;

    void ConfirmTargeting();
    void CancelTargeting();
};

class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
    float MaxRange;
    FCollisionProfileName TraceProfile;
    bool bTraceAffectsAimPitch;

};

class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
    float CollisionRadius;
    float CollisionHeight;

};

class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
    UClass* PlacedActorClass;
    class UMaterialInterface* PlacedActorMaterial;

};

class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
    float Radius;

};

class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
};

class AGameplayAbilityWorldReticle : public AActor
{
    FWorldReticleParameters Parameters;
    bool bFaceOwnerFlat;
    bool bSnapToTargetedActor;
    bool bIsTargetValid;
    bool bIsTargetAnActor;
    class APlayerController* MasterPC;
    class AActor* TargetingActor;

    void SetReticleMaterialParamVector(FName ParamName, FVector Value);
    void SetReticleMaterialParamFloat(FName ParamName, float Value);
    void OnValidTargetChanged(bool bNewValue);
    void OnTargetingAnActor(bool bNewValue);
    void OnParametersInitialized();
    void FaceTowardSource(bool bFaceIn2D);
};

class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
    class UCapsuleComponent* CollisionComponent;
    TArray<class UActorComponent*> VisualizationComponents;

};

class IGameplayCueInterface : public IInterface
{

    void ForwardGameplayCueToParent();
    void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters);
};

struct FGameplayCueObjectLibrary
{
    TArray<FString> Paths;
    class UObjectLibrary* ActorObjectLibrary;
    class UObjectLibrary* StaticObjectLibrary;
    class UGameplayCueSet* CueSet;
    bool bShouldSyncScan;
    bool bShouldAsyncLoad;
    bool bShouldSyncLoad;
    bool bHasBeenInitialized;

};

struct FGameplayCuePendingExecute
{
    FPredictionKey PredictionKey;
    EGameplayCuePayloadType PayloadType;
    class UAbilitySystemComponent* OwningComponent;
    FGameplayEffectSpecForRPC FromSpec;
    FGameplayCueParameters CueParameters;

};

struct FPreallocationInfo
{
    TArray<class TSubclassOf<AGameplayCueNotify_Actor>> ClassesNeedingPreallocation;

};

class UGameplayCueManager : public UDataAsset
{
    FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary;
    FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary;
    TArray<class UClass*> LoadedGameplayCueNotifyClasses;
    TArray<class TSubclassOf<AGameplayCueNotify_Actor>> GameplayCueClassesForPreallocation;
    TArray<FGameplayCuePendingExecute> PendingExecuteCues;
    int32 GameplayCueSendContextCount;
    TArray<FPreallocationInfo> PreallocationInfoList_Internal;

};

class AGameplayCueNotify_Actor : public AActor
{
    bool bAutoDestroyOnRemove;
    float AutoDestroyDelay;
    bool WarnIfTimelineIsStillRunning;
    bool WarnIfLatentActionIsStillRunning;
    FGameplayTag GameplayCueTag;
    FName GameplayCueName;
    bool bAutoAttachToOwner;
    bool IsOverride;
    bool bUniqueInstancePerInstigator;
    bool bUniqueInstancePerSourceObject;
    bool bAllowMultipleOnActiveEvents;
    bool bAllowMultipleWhileActiveEvents;
    int32 NumPreallocatedInstances;

    bool WhileActive(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    bool OnRemove(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    void OnOwnerDestroyed(class AActor* DestroyedActor);
    bool OnExecute(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    bool OnActive(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters);
    void K2_EndGameplayCue();
};

class UGameplayCueNotify_Static : public UObject
{
    FGameplayTag GameplayCueTag;
    FName GameplayCueName;
    bool IsOverride;

    bool WhileActive(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    bool OnRemove(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    bool OnExecute(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    bool OnActive(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters);
};

class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
    class USoundBase* Sound;
    class UParticleSystem* ParticleSystem;

};

struct FGameplayCueNotifyData
{
    FGameplayTag GameplayCueTag;
    FSoftObjectPath GameplayCueNotifyObj;
    UClass* LoadedGameplayCueClass;

};

class UGameplayCueSet : public UDataAsset
{
    TArray<FGameplayCueNotifyData> GameplayCueData;

};

class UGameplayCueTranslator : public UObject
{
};

class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
};

struct FAttributeBasedFloat
{
    FScalableFloat Coefficient;
    FScalableFloat PreMultiplyAdditiveValue;
    FScalableFloat PostMultiplyAdditiveValue;
    FGameplayEffectAttributeCaptureDefinition BackingAttribute;
    FCurveTableRowHandle AttributeCurve;
    EAttributeBasedFloatCalculationType AttributeCalculationType;
    EGameplayModEvaluationChannel FinalChannel;
    FGameplayTagContainer SourceTagFilter;
    FGameplayTagContainer TargetTagFilter;

};

struct FCustomCalculationBasedFloat
{
    TSubclassOf<class UGameplayModMagnitudeCalculation> CalculationClassMagnitude;
    FScalableFloat Coefficient;
    FScalableFloat PreMultiplyAdditiveValue;
    FScalableFloat PostMultiplyAdditiveValue;
    FCurveTableRowHandle FinalLookupCurve;

};

struct FSetByCallerFloat
{
    FName DataName;
    FGameplayTag DataTag;

};

struct FGameplayEffectModifierMagnitude
{
    EGameplayEffectMagnitudeCalculation MagnitudeCalculationType;
    FScalableFloat ScalableFloatMagnitude;
    FAttributeBasedFloat AttributeBasedMagnitude;
    FCustomCalculationBasedFloat CustomMagnitude;
    FSetByCallerFloat SetByCallerMagnitude;

};

struct FGameplayModEvaluationChannelSettings
{
    EGameplayModEvaluationChannel Channel;

};

struct FGameplayModifierInfo
{
    FGameplayAttribute Attribute;
    TEnumAsByte<EGameplayModOp::Type> ModifierOp;
    FScalableFloat Magnitude;
    FGameplayEffectModifierMagnitude ModifierMagnitude;
    FGameplayModEvaluationChannelSettings EvaluationChannelSettings;
    FGameplayTagRequirements SourceTags;
    FGameplayTagRequirements TargetTags;

};

struct FGameplayEffectExecutionScopedModifierInfo
{
    FGameplayEffectAttributeCaptureDefinition CapturedAttribute;
    FGameplayTag TransientAggregatorIdentifier;
    EGameplayEffectScopedModifierAggregatorType AggregatorType;
    TEnumAsByte<EGameplayModOp::Type> ModifierOp;
    FGameplayEffectModifierMagnitude ModifierMagnitude;
    FGameplayModEvaluationChannelSettings EvaluationChannelSettings;
    FGameplayTagRequirements SourceTags;
    FGameplayTagRequirements TargetTags;

};

struct FConditionalGameplayEffect
{
    TSubclassOf<class UGameplayEffect> EffectClass;
    FGameplayTagContainer RequiredSourceTags;

};

struct FGameplayEffectExecutionDefinition
{
    TSubclassOf<class UGameplayEffectExecutionCalculation> CalculationClass;
    FGameplayTagContainer PassedInTags;
    TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;
    TArray<class TSubclassOf<UGameplayEffect>> ConditionalGameplayEffectClasses;
    TArray<FConditionalGameplayEffect> ConditionalGameplayEffects;

};

struct FGameplayEffectCue
{
    FGameplayAttribute MagnitudeAttribute;
    float MinLevel;
    float MaxLevel;
    FGameplayTagContainer GameplayCueTags;

};

struct FInheritedTagContainer
{
    FGameplayTagContainer CombinedTags;
    FGameplayTagContainer Added;
    FGameplayTagContainer Removed;

};

class UGameplayEffect : public UObject
{
    EGameplayEffectDurationType DurationPolicy;
    FGameplayEffectModifierMagnitude DurationMagnitude;
    FScalableFloat Period;
    bool bExecutePeriodicEffectOnApplication;
    EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy;
    TArray<FGameplayModifierInfo> Modifiers;
    TArray<FGameplayEffectExecutionDefinition> Executions;
    FScalableFloat ChanceToApplyToTarget;
    TArray<class TSubclassOf<UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements;
    TArray<class TSubclassOf<UGameplayEffect>> TargetEffectClasses;
    TArray<FConditionalGameplayEffect> ConditionalGameplayEffects;
    TArray<class TSubclassOf<UGameplayEffect>> OverflowEffects;
    bool bDenyOverflowApplication;
    bool bClearStackOnOverflow;
    TArray<class TSubclassOf<UGameplayEffect>> PrematureExpirationEffectClasses;
    TArray<class TSubclassOf<UGameplayEffect>> RoutineExpirationEffectClasses;
    bool bRequireModifierSuccessToTriggerCues;
    bool bSuppressStackingCues;
    TArray<FGameplayEffectCue> GameplayCues;
    class UGameplayEffectUIData* UIData;
    FInheritedTagContainer InheritableGameplayEffectTags;
    FInheritedTagContainer InheritableOwnedTagsContainer;
    FGameplayTagRequirements OngoingTagRequirements;
    FGameplayTagRequirements ApplicationTagRequirements;
    FGameplayTagRequirements RemovalTagRequirements;
    FInheritedTagContainer RemoveGameplayEffectsWithTags;
    FGameplayTagRequirements GrantedApplicationImmunityTags;
    FGameplayEffectQuery GrantedApplicationImmunityQuery;
    FGameplayEffectQuery RemoveGameplayEffectQuery;
    EGameplayEffectStackingType StackingType;
    int32 StackLimitCount;
    EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy;
    EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy;
    EGameplayEffectStackingExpirationPolicy StackExpirationPolicy;
    TArray<FGameplayAbilitySpecDef> GrantedAbilities;

};

class UGameplayEffectCalculation : public UObject
{
    TArray<FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;

};

class UGameplayEffectCustomApplicationRequirement : public UObject
{

    bool CanApplyGameplayEffect(const class UGameplayEffect* GameplayEffect, const FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
};

struct FGameplayEffectCustomExecutionParameters
{
};

struct FGameplayModifierEvaluatedData
{
    FGameplayAttribute Attribute;
    TEnumAsByte<EGameplayModOp::Type> ModifierOp;
    float Magnitude;
    FActiveGameplayEffectHandle Handle;
    bool IsValid;

};

struct FGameplayEffectCustomExecutionOutput
{
    TArray<FGameplayModifierEvaluatedData> OutputModifiers;
    uint8 bTriggerConditionalGameplayEffects;
    uint8 bHandledStackCountManually;
    uint8 bHandledGameplayCuesManually;

};

class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
    bool bRequiresPassedInTags;

    void Execute(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput);
};

class UGameplayEffectUIData : public UObject
{
};

class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
    FText Description;

};

class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
    bool bAllowNonNetAuthorityDependencyRegistration;

    float CalculateBaseMagnitude(const FGameplayEffectSpec& Spec);
};

struct FGameplayTagReponsePair
{
    FGameplayTag Tag;
    TSubclassOf<class UGameplayEffect> ResponseGameplayEffect;
    TArray<class TSubclassOf<UGameplayEffect>> ResponseGameplayEffects;
    int32 SoftCountCap;

};

struct FGameplayTagResponseTableEntry
{
    FGameplayTagReponsePair Positive;
    FGameplayTagReponsePair Negative;

};

class UGameplayTagReponseTable : public UDataAsset
{
    TArray<FGameplayTagResponseTableEntry> Entries;

    void TagResponseEvent(const FGameplayTag Tag, int32 NewCount, class UAbilitySystemComponent* ASC, int32 idx);
};

struct FGameplayCueTag
{
    FGameplayTag GameplayCueTag;

};

struct FMovieSceneGameplayCueKey
{
    FGameplayCueTag Cue;
    FVector Location;
    FVector Normal;
    FName AttachSocketName;
    float NormalizedMagnitude;
    FMovieSceneObjectBindingID Instigator;
    FMovieSceneObjectBindingID EffectCauser;
    class UPhysicalMaterial* PhysicalMaterial;
    int32 GameplayEffectLevel;
    int32 AbilityLevel;
    bool bAttachToBinding;

};

struct FMovieSceneGameplayCueChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;
    TArray<FMovieSceneGameplayCueKey> KeyValues;

};

class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{
    FMovieSceneGameplayCueChannel Channel;

};

class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{
    FMovieSceneGameplayCueKey Cue;

};

class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

    void SetSequencerTrackHandler(FSetSequencerTrackHandlerInGameplayCueTrackHandler InGameplayCueTrackHandler);
};

class ITickableAttributeSetInterface : public IInterface
{
};

struct FAttributeMetaData : public FTableRowBase
{
    float BaseValue;
    float MinValue;
    float MaxValue;
    FString DerivedAttributeInfo;
    bool bCanStack;

};

struct FGameplayAttributeData
{
    float BaseValue;
    float CurrentValue;

};

struct FGameplayAbilityTargetData
{
};

struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
    FHitResult HitResult;
    bool bHitReplaced;

};

struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
    FGameplayAbilityTargetingLocationInfo SourceLocation;
    TArray<TWeakObjectPtr<AActor>> TargetActorArray;

};

struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
    FGameplayAbilityTargetingLocationInfo SourceLocation;
    FGameplayAbilityTargetingLocationInfo TargetLocation;

};

struct FGameplayAbilitySpecHandleAndPredictionKey
{
    FGameplayAbilitySpecHandle AbilityHandle;
    int32 PredictionKeyAtCreation;

};

struct FAbilityTaskDebugMessage
{
    class UGameplayTask* FromTask;
    FString Message;

};

struct FAbilityEndedData
{
    class UGameplayAbility* AbilityThatEnded;
    FGameplayAbilitySpecHandle AbilitySpecHandle;
    bool bReplicateEndAbility;
    bool bWasCancelled;

};

struct FMinimalGameplayCueReplicationProxy
{
    class UAbilitySystemComponent* Owner;

};

struct FGameplayCueTranslationLink
{
    class UGameplayCueTranslator* RulesCDO;

};

struct FGameplayCueTranslatorNodeIndex
{
    int32 Index;

};

struct FGameplayCueTranslatorNode
{
    TArray<FGameplayCueTranslationLink> links;
    FGameplayCueTranslatorNodeIndex CachedIndex;
    FGameplayTag CachedGameplayTag;
    FName CachedGameplayTagName;

};

struct FGameplayCueTranslationManager
{
    TArray<FGameplayCueTranslatorNode> TranslationLUT;
    TMap<class FName, class FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;
    class UGameplayTagsManager* TagManager;

};

struct FActiveGameplayEffectQuery
{
};

struct FGameplayTagBlueprintPropertyMapping
{
    FGameplayTag TagToMap;
    TFieldPath<FProperty> PropertyToEdit;
    FName PropertyName;
    FGuid PropertyGuid;

};

struct FGameplayTagBlueprintPropertyMap
{
    TArray<FGameplayTagBlueprintPropertyMapping> PropertyMappings;

};

struct FGameplayEffectContext
{
    TWeakObjectPtr<class AActor> Instigator;
    TWeakObjectPtr<class AActor> EffectCauser;
    TWeakObjectPtr<class UGameplayAbility> AbilityCDO;
    TWeakObjectPtr<class UGameplayAbility> AbilityInstanceNotReplicated;
    int32 AbilityLevel;
    TWeakObjectPtr<class UObject> SourceObject;
    TWeakObjectPtr<class UAbilitySystemComponent> InstigatorAbilitySystemComponent;
    TArray<TWeakObjectPtr<AActor>> Actors;
    FVector WorldOrigin;
    uint8 bHasWorldOrigin;
    uint8 bReplicateSourceObject;

};

#endif
