class UAthenaTeamMemberDBNOState_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/Team/AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/Team/AthenaTeamMemberDBNOState.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/Team/AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/Team/AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C:ExecuteUbergraph_AthenaTeamMemberDBNOState'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum Visibility When Not DBNO = ESlateVisibility::Collapsed;
    float ReviveTimeMax = 10;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};