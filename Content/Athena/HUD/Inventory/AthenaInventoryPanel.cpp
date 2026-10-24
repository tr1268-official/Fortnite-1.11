class UAthenaInventoryPanel_C : public UAthenaInventoryPanelBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/Inventory/AthenaInventoryPanel.AthenaInventoryPanel_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<unknown> Animations = {};
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/Inventory/AthenaInventoryPanel.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/Inventory/AthenaInventoryPanel.AthenaInventoryPanel_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/Inventory/AthenaInventoryPanel.AthenaInventoryPanel_C:ExecuteUbergraph_AthenaInventoryPanel'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle Input_AthenaMoveItem = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("Athena_MoveItem")
    };
    struct FDataTableRowHandle Input_AthenaDropHalf = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("AthenaDropHalf")
    };
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
    enum Visibility = ESlateVisibility::Visible;

};