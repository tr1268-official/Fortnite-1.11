class ULeaderboardListView_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Leaderboards/LeaderboardListView.LeaderboardListView_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Leaderboards/LeaderboardListView.WidgetArchetype");
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};