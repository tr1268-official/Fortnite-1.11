class UGA_Athena_DanceGrenade_WithTrajectory_C : public UGA_Athena_Grenade_WithTrajectory_C
{
public:
    class UBlueprintGeneratedClass* Prj_Grenade = "BlueprintGeneratedClass'FortniteGame/Content/Athena/Items/Consumables/DanceGrenade/B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C'";
    struct FFortGameplayEffectContainer EffectContainers = {
        "TargetSelection": {
            "List": {
                {
                    "Shape": EFortTargetSelectionShape::Sphere,
                    "CustomShapeComponentName": "",
                    "TestType": EFortTargetSelectionTestType::Overlap,
                    "PrimarySource": EFortAbilityTargetingSource::PawnForward,
                    "SecondarySource": EFortAbilityTargetingSource::Max_None,
                    "Range": 500,
                    "HalfExtents": FVector(0, 0, 0),
                    "ConeYawAngle": 0,
                    "ConePitchAngle": 0,
                    "ConeMinRadius": 1,
                    "TargetFilter": {
                        "ActorTypeFilter": EFortTargetSelectionFilter::Pawns,
                        "ActorClassFilter": nullptr,
                        "bExcludeInstigator": false,
                        "bExcludeRequester": false,
                        "bExcludeAllAttachedToInstigator": false,
                        "bExcludeAllAttachedToRequester": false,
                        "bExcludePawnFriends": false,
                        "bExcludeFriendlyAI": false,
                        "bExcludePawnEnemies": false,
                        "bExcludeNonPawnFriends": false,
                        "bExcludeNonPawnEnemies": false,
                        "bExcludeDBNOPawns": false,
                        "bExcludeWithoutNavigationCorridor": false,
                        "bExcludeNonPlayerBuiltPieces": false,
                        "bExcludePlayerBuiltPieces": false,
                        "bExcludeNonBGABuildings": false,
                        "bExcludeNonBlockingHits": false,
                        "bTraceComplexCollision": false
                    },
                    "bExcludeObstructedByWorld": true,
                    "bCreateHitResultWhenNoTargetsFound": false,
                    "bUseProjectileRotationForDamageZones": false,
                    "TargetSelectionUsage": EFortAbilityTargetSelectionUsage::BothTargetingAndCanHit,
                    "MaxTargets": 8
                }
            }
        },
        "TargetGameplayEffectClasses": {}
    };
    class UBlueprintGeneratedClass* ProjectileClass = "BlueprintGeneratedClass'FortniteGame/Content/Athena/Items/Consumables/DanceGrenade/B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C'";
};