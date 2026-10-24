class UAthenaEquipProgress_C : public UFortHUDEquipProgressBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaEquipProgress.AthenaEquipProgress_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaEquipProgress.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/AthenaEquipProgress.AthenaEquipProgress_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/AthenaEquipProgress.AthenaEquipProgress_C:ExecuteUbergraph_AthenaEquipProgress'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverPaint = false;
    bool bIsVolatile = true;

};