class UDailyQuestsPanel_C : public UFortAccountWidgetBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/DailyQuests/DailyQuestsPanel.DailyQuestsPanel_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/DailyQuests/DailyQuestsPanel.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/DailyQuests/DailyQuestsPanel.DailyQuestsPanel_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/DailyQuests/DailyQuestsPanel.DailyQuestsPanel_C:ExecuteUbergraph_DailyQuestsPanel'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum QuestTypeToClaim = EFortQuestType::AthenaDailyQuest;
    struct FDataTableRowHandle InspectActionButton = {
        "DataTable": "DataTable'FortniteGame/Content/UI/Foundation/Input/InputActionDataTable.InputActionDataTable'",
        "RowName": FName("Athena_QuestInspect_Open")
    };
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};