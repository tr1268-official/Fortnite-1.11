class UAthenaSeasonReward_C : public UCommonButton
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Season/AthenaSeasonReward.AthenaSeasonReward_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Season/AthenaSeasonReward.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Season/AthenaSeasonReward.AthenaSeasonReward_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Season/AthenaSeasonReward.AthenaSeasonReward_C:ExecuteUbergraph_AthenaSeasonReward'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBlueprintGeneratedClass* Style = "BlueprintGeneratedClass'FortniteGame/Content/UI/Frontend/ItemManagement/InventoryPanel/ItemTileButtonStyles/ItemManagementTileButtonStyle-AthenaLocker.ItemManagementTileButtonStyle-AthenaLocker_C'";
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};