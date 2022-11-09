#ifndef UE4SS_SDK_WBP_Guide8_TransportBot_HPP
#define UE4SS_SDK_WBP_Guide8_TransportBot_HPP

class UWBP_Guide8_TransportBot_C : public UTipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_2;

    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Guide8_TransportBot(int32 EntryPoint);
};

#endif
