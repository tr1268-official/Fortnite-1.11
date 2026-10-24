class UAthenaDirectAcquisitionScreen_C : public UFortDirectAcquisitionWidgetBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/AthenaDirectAcquisitionScreen.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C:ExecuteUbergraph_AthenaDirectAcquisitionScreen'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FMargin TilePadding = {
        "Left": 4,
        "Top": 4,
        "Right": 4,
        "Bottom": 4
    };
    TArray<unknown> StorefrontNames = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};