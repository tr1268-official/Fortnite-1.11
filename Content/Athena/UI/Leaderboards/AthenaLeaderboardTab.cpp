class UAthenaLeaderboardTab_C : public UAthenaLeaderboardScreenBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Leaderboards/AthenaLeaderboardTab.AthenaLeaderboardTab_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Leaderboards/AthenaLeaderboardTab.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Leaderboards/AthenaLeaderboardTab.AthenaLeaderboardTab_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Leaderboards/AthenaLeaderboardTab.AthenaLeaderboardTab_C:ExecuteUbergraph_AthenaLeaderboardTab'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle PlaylistChange = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("PlaylistChange")
    };
    struct FDataTableRowHandle FriendTypeChange = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("LeaderboardFriendsOnlyToggle")
    };
    struct FTimerHandle QueryTimerHandle = {
        "Handle": 0
    };
    class USoundCue* OnQueryFinishedSound = "SoundCue'FortniteGame/Content/Sounds/Fort_UI_Sounds/FrontEnd/Fort_Athena_LeaderboardRefresh_Cue.Fort_Athena_LeaderboardRefresh_Cue'";
    class UDataTable* LeaderboardDisplayData = "DataTable'FortniteGame/Content/Athena/UI/Leaderboards/LeaderboardAndStatUIData.LeaderboardAndStatUIData'";
    bool bExposeActionsExternally = false;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};