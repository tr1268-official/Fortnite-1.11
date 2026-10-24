class UAthenaInventoryEquipSlot_C : public UAthenaInventoryEquipButtonBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/Inventory/AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/Inventory/AthenaInventoryEquipSlot.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/Inventory/AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/Inventory/AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C:ExecuteUbergraph_AthenaInventoryEquipSlot'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBlueprintGeneratedClass* Style = "BlueprintGeneratedClass'FortniteGame/Content/Athena/HUD/Inventory/Styles/WorldItemTileButtonStyle.WorldItemTileButtonStyle_C'";
    bool bSelectable = true;
    bool bInteractableWhenSelected = true;
    enum EButtonClickMethod ClickMethod = EButtonClickMethod::PreciseClick;
    bool bCanEverPaint = false;
    enum Visibility = ESlateVisibility::Visible;

};