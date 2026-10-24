class UGAT_Athena_PurpleStuff_C : public UGAT_TriggeredAbility_C
{
public:
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/PurpleStuff/GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/PurpleStuff/GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C:ExecuteUbergraph_GAT_Athena_PurpleStuff'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<struct FAbilityTriggerData> AbilityTriggers = {
        {
            "TriggerTag": {
                "TagName": FName("Event.Damage.DiedAthena")
            },
            "TriggerSource": EGameplayAbilityTriggerSource::GameplayEvent
        },
        {
            "TriggerTag": {
                "TagName": FName("Event.Aircraft.Exited")
            },
            "TriggerSource": EGameplayAbilityTriggerSource::GameplayEvent
        }
    };

};