class UNullLeaderboardContent_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Leaderboards/NullLeaderboardContent.NullLeaderboardContent_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Leaderboards/NullLeaderboardContent.WidgetArchetype");
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
};