class ABP_Bus_Lobby_SoundController_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Sounds/Vehicles/BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C:SimpleConstructionScript_0'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Sounds/Vehicles/BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Sounds/Vehicles/BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C:ExecuteUbergraph_BP_Bus_Lobby_SoundController'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float IgnitionTime = 4;
    class USoundCue* IgnitionSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Vehicles/Athena_Bus_Ignition_Cue.Athena_Bus_Ignition_Cue'";
    class USoundCue* LoopingSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Vehicles/Athena_Bus_Engine_Idle_Cue.Athena_Bus_Engine_Idle_Cue'";
    class USoundCue* LoopingMusic = "SoundCue'FortniteGame/Content/Athena/Sounds/Vehicles/Athena_Bus_Music_Lobby_Loop_Cue.Athena_Bus_Music_Lobby_Loop_Cue'";
    class UCurveFloat* GetReadyFadeCurve = "CurveFloat'FortniteGame/Content/Athena/Sounds/Vehicles/Curve_BusGetReadyFadeValue.Curve_BusGetReadyFadeValue'";
    struct FActorTickFunction PrimaryActorTick = {
        "bCanEverTick": true
    };

};