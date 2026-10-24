class UAthenaGameOverWidget_C : public UFortActivatablePanel
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/EndGame/AthenaGameOverWidget.AthenaGameOverWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "[Text] RespawnTimerText",
            "PropertyName": FName("Text"),
            "FunctionName": FName("None"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("ReadyToRespawnText"),
                        "ArrayIndex": -1
                    }
                }
            },
            "Kind": EBindingKind::Property
        }
    };
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/EndGame/AthenaGameOverWidget.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/EndGame/AthenaGameOverWidget.AthenaGameOverWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/EndGame/AthenaGameOverWidget.AthenaGameOverWidget_C:ExecuteUbergraph_AthenaGameOverWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle Input_ReturnToLobby = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("ReturnToLobby")
    };
    struct FDataTableRowHandle Input_NextTeammate = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("NextTeammate")
    };
    struct FDataTableRowHandle Input_PreviousTeammate = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("PreviousTeammate")
    };
    struct FDataTableRowHandle Input_ReportPlayer = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("ReportPlayer")
    };
    struct FDataTableRowHandle Input_ViewMatchStats = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("ViewMatchStats")
    };
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
    enum Visibility = ESlateVisibility::Visible;

};