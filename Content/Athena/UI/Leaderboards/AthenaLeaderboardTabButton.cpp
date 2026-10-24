class UAthenaLeaderboardTabButton_C : public UCommonButton
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Leaderboards/AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Leaderboards/AthenaLeaderboardTabButton.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Leaderboards/AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Leaderboards/AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C:ExecuteUbergraph_AthenaLeaderboardTabButton'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ButtonText = FText("{Text}", Immutable);
    struct FSlateBrush IconBrush = {
        "ImageSize": FVector2D(0, 0),
        "Margin": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "TintColor": {
            "SpecifiedColor": FLinearColor(1, 1, 1, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "ResourceObject": nullptr,
        "ResourceName": FName("None"),
        "UVRegion": bIsValid=0, Min=(X=0.000 Y=0.000), Max=(X=0.000 Y=0.000),
        "DrawAs": ESlateBrushDrawType::NoDrawType,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::NoImage,
        "bIsDynamicallyLoaded": false
    };
    bool UseText = true;
    struct FLinearColor SelectedIconTint = FLinearColor(1, 1, 1, 1);
    struct FLinearColor DeselectedIconTint = FLinearColor(1, 1, 1, 0.4);
    struct FLinearColor HoveredIconTint = FLinearColor(1, 1, 1, 1);
    int32 MinWidth = 200;
    class UBlueprintGeneratedClass* Style = "BlueprintGeneratedClass'FortniteGame/Content/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-MediumTransparentWithCues.ButtonStyle-MediumTransparentWithCues_C'";
    struct FSlateSound PressedSlateSoundOverride = {
        "ResourceObject": "SoundCue'FortniteGame/Content/Sounds/Fort_UI_Sounds/FrontEnd/Fort_Athena_LeaderboardTab_Pressed_Cue.Fort_Athena_LeaderboardTab_Pressed_Cue'"
    };
    struct FSlateSound HoveredSlateSoundOverride = {
        "ResourceObject": "SoundCue'FortniteGame/Content/Sounds/Fort_UI_Sounds/FrontEnd/Fort_Athena_LeaderboardTab_Hover_Cue.Fort_Athena_LeaderboardTab_Hover_Cue'"
    };
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};