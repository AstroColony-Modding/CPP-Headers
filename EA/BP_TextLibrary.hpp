#ifndef UE4SS_SDK_BP_TextLibrary_HPP
#define UE4SS_SDK_BP_TextLibrary_HPP

class UBP_TextLibrary_C : public UBlueprintFunctionLibrary
{

    void GetYesNoColor(bool IsYes, class UObject* __WorldContext, const FLinearColor& Color);
    FText GetYesNo(bool IsYes, class UObject* __WorldContext);
    void GetCharacterDistanceText(FVector Location, class UObject* __WorldContext, FText& DistanceText);
    FText ConstructObjectiveTitle(class UMOObjectiveNode*& Node, class UObject* __WorldContext);
};

#endif
