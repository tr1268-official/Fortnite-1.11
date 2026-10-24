class UQuestsModal_C : public UFortActivatablePanel
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/DailyQuests/QuestsModal.QuestsModal_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/DailyQuests/QuestsModal.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/DailyQuests/QuestsModal.QuestsModal_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/DailyQuests/QuestsModal.QuestsModal_C:ExecuteUbergraph_QuestsModal'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle CloseButton = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("Close")
    };
    enum InputPriority = EInputPriority::Modal;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};