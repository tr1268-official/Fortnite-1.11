class UAthena_Tree_WeepingWillow_01_C : public UParent_Tree_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_WeepingWillow_01.Athena_Tree_WeepingWillow_01_C:SimpleConstructionScript_926'";
    struct FVector EmitterSize = FVector(350, 120, 90);
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Prototype/Terrain/Athena_Tree_Willow_01.Athena_Tree_Willow_01'";
    struct FVector2D RandomScaleRange = FVector2D(1, 1.5);
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_WeepingWillow_01.Default__Athena_Tree_WeepingWillow_01_C:StaticMeshComponent0'";
    FName DestructionLootTierGroup = FName("Destruction_TreeMedium");
    struct FCurveTableRowHandle BuildingResourceAmountOverride = {
        "RowName": FName("ResourceWoodMedium")
    };
    FSoftObjectPath WindSpeedCurve = FSoftObjectPath("/Game/VisualThreatManager/StormVisuals/Foliage_Trees/Tree_Willow_Hero_WindSpeed.Tree_Willow_Hero_WindSpeed");
    FSoftObjectPath WindPannerSpeedCurve = FSoftObjectPath("/Game/VisualThreatManager/StormVisuals/Foliage_Trees/Tree_Willow_Hero_PannerSpeed.Tree_Willow_Hero_PannerSpeed");
    TArray<unknown> IntenseWindMaterials = {};
    FSoftObjectPath WindAudio = FSoftObjectPath("/Game/Sounds/Fort_Ambient_Looping/Storm_Trees/storm_foliage_BigTree_Loop_Cue.storm_foliage_BigTree_Loop_Cue");
    class UParticleSystem* DeathParticles = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/World/Destruction/Trees/P_Tree_06_Destruction.P_Tree_06_Destruction'";
    class USoundCue* DeathSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Impact_Sounds/Demolition/Wood/Demo_Tree_Destroyed_Cue.Demo_Tree_Destroyed_Cue'";
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitSubCategory": FName("2")
    };
    class USoundCue* PlayHitSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Impact_Sounds/Demolition/Wood/Demo_Tree_Impact_Cue.Demo_Tree_Impact_Cue'";
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_WeepingWillow_01.Default__Athena_Tree_WeepingWillow_01_C:StaticMeshComponent0'";
};