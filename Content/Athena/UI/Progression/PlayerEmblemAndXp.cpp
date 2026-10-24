class UPlayerEmblemAndXp_C : public UFortAccountWidgetBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Progression/PlayerEmblemAndXp.PlayerEmblemAndXp_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Progression/PlayerEmblemAndXp.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Progression/PlayerEmblemAndXp.PlayerEmblemAndXp_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Progression/PlayerEmblemAndXp.PlayerEmblemAndXp_C:ExecuteUbergraph_PlayerEmblemAndXp'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};