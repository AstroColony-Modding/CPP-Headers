#ifndef UE4SS_SDK_WBP_Guide2_GravityBoots_HPP
#define UE4SS_SDK_WBP_Guide2_GravityBoots_HPP

class UWBP_Guide2_GravityBoots_C : public UTipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image;
    class UImage* Image_3;
    class UImage* Image_4;

    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Guide2_GravityBoots(int32 EntryPoint);
};

#endif
