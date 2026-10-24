class UAthenaSeasonTab_C : public USeasonPassScreenBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Season/AthenaSeasonTab.AthenaSeasonTab_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Season/AthenaSeasonTab.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Season/AthenaSeasonTab.AthenaSeasonTab_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Season/AthenaSeasonTab.AthenaSeasonTab_C:ExecuteUbergraph_AthenaSeasonTab'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UFortPersistentResourceItemDefinition* BattlePointsCurrency = "FortPersistentResourceItemDefinition'FortniteGame/Content/Items/PersistentResources/AthenaSeasonalBP.AthenaSeasonalBP'";
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};