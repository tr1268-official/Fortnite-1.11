class UGE_Athena_PurpleStuff_Cooldown_C : public UGET_Cooldown_C
{
public:
    enum DurationPolicy = EGameplayEffectDurationType::HasDuration;
    struct FGameplayEffectModifierMagnitude DurationMagnitude = {
        "ScalableFloatMagnitude": {
            "Value": 26
        }
    };
    struct FInheritedTagContainer InheritableGameplayEffectTags = {
        "Added": FGameplayTagContainer({})
    };
    struct FInheritedTagContainer InheritableOwnedTagsContainer = {
        "CombinedTags": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Athena.Cooldown.Item.PurpleStuff"))
        }),
        "Added": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Athena.Cooldown.Item.PurpleStuff"))
        })
    };
};