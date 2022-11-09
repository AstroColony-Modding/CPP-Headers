#ifndef UE4SS_SDK_WBP_Guide7_Scanner_HPP
#define UE4SS_SDK_WBP_Guide7_Scanner_HPP

class UWBP_Guide7_Scanner_C : public UTipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image;
    class UImage* Image_0;
    class UImage* Image_1;

    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Guide7_Scanner(int32 EntryPoint);
};

#endif
