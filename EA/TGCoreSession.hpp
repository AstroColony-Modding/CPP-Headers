#ifndef UE4SS_SDK_TGCoreSession_HPP
#define UE4SS_SDK_TGCoreSession_HPP

class ATGGameState : public AGameStateBase
{
    TArray<class AActor*> PlayerActorArray;
    class UTGEventStreamComponent* EventStreamComponent;

};

#endif
