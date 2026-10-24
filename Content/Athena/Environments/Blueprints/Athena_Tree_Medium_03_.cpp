class UAthena_Tree_Medium_03__C : public UParent_Tree_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Medium_03_.Athena_Tree_Medium_03__C:SimpleConstructionScript_890'";
    enum En_LeafTypes_01 LeafTypes = En_LeafTypes_01::NewEnumerator1;
    struct FVector EmitterSize = FVector(400, 300, 90);
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Prototype/Terrain/Athena_Tree_Medium_03.Athena_Tree_Medium_03'";
    struct FVector2D RandomScaleRange = FVector2D(0.9, 1);
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Medium_03_.Default__Athena_Tree_Medium_03__C:StaticMeshComponent0'";
    FName DestructionLootTierGroup = FName("Destruction_TreeMedium");
    struct FCurveTableRowHandle BuildingResourceAmountOverride = {
        "RowName": FName("ResourceWoodMedium")
    };
    FSoftObjectPath WindSpeedCurve = FSoftObjectPath("/Game/VisualThreatManager/StormVisuals/Foliage_Trees/Tree_Medium_2_WindSpeed.Tree_Medium_2_WindSpeed");
    FSoftObjectPath WindPannerSpeedCurve = FSoftObjectPath("/Game/VisualThreatManager/StormVisuals/Foliage_Trees/Tree_Medium_3_PannerSpeed.Tree_Medium_3_PannerSpeed");
    TArray<unknown> IntenseWindMaterials = {};
    FSoftObjectPath WindAudio = FSoftObjectPath("/Game/Sounds/Fort_Ambient_Looping/Storm_Trees/storm_foliage_BigTree_Loop_Cue.storm_foliage_BigTree_Loop_Cue");
    class UParticleSystem* DeathParticles = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/World/Destruction/Trees/P_Tree_06_Destruction.P_Tree_06_Destruction'";
    class USoundCue* DeathSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Impact_Sounds/Demolition/Wood/Demo_Tree_Destroyed_Cue.Demo_Tree_Destroyed_Cue'";
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitSubCategory": FName("2")
    };
    class USoundCue* PlayHitSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Impact_Sounds/Demolition/Wood/Demo_Tree_Impact_Cue.Demo_Tree_Impact_Cue'";
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Medium_03_.Default__Athena_Tree_Medium_03__C:StaticMeshComponent0'";
};