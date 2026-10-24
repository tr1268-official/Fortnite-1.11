class UAthena_Tree_Pine_01_C : public UParent_Tree_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Pine_01.Athena_Tree_Pine_01_C:SimpleConstructionScript_886'";
    enum En_LeafTypes_01 LeafTypes = En_LeafTypes_01::NewEnumerator3;
    struct FVector EmitterSize = FVector(150, 300, 90);
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Prototype/Terrain/Athena_Tree_Pine_01_.Athena_Tree_Pine_01_'";
    struct FVector2D RandomScaleRange = FVector2D(0.9, 1.25);
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Pine_01.Default__Athena_Tree_Pine_01_C:StaticMeshComponent0'";
    FName DestructionLootTierGroup = FName("Destruction_TreeMedium");
    struct FCurveTableRowHandle BuildingResourceAmountOverride = {
        "RowName": FName("ResourceWoodMedium")
    };
    FSoftObjectPath WindSpeedCurve = FSoftObjectPath("/Game/VisualThreatManager/StormVisuals/Foliage_Trees/Tree_Pine_01_WindSpeed.Tree_Pine_01_WindSpeed");
    FSoftObjectPath WindPannerSpeedCurve = FSoftObjectPath("/Game/VisualThreatManager/StormVisuals/Foliage_Trees/Tree_Pine_01_PannerSpeed.Tree_Pine_01_PannerSpeed");
    TArray<unknown> IntenseWindMaterials = {};
    FSoftObjectPath WindAudio = FSoftObjectPath("/Game/Sounds/Fort_Ambient_Looping/Storm_Trees/storm_foliage_SmallPine_Loop_Cue.storm_foliage_SmallPine_Loop_Cue");
    class UParticleSystem* DeathParticles = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/World/Destruction/Trees/P_Pine_Tree_Med_Destruction.P_Pine_Tree_Med_Destruction'";
    class USoundCue* DeathSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Impact_Sounds/Demolition/Wood/Demo_Tree_Destroyed_Cue.Demo_Tree_Destroyed_Cue'";
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitSubCategory": FName("2")
    };
    class USoundCue* PlayHitSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Impact_Sounds/Demolition/Wood/Demo_PineTree_Impact_Cue.Demo_PineTree_Impact_Cue'";
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Pine_01.Default__Athena_Tree_Pine_01_C:StaticMeshComponent0'";
};