class UAthena_Prop_Toilet_Factory_Toilet_Future_C : public UBuildingProp
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/BuildingActors/Prop/Athena_Prop_Toilet_Factory_Toilet_Future.Athena_Prop_Toilet_Factory_Toilet_Future_C:SimpleConstructionScript_42'";
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Environments/Props/ToiletFactory/Meshes/ToiletFactory_Toilet_Future.ToiletFactory_Toilet_Future'";
    enum EFortResourceType ResourceType = EFortResourceType::Stone;
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/BuildingActors/Prop/Athena_Prop_Toilet_Factory_Toilet_Future.Default__Athena_Prop_Toilet_Factory_Toilet_Future_C:StaticMeshComponent0'";
    FName DestructionLootTierGroup = FName("Destruction_MechanicalLow");
    struct FCurveTableRowHandle BuildingResourceAmountOverride = {
        "CurveTable": "CurveTable'FortniteGame/Content/Balance/DataTables/ResourceRates.ResourceRates'",
        "RowName": FName("PropStoneMedium")
    };
    class UParticleSystem* DeathParticles = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/World/Destruction/Base_Effects/P_General_Deco_Destruction_Small.P_General_Deco_Destruction_Small'";
    enum ATTACH_Floor BuildingAttachmentType = ATTACH_Floor;
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitCategory": FName("PropStone"),
        "AttributeInitSubCategory": FName("2")
    };
    struct FGameplayTagContainer DefaultTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Building.Type.Container.Furniture.Toilet"))
    });
    enum NavigationObstacleOverride = ENavigationObstacleOverride::ForceEnabled;
    bool bCanExportNavigationCollisions = true;
    bool bDestroyOnPlayerBuildingPlacement = true;
    struct FVector CentroidOffset = FVector(0, 0, 50);
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/BuildingActors/Prop/Athena_Prop_Toilet_Factory_Toilet_Future.Default__Athena_Prop_Toilet_Factory_Toilet_Future_C:StaticMeshComponent0'";
};