class UAmbientControllerComponent_Athena_C : public UActorComponent
{
public:
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Sounds/Ambient/AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Sounds/Ambient/AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C:ExecuteUbergraph_AmbientControllerComponent_Athena'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class USoundCue* Loop_Morning = "SoundCue'FortniteGame/Content/Athena/Sounds/Ambient/Temperate_Grasslands_Hills_Morning_Athena_Cue.Temperate_Grasslands_Hills_Morning_Athena_Cue'";
    class USoundCue* Loop_Evening = "SoundCue'FortniteGame/Content/Athena/Sounds/Ambient/Temperate_Grasslands_Hills_Evening_Athena_Cue.Temperate_Grasslands_Hills_Evening_Athena_Cue'";
    class USoundCue* Loop_Indoors = "SoundCue'FortniteGame/Content/Athena/Sounds/Ambient/Amb_RoomTone_Athena_Cue.Amb_RoomTone_Athena_Cue'";
    class USoundCue* Loop_Night = "SoundCue'FortniteGame/Content/Athena/Sounds/Ambient/Temperate_Grasslands_Hills_Night_Athena_Cue.Temperate_Grasslands_Hills_Night_Athena_Cue'";
    class USoundCue* Loop_Day = "SoundCue'FortniteGame/Content/Athena/Sounds/Ambient/Temperate_Grasslands_Hills_Day_Athena_Cue.Temperate_Grasslands_Hills_Day_Athena_Cue'";
    float CheckFrequency = 1.5;
    float TargetLPFFreq = 20000;
    float CurrentLPFFreq = 20000;
    float InsideLPFFreq = 5000;
    float OutsideLPFFreq = 20000;
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bCanEverTick": true
    };

};