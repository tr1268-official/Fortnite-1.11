class UAthenaDirectAcquisitionMTXDetails_C : public UFortDirectAcquisitionOfferDetailsWidgetBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/AthenaDirectAcquisitionMTXDetails.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C:ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};