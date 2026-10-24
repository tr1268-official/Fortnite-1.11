class UAthena_Matchmaking_GameModeButton_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Matchmaking/Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Matchmaking/Athena_Matchmaking_GameModeButton.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Matchmaking/Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Matchmaking/Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C:ExecuteUbergraph_Athena_Matchmaking_GameModeButton'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ButtonLabel = FText("Solo", Immutable);
    class UBlueprintGeneratedClass* OverrideButtonClass = "BlueprintGeneratedClass'FortniteGame/Content/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_Feature_L.ButtonStyle_Feature_L_C'";
    FText ModeDescription = FText("Solo", Immutable);
    struct FMargin Padding = {
        "Top": 10,
        "Bottom": 10
    };
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};