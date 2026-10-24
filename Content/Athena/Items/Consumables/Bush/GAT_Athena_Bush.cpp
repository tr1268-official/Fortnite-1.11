class UGAT_Athena_Bush_C : public UGAT_TriggeredAbility_C
{
public:
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/Bush/GAT_Athena_Bush.GAT_Athena_Bush_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/Bush/GAT_Athena_Bush.GAT_Athena_Bush_C:ExecuteUbergraph_GAT_Athena_Bush'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<struct FAbilityTriggerData> AbilityTriggers = {
        {
            "TriggerTag": {
                "TagName": FName("Event.Damage.Shielded")
            },
            "TriggerSource": EGameplayAbilityTriggerSource::GameplayEvent
        },
        {
            "TriggerTag": {
                "TagName": FName("Event.Damage.Received")
            },
            "TriggerSource": EGameplayAbilityTriggerSource::GameplayEvent
        },
        {
            "TriggerTag": {
                "TagName": FName("Event.Aircraft.Exited")
            },
            "TriggerSource": EGameplayAbilityTriggerSource::GameplayEvent
        },
        {
            "TriggerTag": {
                "TagName": FName("Event.DBNOAthena")
            },
            "TriggerSource": EGameplayAbilityTriggerSource::GameplayEvent
        }
    };

};