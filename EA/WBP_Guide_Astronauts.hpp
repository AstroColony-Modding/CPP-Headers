#ifndef UE4SS_SDK_WBP_Guide_Astronauts_HPP
#define UE4SS_SDK_WBP_Guide_Astronauts_HPP

class UWBP_Guide_Astronauts_C : public UTipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* GuideImage;
    class UImage* Image;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_2;
    class URichTextBlock* LongDescriptionRich;

    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Guide_Astronauts(int32 EntryPoint);
};

#endif
