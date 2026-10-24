class UB_Prj_Athena_DanceGrenade_C : public UFortProjectileBase
{
public:
    int32 NumReplicatedProperties = 2;
    TArray<unknown> DynamicBindingObjects = {};
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Items/Consumables/DanceGrenade/B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C:SimpleConstructionScript_309'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/DanceGrenade/B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/DanceGrenade/B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C:ExecuteUbergraph_B_Prj_Athena_DanceGrenade'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UParticleSystem* P_Explosion = "ParticleSystem'FortniteGame/Content/Missions/Primary/DeliverTheBomb/Particles/P_DtBDepotSmoke.P_DtBDepotSmoke'";
    struct FVector HitLocation = FVector(0, 0, 0);
    class USoundCue* Cue_DistantSound = "SoundCue'FortniteGame/Content/Athena/Sounds/DanceGrenade/DanceGrenade_Explosion_Athena_Cue.DanceGrenade_Explosion_Athena_Cue'";
    class USoundCue* Cue_CloseSound = "SoundCue'FortniteGame/Content/Athena/Sounds/DanceGrenade/DanceGrenade_Explosion_Athena_Cue.DanceGrenade_Explosion_Athena_Cue'";
    int32 NumberOfBouncesTillCook = 5;
    class USoundCue* Cue_GrenadeFuseSound = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Explosives/Fuse_Grenade_Loop_Cue.Fuse_Grenade_Loop_Cue'";
    float BouncePawnAgainstPawnGravityScale = 4;
    struct FHitResult StoredHit = {
        "bBlockingHit": false,
        "bStartPenetrating": false,
        "FaceIndex": 0,
        "Time": 1,
        "Distance": 0,
        "Location": FVector(5.1E-43, 0, 2.72E-43),
        "ImpactPoint": FVector(5.1E-43, 0, 2.72E-43),
        "Normal": FVector(5.1E-43, 0, 2.72E-43),
        "ImpactNormal": FVector(5.1E-43, 0, 2.72E-43),
        "TraceStart": FVector(5.1E-43, 0, 2.72E-43),
        "TraceEnd": FVector(5.1E-43, 0, 2.72E-43),
        "PenetrationDepth": 0,
        "Item": 0,
        "PhysMaterial": nullptr,
        "Actor": nullptr,
        "Component": nullptr,
        "BoneName": FName("None")
    };
    class UForceFeedbackEffect* ExplosionForceFeedbackNear = "ForceFeedbackEffect'FortniteGame/Content/Weapons/ForceFeedback/FF_Generic_Explosion_Near.FF_Generic_Explosion_Near'";
    class UForceFeedbackEffect* ExplosionForceFeedbackFar = "ForceFeedbackEffect'FortniteGame/Content/Weapons/ForceFeedback/FF_Generic_Explosion_Far.FF_Generic_Explosion_Far'";
    struct FGameplayTagContainer StunAbility = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Gameplay.Action.Player.DanceStunned"))
    });
    struct FCurveTableRowHandle VerticleFireOffset = {
        "CurveTable": "CurveTable'FortniteGame/Content/Items/Datatables/Projectiles.Projectiles'",
        "RowName": FName("Soldier_Grenade_VertDirOffset")
    };
    bool bAddOwnerVelocity = false;
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/DanceGrenade/B_Prj_Athena_DanceGrenade.Default__B_Prj_Athena_DanceGrenade_C:CollisionCapsule0'";
    class UProjectileMovementComponent* ProjectileMovementComponent = "ProjectileMovementComponent'FortniteGame/Content/Athena/Items/Consumables/DanceGrenade/B_Prj_Athena_DanceGrenade.Default__B_Prj_Athena_DanceGrenade_C:ProjectileComp0'";
    bool bStopSimulatingOnHit = false;
    class UCapsuleComponent* CollisionComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/DanceGrenade/B_Prj_Athena_DanceGrenade.Default__B_Prj_Athena_DanceGrenade_C:CollisionCapsule0'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/DanceGrenade/B_Prj_Athena_DanceGrenade.Default__B_Prj_Athena_DanceGrenade_C:CollisionCapsule0'";

};