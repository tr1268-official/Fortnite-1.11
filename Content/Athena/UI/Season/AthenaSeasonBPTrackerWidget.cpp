class UAthenaSeasonBPTrackerWidget_C : public UFortAccountWidgetBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Season/AthenaSeasonBPTrackerWidget.AthenaSeasonBPTrackerWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Season/AthenaSeasonBPTrackerWidget.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Season/AthenaSeasonBPTrackerWidget.AthenaSeasonBPTrackerWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Season/AthenaSeasonBPTrackerWidget.AthenaSeasonBPTrackerWidget_C:ExecuteUbergraph_AthenaSeasonBPTrackerWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};