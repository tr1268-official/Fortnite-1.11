class UAthena_Tree_Hero_02_C : public UParent_Tree_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Hero_02.Athena_Tree_Hero_02_C:SimpleConstructionScript_908'";
    enum En_LeafTypes_01 LeafTypes = En_LeafTypes_01::NewEnumerator1;
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Prototype/Terrain/Athena_HeroTrees_02.Athena_HeroTrees_02'";
    bool bDoNotBlockInteract = true;
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Hero_02.Default__Athena_Tree_Hero_02_C:StaticMeshComponent0'";
    struct FCurveTableRowHandle BuildingResourceAmountOverride = {
        "RowName": FName("ResourceWoodVeryHigh")
    };
    FSoftObjectPath WindAudio = FSoftObjectPath("/Game/Sounds/Fort_Ambient_Looping/Storm_Trees/storm_foliage_BigTree_Loop_Cue.storm_foliage_BigTree_Loop_Cue");
    class UParticleSystem* DeathParticles = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/World/Destruction/Trees/P_HeroTree_02_Destruction.P_HeroTree_02_Destruction'";
    FName DeathParticleSocketName = FName("FX_Destruct");
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitSubCategory": FName("4")
    };
    class USoundCue* PlayHitSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Impact_Sounds/Demolition/Wood/Demo_OakTree_Impact_Cue.Demo_OakTree_Impact_Cue'";
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Hero_02.Default__Athena_Tree_Hero_02_C:StaticMeshComponent0'";
};