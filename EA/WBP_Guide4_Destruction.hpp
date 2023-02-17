#ifndef UE4SS_SDK_WBP_Guide4_Destruction_HPP
#define UE4SS_SDK_WBP_Guide4_Destruction_HPP

class UWBP_Guide4_Destruction_C : public UTipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* GuideImage;
    class UImage* Image;
    class UImage* Image_0;
    class UImage* Image_1;
    class URichTextBlock* LongDescriptionRich;
    class URichTextBlock* LongDescriptionRich_1;

    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Guide4_Destruction(int32 EntryPoint);
};

#endif
