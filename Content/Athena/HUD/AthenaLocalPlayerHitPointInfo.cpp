class UAthenaLocalPlayerHitPointInfo_C : public UFortHUDElementWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaLocalPlayerHitPointInfo.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C:ExecuteUbergraph_AthenaLocalPlayerHitPointInfo'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTagContainer HUDElementTag = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("HUD.TopLeft.PlayerHitPoints"))
    });
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};