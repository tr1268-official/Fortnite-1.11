class UFullPartyMemberAthena_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/Parties/FullPartyMemberAthena.FullPartyMemberAthena_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/Parties/FullPartyMemberAthena.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/Parties/FullPartyMemberAthena.FullPartyMemberAthena_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/Parties/FullPartyMemberAthena.FullPartyMemberAthena_C:ExecuteUbergraph_FullPartyMemberAthena'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FFortTeamMemberInfo MemberInfo = {
        "MemberUniqueId": FUniqueNetIdRepl(),
        "PartyLeaderUniqueId": FUniqueNetIdRepl(),
        "ConsoleUniqueId": FUniqueNetIdRepl(),
        "PlayerName": FText(""),
        "bPartyLeader": false,
        "bIsInZone": false,
        "bHasBoostXp": false,
        "bHasRestXp": false,
        "NumPlayersInParty": 0,
        "PlayerIndex": -1,
        "TeamAffiliation": EFortTeam::MAX,
        "HeroClass": FText(""),
        "HeroLevel": FText(""),
        "HeroXP": -1,
        "HeroItem": nullptr,
        "SelectedGadgetItems": {},
        "HeroIcon": {
            "ImageSize": FVector2D(32, 32),
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
            "DrawAs": ESlateBrushDrawType::Image,
            "Tiling": ESlateBrushTileType::NoTile,
            "Mirroring": ESlateBrushMirrorType::NoMirror,
            "ImageType": ESlateBrushImageType::NoImage,
            "bIsDynamicallyLoaded": false
        },
        "HomeBaseInfo": {
            "BannerIconId": "",
            "BannerColorId": "",
            "Name": FText(""),
            "ValidData": false
        }
    };
    struct FVector2D Dimensions = FVector2D(120, 144);
    FName DeclineAction = FName("Close");
    FText LocalPlayerActionsTitle = FText("Player Actions", Immutable);
    bool bLocalPlayerAlone = true;
    class UBlueprintGeneratedClass* Modified Power = "BlueprintGeneratedClass'FortniteGame/Content/UI/Foundation/Text/TextStyle-Base-XS-B-EnchantedBlue.TextStyle-Base-XS-B-EnchantedBlue_C'";
    struct FSlateBrush MutedBrush = {
        "ImageSize": FVector2D(32, 32),
        "Margin": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "TintColor": {
            "SpecifiedColor": FLinearColor(1, 1, 1, 0.6),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "ResourceObject": "Texture2D'FortniteGame/Content/Athena/HUD/Art/mic-muted.mic-muted'",
        "ResourceName": FName("None"),
        "UVRegion": bIsValid=0, Min=(X=0.000 Y=0.000), Max=(X=0.000 Y=0.000),
        "DrawAs": ESlateBrushDrawType::Image,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::NoImage,
        "bIsDynamicallyLoaded": false
    };
    struct FSlateBrush NotTalkingBrush = {
        "ImageSize": FVector2D(32, 32),
        "Margin": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "TintColor": {
            "SpecifiedColor": FLinearColor(1, 1, 1, 0.6),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "ResourceObject": "Texture2D'FortniteGame/Content/Athena/HUD/Art/mic-notalk.mic-notalk'",
        "ResourceName": FName("None"),
        "UVRegion": bIsValid=0, Min=(X=0.000 Y=0.000), Max=(X=0.000 Y=0.000),
        "DrawAs": ESlateBrushDrawType::Image,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::NoImage,
        "bIsDynamicallyLoaded": false
    };
    struct FSlateBrush TalkingBrush = {
        "ImageSize": FVector2D(32, 32),
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
        "ResourceObject": "Texture2D'FortniteGame/Content/Athena/HUD/Art/mic-active.mic-active'",
        "ResourceName": FName("None"),
        "UVRegion": bIsValid=0, Min=(X=0.000 Y=0.000), Max=(X=0.000 Y=0.000),
        "DrawAs": ESlateBrushDrawType::Image,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::NoImage,
        "bIsDynamicallyLoaded": false
    };
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};