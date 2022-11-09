#ifndef UE4SS_SDK_WBP_Guide6_Thruster_HPP
#define UE4SS_SDK_WBP_Guide6_Thruster_HPP

class UWBP_Guide6_Thruster_C : public UTipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* GuideImage;
    class UImage* Image;
    class UImage* Image_0;
    class UImage* Image_3;

    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Guide6_Thruster(int32 EntryPoint);
};

#endif
