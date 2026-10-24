class UAthenaQuickBarSlot_C : public UQuickbarSlot_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaQuickBarSlot.AthenaQuickBarSlot_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaQuickBarSlot.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/AthenaQuickBarSlot.AthenaQuickBarSlot_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/AthenaQuickBarSlot.AthenaQuickBarSlot_C:ExecuteUbergraph_AthenaQuickBarSlot'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool ShouldCollapseItemWidgetBorder = true;
    bool bCanEverTick = false;

};