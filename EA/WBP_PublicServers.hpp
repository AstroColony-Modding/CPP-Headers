#ifndef UE4SS_SDK_WBP_PublicServers_HPP
#define UE4SS_SDK_WBP_PublicServers_HPP

class UWBP_PublicServers_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* PublicServerVertical;
    class UWBP_ServerOption_C* WBP_ServerOption_C_0;

    void OnFailure_3BFC5CC94A3B2050F4C5C9BE171AC6D1(const TArray<FBlueprintSessionResult>& Results);
    void OnSuccess_3BFC5CC94A3B2050F4C5C9BE171AC6D1(const TArray<FBlueprintSessionResult>& Results);
    void Construct();
    void Refresh();
    void ExecuteUbergraph_WBP_PublicServers(int32 EntryPoint);
};

#endif
