class UPlayerPawn_Athena_C : public UPlayerPawn_Athena_Generic_C
{
public:
    TArray<unknown> ComponentTemplates = {};
    TArray<unknown> Timelines = {};
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C:SimpleConstructionScript_4'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'FortniteGame/Content/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C:InheritableComponentHandler'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C:ExecuteUbergraph_PlayerPawn_Athena'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UParticleSystem* P_IncendiaryRound = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/Effects/Characters/Soldier/P_Fire_Dot.P_Fire_Dot'";
    class UParticleSystem* P_MakeItRain = "ParticleSystem'FortniteGame/Content/CharClasses/Soldier/Traits/AdvancedTactics/Abilities/P_Soldier_Bulletstorm.P_Soldier_Bulletstorm'";
    struct FGameplayTagContainer TC_FlakVest = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Abilities.Commando.FlakVest"))
    });
    struct FGameplayEventData Event Data = {
        "EventTag": {
            "TagName": FName("None")
        },
        "Instigator": nullptr,
        "Target": nullptr,
        "OptionalObject": nullptr,
        "OptionalObject2": nullptr,
        "ContextHandle": {},
        "InstigatorTags": FGameplayTagContainer({}),
        "TargetTags": FGameplayTagContainer({}),
        "EventMagnitude": 0,
        "TargetData": {}
    };
    struct FGameplayTag EventSpawnEffect = {
        "TagName": FName("Abilities.Commando.FlakVest.SpawnEffect")
    };
    float ShockwaveRefractionRingHeight = 300;
    class UParticleSystem* P_Shockwave = "ParticleSystem'FortniteGame/Content/CharClasses/Soldier/Traits/AdvancedTactics/Abilities/Shockwave/P_Commando_Shockwave_01.P_Commando_Shockwave_01'";
    class UForceFeedbackEffect* ShockwaveForceFeedback = "ForceFeedbackEffect'FortniteGame/Content/Weapons/ForceFeedback/FF_Generic_Explosion_Near.FF_Generic_Explosion_Near'";
    class USoundCue* SafeZonePassThroughSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Shield/Shield_Passthrough_Cue.Shield_Passthrough_Cue'";
    struct FLinearColor ThreatColor = FLinearColor(0.854902, 0.584314, 1, 1);
    class USoundCue* PlayerKilledSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Shield/Shield_Passthrough_Cue.Shield_Passthrough_Cue'";
    TArray<unknown> Contrails = {};
    struct FVector LightningSpawnLocation = FVector(0, 0, 0);
    float LightningIntensityMin = 50;
    float LightningIntensityMax = 100;
    float LightningIntensity = 100;
    float LightningTimelinePlaySpeedMin = 0.45;
    float LightningTimelinePlaySpeedMax = 0.95;
    float LightningFlashDiameter = 1600;
    float LightningFlashHeight = 1200;
    float LightningFlashRepeatDelayMin = 0.45;
    float LightningFlashRepeatDelayMax = 2.5;
    float %ChanceOfLightningMesh = 0.5;
    float StormAudioVolume = 1;
    float SkydiveAudioGroundVolumeScale = 1;
    class USoundCue* SkydivingLoop1P = "SoundCue'FortniteGame/Content/Athena/Sounds/Wind_Falling/Wind_UmbrellaClosed_Loop_1P_Cue.Wind_UmbrellaClosed_Loop_1P_Cue'";
    class USoundCue* SkydivingLoop3P = "SoundCue'FortniteGame/Content/Athena/Sounds/Wind_Falling/Wind_UmbrellaClosed_Loop_3P_Cue.Wind_UmbrellaClosed_Loop_3P_Cue'";
    class USoundCue* ParachuteOpenLoop1P = "SoundCue'FortniteGame/Content/Athena/Sounds/Wind_Falling/Wind_UmbrellaOpen_Loop_1P_Cue.Wind_UmbrellaOpen_Loop_1P_Cue'";
    class USoundCue* ParachuteOpenLoop3P = "SoundCue'FortniteGame/Content/Athena/Sounds/Wind_Falling/Wind_UmbrellaOpen_Loop_3P_Cue.Wind_UmbrellaOpen_Loop_3P_Cue'";
    class USoundCue* OnReviveSound = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Player/Revive_Player_Athena_Cue.Revive_Player_Athena_Cue'";
    class UCurveFloat* ParachuteDirectionalSpeedMultiplierCurve = "CurveFloat'FortniteGame/Content/Athena/Balance/Movement/ParachuteDirectionalSpeedMultiplierCurve.ParachuteDirectionalSpeedMultiplierCurve'";
    class UCurveFloat* SkydivingDirectionalSpeedMultiplierCurve = "CurveFloat'FortniteGame/Content/Athena/Balance/Movement/SkydivingDirectionalSpeedMultiplierCurve.SkydivingDirectionalSpeedMultiplierCurve'";
    class USoundCue* DefaultCrouchedFootstepSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Character/Footsteps/1P/Dirt/Athena_Character_Crouch_Footstep_Dirt_Cue.Athena_Character_Crouch_Footstep_Dirt_Cue'";
    class USoundCue* DefaultCrouchSprintFootstepSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Character/Footsteps/1P/Dirt/Athena_Character_Crouch_Sprint_Footstep_Dirt_Cue.Athena_Character_Crouch_Sprint_Footstep_Dirt_Cue'";
    class USoundCue* HitNotifySoundBody = "SoundCue'FortniteGame/Content/Athena/Sounds/HitNotifications/HitMarker_Body_Cue.HitMarker_Body_Cue'";
    class USoundCue* HitNotifySoundCrit = "SoundCue'FortniteGame/Content/Athena/Sounds/HitNotifications/HitMarker_Critical_Cue.HitMarker_Critical_Cue'";
    class USoundCue* HitNotifySoundShield = "SoundCue'FortniteGame/Content/Athena/Sounds/HitNotifications/HitMarker_Shield_Cue.HitMarker_Shield_Cue'";
    class USoundCue* HitNotifySoundDeath = "SoundCue'FortniteGame/Content/Athena/Sounds/HitNotifications/HitMarker_Death_Cue.HitMarker_Death_Cue'";
    class USoundCue* HitNotifySoundDeathCrit = "SoundCue'FortniteGame/Content/Athena/Sounds/HitNotifications/HitMarker_Death_Critical_Cue.HitMarker_Death_Critical_Cue'";
    class USoundCue* HitNotifySoundBodyReceive = "SoundCue'FortniteGame/Content/Athena/Sounds/HitNotifications/HitMarker_Body_Receive_Cue.HitMarker_Body_Receive_Cue'";
    class USoundCue* HitNotifySoundCritReceive = "SoundCue'FortniteGame/Content/Athena/Sounds/HitNotifications/HitMarker_Critical_Receive_Cue.HitMarker_Critical_Receive_Cue'";
    class USoundCue* HitNotifySoundDeathReceive = "SoundCue'FortniteGame/Content/Athena/Sounds/HitNotifications/HitMarker_Death_Receive_Cue.HitMarker_Death_Receive_Cue'";
    class USoundCue* HitNotifySoundDeathCritReceive = "SoundCue'FortniteGame/Content/Athena/Sounds/HitNotifications/HitMarker_Death_Critical_Receive_Cue.HitMarker_Death_Critical_Receive_Cue'";
    class USoundCue* HitNotifyFallReceive = "SoundCue'FortniteGame/Content/Athena/Sounds/HitNotifications/HitMarker_Fall_Receive_Cue.HitMarker_Fall_Receive_Cue'";
    class USoundCue* HitNotifyFallDeathReceive = "SoundCue'FortniteGame/Content/Athena/Sounds/HitNotifications/HitMarker_Death_Fall_Receive_Cue.HitMarker_Death_Fall_Receive_Cue'";
    class UDataTable* PrototypeShootingModel = "DataTable'FortniteGame/Content/Athena/Items/Weapons/AthenaRangedWeapons_ShootingModel2.AthenaRangedWeapons_ShootingModel2'";
    class USkeletalMeshComponent* MeshParachuteOpen = "SkeletalMeshComponent'FortniteGame/Content/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C:MeshParachuteOpen0'";
    struct FScalableFloat ParachuteDeployTraceForGroundDistance = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.Parachute.DeployTraceForGroundDistance")
        }
    };
    struct FScalableFloat LaunchPadParachuteDeployTraceForGroundDistance = {
        "Value": 1550
    };
    struct FScalableFloat ParachuteDeployVelocityBlend = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.Parachute.DeployVelocityBlend")
        }
    };
    class UPostProcessComponent* OutsideSafeZonePPComponent = "PostProcessComponent'FortniteGame/Content/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C:OutsideSafeZonePP0'";
    struct FSlateBrush DBNOMiniMapIconBrush = {
        "ResourceObject": "Texture2D'FortniteGame/Content/Athena/HUD/Art/cross_Shadow.cross_Shadow'"
    };
    struct FLinearColor MinimapIconColorSelf = FLinearColor(1, 1, 1, 1);
    struct FDataTableRowHandle PawnStatHandle = {
        "RowName": FName("PlayerLoadout_AthenaPlayer")
    };
    float MaxFootstepDistance = 5000;
    class USoundCue* DefaultFootstepSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Character/Footsteps/1P/Dirt/Athena_Character_Walk_Footstep_Dirt_Cue.Athena_Character_Walk_Footstep_Dirt_Cue'";
    class USoundCue* DefaultFastFootstepSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Character/Footsteps/1P/Dirt/Athena_Character_Sprint_Footstep_Dirt_Cue.Athena_Character_Sprint_Footstep_Dirt_Cue'";
    class USoundCue* DefaultLandingSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Character/Footsteps/1P/Dirt/Athena_Character_Land_Dirt_Cue.Athena_Character_Land_Dirt_Cue'";
    class USoundCue* DefaultHardLandingSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Character/Footsteps/1P/Dirt/Athena_Character_LandHard_Dirt_Cue.Athena_Character_LandHard_Dirt_Cue'";
    class USoundCue* DefaultJumpSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Character/Footsteps/1P/Dirt/Athena_Character_Jump_Dirt_Cue.Athena_Character_Jump_Dirt_Cue'";
    class UFortFootstepAudioBank* FootstepBank = "FortFootstepAudioBank'FortniteGame/Content/Athena/Sounds/Character/Footsteps/DefaultFootstepBankAthena.DefaultFootstepBankAthena'";
    enum TraceTypeQuery10 FootstepTraceTypeQuery = TraceTypeQuery10;
    TArray<struct FFortPawnVocalChord> VocalChords = {
        {
            "FeedbackAudioComponent": "AudioComponent'FortniteGame/Content/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C:FeedbackAudioComp0'",
            "ReplicatedSpokenLine": {
                "Audio": nullptr,
                "AnimMontage": nullptr,
                "AnimSequence": nullptr,
                "Addressee": nullptr,
                "BroadcastFilter": FFBF_None_Max,
                "Delay": 0,
                "bInterruptCurrentLine": false,
                "bCanBeInterrupted": false,
                "bCanQue": false
            },
            "PendingSpokenLine": {
                "Audio": nullptr,
                "AnimMontage": nullptr,
                "AnimSequence": nullptr,
                "Addressee": nullptr,
                "BroadcastFilter": FFBF_None_Max,
                "Delay": 0,
                "bInterruptCurrentLine": false,
                "bCanBeInterrupted": false,
                "bCanQue": false
            },
            "QueuedSpokenLine": {
                "Audio": nullptr,
                "AnimMontage": nullptr,
                "AnimSequence": nullptr,
                "Addressee": nullptr,
                "BroadcastFilter": FFBF_None_Max,
                "Delay": 0,
                "bInterruptCurrentLine": false,
                "bCanBeInterrupted": false,
                "bCanQue": false
            },
            "CurrentSpokenLine": {
                "Audio": nullptr,
                "AnimMontage": nullptr,
                "AnimSequence": nullptr,
                "Addressee": nullptr,
                "BroadcastFilter": FFBF_None_Max,
                "Delay": 0,
                "bInterruptCurrentLine": false,
                "bCanBeInterrupted": false,
                "bCanQue": false
            }
        }
    };
    struct FGameplayTagContainer GameplayTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Class.IsCommando")),
        FGameplayTag::RequestGameplayTag(FName("NPC.EnemyType.Pawn")),
        FGameplayTag::RequestGameplayTag(FName("Homebase.Class.IsCommando"))
    });
    class USkeletalMeshComponent* Mesh = "SkeletalMeshComponent'FortniteGame/Content/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C:CharacterMesh0'";
    class UFortMovementComp_CharacterAthena* CharacterMovement = "FortMovementComp_CharacterAthena'FortniteGame/Content/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'FortniteGame/Content/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C:CollisionCylinder'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'FortniteGame/Content/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C:CollisionCylinder'";

};