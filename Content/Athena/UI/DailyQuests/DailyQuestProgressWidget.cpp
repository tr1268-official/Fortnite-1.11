class UDailyQuestProgressWidget_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/DailyQuests/DailyQuestProgressWidget.DailyQuestProgressWidget_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/DailyQuests/DailyQuestProgressWidget.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/DailyQuests/DailyQuestProgressWidget.DailyQuestProgressWidget_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/DailyQuests/DailyQuestProgressWidget.DailyQuestProgressWidget_C:ExecuteUbergraph_DailyQuestProgressWidget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};