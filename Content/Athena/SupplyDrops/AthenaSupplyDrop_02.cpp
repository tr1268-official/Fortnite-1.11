class UAthenaSupplyDrop_02_C : public UFortAthenaSupplyDrop
{
public:
    int32 NumReplicatedProperties = 4;
    TArray<unknown> DynamicBindingObjects = {};
    TArray<unknown> Timelines = {};
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/SupplyDrops/AthenaSupplyDrop_02.AthenaSupplyDrop_02_C:SimpleConstructionScript_1'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/SupplyDrops/AthenaSupplyDrop_02.AthenaSupplyDrop_02_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/SupplyDrops/AthenaSupplyDrop_02.AthenaSupplyDrop_02_C:ExecuteUbergraph_AthenaSupplyDrop_02'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class USoundCue* Impact_Sound = "SoundCue'FortniteGame/Content/Athena/Sounds/SupplyDrops/Fort_SupplyDrop_Land_Athena_Cue.Fort_SupplyDrop_Land_Athena_Cue'";
    class USoundCue* Loot_Sound = "SoundCue'FortniteGame/Content/Athena/Sounds/SupplyDrops/Fort_SupplyDrop_Open_Athena_Cue.Fort_SupplyDrop_Open_Athena_Cue'";
    struct FGameplayTag EventHit = {
        "TagName": FName("Abilities.Generic.SupplyDrop.Hit")
    };
    struct FGameplayEventData EventData = {
        "EventTag": {
            "TagName": FName("None")
        },
        "Instigator": nullptr,
        "Target": nullptr,
        "OptionalObject": nullptr,
        "OptionalObject2": nullptr,
        "ContextHandle": {},
        "InstigatorTags": FGameplayTagContainer({}),
        "TargetTags": FGameplayTagContainer({}),
        "EventMagnitude": 0,
        "TargetData": {}
    };
    struct FVector LootSpawnOffset = FVector(0, 0, 60);
    float FallHeight = 10000;
    struct FSupplyDropUnlocks Unlocks = {
        "TierOne_5_9D1EB309486DD183FED684B8EEAF54B7": false,
        "TierTwo_6_58AB58B441DB6EDC4FEA21ABD0C17475": false,
        "TierThree_7_F54FF5FC4D92FACF83CB69B88043A65F": false,
        "TierFour_8_6C40909A4282BD0806479A8DD34449EB": false,
        "TierFive_9_0B433AC44B7DBA126B7872BD5EC513DA": false
    };
    TArray<unknown> LootTableNames = {};
    struct FTimerHandle SelfDestructTimerHandle = {
        "Handle": 0
    };
    struct FVector NewLocation = FVector(0, 0, 0);
    float FallTime = 60;
    struct FTimerHandle SecondaryFallingTimerHandle = {
        "Handle": 0
    };
    struct FCurveTableRowHandle NewVar_0 = {
        "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
        "RowName": FName("Default.Aircraft.Height")
    };
    struct FCurveTableRowHandle CurveTable_FallTime = {
        "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
        "RowName": FName("Default.SupplyDrop.FallTime")
    };
    struct FCurveTableRowHandle CurveTable_FallHeight = {
        "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
        "RowName": FName("Default.SupplyDrop.MaxPlacementHeight")
    };
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitCategory": FName("PropMetal"),
        "AttributeInitSubCategory": FName("4")
    };
    enum SurfaceType1 PrimarySurfaceType = SurfaceType1;
    float LDMaxDrawDistance = 250000;
    bool bCanBeDamaged = false;

};