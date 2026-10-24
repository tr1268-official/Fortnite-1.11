class UAthenaMatchStatsPartial_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/EndGame/AthenaMatchStatsPartial.AthenaMatchStatsPartial_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/EndGame/AthenaMatchStatsPartial.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/EndGame/AthenaMatchStatsPartial.AthenaMatchStatsPartial_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/EndGame/AthenaMatchStatsPartial.AthenaMatchStatsPartial_C:ExecuteUbergraph_AthenaMatchStatsPartial'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FAthenaMatchStats MatchStats = {
        "SecondsAlive": 0,
        "Kills": 0,
        "Downs": 0,
        "Assists": 0,
        "Revives": 0,
        "DamageDealtToHostiles": 0,
        "DamageDealtToFriends": 0,
        "DamageDealtToStructures": 0,
        "DamageTaken": 0,
        "RangedShots": 0,
        "RangedHit": 0,
        "Accuracy": 0,
        "TravelDistanceGround": 0,
        "GatheredWood": 0,
        "GatheredStone": 0,
        "GatheredMetal": 0,
        "MaterialsGathered": 0,
        "UsedWood": 0,
        "UsedStone": 0,
        "UsedMetal": 0,
        "MaterialsUsed": 0,
        "NormalDamageToHostiles": 0,
        "NormalDamageToFriends": 0,
        "CriticalDamageToHostiles": 0,
        "CriticalDamageToFriends": 0,
        "NormalHitsToHostiles": 0,
        "NormalHitsToFriends": 0,
        "CriticalHitsToHostiles": 0,
        "CriticalHitsToFriends": 0
    };
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};