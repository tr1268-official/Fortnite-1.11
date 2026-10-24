class UB_Prj_Mimic_C : public UFortProjectileBase
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic.B_Prj_Mimic_C:SimpleConstructionScript_210'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic.B_Prj_Mimic_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic.B_Prj_Mimic_C:ExecuteUbergraph_B_Prj_Mimic'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class USoundCue* BottleRocketFireCue = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Explosives/RomanCandle_Fire_Cue.RomanCandle_Fire_Cue'";
    class UParticleSystem* P_Explosion = "ParticleSystem'FortniteGame/Content/Gadgets/Assets/BottleRocket/P_BottleRocket_Explo.P_BottleRocket_Explo'";
    class USoundCue* ExplosionCue = "SoundCue'FortniteGame/Content/Sounds/Fort_GamePlay_Sounds/Explosives/BottleRocket_Explosion_Cue.BottleRocket_Explosion_Cue'";
    float Lifetime_Min = 0.4;
    float Lifetime_Max = 1.8;
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic.Default__B_Prj_Mimic_C:CollisionCapsule0'";
    class UProjectileMovementComponent* ProjectileMovementComponent = "ProjectileMovementComponent'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic.Default__B_Prj_Mimic_C:ProjectileComp0'";
    bool bStopSimulatingOnHit = false;
    class UCapsuleComponent* CollisionComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic.Default__B_Prj_Mimic_C:CollisionCapsule0'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'FortniteGame/Content/Athena/Items/Consumables/Mimic/B_Prj_Mimic.Default__B_Prj_Mimic_C:CollisionCapsule0'";

};