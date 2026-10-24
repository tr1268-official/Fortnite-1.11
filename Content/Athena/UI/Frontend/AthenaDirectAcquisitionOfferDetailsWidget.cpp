class UAthenaDirectAcquisitionOfferDetailsWidget_C : public UFortDirectAcquisitionOfferDetailsWidgetBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/AthenaDirectAcquisitionOfferDetailsWidget.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C:ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};