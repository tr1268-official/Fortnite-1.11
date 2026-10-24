class UGAB_Melee_ImpactCombo_Athena_C : public UGAB_Melee_GenericCombo_C
{
public:
    struct FFortGameplayEffectContainer EffectContainers = {
        "TargetSelection": {
            "List": {
                {
                    "Shape": EFortTargetSelectionShape::Cone,
                    "CustomShapeComponentName": "",
                    "TestType": EFortTargetSelectionTestType::Overlap,
                    "PrimarySource": EFortAbilityTargetingSource::PawnForward,
                    "SecondarySource": EFortAbilityTargetingSource::Camera,
                    "Range": 128,
                    "HalfExtents": FVector(0, 0, 0),
                    "ConeYawAngle": 20,
                    "ConePitchAngle": 20,
                    "ConeMinRadius": 20,
                    "TargetFilter": {
                        "ActorTypeFilter": EFortTargetSelectionFilter::Pawns,
                        "ActorClassFilter": nullptr,
                        "bExcludeInstigator": true,
                        "bExcludeRequester": true,
                        "bExcludeAllAttachedToInstigator": false,
                        "bExcludeAllAttachedToRequester": false,
                        "bExcludePawnFriends": true,
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
                    "MaxTargets": 1
                },
                {
                    "Shape": EFortTargetSelectionShape::Line,
                    "CustomShapeComponentName": "",
                    "TestType": EFortTargetSelectionTestType::Swept,
                    "PrimarySource": EFortAbilityTargetingSource::Camera,
                    "SecondarySource": EFortAbilityTargetingSource::Max_None,
                    "Range": 400,
                    "HalfExtents": FVector(0, 0, 0),
                    "ConeYawAngle": 0,
                    "ConePitchAngle": 0,
                    "ConeMinRadius": 1,
                    "TargetFilter": {
                        "ActorTypeFilter": EFortTargetSelectionFilter::WeakSpots,
                        "ActorClassFilter": nullptr,
                        "bExcludeInstigator": true,
                        "bExcludeRequester": true,
                        "bExcludeAllAttachedToInstigator": false,
                        "bExcludeAllAttachedToRequester": false,
                        "bExcludePawnFriends": true,
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
                    "bExcludeObstructedByWorld": false,
                    "bCreateHitResultWhenNoTargetsFound": false,
                    "bUseProjectileRotationForDamageZones": false,
                    "TargetSelectionUsage": EFortAbilityTargetSelectionUsage::BothTargetingAndCanHit,
                    "MaxTargets": 1
                },
                {
                    "Shape": EFortTargetSelectionShape::Sphere,
                    "CustomShapeComponentName": "",
                    "TestType": EFortTargetSelectionTestType::Swept,
                    "PrimarySource": EFortAbilityTargetingSource::Camera,
                    "SecondarySource": EFortAbilityTargetingSource::PawnForward,
                    "Range": 300,
                    "HalfExtents": FVector(20, 20, 20),
                    "ConeYawAngle": 0,
                    "ConePitchAngle": 0,
                    "ConeMinRadius": 50,
                    "TargetFilter": {
                        "ActorTypeFilter": EFortTargetSelectionFilter::Damageable,
                        "ActorClassFilter": nullptr,
                        "bExcludeInstigator": true,
                        "bExcludeRequester": true,
                        "bExcludeAllAttachedToInstigator": false,
                        "bExcludeAllAttachedToRequester": false,
                        "bExcludePawnFriends": true,
                        "bExcludeFriendlyAI": false,
                        "bExcludePawnEnemies": true,
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
                    "bExcludeObstructedByWorld": false,
                    "bCreateHitResultWhenNoTargetsFound": false,
                    "bUseProjectileRotationForDamageZones": false,
                    "TargetSelectionUsage": EFortAbilityTargetSelectionUsage::BothTargetingAndCanHit,
                    "MaxTargets": 1
                },
                {
                    "Shape": EFortTargetSelectionShape::Line,
                    "CustomShapeComponentName": "",
                    "TestType": EFortTargetSelectionTestType::Swept,
                    "PrimarySource": EFortAbilityTargetingSource::Camera,
                    "SecondarySource": EFortAbilityTargetingSource::Max_None,
                    "Range": 90,
                    "HalfExtents": FVector(0, 0, 0),
                    "ConeYawAngle": 0,
                    "ConePitchAngle": 0,
                    "ConeMinRadius": 50,
                    "TargetFilter": {
                        "ActorTypeFilter": EFortTargetSelectionFilter::World,
                        "ActorClassFilter": nullptr,
                        "bExcludeInstigator": true,
                        "bExcludeRequester": true,
                        "bExcludeAllAttachedToInstigator": false,
                        "bExcludeAllAttachedToRequester": false,
                        "bExcludePawnFriends": true,
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
                    "bExcludeObstructedByWorld": false,
                    "bCreateHitResultWhenNoTargetsFound": false,
                    "bUseProjectileRotationForDamageZones": false,
                    "TargetSelectionUsage": EFortAbilityTargetSelectionUsage::OnlyTargeting,
                    "MaxTargets": 1
                }
            },
            "bKeepCheckingListOnIndestructibleHit": true
        }
    };
    struct FGameplayTag WeaponTestApplicationTag = {
        "TagName": FName("Gameplay.Melee.Hit1")
    };
    struct FFortGameplayAbilityMontageInfo MontageInfo = {
        "MontageToPlay": "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Montages/Melee/PlayerMeleeCombo.PlayerMeleeCombo'"
    };
    class UBlueprintGeneratedClass* CostGameplayEffectClass = "BlueprintGeneratedClass'FortniteGame/Content/Athena/Items/Weapons/Abilities/GE_Athena_MeleeMovementSpeed.GE_Athena_MeleeMovementSpeed_C'";
};