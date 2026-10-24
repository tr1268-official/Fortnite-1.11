class UAthenaMainStatTile_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/AthenaMainStatTile.AthenaMainStatTile_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/AthenaMainStatTile.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/AthenaMainStatTile.AthenaMainStatTile_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/AthenaMainStatTile.AthenaMainStatTile_C:ExecuteUbergraph_AthenaMainStatTile'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText StatName = FText("{Stat Name}", Immutable);
    FString BaseTagName = "None";
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};