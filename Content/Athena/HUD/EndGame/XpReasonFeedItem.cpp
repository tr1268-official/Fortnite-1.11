class UXpReasonFeedItem_C : public UFortHUDElementWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/EndGame/XpReasonFeedItem.XpReasonFeedItem_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<unknown> Animations = {};
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/EndGame/XpReasonFeedItem.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/EndGame/XpReasonFeedItem.XpReasonFeedItem_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/EndGame/XpReasonFeedItem.XpReasonFeedItem_C:ExecuteUbergraph_XpReasonFeedItem'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTagContainer HUDElementTag = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("HUD.Athena.KillFeed"))
    });
    bool bCanEverTick = false;
    bool bCanEverPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;

};