class UGA_DanceGrenade_Stun_C : public UFortGameplayAbility
{
public:
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/DanceGrenade/GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/DanceGrenade/GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C:ExecuteUbergraph_GA_DanceGrenade_Stun'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FActiveGameplayEffectHandle EffectHandle = {
        "Handle": -1,
        "bPassedFiltersAndWasExecuted": false
    };
    struct FGameplayTagContainer AbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Gameplay.Action.Player.DanceStunned"))
    });
    enum EGameplayAbilityNetExecutionPolicy NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;

};