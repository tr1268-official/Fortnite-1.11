class UAthenaSeasonPageWidget_C : public USeasonPassPageWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Season/AthenaSeasonPageWidget.AthenaSeasonPageWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Season/AthenaSeasonPageWidget.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Season/AthenaSeasonPageWidget.AthenaSeasonPageWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Season/AthenaSeasonPageWidget.AthenaSeasonPageWidget_C:ExecuteUbergraph_AthenaSeasonPageWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 MinLevel = 100000;
    int32 MAX_COLUMNS = 7;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};