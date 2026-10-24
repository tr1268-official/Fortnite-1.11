class UDailyQuestRewardInfo_C : public UFortRewardInfoWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/DailyQuests/DailyQuestRewardInfo.DailyQuestRewardInfo_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/DailyQuests/DailyQuestRewardInfo.WidgetArchetype");
    class UWidgetBlueprintGeneratedClass* OrWidgetType = "WidgetBlueprintGeneratedClass'FortniteGame/Content/UI/Foundation/Rewards/RewardOrWidget.RewardOrWidget_C'";
    class UWidgetBlueprintGeneratedClass* RewardInfoButtonType = "WidgetBlueprintGeneratedClass'FortniteGame/Content/UI/Foundation/Rewards/RewardInfoSimpleWidget.RewardInfoSimpleWidget_C'";
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
};