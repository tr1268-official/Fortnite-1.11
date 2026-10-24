class ULeaderboardRowWidget_C : public UFortLeaderboardEntryWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Leaderboards/LeaderboardRowWidget.LeaderboardRowWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Leaderboards/LeaderboardRowWidget.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Leaderboards/LeaderboardRowWidget.LeaderboardRowWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Leaderboards/LeaderboardRowWidget.LeaderboardRowWidget_C:ExecuteUbergraph_LeaderboardRowWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBlueprintGeneratedClass* Style = "BlueprintGeneratedClass'FortniteGame/Content/UI/Foundation/Buttons/ButtonStyles/Athena/ButtonStyle_TransparentList.ButtonStyle_TransparentList_C'";
    struct FSlateSound HoveredSlateSoundOverride = {
        "ResourceObject": "SoundCue'FortniteGame/Content/Sounds/Fort_UI_Sounds/FrontEnd/Fort_Athena_LeaderboardSelector_Hovered_Cue.Fort_Athena_LeaderboardSelector_Hovered_Cue'"
    };
    struct FSlateColor ForegroundColor = {
        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
    };
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};