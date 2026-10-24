class UPlayerRankEmblem_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Progression/PlayerRankEmblem.PlayerRankEmblem_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<unknown> Animations = {};
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Progression/PlayerRankEmblem.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Progression/PlayerRankEmblem.PlayerRankEmblem_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Progression/PlayerRankEmblem.PlayerRankEmblem_C:ExecuteUbergraph_PlayerRankEmblem'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool BindToLocalPlayerByDefault = true;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};