class UAthenaHUDMenu_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaHUDMenu.AthenaHUDMenu_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaHUDMenu.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/AthenaHUDMenu.AthenaHUDMenu_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/AthenaHUDMenu.AthenaHUDMenu_C:ExecuteUbergraph_AthenaHUDMenu'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};