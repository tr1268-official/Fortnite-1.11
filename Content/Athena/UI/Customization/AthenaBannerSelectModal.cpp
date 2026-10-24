class UAthenaBannerSelectModal_C : public UFortActivatablePanel
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Customization/AthenaBannerSelectModal.AthenaBannerSelectModal_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Customization/AthenaBannerSelectModal.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Customization/AthenaBannerSelectModal.AthenaBannerSelectModal_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Customization/AthenaBannerSelectModal.AthenaBannerSelectModal_C:ExecuteUbergraph_AthenaBannerSelectModal'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle CloseAction = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("Close")
    };
    struct FDataTableRowHandle PreviousAction = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("SecondaryTabLeft")
    };
    struct FDataTableRowHandle NextAction = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("SecondaryTabRight")
    };
    enum InputPriority = EInputPriority::Modal;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};