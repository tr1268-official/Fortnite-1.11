class UAthena_Prop_ShippingContainer_01_Open_B_C : public UBuildingProp
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/BuildingActors/Prop/Athena_Prop_ShippingContainer_01_Open_B.Athena_Prop_ShippingContainer_01_Open_B_C:SimpleConstructionScript_587'";
    bool bAutoAssignNavProperties = false;
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Environments/Meshes/Athena_Prop_ShippingContainer_01_Open_B.Athena_Prop_ShippingContainer_01_Open_B'";
    enum EFortResourceType ResourceType = EFortResourceType::Metal;
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/BuildingActors/Prop/Athena_Prop_ShippingContainer_01_Open_B.Default__Athena_Prop_ShippingContainer_01_Open_B_C:StaticMeshComponent0'";
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
    enum NavigationObstacleOverride = ENavigationObstacleOverride::ForceDisabled;
    bool bCanExportNavigationCollisions = true;
    bool bForceAutomationPass = true;
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/BuildingActors/Prop/Athena_Prop_ShippingContainer_01_Open_B.Default__Athena_Prop_ShippingContainer_01_Open_B_C:StaticMeshComponent0'";
};