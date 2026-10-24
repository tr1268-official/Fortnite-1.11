class UAthenaPickupManager_C : public UFortHUDElementWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaPickupManager.AthenaPickupManager_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaPickupManager.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/AthenaPickupManager.AthenaPickupManager_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/AthenaPickupManager.AthenaPickupManager_C:ExecuteUbergraph_AthenaPickupManager'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 Max Displayed Items = 3;
    struct FGameplayTagContainer HUDElementTag = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("HUD.TopLeft.PickupManager"))
    });
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};