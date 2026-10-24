class UAthenaPlayersLeftWidget_C : public UAthenaPlayersLeftBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaPlayersLeftWidget.WidgetArchetype");
    struct FGameplayTagContainer HUDElementTag = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("HUD.Athena.PlayersLeft"))
    });
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
};