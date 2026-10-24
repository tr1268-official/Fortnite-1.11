class UPlayerPawn_Athena_Generic_Parent_C : public UFortPlayerPawnAthena
{
public:
    TArray<unknown> ComponentTemplates = {};
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C:SimpleConstructionScript_1'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C:ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UCurveFloat* DirectionalSpeedMultiplierCurve = "CurveFloat'FortniteGame/Content/Athena/Balance/Movement/DirectionalSpeedMultiplierCurve.DirectionalSpeedMultiplierCurve'";
    class USkeletalMeshComponent* MeshParachuteOpen = "SkeletalMeshComponent'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic_Parent.Default__PlayerPawn_Athena_Generic_Parent_C:MeshParachuteOpen0'";
    class UPostProcessComponent* OutsideSafeZonePPComponent = "PostProcessComponent'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic_Parent.Default__PlayerPawn_Athena_Generic_Parent_C:OutsideSafeZonePP0'";
    enum EFortCustomBodyType CharacterBodyType = EFortCustomBodyType::EFortCustomBodyType_MAX;
    struct FSlateBrush MiniMapIconBrush = {
        "ImageSize": FVector2D(20, 20),
        "ResourceObject": "Texture2D'FortniteGame/Content/UI/CodeReferenced/UI_Radar_AthenaPlayerArrow.UI_Radar_AthenaPlayerArrow'",
        "ImageType": ESlateBrushImageType::FullColor
    };
    struct FSlateBrush AboveBelowMiniMapIconBrush = {
        "ImageSize": FVector2D(20, 20),
        "ResourceObject": "Texture2D'FortniteGame/Content/UI/Fort_HUD/UI_Radar_PositionArrow_White.UI_Radar_PositionArrow_White'",
        "ImageType": ESlateBrushImageType::FullColor
    };
    struct FSlateBrush FarOffMiniMapIconBrush = {
        "ImageSize": FVector2D(28, 73),
        "ResourceObject": "Texture2D'FortniteGame/Content/UI/Fort_HUD/Radar/UI_Radar_OOB_Buddy_Dot.UI_Radar_OOB_Buddy_Dot'",
        "ImageType": ESlateBrushImageType::FullColor
    };
    TArray<struct FFortPawnVocalChord> VocalChords = {
        {
            "FeedbackAudioComponent": "AudioComponent'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic_Parent.Default__PlayerPawn_Athena_Generic_Parent_C:FeedbackAudioComp0'",
            "ReplicatedSpokenLine": {
                "Audio": nullptr,
                "AnimMontage": nullptr,
                "AnimSequence": nullptr,
                "Addressee": nullptr,
                "BroadcastFilter": FFBF_None_Max,
                "Delay": 0,
                "bInterruptCurrentLine": false,
                "bCanBeInterrupted": false,
                "bCanQue": false
            },
            "PendingSpokenLine": {
                "Audio": nullptr,
                "AnimMontage": nullptr,
                "AnimSequence": nullptr,
                "Addressee": nullptr,
                "BroadcastFilter": FFBF_None_Max,
                "Delay": 0,
                "bInterruptCurrentLine": false,
                "bCanBeInterrupted": false,
                "bCanQue": false
            },
            "QueuedSpokenLine": {
                "Audio": nullptr,
                "AnimMontage": nullptr,
                "AnimSequence": nullptr,
                "Addressee": nullptr,
                "BroadcastFilter": FFBF_None_Max,
                "Delay": 0,
                "bInterruptCurrentLine": false,
                "bCanBeInterrupted": false,
                "bCanQue": false
            },
            "CurrentSpokenLine": {
                "Audio": nullptr,
                "AnimMontage": nullptr,
                "AnimSequence": nullptr,
                "Addressee": nullptr,
                "BroadcastFilter": FFBF_None_Max,
                "Delay": 0,
                "bInterruptCurrentLine": false,
                "bCanBeInterrupted": false,
                "bCanQue": false
            }
        }
    };
    class USkeletalMeshComponent* Mesh = "SkeletalMeshComponent'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic_Parent.Default__PlayerPawn_Athena_Generic_Parent_C:CharacterMesh0'";
    class UFortMovementComp_CharacterAthena* CharacterMovement = "FortMovementComp_CharacterAthena'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic_Parent.Default__PlayerPawn_Athena_Generic_Parent_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic_Parent.Default__PlayerPawn_Athena_Generic_Parent_C:CollisionCylinder'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'FortniteGame/Content/Athena/PlayerPawn_Athena_Generic_Parent.Default__PlayerPawn_Athena_Generic_Parent_C:CollisionCylinder'";

};