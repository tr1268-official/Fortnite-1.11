class UCustomMatchmakingKeyModal_C : public UFortActivatablePanel
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Matchmaking/CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Matchmaking/CustomMatchmakingKeyModal.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Matchmaking/CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Matchmaking/CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C:ExecuteUbergraph_CustomMatchmakingKeyModal'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum InputPriority = EInputPriority::Modal;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};