class UB_Prj_Athena_BigPoppy_C : public UFortProjectileBase
{
public:
    int32 NumReplicatedProperties = 2;
    TArray<unknown> DynamicBindingObjects = {};
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Items/Consumables/BigPoppy/B_Prj_Athena_BigPoppy.B_Prj_Athena_BigPoppy_C:SimpleConstructionScript_309'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/BigPoppy/B_Prj_Athena_BigPoppy.B_Prj_Athena_BigPoppy_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/BigPoppy/B_Prj_Athena_BigPoppy.B_Prj_Athena_BigPoppy_C:ExecuteUbergraph_B_Prj_Athena_BigPoppy'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UParticleSystem* P_Explosion = "ParticleSystem'FortniteGame/Content/Gadgets/Assets/Grenade/P_Grenade_Explosion_Blue.P_Grenade_Explosion_Blue'";
    struct FVector HitLocation = FVector(0, 0, 0);
    class USoundCue* Cue_DistantSound = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Explosives/Grenade_Explosion_Athena_Cue.Grenade_Explosion_Athena_Cue'";
    class USoundCue* Cue_CloseSound = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Explosives/Grenade_Explosion_Athena_Cue.Grenade_Explosion_Athena_Cue'";
    int32 NumberOfBouncesTillExplode = 5;
    class USoundCue* Cue_GrenadeFuseSound = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Explosives/Fuse_TrollBomb_Loop_Cue.Fuse_TrollBomb_Loop_Cue'";
    float GravityScaleAgainstElse = 4;
    float GravityScaleAgainstPawn = 5;
    struct FHitResult StoredHit = {
        "bBlockingHit": false,
        "bStartPenetrating": false,
        "FaceIndex": 0,
        "Time": 1,
        "Distance": 0,
        "Location": FVector(5.45E-43, 0, 2.97E-43),
        "ImpactPoint": FVector(5.45E-43, 0, 2.97E-43),
        "Normal": FVector(5.45E-43, 0, 2.97E-43),
        "ImpactNormal": FVector(5.45E-43, 0, 2.97E-43),
        "TraceStart": FVector(5.45E-43, 0, 2.97E-43),
        "TraceEnd": FVector(5.45E-43, 0, 2.97E-43),
        "PenetrationDepth": 0,
        "Item": 0,
        "PhysMaterial": nullptr,
        "Actor": nullptr,
        "Component": nullptr,
        "BoneName": FName("None")
    };
    class UForceFeedbackEffect* ExplosionForceFeedbackNear = "ForceFeedbackEffect'FortniteGame/Content/Weapons/ForceFeedback/FF_Generic_Explosion_Near.FF_Generic_Explosion_Near'";
    class UForceFeedbackEffect* ExplosionForceFeedbackFar = "ForceFeedbackEffect'FortniteGame/Content/Weapons/ForceFeedback/FF_Generic_Explosion_Far.FF_Generic_Explosion_Far'";
    class USoundCue* Cue_Bounce = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Explosives/Grenade_Projectile_Bounce_Cue.Grenade_Projectile_Bounce_Cue'";
    struct FCurveTableRowHandle VerticleFireOffset = {
        "CurveTable": "CurveTable'FortniteGame/Content/Items/Datatables/Projectiles.Projectiles'",
        "RowName": FName("Soldier_Grenade_VertDirOffset")
    };
    bool bAddOwnerVelocity = false;
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/BigPoppy/B_Prj_Athena_BigPoppy.Default__B_Prj_Athena_BigPoppy_C:CollisionCapsule0'";
    class UProjectileMovementComponent* ProjectileMovementComponent = "ProjectileMovementComponent'FortniteGame/Content/Athena/Items/Consumables/BigPoppy/B_Prj_Athena_BigPoppy.Default__B_Prj_Athena_BigPoppy_C:ProjectileComp0'";
    bool bStopSimulatingOnHit = false;
    class UCapsuleComponent* CollisionComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/BigPoppy/B_Prj_Athena_BigPoppy.Default__B_Prj_Athena_BigPoppy_C:CollisionCapsule0'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/BigPoppy/B_Prj_Athena_BigPoppy.Default__B_Prj_Athena_BigPoppy_C:CollisionCapsule0'";

};