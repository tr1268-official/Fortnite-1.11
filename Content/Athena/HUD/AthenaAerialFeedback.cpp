class UAthenaAerialFeedback_C : public UFortHUDElementWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaAerialFeedback.AthenaAerialFeedback_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaAerialFeedback.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/AthenaAerialFeedback.AthenaAerialFeedback_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/AthenaAerialFeedback.AthenaAerialFeedback_C:ExecuteUbergraph_AthenaAerialFeedback'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bCanEverPaint = false;

};