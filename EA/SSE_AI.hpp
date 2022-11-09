#ifndef UE4SS_SDK_SSE_AI_HPP
#define UE4SS_SDK_SSE_AI_HPP

class ASSE_AI_C : public ASSE_ItemBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHAIItem* AIItem;
    EAIProfession Profession;

    class UEHItem* GetItem();
    void GetProfession(EAIProfession& Profession);
    void UserConstructionScript();
    void UpdateItem(class UEHItem* Item);
    void ExecuteUbergraph_SSE_AI(int32 EntryPoint);
};

#endif
