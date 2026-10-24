class UAthenaLobby_C : public UAthenaLobbyBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/AthenaLobby.AthenaLobby_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/AthenaLobby.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/AthenaLobby.AthenaLobby_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/AthenaLobby.AthenaLobby_C:ExecuteUbergraph_AthenaLobby'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle InputCancel = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("Cancel")
    };
    struct FDataTableRowHandle InputScroll = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("Scroll")
    };
    int32 SelectedPlayerIndex = -1;
    TArray<unknown> NavigationOrderToPlayerIndex = {};
    struct FDataTableRowHandle PlaylistChange = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("PlaylistChange")
    };
    struct FDataTableRowHandle FillChange = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("SquadFillChange")
    };
    struct FDataTableRowHandle InputNews = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("AthenaNews")
    };
    struct FDataTableRowHandle InputCustomMatchmaking = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("Athena_CustomMatchmaking")
    };
    bool bIsFocusable = true;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};