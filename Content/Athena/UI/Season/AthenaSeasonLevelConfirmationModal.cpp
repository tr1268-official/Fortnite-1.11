class UAthenaSeasonLevelConfirmationModal_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Season/AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Season/AthenaSeasonLevelConfirmationModal.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Season/AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Season/AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C:ExecuteUbergraph_AthenaSeasonLevelConfirmationModal'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FString BuyTierOfferID = "F86AC2ED4B3EA4B2D65EF1B2629572A0";
    int32 MaxExtraLevelsYouCanBuyInOneGo = 9;
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};