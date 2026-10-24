class UXpMatchProgression_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/EndGame/XpMatchProgression.XpMatchProgression_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/EndGame/XpMatchProgression.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/EndGame/XpMatchProgression.XpMatchProgression_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/EndGame/XpMatchProgression.XpMatchProgression_C:ExecuteUbergraph_XpMatchProgression'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverPaint = false;

};