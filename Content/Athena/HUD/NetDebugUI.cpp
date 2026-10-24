class UNetDebugUI_C : public UNetDebugWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/NetDebugUI.NetDebugUI_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/NetDebugUI.WidgetArchetype");
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
};