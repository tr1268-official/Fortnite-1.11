class UMatchStatsGrid_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/EndGame/MatchStatsGrid.MatchStatsGrid_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/EndGame/MatchStatsGrid.WidgetArchetype");
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};