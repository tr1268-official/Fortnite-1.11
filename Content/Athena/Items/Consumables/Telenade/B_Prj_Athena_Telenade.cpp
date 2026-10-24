class UB_Prj_Athena_Telenade_C : public UFortProjectileBase
{
public:
    int32 NumReplicatedProperties = 2;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Items/Consumables/Telenade/B_Prj_Athena_Telenade.B_Prj_Athena_Telenade_C:SimpleConstructionScript_309'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/Telenade/B_Prj_Athena_Telenade.B_Prj_Athena_Telenade_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/Telenade/B_Prj_Athena_Telenade.B_Prj_Athena_Telenade_C:ExecuteUbergraph_B_Prj_Athena_Telenade'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UParticleSystem* P_Teleport_Destination = "ParticleSystem'FortniteGame/Content/Athena/Items/Consumables/Telenade/P_Telenade_teleport_temp.P_Telenade_teleport_temp'";
    struct FVector HitLocation = FVector(0, 0, 0);
    class USoundCue* Cue_DistantSound = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Explosives/Grenade_Explosion_Athena_Cue.Grenade_Explosion_Athena_Cue'";
    class USoundCue* Cue_CloseSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Gadgets/Teleporter/teleport_Cue.teleport_Cue'";
    class USoundCue* Cue_GrenadeFuseSound = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Explosives/Fuse_Grenade_Loop_Cue.Fuse_Grenade_Loop_Cue'";
    float BouncePawnAgainstPawnGravityScale = 4;
    class UForceFeedbackEffect* ExplosionForceFeedbackNear = "ForceFeedbackEffect'FortniteGame/Content/Weapons/ForceFeedback/FF_Generic_Explosion_Near.FF_Generic_Explosion_Near'";
    class UForceFeedbackEffect* ExplosionForceFeedbackFar = "ForceFeedbackEffect'FortniteGame/Content/Weapons/ForceFeedback/FF_Generic_Explosion_Far.FF_Generic_Explosion_Far'";
    struct FVector TeleportDestination = FVector(0, 0, 0);
    class UParticleSystem* P_Teleport_Origin = "ParticleSystem'FortniteGame/Content/Athena/Items/Consumables/Telenade/P_Telenade_teleport_temp.P_Telenade_teleport_temp'";
    struct FVector OwnerOriginLocation = FVector(0, 0, 0);
    struct FCurveTableRowHandle VerticleFireOffset = {
        "CurveTable": "CurveTable'FortniteGame/Content/Items/Datatables/Projectiles.Projectiles'",
        "RowName": FName("Soldier_Grenade_VertDirOffset")
    };
    bool bAddOwnerVelocity = false;
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/Telenade/B_Prj_Athena_Telenade.Default__B_Prj_Athena_Telenade_C:CollisionCapsule0'";
    class UProjectileMovementComponent* ProjectileMovementComponent = "ProjectileMovementComponent'FortniteGame/Content/Athena/Items/Consumables/Telenade/B_Prj_Athena_Telenade.Default__B_Prj_Athena_Telenade_C:ProjectileComp0'";
    bool bStopSimulatingOnHit = false;
    class UCapsuleComponent* CollisionComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/Telenade/B_Prj_Athena_Telenade.Default__B_Prj_Athena_Telenade_C:CollisionCapsule0'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/Telenade/B_Prj_Athena_Telenade.Default__B_Prj_Athena_Telenade_C:CollisionCapsule0'";

};