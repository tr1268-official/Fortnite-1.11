class UWinnerOverlay_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/EndGame/WinnerOverlay.WinnerOverlay_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/EndGame/WinnerOverlay.WidgetArchetype");
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
};