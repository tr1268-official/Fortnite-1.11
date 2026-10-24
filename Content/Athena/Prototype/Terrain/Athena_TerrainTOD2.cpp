class UAthena_TerrainTOD2_C : public UTODM_A_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Athena_TerrainTOD2_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Athena_TerrainTOD2_C:InheritableComponentHandler'";
    float HeightFogZOffset = 1000;
    TArray<struct FCameraAltitudeAdjustments> AltitudeAdjustments = {
        {
            "Altitude": 16000,
            "FogHeightFalloff": 0,
            "HeightFogZOffset": 0,
            "FogDensity": -0.01
        },
        {
            "Altitude": 0,
            "FogHeightFalloff": 0,
            "HeightFogZOffset": 0,
            "FogDensity": 0.04
        }
    };
    class UDirectionalLightComponent* DirectionalLightComponent = "DirectionalLightComponent'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Default__Athena_TerrainTOD2_C:DayNightDirectionalLightComponent'";
    class UExponentialHeightFogComponent* ActiveHeightFogComponent = "ExponentialHeightFogComponent'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Default__Athena_TerrainTOD2_C:ActiveHeightFogComponent'";
    struct FDayPhaseInfo LightAndFogPhaseSettings = {
        "TimePhaseBegins": 3,
        "PhaseLengthInHours": 4,
        "TransitionInTimeInMinutes": 85.54272,
        "TransitionOutTimeInMinutes": 120,
        "ExpHeightFogValues": {
            "FogDensity": 0.02,
            "FogHeightFalloff": 0.25
        }
    };
    class UPostProcessComponent* MorningPostProcessComponent = "PostProcessComponent'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Default__Athena_TerrainTOD2_C:MorningPostProcessComponent'";
    class UPostProcessComponent* DayPostProcessComponent = "PostProcessComponent'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Default__Athena_TerrainTOD2_C:DayPostProcessComponent'";
    class UPostProcessComponent* EveningPostProcessComponent = "PostProcessComponent'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Default__Athena_TerrainTOD2_C:EveningPostProcessComponent'";
    class UPostProcessComponent* NightPostProcessComponent = "PostProcessComponent'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Default__Athena_TerrainTOD2_C:NightPostProcessComponent'";
    class UPostProcessComponent* DayPhasePostProcessComponent = "PostProcessComponent'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Default__Athena_TerrainTOD2_C:MorningPostProcessComponent'";
    class USkyLightComponent* SkyLightComp = "SkyLightComponent'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Default__Athena_TerrainTOD2_C:SkyLightComponent'";
    class UParticleSystemComponent* RainParticleSystemComp = "ParticleSystemComponent'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Default__Athena_TerrainTOD2_C:RainParticleSystemComponent'";
    class UStaticMeshComponent* SunOrMoonMeshComp = "StaticMeshComponent'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Default__Athena_TerrainTOD2_C:SunMeshComponent'";
    class UStaticMeshComponent* SkyDomeMeshComp = "StaticMeshComponent'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Default__Athena_TerrainTOD2_C:SkyDomeMeshComp'";
    class UStaticMeshComponent* StarMapMeshComp = "StaticMeshComponent'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Default__Athena_TerrainTOD2_C:StarMapMeshComponent'";
    class USceneComponent* RootComponent = "SceneComponent'FortniteGame/Content/Athena/Prototype/Terrain/Athena_TerrainTOD2.Default__Athena_TerrainTOD2_C:MySceneComponent'";
};