class UPlayerPawn_Athena_Generic_C : public UPlayerPawn_Athena_Generic_Parent_C
{
public:
    int32 NumReplicatedProperties = 1;
    TArray<unknown> ComponentTemplates = {};
    TArray<unknown> Timelines = {};
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C:SimpleConstructionScript_2'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C:ExecuteUbergraph_PlayerPawn_Athena_Generic'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBlueprintGeneratedClass* ScreenEffect_PlayerHealthDamageDirection = "BlueprintGeneratedClass'FortniteGame/Content/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C'";
    class UBlueprintGeneratedClass* ScreenEffect_PlayerHealthDamage = "BlueprintGeneratedClass'FortniteGame/Content/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C'";
    class UBlueprintGeneratedClass* ScreenEffect_PlayerShieldDamageDirection = "BlueprintGeneratedClass'FortniteGame/Content/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C'";
    class UBlueprintGeneratedClass* ScreenEffect_PlayerShieldDamage = "BlueprintGeneratedClass'FortniteGame/Content/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C'";
    class UBlueprintGeneratedClass* HitByHuskProjectileClass = "BlueprintGeneratedClass'FortniteGame/Content/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C'";
    class USoundCue* HitByHuskRangedSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Monster_Husk/SFX/Ranged_Husk_Bone_Impact_Cue.Ranged_Husk_Bone_Impact_Cue'";
    class USoundCue* HitByHuskMeleeSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Impact_Sounds/Flesh/Player_Impact_Flesh_Spatial_Cue.Player_Impact_Flesh_Spatial_Cue'";
    class UAnimMontage* SoulSuckVictimMontage = "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Montages/General/TakerSoulSuckVictim.TakerSoulSuckVictim'";
    float Run_Particle_Activate_Speed = 480;
    float Walk_Dust_Activate_Speed = 320;
    float Walk_Particle_Reset_Speed = 310;
    bool CanSpawnRunKickupFX? = true;
    bool CanSpawnWalkKickupFX? = true;
    bool CanSpawnDustLandFX? = true;
    struct FRotator RunWalkParticleRotation = FRotator(0, 0, 0);
    struct FGameplayTagContainer GameplayTagsForHitByHuskMeleeSound = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("NPC.CharacterType.Blaster")),
        FGameplayTag::RequestGameplayTag(FName("NPC.CharacterType.Husk"))
    });
    class UMaterial* Adrenaline Material = "Material'FortniteGame/Content/Gadgets/Assets/AdrenalineRush/Materials/M_AdrenalineRushSweep_01.M_AdrenalineRushSweep_01'";
    struct FLinearColor Adrenaline Rush Color Outer Direct = FLinearColor(0.824328, 1, 0.025936, 0);
    struct FLinearColor Adrenaline Rush Color Inner Direct = FLinearColor(0.15, 3, 0.375001, 0);
    float Adrenaline Rush WPO Offset = 1.05;
    class UMaterialInstanceConstant* Shield Material = "MaterialInstanceConstant'FortniteGame/Content/Packages/Fortnite_UniqueMaterials_1/Effects/CharacterShield_style1_Athena.CharacterShield_style1_Athena'";
    bool Shield Active = true;
    float Ripple Damage Amount/size = 64;
    class USoundCue* Sound_Shield_Impact = "SoundCue'FortniteGame/Content/Sounds/Fort_Gadgets/Shield/Cons_Shield_Impacts_Athena_Cue.Cons_Shield_Impacts_Athena_Cue'";
    class USoundCue* Sound_Shield_Destroyed = "SoundCue'FortniteGame/Content/Sounds/Fort_Gadgets/Shield/Cons_Shield_Deactivate_Athena_Cue.Cons_Shield_Deactivate_Athena_Cue'";
    class USoundCue* Sound_Shield_FullyCharged = "SoundCue'FortniteGame/Content/Sounds/Fort_Gadgets/Shield/Cons_Shield_Activate_Cue.Cons_Shield_Activate_Cue'";
    class USoundCue* Sound_Shield_StartRecharge = "SoundCue'FortniteGame/Content/Sounds/Fort_Gadgets/Shield/Cons_Shield_Activate_Cue.Cons_Shield_Activate_Cue'";
    float Default Shield opacity = 0.3;
    float Shield_PushMinValue = 0.5;
    struct FGameplayTagContainer TC_GameplayCueDamageShielded = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("GameplayCue.Damage.Shielded"))
    });
    class UParticleSystem* P_DBNOResurrect = "ParticleSystem'FortniteGame/Content/Athena/Effects/Particles/P_PlayerRevived_Athena.P_PlayerRevived_Athena'";
    class USoundCue* DBNOResurrectSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Gadgets/Adrenaline_Rush/DBNO_Resurrect_Athena_Cue.DBNO_Resurrect_Athena_Cue'";
    struct FGameplayTag Event_NeedRoadsActive = {
        "TagName": FName("Abilities.Outlander.WhereWereGoingWeNeedRoads.Enter")
    };
    struct FGameplayTag Event_NeedRoadsDeactive = {
        "TagName": FName("Abilities.Outlander.WhereWereGoingWeNeedRoads.Exit")
    };
    struct FGameplayTagContainer TC_WhereWereGoingWeNeedRoads = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Abilities.Outlander.WhereWereGoingWeNeedRoads"))
    });
    class UParticleSystem* Effect_Player_LandedDust = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/Gameplay/SmokeDustExplosions/Particles/P_Player_Land_Effect.P_Player_Land_Effect'";
    class UParticleSystem* Effect_Player_GravitySphereFeet = "ParticleSystem'FortniteGame/Content/CharClasses/Outlander/Gadgets/GravitySphere/Particles/P_Outlander_GravitySphere_Feet_01.P_Outlander_GravitySphere_Feet_01'";
    class UForceFeedbackEffect* DamageForceFeedback = "ForceFeedbackEffect'FortniteGame/Content/Weapons/ForceFeedback/FF_Generic_TakeDamage.FF_Generic_TakeDamage'";
    class UWidgetBlueprintGeneratedClass* SpeechBubbleWidgetClass = "WidgetBlueprintGeneratedClass'FortniteGame/Content/UI/HUD/SpeechBubbleWidget.SpeechBubbleWidget_C'";
    class UBlueprintGeneratedClass* DamageCameraShake = "BlueprintGeneratedClass'FortniteGame/Content/Blueprints/Camera/Original/PlayerTakeDamage_CameraShake.PlayerTakeDamage_CameraShake_C'";
    struct FHitResult WaterTraceHitLocation = {
        "bBlockingHit": false,
        "bStartPenetrating": false,
        "FaceIndex": 0,
        "Time": 1,
        "Distance": 0,
        "Location": FVector(2.357E-42, 0, 1.235E-42),
        "ImpactPoint": FVector(2.357E-42, 0, 1.235E-42),
        "Normal": FVector(2.357E-42, 0, 1.235E-42),
        "ImpactNormal": FVector(2.357E-42, 0, 1.235E-42),
        "TraceStart": FVector(2.357E-42, 0, 1.235E-42),
        "TraceEnd": FVector(2.357E-42, 0, 1.235E-42),
        "PenetrationDepth": 0,
        "Item": 0,
        "PhysMaterial": nullptr,
        "Actor": nullptr,
        "Component": nullptr,
        "BoneName": FName("None")
    };
    struct FVector StableVelocityVector = FVector(0, 0, 0);
    class UParticleSystem* PlayerRunTemplate_Ground = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/Gameplay/SmokeDustExplosions/Particles/P_Run_DustKickup_01.P_Run_DustKickup_01'";
    class UParticleSystem* PlayerWalkTemplate_Ground = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/Gameplay/SmokeDustExplosions/Particles/P_Walk_DustKickup_01.P_Walk_DustKickup_01'";
    float DefaultShieldOpacity = 0.31;
    struct FLinearColor Adrenaline Rush Color Outer Periodic = FLinearColor(0.206082, 0.25, 0.006484, 0);
    struct FLinearColor Adrenaline Rush Color Inner Periodic = FLinearColor(0.075, 1.5, 0.187501, 0);
    float InstigatorCheckDistanceSqrd = 262144;
    float SlideDustActivateSpeed = 580;
    float CrouchMeshOffset = 0;
    class USkeletalMeshComponent* MeshParachuteOpen = "SkeletalMeshComponent'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic.Default__PlayerPawn_Athena_Generic_C:MeshParachuteOpen0'";
    class UPostProcessComponent* OutsideSafeZonePPComponent = "PostProcessComponent'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic.Default__PlayerPawn_Athena_Generic_C:OutsideSafeZonePP0'";
    class UBlueprintGeneratedClass* SelfReviveGameplayEffect = "BlueprintGeneratedClass'FortniteGame/Content/Abilities/Player/Generic/GameplayEffects/GE_ExtraLifeRevive.GE_ExtraLifeRevive_C'";
    class UBlueprintGeneratedClass* TeammateReviveGameplayEffect = "BlueprintGeneratedClass'FortniteGame/Content/Athena/MappedEffects/GE_Athena_Revive.GE_Athena_Revive_C'";
    struct FScalableFloat SetByCallerReviveHealth = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.DBNO.ReviveHealth")
        }
    };
    class UAnimMontage* UnableToPerformActionMontage = "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Montages/General/CantDoThat.CantDoThat'";
    class UAnimMontage* BluePrintPlaceAnimation = "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Montages/Blueprint/Blueprint_Place.Blueprint_Place'";
    class UAnimMontage* BluePrintEditAnimation = "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Montages/Blueprint/Blueprint_Edit.Blueprint_Edit'";
    FName CarriedObjectAttachmentSocket = FName("Backpack");
    struct FSlateBrush AboveBelowMiniMapIconBrush = {
        "ResourceObject": "Texture2D'FortniteGame/Content/UI/Fort_HUD/Radar/UI_Radar_PlayerArrow_Elevation.UI_Radar_PlayerArrow_Elevation'"
    };
    struct FSlateBrush FarOffMiniMapIconBrush = {
        "ImageSize": FVector2D(20, 20),
        "ResourceObject": "Texture2D'FortniteGame/Content/UI/Fort_HUD/Radar/UI_Radar_PlayerArrow_OOB.UI_Radar_PlayerArrow_OOB'"
    };
    struct FSlateBrush DBNOMiniMapIconBrush = {
        "ImageSize": FVector2D(20, 20),
        "ResourceObject": "Texture2D'FortniteGame/Content/UI/Fort_HUD/Radar/UI_Radar_SupplyDrop.UI_Radar_SupplyDrop'"
    };
    struct FDataTableRowHandle PawnStatHandle = {
        "DataTable": "DataTable'FortniteGame/Content/Characters/Player/DataTables/CharacterAttributesPlayer.CharacterAttributesPlayer'",
        "RowName": FName("PlayerLoadout_Generic")
    };
    float MaxFootstepDistance = 2000;
    class USoundCue* DefaultFootstepSound = "SoundCue'FortniteGame/Content/Sounds/Fortress_Foley/Player_Movement/Player_Step_Walk_Cue.Player_Step_Walk_Cue'";
    class USoundCue* DefaultFastFootstepSound = "SoundCue'FortniteGame/Content/Sounds/Fortress_Foley/Player_Movement/Player_Step_Run_Cue.Player_Step_Run_Cue'";
    class USoundCue* DefaultLandingSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Step_Sounds/Human/Human_Land_Light_Dirt_Cue.Human_Land_Light_Dirt_Cue'";
    class USoundCue* DefaultHardLandingSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Step_Sounds/Human/Human_Land_Heavy_Dirt_Cue.Human_Land_Heavy_Dirt_Cue'";
    class USoundCue* DefaultJumpSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Foley_Sounds/Moves/Player_Foley_Jump_Cue.Player_Foley_Jump_Cue'";
    struct FPawnDamageZones DamageZones = {
        "Bones": {}
    };
    float TargettingZOffset = 45;
    class UBlueprintGeneratedClass* HealthRegenDelayGameplayEffect = "BlueprintGeneratedClass'FortniteGame/Content/Abilities/Player/Generic/GameplayEffects/GE_HealthRegen_Delay_Damaged.GE_HealthRegen_Delay_Damaged_C'";
    class UBlueprintGeneratedClass* HealthRegenGameplayEffect = "BlueprintGeneratedClass'FortniteGame/Content/Abilities/Player/Generic/GameplayEffects/GE_Generic_HealthRegen.GE_Generic_HealthRegen_C'";
    class UBlueprintGeneratedClass* ShieldRegenDelayGameplayEffect = "BlueprintGeneratedClass'FortniteGame/Content/Abilities/Player/Generic/GameplayEffects/GE_ShieldRegen_Delay_Damaged.GE_ShieldRegen_Delay_Damaged_C'";
    class UBlueprintGeneratedClass* ShieldRegenGameplayEffect = "BlueprintGeneratedClass'FortniteGame/Content/Abilities/Player/Generic/GameplayEffects/GE_Generic_ShieldRegen.GE_Generic_ShieldRegen_C'";
    class UFortFeedbackBank* DefaultFeedback = "FortFeedbackBank'FortniteGame/Content/Characters/Feedback/HumanMaleFeedback.HumanMaleFeedback'";
    TArray<struct FFortPawnVocalChord> VocalChords = {
        {
            "FeedbackAudioComponent": "AudioComponent'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic.Default__PlayerPawn_Athena_Generic_C:FeedbackAudioComp0'",
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
    class USkeletalMeshComponent* Mesh = "SkeletalMeshComponent'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic.Default__PlayerPawn_Athena_Generic_C:CharacterMesh0'";
    class UFortMovementComp_CharacterAthena* CharacterMovement = "FortMovementComp_CharacterAthena'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic.Default__PlayerPawn_Athena_Generic_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic.Default__PlayerPawn_Athena_Generic_C:CollisionCylinder'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic.Default__PlayerPawn_Athena_Generic_C:CollisionCylinder'";

};