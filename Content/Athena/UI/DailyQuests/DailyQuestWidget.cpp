class UDailyQuestWidget_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/DailyQuests/DailyQuestWidget.DailyQuestWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/DailyQuests/DailyQuestWidget.WidgetArchetype");
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};