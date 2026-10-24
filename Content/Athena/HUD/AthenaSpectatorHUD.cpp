class UAthenaSpectatorHUD_C : public UAthenaHUDBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaSpectatorHUD.AthenaSpectatorHUD_C:WidgetTree_87'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaSpectatorHUD.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/AthenaSpectatorHUD.AthenaSpectatorHUD_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/AthenaSpectatorHUD.AthenaSpectatorHUD_C:ExecuteUbergraph_AthenaSpectatorHUD'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D UnfocusedQuickbarScale = FVector2D(0.7, 0.7);
    FText PlayerLeft = FText("Players Alive: ", Immutable);
    FText KillsPrefix = FText("Kills: ", Immutable);
    bool bIsFocusable = true;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};