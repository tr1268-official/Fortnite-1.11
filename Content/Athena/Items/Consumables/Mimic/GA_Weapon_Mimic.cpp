class UGA_Weapon_Mimic_C : public UFortGameplayAbility
{
public:
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/Mimic/GA_Weapon_Mimic.GA_Weapon_Mimic_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/Mimic/GA_Weapon_Mimic.GA_Weapon_Mimic_C:ExecuteUbergraph_GA_Weapon_Mimic'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float Default Duration = 4;
    float Pulse Duration = 4;
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
    struct FGameplayTagContainer TC_AutomatedDefenses = FGameplayTagContainer({});
    class UBlueprintGeneratedClass* B_Prj_Mimic_Chest = "BlueprintGeneratedClass'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C'";
    float Prj_BR_HolderSpeed = 500;
    float Prj_BR_Holder_Gravity = 1;
    struct FGameplayTag EventActivation = {
        "TagName": FName("Abilities.Generic.BottleRocket.Activate")
    };
    struct FGameplayTag EventComplete = {
        "TagName": FName("Abilities.Generic.BottleRocket.DeActivate")
    };
    struct FGameplayTag EC_BottleRocket_Explode = {
        "TagName": FName("Abilities.generic.GenericProjectile.Explode")
    };
    class UAnimMontage* M_ThrowDown = "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Montages/Gadgets/throw_down_Montage.throw_down_Montage'";
    float Lifetime = 10;
    struct FGameplayTag EC_BottleRocketHolder_Explode = {
        "TagName": FName("Abilities.Generic.BottleRocket.HolderDamage")
    };
    struct FGameplayEffectContextHandle NewVar = {};
    class UParticleSystem* P_MuzzleFlash = "ParticleSystem'FortniteGame/Content/Gadgets/Assets/BottleRocket/P_BottleRocket_MuzzleFlash.P_BottleRocket_MuzzleFlash'";
    struct FGameplayTag GC_Muzzle = {
        "TagName": FName("GameplayCue.Abilities.Activation.Generic.BottleRocketMuzzle")
    };
    struct FGameplayEffectContextHandle NewVar0 = {};
    struct FGameplayCueParameters NewVar1 = {
        "NormalizedMagnitude": 0,
        "RawMagnitude": 0,
        "EffectContext": {},
        "MatchedTagName": {
            "TagName": FName("None")
        },
        "OriginalTag": {
            "TagName": FName("None")
        },
        "AggregatedSourceTags": FGameplayTagContainer({}),
        "AggregatedTargetTags": FGameplayTagContainer({}),
        "Location": FVector(4.54E-43, 0, 2.26E-43),
        "Normal": FVector(4.54E-43, 0, 2.26E-43),
        "Instigator": nullptr,
        "EffectCauser": nullptr,
        "SourceObject": nullptr,
        "PhysicalMaterial": nullptr,
        "GameplayEffectLevel": 1,
        "AbilityLevel": 1,
        "TargetAttachComponent": nullptr
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
                    "Range": 300,
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
            "ItemDefinition": "FortWeaponRangedItemDefinition'FortniteGame/Content/Abilities/Player/Generic/UtilityItems/WeaponData_BottleRocket.WeaponData_BottleRocket'",
            "bOnlyApplyCostOnHit": false
        }
    };
    struct FGameplayTagContainer AbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Abilities.Generic.BottleRocket")),
        FGameplayTag::RequestGameplayTag(FName("Gameplay.Action.Player.Medium")),
        FGameplayTag::RequestGameplayTag(FName("Gameplay.DamageSource.Ability"))
    });
    class UBlueprintGeneratedClass* CooldownGameplayEffectClass = "BlueprintGeneratedClass'FortniteGame/Content/Abilities/Player/Generic/Gadgets/BottleRocket/GE_BottleRocketCooldown.GE_BottleRocketCooldown_C'";

};