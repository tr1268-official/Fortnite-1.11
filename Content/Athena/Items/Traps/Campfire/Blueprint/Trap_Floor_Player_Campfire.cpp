class UTrap_Floor_Player_Campfire_C : public UBuildingTrapFloor
{
public:
    int32 NumReplicatedProperties = 1;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Items/Traps/Campfire/Blueprint/Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C:SimpleConstructionScript_47'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Traps/Campfire/Blueprint/Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Traps/Campfire/Blueprint/Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C:ExecuteUbergraph_Trap_Floor_Player_Campfire'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 MaxTicks = 60;
    float AOE_Radius = 384;
    TArray<unknown> OverlapObjectTypes = {};
    struct FVector AOE_BoxExtents = FVector(256, 256, 192);
    struct FVector AOE_FireDamageBoxExtents = FVector(40, 40, 64);
    struct FFortTargetFilter TriggerFilter = {
        "bExcludeInstigator": false,
        "bExcludePawnFriends": false,
        "bExcludeFriendlyAI": true,
        "bExcludeDBNOPawns": true
    };
    class UFortAbilitySet* AbilitySet = "FortAbilitySet'FortniteGame/Content/Abilities/Traps/FloorJumpPad/GAS_Trap_FloorJumpPad.GAS_Trap_FloorJumpPad'";
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Items/Traps/Campfire/Mesh/FORT_Athena_Campfire_Item.FORT_Athena_Campfire_Item'";
    bool bCameraOnlyCollision = false;
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Items/Traps/Campfire/Blueprint/Trap_Floor_Player_Campfire.Default__Trap_Floor_Player_Campfire_C:StaticMeshComponent0'";
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitCategory": FName("BuildingDeco"),
        "AttributeInitSubCategory": FName("1")
    };
    struct FVector SnapOffset = FVector(0, 256, 8);
    float NetUpdateFrequency = 10;
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Items/Traps/Campfire/Blueprint/Trap_Floor_Player_Campfire.Default__Trap_Floor_Player_Campfire_C:StaticMeshComponent0'";

};