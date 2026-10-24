class UAthenaBattlePassTrackerWidget_C : public UFortAccountWidgetBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Season/AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Season/AthenaBattlePassTrackerWidget.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Season/AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Season/AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C:ExecuteUbergraph_AthenaBattlePassTrackerWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};