class USmallLevelUpReward_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Progression/SmallLevelUpReward.SmallLevelUpReward_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Progression/SmallLevelUpReward.WidgetArchetype");
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};