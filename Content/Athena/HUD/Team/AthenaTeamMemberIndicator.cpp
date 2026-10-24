class UAthenaTeamMemberIndicator_C : public UAthenaTeamMemberIndicatorBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/Team/AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/Team/AthenaTeamMemberIndicator.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/Team/AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/Team/AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C:ExecuteUbergraph_AthenaTeamMemberIndicator'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector RelativeLocation = FVector(0, 0, 120);
    float MaxDistance = 100000000;
    bool bClampOnScreen = true;
    bool bShowClampToScreenArrow = true;
    bool bCanEverPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;

};