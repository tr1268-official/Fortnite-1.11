class UAthena_PlayerPawnMacros_C : public UPlayerPawn_Athena_Generic_Parent_C
{
public:
    class USkeletalMeshComponent* MeshParachuteOpen = "SkeletalMeshComponent'FortniteGame/Content/Athena/Athena_PlayerPawnMacros.Default__Athena_PlayerPawnMacros_C:MeshParachuteOpen0'";
    class UPostProcessComponent* OutsideSafeZonePPComponent = "PostProcessComponent'FortniteGame/Content/Athena/Athena_PlayerPawnMacros.Default__Athena_PlayerPawnMacros_C:OutsideSafeZonePP0'";
    TArray<struct FFortPawnVocalChord> VocalChords = {
        {
            "FeedbackAudioComponent": "AudioComponent'FortniteGame/Content/Athena/Athena_PlayerPawnMacros.Default__Athena_PlayerPawnMacros_C:FeedbackAudioComp0'",
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
    class USkeletalMeshComponent* Mesh = "SkeletalMeshComponent'FortniteGame/Content/Athena/Athena_PlayerPawnMacros.Default__Athena_PlayerPawnMacros_C:CharacterMesh0'";
    class UFortMovementComp_CharacterAthena* CharacterMovement = "FortMovementComp_CharacterAthena'FortniteGame/Content/Athena/Athena_PlayerPawnMacros.Default__Athena_PlayerPawnMacros_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'FortniteGame/Content/Athena/Athena_PlayerPawnMacros.Default__Athena_PlayerPawnMacros_C:CollisionCylinder'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'FortniteGame/Content/Athena/Athena_PlayerPawnMacros.Default__Athena_PlayerPawnMacros_C:CollisionCylinder'";
};