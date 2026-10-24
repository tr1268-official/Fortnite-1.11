class UGE_Athena_DBNO_Start_C : public UGE_Map_Fortitude_To_Health_C
{
public:
    enum DurationPolicy = EGameplayEffectDurationType::Instant;
    TArray<FGameplayModifierInfo> Modifiers = {};
    TArray<struct FGameplayEffectExecutionDefinition> Executions = {
        {
            "CalculationClass": "Class'/Script/FortniteGame.FortHealing'",
            "PassedInTags": FGameplayTagContainer({}),
            "CalculationModifiers": {
                {
                    "CapturedAttribute": {
                        "AttributeToCapture": {
                            "AttributeName": "HealingSource",
                            "Attribute": "StructProperty'/Script/FortniteGame.FortHealthSet:HealingSource'",
                            "AttributeOwner": "Class'/Script/FortniteGame.FortHealthSet'"
                        },
                        "AttributeSource": EGameplayEffectAttributeCaptureSource::Source,
                        "bSnapshot": true
                    },
                    "ModifierOp": EGameplayModOp::Override,
                    "ModifierMagnitude": {
                        "MagnitudeCalculationType": EGameplayEffectMagnitudeCalculation::SetByCaller,
                        "ScalableFloatMagnitude": {
                            "Value": 0,
                            "Curve": {
                                "CurveTable": nullptr,
                                "RowName": FName("None")
                            }
                        },
                        "AttributeBasedMagnitude": {
                            "Coefficient": {
                                "Value": 1,
                                "Curve": {
                                    "CurveTable": nullptr,
                                    "RowName": FName("None")
                                }
                            },
                            "PreMultiplyAdditiveValue": {
                                "Value": 0,
                                "Curve": {
                                    "CurveTable": nullptr,
                                    "RowName": FName("None")
                                }
                            },
                            "PostMultiplyAdditiveValue": {
                                "Value": 0,
                                "Curve": {
                                    "CurveTable": nullptr,
                                    "RowName": FName("None")
                                }
                            },
                            "BackingAttribute": {
                                "AttributeToCapture": {
                                    "AttributeName": "",
                                    "Attribute": nullptr,
                                    "AttributeOwner": nullptr
                                },
                                "AttributeSource": EGameplayEffectAttributeCaptureSource::Source,
                                "bSnapshot": false
                            },
                            "AttributeCurve": {
                                "CurveTable": nullptr,
                                "RowName": FName("None")
                            },
                            "AttributeCalculationType": EAttributeBasedFloatCalculationType::AttributeMagnitude,
                            "FinalChannel": EGameplayModEvaluationChannel::Channel0,
                            "SourceTagFilter": FGameplayTagContainer({}),
                            "TargetTagFilter": FGameplayTagContainer({})
                        },
                        "CustomMagnitude": {
                            "CalculationClassMagnitude": nullptr,
                            "Coefficient": {
                                "Value": 1,
                                "Curve": {
                                    "CurveTable": nullptr,
                                    "RowName": FName("None")
                                }
                            },
                            "PreMultiplyAdditiveValue": {
                                "Value": 0,
                                "Curve": {
                                    "CurveTable": nullptr,
                                    "RowName": FName("None")
                                }
                            },
                            "PostMultiplyAdditiveValue": {
                                "Value": 0,
                                "Curve": {
                                    "CurveTable": nullptr,
                                    "RowName": FName("None")
                                }
                            },
                            "FinalLookupCurve": {
                                "CurveTable": nullptr,
                                "RowName": FName("None")
                            }
                        },
                        "SetByCallerMagnitude": {
                            "DataName": FName("InitialHeal"),
                            "DataTag": {
                                "TagName": FName("None")
                            }
                        }
                    },
                    "EvaluationChannelSettings": {
                        "Channel": EGameplayModEvaluationChannel::Channel0
                    },
                    "SourceTags": {
                        "RequireTags": FGameplayTagContainer({}),
                        "IgnoreTags": FGameplayTagContainer({})
                    },
                    "TargetTags": {
                        "RequireTags": FGameplayTagContainer({}),
                        "IgnoreTags": FGameplayTagContainer({})
                    }
                }
            },
            "ConditionalGameplayEffects": {}
        }
    };
};