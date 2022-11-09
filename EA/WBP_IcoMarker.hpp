#ifndef UE4SS_SDK_WBP_IcoMarker_HPP
#define UE4SS_SDK_WBP_IcoMarker_HPP

class UWBP_IcoMarker_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UImage* Image;
    class UTexture2D* Texture;
    FVector2D ImageSize;
    FMargin ImagePadding;

    void SetHidden(bool IsHidden);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WBP_IcoMarker(int32 EntryPoint);
};

#endif
