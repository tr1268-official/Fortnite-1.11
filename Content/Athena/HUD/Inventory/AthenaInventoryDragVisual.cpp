class UAthenaInventoryDragVisual_C : public UFortUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/Inventory/AthenaInventoryDragVisual.AthenaInventoryDragVisual_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/Inventory/AthenaInventoryDragVisual.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/Inventory/AthenaInventoryDragVisual.AthenaInventoryDragVisual_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/Inventory/AthenaInventoryDragVisual.AthenaInventoryDragVisual_C:ExecuteUbergraph_AthenaInventoryDragVisual'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum ItemCardSize = EFortItemCardSize::M;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};