class UAthenaLobbyPlayerPanel_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "MenuActions",
            "PropertyName": FName("OnGetMenuContentEvent"),
            "FunctionName": FName("None"),
            "SourcePath": {
                "Segments": {}
            },
            "Kind": EBindingKind::Function
        }
    };
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/AthenaLobbyPlayerPanel.WidgetArchetype");
    struct FFortTeamMemberInfo TeamMemberInfo = {
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
    bool bCanEverTick = false;
    bool bCanEverPaint = false;

};