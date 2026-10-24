class UAthenaInventoryFortItemTileButton_C : public UAthenaInventoryFortItemTileButtonBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/Inventory/AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "ItemWidgetHolder",
            "PropertyName": FName("OnMouseButtonDownEvent"),
            "FunctionName": FName("On_ItemWidgetHolder_MouseButtonDown"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("On_ItemWidgetHolder_MouseButtonDown"),
                        "ArrayIndex": -1
                    }
                }
            },
            "Kind": EBindingKind::Function
        }
    };
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/Inventory/AthenaInventoryFortItemTileButton.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/Inventory/AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/Inventory/AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C:ExecuteUbergraph_AthenaInventoryFortItemTileButton'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum ItemCardSize = EFortItemCardSize::S;
    class UBlueprintGeneratedClass* Style = "BlueprintGeneratedClass'FortniteGame/Content/Athena/HUD/Inventory/Styles/WorldItemTileButtonStyle.WorldItemTileButtonStyle_C'";
    bool bSelectable = true;
    bool bInteractableWhenSelected = true;
    bool bToggleable = true;
    enum EButtonClickMethod ClickMethod = EButtonClickMethod::MouseDown;
    struct FSlateColor ForegroundColor = {
        "SpecifiedColor": FLinearColor(1, 1, 1, 1)
    };
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};