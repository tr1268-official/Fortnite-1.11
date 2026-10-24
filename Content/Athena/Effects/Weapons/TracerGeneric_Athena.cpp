class UTracerGeneric_Athena_C : public UFortTracerBase
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Effects/Weapons/TracerGeneric_Athena.TracerGeneric_Athena_C:SimpleConstructionScript_18'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Effects/Weapons/TracerGeneric_Athena.TracerGeneric_Athena_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Effects/Weapons/TracerGeneric_Athena.TracerGeneric_Athena_C:ExecuteUbergraph_TracerGeneric_Athena'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector CachedDirectionVector = FVector(0, 0, 0);
    struct FVector Start = FVector(0, 0, 0);
    struct FVector End = FVector(0, 0, 0);
    float PassByRadiusMin = 100;
    float PassByRadiusMax = 400;
    class USoundCue* PassByFarSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Weapons/BulletWhips/bullet_whip_Cue.bullet_whip_Cue'";
    class USoundCue* PassByCloseSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Weapons/BulletWhips/bullet_whip_heavy_Cue.bullet_whip_heavy_Cue'";
    class UMovementComp_Tracer* TracerMovementComponent = "MovementComp_Tracer'FortniteGame/Content/Athena/Effects/Weapons/TracerGeneric_Athena.Default__TracerGeneric_Athena_C:TracerComp0'";
    class UStaticMeshComponent* TracerMesh = "StaticMeshComponent'FortniteGame/Content/Athena/Effects/Weapons/TracerGeneric_Athena.Default__TracerGeneric_Athena_C:TracerMesh0'";
    struct FCurveTableRowHandle Speed = {
        "CurveTable": "CurveTable'FortniteGame/Content/Items/Datatables/Projectiles.Projectiles'",
        "RowName": FName("TracerGeneric_Speed")
    };
    float SpeedScaleMinMultiplier = 2;
    float SpeedScaleMaxMultiplier = 2;
    struct FVector MeshScaleMult = FVector(8, 1, 1);
    float MeshScaleTime = 0.05;
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Effects/Weapons/TracerGeneric_Athena.Default__TracerGeneric_Athena_C:TracerMesh0'";

};