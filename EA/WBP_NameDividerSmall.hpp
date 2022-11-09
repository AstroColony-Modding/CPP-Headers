#ifndef UE4SS_SDK_WBP_NameDividerSmall_HPP
#define UE4SS_SDK_WBP_NameDividerSmall_HPP

class UWBP_NameDividerSmall_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BG;
    class UImage* BGAttracted;
    class UImage* BottomLine;
    class UTGConfigurableTextBlock* DividerName;
    class UImage* TopLine;
    FText Name;
    bool HideBackground;
    bool HideTopLine;
    bool HideBottomLine;
    FVector2D Size;

    void UpdateName(FText Name);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_NameDividerSmall(int32 EntryPoint);
};

#endif
