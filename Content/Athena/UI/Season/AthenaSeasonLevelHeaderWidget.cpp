class UAthenaSeasonLevelHeaderWidget_C : public USeasonPassLevelWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Season/AthenaSeasonLevelHeaderWidget.AthenaSeasonLevelHeaderWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Season/AthenaSeasonLevelHeaderWidget.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Season/AthenaSeasonLevelHeaderWidget.AthenaSeasonLevelHeaderWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Season/AthenaSeasonLevelHeaderWidget.AthenaSeasonLevelHeaderWidget_C:ExecuteUbergraph_AthenaSeasonLevelHeaderWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};