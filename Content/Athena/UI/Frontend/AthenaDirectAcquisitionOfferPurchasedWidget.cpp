class UAthenaDirectAcquisitionOfferPurchasedWidget_C : public UFortDirectAcquisitionOfferDetailsWidgetBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/AthenaDirectAcquisitionOfferPurchasedWidget.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C:ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};