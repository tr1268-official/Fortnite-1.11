class UAthena_Tree_Pine_05_C : public UParent_Tree_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Pine_05.Athena_Tree_Pine_05_C:SimpleConstructionScript_1'";
    enum En_LeafTypes_01 LeafTypes = En_LeafTypes_01::NewEnumerator3;
    struct FVector EmitterSize = FVector(250, 1000, 90);
    struct FFortWindImpulseHandle WindHandle = {
        "UID": 335
    };
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Prototype/Terrain/Athena_Tree_Pine_6.Athena_Tree_Pine_6'";
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Pine_05.Default__Athena_Tree_Pine_05_C:StaticMeshComponent0'";
    FSoftObjectPath WindSpeedCurve = FSoftObjectPath("/Game/VisualThreatManager/StormVisuals/Foliage_Trees/Tree_Pine_01_WindSpeed.Tree_Pine_01_WindSpeed");
    FSoftObjectPath WindPannerSpeedCurve = FSoftObjectPath("/Game/VisualThreatManager/StormVisuals/Foliage_Trees/Tree_Pine_05_PannerSpeed.Tree_Pine_05_PannerSpeed");
    TArray<unknown> IntenseWindMaterials = {};
    FSoftObjectPath WindAudio = FSoftObjectPath("/Game/Sounds/Fort_Ambient_Looping/Storm_Trees/storm_foliage_BigPine_Loop_Cue.storm_foliage_BigPine_Loop_Cue");
    class UParticleSystem* DeathParticles = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/World/Destruction/Trees/P_Pine_Tree_Tall_Destruction.P_Pine_Tree_Tall_Destruction'";
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Pine_05.Default__Athena_Tree_Pine_05_C:StaticMeshComponent0'";
};