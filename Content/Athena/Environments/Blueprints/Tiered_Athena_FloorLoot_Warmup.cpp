class UTiered_Athena_FloorLoot_Warmup_C : public UBuildingContainer
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_Warmup.Tiered_Athena_FloorLoot_Warmup_C:SimpleConstructionScript_136'";
    FName SearchLootTierGroup = FName("Loot_AthenaFloorLoot_Warmup");
    float SearchBounceRadiusOverride = 200;
    float LootTossSpeed_Athena = 350;
    float LootTossConeHalfAngle_Athena = 180;
    bool bDestroyContainerOnSearch = true;
    bool bStartAlreadySearched_Athena = true;
    struct FCurveTableRowHandle SearchSpeed = {
        "CurveTable": "CurveTable'FortniteGame/Content/Balance/SearchSpeed.SearchSpeed'",
        "RowName": FName("SearchSpeedVeryFast")
    };
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Environments/Meshes/S_LootTiered_Athena_FloorLoot_Warmup.S_LootTiered_Athena_FloorLoot_Warmup'";
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_Warmup.Default__Tiered_Athena_FloorLoot_Warmup_C:StaticMeshComponent0'";
    enum ATTACH_Floor BuildingAttachmentType = ATTACH_Floor;
    FSoftObjectPath AreaClass = FSoftObjectPath("/Script/Engine.NavArea_Default");
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitCategory": FName("PropWood"),
        "AttributeInitSubCategory": FName("1")
    };
    struct FGameplayTagContainer DefaultTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Building.Type.Container.CardboardBox"))
    });
    bool bIsNavigationRelevant = false;
    bool bDestroyOnPlayerBuildingPlacement = true;
    bool bEnableAutoLODGeneration = false;
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_Warmup.Default__Tiered_Athena_FloorLoot_Warmup_C:StaticMeshComponent0'";
};