class UAthenaTeamInfo_C : public UFortHUDElementWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/Team/AthenaTeamInfo.AthenaTeamInfo_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/Team/AthenaTeamInfo.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/Team/AthenaTeamInfo.AthenaTeamInfo_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/Team/AthenaTeamInfo.AthenaTeamInfo_C:ExecuteUbergraph_AthenaTeamInfo'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTagContainer HUDElementTag = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("HUD.TopLeft.TeamPlayers"))
    });
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};