class UAthenaDirectAcquisitionOfferWidget_C : public UFortDirectAcquisitionOfferWidgetBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<unknown> Animations = {};
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/AthenaDirectAcquisitionOfferWidget.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C:ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBlueprintGeneratedClass* Style = "BlueprintGeneratedClass'FortniteGame/Content/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-Solid-SquareM-Selectable.ButtonStyle-Solid-SquareM-Selectable_C'";
    struct FSlateSound PressedSlateSoundOverride = {
        "ResourceObject": "SoundCue'FortniteGame/Content/Sounds/Fort_UI_Sounds/FrontEnd/Fort_Athena_DirectAcquisition_Pressed_Cue.Fort_Athena_DirectAcquisition_Pressed_Cue'"
    };
    struct FSlateSound HoveredSlateSoundOverride = {
        "ResourceObject": "SoundCue'FortniteGame/Content/Sounds/Fort_UI_Sounds/FrontEnd/Fort_Athena_DirectAcquisition_Hover_Cue.Fort_Athena_DirectAcquisition_Hover_Cue'"
    };
    bool bSelectable = true;
    bool bToggleable = true;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};