class UAthena_Prop_ToiletFactory_Crate_03_C : public UBuildingProp
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/BuildingActors/Prop/Athena_Prop_ToiletFactory_Crate_03.Athena_Prop_ToiletFactory_Crate_03_C:SimpleConstructionScript_140'";
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Environments/Props/ToiletFactory/Meshes/ToiletFactory_Crate_03.ToiletFactory_Crate_03'";
    enum EFortResourceType ResourceType = EFortResourceType::Wood;
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/BuildingActors/Prop/Athena_Prop_ToiletFactory_Crate_03.Default__Athena_Prop_ToiletFactory_Crate_03_C:StaticMeshComponent0'";
    struct FCurveTableRowHandle BuildingResourceAmountOverride = {
        "CurveTable": "CurveTable'FortniteGame/Content/Balance/DataTables/ResourceRates.ResourceRates'",
        "RowName": FName("PropWoodMedium")
    };
    class UParticleSystem* DeathParticles = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/World/Destruction/Crates/P_Crate_01Destruction.P_Crate_01Destruction'";
    enum SLOT_Floor BuildingAttachmentSlot = SLOT_Floor;
    enum ATTACH_Floor BuildingAttachmentType = ATTACH_Floor;
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitCategory": FName("PropWood"),
        "AttributeInitSubCategory": FName("2")
    };
    enum NavigationObstacleOverride = ENavigationObstacleOverride::ForceEnabled;
    bool bCanExportNavigationCollisions = true;
    bool bDestroyOnPlayerBuildingPlacement = true;
    struct FVector CentroidOffset = FVector(0, 0, 60);
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/BuildingActors/Prop/Athena_Prop_ToiletFactory_Crate_03.Default__Athena_Prop_ToiletFactory_Crate_03_C:StaticMeshComponent0'";
};