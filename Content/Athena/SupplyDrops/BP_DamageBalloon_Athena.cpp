class UBP_DamageBalloon_Athena_C : public UBuildingSMActor
{
public:
    int32 NumReplicatedProperties = 1;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/SupplyDrops/BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C:SimpleConstructionScript_2'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/SupplyDrops/BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/SupplyDrops/BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C:ExecuteUbergraph_BP_DamageBalloon_Athena'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UStaticMesh* StaticMesh = "StaticMesh'FortniteGame/Content/Athena/SupplyDrops/S_Balloon_SupplyDrop_Athena.S_Balloon_SupplyDrop_Athena'";
    bool bAllowResourceDrop = false;
    bool bAllowWeakSpots = false;
    bool bUseComplexForWeakSpots = false;
    bool bNeedsDamageOverlay = false;
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'FortniteGame/Content/Athena/SupplyDrops/BP_DamageBalloon_Athena.Default__BP_DamageBalloon_Athena_C:StaticMeshComponent0'";
    FText InteractionText = FText("");
    FText DisplayName = FText("");
    struct FFortAttributeInitializationKey AttributeInitKey = {
        "AttributeInitCategory": FName("AthenaSupplyDrop")
    };
    enum SurfaceType3 PrimarySurfaceType = SurfaceType3;
    enum EFortBaseWeaponDamage WeaponResponseType = EFortBaseWeaponDamage::Combat;
    bool bForceDisableRootNavigationRelevance = true;
    bool bIsNavigationRelevant = false;
    bool bIsMovable = true;
    bool bUseCentroidForBlockBuildingsCheck = false;
    float LDMaxDrawDistance = 250000;
    bool bAlwaysRelevant = true;
    bool bReplicateMovement = true;
    bool bNetUseOwnerRelevancy = true;
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'FortniteGame/Content/Athena/SupplyDrops/BP_DamageBalloon_Athena.Default__BP_DamageBalloon_Athena_C:StaticMeshComponent0'";

};