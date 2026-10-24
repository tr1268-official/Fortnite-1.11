class UTrap_ContextTrap_Athena_C : public UBuildingTrap
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Items/Traps/Trap_ContextTrap_Athena.Trap_ContextTrap_Athena_C:SimpleConstructionScript_44'";
    class UStaticMesh* TrapRangeMesh = "StaticMesh'FortniteGame/Content/Weapons/FORT_TRAPS/Spike_Trap/S_Floor_Spike_Trap_Distance_Guide.S_Floor_Spike_Trap_Distance_Guide'";
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Weapons/FORT_TRAPS/Spike_Trap/Spike_Trap_Floor_Base.Spike_Trap_Floor_Base'";
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Items/Traps/Trap_ContextTrap_Athena.Default__Trap_ContextTrap_Athena_C:StaticMeshComponent0'";
    enum ATTACH_Floor BuildingAttachmentType = ATTACH_Floor;
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitCategory": FName("BuildingDeco"),
        "AttributeInitSubCategory": FName("1")
    };
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/Items/Traps/Trap_ContextTrap_Athena.Default__Trap_ContextTrap_Athena_C:StaticMeshComponent0'";
};