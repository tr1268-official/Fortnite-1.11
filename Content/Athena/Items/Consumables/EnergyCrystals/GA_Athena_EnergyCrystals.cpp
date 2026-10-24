class UGA_Athena_EnergyCrystals_C : public UFortGameplayAbility
{
public:
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/EnergyCrystals/GA_Athena_EnergyCrystals.GA_Athena_EnergyCrystals_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/EnergyCrystals/GA_Athena_EnergyCrystals.GA_Athena_EnergyCrystals_C:ExecuteUbergraph_GA_Athena_EnergyCrystals'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FFortGameplayAbilityMontageInfo AnimMontageInfo = {
        "MontageToPlay": "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Montages/General/WrapBandages_Athena.WrapBandages_Athena'",
        "AnimPlayRate": 0.75,
        "AnimRootMotionTranslationScale": 1,
        "MontageSectionToPlay": EFortGameplayAbilityMontageSectionToPlay::FirstSection,
        "OverrideSection": FName("None"),
        "bPlayRandomSection": false,
        "CharacterPartMontages": {}
    };
    struct FRotator SpawnHeading = FRotator(0, 0, 0);
    class UBlueprintGeneratedClass* Projectile = "BlueprintGeneratedClass'FortniteGame/Content/Athena/Items/Consumables/Bandage/B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C'";
    float HealingAmount = 1;
    float TriggerDuration = 2;
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
            "ItemDefinition": "FortWeaponRangedItemDefinition'FortniteGame/Content/Athena/Items/Consumables/PurpleStuff/Athena_PurpleStuff.Athena_PurpleStuff'",
            "bOnlyApplyCostOnHit": false
        }
    };
    struct FFortGameplayAbilityMontageInfo MontageInfo = {
        "MontageToPlay": "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Montages/General/ApplyPurple_Athena.ApplyPurple_Athena'"
    };
    struct FGameplayTagContainer AbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Gameplay.Action.Player.InterruptibleHealingItem"))
    });
    class UBlueprintGeneratedClass* CooldownGameplayEffectClass = "BlueprintGeneratedClass'FortniteGame/Content/Athena/Items/Consumables/PurpleStuff/GE_Athena_PurpleStuff_Cooldown.GE_Athena_PurpleStuff_Cooldown_C'";

};