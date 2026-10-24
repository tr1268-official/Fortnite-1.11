class UEliminatedOverlay_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/EndGame/EliminatedOverlay.EliminatedOverlay_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<unknown> Animations = {};
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/EndGame/EliminatedOverlay.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/EndGame/EliminatedOverlay.EliminatedOverlay_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/EndGame/EliminatedOverlay.EliminatedOverlay_C:ExecuteUbergraph_EliminatedOverlay'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FFortPlayerDeathReport DeathReport = {
        "ServerTimeForRespawn": 0,
        "ServerTimeForResurrect": 0,
        "LethalDamage": 0,
        "KillerPlayerState": nullptr,
        "KillerPawn": nullptr,
        "DamageCauser": nullptr,
        "bDroppedBackpack": false,
        "bNotifyUI": true,
        "Tags": FGameplayTagContainer({})
    };
    bool bCanEverPaint = false;

};