#ifndef UE4SS_SDK_SSE_Floor_HPP
#define UE4SS_SDK_SSE_Floor_HPP

class ASSE_Floor_C : public ASSE_ItemBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHFloorItem* FloorItem;
    class UEHFloorItem* CornerFloorToReplace;

    void ReplaceCorners();
    class UEHItem* GetItem();
    void GenerateFundaments();
    void PostRotateAroundPoint();
    void UserConstructionScript();
    void UpdateItem(class UEHItem* Item);
    void ExecuteUbergraph_SSE_Floor(int32 EntryPoint);
};

#endif
