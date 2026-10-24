class UAthenaSeasonLevelBorder_C : public USeasonPassLevelWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Season/AthenaSeasonLevelBorder.AthenaSeasonLevelBorder_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Season/AthenaSeasonLevelBorder.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Season/AthenaSeasonLevelBorder.AthenaSeasonLevelBorder_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Season/AthenaSeasonLevelBorder.AthenaSeasonLevelBorder_C:ExecuteUbergraph_AthenaSeasonLevelBorder'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};