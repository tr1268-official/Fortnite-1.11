class UAthena_Tree_Large_1_C : public UParent_Tree_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Large_1.Athena_Tree_Large_1_C:SimpleConstructionScript_916'";
    enum En_LeafTypes_01 LeafTypes = En_LeafTypes_01::NewEnumerator2;
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Prototype/Terrain/Athena_Tree_Large_01.Athena_Tree_Large_01'";
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Large_1.Default__Athena_Tree_Large_1_C:StaticMeshComponent0'";
    FSoftObjectPath WindSpeedCurve = FSoftObjectPath("/Game/VisualThreatManager/StormVisuals/Foliage_Trees/Tree_Large_4_WindSpeed.Tree_Large_4_WindSpeed");
    FSoftObjectPath WindPannerSpeedCurve = FSoftObjectPath("/Game/VisualThreatManager/StormVisuals/Foliage_Trees/Tree_Large_1_PannerSpeed.Tree_Large_1_PannerSpeed");
    TArray<unknown> IntenseWindMaterials = {};
    FSoftObjectPath WindAudio = FSoftObjectPath("/Game/Sounds/Fort_Ambient_Looping/Storm_Trees/storm_foliage_BigTree_Loop_Cue.storm_foliage_BigTree_Loop_Cue");
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitSubCategory": FName("4")
    };
    class USoundCue* PlayHitSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Impact_Sounds/Demolition/Wood/Demo_OakTree_Impact_Cue.Demo_OakTree_Impact_Cue'";
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Large_1.Default__Athena_Tree_Large_1_C:StaticMeshComponent0'";
};