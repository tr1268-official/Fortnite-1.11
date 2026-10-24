class USafeZoneIndicator_C : public UFortSafeZoneIndicator
{
public:
    TArray<unknown> Timelines = {};
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/SafeZone/SafeZoneIndicator.SafeZoneIndicator_C:SimpleConstructionScript_0'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/SafeZone/SafeZoneIndicator.SafeZoneIndicator_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/SafeZone/SafeZoneIndicator.SafeZoneIndicator_C:ExecuteUbergraph_SafeZoneIndicator'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class USoundCue* ShieldBoundaryLoopSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Shield/Shield_PowerLoop_Crossfade_Cue.Shield_PowerLoop_Crossfade_Cue'";
    class USoundCue* HoldingLoopSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Shield/SafeZone_HoldingLoop_Cue.SafeZone_HoldingLoop_Cue'";
    class USoundCue* HoldingLoopTickSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Shield/SafeZone_HoldingLoop_Time_Cue.SafeZone_HoldingLoop_Time_Cue'";
    float InitialSafeZoneWorldScale = 3700;
    bool bIsViewTargetPawnOutside = true;
    float AudioLowPassValue = 3700;
    struct FVector ViewTargetLocation = FVector(0, 0, 0);
    float NextSafeZoneSweepSpeed = 1500;
    struct FSlateBrush MiniMapIconBrush = {
        "ImageSize": FVector2D(256, 256),
        "ResourceObject": "Texture2D'FortniteGame/Content/Athena/SafeZone/UI_Map_SafeZone.UI_Map_SafeZone'",
        "ImageType": ESlateBrushImageType::FullColor
    };
    struct FSlateBrush FarOffMiniMapIconBrush = {
        "ImageSize": FVector2D(20, 20),
        "ResourceObject": "Texture2D'FortniteGame/Content/UI/Fort_HUD/Radar/UI_Radar_PlayerArrow_OOB.UI_Radar_PlayerArrow_OOB'",
        "ImageType": ESlateBrushImageType::FullColor
    };
    float SafeZoneToWorldScale = 0.02;
    class UStaticMeshComponent* SafeZoneMesh = "StaticMeshComponent'FortniteGame/Content/Athena/SafeZone/SafeZoneIndicator.Default__SafeZoneIndicator_C:SafeZoneMesh'";
    class UCurveFloat* MovementAudioCrossfadeCurve = "CurveFloat'FortniteGame/Content/Athena/SafeZone/C_SafeZoneMovementAudioCrossfade.C_SafeZoneMovementAudioCrossfade'";
    class UCurveFloat* MovementAudioPitchModCurve = "CurveFloat'FortniteGame/Content/Athena/SafeZone/C_SafeZoneMovementAudioPitchMod.C_SafeZoneMovementAudioPitchMod'";
    class UCurveFloat* ClockTickingAudioVolumeCurve = "CurveFloat'FortniteGame/Content/Athena/SafeZone/C_SafeZoneClockTickingAudioVolumeMod.C_SafeZoneClockTickingAudioVolumeMod'";
    class UCurveFloat* ClockTickingAudioPitchCurve = "CurveFloat'FortniteGame/Content/Athena/SafeZone/C_SafeZoneClockTickingAudioPitchMod.C_SafeZoneClockTickingAudioPitchMod'";
    class USceneComponent* RootComponent = "SceneComponent'FortniteGame/Content/Athena/SafeZone/SafeZoneIndicator.Default__SafeZoneIndicator_C:Scene'";

};