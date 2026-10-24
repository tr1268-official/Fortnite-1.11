class UAthena_Prop_Rocks_StoneLarge03_C : public UBuildingProp
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Prop_Rocks_StoneLarge03.Athena_Prop_Rocks_StoneLarge03_C:SimpleConstructionScript_583'";
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Prototype/Terrain/Athena_StoneLarge_03.Athena_StoneLarge_03'";
    enum EFortResourceType ResourceType = EFortResourceType::Stone;
    bool bRandomYawOnPlacement = true;
    bool bRandomScaleOnPlacement = true;
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Prop_Rocks_StoneLarge03.Default__Athena_Prop_Rocks_StoneLarge03_C:StaticMeshComponent0'";
    FName DestructionLootTierGroup = FName("Destruction_StoneMedium");
    struct FCurveTableRowHandle BuildingResourceAmountOverride = {
        "CurveTable": "CurveTable'FortniteGame/Content/Balance/DataTables/ResourceRates.ResourceRates'",
        "RowName": FName("ResourceStoneHigh")
    };
    class UParticleSystem* DeathParticles = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/World/Destruction/Rocks/P_StoneLarge_Destruction_01.P_StoneLarge_Destruction_01'";
    enum ATTACH_Floor BuildingAttachmentType = ATTACH_Floor;
    int32 CurrentBuildingLevel = 2;
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitCategory": FName("ResourceStone"),
        "AttributeInitSubCategory": FName("3")
    };
    enum NavigationObstacleOverride = ENavigationObstacleOverride::ForceEnabled;
    bool bCanExportNavigationCollisions = true;
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Prop_Rocks_StoneLarge03.Default__Athena_Prop_Rocks_StoneLarge03_C:StaticMeshComponent0'";
};