#ifndef UE4SS_SDK_BP_WorldResourceObject_HPP
#define UE4SS_SDK_BP_WorldResourceObject_HPP

class UBP_WorldResourceObject_C : public UEHWorldResourceObject
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnLoaded_77B9B60B456735C8B93DDD92F2F61BB7(class UObject* Loaded);
    void OnLoaded_A7503DB44D6E822911105B8FB2D9C4A6(class UObject* Loaded);
    void OnLoaded_6A6B7A1F4F9981F7CB8DAAACEA4960EA(class UObject* Loaded);
    void OnResourceHit(const FVector& HitLocation);
    void OnResourceMinedOut();
    void OnResourceExtracted(const FVector& HitLocation);
    void ExecuteUbergraph_BP_WorldResourceObject(int32 EntryPoint);
};

#endif
