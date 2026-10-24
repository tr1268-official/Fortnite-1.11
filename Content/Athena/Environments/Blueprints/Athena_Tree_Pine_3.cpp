class UAthena_Tree_Pine_3_C : public UParent_Tree_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Pine_3.Athena_Tree_Pine_3_C:SimpleConstructionScript_887'";
    enum En_LeafTypes_01 LeafTypes = En_LeafTypes_01::NewEnumerator3;
    struct FVector EmitterSize = FVector(225, 800, 90);
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Prototype/Terrain/Athena_Tree_Pine_02.Athena_Tree_Pine_02'";
    struct FVector2D RandomScaleRange = FVector2D(0.85, 1.15);
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Pine_3.Default__Athena_Tree_Pine_3_C:StaticMeshComponent0'";
    FName DestructionLootTierGroup = FName("Destruction_TreeMedium");
    struct FCurveTableRowHandle BuildingResourceAmountOverride = {
        "RowName": FName("ResourceWoodMedium")
    };
    FSoftObjectPath WindSpeedCurve = FSoftObjectPath("/Game/VisualThreatManager/StormVisuals/Foliage_Trees/Tree_Pine_02_WindSpeed.Tree_Pine_02_WindSpeed");
    FSoftObjectPath WindPannerSpeedCurve = FSoftObjectPath("/Game/VisualThreatManager/StormVisuals/Foliage_Trees/Tree_Pine_02_PannerSpeed.Tree_Pine_02_PannerSpeed");
    TArray<unknown> IntenseWindMaterials = {};
    FSoftObjectPath WindAudio = FSoftObjectPath("/Game/Sounds/Fort_Ambient_Looping/Storm_Trees/storm_foliage_BigPine_Loop_Cue.storm_foliage_BigPine_Loop_Cue");
    class UParticleSystem* DeathParticles = "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/World/Destruction/Trees/P_Pine_Tree_Tall_Destruction.P_Pine_Tree_Tall_Destruction'";
    class USoundCue* DeathSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Impact_Sounds/Demolition/Wood/Demo_Tree_Destroyed_Cue.Demo_Tree_Destroyed_Cue'";
    TArray<struct FRandomDayphaseFX> RandomDayphaseFXList = {
        {
            "ParticleSystem": "ParticleSystem'FortniteGame/Content/Effects/Fort_Effects/World/Enviroment/P_ButterFly_Trees_Orange.P_ButterFly_Trees_Orange'",
            "AltParticleSystems": {},
            "RequiredDayphases": {},
            "ChanceToSpawnFX": 0.35,
            "bRandomSelectionAlreadyHappened": false,
            "SpawnedComponent": nullptr
        }
    };
    int32 CurrentBuildingLevel = 1;
    class USoundCue* PlayHitSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Impact_Sounds/Demolition/Wood/Demo_Tree_Impact_Cue.Demo_Tree_Impact_Cue'";
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Environments/Blueprints/Athena_Tree_Pine_3.Default__Athena_Tree_Pine_3_C:StaticMeshComponent0'";
};