class UGA_Athena_Grenade_WithTrajectory_C : public UFortGameplayAbility
{
public:
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C:ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag EventActivation = {
        "TagName": FName("Abilities.generic.M80.DeActivate")
    };
    struct FGameplayTag EventComplete = {
        "TagName": FName("Abilities.generic.M80.Activate")
    };
    class UBlueprintGeneratedClass* Prj_Grenade = "BlueprintGeneratedClass'FortniteGame/Content/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade.B_Prj_Athena_Grenade_C'";
    float GrenadeSpeedMin = 4000;
    float GrenadeSpeedMax = 4000;
    float GravityScale = 0.8;
    class USoundCue* GrenadeSound = "SoundCue'FortniteGame/Content/Sounds/Fort_Gadgets/Soldier/Soldier_Proxy_Mine_Activate_Cue.Soldier_Proxy_Mine_Activate_Cue'";
    struct FGameplayTag EC_DefaultExplosion = {
        "TagName": FName("Abilities.generic.GenericProjectile.Explode")
    };
    struct FFortGameplayEffectContainerSpec EC_ReturnedEffect = {
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
    struct FFortFeedbackHandle GrenadeDialogFeedback = {
        "FeedbackBank": "FortFeedbackBank'FortniteGame/Content/Characters/Feedback/Soldier_Male_Feedback.Soldier_Male_Feedback'",
        "EventName": FName("Grenade_Throw"),
        "bReadOnly": false,
        "bBankDefined": false,
        "BroadcastFilterOverride": FFBF_None_Max
    };
    struct FVector GrenadeTargetingOriginOffset = FVector(12, 20, 93);
    float TrajectoryUpdateInterval = 0.01;
    float DummyTimeStep = 0.04;
    class UBlueprintGeneratedClass* TrajectoryIndicatorClass = "BlueprintGeneratedClass'FortniteGame/Content/Athena/Items/Consumables/Grenade/BP_ProjectileTrajectory_Athena.BP_ProjectileTrajectory_Athena_C'";
    struct FFortGameplayAbilityMontageInfo ThrowWindupMontage = {
        "MontageToPlay": "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Combat/Gadgets/Medium/Male/Grenade_Cook_IntroAnLoop.Grenade_Cook_IntroAnLoop'",
        "AnimPlayRate": 1,
        "AnimRootMotionTranslationScale": 1,
        "MontageSectionToPlay": EFortGameplayAbilityMontageSectionToPlay::FirstSection,
        "OverrideSection": FName("None"),
        "bPlayRandomSection": false,
        "CharacterPartMontages": {}
    };
    float MaxSpeedPitch = 35;
    float MinSpeedPitch = -35;
    struct FGameplayEventData Event Data = {
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
    float MaxTossPitch = 80;
    int32 MaxTrajectoryBounces = 1;
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
        "MontageToPlay": "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Combat/Gadgets/Medium/Male/Grenade_Cook_Outro.Grenade_Cook_Outro'"
    };
    class UBlueprintGeneratedClass* Tooltip = "BlueprintGeneratedClass'FortniteGame/Content/Abilities/Player/Commando/Actives/FragGrenade/TT_Commando_FragGrenade.TT_Commando_FragGrenade_C'";
    struct FGameplayTagContainer AbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Gameplay.DamageSource.Ability")),
        FGameplayTag::RequestGameplayTag(FName("Abilities.generic.M80")),
        FGameplayTag::RequestGameplayTag(FName("Gameplay.Action.Player.Light"))
    });
    enum EGameplayAbilityReplicationPolicy ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    enum EGameplayAbilityInstancingPolicy InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

};