#ifndef UE4SS_SDK_TGEvent_HPP
#define UE4SS_SDK_TGEvent_HPP

class ITGEventStreamOwner : public IInterface
{
};

class UTGEventListener : public UObject
{
};

class UTGEventListenerComponent : public UActorComponent
{
    TArray<class UTGEventListener*> EventListenerArray;

    class UTGEventListener* Register(TSubclassOf<class UTGEventListener> EventListenerClass, const class AActor* FilteredActor);
    void ManuallyUnregister(class UTGEventListener* EventListener);
};

class UTGEventStreamComponent : public UActorComponent
{
};

#endif
