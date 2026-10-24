class UAthenaMatchStatsScreen_C : public UFortActivatablePanel
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/EndGame/AthenaMatchStatsScreen.AthenaMatchStatsScreen_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/EndGame/AthenaMatchStatsScreen.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/EndGame/AthenaMatchStatsScreen.AthenaMatchStatsScreen_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/EndGame/AthenaMatchStatsScreen.AthenaMatchStatsScreen_C:ExecuteUbergraph_AthenaMatchStatsScreen'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};