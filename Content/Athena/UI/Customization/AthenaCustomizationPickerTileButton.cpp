class UAthenaCustomizationPickerTileButton_C : public UAthenaCustomizationPickerTileButton
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Customization/AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Customization/AthenaCustomizationPickerTileButton.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Customization/AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Customization/AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C:ExecuteUbergraph_AthenaCustomizationPickerTileButton'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBlueprintGeneratedClass* Style = "BlueprintGeneratedClass'FortniteGame/Content/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-Solid-SquareM-Selectable.ButtonStyle-Solid-SquareM-Selectable_C'";
    struct FSlateSound PressedSlateSoundOverride = {
        "ResourceObject": "SoundCue'FortniteGame/Content/Sounds/Fort_UI_Sounds/FrontEnd/Fort_Athena_LockerItem_Pressed.Fort_Athena_LockerItem_Pressed'"
    };
    struct FSlateSound HoveredSlateSoundOverride = {
        "ResourceObject": "SoundCue'FortniteGame/Content/Sounds/Fort_UI_Sounds/FrontEnd/Fort_Athena_LockerItem_Hovered.Fort_Athena_LockerItem_Hovered'"
    };
    bool bSelectable = true;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};