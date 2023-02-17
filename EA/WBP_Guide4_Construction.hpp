#ifndef UE4SS_SDK_WBP_Guide4_Construction_HPP
#define UE4SS_SDK_WBP_Guide4_Construction_HPP

class UWBP_Guide4_Construction_C : public UTipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* GuideImage;
    class UImage* Image;

    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Guide4_Construction(int32 EntryPoint);
};

#endif
