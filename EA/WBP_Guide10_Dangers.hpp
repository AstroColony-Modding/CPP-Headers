#ifndef UE4SS_SDK_WBP_Guide10_Dangers_HPP
#define UE4SS_SDK_WBP_Guide10_Dangers_HPP

class UWBP_Guide10_Dangers_C : public UTipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image;
    class UImage* Image_2;

    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Guide10_Dangers(int32 EntryPoint);
};

#endif
