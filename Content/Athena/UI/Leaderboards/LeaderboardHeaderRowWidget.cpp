class ULeaderboardHeaderRowWidget_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Leaderboards/LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Leaderboards/LeaderboardHeaderRowWidget.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Leaderboards/LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Leaderboards/LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C:ExecuteUbergraph_LeaderboardHeaderRowWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;

};