#ifndef UE4SS_SDK_BP_WidgetLibrary_HPP
#define UE4SS_SDK_BP_WidgetLibrary_HPP

class UBP_WidgetLibrary_C : public UBlueprintFunctionLibrary
{

    void CreateResourceSelectionWidget(const FGeometry& Geometry, class UEHItemsContainer* ItemsContainer, class UObject* __WorldContext, class UWBP_ResourcesRequestOperation_C*& ResourceRequestWidget);
    void CreateDetailsOperationWidget(const FGeometry& Geometry, FEHItemInstance Item, class UObject* __WorldContext);
    void 2DSlider Snap to Circle(class U2DSlider*& 2DSlider, class UObject* __WorldContext);
    void 2DSlider Snap to Middle(class U2DSlider*& 2DSlider, class UObject* __WorldContext);
};

#endif
