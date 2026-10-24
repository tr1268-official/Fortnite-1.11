class UAthena_Matchmaking_SpecialEventButton_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Matchmaking/Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<unknown> Animations = {};
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Matchmaking/Athena_Matchmaking_SpecialEventButton.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Matchmaking/Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Matchmaking/Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C:ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasNewBang = true;
    bool bIsFocusable = true;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};