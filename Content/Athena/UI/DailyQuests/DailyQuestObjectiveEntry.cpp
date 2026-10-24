class UDailyQuestObjectiveEntry_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/DailyQuests/DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<unknown> Animations = {};
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/DailyQuests/DailyQuestObjectiveEntry.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/DailyQuests/DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/DailyQuests/DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C:ExecuteUbergraph_DailyQuestObjectiveEntry'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
    enum Visibility = ESlateVisibility::Visible;

};