#ifndef UE4SS_SDK_WBP_Friends_HPP
#define UE4SS_SDK_WBP_Friends_HPP

class UWBP_Friends_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* VerticalOfflineList;
    class UVerticalBox* VerticalOnlineList;
    class UWBP_FriendOption_C* WBP_FriendOption;
    class UWBP_FriendOption_C* WBP_FriendOption_1;
    bool IsInviteMenu;

    void OnFailure_527AE17A4F90D2A2AB1F5CA55AE62638(const TArray<FBPFriendInfo>& Results);
    void OnSuccess_527AE17A4F90D2A2AB1F5CA55AE62638(const TArray<FBPFriendInfo>& Results);
    void Construct();
    void Refresh();
    void ExecuteUbergraph_WBP_Friends(int32 EntryPoint);
};

#endif
