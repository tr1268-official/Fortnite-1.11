class UGE_DanceStun_C : public UGameplayEffect
{
public:
    enum DurationPolicy = EGameplayEffectDurationType::HasDuration;
    struct FGameplayEffectModifierMagnitude DurationMagnitude = {
        "ScalableFloatMagnitude": {
            "Value": 1,
            "Curve": {
                "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                "RowName": FName("Default.DanceGrenade.Duration")
            }
        }
    };
    TArray<struct FGameplayModifierInfo> Modifiers = {
        {
            "Attribute": {
                "AttributeName": "MaxAcceleration",
                "Attribute": "StructProperty'/Script/FortniteGame.FortAdvancedMovementSet:MaxAcceleration'",
                "AttributeOwner": "Class'/Script/FortniteGame.FortAdvancedMovementSet'"
            },
            "ModifierOp": EGameplayModOp::Multiplicitive,
            "Magnitude": {
                "Value": 0,
                "Curve": {
                    "CurveTable": nullptr,
                    "RowName": FName("None")
                }
            },
            "ModifierMagnitude": {
                "MagnitudeCalculationType": EGameplayEffectMagnitudeCalculation::ScalableFloat,
                "ScalableFloatMagnitude": {
                    "Value": 1,
                    "Curve": {
                        "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                        "RowName": FName("Default.DanceGrenade.SpeedMultiplier")
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
                    "DataName": FName("None"),
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
        },
        {
            "Attribute": {
                "AttributeName": "JumpZVelocity",
                "Attribute": "StructProperty'/Script/FortniteGame.FortAdvancedMovementSet:JumpZVelocity'",
                "AttributeOwner": "Class'/Script/FortniteGame.FortAdvancedMovementSet'"
            },
            "ModifierOp": EGameplayModOp::Multiplicitive,
            "Magnitude": {
                "Value": 0,
                "Curve": {
                    "CurveTable": nullptr,
                    "RowName": FName("None")
                }
            },
            "ModifierMagnitude": {
                "MagnitudeCalculationType": EGameplayEffectMagnitudeCalculation::ScalableFloat,
                "ScalableFloatMagnitude": {
                    "Value": 1,
                    "Curve": {
                        "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                        "RowName": FName("Default.DanceGrenade.JumpMultiplier")
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
                    "DataName": FName("None"),
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
    };
    TArray<struct FGameplayEffectCue> GameplayCues = {
        {
            "MagnitudeAttribute": {
                "AttributeName": "",
                "Attribute": nullptr,
                "AttributeOwner": nullptr
            },
            "MinLevel": 0,
            "MaxLevel": 0,
            "GameplayCueTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("GameplayCue.Status.DanceStunned"))
            })
        }
    };
    struct FInheritedTagContainer InheritableOwnedTagsContainer = {
        "CombinedTags": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Gameplay.Action.Player.DanceStunned"))
        }),
        "Added": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Gameplay.Action.Player.DanceStunned"))
        })
    };
};