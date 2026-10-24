class UAthenaTeamMemberInfo_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/Team/AthenaTeamMemberInfo.AthenaTeamMemberInfo_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "[Menu Anchor] Gear Menu",
            "PropertyName": FName("OnGetMenuContentEvent"),
            "FunctionName": FName("OnGetMenuContent_0"),
            "SourcePath": {
                "Segments": {}
            },
            "Kind": EBindingKind::Function
        }
    };
    TArray<unknown> Animations = {};
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/Team/AthenaTeamMemberInfo.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/Team/AthenaTeamMemberInfo.AthenaTeamMemberInfo_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/Team/AthenaTeamMemberInfo.AthenaTeamMemberInfo_C:ExecuteUbergraph_AthenaTeamMemberInfo'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FSlateBrush Player0 = {
        "ImageSize": FVector2D(18, 18),
        "Margin": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "TintColor": {
            "SpecifiedColor": FLinearColor(0.008023, 0.205079, 0.814847, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "ResourceObject": "Texture2D'FortniteGame/Content/Athena/HUD/Art/squad_PinDiamond.squad_PinDiamond'",
        "ResourceName": FName("None"),
        "UVRegion": bIsValid=0, Min=(X=0.000 Y=0.000), Max=(X=0.000 Y=0.000),
        "DrawAs": ESlateBrushDrawType::Image,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::NoImage,
        "bIsDynamicallyLoaded": false
    };
    struct FSlateBrush Player1 = {
        "ImageSize": FVector2D(18, 18),
        "Margin": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "TintColor": {
            "SpecifiedColor": FLinearColor(1, 0, 0.05448, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "ResourceObject": "Texture2D'FortniteGame/Content/Athena/HUD/Art/squad_PinDiamond.squad_PinDiamond'",
        "ResourceName": FName("None"),
        "UVRegion": bIsValid=0, Min=(X=0.000 Y=0.000), Max=(X=0.000 Y=0.000),
        "DrawAs": ESlateBrushDrawType::Image,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::NoImage,
        "bIsDynamicallyLoaded": false
    };
    struct FSlateBrush Player2 = {
        "ImageSize": FVector2D(18, 18),
        "Margin": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "TintColor": {
            "SpecifiedColor": FLinearColor(0.401978, 0, 1, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "ResourceObject": "Texture2D'FortniteGame/Content/Athena/HUD/Art/squad_PinDiamond.squad_PinDiamond'",
        "ResourceName": FName("None"),
        "UVRegion": bIsValid=0, Min=(X=0.000 Y=0.000), Max=(X=0.000 Y=0.000),
        "DrawAs": ESlateBrushDrawType::Image,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::NoImage,
        "bIsDynamicallyLoaded": false
    };
    struct FSlateBrush Player3 = {
        "ImageSize": FVector2D(18, 18),
        "Margin": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "TintColor": {
            "SpecifiedColor": FLinearColor(0.991102, 0.679543, 0.000607, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "ResourceObject": "Texture2D'FortniteGame/Content/Athena/HUD/Art/squad_PinDiamond.squad_PinDiamond'",
        "ResourceName": FName("None"),
        "UVRegion": bIsValid=0, Min=(X=0.000 Y=0.000), Max=(X=0.000 Y=0.000),
        "DrawAs": ESlateBrushDrawType::Image,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::NoImage,
        "bIsDynamicallyLoaded": false
    };
    float AddFriendRolloutDelay = 0.15;
    struct FUniqueNetIdRepl McpUniqueNetID = FUniqueNetIdRepl();
    class UTexture2D* MutedTexture = "Texture2D'FortniteGame/Content/Athena/HUD/Art/mic-muted.mic-muted'";
    class UTexture2D* TalkingTexture = "Texture2D'FortniteGame/Content/Athena/HUD/Art/mic-active.mic-active'";
    class UTexture2D* NotTalkingTexture = "Texture2D'FortniteGame/Content/Athena/HUD/Art/mic-notalk.mic-notalk'";
    class UMaterial* MicMaterial = "Material'FortniteGame/Content/Athena/HUD/Art/M_Mic_Indicator.M_Mic_Indicator'";
    struct FUniqueNetIdRepl ConsoleUniqueNetID = FUniqueNetIdRepl();
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};