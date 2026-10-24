class UB_Prj_Ranged_GrenadeLauncher_Athena_C : public UFortProjectileBase
{
public:
    TArray<unknown> ComponentTemplates = {};
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Items/Weapons/B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C:SimpleConstructionScript_0__57659476'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Weapons/B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Weapons/B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C:ExecuteUbergraph_B_Prj_Ranged_GrenadeLauncher_Athena'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UParticleSystem* RibbonTrail_PS = "ParticleSystem'FortniteGame/Content/Weapons/FORT_Special/SnowBaller/Effects/P_SnowBaller_Ribbon_SmokeTrail.P_SnowBaller_Ribbon_SmokeTrail'";
    float TrailLifetime = 1.5;
    enum SurfaceType8 WaterPhysMat = SurfaceType8;
    class UParticleSystem* Bounce_WaterSplash_PS = "ParticleSystem'FortniteGame/Content/Weapons/FORT_GrenadeLaunchers/Effects/P_Bounce_Water.P_Bounce_Water'";
    class UParticleSystem* Bounce_Generic_PS = "ParticleSystem'FortniteGame/Content/Weapons/FORT_Special/SnowBaller/Effects/P_SnowBaller_Bounce_Generic.P_SnowBaller_Bounce_Generic'";
    class UParticleSystem* Explosion_PS = "ParticleSystem'FortniteGame/Content/Weapons/FORT_Special/SnowBaller/Effects/P_SnowBaller_Explosion.P_SnowBaller_Explosion'";
    struct FVector StopLocation = FVector(0, 0, 0);
    TArray<unknown> ObjectsToTraceAgainst = {};
    struct FRotator StopRotX = FRotator(0, 0, 0);
    class USoundCue* Grenade_Explosion_Sound = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Explosives/Grenade_Launcher_Explosion_MLTI_Athena_Cue.Grenade_Launcher_Explosion_MLTI_Athena_Cue'";
    class UParticleSystem* Explosion_Water_PS = "ParticleSystem'FortniteGame/Content/Weapons/FORT_RocketLaunchers/Effects/P_RL_Explosion_Water.P_RL_Explosion_Water'";
    struct FHitResult OnBounceHitResult = {
        "bBlockingHit": false,
        "bStartPenetrating": false,
        "FaceIndex": 0,
        "Time": 1,
        "Distance": 0,
        "Location": FVector(4.39E-43, 0, 2.3E-43),
        "ImpactPoint": FVector(4.39E-43, 0, 2.3E-43),
        "Normal": FVector(4.39E-43, 0, 2.3E-43),
        "ImpactNormal": FVector(4.39E-43, 0, 2.3E-43),
        "TraceStart": FVector(4.39E-43, 0, 2.3E-43),
        "TraceEnd": FVector(4.39E-43, 0, 2.3E-43),
        "PenetrationDepth": 0,
        "Item": 0,
        "PhysMaterial": nullptr,
        "Actor": nullptr,
        "Component": nullptr,
        "BoneName": FName("None")
    };
    float FuseTimer@Spawn = 2.75;
    float FuseTimerAfterBounce = 2;
    class UParticleSystem* WaterLandDelayPS = "ParticleSystem'FortniteGame/Content/Weapons/FORT_GrenadeLaunchers/Effects/P_RestInWater.P_RestInWater'";
    class USoundCue* Grenade_Explosion_Water_Sound = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Explosives/Grenade_Launcher_Explosion_MLTI_Athena_Cue.Grenade_Launcher_Explosion_MLTI_Athena_Cue'";
    struct FRotator StopRotZ = FRotator(0, 0, 0);
    class UForceFeedbackEffect* ExplosionForceFeedbackNear = "ForceFeedbackEffect'FortniteGame/Content/Weapons/ForceFeedback/FF_Generic_Explosion_Near.FF_Generic_Explosion_Near'";
    class UForceFeedbackEffect* ExplosionForceFeedbackFar = "ForceFeedbackEffect'FortniteGame/Content/Weapons/ForceFeedback/FF_Generic_Explosion_Far.FF_Generic_Explosion_Far'";
    struct FCurveTableRowHandle VerticleFireOffset = {
        "CurveTable": "CurveTable'FortniteGame/Content/Items/Datatables/Projectiles.Projectiles'",
        "RowName": FName("Grenade_Launcher_VertDirOffset")
    };
    struct FCurveTableRowHandle InitialSpeed = {
        "CurveTable": "CurveTable'FortniteGame/Content/Items/Datatables/Projectiles.Projectiles'",
        "RowName": FName("Grenade_Launcher_MaxSpeed")
    };
    struct FCurveTableRowHandle MaxSpeed = {
        "CurveTable": "CurveTable'FortniteGame/Content/Items/Datatables/Projectiles.Projectiles'",
        "RowName": FName("Grenade_Launcher_MaxSpeed")
    };
    bool bAddOwnerVelocity = false;
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Weapons/B_Prj_Ranged_GrenadeLauncher_Athena.Default__B_Prj_Ranged_GrenadeLauncher_Athena_C:CollisionCapsule0'";
    class UProjectileMovementComponent* ProjectileMovementComponent = "ProjectileMovementComponent'FortniteGame/Content/Athena/Items/Weapons/B_Prj_Ranged_GrenadeLauncher_Athena.Default__B_Prj_Ranged_GrenadeLauncher_Athena_C:ProjectileComp0'";
    bool bStopSimulatingOnHit = false;
    class UCapsuleComponent* CollisionComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Weapons/B_Prj_Ranged_GrenadeLauncher_Athena.Default__B_Prj_Ranged_GrenadeLauncher_Athena_C:CollisionCapsule0'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Weapons/B_Prj_Ranged_GrenadeLauncher_Athena.Default__B_Prj_Ranged_GrenadeLauncher_Athena_C:CollisionCapsule0'";

};