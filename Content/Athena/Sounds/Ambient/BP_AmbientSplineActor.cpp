class ABP_AmbientSplineActor_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Sounds/Ambient/BP_AmbientSplineActor.BP_AmbientSplineActor_C:SimpleConstructionScript_0'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Sounds/Ambient/BP_AmbientSplineActor.BP_AmbientSplineActor_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Sounds/Ambient/BP_AmbientSplineActor.BP_AmbientSplineActor_C:ExecuteUbergraph_BP_AmbientSplineActor'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 NumSamplePoints = 40;
    struct FVector ClosestPoint = FVector(0, 0, 0);
    struct FVector NextClosestPoint = FVector(0, 0, 0);
    float CheckFrequencyClose = 1;
    float CheckFrequencyFar = 3;
    float SmallestDistance = 1E+09;
    struct FVector TargetLoc = FVector(0, 0, 0);
    struct FVector FollowLoc = FVector(0, 0, 0);
    float NextSmallestDistance = 1E+09;
    int32 ClosestIndex = 40;
    int32 NextClosestIndex = 40;
    float CloseFarDistanceThreshold = 5000;
    bool bActive = true;
    int32 PreviousClosestIndex = 40;
    struct FActorTickFunction PrimaryActorTick = {
        "bCanEverTick": true
    };

};