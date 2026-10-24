class UComingSoonPlaceholderWidget_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/ComingSoonPlaceholderWidget.ComingSoonPlaceholderWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/ComingSoonPlaceholderWidget.WidgetArchetype");
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/ComingSoonPlaceholderWidget.ComingSoonPlaceholderWidget_C:ExecuteUbergraph_ComingSoonPlaceholderWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;

};