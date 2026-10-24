class UAthenaPlayerLevel_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Progression/AthenaPlayerLevel.AthenaPlayerLevel_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<unknown> Animations = {};
    TArray<unknown> NamedSlots = {};
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Progression/AthenaPlayerLevel.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Progression/AthenaPlayerLevel.AthenaPlayerLevel_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Progression/AthenaPlayerLevel.AthenaPlayerLevel_C:ExecuteUbergraph_AthenaPlayerLevel'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 CurrentLevel = 1;
    bool bCanEverPaint = false;

};