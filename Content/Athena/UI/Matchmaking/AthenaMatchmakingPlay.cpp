class UAthenaMatchmakingPlay_C : public UFortAthenaMatchmakingWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Matchmaking/AthenaMatchmakingPlay.AthenaMatchmakingPlay_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<unknown> Animations = {};
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Matchmaking/AthenaMatchmakingPlay.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Matchmaking/AthenaMatchmakingPlay.AthenaMatchmakingPlay_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Matchmaking/AthenaMatchmakingPlay.AthenaMatchmakingPlay_C:ExecuteUbergraph_AthenaMatchmakingPlay'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBlueprintGeneratedClass* MissionGen = "BlueprintGeneratedClass'FortniteGame/Content/World/MissionGens/TestMissionGens/MissionGen_Athena.MissionGen_Athena_C'";
    class UBlueprintGeneratedClass* DuoMissionGen = "BlueprintGeneratedClass'FortniteGame/Content/World/MissionGens/TestMissionGens/MissionGen_AthenaDuo.MissionGen_AthenaDuo_C'";
    class UBlueprintGeneratedClass* SquadMissionGen = "BlueprintGeneratedClass'FortniteGame/Content/World/MissionGens/TestMissionGens/MissionGen_AthenaSquad.MissionGen_AthenaSquad_C'";
    class UBlueprintGeneratedClass* FiftyFiftyMissionGen = "BlueprintGeneratedClass'FortniteGame/Content/World/MissionGens/TestMissionGens/MissionGen_AthenaEvent_50v50.MissionGen_AthenaEvent_50v50_C'";
    class UBlueprintGeneratedClass* Event1MissionGen = "BlueprintGeneratedClass'FortniteGame/Content/World/MissionGens/TestMissionGens/MissionGen_AthenaEvent4_ShootingTest.MissionGen_AthenaEvent4_ShootingTest_C'";
    class UBlueprintGeneratedClass* Event2MissionGen = "BlueprintGeneratedClass'FortniteGame/Content/World/MissionGens/TestMissionGens/MissionGen_AthenaEvent2_Explosives.MissionGen_AthenaEvent2_Explosives_C'";
    class UBlueprintGeneratedClass* Event3MissionGen = "BlueprintGeneratedClass'FortniteGame/Content/World/MissionGens/TestMissionGens/MissionGen_AthenaEvent3_SpeedyCircles.MissionGen_AthenaEvent3_SpeedyCircles_C'";
    class UBlueprintGeneratedClass* Event4MissionGen = "BlueprintGeneratedClass'FortniteGame/Content/World/MissionGens/TestMissionGens/MissionGen_AthenaEvent6_Loot.MissionGen_AthenaEvent6_Loot_C'";
    class UBlueprintGeneratedClass* Event5MissionGen = "BlueprintGeneratedClass'FortniteGame/Content/World/MissionGens/TestMissionGens/MissionGen_AthenaEvent1_SneakySilencers.MissionGen_AthenaEvent1_SneakySilencers_C'";
    class UBlueprintGeneratedClass* Event6MissionGen = "BlueprintGeneratedClass'FortniteGame/Content/World/MissionGens/TestMissionGens/MissionGen_AthenaEvent5_Skies.MissionGen_AthenaEvent5_Skies_C'";
    class UBlueprintGeneratedClass* Event7MissionGen = "BlueprintGeneratedClass'FortniteGame/Content/World/MissionGens/TestMissionGens/MissionGen_AthenaEvent7_Snipers.MissionGen_AthenaEvent7_Snipers_C'";
    class UBlueprintGeneratedClass* Event8MissionGen = "BlueprintGeneratedClass'FortniteGame/Content/World/MissionGens/TestMissionGens/MissionGen_AthenaEvent8.MissionGen_AthenaEvent8_C'";
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};