class UBulletWhipTrackerComponent_C : public UActorComponent
{
public:
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Sounds/Weapons/BulletWhips/BulletWhipTrackerComponent.BulletWhipTrackerComponent_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Sounds/Weapons/BulletWhips/BulletWhipTrackerComponent.BulletWhipTrackerComponent_C:ExecuteUbergraph_BulletWhipTrackerComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector VelocityDirection = FVector(0, 0, 0);
    struct FVector StartLocation = FVector(0, 0, 0);
    float PassByRadiusMax = 400;
    float PassByRadiusMin = 50;
    class USoundCue* PassByFarSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Weapons/BulletWhips/bullet_whip_Cue.bullet_whip_Cue'";
    class USoundCue* PassByCloseSound = "SoundCue'FortniteGame/Content/Athena/Sounds/Weapons/BulletWhips/bullet_whip_heavy_Cue.bullet_whip_heavy_Cue'";
    struct FVector End = FVector(0, 0, 0);
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bCanEverTick": true,
        "bStartWithTickEnabled": false
    };

};