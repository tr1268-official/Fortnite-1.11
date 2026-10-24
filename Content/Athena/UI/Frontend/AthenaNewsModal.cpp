class UAthenaNewsModal_C : public UFortActivatablePanel
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/AthenaNewsModal.AthenaNewsModal_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/AthenaNewsModal.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/AthenaNewsModal.AthenaNewsModal_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/AthenaNewsModal.AthenaNewsModal_C:ExecuteUbergraph_AthenaNewsModal'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum InputPriority = EInputPriority::Modal;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};