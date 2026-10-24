class UAthenaMatchmakingOptionsDisplay_v2_C : public UFortActivatablePanel
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Matchmaking/AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "ClickBlocker",
            "PropertyName": FName("OnMouseButtonDownEvent"),
            "FunctionName": FName("On_ClickBlocker_MouseButtonDown_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("On_ClickBlocker_MouseButtonDown_0"),
                        "ArrayIndex": -1
                    }
                }
            },
            "Kind": EBindingKind::Function
        }
    };
    TArray<unknown> Animations = {};
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Matchmaking/AthenaMatchmakingOptionsDisplay_v2.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Matchmaking/AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Matchmaking/AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C:ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle Input_Cancel = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("Cancel")
    };
    TArray<unknown> DebugList_StandardModes = {};
    enum InputPriority = EInputPriority::Modal;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};