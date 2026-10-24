class UAthenaAircraft_CameraMode_C : public UFortCameraMode_AthenaAircraft
{
public:
    struct FInterpOffset ViewTargetSpaceViewOffset = {
        "SamplePoints": {
            {
                "ViewOffset": FVector(-45, 0, 300),
                "LargeBodyTypeAddtnlOffset": FVector(0, 0, 0),
                "PitchAngle": -90
            },
            {
                "ViewOffset": FVector(-45, 0, 300),
                "LargeBodyTypeAddtnlOffset": FVector(0, 0, 0),
                "PitchAngle": 0
            },
            {
                "ViewOffset": FVector(-45, 0, 300),
                "LargeBodyTypeAddtnlOffset": FVector(0, 0, 0),
                "PitchAngle": 90
            }
        }
    };
    struct FInterpOffset CameraSpaceViewOffset = {
        "SamplePoints": {
            {
                "ViewOffset": FVector(-2200, 0, 500),
                "LargeBodyTypeAddtnlOffset": FVector(0, 0, 0),
                "PitchAngle": -90
            },
            {
                "ViewOffset": FVector(-2000, 0, 500),
                "LargeBodyTypeAddtnlOffset": FVector(0, 0, 0),
                "PitchAngle": 0
            },
            {
                "ViewOffset": FVector(-1200, 0, 0),
                "LargeBodyTypeAddtnlOffset": FVector(0, 0, 0),
                "PitchAngle": 90
            }
        }
    };
};