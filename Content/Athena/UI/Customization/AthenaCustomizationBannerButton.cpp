class UAthenaCustomizationBannerButton_C : public UCommonButton
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Customization/AthenaCustomizationBannerButton.AthenaCustomizationBannerButton_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Customization/AthenaCustomizationBannerButton.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Customization/AthenaCustomizationBannerButton.AthenaCustomizationBannerButton_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Customization/AthenaCustomizationBannerButton.AthenaCustomizationBannerButton_C:ExecuteUbergraph_AthenaCustomizationBannerButton'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBlueprintGeneratedClass* Style = "BlueprintGeneratedClass'FortniteGame/Content/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-Solid-SquareM.ButtonStyle-Solid-SquareM_C'";
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};