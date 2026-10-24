class UAthenaGamePhaseChangeWidget_C : public UAthenaHUDGamePhaseChangingBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/Phase/AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<unknown> Animations = {};
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/Phase/AthenaGamePhaseChangeWidget.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/Phase/AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/Phase/AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C:ExecuteUbergraph_AthenaGamePhaseChangeWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};