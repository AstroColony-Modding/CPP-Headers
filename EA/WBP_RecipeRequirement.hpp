#ifndef UE4SS_SDK_WBP_RecipeRequirement_HPP
#define UE4SS_SDK_WBP_RecipeRequirement_HPP

class UWBP_RecipeRequirement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* AIRequiredBorder;
    class UImage* RequirementImage;
    class UTexture2D* Texture;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_RecipeRequirement(int32 EntryPoint);
};

#endif
