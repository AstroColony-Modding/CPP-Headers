#ifndef UE4SS_SDK_BP_FunctionLibrary_HPP
#define UE4SS_SDK_BP_FunctionLibrary_HPP

class UBP_FunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void GetVoxelWorldByName(FString& VoxelWorldName, class UObject* __WorldContext, class AVoxelWorld*& VoxelWorld);
    void BindDebugMode(const FBindDebugModeDebugModeChange& DebugModeChange, class UObject* __WorldContext);
    void getTimeDilation(class UObject* __WorldContext, class AEHRealTimeDilationActor*& TimeDilation);
    void getGridActor(class UObject* __WorldContext, class AEHGrid*& Grid);
};

#endif
