class UAthenaCustomizationSlotButton_C : public UAthenaCustomizationSlotSelectorButton
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Customization/AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "EmptyImage",
            "PropertyName": FName("Visibility"),
            "FunctionName": FName("Get_EmptyImage_Visibility_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("ShouldShowEmptyImage"),
                        "ArrayIndex": -1
                    }
                }
            },
            "Kind": EBindingKind::Function
        }
    };
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Customization/AthenaCustomizationSlotButton.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Customization/AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Customization/AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C:ExecuteUbergraph_AthenaCustomizationSlotButton'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FSlateBrush SubTypeIcon = {
        "ImageSize": FVector2D(32, 32),
        "Margin": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "TintColor": {
            "SpecifiedColor": FLinearColor(1, 1, 1, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "ResourceObject": nullptr,
        "ResourceName": FName("None"),
        "UVRegion": bIsValid=0, Min=(X=0.000 Y=0.000), Max=(X=0.000 Y=0.000),
        "DrawAs": ESlateBrushDrawType::Image,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::NoImage,
        "bIsDynamicallyLoaded": false
    };
    enum SlottedItemCardSize = EFortItemCardSize::L;
    class UBlueprintGeneratedClass* Style = "BlueprintGeneratedClass'FortniteGame/Content/UI/Frontend/ItemManagement/InventoryPanel/ItemTileButtonStyles/ItemManagementTileButtonStyle-AthenaLocker.ItemManagementTileButtonStyle-AthenaLocker_C'";
    bool bSelectable = false;
    bool bInteractableWhenSelected = false;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};