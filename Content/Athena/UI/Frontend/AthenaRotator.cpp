class UAthenaRotator_C : public UCommonRotator
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/AthenaRotator.AthenaRotator_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/AthenaRotator.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/AthenaRotator.AthenaRotator_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/AthenaRotator.AthenaRotator_C:ExecuteUbergraph_AthenaRotator'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle Left Triggering Input Action = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("PlaylistChange")
    };
    struct FDataTableRowHandle Right Triggering Input Action = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("PlaylistChange")
    };
    class UBlueprintGeneratedClass* Style = "BlueprintGeneratedClass'FortniteGame/Content/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-Base.ButtonStyle-Base_C'";
    bool bCanEverPaint = false;

};