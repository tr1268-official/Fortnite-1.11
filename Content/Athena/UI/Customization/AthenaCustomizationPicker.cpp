class UAthenaCustomizationPicker_C : public UAthenaCustomizationPicker
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Customization/AthenaCustomizationPicker.AthenaCustomizationPicker_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Customization/AthenaCustomizationPicker.WidgetArchetype");
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
};