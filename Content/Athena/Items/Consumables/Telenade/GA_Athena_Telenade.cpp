class UGA_Athena_Telenade_C : public UFortGameplayAbility
{
public:
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/Telenade/GA_Athena_Telenade.GA_Athena_Telenade_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/Telenade/GA_Athena_Telenade.GA_Athena_Telenade_C:ExecuteUbergraph_GA_Athena_Telenade'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBlueprintGeneratedClass* Prj_Athena_Telenade = "BlueprintGeneratedClass'FortniteGame/Content/Athena/Items/Consumables/Telenade/B_Prj_Athena_Telenade.B_Prj_Athena_Telenade_C'";
    struct FVector TransformOffsetA1 = FVector(0, 2, 0);
    struct FVector TransformOffsetB1 = FVector(0, -2, 0);
    float NegHorizontalSpread1 = -3.3;
    float PosHorizontalSpread1 = 3.3;
    struct FVector StartLocation = FVector(0, 0, 0);
    float InitialSpeed = 4000;
    float Athena_Grenade_Gravity = 0.7;
    struct FRotator StartRotation = FRotator(0, 0, 0);
    struct FGameplayTag EventComplete = {
        "TagName": FName("Abilities.Generic.M80.DeActivate")
    };
    struct FGameplayTag EventActivation = {
        "TagName": FName("Abilities.Generic.M80.Activate")
    };
    struct FFortAbilityTargetSelection T_Explosion = {
        "Shape": EFortTargetSelectionShape::Sphere,
        "CustomShapeComponentName": "",
        "TestType": EFortTargetSelectionTestType::Overlap,
        "PrimarySource": EFortAbilityTargetingSource::PawnForward,
        "SecondarySource": EFortAbilityTargetingSource::Max_None,
        "Range": 60,
        "HalfExtents": FVector(0, 0, 0),
        "ConeYawAngle": 0,
        "ConePitchAngle": 0,
        "ConeMinRadius": 1,
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
        "MaxTargets": -1
    };
    class USoundCue* ActivationSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Gadgets/Soldier/Soldier_Proxy_Mine_Activate_Cue.Soldier_Proxy_Mine_Activate_Cue'";
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
    float Anm_PlayRate = 2.5;
    struct FFortGameplayEffectContainerSpec EC_Explode_Return = {
        "TargetSelection": {
            "List": {},
            "bStopAtFirstSuccess": true,
            "bKeepCheckingListOnIndestructibleHit": false,
            "bUseWeaponRanges": true,
            "bUseMaxYawAngleToTarget": false,
            "MaxYawAngleToTarget": 0
        },
        "TargetGameplayEffectSpecs": {},
        "OwnerGameplayEffectSpecs": {},
        "ActivationCues": FGameplayTagContainer({}),
        "ImpactCues": FGameplayTagContainer({})
    };
    struct FGameplayTag EC_Explode = {
        "TagName": FName("Abilities.generic.GenericProjectile.Explode")
    };
    struct FFortGameplayEffectContainer EffectContainers = {
        "ApplicationTag": {
            "TagName": FName("Abilities.generic.GenericProjectile.Explode")
        },
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
                        "ActorTypeFilter": EFortTargetSelectionFilter::Damageable,
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
    TArray<struct FFortAbilityCost> AbilityCosts = {
        {
            "CostSource": EFortAbilityCostSource::AmmoPrimary,
            "CostValue": {
                "Value": 1,
                "Curve": {
                    "CurveTable": nullptr,
                    "RowName": FName("None")
                }
            },
            "ItemDefinition": "FortWeaponRangedItemDefinition'FortniteGame/Content/Abilities/Player/Generic/UtilityItems/WeaponData_M80.WeaponData_M80'",
            "bOnlyApplyCostOnHit": false
        }
    };
    bool bPersistOnDeath = false;
    struct FFortGameplayAbilityMontageInfo MontageInfo = {
        "MontageToPlay": "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Combat/Gadgets/Medium/Male/grenade_throw_Montage.grenade_throw_Montage'"
    };
    struct FGameplayTagContainer AbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Abilities.Generic.M80")),
        FGameplayTag::RequestGameplayTag(FName("Gameplay.Action.Player.Medium")),
        FGameplayTag::RequestGameplayTag(FName("Gameplay.DamageSource.Ability"))
    });

};