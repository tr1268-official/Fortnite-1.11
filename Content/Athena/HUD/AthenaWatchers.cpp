class UAthenaWatchers_C : public UFortHUDElementWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaWatchers.AthenaWatchers_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaWatchers.WidgetArchetype");
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
};