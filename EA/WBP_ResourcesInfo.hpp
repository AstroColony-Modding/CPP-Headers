#ifndef UE4SS_SDK_WBP_ResourcesInfo_HPP
#define UE4SS_SDK_WBP_ResourcesInfo_HPP

class UWBP_ResourcesInfo_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox;
    class UEHItemsContainer* ItemsContainer;
    class UEHWorldResourceObject* WorldObject;

    void UpdateWorldResource();
    void UpdateItems();
    void Construct();
    void ExecuteUbergraph_WBP_ResourcesInfo(int32 EntryPoint);
};

#endif
