class UAthena_Prop_Fish_C : public UBuildingProp
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Prop_Fish.Athena_Prop_Fish_C:SimpleConstructionScript_333'";
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Environments/Meshes/Athena_SM_Prop_Ranger_Fish.Athena_SM_Prop_Ranger_Fish'";
    bool bPropagatesBounceEffects = true;
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Prop_Fish.Default__Athena_Prop_Fish_C:StaticMeshComponent0'";
    struct FCurveTableRowHandle BuildingResourceAmountOverride = {
        "CurveTable": "CurveTable'FortniteGame/Content/Balance/DataTables/ResourceRates.ResourceRates'",
        "RowName": FName("ResourceNone")
    };
    class UParticleSystem* DeathParticles = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/World/Destruction/Base_Effects/P_General_Deco_Destruction_Medium.P_General_Deco_Destruction_Medium'";
    enum ATTACH_Wall BuildingAttachmentType = ATTACH_Wall;
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitCategory": FName("BuildingDeco"),
        "AttributeInitSubCategory": FName("1")
    };
    enum NavigationObstacleOverride = ENavigationObstacleOverride::ForceEnabled;
    bool bCanExportNavigationCollisions = true;
    bool bDoNotBlockBuildings = true;
    bool bDestroyOnPlayerBuildingPlacement = true;
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Prop_Fish.Default__Athena_Prop_Fish_C:StaticMeshComponent0'";
};