class UAthena_BP_TRV_SWA_Boat_01_C : public UBuildingProp
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Environments/Blueprints/Athena_BP_TRV_SWA_Boat_01.Athena_BP_TRV_SWA_Boat_01_C:SimpleConstructionScript_32'";
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Environments/Props/Transylvania/Props/Meshes/SM_TRV_SWA_Boat_01.SM_TRV_SWA_Boat_01'";
    enum EFortResourceType ResourceType = EFortResourceType::Wood;
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_BP_TRV_SWA_Boat_01.Default__Athena_BP_TRV_SWA_Boat_01_C:StaticMeshComponent0'";
    struct FCurveTableRowHandle BuildingResourceAmountOverride = {
        "CurveTable": "CurveTable'FortniteGame/Content/Balance/DataTables/ResourceRates.ResourceRates'",
        "RowName": FName("PropWoodHigh")
    };
    class UParticleSystem* DeathParticles = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/World/Destruction/Base_Effects/P_General_Deco_Destruction_Medium.P_General_Deco_Destruction_Medium'";
    enum SLOT_Floor BuildingAttachmentSlot = SLOT_Floor;
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitCategory": FName("PropWood"),
        "AttributeInitSubCategory": FName("4")
    };
    enum NavigationObstacleOverride = ENavigationObstacleOverride::ForceEnabled;
    bool bCanExportNavigationCollisions = true;
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_BP_TRV_SWA_Boat_01.Default__Athena_BP_TRV_SWA_Boat_01_C:StaticMeshComponent0'";

};