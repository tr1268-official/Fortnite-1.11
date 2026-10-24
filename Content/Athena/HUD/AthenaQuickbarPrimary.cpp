class UAthenaQuickbarPrimary_C : public UQuickbarBase_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaQuickbarPrimary.AthenaQuickbarPrimary_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaQuickbarPrimary.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/AthenaQuickbarPrimary.AthenaQuickbarPrimary_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/AthenaQuickbarPrimary.AthenaQuickbarPrimary_C:ExecuteUbergraph_AthenaQuickbarPrimary'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 CurrentWeaponSlot = 1;
    struct FGameplayTagContainer HUDElementTag = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("HUD.Quickbar.Combat"))
    });

};