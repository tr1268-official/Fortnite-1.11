class UAthenaPlayerInfo_C : public UFortHUDElementWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaPlayerInfo.AthenaPlayerInfo_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaPlayerInfo.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/AthenaPlayerInfo.AthenaPlayerInfo_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/AthenaPlayerInfo.AthenaPlayerInfo_C:ExecuteUbergraph_AthenaPlayerInfo'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTagContainer HUDElementTag = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("HUD.TopLeft.PlayerInfo"))
    });
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};