class UTrap_Floor_Player_Launch_Pad_C : public UFortLauncherAthena
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Items/Traps/Launchpad/BluePrint/Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C:SimpleConstructionScript_47'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Traps/Launchpad/BluePrint/Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Traps/Launchpad/BluePrint/Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C:ExecuteUbergraph_Trap_Floor_Player_Launch_Pad'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class USoundCue* Trap_Placed_Sound = "SoundCue'FortniteGame/Content/Athena/Sounds/LaunchPad/LaunchPad_Place_Cue.LaunchPad_Place_Cue'";
    class USoundCue* Trap_Explode_Sound = "SoundCue'FortniteGame/Content/Sounds/Fort_Traps/JumpPad/JumpPad_Destroyed_Cue.JumpPad_Destroyed_Cue'";
    class USoundCue* OnLaunchSound3P = "SoundCue'FortniteGame/Content/Athena/Sounds/LaunchPad/LaunchPad_Launch_3P_Cue.LaunchPad_Launch_3P_Cue'";
    class USoundCue* OnLaunchSound1P = "SoundCue'FortniteGame/Content/Athena/Sounds/LaunchPad/LaunchPad_Launch_1P_Cue.LaunchPad_Launch_1P_Cue'";
    struct FFortTargetFilter TriggerFilter = {
        "bExcludeInstigator": false,
        "bExcludePawnFriends": false,
        "bExcludeFriendlyAI": true,
        "bExcludeDBNOPawns": true
    };
    struct FVector TrapPlacementOffset = FVector(-128, 410, 0);
    class UFortAbilitySet* AbilitySet = "FortAbilitySet'FortniteGame/Content/Abilities/Traps/FloorJumpPad/GAS_Trap_FloorJumpPad.GAS_Trap_FloorJumpPad'";
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/Items/Traps/Launchpad/Mesh/S_Athena_Launchpad.S_Athena_Launchpad'";
    bool bCameraOnlyCollision = false;
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Items/Traps/Launchpad/BluePrint/Trap_Floor_Player_Launch_Pad.Default__Trap_Floor_Player_Launch_Pad_C:StaticMeshComponent0'";
    class UMaterialInstanceConstant* AnimatingMaterial = "MaterialInstanceConstant'FortniteGame/Content/Athena/Items/Traps/Launchpad/Materials/M_VTech_Trampoline.M_VTech_Trampoline'";
    class UMaterialInstanceConstant* DamagedButNotAnimatingMaterial = "MaterialInstanceConstant'FortniteGame/Content/Athena/Items/Traps/Launchpad/Materials/M_VTech_Trampoline.M_VTech_Trampoline'";
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitCategory": FName("BuildingDeco"),
        "AttributeInitSubCategory": FName("1")
    };
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Items/Traps/Launchpad/BluePrint/Trap_Floor_Player_Launch_Pad.Default__Trap_Floor_Player_Launch_Pad_C:StaticMeshComponent0'";

};