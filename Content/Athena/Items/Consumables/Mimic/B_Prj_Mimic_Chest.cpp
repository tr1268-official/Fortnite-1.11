class UB_Prj_Mimic_Chest_C : public UFortProjectileBase
{
public:
    int32 NumReplicatedProperties = 1;
    TArray<unknown> ComponentTemplates = {};
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C:SimpleConstructionScript_226'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C:ExecuteUbergraph_B_Prj_Mimic_Chest'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float Initial Delay = 1;
    class USoundCue* PlacementCue = "SoundCue'FortniteGame/Content/Sounds/Fort_Gadgets/Soldier/Soldier_Proxy_Mine_Activate_Cue.Soldier_Proxy_Mine_Activate_Cue'";
    class USoundCue* ExplosionCue = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Explosives/BottleRocket_Explosion_Cue.BottleRocket_Explosion_Cue'";
    class USoundCue* SecondExplosionCue = "SoundCue'FortniteGame/Content/Sounds/Fort_Gadgets/Technician/Technician_Mortar_Explode_Cue.Technician_Mortar_Explode_Cue'";
    class UParticleSystem* P_Explosion = "ParticleSystem'FortniteGame/Content/Gadgets/Assets/BottleRocket/P_BottleRocketHolderExplode.P_BottleRocketHolderExplode'";
    float MaxSlope = 60;
    float DelayBottleRockets = 1.2;
    float Min_BR_SpawnDelay = 0.1;
    float Max_BR_SpawnDelay = 0.4;
    float BR_SpawnLoc_Offset = 14;
    float BottleRocketGravity = 1;
    float MuzzleLocOffset = 75;
    float BottleRocketSpeed = 1600;
    float Spread = 0.3;
    struct FFortGameplayEffectContainerSpec RocketGEContainerSpec = {
        "TargetSelection": {
            "List": {},
            "bStopAtFirstSuccess": true,
            "bKeepCheckingListOnIndestructibleHit": false,
            "bUseWeaponRanges": true,
            "bUseMaxYawAngleToTarget": false,
            "MaxYawAngleToTarget": 0
        },
        "TargetGameplayEffectSpecs": {},
        "OwnerGameplayEffectSpecs": {},
        "ActivationCues": FGameplayTagContainer({}),
        "ImpactCues": FGameplayTagContainer({})
    };
    class USoundCue* BottleRocketFire_Sound = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Explosives/BottleRocket_Fire_Cue.BottleRocket_Fire_Cue'";
    class UForceFeedbackEffect* ForceFeedbackNear = "ForceFeedbackEffect'FortniteGame/Content/Weapons/ForceFeedback/FF_Generic_Explosion_Small_Near.FF_Generic_Explosion_Small_Near'";
    class UForceFeedbackEffect* ForceFeedbackFar = "ForceFeedbackEffect'FortniteGame/Content/Weapons/ForceFeedback/FF_Generic_Explosion_Small_Far.FF_Generic_Explosion_Small_Far'";
    struct FCurveTableRowHandle InitialSpeed = {
        "CurveTable": "CurveTable'FortniteGame/Content/Items/Datatables/Projectiles.Projectiles'",
        "RowName": FName("Scavenger_Firecracker_InitialSpeed")
    };
    struct FCurveTableRowHandle MaxSpeed = {
        "CurveTable": "CurveTable'FortniteGame/Content/Items/Datatables/Projectiles.Projectiles'",
        "RowName": FName("Scavenger_Firecracker_MaxSpeed")
    };
    bool bAddOwnerVelocity = false;
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic_Chest.Default__B_Prj_Mimic_Chest_C:CollisionCapsule0'";
    class UProjectileMovementComponent* ProjectileMovementComponent = "ProjectileMovementComponent'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic_Chest.Default__B_Prj_Mimic_Chest_C:ProjectileComp0'";
    bool bStopSimulatingOnHit = false;
    class UCapsuleComponent* CollisionComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic_Chest.Default__B_Prj_Mimic_Chest_C:CollisionCapsule0'";
    float InitialLifeSpan = 19;
    class UCapsuleComponent* RootComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic_Chest.Default__B_Prj_Mimic_Chest_C:CollisionCapsule0'";

};