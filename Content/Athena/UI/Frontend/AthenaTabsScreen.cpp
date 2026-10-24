class UAthenaTabsScreen_C : public UFortAthenaTabsScreenBase
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/AthenaTabsScreen.AthenaTabsScreen_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/AthenaTabsScreen.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/AthenaTabsScreen.AthenaTabsScreen_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/AthenaTabsScreen.AthenaTabsScreen_C:ExecuteUbergraph_AthenaTabsScreen'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float UnclaimedResearchBangThreshold = 0.75;
    struct FTimerHandle UnclaimedResearchPointsHandle = {
        "Handle": 0
    };
    TMap<, > FeaturesTabsMap = {
    
    };
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};