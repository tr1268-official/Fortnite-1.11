class UAthenaHUDBottomBar_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaHUDBottomBar.AthenaHUDBottomBar_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaHUDBottomBar.WidgetArchetype");
    struct FMargin DefaultButtonMargin = {
        "Left": 5,
        "Top": 0,
        "Right": 5,
        "Bottom": 0
    };
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
};