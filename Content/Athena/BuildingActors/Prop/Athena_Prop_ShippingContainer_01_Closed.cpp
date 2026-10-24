class UAthena_Prop_ShippingContainer_01_Closed_C : public UBuildingProp
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/BuildingActors/Prop/Athena_Prop_ShippingContainer_01_Closed.Athena_Prop_ShippingContainer_01_Closed_C:SimpleConstructionScript_588'";
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Environments/Meshes/Athena_Prop_ShippingContainer_01.Athena_Prop_ShippingContainer_01'";
    enum EFortResourceType ResourceType = EFortResourceType::Metal;
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/BuildingActors/Prop/Athena_Prop_ShippingContainer_01_Closed.Default__Athena_Prop_ShippingContainer_01_Closed_C:StaticMeshComponent0'";
    struct FCurveTableRowHandle BuildingResourceAmountOverride = {
        "CurveTable": "CurveTable'FortniteGame/Content/Balance/DataTables/ResourceRates.ResourceRates'",
        "RowName": FName("ResourceMetalMedium")
    };
    class UParticleSystem* DeathParticles = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/World/Destruction/Base_Effects/P_General_Deco_Destruction_Large.P_General_Deco_Destruction_Large'";
    enum SLOT_Floor BuildingAttachmentSlot = SLOT_Floor;
    enum ATTACH_Floor BuildingAttachmentType = ATTACH_Floor;
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitCategory": FName("ResourceMetal"),
        "AttributeInitSubCategory": FName("4")
    };
    enum NavigationObstacleOverride = ENavigationObstacleOverride::ForceEnabled;
    bool bCanExportNavigationCollisions = true;
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/BuildingActors/Prop/Athena_Prop_ShippingContainer_01_Closed.Default__Athena_Prop_ShippingContainer_01_Closed_C:StaticMeshComponent0'";
};