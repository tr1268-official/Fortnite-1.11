class UAthenaQuickbarSecondary_C : public UQuickbarBase_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaQuickbarSecondary.AthenaQuickbarSecondary_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaQuickbarSecondary.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/AthenaQuickbarSecondary.AthenaQuickbarSecondary_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/AthenaQuickbarSecondary.AthenaQuickbarSecondary_C:ExecuteUbergraph_AthenaQuickbarSecondary'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum MyQuickbarIndex = EFortQuickBars::Secondary;
    struct FGameplayTagContainer HUDElementTag = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("HUD.Quickbar.Build"))
    });

};