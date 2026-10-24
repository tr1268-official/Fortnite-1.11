class UAthenaMinimapContainer_C : public UFortHUDElementWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaMinimapContainer.AthenaMinimapContainer_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaMinimapContainer.WidgetArchetype");
    struct FGameplayTagContainer HUDElementTag = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("HUD.TopRight.Minimap"))
    });
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
};