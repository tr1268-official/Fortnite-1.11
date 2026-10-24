class UGA_Athena_SuperMedkit_C : public UFortGameplayAbility
{
public:
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/SuperMedkit/GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/SuperMedkit/GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C:ExecuteUbergraph_GA_Athena_SuperMedkit'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FFortGameplayAbilityMontageInfo AnimMontageInfo = {
        "MontageToPlay": "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Montages/General/ApplyShield_Athena.ApplyShield_Athena'",
        "AnimPlayRate": 0.75,
        "AnimRootMotionTranslationScale": 1,
        "MontageSectionToPlay": EFortGameplayAbilityMontageSectionToPlay::FirstSection,
        "OverrideSection": FName("None"),
        "bPlayRandomSection": false,
        "CharacterPartMontages": {}
    };
    struct FRotator SpawnHeading = FRotator(0, 0, 0);
    class UBlueprintGeneratedClass* Projectile = "BlueprintGeneratedClass'FortniteGame/Content/Athena/Items/Consumables/Bandage/B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C'";
    int32 HealingAmount = 100;
    float TriggerDuration = 15;
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
                    "Range": 200,
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
            "ItemDefinition": "FortWeaponRangedItemDefinition'FortniteGame/Content/Athena/Items/Consumables/SuperMedkit/Athena_SuperMedkit.Athena_SuperMedkit'",
            "bOnlyApplyCostOnHit": false
        }
    };
    bool bPersistOnDeath = false;
    struct FFortGameplayAbilityMontageInfo MontageInfo = {
        "MontageToPlay": "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Montages/General/ApplyEssentialOils_Athena.ApplyEssentialOils_Athena'",
        "AnimPlayRate": 0.33
    };
    struct FGameplayTagContainer AbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("NPC.Ability.NonAttack.QuickHealSelf")),
        FGameplayTag::RequestGameplayTag(FName("Gameplay.Action.Player.InterruptibleHealingItem"))
    });

};