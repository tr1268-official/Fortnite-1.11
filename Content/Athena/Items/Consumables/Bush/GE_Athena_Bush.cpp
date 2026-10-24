class UGE_Athena_Bush_C : public UGameplayEffect
{
public:
    enum DurationPolicy = EGameplayEffectDurationType::Infinite;
    TArray<struct FGameplayEffectCue> GameplayCues = {
        {
            "MagnitudeAttribute": {
                "AttributeName": "",
                "Attribute": nullptr,
                "AttributeOwner": nullptr
            },
            "MinLevel": 0,
            "MaxLevel": 0,
            "GameplayCueTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("GameplayCue.Athena.Applied.Item.Bush"))
            })
        }
    };
    struct FInheritedTagContainer InheritableOwnedTagsContainer = {
        "CombinedTags": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Athena.Item.Bush"))
        }),
        "Added": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Athena.Item.Bush"))
        })
    };
    struct FGameplayTagRequirements ApplicationTagRequirements = {
        "IgnoreTags": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Gameplay.Status.DBNO"))
        })
    };
    TArray<struct FGameplayAbilitySpecDef> GrantedAbilities = {
        {
            "Ability": "BlueprintGeneratedClass'FortniteGame/Content/Athena/Items/Consumables/Bush/GAT_Athena_Bush.GAT_Athena_Bush_C'",
            "Level": -1,
            "LevelScalableFloat": {
                "Value": 1,
                "Curve": {
                    "CurveTable": nullptr,
                    "RowName": FName("None")
                }
            },
            "InputID": -1,
            "RemovalPolicy": EGameplayEffectGrantedAbilityRemovePolicy::CancelAbilityImmediately,
            "SourceObject": nullptr,
            "AssignedHandle": {
                "Handle": -1
            }
        }
    };
};