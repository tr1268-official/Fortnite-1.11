class UAthena_GameMode_C : public UFortGameModeAthena
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Athena_GameMode.Athena_GameMode_C:SimpleConstructionScript_0'";
    class UBlueprintGeneratedClass* GE_OutsideSafeZone = "BlueprintGeneratedClass'FortniteGame/Content/Athena/SafeZone/GE_OutsideSafeZoneDamage.GE_OutsideSafeZoneDamage_C'";
    class UBlueprintGeneratedClass* SafeZoneIndicatorClass = "BlueprintGeneratedClass'FortniteGame/Content/Athena/SafeZone/SafeZoneIndicator.SafeZoneIndicator_C'";
    TArray<struct FAthenaPlaylistDataTableSet> PlaylistDataTables = {
        {
            "Description": "Sneaky Silencers",
            "PlaylistId": 12,
            "LootTierData": "DataTable'FortniteGame/Content/Athena/Events/SneakySilencers/AthenaLootTierData_Client.AthenaLootTierData_Client'",
            "LootPackages": "DataTable'FortniteGame/Content/Athena/Events/SneakySilencers/AthenaLootPackages_Client.AthenaLootPackages_Client'",
            "RangedWeapons": nullptr,
            "GameData": nullptr,
            "ResourceRates": nullptr
        },
        {
            "Description": "Rockets and Grenades",
            "PlaylistId": 13,
            "LootTierData": "DataTable'FortniteGame/Content/Athena/Events/RocketsAndGrenades/AthenaLootTierData_Client.AthenaLootTierData_Client'",
            "LootPackages": "DataTable'FortniteGame/Content/Athena/Events/RocketsAndGrenades/AthenaLootPackages_Client.AthenaLootPackages_Client'",
            "RangedWeapons": nullptr,
            "GameData": nullptr,
            "ResourceRates": nullptr
        },
        {
            "Description": "Speedy Storm",
            "PlaylistId": 14,
            "LootTierData": nullptr,
            "LootPackages": nullptr,
            "RangedWeapons": nullptr,
            "GameData": "CurveTable'FortniteGame/Content/Athena/Events/FasterRings/AthenaGameData.AthenaGameData'",
            "ResourceRates": nullptr
        },
        {
            "Description": "Take To The Skies",
            "PlaylistId": 16,
            "LootTierData": "DataTable'FortniteGame/Content/Athena/Events/TakeToTheSkies/AthenaLootTierData_Client.AthenaLootTierData_Client'",
            "LootPackages": "DataTable'FortniteGame/Content/Athena/Events/TakeToTheSkies/AthenaLootPackages_Client.AthenaLootPackages_Client'",
            "RangedWeapons": nullptr,
            "GameData": nullptr,
            "ResourceRates": nullptr
        },
        {
            "Description": "Lotsa Loot",
            "PlaylistId": 17,
            "LootTierData": "DataTable'FortniteGame/Content/Athena/Events/LotsaLoot/AthenaLootTierData_Client.AthenaLootTierData_Client'",
            "LootPackages": nullptr,
            "RangedWeapons": nullptr,
            "GameData": "CurveTable'FortniteGame/Content/Athena/Events/LotsaLoot/AthenaGameData.AthenaGameData'",
            "ResourceRates": nullptr
        },
        {
            "Description": "Snipers",
            "PlaylistId": 18,
            "LootTierData": "DataTable'FortniteGame/Content/Athena/Events/SnipersOnly/AthenaLootTierData_Client.AthenaLootTierData_Client'",
            "LootPackages": "DataTable'FortniteGame/Content/Athena/Events/SnipersOnly/AthenaLootPackages_Client.AthenaLootPackages_Client'",
            "RangedWeapons": nullptr,
            "GameData": nullptr,
            "ResourceRates": nullptr
        }
    };
    TArray<struct FItemAndCount> StartingItems = {
        {
            "Count": 1,
            "Item": "FortBuildingItemDefinition'FortniteGame/Content/Items/Weapons/BuildingTools/BuildingItemData_Wall.BuildingItemData_Wall'"
        },
        {
            "Count": 1,
            "Item": "FortBuildingItemDefinition'FortniteGame/Content/Items/Weapons/BuildingTools/BuildingItemData_Floor.BuildingItemData_Floor'"
        },
        {
            "Count": 1,
            "Item": "FortBuildingItemDefinition'FortniteGame/Content/Items/Weapons/BuildingTools/BuildingItemData_Stair_W.BuildingItemData_Stair_W'"
        },
        {
            "Count": 1,
            "Item": "FortBuildingItemDefinition'FortniteGame/Content/Items/Weapons/BuildingTools/BuildingItemData_RoofS.BuildingItemData_RoofS'"
        },
        {
            "Count": 1,
            "Item": "FortEditToolItemDefinition'FortniteGame/Content/Items/Weapons/BuildingTools/EditTool.EditTool'"
        },
        {
            "Count": 0,
            "Item": "FortResourceItemDefinition'FortniteGame/Content/Items/ResourcePickups/WoodItemData.WoodItemData'"
        }
    };
    FSoftObjectPath DeathPenaltyData = FSoftObjectPath("/Game/Athena/Anthem_DeathPenalty.Anthem_DeathPenalty");
    bool bOverrideQuickBars = true;
    struct FQuickBarData QuickBarDefinitions = {
        "QuickbarSlots": {
            {
                "AcceptedItemTypes": {},
                "bStaticSlot": false,
                "DefaultItem": FSoftObjectPath("")
            },
            {
                "AcceptedItemTypes": {},
                "bStaticSlot": false,
                "DefaultItem": FSoftObjectPath("")
            },
            {
                "AcceptedItemTypes": {},
                "bStaticSlot": false,
                "DefaultItem": FSoftObjectPath("")
            },
            {
                "AcceptedItemTypes": {},
                "bStaticSlot": false,
                "DefaultItem": FSoftObjectPath("")
            },
            {
                "AcceptedItemTypes": {},
                "bStaticSlot": false,
                "DefaultItem": FSoftObjectPath("")
            },
            {
                "AcceptedItemTypes": {},
                "bStaticSlot": false,
                "DefaultItem": FSoftObjectPath("")
            },
            {
                "AcceptedItemTypes": {},
                "bStaticSlot": false,
                "DefaultItem": FSoftObjectPath("")
            },
            {
                "AcceptedItemTypes": {},
                "bStaticSlot": false,
                "DefaultItem": FSoftObjectPath("")
            },
            {
                "AcceptedItemTypes": {},
                "bStaticSlot": false,
                "DefaultItem": FSoftObjectPath("")
            }
        }
    };
    class UBlueprintGeneratedClass* GameStateClass = "BlueprintGeneratedClass'FortniteGame/Content/Athena/Athena_GameState.Athena_GameState_C'";
    class UBlueprintGeneratedClass* PlayerControllerClass = "BlueprintGeneratedClass'FortniteGame/Content/Athena/Athena_PlayerController.Athena_PlayerController_C'";

};