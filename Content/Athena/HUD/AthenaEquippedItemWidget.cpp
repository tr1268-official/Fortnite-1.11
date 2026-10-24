class UAthenaEquippedItemWidget_C : public UFortHUDElementWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaEquippedItemWidget.AthenaEquippedItemWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaEquippedItemWidget.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/AthenaEquippedItemWidget.AthenaEquippedItemWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/AthenaEquippedItemWidget.AthenaEquippedItemWidget_C:ExecuteUbergraph_AthenaEquippedItemWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTagContainer HUDElementTag = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("HUD.Quickbar.Build.EquippedItem"))
    });
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};