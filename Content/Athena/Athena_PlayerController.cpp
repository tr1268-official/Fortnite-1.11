class UAthena_PlayerController_C : public UFortPlayerControllerAthena
{
public:
    TArray<unknown> ComponentTemplates = {};
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Athena_PlayerController.Athena_PlayerController_C:SimpleConstructionScript_0'";
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/Athena_PlayerController.Athena_PlayerController_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/Athena_PlayerController.Athena_PlayerController_C:ExecuteUbergraph_Athena_PlayerController'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class USoundMix* AthenaSoundMix = "SoundMix'FortniteGame/Content/Sounds/FortSoundClassesAndModes/Fort_Default_Athena_Mix.Fort_Default_Athena_Mix'";
    class USoundCue* AudioOnExitAircraft = "SoundCue'FortniteGame/Content/Athena/Sounds/Bus/FlyingBus_Drop_Cue.FlyingBus_Drop_Cue'";
    struct FFortAthenaLoadout CustomizationLoadout = {
        "Glider": "AthenaGliderItemDefinition'FortniteGame/Content/Athena/Items/Cosmetics/Gliders/DefaultGlider.DefaultGlider'",
        "Pickaxe": "AthenaPickaxeItemDefinition'FortniteGame/Content/Athena/Items/Cosmetics/Pickaxes/DefaultPickaxe.DefaultPickaxe'"
    };
    TArray<struct FSettingsHUDVisibilityAndText> HUDVisibilityGameplayTags = {
        {
            "HUDVisibilityGameplayTag": {
                "TagName": FName("HUD.Center.Reticle")
            },
            "DefaultHUDVisibility": ESlateVisibility::Visible,
            "DisplayText": FText("Reticle", Immutable),
            "TooltipText": FText("Changes the HUD element visibility in the game.", Immutable),
            "bHideOnConsolePlatforms": false
        },
        {
            "HUDVisibilityGameplayTag": {
                "TagName": FName("HUD.TopLeft.PlayerHitPoints")
            },
            "DefaultHUDVisibility": ESlateVisibility::Visible,
            "DisplayText": FText("Player Health", Immutable),
            "TooltipText": FText("Changes the HUD element visibility in the game.", Immutable),
            "bHideOnConsolePlatforms": false
        },
        {
            "HUDVisibilityGameplayTag": {
                "TagName": FName("HUD.TopLeft.PickupManager")
            },
            "DefaultHUDVisibility": ESlateVisibility::Visible,
            "DisplayText": FText("Pickup Info", Immutable),
            "TooltipText": FText("Changes the HUD element visibility in the game.", Immutable),
            "bHideOnConsolePlatforms": false
        },
        {
            "HUDVisibilityGameplayTag": {
                "TagName": FName("HUD.TopRight.Minimap")
            },
            "DefaultHUDVisibility": ESlateVisibility::Visible,
            "DisplayText": FText("Minimap", Immutable),
            "TooltipText": FText("Changes the HUD element visibility in the game.", Immutable),
            "bHideOnConsolePlatforms": false
        },
        {
            "HUDVisibilityGameplayTag": {
                "TagName": FName("HUD.Quickbar")
            },
            "DefaultHUDVisibility": ESlateVisibility::Visible,
            "DisplayText": FText("Quick Bar", Immutable),
            "TooltipText": FText("Changes the HUD element visibility in the game.", Immutable),
            "bHideOnConsolePlatforms": false
        },
        {
            "HUDVisibilityGameplayTag": {
                "TagName": FName("HUD.InWorld.BuildingInfoIndicator")
            },
            "DefaultHUDVisibility": ESlateVisibility::Visible,
            "DisplayText": FText("Target Info", Immutable),
            "TooltipText": FText("Changes the HUD element visibility in the game.", Immutable),
            "bHideOnConsolePlatforms": false
        },
        {
            "HUDVisibilityGameplayTag": {
                "TagName": FName("HUD.TopLeft.PlayerInfo")
            },
            "DefaultHUDVisibility": ESlateVisibility::Visible,
            "DisplayText": FText("Interaction Info", Immutable),
            "TooltipText": FText("Changes the HUD element visibility in the game.", Immutable),
            "bHideOnConsolePlatforms": false
        },
        {
            "HUDVisibilityGameplayTag": {
                "TagName": FName("HUD.TopLeft.NetDebugUI")
            },
            "DefaultHUDVisibility": ESlateVisibility::Collapsed,
            "DisplayText": FText("Net Debug Stats", Immutable),
            "TooltipText": FText("Changes the HUD element visibility in the game.", Immutable),
            "bHideOnConsolePlatforms": true
        }
    };
    FSoftObjectPath GamepadSettingsAssetPtr = FSoftObjectPath("/Game/Gamepad/AthenaGamepadSettings.AthenaGamepadSettings");
    float MovementCancellableActionLeashLength = 75;
    class UFortInteractContextInfo* PossibleInteractContextInfo = "FortInteractContextInfo'FortniteGame/Content/Athena/Athena_PlayerController.Default__Athena_PlayerController_C:PossibleInteractContextInfo'";
    class USceneComponent* TransformComponent = "SceneComponent'FortniteGame/Content/Athena/Athena_PlayerController.Default__Athena_PlayerController_C:TransformComponent0'";
    class USceneComponent* RootComponent = "SceneComponent'FortniteGame/Content/Athena/Athena_PlayerController.Default__Athena_PlayerController_C:TransformComponent0'";

};