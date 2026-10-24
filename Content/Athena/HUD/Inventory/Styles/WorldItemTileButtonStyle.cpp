class UWorldItemTileButtonStyle_C : public UButtonStyle-Base_C
{
public:
    struct FSlateBrush NormalBase = {
        "DrawAs": ESlateBrushDrawType::NoDrawType
    };
    struct FSlateBrush NormalHovered = {
        "ImageSize": FVector2D(16, 16),
        "Margin": {
            "Left": 0.49,
            "Top": 0.49,
            "Right": 0.49,
            "Bottom": 0.49
        },
        "ResourceObject": "MaterialInstanceConstant'FortniteGame/Content/UI/Foundation/Buttons/Materials/Slot/M_Slot_Pressed.M_Slot_Pressed'",
        "DrawAs": ESlateBrushDrawType::Box
    };
    struct FSlateBrush NormalPressed = {
        "ImageSize": FVector2D(16, 16),
        "Margin": {
            "Left": 0.49,
            "Top": 0.49,
            "Right": 0.49,
            "Bottom": 0.49
        },
        "ResourceObject": "MaterialInstanceConstant'FortniteGame/Content/UI/Foundation/Buttons/Materials/Slot/M_Slot_Pressed.M_Slot_Pressed'",
        "DrawAs": ESlateBrushDrawType::Box
    };
    struct FSlateBrush SelectedBase = {
        "ImageSize": FVector2D(16, 16),
        "Margin": {
            "Left": 0.49,
            "Top": 0.49,
            "Right": 0.49,
            "Bottom": 0.49
        },
        "ResourceObject": "MaterialInstanceConstant'FortniteGame/Content/UI/Foundation/Buttons/Materials/Slot/M_Slot_Selected.M_Slot_Selected'",
        "DrawAs": ESlateBrushDrawType::Box
    };
    struct FSlateBrush SelectedHovered = {
        "ImageSize": FVector2D(16, 16),
        "Margin": {
            "Left": 0.49,
            "Top": 0.49,
            "Right": 0.49,
            "Bottom": 0.49
        },
        "ResourceObject": "MaterialInstanceConstant'FortniteGame/Content/UI/Foundation/Buttons/Materials/Slot/M_Slot_Selected.M_Slot_Selected'",
        "DrawAs": ESlateBrushDrawType::Box
    };
    struct FSlateBrush SelectedPressed = {
        "ImageSize": FVector2D(16, 16),
        "Margin": {
            "Left": 0.49,
            "Top": 0.49,
            "Right": 0.49,
            "Bottom": 0.49
        },
        "ResourceObject": "MaterialInstanceConstant'FortniteGame/Content/UI/Foundation/Buttons/Materials/Slot/M_Slot_Selected.M_Slot_Selected'",
        "DrawAs": ESlateBrushDrawType::Box
    };
    struct FSlateBrush Disabled = {
        "DrawAs": ESlateBrushDrawType::NoDrawType
    };
    struct FMargin ButtonPadding = {
        "Left": 4,
        "Top": 4,
        "Right": 4,
        "Bottom": 4
    };
};