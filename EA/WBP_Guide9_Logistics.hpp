#ifndef UE4SS_SDK_WBP_Guide9_Logistics_HPP
#define UE4SS_SDK_WBP_Guide9_Logistics_HPP

class UWBP_Guide9_Logistics_C : public UTipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image;
    class UImage* Image_1;
    class UImage* Image_2;
    class URichTextBlock* LongDescriptionRich;

    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Guide9_Logistics(int32 EntryPoint);
};

#endif
