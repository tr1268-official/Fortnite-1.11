class UGA_Athena_Bush_C : public UFortGameplayAbility
{
public:
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/Bush/GA_Athena_Bush.GA_Athena_Bush_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/Bush/GA_Athena_Bush.GA_Athena_Bush_C:ExecuteUbergraph_GA_Athena_Bush'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FFortGameplayAbilityMontageInfo AnimMontageInfo = {
        "MontageToPlay": "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Montages/General/ApplyBush_Athena.ApplyBush_Athena'",
        "AnimPlayRate": 0.75,
        "AnimRootMotionTranslationScale": 1,
        "MontageSectionToPlay": EFortGameplayAbilityMontageSectionToPlay::FirstSection,
        "OverrideSection": FName("None"),
        "bPlayRandomSection": false,
        "CharacterPartMontages": {}
    };
    float TriggerDuration = 3.5;
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
            "ItemDefinition": "FortWeaponRangedItemDefinition'FortniteGame/Content/Athena/Items/Consumables/Shields/Athena_Shields.Athena_Shields'",
            "bOnlyApplyCostOnHit": false
        }
    };
    bool bPersistOnDeath = false;
    struct FFortGameplayAbilityMontageInfo MontageInfo = {
        "MontageToPlay": "AnimMontage'FortniteGame/Content/Animation/Game/MainPlayer/Montages/General/ApplyBush_Athena.ApplyBush_Athena'"
    };
    struct FGameplayTagContainer AbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("NPC.Ability.NonAttack.QuickHealSelf")),
        FGameplayTag::RequestGameplayTag(FName("Gameplay.Action.Player.InterruptibleHealingItem"))
    });

};