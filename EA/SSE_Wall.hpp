#ifndef UE4SS_SDK_SSE_Wall_HPP
#define UE4SS_SDK_SSE_Wall_HPP

class ASSE_Wall_C : public ASSE_ItemBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHWallItem* WallItem;

    class UEHItem* GetItem();
    void PostRotateAroundPoint();
    void UserConstructionScript();
    void UpdateItem(class UEHItem* Item);
    void ExecuteUbergraph_SSE_Wall(int32 EntryPoint);
};

#endif
