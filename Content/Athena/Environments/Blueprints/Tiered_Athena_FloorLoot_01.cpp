class UTiered_Athena_FloorLoot_01_C : public UBuildingContainer
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_01.Tiered_Athena_FloorLoot_01_C:SimpleConstructionScript_136'";
    FName SearchLootTierGroup = FName("Loot_AthenaFloorLoot");
    float SearchBounceRadiusOverride = 200;
    float LootTossSpeed_Athena = 350;
    float LootTossConeHalfAngle_Athena = 180;
    bool bDestroyContainerOnSearch = true;
    bool bStartAlreadySearched_Athena = true;
    struct FCurveTableRowHandle SearchSpeed = {
        "CurveTable": "CurveTable'FortniteGame/Content/Balance/SearchSpeed.SearchSpeed'",
        "RowName": FName("SearchSpeedVeryFast")
    };
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Environments/Meshes/S_LootTiered_Athena_FloorLoot_01.S_LootTiered_Athena_FloorLoot_01'";
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_01.Default__Tiered_Athena_FloorLoot_01_C:StaticMeshComponent0'";
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
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_01.Default__Tiered_Athena_FloorLoot_01_C:StaticMeshComponent0'";
};