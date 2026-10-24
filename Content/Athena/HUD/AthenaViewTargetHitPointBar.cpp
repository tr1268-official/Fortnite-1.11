class UAthenaViewTargetHitPointBar_C : public UCommonUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'FortniteGame/Content/Athena/HUD/AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C:WidgetTree'";
    bool bAllowTemplate = true;
    bool bValidTemplate = true;
    FSoftObjectPath TemplateAsset = FSoftObjectPath("/Game/Athena/HUD/AthenaViewTargetHitPointBar.WidgetArchetype");
    class UStructProperty* UberGraphFramePointerProperty = "StructProperty'FortniteGame/Content/Athena/HUD/AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C:UberGraphFrame'";
    class UFunction* UberGraphFunction = "Function'FortniteGame/Content/Athena/HUD/AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C:ExecuteUbergraph_AthenaViewTargetHitPointBar'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum ProgressBarType Type = ProgressBarType::NewEnumerator1;
    float Max Value = 1;
    struct FLinearColor Critical Color A = FLinearColor(0.982251, 0.130136, 0.090842, 1);
    struct FLinearColor Critical Color B = FLinearColor(0.651406, 0.030713, 0.027321, 1);
    struct FLinearColor Critical Color C = FLinearColor(0.930111, 0.174647, 0.141263, 1);
    float Last Value = 1000;
    float FadeUpdateRate = 0.05;
    struct FFortMultiSizeFont MultiFont = {
        "Font_XXS": {
            "FontObject": "Font'FortniteGame/Content/UI/Fonts/Burbank-DEPRECATED.Burbank-DEPRECATED'",
            "FontMaterial": nullptr,
            "OutlineSettings": {
                "OutlineSize": 0,
                "OutlineMaterial": nullptr,
                "OutlineColor": FLinearColor(0, 0, 0, 1),
                "bSeparateFillAlpha": false
            },
            "TypefaceFontName": FName("Small Black"),
            "Size": 9
        },
        "Font_XS": {
            "FontObject": "Font'FortniteGame/Content/UI/Fonts/Burbank-DEPRECATED.Burbank-DEPRECATED'",
            "FontMaterial": nullptr,
            "OutlineSettings": {
                "OutlineSize": 0,
                "OutlineMaterial": nullptr,
                "OutlineColor": FLinearColor(0, 0, 0, 1),
                "bSeparateFillAlpha": false
            },
            "TypefaceFontName": FName("Small Black"),
            "Size": 9
        },
        "Font_S": {
            "FontObject": "Font'FortniteGame/Content/UI/Fonts/Burbank-DEPRECATED.Burbank-DEPRECATED'",
            "FontMaterial": nullptr,
            "OutlineSettings": {
                "OutlineSize": 0,
                "OutlineMaterial": nullptr,
                "OutlineColor": FLinearColor(0, 0, 0, 1),
                "bSeparateFillAlpha": false
            },
            "TypefaceFontName": FName("Small Black"),
            "Size": 9
        },
        "Font_M": {
            "FontObject": "Font'FortniteGame/Content/UI/Fonts/Burbank-DEPRECATED.Burbank-DEPRECATED'",
            "FontMaterial": nullptr,
            "OutlineSettings": {
                "OutlineSize": 0,
                "OutlineMaterial": nullptr,
                "OutlineColor": FLinearColor(0, 0, 0, 1),
                "bSeparateFillAlpha": false
            },
            "TypefaceFontName": FName("Small Black"),
            "Size": 12
        },
        "Font_L": {
            "FontObject": "Font'FortniteGame/Content/UI/Fonts/Burbank-DEPRECATED.Burbank-DEPRECATED'",
            "FontMaterial": nullptr,
            "OutlineSettings": {
                "OutlineSize": 0,
                "OutlineMaterial": nullptr,
                "OutlineColor": FLinearColor(0, 0, 0, 1),
                "bSeparateFillAlpha": false
            },
            "TypefaceFontName": FName("Small Black"),
            "Size": 18
        },
        "Font_XL": {
            "FontObject": "Font'FortniteGame/Content/UI/Fonts/Burbank-DEPRECATED.Burbank-DEPRECATED'",
            "FontMaterial": nullptr,
            "OutlineSettings": {
                "OutlineSize": 0,
                "OutlineMaterial": nullptr,
                "OutlineColor": FLinearColor(0, 0, 0, 1),
                "bSeparateFillAlpha": false
            },
            "TypefaceFontName": FName("Big Regular Black"),
            "Size": 30
        }
    };
    bool bCanEverPaint = false;

};