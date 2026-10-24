class ABP_AmbientLakeAudioActor_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'FortniteGame/Content/Athena/Sounds/Ambient/BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C:SimpleConstructionScript_0'";
    struct FSoundAttenuationSettings AttenuationOverride = {
        "bAttenuate": true,
        "bSpatialize": false,
        "bAttenuateWithLPF": false,
        "bEnableListenerFocus": false,
        "bEnableFocusInterpolation": false,
        "bEnableOcclusion": false,
        "bUseComplexCollisionForOcclusion": false,
        "bEnableReverbSend": true,
        "bApplyNormalizationToStereoSounds": false,
        "bEnableLogFrequencyScaling": false,
        "OmniRadius": 0,
        "StereoSpread": 0,
        "SpatializationAlgorithm": SPATIALIZATION_Default,
        "SpatializationPluginSettings": nullptr,
        "LPFRadiusMin": 3000,
        "LPFRadiusMax": 6000,
        "AbsorptionMethod": EAirAbsorptionMethod::Linear,
        "CustomLowpassAirAbsorptionCurve": {
            "EditorCurveData": {
                "PreInfinityExtrap": RCCE_Constant,
                "PostInfinityExtrap": RCCE_Constant,
                "DefaultValue": 3.4028235E+38,
                "Keys": {},
                "KeyHandlesToIndices": {}
            },
            "ExternalCurve": nullptr
        },
        "CustomHighpassAirAbsorptionCurve": {
            "EditorCurveData": {
                "PreInfinityExtrap": RCCE_Constant,
                "PostInfinityExtrap": RCCE_Constant,
                "DefaultValue": 3.4028235E+38,
                "Keys": {},
                "KeyHandlesToIndices": {}
            },
            "ExternalCurve": nullptr
        },
        "LPFFrequencyAtMin": 20000,
        "LPFFrequencyAtMax": 20000,
        "HPFFrequencyAtMin": 0,
        "HPFFrequencyAtMax": 0,
        "FocusAzimuth": 30,
        "NonFocusAzimuth": 60,
        "FocusDistanceScale": 1,
        "NonFocusDistanceScale": 1,
        "FocusPriorityScale": 1,
        "NonFocusPriorityScale": 1,
        "FocusVolumeAttenuation": 1,
        "NonFocusVolumeAttenuation": 1,
        "FocusAttackInterpSpeed": 1,
        "FocusReleaseInterpSpeed": 1,
        "OcclusionTraceChannel": ECC_Visibility,
        "OcclusionLowPassFilterFrequency": 20000,
        "OcclusionVolumeAttenuation": 1,
        "OcclusionInterpolationTime": 0.1,
        "OcclusionPluginSettings": nullptr,
        "ReverbSendMethod": EReverbSendMethod::Linear,
        "ReverbPluginSettings": nullptr,
        "ReverbWetLevelMin": 0.3,
        "ReverbWetLevelMax": 0.95,
        "ReverbDistanceMin": 400,
        "ReverbDistanceMax": 4000,
        "CustomReverbSendCurve": {
            "EditorCurveData": {
                "PreInfinityExtrap": RCCE_Constant,
                "PostInfinityExtrap": RCCE_Constant,
                "DefaultValue": 3.4028235E+38,
                "Keys": {},
                "KeyHandlesToIndices": {}
            },
            "ExternalCurve": nullptr
        },
        "ManualReverbSendLevel": 0.2,
        "DistanceAlgorithm": EAttenuationDistanceModel::Linear,
        "CustomAttenuationCurve": {
            "EditorCurveData": {
                "PreInfinityExtrap": RCCE_Constant,
                "PostInfinityExtrap": RCCE_Constant,
                "DefaultValue": 3.4028235E+38,
                "Keys": {},
                "KeyHandlesToIndices": {}
            },
            "ExternalCurve": nullptr
        },
        "AttenuationShape": EAttenuationShape::Box,
        "dBAttenuationAtMax": -60,
        "AttenuationShapeExtents": FVector(400, 0, 0),
        "ConeOffset": 0,
        "FalloffDistance": 3600
    };
    struct FVector AttenuationExtents = FVector(1000, 1000, 1000);
    float FalloffDistance = 1000;

};