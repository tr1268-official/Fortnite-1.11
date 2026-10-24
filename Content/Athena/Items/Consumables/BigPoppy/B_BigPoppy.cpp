class UB_BigPoppy_C : public UBuildingGameplayActor
{
public:
    TArray<unknown> DynamicBindingObjects = {};
    TArray<unknown> Timelines = {};
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Items/Consumables/BigPoppy/B_BigPoppy.B_BigPoppy_C:SimpleConstructionScript_0'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/BigPoppy/B_BigPoppy.B_BigPoppy_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/BigPoppy/B_BigPoppy.B_BigPoppy_C:ExecuteUbergraph_B_BigPoppy'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float PlayerPushFactor = 10;

};