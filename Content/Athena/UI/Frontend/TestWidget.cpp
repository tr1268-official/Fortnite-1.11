class UTestWidget_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/TestWidget.TestWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/TestWidget.WidgetArchetype");
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
};