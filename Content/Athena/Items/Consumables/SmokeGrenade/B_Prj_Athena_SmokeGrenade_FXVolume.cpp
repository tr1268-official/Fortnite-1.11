class AB_Prj_Athena_SmokeGrenade_FXVolume_C : public AActor
{
public:
    TArray<unknown> Timelines = {};
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Items/Consumables/SmokeGrenade/B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C:SimpleConstructionScript_0'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/SmokeGrenade/B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/SmokeGrenade/B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C:ExecuteUbergraph_B_Prj_Athena_SmokeGrenade_FXVolume'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float SmokebombLifespan = 30;
    float SmokebombRadius = 768;
    float SmokeFadeInTime = 1.75;
    float SmokeFadeOutTime = 1;
    float SmokeDelayBeforeFadeIn = 0.4;
    float PPEndFadeRadius = 690;
    float PPStartFadeRadius = 755;
    float TickDistanceCheckInterval = 1;
    struct FActorTickFunction PrimaryActorTick = {
        "bCanEverTick": true,
        "bStartWithTickEnabled": false
    };
    float InitialLifeSpan = 60;

};