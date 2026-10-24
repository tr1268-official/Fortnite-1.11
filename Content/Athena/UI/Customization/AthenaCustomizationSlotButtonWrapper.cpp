class UAthenaCustomizationSlotButtonWrapper_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Customization/AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Customization/AthenaCustomizationSlotButtonWrapper.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Customization/AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Customization/AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C:ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText BannerDisplayName = FText("SLOT NAME", Immutable);
    FText CategoryDescription = FText("SLOT NAME", Immutable);
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};