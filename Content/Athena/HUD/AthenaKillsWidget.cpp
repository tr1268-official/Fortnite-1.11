class UAthenaKillsWidget_C : public UAthenaPlayerKillsBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaKillsWidget.AthenaKillsWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaKillsWidget.WidgetArchetype");
    struct FGameplayTagContainer HUDElementTag = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("HUD.Athena.Kills"))
    });
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
};