class UAthenaTalkingList_C : public UFortHUDElementWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/Team/AthenaTalkingList.AthenaTalkingList_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/Team/AthenaTalkingList.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/Team/AthenaTalkingList.AthenaTalkingList_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/Team/AthenaTalkingList.AthenaTalkingList_C:ExecuteUbergraph_AthenaTalkingList'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTagContainer HUDElementTag = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("HUD.TopLeft.TeamPlayers"))
    });
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};