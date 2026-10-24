class UFullPartyBarAthena_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/UI/Frontend/Parties/FullPartyBarAthena.FullPartyBarAthena_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "Fortitude",
            "PropertyName": FName("ToolTipWidget"),
            "FunctionName": FName("Get_Fortitude_ToolTipWidget_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_Fortitude_ToolTipWidget"),
                        "ArrayIndex": -1
                    }
                }
            },
            "Kind": EBindingKind::Function
        },
        {
            "ObjectName": "Offense",
            "PropertyName": FName("ToolTipWidget"),
            "FunctionName": FName("Get_Offense_ToolTipWidget_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_Offense_ToolTipWidget"),
                        "ArrayIndex": -1
                    }
                }
            },
            "Kind": EBindingKind::Function
        },
        {
            "ObjectName": "Resistance",
            "PropertyName": FName("ToolTipWidget"),
            "FunctionName": FName("Get_Resistance_ToolTipWidget_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_Resistance_ToolTipWidget"),
                        "ArrayIndex": -1
                    }
                }
            },
            "Kind": EBindingKind::Function
        },
        {
            "ObjectName": "Tech",
            "PropertyName": FName("ToolTipWidget"),
            "FunctionName": FName("Get_Tech_ToolTipWidget_0"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_Tech_ToolTipWidget"),
                        "ArrayIndex": -1
                    }
                }
            },
            "Kind": EBindingKind::Function
        }
    };
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/UI/Frontend/Parties/FullPartyBarAthena.WidgetArchetype");
    TArray<unknown> DynamicBindingObjects = {};
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/UI/Frontend/Parties/FullPartyBarAthena.FullPartyBarAthena_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/UI/Frontend/Parties/FullPartyBarAthena.FullPartyBarAthena_C:ExecuteUbergraph_FullPartyBarAthena'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FFortTeamMemberInfo EmptyPartyMember = {
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
    FName DeclineAction = FName("Cancel");
    FName Public = FName("Public");
    FName Friends = FName("Friends");
    FName Private = FName("Private");
    bool bCanEverPaint = false;

};