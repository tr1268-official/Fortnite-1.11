class UAthenaStatsRow_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/AthenaStatsRow.AthenaStatsRow_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/AthenaStatsRow.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/AthenaStatsRow.AthenaStatsRow_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/AthenaStatsRow.AthenaStatsRow_C:ExecuteUbergraph_AthenaStatsRow'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText StatName = FText("Stat Name", Immutable);
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};