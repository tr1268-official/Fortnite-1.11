class UTracerGeneric_Athena_Scope_C : public UFortTracerBase
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Effects/Weapons/TracerGeneric_Athena_Scope.TracerGeneric_Athena_Scope_C:SimpleConstructionScript_18'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Effects/Weapons/TracerGeneric_Athena_Scope.TracerGeneric_Athena_Scope_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Effects/Weapons/TracerGeneric_Athena_Scope.TracerGeneric_Athena_Scope_C:ExecuteUbergraph_TracerGeneric_Athena_Scope'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UMovementComp_Tracer* TracerMovementComponent = "MovementComp_Tracer'FortniteGame/Content/Athena/Effects/Weapons/TracerGeneric_Athena_Scope.Default__TracerGeneric_Athena_Scope_C:TracerComp0'";
    class UStaticMeshComponent* TracerMesh = "StaticMeshComponent'FortniteGame/Content/Athena/Effects/Weapons/TracerGeneric_Athena_Scope.Default__TracerGeneric_Athena_Scope_C:TracerMesh0'";
    struct FCurveTableRowHandle Speed = {
        "CurveTable": "CurveTable'FortniteGame/Content/Items/Datatables/Projectiles.Projectiles'",
        "RowName": FName("TracerGeneric_Speed")
    };
    float SpeedScaleMinMultiplier = 3;
    float SpeedScaleMaxMultiplier = 3;
    struct FVector MeshScaleMult = FVector(8, 1, 1);
    float MeshScaleTime = 0.05;
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Effects/Weapons/TracerGeneric_Athena_Scope.Default__TracerGeneric_Athena_Scope_C:TracerMesh0'";

};