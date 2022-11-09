#ifndef UE4SS_SDK_WBP_VelocityPreview_HPP
#define UE4SS_SDK_WBP_VelocityPreview_HPP

class UWBP_VelocityPreview_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_TextRow_C* EastRowText;
    class UWBP_TextRow_C* NorthRowText;
    class UWBP_TextRow_C* UpRowText;
    class AEHGrid* Grid;

    void UpdateVelocity();
    void Init(class AEHGrid* Grid);
    void ExecuteUbergraph_WBP_VelocityPreview(int32 EntryPoint);
};

#endif
