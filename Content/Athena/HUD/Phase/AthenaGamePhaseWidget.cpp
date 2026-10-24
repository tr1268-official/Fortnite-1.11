class UAthenaGamePhaseWidget_C : public UAthenaGamePhaseWidgetBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/Phase/AthenaGamePhaseWidget.AthenaGamePhaseWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/Phase/AthenaGamePhaseWidget.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/Phase/AthenaGamePhaseWidget.AthenaGamePhaseWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/Phase/AthenaGamePhaseWidget.AthenaGamePhaseWidget_C:ExecuteUbergraph_AthenaGamePhaseWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTagContainer HUDElementTag = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("HUD.Athena.GamePhase"))
    });
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;

};