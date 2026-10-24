class UAthenaStatsTab_C : public UAthenaStatsScreenBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/AthenaStatsTab.AthenaStatsTab_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/AthenaStatsTab.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/AthenaStatsTab.AthenaStatsTab_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/AthenaStatsTab.AthenaStatsTab_C:ExecuteUbergraph_AthenaStatsTab'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TMap<, > TagToDisplayName = {
    
    };
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};