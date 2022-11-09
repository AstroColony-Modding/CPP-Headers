#ifndef UE4SS_SDK_WBP_VehiclesScreen_HPP
#define UE4SS_SDK_WBP_VehiclesScreen_HPP

class UWBP_VehiclesScreen_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Header_1;
    class UImage* Header_2;
    class UVerticalBox* VehicleCategories;
    class UVerticalBox* VehiclesVerticalBox;
    class UWBP_Input_C* WBP_Input;
    class UWBP_PanelWidgetNavigation_C* WBP_PanelWidgetNavigation;
    class UWBP_VehicleCategory_C* WBP_VehicleCategory;
    class UWBP_VehicleRow_C* WBP_VehicleRow;
    TArray<FEHConstructCategory> CategoriesData;
    FString PhraseToFilter;
    EEHVehicleType CurrentVehicleType;
    int32 CurrentCategoryID;

    void UpdateVehiclesCounts();
    void InitContainerForVehicleType();
    void SelectVehicleType(EEHVehicleType VehicleType);
    void InitVehiclesCategories();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_VehiclesScreen(int32 EntryPoint);
};

#endif
