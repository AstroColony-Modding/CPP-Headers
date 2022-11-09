#ifndef UE4SS_SDK_BP_DestructiblePlanetoidObject_HPP
#define UE4SS_SDK_BP_DestructiblePlanetoidObject_HPP

class UBP_DestructiblePlanetoidObject_C : public UEHRockObject
{
    FPointerToUberGraphFrame UberGraphFrame;

    bool CanHit();
    void OnLoaded_CCA10A7649F8294EB48288AB8F4772B1(class UObject* Loaded);
    void OnResourceExtracted();
    void OnResourceHit(const FVector& HitLocation);
    void ExecuteUbergraph_BP_DestructiblePlanetoidObject(int32 EntryPoint);
};

#endif
